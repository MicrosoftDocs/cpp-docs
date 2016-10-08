---
title: "How to: Send a Message at a Regular Interval"
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
ms.assetid: 4b60ea6c-97c8-4d69-9f7b-ad79f3548026
caps.latest.revision: 12
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
# How to: Send a Message at a Regular Interval
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This example shows how to use the <legacyLink xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">concurrency::timer</legacyLink> class to send a message at a regular interval. </para>
  </introduction>
  <codeExample>
    <description>
      <content>
        <para>The following example uses a <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object to report progress during a lengthy operation. This example links the <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> object to a <legacyLink xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">concurrency::call</legacyLink> object. The <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> object prints a progress indicator to the console at a regular interval. The <legacyLink xlink:href="127e5cb4-6d78-472f-8518-b364ab496499">concurrency::timer::start</legacyLink> method runs the timer on a separate context. The <unmanagedCodeEntityReference>perform_lengthy_operation</unmanagedCodeEntityReference> function calls the <legacyLink xlink:href="a8a326d1-854d-4462-b705-36d3a2a6fb2b">concurrency::wait</legacyLink> function on the main context to simulate a time-consuming operation.</para>
      </content>
    </description>
    <codeReference>concrt-report-progress#1</codeReference>
    <comments>
      <content>
        <para>This example produces the following sample output:</para>
        <computerOutput>Performing a lengthy operation..........done.</computerOutput>
      </content>
    </comments>
  </codeExample>
  <buildInstructions>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named <userInput>report-progress.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc report-progress.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <relatedTopics>
<link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link>
<link xlink:href="79c456c0-1692-480c-bb67-98f2434c1252">Asynchronous Message Blocks</link>
<link xlink:href="42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0">Message Passing Functions</link>
<link xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">timer Class</link>
</relatedTopics>
</developerHowToDocument>