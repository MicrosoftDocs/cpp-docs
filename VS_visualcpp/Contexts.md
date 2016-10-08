---
title: "Contexts"
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
ms.assetid: 10c1d861-8fbb-4ba0-b2ec-61876b11176e
caps.latest.revision: 7
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
# Contexts
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document describes the role of contexts in the Concurrency Runtime. A thread that is attached to a scheduler is known as an <newTerm>execution context</newTerm>, or just <newTerm>context</newTerm>. The <legacyLink xlink:href="a8a326d1-854d-4462-b705-36d3a2a6fb2b">concurrency::wait</legacyLink> function and the "concurrency::Context" class enable you to control the behavior of contexts. Use the <unmanagedCodeEntityReference>wait</unmanagedCodeEntityReference> function to suspend the current context for a specified time. Use the <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> class when you need more control over when contexts block, unblock, and yield, or when you want to oversubscribe the current context.</para>
    <alert class="tip">
      <para>The Concurrency Runtime provides a default scheduler, and therefore you are not required to create one in your application. Because the Task Scheduler helps you fine-tune the performance of your applications, we recommend that you start with the <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link> or the <link xlink:href="d2a72a31-8ba6-4220-ad7a-e403a6acaa42">Asynchronous Agents Library</link> if you are new to the Concurrency Runtime.</para>
    </alert>
  </introduction>
  <section>
    <title>The wait Function</title>
    <content>
      <para>The <legacyLink xlink:href="a8a326d1-854d-4462-b705-36d3a2a6fb2b">concurrency::wait</legacyLink> function cooperatively yields the execution of the current context for a specified number of milliseconds. The runtime uses the yield time to perform other tasks. After the specified time has elapsed, the runtime reschedules the context for execution. Therefore, the <unmanagedCodeEntityReference>wait</unmanagedCodeEntityReference> function might suspend the current context longer than the value provided for the <parameterReference>milliseconds</parameterReference> parameter.</para>
      <para>Passing 0 (zero) for the <parameterReference>milliseconds</parameterReference> parameter causes the runtime to suspend the current context until all other active contexts are given the opportunity to perform work. This lets you yield a task to all other active tasks.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>For an example that uses the <unmanagedCodeEntityReference>wait</unmanagedCodeEntityReference> function to yield the current context, and thus allow for other contexts to run, see <link xlink:href="73124194-fc3a-491e-a23f-fbd7b5a4455c">How-to: Use Schedule Groups to Control the Order of Task Execution</link>.</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>The Context Class</title>
    <content>
      <para>The "concurrency::Context" class provides a programming abstraction for an execution context and offers two important features: the ability to cooperatively block, unblock, and yield the current context, and the ability to oversubscribe the current context.</para>
    </content>
    <sections>
      <section>
        <title>Cooperative Blocking</title>
        <content>
          <para>The <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> class lets you block or yield the current execution context. Blocking or yielding is useful when the current context cannot continue because a resource is not available. </para>
          <para>The <legacyLink xlink:href="9c7a473a-dbea-4d08-961d-114223c4e135">concurrency::Context::Block</legacyLink> method blocks the current context. A context that is blocked yields its processing resources so that the runtime can perform other tasks. The <legacyLink xlink:href="4bc6323e-d74f-43cc-8f1a-426cf4b4d9a1">concurrency::Context::Unblock</legacyLink> method unblocks a blocked context. The <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> method must be called from a different context than the one that called <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference>. The runtime throws <legacyLink xlink:href="9601cd28-4f40-4c2e-89ab-747068956331">concurrency::context_self_unblock</legacyLink> if a context attempts to unblock itself.</para>
          <para>To cooperatively block and unblock a context, you typically call <legacyLink xlink:href="d57bf982-3fcf-48aa-ae01-89885f7dd8f0">concurrency::Context::CurrentContext</legacyLink> to retrieve a pointer to the <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> object that is associated with the current thread and save the result. You then call the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> method to block the current context. Later, call <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> from a separate context to unblock the blocked context.</para>
          <para>You must match each pair of calls to <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference>. The runtime throws <legacyLink xlink:href="a76066c8-19dd-44fa-959a-6941ec1b0d2d">concurrency::context_unblock_unbalanced</legacyLink> when the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> method is called consecutively without a matching call to the other method. However, you do not have to call <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> before you call <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference>. For example, if one context calls <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> before another context calls <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> for the same context, that context remains unblocked.</para>
          <para>The <legacyLink xlink:href="5759ad0a-b97a-4f86-8015-cd8d40256383">concurrency::Context::Yield</legacyLink> method yields execution so that the runtime can perform other tasks and then reschedule the context for execution. When you call the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> method, the runtime does not reschedule the context.</para>
        </content>
        <sections>
          <section>
            <title>Example</title>
            <content>
              <para>For an example that uses the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>Context::Yield</unmanagedCodeEntityReference> methods to implement a cooperative semaphore class, see <link xlink:href="22f4b9c0-ca22-4a68-90ba-39e99ea76696">How-to: Use the Context Class to Implement a Cooperative Semaphore</link>.</para>
            </content>
            <sections>
              <section>
                <title>Oversubscription</title>
                <content>
                  <para>The default scheduler creates the same number of threads as there are available hardware threads. You can use <newTerm>oversubscription</newTerm> to create additional threads for a given hardware thread.</para>
                  <para>For computationally intensive operations, oversubscription typically does not scale because it introduces additional overhead. However, for tasks that have a high amount of latency, for example, reading data from disk or from a network connection, oversubscription can improve the overall efficiency of some applications.</para>
                  <alert class="note">
                    <para>Enable oversubscription only from a thread that was created by the Concurrency Runtime. Oversubscription has no effect when it is called from a thread that was not created by the runtime (including the main thread). </para>
                  </alert>
                  <para>To enable oversubscription in the current context, call the <legacyLink xlink:href="dcd6583e-2b1c-4dcf-a322-7af372e2dc4f">concurrency::Context::Oversubscribe</legacyLink> method with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <languageKeyword>true</languageKeyword>. When you enable oversubscription on a thread that was created by the Concurrency Runtime, it causes the runtime to create one additional thread. After all tasks that require oversubscription finish, call <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> with the <parameterReference>_BeginOversubscription</parameterReference> parameter set to <languageKeyword>false</languageKeyword>. </para>
                  <para>You can enable oversubscription multiple times from the current context, but you must disable it the same number of times that you enable it. Oversubscription can also be nested; that is, a task that is created by another task that uses oversubscription can also oversubscribe its context. However, if both a nested task and its parent belong to the same context, only the outermost call to <unmanagedCodeEntityReference>Context::Oversubscribe</unmanagedCodeEntityReference> causes the creation of an additional thread.</para>
                  <alert class="note">
                    <para>The runtime throws <legacyLink xlink:href="0a9c5f08-d5e6-4ad0-90a9-517472b3ac28">concurrency::invalid_oversubscribe_operation</legacyLink> if oversubscription is disabled before it is enabled.</para>
                  </alert>
                </content>
                <sections>
                  <section>
                    <title>Example</title>
                    <content>
                      <para>For an example that uses oversubscription to offset the latency that is caused by reading data from a network connection, see <link xlink:href="a1011329-2f0a-4afb-b599-dd4043009a10">How-to: Use Oversubscription to Offset Latency</link>.</para>
                    </content>
                  </section>
                </sections>
              </section>
            </sections>
          </section>
        </sections>
      </section>
    </sections>
  </section>
  <relatedTopics>
    <link xlink:href="9aba278c-e0c9-4ede-b7c6-fedf7a365d90">Task Scheduler (Concurrency Runtime)</link>
    <link xlink:href="73124194-fc3a-491e-a23f-fbd7b5a4455c">How-to: Use Schedule Groups to Control the Order of Task Execution</link>
    <link xlink:href="22f4b9c0-ca22-4a68-90ba-39e99ea76696">How-to: Use the Context Class to Implement a Cooperative Semaphore</link>
    <link xlink:href="a1011329-2f0a-4afb-b599-dd4043009a10">How-to: Use Oversubscription to Offset Latency</link>
  </relatedTopics>
</developerConceptualDocument>