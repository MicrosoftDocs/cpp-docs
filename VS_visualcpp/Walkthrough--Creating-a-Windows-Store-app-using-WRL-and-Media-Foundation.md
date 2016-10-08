---
title: "Walkthrough: Creating a Windows Store app using WRL and Media Foundation"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: Walkthrough: Creating a Windows Store app using WRL and Media Foundation
ms.assetid: 0336c550-fbeb-4dc4-aa9b-660f9fc45382
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Walkthrough: Creating a Windows Store app using WRL and Media Foundation
<?xml version="1.0" encoding="utf-8"?>
<developerWalkthroughDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Learn how to use the <token>cppwrl</token> (<token>cppwrl_short</token>) to create a <token>win8_appname_long</token> app that uses <externalLink><linkText>Microsoft Media Foundation</linkText><linkUri>http://msdn.microsoft.com/library/windows/apps/ms694197</linkUri></externalLink>.</para>
    <para>This example creates a custom Media Foundation transform that applies a grayscale effect to images that are captured from a webcam. The app uses C++ to define the custom transform and C# to use the component to transform the captured images.</para>
    <alert class="note">
      <para>Instead of C#, you can also use JavaScript, Visual Basic, or C++ to consume the custom transform component.</para>
    </alert>
    <para>In most cases, you can use <token>cppwrt</token> (<token>cppwrt_short</token>) to create <token>wrt</token> components. (For more information, see <link xlink:href="3f6abf92-4e5e-4ed8-8e11-f9252380d30a">Visual C++ Language Reference (C++/CX)</link>.) However, sometimes you have to use the <token>cppwrl_short</token>. For example, when you create a media extension for Microsoft Media Foundation, you must create a component that implements both COM and <token>wrt</token> interfaces. Because <token>cppwrt_short</token> can only create <token>wrt</token> objects, to create a media extension you must use the <token>cppwrl_short</token> because it enables the implementation of both COM and <token>wrt</token> interfaces.</para>
    <alert class="note">
      <para>Although this code example is long, it demonstrates the minimum that's required to create a useful Media Foundation transform. You can use it as a starting point for your own custom transform. This example is adapted from the <externalLink><linkText>Media extensions sample</linkText><linkUri>http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096</linkUri></externalLink>, which uses media extensions to apply effects to video, decode video, and create scheme handlers that produce media streams.</para>
    </alert>
  </introduction>
  <prerequisites>
    <content>
      <list class="bullet">
        <listItem>
          <para>Experience with the <externalLink><linkText>Windows Runtime</linkText><linkUri>http://msdn.microsoft.com/library/windows/apps/br211377.aspx</linkUri></externalLink>.</para>
        </listItem>
        <listItem>
          <para>Experience with COM.</para>
        </listItem>
        <listItem>
          <para>A webcam.</para>
        </listItem>
      </list>
    </content>
  </prerequisites>
  <section>
    <title>Key points</title>
    <content>
      <list class="bullet">
        <listItem>
          <para>To create a custom Media Foundation component, use a Microsoft Interface Definition Language (MIDL) definition file to define an interface, implement that interface, and then make it <?Comment TP: Yes, it’s a word. 2012-12-20T15:26:00Z  Id='62?><?Comment MO: And a lovely one it is, too. 2012-12-20T15:50:00Z  Id='63?>activatable<?CommentEnd Id='62'
    ?><?CommentEnd Id='63'
    ?> from other components.</para>
        </listItem>
        <listItem>
          <para>T<?Comment TP: TODO: Add links to these after Windows UA publishes documentation… 2012-12-20T15:26:00Z  Id='64?>he <?CommentEnd Id='64'
    ?><unmanagedCodeEntityReference>namespace</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>runtimeclass</unmanagedCodeEntityReference> attributes, and the <unmanagedCodeEntityReference>NTDDI_WIN8</unmanagedCodeEntityReference> <legacyLink xlink:href="66ac5cf3-2230-44fd-aaf6-8013e4a4ae81">version</legacyLink> attribute value are important parts of the MIDL definition for a Media Foundation component that uses <token>cppwrl_short</token>.</para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="d52f9d1a-98e5-41f2-a143-8fb629dd0727">Microsoft::WRL::RuntimeClass</legacyLink> is the base class for the custom Media Foundation component. The <legacyLink xlink:href="d380712d-672e-4ea9-b7c5-cf9fa7dbb770">Microsoft::WRL::RuntimeClassType::WinRtClassicComMix</legacyLink> enum value, which is provided as a template argument, marks the class for use both as a <token>wrt</token> class and as a classic COM runtime class.</para>
        </listItem>
        <listItem>
          <para>The <legacyLink xlink:href="ff390b26-58cc-424f-87ac-1fe3cc692b59">InspectableClass</legacyLink> macro implements basic COM functionality such as reference counting and the <unmanagedCodeEntityReference>QueryInterface</unmanagedCodeEntityReference> method, and sets the runtime class name and trust level.</para>
        </listItem>
        <listItem>
          <para>Use the Microsoft::WRL::"Module class" to implement DLL entry-point functions such as <externalLink><linkText>DllGetActivationFactory</linkText><linkUri>http://msdn.microsoft.com/library/br205771.aspx</linkUri></externalLink>, <externalLink><linkText>DllCanUnloadNow</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690368(v=vs.85).aspx</linkUri></externalLink>, and <externalLink><linkText>DllGetClassObject</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680760(v=vs.85).aspx</linkUri></externalLink>.</para>
        </listItem>
        <listItem>
          <para>Link your component DLL to runtimeobject.lib. Also specify <legacyLink xlink:href="ecfadce8-3a3f-40cc-bb01-b4731f8d2fcb">/WINMD</legacyLink> on the linker line to generate Windows metadata.</para>
        </listItem>
        <listItem>
          <para>Use project references to make <token>cppwrl_short</token> components accessible to <token>win8_appname_long</token> apps.</para>
        </listItem>
      </list>
    </content>
  </section>
  <procedure>
    <title>To use the <token>cppwrl_short</token> to create the Media Foundation grayscale transform component</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Visual Studio, create a <ui>Blank Solution</ui> project. Name the project, for example, <userInput>MediaCapture</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>DLL (Windows Store apps)</ui> project to the solution. Name the project, for example, <userInput>GrayscaleTransform</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>Midl File (.idl)</ui> file to the project. Name the file, for example, <userInput>GrayscaleTransform.idl</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add this code to GrayscaleTransform.idl.</para>
          <codeReference>wrl-media-capture#1</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Use the following code to replace the contents of pch.h.</para>
          <codeReference>wrl-media-capture#2</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Add a new header file to the project, <?Comment TP:  PAGE \# "'Page: '#''" NB: Not “for example”. 2012-12-20T15:26:00Z  Id='81?>name it <?CommentEnd Id='81'
    ?><userInput>BufferLock.h</userInput>, and then add this code:</para>
          <codeReference>wrl-media-capture#3</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>GrayscaleTransform.h is not used in this example. You can remove it from the project if you want to.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Use the following code to replace the contents of GrayscaleTransform.cpp.</para>
          <codeReference>wrl-media-capture#4</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Add a new module-definition file to the project, <?Comment TP:  PAGE \# "'Page: '#''" NB: Not “for example”. 2012-12-20T15:26:00Z  Id='99?>name it <?CommentEnd Id='99'
    ?><userInput>GrayscaleTransform.def</userInput>, and then add this code:</para>
          <codeReference>wrl-media-capture#5</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Use the following code to replace the contents of dllmain.cpp.</para>
          <codeReference>wrl-media-capture#6</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the project’s <ui>Property Pages</ui> dialog box, set the following <ui>Linker</ui> properties.</para>
          <procedure>
            <title />
            <steps class="ordered">
              <step>
                <content>
                  <para>Under <ui>Input</ui>, for the <ui>Module Definition File</ui>, specify <userInput>GrayScaleTransform.def</userInput>.</para>
                </content>
              </step>
              <step>
                <content>
                  <para>Also under <ui>Input</ui>, add <userInput>runtimeobject.lib</userInput>, <userInput>mfuuid.lib</userInput>, and <userInput>mfplatf.lib</userInput> to the <ui>Additional Dependencies</ui> property.</para>
                </content>
              </step>
              <step>
                <content>
                  <para>Under <ui>Windows Metadata</ui>, set <ui>Generate Windows Metadata</ui> to <ui>Yes (/WINMD)</ui>.</para>
                </content>
              </step>
            </steps>
          </procedure>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To use the <token>cppwrl_short</token> the custom Media Foundation component from a C# app</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Add a new <ui>C# Blank App (XAML)</ui> project to the <userInput>MediaCapture</userInput> solution. Name the project, for example, <userInput>MediaCapture</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In the <ui>MediaCapture</ui> project, add a reference to the <userInput>GrayscaleTransform</userInput> project. To learn how, see <link xlink:href="1aabb520-99b0-46c6-9368-21b4d84793eb">How to: Add or Remove References By Using the Reference Manager</link>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In Package.appxmanifest, on the <ui>Capabilities</ui> tab, select <ui>Microphone</ui> and <ui>Webcam</ui>. Both capabilities are required to capture photos from the webcam.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In MainPage.xaml, add this code to the root <externalLink><linkText>Grid</linkText><linkUri>http://msdn.microsoft.com/library/windows/apps/xaml/windows.ui.xaml.controls.grid.aspx</linkUri></externalLink> element:</para>
          <codeReference>wrl-media-capture#7</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Use the following code to replace the contents of MainPage.xaml.cs.</para>
          <codeReference>wrl-media-capture#8</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <section>
    <content>
      <para>The following illustration shows the MediaCapture app.</para>
      <mediaLink>
        <image xlink:href="9468bede-737e-4347-be4d-6e79d3181d50" />
      </mediaLink>
    </content>
  </section>
  <nextSteps>
    <content>
      <para>The example shows how to capture photos from the default webcam one at a time. The <externalLink><linkText>Media extensions sample</linkText><linkUri>http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096</linkUri></externalLink> does more. It demonstrates how to enumerate webcam devices and work with local scheme handlers, and demonstrates additional media effects that work on both individual photos and streams of video.</para>
    </content>
  </nextSteps>
  <relatedTopics>
    <link xlink:href="b915afce-553b-44a7-b8dc-0ab601758eb0">Windows Runtime C++ Template Library</link>
    <externalLink>
      <linkText>Microsoft Media Foundation</linkText>
      <linkUri>http://msdn.microsoft.com/library/windows/apps/ms694197</linkUri>
    </externalLink>
    <externalLink>
      <linkText>Media extensions sample</linkText>
      <linkUri>http://code.msdn.microsoft.com/windowsapps/Media-extensions-sample-7b466096</linkUri>
    </externalLink>
  </relatedTopics>
</developerWalkthroughDocument>