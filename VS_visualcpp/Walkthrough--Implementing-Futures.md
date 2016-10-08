---
title: "Walkthrough: Implementing Futures"
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
ms.topic: article
ms.assetid: 82ea75cc-aaec-4452-b10d-8abce0a87e5b
caps.latest.revision: 18
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
# Walkthrough: Implementing Futures
<?xml version="1.0" encoding="utf-8"?>
<developerWalkthroughDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This topic shows how to implement futures in your application. The topic demonstrates how to combine existing functionality in the Concurrency Runtime into something that does more.</para>
    <alert class="important">
      <para>This topic illustrates the concept of futures for demonstration purposes. We recommend that you use <legacyLink xlink:href="495e82c3-5341-4e37-87dd-b40107fbdfb6">std::future</legacyLink> or <legacyLink xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">concurrency::task</legacyLink> when you require an asynchronous task that computes a value for later use.</para>
    </alert>
    <para>A <newTerm>task</newTerm> is a computation that can be decomposed into additional, more fine-grained, computations. A <newTerm>future</newTerm> is an asynchronous task that computes a value for later use.</para>
    <para>To implement futures, this topic defines the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class. The <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class uses these components of the Concurrency Runtime: the <legacyLink xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">concurrency::task_group</legacyLink> class and the <legacyLink xlink:href="ccc34728-8de9-4e07-b83d-a36a58d9d2b9">concurrency::single_assignment</legacyLink> class. The <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class uses the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class to compute a value asynchronously and the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> class to store the result of the computation. The constructor of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class takes a work function that computes the result, and the <unmanagedCodeEntityReference>get</unmanagedCodeEntityReference> method retrieves the result.</para>
  </introduction>
  <procedure>
    <title>To implement the async_future class</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Declare a template class named <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> that is parameterized on the type of the resulting computation. Add <languageKeyword>public</languageKeyword> and <languageKeyword>private</languageKeyword> sections to this class.</para>
          <codeReference>concrt-futures#2</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>private</languageKeyword> section of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class, declare a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> and a <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> data member.</para>
          <codeReference>concrt-futures#3</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class, implement the constructor. The constructor is a template that is parameterized on the work function that computes the result. The constructor asynchronously executes the work function in the <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> data member and uses the <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink> function to write the result to the <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> data member.</para>
          <codeReference>concrt-futures#4</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class, implement the destructor. The destructor waits for the task to finish.</para>
          <codeReference>concrt-futures#5</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class, implement the <unmanagedCodeEntityReference>get</unmanagedCodeEntityReference> method. This method uses the <legacyLink xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">concurrency::receive</legacyLink> function to retrieve the result of the work function.</para>
          <codeReference>concrt-futures#6</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <section>
    <title>Example</title>
    <content />
    <sections>
      <section>
        <title>Description</title>
        <content>
          <para>The following example shows the complete <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class and an example of its usage. The <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function creates a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> object that contains 10,000 random integer values. It then uses <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> objects to find the smallest and largest values that are contained in the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> object.</para>
        </content>
      </section>
      <section>
        <title>Code</title>
        <content>
          <codeReference>concrt-futures#1</codeReference>
        </content>
      </section>
      <section>
        <title>Comments</title>
        <content>
          <para>This example produces the following output:</para>
          <computerOutput>smallest: 0
largest:  9999
average:  4981</computerOutput>
          <para>The example uses the <unmanagedCodeEntityReference>async_future::get</unmanagedCodeEntityReference> method to retrieve the results of the computation. The <unmanagedCodeEntityReference>async_future::get</unmanagedCodeEntityReference> method waits for the computation to finish if the computation is still active.</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Robust Programming</title>
    <content>
      <para>To extend the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class to handle exceptions that are thrown by the work function, modify the <unmanagedCodeEntityReference>async_future::get</unmanagedCodeEntityReference> method to call the <legacyLink xlink:href="19ee5bbc-8654-40a7-9f22-d5329cec6e96">concurrency::task_group::wait</legacyLink> method. The <unmanagedCodeEntityReference>task_group::wait</unmanagedCodeEntityReference> method throws any exceptions that were generated by the work function. </para>
      <para>The following example shows the modified version of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> class. The <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function uses a <languageKeyword>try</languageKeyword>-<languageKeyword>catch</languageKeyword> block to print the result of the <unmanagedCodeEntityReference>async_future</unmanagedCodeEntityReference> object or to print the value of the exception that is generated by the work function.</para>
      <codeReference>concrt-futures-with-eh#1</codeReference>
      <para>This example produces the following output:</para>
      <computerOutput>caught exception: error</computerOutput>
      <para>For more information about the exception handling model in the Concurrency Runtime, see <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
    </content>
  </section>
  <section>
    <title>Compiling the Code</title>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named <userInput>futures.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc futures.cpp</system>
      </para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="7374c5e9-54eb-44bf-9ed9-5e190cfd290b">Concurrency Runtime Walkthroughs</link>
<link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>
<link xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">task_group Class</link>
<link xlink:href="ccc34728-8de9-4e07-b83d-a36a58d9d2b9">single_assignment Class</link>
</relatedTopics>
</developerWalkthroughDocument>