---
title: "Windows Runtime C++ Template Library (WRL)"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: b915afce-553b-44a7-b8dc-0ab601758eb0
caps.latest.revision: 29
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Windows Runtime C++ Template Library (WRL)
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <token>cppwrl</token> (<token>cppwrl_short</token>) is a template library that provides a low-level way to author and use <token>wrt</token> components.</para>
  </introduction>
  <section>
    <title>Benefits</title>
    <content>
      <para>The <token>cppwrl_short</token> enables you to more easily implement and consume Component Object Model (COM) components. It provides housekeeping techniques like reference-counting to manage the lifetime of objects and testing <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> values to determine whether an operation succeeded or failed. To successfully use the <token>cppwrl_short</token>, you must carefully follow these rules and techniques.</para>
      <para>The <token>cppwrt</token> (<token>cppwrt_short</token>) is a high-level, language-based way to use <token>wrt</token> components. Both the <token>cppwrl_short</token> and <token>cppwrt_short</token> simplify the writing of code for the <token>wrt</token> by automatically performing housekeeping tasks on your behalf.</para>
      <para>The <token>cppwrl_short</token> and <token>cppwrt_short</token> provide different benefits. Here are some reasons you might want to use the <token>cppwrl_short</token> instead of <token>cppwrt_short</token>:</para>
      <list class="bullet">
        <listItem>
          <para>
            <token>cppwrl_short</token> adds little abstraction over the <token>wrt</token> Application Binary Interface (ABI), giving you the ability to control the underlying code to better create or consume <token>wrt</token> APIs.</para>
        </listItem>
        <listItem>
          <para>
            <token>cppwrt_short</token> represents COM <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> values as exceptions. If you’ve inherited a code base that uses COM, or one that doesn’t use exceptions, you might find that the <token>cppwrl_short</token> is a more natural way to work with the <token>wrt</token> because you don't have to use exceptions.</para>
          <alert class="note">
            <para>The <token>cppwrl_short</token> uses <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> values and does not throw exceptions. In addition, the <token>cppwrl_short</token> uses smart pointers and the RAII pattern to help guarantee that objects are destroyed correctly when your application code throws an exception. For more info about smart pointers and RAII, see <link xlink:href="909ef870-904c-49b6-b8cd-e9d0b7dc9435">Smart Pointers (Modern C++)</link> and <link xlink:href="f86b484e-5a27-4c3b-a92a-dfaa5dd6d93a">Objects Own Resources (RAII)</link>. </para>
          </alert>
        </listItem>
        <listItem>
          <para>The purpose and design of the <token>cppwrl_short</token> is inspired by the Active Template Library (ATL), which is a set of template-based C++ classes that simplify the programming of COM objects. Because <token>cppwrl_short</token> uses standard C++ to wrap the <token>wrt</token>, you can more easily port and interact with many existing COM components written in ATL to the <token>wrt</token>. If you already know ATL, you might find that <token>cppwrl_short</token> programming is easier.</para>
        </listItem>
      </list>
    </content>
  </section>
  <section DoNotNumber="false">
    <title>Getting Started</title>
    <content>
      <para>Here are some resources that can help you get working with the <token>cppwrl_short</token> right away.</para>
      <definitionTable>
        <definedTerm>
          <externalLink>
            <linkText>The Windows Runtime Library (WRL)</linkText>
            <linkUri>http://channel9.msdn.com/Events/Windows-Camp/Developing-Windows-8-Metro-style-apps-in-Cpp/The-Windows-Runtime-Library-WRL-</linkUri>
          </externalLink>
        </definedTerm>
        <definition>
          <para>In this Channel 9 video, learn more about how the <token>cppwrl_short</token> helps you write <token>win8_appname_long</token> apps and how to author and consume <token>wrt</token> components.</para>
        </definition>
        <definedTerm>
          <link xlink:href="54828f02-6af3-45d1-b965-d0104442f8d5">How to: Activate and use a Windows Runtime Component (WRL)</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to initialize the <token>wrt</token> and activate and use a <token>wrt</token> component.</para>
        </definition>
        <definedTerm>
          <link xlink:href="02173eae-731b-49bc-b412-f1f69388b99d">How to: Complete Async Operations (WRL)</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to start asynchronous operations and perform work when the operations complete.</para>
        </definition>
        <definedTerm>
          <link xlink:href="1c77543f-7b0c-4a94-93bf-e3225885ed76">How to: Handle Events (WRL)</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to subscribe to and handle the events of a <token>wrt</token> object.</para>
        </definition>
        <definedTerm>
          <link xlink:href="6e3f0986-7905-4f94-90e5-22c2ebfc8cd0">Walkthrough: Creating a Basic Windows Runtime Component (WRL)</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to create a basic <token>wrt</token> component that adds two numbers. Also demonstrates how to raise events and use the component from a <token>win8_appname_long</token> app that uses JavaScript.</para>
        </definition>
        <definedTerm>
          <link xlink:href="0336c550-fbeb-4dc4-aa9b-660f9fc45382">Walkthrough: Creating a Windows Store app using WRL and Media Foundation</link>
        </definedTerm>
        <definition>
          <para>Learn how to create a <token>win8_appname_long</token> app that uses <externalLink><linkText>Microsoft Media Foundation</linkText><linkUri>http://msdn.microsoft.com/library/windows/apps/ms694197</linkUri></externalLink>.</para>
        </definition>
        <definedTerm>
          <link xlink:href="5efe7690-90d5-4c3c-9e53-11a14cefcb19">How to: Create a Classic COM Component Using WRL</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to create a basic COM component and a basic way to register and consume the COM component from a desktop app.</para>
        </definition>
        <definedTerm>
          <link xlink:href="1a9fa011-0cee-4abf-bf83-49adf53ff906">How to: Instantiate WRL Components Directly</link>
        </definedTerm>
        <definition>
          <para>Learn how to use the <legacyLink xlink:href="66704143-df99-4a95-904d-ed99607e1034">Microsoft::WRL::Make</legacyLink> and <legacyLink xlink:href="71ceeb12-d2a2-4317-b010-3dcde1b39467">Microsoft::WRL::Details::MakeAndInitialize</legacyLink> functions to instantiate a component from the module that defines it.</para>
        </definition>
        <definedTerm>
          <link xlink:href="4be8ba11-c223-44ad-9256-7e1edae9a7bc">How to: Use winmdidl.exe to create IDL files from windows metadata</link>
        </definedTerm>
        <definition>
          <para>Shows how to consume custom Windows Runtime components from WRL by creating an IDL file from the .winmd metadata.</para>
        </definition>
        <definedTerm>
          <link xlink:href="e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3">Walkthrough: Connecting Using Tasks and XML HTTP Request (IXHR2)</link>
        </definedTerm>
        <definition>
          <para>Shows how to use the <legacyLink xlink:href="BBC11C4A-AECF-4D6D-8275-3E852E309908">IXMLHTTPRequest2</legacyLink> and <legacyLink xlink:href="AA4B3F4C-6E28-458B-BE25-6CCE8865FC71">IXMLHTTPRequest2Callback</legacyLink> interfaces together with tasks to send HTTP GET and POST requests to a web service in a <token>win8_appname_long</token> app.</para>
        </definition>
        <definedTerm>
          <externalLink>
            <linkText>Bing Maps Trip Optimizer sample</linkText>
            <linkUri>http://code.msdn.microsoft.com/Bing-Maps-trip-optimizer-c4e037f7</linkUri>
          </externalLink>
        </definedTerm>
        <definition>
          <para>Uses the <unmanagedCodeEntityReference>HttpRequest</unmanagedCodeEntityReference> class that's defined in <link xlink:href="e8e12d46-604c-42a7-abfd-b1d1bb2ed6b3">Walkthrough: Connecting Using Tasks and XML HTTP Request (IXHR2)</link> in the context of a complete <token>win8_appname_long</token> app.</para>
        </definition>
        <definedTerm>
          <externalLink>
            <linkText>Creating a Windows Runtime DLL component with C++ sample</linkText>
            <linkUri>http://code.msdn.microsoft.com/windowsapps/Creating-a-Windows-Runtime-6c399797</linkUri>
          </externalLink>
        </definedTerm>
        <definition>
          <para>Shows how to use the <token>cppwrl_short</token> to create an in-process DLL component and consume it from C++/CX, JavaScript, and C#.</para>
        </definition>
        <definedTerm>
          <externalLink>
            <linkText>DirectX marble maze game sample</linkText>
            <linkUri>http://code.msdn.microsoft.com/windowsapps/DirectX-Marble-Maze-Game-e4806345</linkUri>
          </externalLink>
        </definedTerm>
        <definition>
          <para>Demonstrates how to use the <token>cppwrl_short</token> to manage the lifetime of COM components such as DirectX and Media Foundation in the context of a complete 3-D game.</para>
        </definition>
        <definedTerm>
          <externalLink>
            <linkText>Sending toast notifications from desktop apps sample</linkText>
            <linkUri>http://code.msdn.microsoft.com/windowsdesktop/Sending-toast-notifications-71e230a2</linkUri>
          </externalLink>
        </definedTerm>
        <definition>
          <para>Demonstrates how to use the <token>cppwrl_short</token> to work with toast notifications from a desktop app.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <section>
    <title>
      <token>cppwrl_short</token> Compared to ATL</title>
    <content>
      <para>
        <token>cppwrl_short</token> resembles the Active Template Library (ATL) because you can use it to create small, fast COM objects. <token>cppwrl_short</token> and ATL also share concepts such as definition of objects in modules, explicit registration of interfaces, and open creation of objects by using factories. You might be comfortable with <token>cppwrl_short</token> if you're familiar with ATL.</para>
      <para>
        <token>cppwrl_short</token> supports the COM functionality that is required for <token>win8_appname_long</token> apps. Therefore, it differs from the ATL because it omits direct support for COM features such as: </para>
      <list class="bullet">
        <listItem>
          <para>aggregation</para>
        </listItem>
        <listItem>
          <para>stock implementations</para>
        </listItem>
        <listItem>
          <para>dual interfaces (<unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference>)</para>
        </listItem>
        <listItem>
          <para>standard enumerator interfaces</para>
        </listItem>
        <listItem>
          <para>connection points</para>
        </listItem>
        <listItem>
          <para>tear-off interfaces</para>
        </listItem>
        <listItem>
          <para>OLE embedding</para>
        </listItem>
        <listItem>
          <para>ActiveX controls</para>
        </listItem>
        <listItem>
          <para>COM+</para>
        </listItem>
      </list>
    </content>
  </section>
  <section>
    <title>Concepts</title>
    <content>
      <para>
        <token>cppwrl_short</token> provides types that represent a few basic concepts. The following sections describe those types.</para>
    </content>
    <sections>
      <section>
        <title>ComPtr</title>
        <content>
          <para>
            <legacyLink xlink:href="a6551902-6819-478a-8df7-b6f312ab1fb0">ComPtr</legacyLink> is a <newTerm>smart pointer</newTerm> type that represents the interface that's specified by the template parameter. Use <unmanagedCodeEntityReference>ComPtr</unmanagedCodeEntityReference> to declare a variable that can access the members of an object that's derived from the interface. <unmanagedCodeEntityReference>ComPtr</unmanagedCodeEntityReference> automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.</para>
        </content>
      </section>
      <section>
        <title>RuntimeClass</title>
        <content>
          <para>
            <legacyLink xlink:href="d52f9d1a-98e5-41f2-a143-8fb629dd0727">RuntimeClass</legacyLink> represents an instantiated class that inherits a set of specified interfaces. A <unmanagedCodeEntityReference>RuntimeClass</unmanagedCodeEntityReference> object can provide a combination of support for <?Comment MO: ?? Something's missing. Should it be &quot;...COM, or weak references&quot;? 2012-06-19T16:13:00Z  Id='1?>one or more <token>wrt</token> COM interfaces, or a weak reference<?CommentEnd Id='1'
    ?> to a component.</para>
        </content>
      </section>
      <section>
        <title>Module</title>
        <content>
          <para>
            <legacyLink xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module</legacyLink> represents a collection of related objects. A <unmanagedCodeEntityReference>Module</unmanagedCodeEntityReference> object manages class factories, which create objects, and registration, which enables other applications to use an object.</para>
        </content>
      </section>
      <section>
        <title>Callback</title>
        <content>
          <para>The <legacyLink xlink:href="afb15d25-3230-44f7-b321-e17c54872943">Callback</legacyLink> function creates an object whose member function is an event handler (a callback method). Use the <unmanagedCodeEntityReference>Callback</unmanagedCodeEntityReference> function to write asynchronous operations.</para>
        </content>
      </section>
      <section>
        <title>EventSource</title>
        <content>
          <para>
            <legacyLink xlink:href="91f1c072-6af4-44e6-b6d8-ac6d0c688dde">EventSource</legacyLink> is used to manage <newTerm>delegate</newTerm> event handlers. Use <token>cppwrl_short</token> to implement a delegate, and use <unmanagedCodeEntityReference>EventSource</unmanagedCodeEntityReference> to add, remove, and invoke delegates.</para>
        </content>
      </section>
      <section>
        <title>AsyncBase</title>
        <content>
          <para>
            <legacyLink xlink:href="64259b9b-f427-4ffd-a611-e7a2f82362b2">AsyncBase</legacyLink> provides virtual methods that represent the <token>wrt</token> asynchronous programming model. Override the members in this class to create a custom class that can start, stop, or check the progress of an asynchronous operation.</para>
        </content>
      </section>
      <section>
        <title>FtmBase</title>
        <content>
          <para>
            <legacyLink xlink:href="275f3b71-2975-4f92-89e7-d351e96496df">FtmBase</legacyLink> represents a free-threaded marshaler object. <unmanagedCodeEntityReference>FtmBase</unmanagedCodeEntityReference> creates a global interface table (GIT), and helps manage marshaling and proxy objects.</para>
        </content>
      </section>
      <section>
        <title>WeakRef</title>
        <content>
          <para>
            <legacyLink xlink:href="572be703-c641-496c-8af5-ad6164670ba1">WeakRef</legacyLink> is a smart-pointer type that represents a <newTerm>weak reference</newTerm>, which references an object that might or might not be accessible. A <unmanagedCodeEntityReference>WeakRef</unmanagedCodeEntityReference> object can be used by only the <token>wrt</token>, and not by classic COM.</para>
          <para>A <unmanagedCodeEntityReference>WeakRef</unmanagedCodeEntityReference> object typically represents an object whose existence is controlled by an external thread or application. For example, a <unmanagedCodeEntityReference>WeakRef</unmanagedCodeEntityReference> object can reference a file object. When the file is open, the <unmanagedCodeEntityReference>WeakRef</unmanagedCodeEntityReference> is valid and the referenced file is accessible. But when the file is closed, the <unmanagedCodeEntityReference>WeakRef</unmanagedCodeEntityReference> is invalid and the file is not accessible.</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Related Topics</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <tbody>
          <tr>
            <TD>
              <para>
                <link xlink:href="628b0852-89e5-44f8-bf58-a09762bda15c">Class Library Project Template (WRL)</link>
              </para>
            </TD>
            <TD>
              <para>Describes how to access the WRL Class Library project template. This template helps simplify the task of using Visual Studio to create <token>wrt</token> components.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="7367bacf-6b7c-4ecd-a0ce-a662db46fc66">Key APIs by Category (WRL)</link>
              </para>
            </TD>
            <TD>
              <para>Highlights the primary <token>cppwrl_short</token> types, functions, and macros.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="5779dae8-8634-4c77-aa8b-9a348692a2bb">Reference (WRL)</link>
              </para>
            </TD>
            <TD>
              <para>Contains reference information for the <token>cppwrl_short</token>.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <externalLink>
                  <linkText>Quick Reference (Windows Runtime and Visual C++)</linkText>
                  <linkUri>http://go.microsoft.com/fwlink/?LinkId=229180</linkUri>
                </externalLink>
              </para>
            </TD>
            <TD>
              <para>Briefly describes the <token>cppwrt_short</token> features that support the <token>wrt</token>.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <externalLink>
                  <linkText>Using Windows Runtime Components in Visual C++</linkText>
                  <linkUri>http://go.microsoft.com/fwlink/?LinkId=229155</linkUri>
                </externalLink>
              </para>
            </TD>
            <TD>
              <para>Shows how to use <token>cppwrt_short</token> to create a basic <token>wrt</token> component.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>