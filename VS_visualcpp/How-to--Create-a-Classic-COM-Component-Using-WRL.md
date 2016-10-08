---
title: "How to: Create a Classic COM Component Using WRL"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 5efe7690-90d5-4c3c-9e53-11a14cefcb19
caps.latest.revision: 3
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
# How to: Create a Classic COM Component Using WRL
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>You can use the <token>cppwrl</token> (<token>cppwrl_short</token>) to create basic classic COM components for use in desktop apps, in addition to using it for <token>win8_appstore_long</token> apps. For the creation of COM components, the <token>cppwrl_short</token> may require less code than the ATL. For information about the subset of COM that the <token>cppwrl_short</token> supports, see <link xlink:href="b915afce-553b-44a7-b8dc-0ab601758eb0">Windows Runtime C++ Template Library (WRL)</link>.</para>
    <para>This document shows how to use the <token>cppwrl_short</token> to create a basic COM component. Although you can use the deployment mechanism that best fits your needs, this document also shows a basic way to register and consume the COM component from a desktop app.</para>
  </introduction>
  <procedure>
    <title>To use the <token>cppwrl_short</token> to create a basic classic COM component</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Visual Studio, create a <ui>Blank Solution</ui> project. Name the project, <?Comment MO: I used this throughout. Is it too goofy? If so, perhaps add a sentence to the intro, or maybe just revert if you think most users will understand that these names are just examples. 2012-10-17T12:39:00Z  Id='66?>for example<?CommentEnd Id='66'
    ?>, <userInput>WRLClassicCOM</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>Win32 Project</ui> to the solution. Name the project, for example, <userInput>CalculatorComponent</userInput>. On the <ui>Application Settings</ui> tab, select <ui>DLL</ui>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>Midl File (.idl)</ui> file to the project. Name the file, for example, <userInput>CalculatorComponent.idl</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add this code to CalculatorComponent.idl:</para>
          <codeReference>wrl-classic-com-component#1</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In CalculatorComponent.cpp, define the <unmanagedCodeEntityReference>CalculatorComponent</unmanagedCodeEntityReference> class. The <unmanagedCodeEntityReference>CalculatorComponent</unmanagedCodeEntityReference> class inherits from <legacyLink xlink:href="d52f9d1a-98e5-41f2-a143-8fb629dd0727">Microsoft::WRL::RuntimeClass</legacyLink>. <legacyLink xlink:href="7098d605-bd14-4d51-82f4-3def8296a938">Microsoft::WRL::RuntimeClassFlags&lt;ClassicCom&gt;</legacyLink> specifies that the class derives from <externalLink><linkText><?Comment TP: Mark, unless there’s a better way to link, can you please add the fwlink (one may exist). TheSearch.MSHKeywordAfor the target is “com.iunknown”.Or, are we just using plain links with the en-us preserved? If so, just let me know 2012-10-17T12:39:00Z  Id='77?>IUnknown<?CommentEnd Id='77'
    ?></linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680509(v=vs.85).aspx</linkUri></externalLink> and not <externalLink><linkText>IInspectable</linkText><linkUri>http://msdn.microsoft.com/library/br205821(v=vs.85).aspx</linkUri></externalLink>. (<unmanagedCodeEntityReference>IInspectable</unmanagedCodeEntityReference> is available only to <token>win8_appstore_short</token> app components.) <unmanagedCodeEntityReference><?Comment TP: TODO: Create ref topic &amp; link to it here. 2012-10-17T12:39:00Z  Id='78?>CoCreatableClass<?CommentEnd Id='78'
    ?></unmanagedCodeEntityReference> creates a factory for the class that can be used with functions such as <externalLink><linkText>CoCreateInstance</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686615(v=vs.85).aspx</linkUri></externalLink>.</para>
          <codeReference>wrl-classic-com-component#2</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Use the following code to replace the code in dllmain.cpp. This file defines the DLL export functions. These functions use the <legacyLink xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Microsoft::WRL::Module</legacyLink> class to manage the class factories for the module.</para>
          <codeReference>wrl-classic-com-component#3</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>Module-Definition File (.def)</ui> file to the project. Name the file, for example, <userInput>CalculatorComponent.def</userInput>. This file gives the linker the names of the functions to be exported.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add this code to CalculatorComponent.def:</para>
          <codeReference>wrl-classic-com-component#4</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Add runtimeobject.lib to the linker line. To learn how, see <link xlink:href="dc5d2b1c-2487-41fa-aa71-ad1e0647958b">.Lib Files as Linker Input</link>.</para>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To consume the COM component from a desktop app</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Register the COM component with the Windows Registry. To do so, create a registration entries file, name it <userInput>RegScript.reg</userInput>, and add the following text. Replace <placeholder>&lt;dll-path&gt;</placeholder> with the path of your DLL—for example, <userInput>C:\\temp\\WRLClassicCOM\\Debug\\CalculatorComponent.dll</userInput>.</para>
          <codeReference>wrl-classic-com-component#5</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Run RegScript.reg or add it to your project’s <?Comment MO: Not sure why this has the UI tag? 2012-10-17T12:39:00Z  Id='111?><ui>Post-Build Event</ui><?CommentEnd Id='111'
    ?>. For more information, see <link xlink:href="d49b2c57-24bf-4fb2-8351-5c4b6cca938f">Pre-build Event/Post-build Event Command Line Dialog Box</link>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a <ui>Win32 Console Application</ui> project to the solution. Name the project, for example, <userInput>Calculator</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Use this code to replace the contents of Calculator.cpp:</para>
          <codeReference>wrl-classic-com-component#6</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <robustProgramming>
    <content>
      <para>This document uses standard COM functions to demonstrate that you can use the <token>cppwrl_short</token> to author a COM component and make it available to any COM-enabled technology. You can also use <token>cppwrl_short</token> types such as <legacyLink xlink:href="a6551902-6819-478a-8df7-b6f312ab1fb0">Microsoft::WRL::ComPtr</legacyLink> in your desktop app to manage the lifetime of COM and other objects. The following code uses the <token>cppwrl_short</token> to manage the lifetime of the <unmanagedCodeEntityReference>ICalculatorComponent</unmanagedCodeEntityReference> pointer. The <unmanagedCodeEntityReference>CoInitializeWrapper</unmanagedCodeEntityReference> class is an RAII wrapper that guarantees that the COM library is freed and also guarantees that the lifetime of the COM library outlives the <unmanagedCodeEntityReference>ComPtr</unmanagedCodeEntityReference> smart pointer object.</para>
      <codeReference>wrl-classic-com-component#7</codeReference>
    </content>
  </robustProgramming>
  <relatedTopics>
    <link xlink:href="b915afce-553b-44a7-b8dc-0ab601758eb0">Windows Runtime C++ Template Library (WRL)</link>
  </relatedTopics>
</developerHowToDocument>