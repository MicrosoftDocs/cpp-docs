---
title: "How to: Use the Context Class to Implement a Cooperative Semaphore"
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
ms.assetid: 22f4b9c0-ca22-4a68-90ba-39e99ea76696
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
# How to: Use the Context Class to Implement a Cooperative Semaphore
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This topic shows how to use the concurrency::Context class to implement a cooperative semaphore class.</para>
    <para>The <unmanagedCodeEntityReference>Context</unmanagedCodeEntityReference> class lets you block or yield the current execution context. Blocking or yielding the current context is useful when the current context cannot proceed because a resource is not available. A <newTerm>semaphore</newTerm> is an example of one situation where the current execution context must wait for a resource to become available. A semaphore, like a critical section object, is a synchronization object that enables code in one context to have exclusive access to a resource. However, unlike a critical section object, a semaphore enables more than one context to access the resource concurrently. If the maximum number of contexts holds a semaphore lock, each additional context must wait for another context to release the lock. </para>
  </introduction>
  <procedure>
    <title>To implement the semaphore class</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Declare a class that is named <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference>. Add <languageKeyword>public</languageKeyword> and <languageKeyword>private</languageKeyword> sections to this class.</para>
          <codeReference>concrt-cooperative-semaphore#1</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>private</languageKeyword> section of the <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class, declare a <legacyLink xlink:href="261628ed-7049-41ac-99b9-cfe49f696b44">std::atomic</legacyLink> variable that holds the semaphore count and a <legacyLink xlink:href="c2218996-d0ea-40e9-b002-e9a15b085f51">concurrency::concurrent_queue</legacyLink> object that holds the contexts that must wait to acquire the semaphore.</para>
          <codeReference>concrt-cooperative-semaphore#2</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class, implement the constructor. The constructor takes a <languageKeyword>long long</languageKeyword> value that specifies the maximum number of contexts that can concurrently hold the lock.</para>
          <codeReference>concrt-cooperative-semaphore#3</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class, implement the <unmanagedCodeEntityReference>acquire</unmanagedCodeEntityReference> method. This method decrements the semaphore count as an atomic operation. If the semaphore count becomes negative, add the current context to the end of the wait queue and call the <legacyLink xlink:href="9c7a473a-dbea-4d08-961d-114223c4e135">concurrency::Context::Block</legacyLink> method to block the current context.</para>
          <codeReference>concrt-cooperative-semaphore#4</codeReference>
        </content>
      </step>
      <step>
        <content>
          <para>In the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class, implement the <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method. This method increments the semaphore count as an atomic operation. If the semaphore count is negative before the increment operation, there is at least one context that is waiting for the lock. In this case, unblock the context that is at the front of the wait queue.</para>
          <codeReference>concrt-cooperative-semaphore#5</codeReference>
        </content>
      </step>
    </steps>
  </procedure>
  <codeExample>
    <description>
      <content>
        <para>The <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class in this example behaves cooperatively because the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Context::Yield</unmanagedCodeEntityReference> methods yield execution so that the runtime can perform other tasks. </para>
        <para>The <unmanagedCodeEntityReference>acquire</unmanagedCodeEntityReference> method decrements the counter, but it might not finish adding the context to the wait queue before another context calls the <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method. To account for this, the <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method uses a spin loop that calls the <legacyLink xlink:href="5759ad0a-b97a-4f86-8015-cd8d40256383">concurrency::Context::Yield</legacyLink> method to wait for the <unmanagedCodeEntityReference>acquire</unmanagedCodeEntityReference> method to finish adding the context. </para>
        <para>The <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method can call the <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> method before the <unmanagedCodeEntityReference>acquire</unmanagedCodeEntityReference> method calls the <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> method. You do not have to protect against this race condition because the runtime allows for these methods to be called in any order. If the <unmanagedCodeEntityReference>release</unmanagedCodeEntityReference> method calls <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference> before the <unmanagedCodeEntityReference>acquire</unmanagedCodeEntityReference> method calls <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> for the same context, that context remains unblocked. The runtime only requires that each call to <unmanagedCodeEntityReference>Context::Block</unmanagedCodeEntityReference> is matched with a corresponding call to <unmanagedCodeEntityReference>Context::Unblock</unmanagedCodeEntityReference>.</para>
        <para>The following example shows the complete <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class. The <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function shows basic usage of this class. The <unmanagedCodeEntityReference>wmain</unmanagedCodeEntityReference> function uses the <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink> algorithm to create several tasks that require access to the semaphore. Because three threads can hold the lock at any time, some tasks must wait for another task to finish and release the lock.</para>
      </content>
    </description>
    <codeReference>concrt-cooperative-semaphore#6</codeReference>
    <comments>
      <content>
        <para>This example produces the following sample output.</para>
        <computerOutput>In loop iteration 5...
In loop iteration 0...
In loop iteration 6...
In loop iteration 1...
In loop iteration 2...
In loop iteration 7...
In loop iteration 3...
In loop iteration 8...
In loop iteration 9...
In loop iteration 4...</computerOutput>
        <para>For more information about the <unmanagedCodeEntityReference>concurrent_queue</unmanagedCodeEntityReference> class, see <link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>. For more information about the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm, see <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>.</para>
      </content>
    </comments>
  </codeExample>
  <buildInstructions>
    <content>
      <para>Copy the example code and paste it in a Visual Studio project, or paste it in a file that is named <userInput>cooperative-semaphore.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc cooperative-semaphore.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <robustProgramming>
    <content>
      <para>You can use the <newTerm>Resource Acquisition Is Initialization</newTerm> (RAII) pattern to limit access to a <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> object to a given scope. Under the RAII pattern, a data structure is allocated on the stack. That data structure initializes or acquires a resource when it is created and destroys or releases that resource when the data structure is destroyed. The RAII pattern guarantees that the destructor is called before the enclosing scope exits. Therefore, the resource is correctly managed when an exception is thrown or when a function contains multiple <languageKeyword>return</languageKeyword> statements.</para>
      <para>The following example defines a class that is named <unmanagedCodeEntityReference>scoped_lock</unmanagedCodeEntityReference>, which is defined in the <languageKeyword>public</languageKeyword> section of the <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> class. The <unmanagedCodeEntityReference>scoped_lock</unmanagedCodeEntityReference> class resembles the <legacyLink xlink:href="9564437e-8df7-4eb7-b60c-842c27ac4bb6">concurrency::critical_section::scoped_lock</legacyLink> and <legacyLink xlink:href="35a8af75-1c30-4ce5-890d-ad0385f7a004">concurrency::reader_writer_lock::scoped_lock</legacyLink> classes. The constructor of the <unmanagedCodeEntityReference>semaphore::scoped_lock</unmanagedCodeEntityReference> class acquires access to the given <unmanagedCodeEntityReference>semaphore</unmanagedCodeEntityReference> object and the destructor releases access to that object.</para>
      <codeReference>concrt-cooperative-semaphore#7</codeReference>
      <para>The following example modifies the body of the work function that is passed to the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm so that it uses RAII to ensure that the semaphore is released before the function returns. This technique ensures that the work function is exception-safe.</para>
      <codeReference>concrt-cooperative-semaphore#8</codeReference>
    </content>
  </robustProgramming>
  <relatedTopics>
    <link xlink:href="10c1d861-8fbb-4ba0-b2ec-61876b11176e">Contexts</link>

    <link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>
  </relatedTopics>
</developerHowToDocument>