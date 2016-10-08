---
title: "How to: Create a Task that Completes After a Delay"
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
ms.topic: article
ms.assetid: 3fc0a194-3fdb-4eba-8b8a-b890981a985d
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
# How to: Create a Task that Completes After a Delay
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This example shows how to use the <legacyLink xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">concurrency::task</legacyLink>, <legacyLink xlink:href="3548b1a0-12b0-4334-95db-4bf57141c066">concurrency::cancellation_token_source</legacyLink>, <legacyLink xlink:href="2787df2b-e9d3-440e-bfd0-841a46a9835f">concurrency::cancellation_token</legacyLink>, <legacyLink xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">concurrency::task_completion_event</legacyLink>, "concurrency::timer", and <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink> classes to create a task that completes after a delay. You can use this method to build loops that occasionally poll for data, introduce timeouts, delay handling of user input for a predetermined time, and so on.</para>
  </introduction>
  <codeExample>
    <description>
      <content>
        <para>The following example shows the <unmanagedCodeEntityReference>complete_after</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>cancel_after_timeout</unmanagedCodeEntityReference> functions. The <unmanagedCodeEntityReference>complete_after</unmanagedCodeEntityReference> function creates a <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> object that completes after the specified delay. It uses a <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object and a <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object to set a <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> object after the specified delay. By using the <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> class, you can define a task that completes after a thread or another task signals that a value is available. When the event is set, listener tasks complete and their continuations are scheduled to run.</para>
        <alert class="tip">
          <para>For more information about the <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> classes, which are part of the Asynchronous Agents Library, see <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>.</para>
        </alert>
        <para>The <unmanagedCodeEntityReference>cancel_after_timeout</unmanagedCodeEntityReference> function builds on the <unmanagedCodeEntityReference>complete_after</unmanagedCodeEntityReference> function to cancel a task if that task does not complete before a given timeout. The <unmanagedCodeEntityReference>cancel_after_timeout</unmanagedCodeEntityReference> function creates two tasks. The first task indicates success and completes after the provided task completes; the second task indicates failure and completes after the specified timeout. The <unmanagedCodeEntityReference>cancel_after_timeout</unmanagedCodeEntityReference> function creates a continuation task that runs when the success or failure task completes. If the failure task completes first, the continuation cancels the token source to cancel the overall task.</para>
      </content>
    </description>
    <codeReference>concrt-task-delay#1</codeReference>
    <comments>
      <content />
    </comments>
  </codeExample>
  <codeExample>
    <description>
      <content>
        <para>The following example computes the count of prime numbers in the range [0, 100000] multiple times. The operation fails if it does not complete in a given time limit. The <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> function demonstrates how to use the <unmanagedCodeEntityReference>cancel_after_timeout</unmanagedCodeEntityReference> function. It counts the number of primes in the given range and fails if the task does not complete in the provided time. The <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function calls the <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> function multiple times. Each time, it halves the time limit. The program finishes after the operation does not complete in the current time limit.</para>
      </content>
    </description>
    <codeReference>concrt-task-delay#2</codeReference>
    <comments>
      <content>
        <para>When you use this technique to cancel tasks after a delay, any unstarted tasks will not start after the overall task is canceled. However, it is important for any long-running tasks to respond to cancellation in a timely manner. In this example, the <unmanagedCodeEntityReference>count_primes</unmanagedCodeEntityReference> method calls the <legacyLink xlink:href="99bccfdb-e9d8-4d5f-855a-cbc3879bd559">concurrency::is_task_cancellation_requested</legacyLink> and <unmanagedCodeEntityReference>cancel_current_task</unmanagedCodeEntityReference> functions to respond to cancellation. (Alternatively, you can call the <legacyLink xlink:href="350f062c-3ff5-45bc-9718-fece1ede9cdb">concurrency::interruption_point</legacyLink> function). For more information about task cancellation, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
      </content>
    </comments>
  </codeExample>
  <codeExample>
    <description>
      <content>
        <para>Here is the complete code for this example:</para>
      </content>
    </description>
    <codeReference>concrt-task-delay#3</codeReference>
  </codeExample>
  <buildInstructions>
    <content>
      <para>To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named <userInput>task-delay.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc task-delay.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <relatedTopics>
    <link xlink:href="42f05ac3-2098-494a-ba84-737fcdcad077">Task Parallelism (Concurrency Runtime)</link>
    <link xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">task Class</link>
    <link xlink:href="3548b1a0-12b0-4334-95db-4bf57141c066">cancellation_token_source Class</link>
    <link xlink:href="2787df2b-e9d3-440e-bfd0-841a46a9835f">cancellation_token Class</link>
    <link xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">task_completion_event Class</link>
    <link xlink:href="99bccfdb-e9d8-4d5f-855a-cbc3879bd559">is_task_cancellation_requested Function</link>
    <link xlink:href="03a5e7bb-20bc-49b7-b119-83421845769b">cancel_current_task Function</link>
    <link xlink:href="350f062c-3ff5-45bc-9718-fece1ede9cdb">interruption_point Function</link>
    
    <link xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">call Class</link>
    <link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>
    <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>
  </relatedTopics>
</developerHowToDocument>