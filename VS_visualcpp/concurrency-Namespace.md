---
title: "concurrency Namespace"
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
ms.assetid: f1d33ca2-679b-4442-b140-22a9d9df61d1
caps.latest.revision: 33
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
# concurrency Namespace
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <unmanagedCodeEntityReference>Concurrency</unmanagedCodeEntityReference> namespace provides classes and functions that give you access to the Concurrency Runtime, a concurrent programming framework for C++. For more information, see <link xlink:href="874bc58f-8dce-483e-a3a1-4dcc9e52ed2c">Concurrency Runtime</link>. </para>
  </introduction>
  <syntaxSection>
    <legacySyntax>namespace concurrency;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Namespaces</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="16a86ff2-128e-4edf-89e4-38aac79c81f9">concurrency::extensibility Namespace</legacyLink>
                  </para>
                </TD>
                <TD />
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Typedefs</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <unmanagedCodeEntityReference>runtime_object_identity</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>Each message instance has an identity that follows it as it is cloned and passed between messaging components. This cannot be the address of the message object. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <unmanagedCodeEntityReference>task_status</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>A type that represents the terminal state of a task. Valid values are <unmanagedCodeEntityReference>completed</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>canceled</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <unmanagedCodeEntityReference>TaskProc</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>An elementary abstraction for a task, defined as <unmanagedCodeEntityReference>void (__cdecl * TaskProc)(void *)</unmanagedCodeEntityReference>. A <unmanagedCodeEntityReference>TaskProc</unmanagedCodeEntityReference> is called to invoke the body of a task. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <unmanagedCodeEntityReference>TaskProc_t</unmanagedCodeEntityReference>
                  </para>
                </TD>
                <TD>
                  <para>An elementary abstraction for a task, defined as <unmanagedCodeEntityReference>void (__cdecl * TaskProc_t)(void *)</unmanagedCodeEntityReference>. A <unmanagedCodeEntityReference>TaskProc</unmanagedCodeEntityReference> is called to invoke the body of a task. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Classes</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="31bf7bb1-bd01-491c-9760-d9d60edfccad">affinity_partitioner Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference> class is similar to the <unmanagedCodeEntityReference>static_partitioner</unmanagedCodeEntityReference> class, but it improves cache affinity by its choice of mapping subranges to worker threads. It can improve performance significantly when a loop is re-executed over the same data set, and the data fits in cache. Note that the same <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference> object must be used with subsequent iterations of a parallel loop that is executed over a particular data set, to benefit from data locality. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1b09e3d2-5e37-4966-b016-907ef1512456">agent Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A class intended to be used as a base class for all independent agents. It is used to hide state from other agents and interact using message-passing. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e">auto_partitioner Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>auto_partitioner</unmanagedCodeEntityReference> class represents the default method <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> use to partition the range they iterates over. This method of partitioning employes range stealing for load balancing as well as per-iterate cancellation. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5">bad_target Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when a messaging block is given a pointer to a target which is invalid for the operation being performed. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1521970a-1e9c-4b0c-a681-d18e40976f49">call Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>call</unmanagedCodeEntityReference> messaging block is a multi-source, ordered <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference> that invokes a specified function when receiving a message. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="2787df2b-e9d3-440e-bfd0-841a46a9835f">cancellation_token Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>cancellation_token</unmanagedCodeEntityReference> class represents the ability to determine whether some operation has been requested to cancel. A given token can be associated with a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> to provide implicit cancellation. It can also be polled for cancellation or have a callback registered for if and when the associated <unmanagedCodeEntityReference>cancellation_token_source</unmanagedCodeEntityReference> is canceled. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="823d63f4-7233-4d65-8976-6152ccf12d0e">cancellation_token_registration Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>cancellation_token_registration</unmanagedCodeEntityReference> class represents a callback notification from a <unmanagedCodeEntityReference>cancellation_token</unmanagedCodeEntityReference>. When the <unmanagedCodeEntityReference>register</unmanagedCodeEntityReference> method on a <unmanagedCodeEntityReference>cancellation_token</unmanagedCodeEntityReference> is used to receive notification of when cancellation occurs, a <unmanagedCodeEntityReference>cancellation_token_registration</unmanagedCodeEntityReference> object is returned as a handle to the callback so that the caller can request a specific callback no longer be made through use of the <unmanagedCodeEntityReference>deregister</unmanagedCodeEntityReference> method. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3548b1a0-12b0-4334-95db-4bf57141c066">cancellation_token_source Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>cancellation_token_source</unmanagedCodeEntityReference> class represents the ability to cancel some cancelable operation. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4157a539-d5c2-4161-b1ab-536ce2888397">choice Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block is a multi-source, single-target block that represents a control-flow interaction with a set of sources. The choice block will wait for any one of multiple sources to produce a message and will propagate the index of the source that produced the message. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">combinable Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>combinable&lt;T&gt;</unmanagedCodeEntityReference> object is intended to provide thread-private copies of data, to perform lock-free thread-local sub-computations during parallel algorithms. At the end of the parallel operation, the thread-private sub-computations can then be merged into a final result. This class can be used instead of a shared variable, and can result in a performance improvement if there would otherwise be a lot of contention on that shared variable. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3e740381-0f4e-41fc-8b66-ad0bb55f17a3">concurrent_priority_queue Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_priority_queue</unmanagedCodeEntityReference> class is a container that allows multiple threads to concurrently push and pop items. Items are popped in priority order where priority is determined by a functor supplied as a template argument. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c2218996-d0ea-40e9-b002-e9a15b085f51">concurrent_queue Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class is a sequence container class that allows first-in, first-out access to its elements. It enables a limited set of concurrency-safe operations, such as <unmanagedCodeEntityReference>push</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>try_pop</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b2d879dd-87ef-4af9-a266-a5443fd538b8">concurrent_unordered_map Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class is a concurrency-safe container that controls a varying-length sequence of elements of type <unmanagedCodeEntityReference>std::pair&lt;const _Key_type, _Element_type&gt;</unmanagedCodeEntityReference>. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access, and iterator traversal operations. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4dada5d7-15df-4382-b9c9-348e75b2f3c1">concurrent_unordered_multimap Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_unordered_multimap</unmanagedCodeEntityReference> class is an concurrency-safe container that controls a varying-length sequence of elements of type <unmanagedCodeEntityReference>std::pair&lt;const _Key_type, _Element_type&gt;</unmanagedCodeEntityReference>. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="219d7d67-1ff0-45f4-9400-e9cc272991a4">concurrent_unordered_multiset Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_unordered_multiset</unmanagedCodeEntityReference> class is an concurrency-safe container that controls a varying-length sequence of elements of type _Key_type. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c61f9a9a-4fd9-491a-9251-e300737ecf4b">concurrent_unordered_set Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_unordered_set</unmanagedCodeEntityReference> class is an concurrency-safe container that controls a varying-length sequence of elements of type _Key_type. The sequence is represented in a way that enables concurrency-safe append, element access, iterator access and iterator traversal operations. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a217b4ac-af2b-4d41-94eb-09a75ee28622">concurrent_vector Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class is a sequence container class that allows random access to any element. It enables concurrency-safe append, element access, iterator access, and iterator traversal operations. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c0d553f3-961d-4ecd-9a29-4fa4351673b8">Context Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an abstraction for an execution context. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="9601cd28-4f40-4c2e-89ab-747068956331">context_self_unblock Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> method of a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object is called from the same context. This would indicate an attempt by a given context to unblock itself. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a76066c8-19dd-44fa-959a-6941ec1b0d2d">context_unblock_unbalanced Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when calls to the <unmanagedCodeEntityReference>Block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Unblock</unmanagedCodeEntityReference> methods of a <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object are not properly paired. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fa3c89d6-be5d-4d1b-bddb-8232814e6cf6">critical_section Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A non-reentrant mutex which is explicitly aware of the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="31c20e0e-4cdf-49b4-8220-d726130aad2b">CurrentScheduler Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an abstraction for the current scheduler associated with the calling context. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f6e575e2-4e0f-455a-9e06-54f462ce0c1c">default_scheduler_exists Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Scheduler::SetDefaultSchedulerPolicy</unmanagedCodeEntityReference> method is called when a default scheduler already exists within the process. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fba35a53-6568-4bfa-9aaf-07c0928cf73d">event Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A manual reset event which is explicitly aware of the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8f494942-7748-4a2a-8de2-23414bfe6346">improper_lock Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when a lock is acquired improperly. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="5a76da0a-091b-4748-8f62-b3a28f674f9e">improper_scheduler_attach Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Attach</unmanagedCodeEntityReference> method is called on a <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object which is already attached to the current context. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="30132102-c900-4951-a470-b63b4e3aa2d2">improper_scheduler_detach Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>CurrentScheduler::Detach</unmanagedCodeEntityReference> method is called on a context which has not been attached to any scheduler using the <unmanagedCodeEntityReference>Attach</unmanagedCodeEntityReference> method of a <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="434a7512-7796-4255-92a7-f3bf71c6a7a7">improper_scheduler_reference Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Reference</unmanagedCodeEntityReference> method is called on a <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object that is shutting down, from a context that is not part of that scheduler. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="33b64885-34d8-4d4e-a893-02e9f19c958e">invalid_link_target Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>link_target</unmanagedCodeEntityReference> method of a messaging block is called and the messaging block is unable to link to the target. This can be the result of exceeding the number of links the messaging block is allowed or attempting to link a specific target twice to the same source. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e9a47cb7-a778-4df7-92b0-3752119fd4c7">invalid_multiple_scheduling Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when a <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> object is scheduled multiple times using the <unmanagedCodeEntityReference>run</unmanagedCodeEntityReference> method of a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object without an intervening call to either the <unmanagedCodeEntityReference>wait</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>run_and_wait</unmanagedCodeEntityReference> methods. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="26ba07dc-fcdf-44cb-b748-a31d35205b52">invalid_operation Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an invalid operation is performed that is not more accurately described by another exception type thrown by the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="0a9c5f08-d5e6-4ad0-90a9-517472b3ac28">invalid_oversubscribe_operation Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> method is called with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <unmanagedCodeEntityReference>false</unmanagedCodeEntityReference> without a prior call to the <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> method with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <unmanagedCodeEntityReference>true</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d">invalid_scheduler_policy_key Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an invalid or unknown key is passed to a <unmanagedCodeEntityReference>SchedulerPolicy</unmanagedCodeEntityReference> object constructor, or the <unmanagedCodeEntityReference>SetPolicyValue</unmanagedCodeEntityReference> method of a <unmanagedCodeEntityReference>SchedulerPolicy</unmanagedCodeEntityReference> object is passed a key that must be changed using other means such as the <unmanagedCodeEntityReference>SetConcurrencyLimits</unmanagedCodeEntityReference> method. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="2d0fafb2-18f8-4284-8040-3db640d33303">invalid_scheduler_policy_thread_specification Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an attempt is made to set the concurrency limits of a <unmanagedCodeEntityReference>SchedulerPolicy</unmanagedCodeEntityReference> object such that the value of the <unmanagedCodeEntityReference>MinConcurrency</unmanagedCodeEntityReference> key is less than the value of the <unmanagedCodeEntityReference>MaxConcurrency</unmanagedCodeEntityReference> key. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8c533e3f-2774-4192-8616-b2313b859bf7">invalid_scheduler_policy_value Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when a policy key of a <unmanagedCodeEntityReference>SchedulerPolicy</unmanagedCodeEntityReference> object is set to an invalid value for that key. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c7b73463-42f6-4dcc-801a-81379b12d35a">ISource Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> class is the interface for all source blocks. Source blocks propagate messages to <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="5678db25-112a-4f72-be13-42e16b67c48b">ITarget Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>ITarget</unmanagedCodeEntityReference> class is the interface for all target blocks. Target blocks consume messages offered to them by <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="d2217119-70a1-40b6-809f-c1c13a571c3f">join Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> messaging block is a single-target, multi-source, ordered <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> which combines together messages of type <parameterReference>_Type</parameterReference> from each of its sources. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7">location Class</link>
                  </para>
                </TD>
                <TD>
                  <para>An abstraction of a physical location on hardware. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3e1f3505-6c0c-486c-8191-666d0880ec62">message Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The basic message envelope containing the data payload being passed between messaging blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a96b9995-5ad7-4600-83c8-c15e329ff10e">message_not_found Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when a messaging block is unable to find a requested message. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="23afb052-daa7-44ed-bf24-d2513db748da">message_processor Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>message_processor</unmanagedCodeEntityReference> class is the abstract base class for processing of <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> objects. There is no guarantee on the ordering of the messages. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="ff981875-bd43-47e3-806f-b03c9f418b18">missing_wait Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when there are tasks still scheduled to a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object at the time that object's destructor executes. This exception will never be thrown if the destructor is reached because of a stack unwinding as the result of an exception. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b2aa73a8-e8a6-4255-b117-d07530c328b2">multi_link_registry Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>multi_link_registry</unmanagedCodeEntityReference> object is a <unmanagedCodeEntityReference>network_link_registry</unmanagedCodeEntityReference> that manages multiple source blocks or multiple target blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="236e87a0-4867-49fd-869a-bef4010e49a7">multitype_join Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>multitype_join</unmanagedCodeEntityReference> messaging block is a multi-source, single-target messaging block that combines together messages of different types from each of its sources and offers a tuple of the combined messages to its targets. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="65d3f277-6d43-4160-97ef-caf8b26c1641">nested_scheduler_missing_detach Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when the Concurrency Runtime detects that you neglected to call the <unmanagedCodeEntityReference>CurrentScheduler::Detach</unmanagedCodeEntityReference> method on a context that attached to a second scheduler using the <unmanagedCodeEntityReference>Attach</unmanagedCodeEntityReference> method of the <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> object. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3e7b4097-09f1-4252-964e-b15b8f7f7fc6">network_link_registry Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>network_link_registry</unmanagedCodeEntityReference> abstract base class manages the links between source and target blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="963efe1d-a6e0-477c-9a70-d93d8412c897">operation_timed_out Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an operation has timed out. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="787adfb7-7f79-4a70-864a-80e3b64088cd">ordered_message_processor Class</link>
                  </para>
                </TD>
                <TD>
                  <para>An <unmanagedCodeEntityReference>ordered_message_processor</unmanagedCodeEntityReference> is a <unmanagedCodeEntityReference>message_processor</unmanagedCodeEntityReference> that allows message blocks to process messages in the order they were received. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="5cc428fe-3697-419c-9fb2-78f6181c9293">overwrite_buffer Class</link>
                  </para>
                </TD>
                <TD>
                  <para>An <unmanagedCodeEntityReference>overwrite_buffer</unmanagedCodeEntityReference> messaging block is a multi-target, multi-source, ordered <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> capable of storing a single message at a time. New messages overwrite previously held ones. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b836efab-2d05-4649-b6fa-d15236f1f813">progress_reporter Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The progress reporter class allows reporting progress notifications of a specific type. Each progress_reporter object is bound to a particular asynchronous action or operation. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="86aa75fd-eda5-42aa-aadf-25c0c1c9742d">propagator_block Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> class is an abstract base class for message blocks that are both a source and target. It combines the functionality of both the <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference> classes. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="91a59cd2-ca05-4b74-8398-d826d9f86736">reader_writer_lock Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A writer-preference queue-based reader-writer lock with local only spinning. The lock grants first in - first out (FIFO) access to writers and starves readers under a continuous load of writers. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="86d380ff-f2e8-411c-b1a8-22bd3079824a">ScheduleGroup Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an abstraction for a schedule group. Schedule groups organize a set of related work that benefits from being scheduled close together either temporally, by executing another task in the same group before moving to another group, or spatially, by executing multiple items within the same group on the same NUMA node or physical socket. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="34cf7961-048d-4852-8a5c-a32f823e3506">Scheduler Class</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents an abstraction for a Concurrency Runtime scheduler. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="26001970-b400-463b-be3d-8623359c399a">scheduler_not_attached Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an operation is performed which requires a scheduler to be attached to the current context and one is not. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8b40449a-7abb-4d0a-bb85-c0e9a495ae97">scheduler_resource_allocation_error Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown because of a failure to acquire a critical resource in the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4aec1c3e-c32a-41b2-899d-2d898f23b3c7">scheduler_worker_creation_error Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown because of a failure to create a worker execution context in the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bcebf51a-65f8-45a3-809b-d1ff93527dc4">SchedulerPolicy Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>SchedulerPolicy</unmanagedCodeEntityReference> class contains a set of key/value pairs, one for each policy element, that control the behavior of a scheduler instance. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="d7e997af-54d1-43f5-abe0-def72df6edb3">simple_partitioner Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>simple_partitioner</unmanagedCodeEntityReference> class represents a static partitioning of the range iterated over by <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>. The partitioner divides the range into chunks such that each chunk has at least the number of iterations specified by the chunk size. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="ccc34728-8de9-4e07-b83d-a36a58d9d2b9">single_assignment Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>single_assignment</unmanagedCodeEntityReference> messaging block is a multi-target, multi-source, ordered <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> capable of storing a single, write-once <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="09540a4e-c34e-4ff9-af49-21b8612b6ab3">single_link_registry Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>single_link_registry</unmanagedCodeEntityReference> object is a <unmanagedCodeEntityReference>network_link_registry</unmanagedCodeEntityReference> that manages only a single source or target block. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fbdd4146-e8d0-42e8-b714-fe633f69ffbf">source_block Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference> class is an abstract base class for source-only blocks. The class provides basic link management functionality as well as common error checks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="287487cf-e0fe-4c35-aa3c-24f081d1ddae">source_link_manager Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>source_link_manager</unmanagedCodeEntityReference> object manages messaging block network links to <unmanagedCodeEntityReference>ISource</unmanagedCodeEntityReference> blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="2b3dbdf0-6eb9-49f6-8639-03df1d974143">static_partitioner Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>static_partitioner</unmanagedCodeEntityReference> class represents a static partitioning of the range iterated over by <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>. The partitioner divides the range into as many chunks as there are workers available to the underyling scheduler. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">structured_task_group Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> class represents a highly structured collection of parallel work. You can queue individual parallel tasks to a <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> using <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> objects, and wait for them to complete, or cancel the task group before they have finished executing, which will abort any tasks that have not begun execution. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3ce181b4-b94a-4894-bf7b-64fc09821f9f">target_block Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>target_block</unmanagedCodeEntityReference> class is an abstract base class that provides basic link management functionality and error checking for target only blocks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a">task Class (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD>
                  <para>The Parallel Patterns Library (PPL) <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> class. A <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference> object represents work that can be executed asynchronously, and concurrently with other tasks and parallel work produced by parallel algorithms in the Concurrency Runtime. It produces a result of type <parameterReference>_ResultType</parameterReference> on successful completion. Tasks of type <unmanagedCodeEntityReference>task&lt;void&gt;</unmanagedCodeEntityReference> produce no result. A task can be waited upon and canceled independently of other tasks. It can also be composed with other tasks using continuations(<unmanagedCodeEntityReference>then</unmanagedCodeEntityReference>), and join(<unmanagedCodeEntityReference>when_all</unmanagedCodeEntityReference>) and choice(<unmanagedCodeEntityReference>when_any</unmanagedCodeEntityReference>) patterns. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c3f0b234-2cc1-435f-a48e-995f45b190be">task_canceled Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown by the PPL tasks layer in order to force the current task to cancel. It is also thrown by the <unmanagedCodeEntityReference>get()</unmanagedCodeEntityReference> method on <legacyLink xlink:href="5389e8a5-5038-40b6-844a-55e9b58ad35f">task</legacyLink>, for a canceled task. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fb19ed98-f245-48dc-9ba5-487ba879b28a">task_completion_event Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>task_completion_event</unmanagedCodeEntityReference> class allows you to delay the execution of a task until a condition is satisfied, or start a task in response to an external event. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1fb5a76a-3682-45c2-a615-8b6b527741f0">task_continuation_context Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>task_continuation_context</unmanagedCodeEntityReference> class allows you to specify where you would like a continuation to be executed. It is only useful to use this class from a Windows Store app. For non-Windows Store apps, the task continuation's execution context is determined by the runtime, and not configurable. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">task_group Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> class represents a collection of parallel work which can be waited on or canceled. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="74a34b15-708b-4231-a509-947874292b13">task_handle Class</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> class represents an individual parallel work item. It encapsulates the instructions and the data required to execute a piece of work. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f93d146b-70f7-46ec-8c2f-c33b8bb0af69">task_options Class (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents the allowed options for creating a task </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4f4dea51-de9f-40f9-93f5-dd724c567b49">timer Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>timer</unmanagedCodeEntityReference> messaging block is a single-target <unmanagedCodeEntityReference>source_block</unmanagedCodeEntityReference> capable of sending a message to its target after a specified time period has elapsed or at specific intervals. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="eea71925-7043-4a92-bfd4-dbc0ece5d081">transformer Class</link>
                  </para>
                </TD>
                <TD>
                  <para>A <unmanagedCodeEntityReference>transformer</unmanagedCodeEntityReference> messaging block is a single-target, multi-source, ordered <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> which can accept messages of one type and is capable of storing an unbounded number of messages of a different type. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6b1a939a-1819-4385-b1d8-708f83d4ec47">unbounded_buffer Class</link>
                  </para>
                </TD>
                <TD>
                  <para>An <unmanagedCodeEntityReference>unbounded_buffer</unmanagedCodeEntityReference> messaging block is a multi-target, multi-source, ordered <unmanagedCodeEntityReference>propagator_block</unmanagedCodeEntityReference> capable of storing an unbounded number of messages. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6fa57636-341b-4b51-84cc-261d283ff736">unsupported_os Class</link>
                  </para>
                </TD>
                <TD>
                  <para>This class describes an exception thrown when an unsupported operating system is used. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Structures</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="8c52546e-1650-48a0-985f-7e4a0fc26a90">DispatchState Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>The <unmanagedCodeEntityReference>DispatchState</unmanagedCodeEntityReference> structure is used to transfer state to the <unmanagedCodeEntityReference>IExecutionContext::Dispatch</unmanagedCodeEntityReference> method. It describes the circumstances under which the <unmanagedCodeEntityReference>Dispatch</unmanagedCodeEntityReference> method is invoked on an <unmanagedCodeEntityReference>IExecutionContext</unmanagedCodeEntityReference> interface. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f3108089-ecda-4b07-86db-3efae60c31e0">IExecutionContext Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to an execution context which can run on a given virtual processor and be cooperatively context switched. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6b27042b-b98c-4f7f-b831-566950af84cd">IExecutionResource Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An abstraction for a hardware thread. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3dd5ec2c-fe53-4121-ae77-1bc1d1167ff4">IResourceManager Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to the Concurrency Runtime's Resource Manager. This is the interface by which schedulers communicate with the Resource Manager. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="471de85a-2b1a-4b6d-ab81-2eff2737161e">IScheduler Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to an abstraction of a work scheduler. The Concurrency Runtime's Resource Manager uses this interface to communicate with work schedulers. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="af416973-7a1c-4c30-aa3b-4161c2aaea54">ISchedulerProxy Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>The interface by which schedulers communicate with the Concurrency Runtime's Resource Manager to negotiate resource allocation. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="feb89241-a555-4e61-ad48-40add54daeca">IThreadProxy Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An abstraction for a thread of execution. Depending on the <unmanagedCodeEntityReference>SchedulerType</unmanagedCodeEntityReference> policy key of the scheduler you create, the Resource Manager will grant you a thread proxy that is backed by either a regular Win32 thread or a user-mode schedulable (UMS) thread. UMS threads are supported on 64-bit operating systems with version Windows 7 and higher. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e36756f7-4cd9-4fa6-ba60-23fea58ef2bf">ITopologyExecutionResource Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to an execution resource as defined by the Resource Manager. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="92e7e032-04f6-4c7c-be36-8f9a35fc4734">ITopologyNode Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to a topology node as defined by the Resource Manager. A node contains one or more execution resources. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="81b5250e-3065-492c-b20d-2cdabf12271a">IUMSCompletionList Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a UMS completion list. When a UMS thread blocks, the scheduler's designated scheduling context is dispatched in order to make a decision of what to schedule on the underlying virtual processor root while the original thread is blocked. When the original thread unblocks, the operating system queues it to the completion list which is accessible through this interface. The scheduler can query the completion list on the designated scheduling context or any other place it searches for work. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3a500225-4e02-4849-bb56-d744865f5870">IUMSScheduler Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An interface to an abstraction of a work scheduler that wants the Concurrency Runtime's Resource Manager to hand it user-mode schedulable (UMS) threads. The Resource Manager uses this interface to communicate with UMS thread schedulers. The <unmanagedCodeEntityReference>IUMSScheduler</unmanagedCodeEntityReference> interface inherits from the <unmanagedCodeEntityReference>IScheduler</unmanagedCodeEntityReference> interface. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="61c69b7e-5c37-4048-bcb4-e75c536afd86">IUMSThreadProxy Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An abstraction for a thread of execution. If you want your scheduler to be granted user-mode schedulable (UMS) threads, set the value for the scheduler policy element <unmanagedCodeEntityReference>SchedulerKind</unmanagedCodeEntityReference> to <unmanagedCodeEntityReference>UmsThreadDefault</unmanagedCodeEntityReference>, and implement the <unmanagedCodeEntityReference>IUMSScheduler</unmanagedCodeEntityReference> interface. UMS threads are only supported on 64-bit operating systems with version Windows 7 and higher. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="eaca9529-c1cc-472b-8ec6-722a1ff0fa2a">IUMSUnblockNotification Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a notification from the Resource Manager that a thread proxy which blocked and triggered a return to the scheduler's designated scheduling context has unblocked and is ready to be scheduled. This interface is invalid once the thread proxy's associated execution context, returned from the <unmanagedCodeEntityReference>GetContext</unmanagedCodeEntityReference> method, is rescheduled. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="5ef371b8-9e4f-4fef-bb0d-49099693dd2b">IVirtualProcessorRoot Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>An abstraction for a hardware thread on which a thread proxy can execute. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4de61c78-a2c6-4698-bd47-964baf7fa287">scheduler_interface Structure</link>
                  </para>
                </TD>
                <TD>
                  <para>Scheduler Interface </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e88c84af-c306-476d-aef1-f42a0fa0a80f">scheduler_ptr Structure (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD>
                  <para>Represents a pointer to a scheduler. This class exists to allow the the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Enumerations</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="46fa9b51-7930-4706-ba9d-c94a5ccac6b1">agent_status Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The valid states for an <unmanagedCodeEntityReference>agent</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c986df30-da61-4705-bc87-a104c88f4ee9">Agents_EventType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The types of events that can be traced using the tracing functionality offered by the Agents Library </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f593d554-ce66-4f72-bd33-00dd1a0cf52e">ConcRT_EventType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The types of events that can be traced using the tracing functionality offered by the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e7e13607-86f8-4fdc-90b2-57503710232c">Concrt_TraceFlags Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Trace flags for the event types </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e08c60a8-4a81-4c2d-af3f-320ffa7a1eba">CriticalRegionType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The type of critical region a context is inside. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="25c43ad3-f0f6-4d70-8358-d33caf1e5820">DynamicProgressFeedbackType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Used by the <unmanagedCodeEntityReference>DynamicProgressFeedback</unmanagedCodeEntityReference> policy to describe whether resources for the scheduler will be rebalanced according to statistical information gathered from the scheduler or only based on virtual processors going in and out of the idle state through calls to the <unmanagedCodeEntityReference>Activate</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Deactivate</unmanagedCodeEntityReference> methods on the <unmanagedCodeEntityReference>IVirtualProcessorRoot</unmanagedCodeEntityReference> interface. For more information on available scheduler policies, see <link xlink:href="6376ca26-54c8-4804-863f-c081e387fe36">PolicyElementKey Enumeration</link>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="75b0a0a2-caad-444f-83f6-7faf61456e8b">join_type Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The type of a <unmanagedCodeEntityReference>join</unmanagedCodeEntityReference> messaging block. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e5e05af0-734d-4063-ae32-f6356382f313">message_status Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>The valid responses for an offer of a <unmanagedCodeEntityReference>message</unmanagedCodeEntityReference> object to a block. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6376ca26-54c8-4804-863f-c081e387fe36">PolicyElementKey Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Policy keys describing aspects of scheduler behavior. Each policy element is described by a key-value pair. For more information about scheduler policies and their impact on schedulers, see <link xlink:href="9aba278c-e0c9-4ede-b7c6-fedf7a365d90">Task Scheduler (Concurrency Runtime)</link>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="df44b4bc-788a-407f-a0c4-148d6876ebb2">SchedulerType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Used by the <unmanagedCodeEntityReference>SchedulerKind</unmanagedCodeEntityReference> policy to describe the type of threads that the scheduler should utilize for underlying execution contexts. For more information on available scheduler policies, see <link xlink:href="6376ca26-54c8-4804-863f-c081e387fe36">PolicyElementKey Enumeration</link>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a4bb87b9-bec3-4918-bb06-1993c53e1069">SchedulingProtocolType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Used by the <unmanagedCodeEntityReference>SchedulingProtocol</unmanagedCodeEntityReference> policy to describe which scheduling algorithm will be utilized for the scheduler. For more information on available scheduler policies, see <link xlink:href="6376ca26-54c8-4804-863f-c081e387fe36">PolicyElementKey Enumeration</link>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fe292c59-1257-499d-9a04-0d95f9a618ab">SwitchingProxyState Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Used to denote the state a thread proxy is in, when it is executing a cooperative context switch to a different thread proxy. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fce7cc14-6cb6-43b8-82ba-f98e2225db6a">task_group_status Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Describes the execution status of a <unmanagedCodeEntityReference>task_group</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>structured_task_group</unmanagedCodeEntityReference> object. A value of this type is returned by numerous methods that wait on tasks scheduled to a task group to complete. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="adcbbd85-2622-45a8-983e-3718dabbb902">WinRTInitializationType Enumeration</link>
                  </para>
                </TD>
                <TD>
                  <para>Used by the <unmanagedCodeEntityReference>WinRTInitialization</unmanagedCodeEntityReference> policy to describe whether and how the Windows Runtime will be initialized on scheduler threads for an application which runs on operating systems with version Windows 8 or higher. For more information on available scheduler policies, see <link xlink:href="6376ca26-54c8-4804-863f-c081e387fe36">PolicyElementKey Enumeration</link>. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="41246453-c699-4a73-9234-f952efbd9106">Alloc Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Allocates a block of memory of the size specified from the Concurrency Runtime Caching Suballocator. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="920dc665-7e23-4bd7-8c74-3e74067aa52a">asend Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. An asynchronous send operation, which schedules a task to propagate the data to the target block. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="03a5e7bb-20bc-49b7-b119-83421845769b">cancel_current_task Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Cancels the currently executing task. This function can be called from within the body of a task to abort the task's execution and cause it to enter the <unmanagedCodeEntityReference>canceled</unmanagedCodeEntityReference> state. </para>
                  <para>It is not a supported scenario to call this function if you are not within the body of a <unmanagedCodeEntityReference>task</unmanagedCodeEntityReference>. Doing so will result in undefined behavior such as a crash or a hang in your application.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="beadec39-5976-43fb-99b0-aeb9aad344fd">create_async Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Creates a Windows Runtime asynchronous construct based on a user supplied lambda or function object. The return type of <unmanagedCodeEntityReference>create_async</unmanagedCodeEntityReference> is one of either <unmanagedCodeEntityReference>IAsyncAction^</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>IAsyncActionWithProgress&lt;TProgress&gt;^</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>IAsyncOperation&lt;TResult&gt;^</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>IAsyncOperationWithProgress&lt;TResult, TProgress&gt;^</unmanagedCodeEntityReference> based on the signature of the lambda passed to the method. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6e364052-c923-4006-9e03-8516bf041482">create_task Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Creates a PPL <legacyLink xlink:href="5389e8a5-5038-40b6-844a-55e9b58ad35f">task</legacyLink> object. <unmanagedCodeEntityReference>create_task</unmanagedCodeEntityReference> can be used anywhere you would have used a task constructor. It is provided mainly for convenience, because it allows use of the <unmanagedCodeEntityReference>auto</unmanagedCodeEntityReference> keyword while creating tasks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8fced60c-65f0-4298-9dc8-cf02ea8b107a">CreateResourceManager Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns an interface that represents the singleton instance of the Concurrency Runtime's Resource Manager. The Resource Manager is responsible for assigning resources to schedulers that want to cooperate with each other. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="deccd704-c8de-4026-81e9-9214dbb5d71e">DisableTracing Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Disables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is unregistered by default. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="66ece37f-97f1-490f-bd78-d5ff1e43b805">EnableTracing Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Enables tracing in the Concurrency Runtime. This function is deprecated because ETW tracing is now on by default. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="cde873ad-874b-482d-aae3-451f2e380d2b">Free Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Releases a block of memory previously allocated by the <unmanagedCodeEntityReference>Alloc</unmanagedCodeEntityReference> method to the Concurrency Runtime Caching Suballocator. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="6cbe2fde-5272-43f8-a267-b32a8e7ecbac">get_ambient_scheduler Function (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD />
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="4f16d068-c6d2-45b2-b4c4-6e4af4ea7caf">GetExecutionContextId Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns a unique identifier that can be assigned to an execution context that implements the <unmanagedCodeEntityReference>IExecutionContext</unmanagedCodeEntityReference> interface. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="73388a52-9b59-42d6-a49b-d35856fa671a">GetOSVersion Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns the operating system version. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="bea5a723-89bf-4597-8657-46ecff3f0fae">GetProcessorCount Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns the number of hardware threads on the underlying system. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="ffbc9395-d79c-4cb4-bbb3-8511820f5c62">GetProcessorNodeCount Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns the number of NUMA nodes or processor packages on the underlying system. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="30b63059-9712-43d2-8958-443489282c7a">GetSchedulerId Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns a unique identifier that can be assigned to a scheduler that implements the <unmanagedCodeEntityReference>IScheduler</unmanagedCodeEntityReference> interface. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="350f062c-3ff5-45bc-9718-fece1ede9cdb">interruption_point Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Creates an interruption point for cancellation. If a cancellation is in progress in the context where this function is called, this will throw an internal exception that aborts the execution of the currently executing parallel work. If cancellation is not in progress, the function does nothing. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="96e07637-1683-431f-b0ac-1b85af96c9d9">is_current_task_group_canceling Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Returns an indication of whether the task group which is currently executing inline on the current context is in the midst of an active cancellation (or will be shortly). Note that if there is no task group currently executing inline on the current context, <unmanagedCodeEntityReference>false</unmanagedCodeEntityReference> will be returned. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="98c33b3f-e8e5-4302-ba91-b56515c00066">make_choice Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Constructs a <unmanagedCodeEntityReference>choice</unmanagedCodeEntityReference> messaging block from an optional <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> and two or more input sources. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="0e1a1922-3c46-4898-9e58-4887c71c3ce7">make_greedy_join Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Constructs a <unmanagedCodeEntityReference>greedy multitype_join</unmanagedCodeEntityReference> messaging block from an optional <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> and two or more input sources. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8634413d-05fd-42c7-8a35-c7f8a0fff980">make_join Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Constructs a <unmanagedCodeEntityReference>non_greedy multitype_join</unmanagedCodeEntityReference> messaging block from an optional <unmanagedCodeEntityReference>Scheduler</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>ScheduleGroup</unmanagedCodeEntityReference> and two or more input sources. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f8f7cb10-90ca-42ce-9c70-cbf090aa3cf6">make_task Function</link>
                  </para>
                </TD>
                <TD>
                  <para>A factory method for creating a <unmanagedCodeEntityReference>task_handle</unmanagedCodeEntityReference> object. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="fe173c7e-7986-4a31-86e5-0e03c8648824">parallel_buffered_sort Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to <unmanagedCodeEntityReference>std::sort</unmanagedCodeEntityReference> in that it is a compare-based, unstable, in-place sort except that it needs <unmanagedCodeEntityReference>O(n)</unmanagedCodeEntityReference> additional space, and requires default initialization for the elements being sorted. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">parallel_for Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> iterates over a range of indices and executes a user-supplied function at each iteration, in parallel. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">parallel_for_each Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> applies a specified function to each element within a range, in parallel. It is semantically equivalent to the <unmanagedCodeEntityReference>for_each</unmanagedCodeEntityReference> function in the <unmanagedCodeEntityReference>std</unmanagedCodeEntityReference> namespace, except that iteration over the elements is performed in parallel, and the order of iteration is unspecified. The argument <parameterReference>_Func</parameterReference> must support a function call operator of the form <unmanagedCodeEntityReference>operator()(T)</unmanagedCodeEntityReference> where the parameter <parameterReference>T</parameterReference> is the item type of the container being iterated over. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">parallel_invoke Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Executes the function objects supplied as parameters in parallel, and blocks until they have finished executing. Each function object could be a lambda expression, a pointer to function, or any object that supports the function call operator with the signature <unmanagedCodeEntityReference>void operator()()</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f3cf915b-b280-4bf1-bed9-ce3fb660341c">parallel_radixsort Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Arranges elements in a specified range into an non descending order using a radix sorting algorithm. This is a stable sort function which requires a projection function that can project elements to be sorted into unsigned integer-like keys. Default initialization is required for the elements being sorted. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="275a2706-c12a-4c87-9ad6-f07d4fc205cc">parallel_reduce Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Computes the sum of all elements in a specified range by computing successive partial sums, or computes the result of successive partial results similarly obtained from using a specified binary operation other than sum, in parallel. <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> is semantically similar to <unmanagedCodeEntityReference>std::accumulate</unmanagedCodeEntityReference>, except that it requires the binary operation to be associative, and requires an identity value instead of an initial value. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="9c84defe-c8c2-4b56-806e-484b1ce73ef5">parallel_sort Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Arranges the elements in a specified range into a nondescending order, or according to an ordering criterion specified by a binary predicate, in parallel. This function is semantically similar to <unmanagedCodeEntityReference>std::sort</unmanagedCodeEntityReference> in that it is a compare-based, unstable, in-place sort. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3f61f693-2a7f-45a7-8904-b6df436a2818">parallel_transform Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Applies a specified function object to each element in a source range, or to a pair of elements from two source ranges, and copies the return values of the function object into a destination range, in parallel. This functional is semantically equivalent to <unmanagedCodeEntityReference>std::transform</unmanagedCodeEntityReference>. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f36bbca1-97ac-4343-bfac-ea71ca2139e9">receive Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. A general receive implementation, allowing a context to wait for data from exactly one source and filter the values that are accepted. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="02083191-ebc9-4565-9438-2ca39fcd31f6">run_with_cancellation_token Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Executes a function object immediately and synchronously in the context of a given cancellation token. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8713fb36-066b-47de-af12-589fa74805d6">send Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. A synchronous send operation, which waits until the target either accepts or declines the message. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="83b32fa3-ae98-4274-9b84-2cabc3cdcf68">set_ambient_scheduler Function (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD />
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="25f7fc36-cd2b-4245-9738-3a33fdef31fa">set_task_execution_resources Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Restricts the execution resources used by the Concurrency Runtime internal worker threads to the affinity set specified. </para>
                  <para>It is valid to call this method only before the Resource Manager has been created, or between two Resource Manager lifetimes. It can be invoked multiple times as long as the Resource Manager does not exist at the time of invocation. After an affinity limit has been set, it remains in effect until the next valid call to the <unmanagedCodeEntityReference>set_task_execution_resources</unmanagedCodeEntityReference> method.</para>
                  <para>The affinity mask provided need not be a subset of the process affinity mask. The process affinity will be updated if necessary.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1d6508df-4435-4acf-9fe6-eaa70c5dfd17">swap Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Exchanges the elements of two <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> objects. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="8e915732-1433-44d4-ad40-597201cb766c">task_from_exception Function (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD />
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a989545d-9190-4396-a338-d632083a3ffc">task_from_result Function (Concurrency Runtime)</link>
                  </para>
                </TD>
                <TD />
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="9bea9d3d-922d-4d1d-b075-4bc3be45dab4">Trace_agents_register_name Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Associates the given name to the message block or agent in the ETW trace. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c9d76668-e5cf-48de-ab79-bd7b2bc38db9">try_receive Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. A general try-receive implementation, allowing a context to look for data from exactly one source and filter the values that are accepted. If the data is not ready, the method will return false. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a8a326d1-854d-4462-b705-36d3a2a6fb2b">wait Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Pauses the current context for a specified amount of time. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1c80cc05-8211-43d4-a8d7-1b3415899823">when_all Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Creates a task that will complete successfully when all of the tasks supplied as arguments complete successfully. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="26b09c07-4c23-41a5-a1de-d71c91dc9ca2">when_any Function</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Creates a task that will complete successfully when any of the tasks supplied as arguments completes successfully. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Operators</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="acaa8f8e-9281-44f3-a43d-5d8a85d48f0a">operator!= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is not equal to the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1334b94a-c4de-4180-bbab-76849ca44309">operator&amp;&amp; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Creates a task that will complete succesfully when both of the tasks supplied as arguments complete successfully. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b584cedd-6ae0-4045-b30d-d3a40e5d7a78">operator|| Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Overloaded. Creates a task that will complete successfully when either of the tasks supplied as arguments completes successfully. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c7106a22-a02b-4774-a91b-a103c492be0b">operator&lt; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is less than the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="646d93df-15e6-4cd4-9967-2465ed000fe0">operator&lt;= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is less than or equal to the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="16c7a9ba-2aa4-4ad2-91e0-6c61d4a72ae4">operator== Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is equal to the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1f850c42-6b09-4726-9dab-c8cf770baf92">operator&gt; Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is greater than the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="a644be5b-12b1-4f39-aedd-634aa0dfe552">operator&gt;= Operator</link>
                  </para>
                </TD>
                <TD>
                  <para>Tests if the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the left side of the operator is greater than or equal to the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object on the right side. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
      <section>
        <title>Constants</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="b69610ce-9216-4e39-be9f-a62fc1c67e20">AgentEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID ({B9B5B78C-0713-4898-A21A-C67949DCED07}) describing ETW events fired by the Agents library in the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="1c0ec298-ce70-41b1-9458-6384c0bbf45e">ChoreEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to chores or tasks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="5849a265-ee6a-485f-a571-b3aba71425d0">ConcRT_ProviderGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>The ETW provider GUID for the Concurrency Runtime. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="dabef168-4e89-48a8-8f70-32fca63836a6">CONCRT_RM_VERSION_1 Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>Indicates support of the Resource Manager interface defined in Visual Studio 2010. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="78e621f4-cd16-402f-b4e4-520d56ee3269">ConcRTEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are not more specifically described by another category. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="c3aec997-4941-433a-bdb6-f7ef6e5219fe">ContextEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to contexts. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="87c3f9e4-a3a2-4d42-95a0-7ffe2aa5e1ec">COOPERATIVE_TIMEOUT_INFINITE Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>Value indicating that a wait should never time out. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="7da2433d-130b-47ff-b809-1cfeeafe25a6">COOPERATIVE_WAIT_TIMEOUT Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>Value indicating that a wait timed out. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="e641b23b-63a8-48c6-b63a-3440cf973fa6">INHERIT_THREAD_PRIORITY Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>Special value for the policy key <unmanagedCodeEntityReference>ContextPriority</unmanagedCodeEntityReference> indicating that the thread priority of all contexts in the scheduler should be the same as that of the thread which created the scheduler. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="f771e726-9ac6-4732-a96a-fccbe32001dd">LockEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to locks. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="7cef895d-f0d6-41bc-b4c3-b4254fa07898">MaxExecutionResources Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>Special value for the policy keys <unmanagedCodeEntityReference>MinConcurrency</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>MaxConcurrency</unmanagedCodeEntityReference>. Defaults to the number of hardware threads on the machine in the absence of other constraints. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="3b00d409-83ea-4836-bec6-af40cf1a5902">PPLParallelForeachEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> function. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="db0a6329-840f-4db5-8f84-1f531d9cc382">PPLParallelForEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> function. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="52dfc38b-44e9-435d-9207-ad9d16b6bd53">PPLParallelInvokeEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to usage of the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> function. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="b5d7a70b-0130-44d4-b03a-a1e9a789b8bd">ResourceManagerEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to the resource manager. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="548cde87-1467-49d0-af54-59e0cbfbdcb2">ScheduleGroupEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to schedule groups. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="76e2cf6b-e042-4052-8df1-ddfcf453a112">SchedulerEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to scheduler activity. </para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <link xlink:href="ab73a4da-a44d-43de-bb34-193062afc334">VirtualProcessorEventGuid Constant</link>
                  </para>
                </TD>
                <TD>
                  <para>A category GUID describing ETW events fired by the Concurrency Runtime that are directly related to virtual processors. </para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>agents.h, concrt.h, concrtrm.h, concurrent_priority_queue.h, concurrent_queue.h, concurrent_unordered_map.h, concurrent_unordered_set.h, concurrent_vector.h, internal_concurrent_hash.h, internal_split_ordered_list.h, ppl.h, pplcancellation_token.h, pplconcrt.h, pplinterface.h, ppltasks.h</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="a057c776-7caa-4605-8f33-9815cf6f9b27">Reference (Concurrency Runtime)</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>



