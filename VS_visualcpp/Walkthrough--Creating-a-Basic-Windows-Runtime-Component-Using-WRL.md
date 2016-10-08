---
title: "Walkthrough: Creating a Basic Windows Runtime Component Using WRL"
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
ms.assetid: 6e3f0986-7905-4f94-90e5-22c2ebfc8cd0
caps.latest.revision: 6
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
# Walkthrough: Creating a Basic Windows Runtime Component Using WRL
<?xml version="1.0" encoding="utf-8"?>
<developerWalkthroughDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document shows how to use the <token>cppwrl</token> (<token>cppwrl_short</token>) to create a basic <token>wrt</token> component. The component adds two numbers and raises an event when the result is prime. This document also demonstrates how to use the component from a <token>win8_appname_long</token> app that uses JavaScript.</para>
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
      </list>
    </content>
  </prerequisites>
  <procedure>
    <title>To create a basic <token>wrt</token> component that adds two numbers</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Visual Studio, create a Visual C++ <userInput>WRLClassLibrary</userInput> project. The document <link xlink:href="628b0852-89e5-44f8-bf58-a09762bda15c">Class Library Project Template (WRL)</link> describes how to download this template. Name the project <userInput>Contoso</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In Contoso.cpp and Contoso.idl, replace all instances of "WinRTClass" with "Calculator".</para>
        </content>
      </step>
      <step>
        <content>
          <para>In Contoso.idl, add the <unmanagedCodeEntityReference>Add</unmanagedCodeEntityReference> method to the <unmanagedCodeEntityReference>ICalculator</unmanagedCodeEntityReference> interface.</para>
          <codeReference>wrl-basic-component#1</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In Contoso.cpp, add the <unmanagedCodeEntityReference>Add</unmanagedCodeEntityReference> method to the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>Calculator</unmanagedCodeEntityReference> class.</para>
          <codeReference>wrl-basic-component#2</codeReference>
          <alert class="important">
            <para>Because you’re creating a COM component, remember to use the <languageKeyword>__stdcall</languageKeyword> calling convention.</para>
          </alert>
          <para>We recommend that you use <unmanagedCodeEntityReference>_Out_</unmanagedCodeEntityReference> and other source annotation language (SAL) annotations to describe how a function uses its parameters. SAL annotations also describe return values. SAL annotations work with the <legacyLink xlink:href="81f0c9e8-f471-4de5-aac4-99db336a8809">C/C++ Code Analysis tool</legacyLink> to discover possible defects in C and C++ source code. Common coding errors that are reported by the tool include buffer overruns, uninitialized memory, null pointer dereferences, and memory and resource leaks.</para>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To use the component from a <token>win8_appname_long</token> app that uses JavaScript </title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Visual Studio, add a new JavaScript <userInput>Blank App</userInput> project to the <userInput>Contoso</userInput> solution. Name the project <userInput>CalculatorJS</userInput>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In the <userInput>CalculatorJS</userInput> project, add a reference to the <userInput>Contoso</userInput> project.</para>
        </content>
      </step>
      <step>
        <content>
          <para>In default.html, replace the <unmanagedCodeEntityReference>body</unmanagedCodeEntityReference> section with these UI elements:</para>
          <codeReference>wrl-basic-component#3</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In default.js, implement the <unmanagedCodeEntityReference>OnClick</unmanagedCodeEntityReference> function.</para>
          <codeReference>wrl-basic-component#4</codeReference>
          <alert class="note">
            <para>In JavaScript, the first letter of a method name is changed to lowercase to match the standard naming conventions.</para>
          </alert>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To add an event that fires when a prime number is calculated</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Contoso.idl, before the declaration of <unmanagedCodeEntityReference>ICalculator</unmanagedCodeEntityReference>, define the delegate type, <unmanagedCodeEntityReference>PrimeNumberEvent</unmanagedCodeEntityReference>, which provides an <languageKeyword>int</languageKeyword> argument.</para>
          <codeReference>wrl-basic-component#5</codeReference>
          <para>When you use the <languageKeyword>delegate</languageKeyword> keyword, the MIDL compiler creates an interface that contains an <unmanagedCodeEntityReference>Invoke</unmanagedCodeEntityReference> method that matches that delegate's signature. In this example, the generated file Contoso_h.h defines the <unmanagedCodeEntityReference>IPrimeNumberEvent</unmanagedCodeEntityReference> interface, which is used later in this procedure.</para>
          <codeReference>wrl-basic-component#13</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <unmanagedCodeEntityReference>ICalculator</unmanagedCodeEntityReference> interface, define the <unmanagedCodeEntityReference>PrimeNumberFound</unmanagedCodeEntityReference> event. The <unmanagedCodeEntityReference>eventadd</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>eventremove</unmanagedCodeEntityReference> attributes specify that the consumer of the <unmanagedCodeEntityReference>ICalculator</unmanagedCodeEntityReference> interface can both subscribe to and unsubscribe from this event.</para>
          <codeReference>wrl-basic-component#6</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In Contoso.cpp, add a <languageKeyword>private</languageKeyword> <legacyLink xlink:href="91f1c072-6af4-44e6-b6d8-ac6d0c688dde">Microsoft::WRL::EventSource</legacyLink> member variable to manage the event subscribers and invoke the event handler.</para>
          <codeReference>wrl-basic-component#7</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In Contoso.cpp, implement the <unmanagedCodeEntityReference>add_PrimeNumberFound</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>remove_PrimeNumberFound</unmanagedCodeEntityReference> methods.</para>
          <codeReference>wrl-basic-component#8</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To raise the event when a prime number is calculated</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In Contoso.cpp, add the <unmanagedCodeEntityReference>IsPrime</unmanagedCodeEntityReference> method to the <languageKeyword>private</languageKeyword> section of the <unmanagedCodeEntityReference>Calculator</unmanagedCodeEntityReference> class.</para>
          <codeReference>wrl-basic-component#12</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>Modify the <unmanagedCodeEntityReference>Calculator</unmanagedCodeEntityReference>’s <unmanagedCodeEntityReference>Add</unmanagedCodeEntityReference> method to call the <legacyLink xlink:href="1506618f-0421-4428-a4d0-4ea2b10a3bf6">Microsoft::WRL::EventSource::InvokeAll</legacyLink> method when a prime number is calculated.</para>
          <codeReference>wrl-basic-component#11</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <procedure>
    <title>To handle the event from JavaScript</title>
    <steps class="ordered">
      <step>
        <content>
          <para>In default.html, modify the <unmanagedCodeEntityReference>body</unmanagedCodeEntityReference> section to include a text area that contains prime numbers.</para>
          <codeReference>wrl-basic-component#9</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In default.js, modify the <unmanagedCodeEntityReference>Add</unmanagedCodeEntityReference> function to handle the <unmanagedCodeEntityReference>PrimeNumberFound</unmanagedCodeEntityReference> event. The event handler appends the prime number to the text area that was defined by the previous step.</para>
          <codeReference>wrl-basic-component#10</codeReference>
          <alert class="note">
            <para>In JavaScript, the event names are changed to lower-case and are prepended with "on" to match the standard naming conventions.</para>
          </alert>
        </content>
      </step>
    </steps>
  </procedure>
  <section>
    <content>
      <para>The following illustration shows the basic Calculator app.</para>
      <mediaLink>
        <image xlink:href="a0724501-682b-48d5-9f87-2fbcbc553bbd" />
      </mediaLink>
    </content>
  </section>
  <nextSteps>
    <content>
      <para />
    </content>
  </nextSteps>
  <relatedTopics>
    <link xlink:href="b915afce-553b-44a7-b8dc-0ab601758eb0">Windows Runtime C++ Template Library</link>
    <link xlink:href="628b0852-89e5-44f8-bf58-a09762bda15c">Class Library Project Template (WRL)</link>
    <legacyLink xlink:href="81f0c9e8-f471-4de5-aac4-99db336a8809">C/C++ Code Analysis tool</legacyLink>
  </relatedTopics>
</developerWalkthroughDocument>