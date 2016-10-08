---
title: "How to: Use a Message Block Filter"
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
ms.assetid: db6b99fb-288d-4477-96dc-b9751772ebb2
caps.latest.revision: 13
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
# How to: Use a Message Block Filter
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document demonstrates how to use a filter function to enable an asynchronous message block to accept or reject a message on the basis of the payload of that message.</para>
    <para>When you create a message block object such as a <legacyLink xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">concurrency::unbounded_buffer</legacyLink>, a <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink>, or a <legacyLink xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">concurrency::transformer</legacyLink>, you can supply a <newTerm>filter function</newTerm> that determines whether the message block accepts or rejects a message. A filter function is a useful way to guarantee that a message block receives only certain values.</para>
    <para>Filter functions are important because they enable you to connect message blocks to form <newTerm>dataflow networks</newTerm>. In a dataflow network, message blocks control the flow of data by processing only those messages that meet specific criteria. Compare this to the control-flow model, where the flow of data is regulated by using control structures such as conditional statements, loops, and so on.</para>
    <para>This document provides a basic example of how to use a message filter. For additional examples that use message filters and the dataflow model to connect message blocks, see <link xlink:href="9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130">Walkthrough: Creating a Dataflow Agent</link> and <link xlink:href="78ccadc9-5ce2-46cc-bd62-ce0f99d356b8">Walkthrough: Creating an Image-Processing Network</link>.</para>
  </introduction>
  <codeExample>
    <description>
      <content>
        <para>Consider the following function, <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference>, which illustrates the basic usage of a message block that does not filter incoming messages. The message block appends prime numbers to a <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> object. The <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> function sends several numbers to the message block, receives the output values from the message block, and prints those numbers that are prime to the console.</para>
      </content>
    </description>
    <codeReference>concrt-primes-filter#1</codeReference>
    <comments>
      <content>
        <para>The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object processes all input values; however, it requires only those values that are prime. Although the application could be written so that the message sender sends only prime numbers, the requirements of the message receiver cannot always be known. </para>
      </content>
    </comments>
  </codeExample>
  <codeExample>
    <description>
      <content>
        <para>The following function, <unmanagedCodeEntityReference>count_primes_filter</unmanagedCodeEntityReference>, performs the same task as the <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> function. However, the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object in this version uses a filter function to accept only those values that are prime. The function that performs the action only receives prime numbers; therefore, it does not have to call the <unmanagedCodeEntityReference>is_prime</unmanagedCodeEntityReference> function.</para>
        <para>Because the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object receives only prime numbers, the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object itself can hold the prime numbers. In other words, the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object in this example is not required to add the prime numbers to the <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> object.</para>
      </content>
    </description>
    <codeReference>concrt-primes-filter#2</codeReference>
    <comments>
      <content>
        <para>The <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object now processes only those values that are prime. In the previous example, <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object processes all messages. Therefore, the previous example must receive the same number of messages that it sends. This example uses the result of the <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink> function to determine how many messages to receive from the <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> object. The <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> function returns <languageKeyword>true</languageKeyword> when the message buffer accepts the message and <languageKeyword>false</languageKeyword> when the message buffer rejects the message. Therefore, the number of times that the message buffer accepts the message matches the count of prime numbers.</para>
      </content>
    </comments>
  </codeExample>
  <codeExample>
    <description>
      <content>
        <para>The following code shows the complete example. The example calls both the <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> function and the <unmanagedCodeEntityReference>count_primes_filter</unmanagedCodeEntityReference> function.</para>
      </content>
    </description>
    <codeReference>concrt-primes-filter#3</codeReference>
    <comments>
      <content />
    </comments>
  </codeExample>
  <buildInstructions>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named <userInput>primes-filter.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc primes-filter.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <robustProgramming>
    <content>
      <para>A filter function can be a lambda function, a function pointer, or a function object. Every filter function takes one of the following forms:</para>
      <computerOutput>bool (_Type)
bool (_Type const &amp;)</computerOutput>
      <para>To eliminate the unnecessary copying of data, use the second form when you have an aggregate type that is transmitted by value.</para>
    </content>
  </robustProgramming>
  <relatedTopics>
<link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link>
<link xlink:href="9db5ce3f-c51b-4de1-b79b-9ac2a0cbd130">Walkthrough: Creating a Dataflow Agent</link>
<link xlink:href="78ccadc9-5ce2-46cc-bd62-ce0f99d356b8">Walkthrough: Creating an Image-Processing Network</link>
<link xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">transformer Class</link>
</relatedTopics>
</developerHowToDocument>