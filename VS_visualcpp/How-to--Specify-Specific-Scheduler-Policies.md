---
title: "How to: Specify Specific Scheduler Policies"
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
ms.assetid: 9c5149f9-ac34-4ff3-9e79-0bad103e4e6b
caps.latest.revision: 10
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
# How to: Specify Specific Scheduler Policies
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Scheduler policies let you control the strategy that the scheduler uses when it manages tasks. This topic shows how to use a scheduler policy to increase the thread priority of a task that prints a progress indicator to the console.</para>
    <para>For an example that uses custom scheduler policies together with asynchronous agents, see <link xlink:href="46a3e265-0777-4ec3-a142-967bafc49d67">How-to: Create Agents that Use Specific Scheduler Policies</link>.</para>
  </introduction>
  <codeExample>
    <description>
      <content>
        <para>The following example performs two tasks in parallel. The first task computes the n<superscript>th</superscript> Fibonacci number. The second task prints a progress indicator to the console. </para>
        <para>The first task uses recursive decomposition to compute the Fibonacci number. That is, each task recursively creates subtasks to compute the overall result. A task that uses recursive decomposition might use all available resources, and thereby starve other tasks. In this example, the task that prints the progress indicator might not receive timely access to computing resources. </para>
        <para>To provide the task that prints a progress message fair access to computing resources, this example uses steps that are described in <link xlink:href="2cc804f0-5ff3-498b-97f1-a9f67a005448">How-to: Manage a Scheduler Instance</link> to create a scheduler instance that has a custom policy. The custom policy specifies the thread priority to be the highest priority class. </para>
        <para>This example uses the <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink> and <legacyLink xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">concurrency::timer</legacyLink> classes to print the progress indicator. These classes have versions of their constructors that take a reference to a <legacyLink xlink:href="34cf7961-048d-4852-8a5c-a32f823e3506">concurrency::Scheduler</legacyLink> object that schedules them. The example uses the default scheduler to schedule the task that computes the Fibonacci number and the scheduler instance to schedule the task that prints the progress indicator.</para>
        <para>To illustrate the benefits of using a scheduler that has a custom policy, this example performs the overall task two times. The example first uses the default scheduler to schedule both tasks. The example then uses the default scheduler to schedule the first task, and a scheduler that has a custom policy to schedule the second task.</para>
      </content>
    </description>
    <codeReference>concrt-scheduler-policy#1</codeReference>
    <comments>
      <content>
        <para>This example produces the following output.</para>
        <computerOutput>Default scheduler:
...........................................................................done
Scheduler that has a custom policy:
...........................................................................done</computerOutput>
        <para>Although both sets of tasks produce the same result, the version that uses a custom policy enables the task that prints the progress indicator to run at an elevated priority so that it behaves more responsively.</para>
      </content>
    </comments>
  </codeExample>
  <buildInstructions>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named <userInput>scheduler-policy.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window. </para>
      <para>
        <system>cl.exe /EHsc scheduler-policy.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <relatedTopics>
    <link xlink:href="58fb68bd-4a57-40a8-807b-6edb6f083cd9">Scheduler Policies</link>
    <link xlink:href="2cc804f0-5ff3-498b-97f1-a9f67a005448">How-to: Manage a Scheduler Instance</link>
    <link xlink:href="46a3e265-0777-4ec3-a142-967bafc49d67">How-to: Create Agents that Use Specific Scheduler Policies</link>
  </relatedTopics>
</developerHowToDocument>