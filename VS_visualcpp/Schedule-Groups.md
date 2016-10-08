---
title: "Schedule Groups"
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
ms.assetid: 03523572-5891-4d17-89ce-fa795605f28b
caps.latest.revision: 5
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
# Schedule Groups
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document describes the role of schedule groups in the Concurrency Runtime. A <newTerm>schedule group</newTerm> affinitizes, or groups, related tasks together. Every scheduler has one or more schedule groups. Use schedule groups when you require a high degree of locality among tasks, for example, when a group of related tasks benefit from executing on the same processor node. Conversely, use scheduler instances when your application has specific quality requirements, for example, when you want to limit the amount of processing resources that are allocated to a set of tasks. For more information about scheduler instances, see <link xlink:href="4819365f-ef99-49cc-963e-50a2a35a8d6b">Scheduler Instances</link>.</para>
    <alert class="tip">
      <para>The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link> or the <link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link> if you are new to the Concurrency Runtime.</para>
    </alert>
    <para>Every <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object has a default schedule group for every scheduling node. A <newTerm>scheduling node</newTerm> maps to the underlying system topology. The runtime creates one scheduling node for every processor package or Non-Uniform Memory Architecture (NUMA) node, whichever number is larger. If you do not explicitly associate a task with a schedule group, the scheduler chooses which group to add the task to. </para>
    <para>The <unmanagedCodeEntityReference>SchedulingProtocol</unmanagedCodeEntityReference> scheduler policy influences the order in which the scheduler executes the tasks in each schedule group. When <unmanagedCodeEntityReference>SchedulingProtocol</unmanagedCodeEntityReference> is set to <unmanagedCodeEntityReference>EnhanceScheduleGroupLocality</unmanagedCodeEntityReference> (which is the default), the Task Scheduler chooses the next task from the schedule group that it is working on when the current task finishes or cooperatively yields. The Task Scheduler searches the current schedule group for work before it moves to the next available group. Conversely, when <unmanagedCodeEntityReference>SchedulingProtocol</unmanagedCodeEntityReference> is set to <unmanagedCodeEntityReference>EnhanceForwardProgress</unmanagedCodeEntityReference>, the scheduler moves to the next schedule group after each task finishes or yields. For an example that compares these policies, see <link xlink:href="73124194-fc3a-491e-a23f-fbd7b5a4455c">How-to: Use Schedule Groups to Influence Order of Execution</link>.</para>
    <para>The runtime uses the <legacyLink xlink:href="86d380ff-f2e8-411c-b1a8-22bd3079824a">concurrency::ScheduleGroup</legacyLink> class to represent schedule groups. To create a <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object, call the <legacyLink xlink:href="ddc4170f-ca00-4d15-81df-a4980a2352ed">concurrency::CurrentScheduler::CreateScheduleGroup</legacyLink> or <legacyLink xlink:href="d0daf471-0608-4c33-8625-58f5636c863a">concurrency::Scheduler::CreateScheduleGroup</legacyLink> method. The runtime uses a reference-counting mechanism to control the lifetime of <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> objects, just as it does with <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> objects. When you create a <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object, the runtime sets the reference counter to one. The <legacyLink xlink:href="df0182d7-1fdd-4b1f-b4a8-9852aead7fe5">concurrency::ScheduleGroup::Reference</legacyLink> method increments the reference counter by one. The <legacyLink xlink:href="8f60d3af-c43f-48a5-9eb3-37ad398f1787">concurrency::ScheduleGroup::Release</legacyLink> method decrements the reference counter by one. </para>
    <para>Many types in the Concurrency Runtime let you associate an object together with a schedule group. For example, the <legacyLink xlink:href="1b09e3d2-5e37-4966-b016-907ef1512456">concurrency::agent</legacyLink> class and message block classes such as <legacyLink xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">concurrency::unbounded_buffer</legacyLink>, <legacyLink xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">concurrency::join</legacyLink>, and concurrency::"timer", provide overloaded versions of the constructor that take a <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object. The runtime uses the <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object that is associated with this <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> object to schedule the task.</para>
    <para>You can also use the <legacyLink xlink:href="82be91e6-a641-4cec-b2f3-a99281b3fd66">concurrency::ScheduleGroup::ScheduleTask</legacyLink> method to schedule a lightweight task. For more information about lightweight tasks, see <link xlink:href="b6dcfc7a-9fa9-4144-96a6-2845ea272017">Lightweight Tasks</link>. </para>
  </introduction>
  <section>
    <title>Example</title>
    <content>
      <para>For an example that uses schedule groups to control the order of task execution, see <link xlink:href="73124194-fc3a-491e-a23f-fbd7b5a4455c">How-to: Use Schedule Groups to Influence Order of Task Execution</link>. </para>
    </content>
  </section>
  <relatedTopics>
    <link xlink:href="9aba278c-e0c9-4ede-b7c6-fedf7a365d90">Task Scheduler (Concurrency Runtime)</link>
    <link xlink:href="4819365f-ef99-49cc-963e-50a2a35a8d6b">Scheduler Instances</link>
    <link xlink:href="73124194-fc3a-491e-a23f-fbd7b5a4455c">How-to: Use Schedule Groups to Influence Order of Task Execution</link>
  </relatedTopics>
</developerConceptualDocument>