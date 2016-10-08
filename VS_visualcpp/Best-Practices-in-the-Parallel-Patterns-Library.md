---
title: "Best Practices in the Parallel Patterns Library"
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
ms.assetid: e43e0304-4d54-4bd8-a3b3-b8673559a9d7
caps.latest.revision: 17
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
# Best Practices in the Parallel Patterns Library
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This document describes how best to make effective use of the Parallel Patterns Library (PPL). The PPL provides general-purpose containers, objects, and algorithms for performing fine-grained parallelism. </para>
    <para>For more information about the PPL, see <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>.</para>
  </introduction>
  <section address="top">
    <title>Sections</title>
    <content>
      <para>This document contains the following sections:</para>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#small-loops">Do Not Parallelize Small Loop Bodies</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#highest">Express Parallelism at the Highest Possible Level</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#divide-and-conquer">Use parallel_invoke to Solve Divide-and-Conquer Problems</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#breaking-loops">Use Cancellation or Exception Handling to Break from a Parallel Loop</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#object-destruction">Understand how Cancellation and Exception Handling Affect Object Destruction</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#repeated-blocking">Do Not Block Repeatedly in a Parallel Loop</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#blocking">Do Not Perform Blocking Operations When You Cancel Parallel Work</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#shared-writes">Do Not Write to Shared Data in a Parallel Loop</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#false-sharing">When Possible, Avoid False Sharing</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#lifetime">Make Sure That Variables Are Valid Throughout the Lifetime of a Task</legacyLink>
          </para>
        </listItem>
      </list>
    </content>
  </section>
  <section address="small-loops">
    <title>Do Not Parallelize Small Loop Bodies</title>
    <content>
      <para>The parallelization of relatively small loop bodies can cause the associated scheduling overhead to outweigh the benefits of parallel processing. Consider the following example, which adds each pair of elements in two arrays.</para>
      <codeReference>concrt-small-loops#1</codeReference>
      <para>The workload for each parallel loop iteration is too small to benefit from the overhead for parallel processing. You can improve the performance of this loop by performing more work in the loop body or by performing the loop serially. </para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="highest">
    <title>Express Parallelism at the Highest Possible Level</title>
    <content>
      <para>When you parallelize code only at the low level, you can introduce a fork-join construct that does not scale as the number of processors increases. A <newTerm>fork-join</newTerm> construct is a construct where one task divides its work into smaller parallel subtasks and waits for those subtasks to finish. Each subtask can recursively divide itself into additional subtasks. </para>
      <para>Although the fork-join model can be useful for solving a variety of problems, there are situations where the synchronization overhead can decrease scalability. For example, consider the following serial code that processes image data.</para>
      <codeReference>concrt-image-processing-filter#20</codeReference>
      <para>Because each loop iteration is independent, you can parallelize much of the work, as shown in the following example. This example uses the <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink> algorithm to parallelize the outer loop.</para>
      <codeReference>concrt-image-processing-filter#3</codeReference>
      <para>The following example illustrates a fork-join construct by calling the <unmanagedCodeEntityReference>ProcessImage</unmanagedCodeEntityReference> function in a loop. Each call to <unmanagedCodeEntityReference>ProcessImage</unmanagedCodeEntityReference> does not return until each subtask finishes. </para>
      <codeReference>concrt-image-processing-filter#21</codeReference>
      <para>If each iteration of the parallel loop either performs almost no work, or the work that is performed by the parallel loop is imbalanced, that is, some loop iterations take longer than others, the scheduling overhead that is required to frequently fork and join work can outweigh the benefit to parallel execution. This overhead increases as the number of processors increases.</para>
      <para>To reduce the amount of scheduling overhead in this example, you can parallelize outer loops before you parallelize inner loops or use another parallel construct such as pipelining. The following example modifies the <unmanagedCodeEntityReference>ProcessImages</unmanagedCodeEntityReference> function to use the <legacyLink xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">concurrency::parallel_for_each</legacyLink> algorithm to parallelize the outer loop.</para>
      <codeReference>concrt-image-processing-filter#22</codeReference>
      <para>For a similar example that uses a pipeline to perform image processing in parallel, see <link xlink:href="78ccadc9-5ce2-46cc-bd62-ce0f99d356b8">Walkthrough: Creating an Image-Processing Network</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="divide-and-conquer">
    <title>Use parallel_invoke to Solve Divide-and-Conquer Problems</title>
    <content>
      <para>A <newTerm>divide-and-conquer</newTerm> problem is a form of the fork-join construct that uses recursion to break a task into subtasks. In addition to the <legacyLink xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">concurrency::task_group</legacyLink> and <legacyLink xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">concurrency::structured_task_group</legacyLink> classes, you can also use the <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm to solve divide-and-conquer problems. The <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm has a more succinct syntax than task group objects, and is useful when you have a fixed number of parallel tasks.</para>
      <para>The following example illustrates the use of the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to implement the bitonic sorting algorithm.</para>
      <codeReference>concrt-parallel-bitonic-sort#12</codeReference>
      <para>To reduce overhead, the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm performs the last of the series of tasks on the calling context.</para>
      <para>For the complete version of this example, see <link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">Walkthrough: Using Task Groups to Improve Performance</link>. For more information about the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm, see <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="breaking-loops">
    <title>Use Cancellation or Exception Handling to Break from a Parallel Loop</title>
    <content>
      <para>The PPL provides two ways to cancel the parallel work that is performed by a task group or parallel algorithm. One way is to use the cancellation mechanism that is provided by the <legacyLink xlink:href="b4af5b28-227d-4488-8194-0a0d039173b7">concurrency::task_group</legacyLink> and <legacyLink xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">concurrency::structured_task_group</legacyLink> classes. The other way is to throw an exception in the body of a task work function. The cancellation mechanism is more efficient than exception handling at canceling a tree of parallel work. A <newTerm>parallel work tree</newTerm> is a group of related task groups in which some task groups contain other task groups. The cancellation mechanism cancels a task group and its child task groups in a top-down manner. Conversely, exception handling works in a bottom-up manner and must cancel each child task group independently as the exception propagates upward.</para>
      <para>When you work directly with a task group object, use the <legacyLink xlink:href="4f808727-92cd-4158-bc80-dac982c9630e">concurrency::task_group::cancel</legacyLink> or <legacyLink xlink:href="8b6015cd-cc68-4fe8-9467-a34386adbd69">concurrency::structured_task_group::cancel</legacyLink> methods to cancel the work that belongs to that task group. To cancel a parallel algorithm, for example, <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>, create a parent task group and cancel that task group. For example, consider the following function, <unmanagedCodeEntityReference>parallel_find_any</unmanagedCodeEntityReference>, which searches for a value in an array in parallel.</para>
      <codeReference>concrt-parallel-array-search#2</codeReference>
      <para>Because parallel algorithms use task groups, when one of the parallel iterations cancels the parent task group, the overall task is canceled. For the complete version of this example, see <link xlink:href="421cd2de-f058-465f-b890-dd8fcc0df273">How to: Use Cancellation to Break from a Parallel Loop</link>.</para>
      <para>Although exception handling is a less efficient way to cancel parallel work than the cancellation mechanism, there are cases where exception handling is appropriate. For example, the following method, <unmanagedCodeEntityReference>for_all</unmanagedCodeEntityReference>, recursively performs a work function on each node of a <unmanagedCodeEntityReference>tree</unmanagedCodeEntityReference> structure. In this example, the <unmanagedCodeEntityReference>_children</unmanagedCodeEntityReference> data member is a <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">std::list</legacyLink> that contains <unmanagedCodeEntityReference>tree</unmanagedCodeEntityReference> objects.</para>
      <codeReference>concrt-task-tree-search#6</codeReference>
      <para>The caller of the <unmanagedCodeEntityReference>tree::for_all</unmanagedCodeEntityReference> method can throw an exception if it does not require the work function to be called on each element of the tree. The following example shows the <unmanagedCodeEntityReference>search_for_value</unmanagedCodeEntityReference> function, which searches for a value in the provided <unmanagedCodeEntityReference>tree</unmanagedCodeEntityReference> object. The <unmanagedCodeEntityReference>search_for_value</unmanagedCodeEntityReference> function uses a work function that throws an exception when the current element of the tree matches the provided value. The <unmanagedCodeEntityReference>search_for_value</unmanagedCodeEntityReference> function uses a <languageKeyword>try-catch</languageKeyword> block to capture the exception and print the result to the console.</para>
      <codeReference>concrt-task-tree-search#3</codeReference>
      <para>For the complete version of this example, see <link xlink:href="16d7278c-2d10-4014-9f58-f1899e719ff9">How to: Use Exception Handling to Break from a Parallel Loop</link>.</para>
      <para>For more general information about the cancellation and exception-handling mechanisms that are provided by the PPL, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link> and <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="object-destruction">
    <title>Understand how Cancellation and Exception Handling Affect Object Destruction</title>
    <content>
      <para>In a tree of parallel work, a task that is canceled prevents child tasks from running. This can cause problems if one of the child tasks performs an operation that is important to your application, such as freeing a resource. In addition, task cancellation can cause an exception to propagate through an object destructor and cause undefined behavior in your application.</para>
      <para>In the following example, the <unmanagedCodeEntityReference>Resource</unmanagedCodeEntityReference> class describes a resource and the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> class describes a container that holds resources. In its destructor, the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> class calls the <unmanagedCodeEntityReference>cleanup</unmanagedCodeEntityReference> method on two of its <unmanagedCodeEntityReference>Resource</unmanagedCodeEntityReference> members in parallel and then calls the <unmanagedCodeEntityReference>cleanup</unmanagedCodeEntityReference> method on its third <unmanagedCodeEntityReference>Resource</unmanagedCodeEntityReference> member.</para>
      <codeReference>concrt-parallel-resource-destruction#1</codeReference>
      <para>Although this pattern has no problems on its own, consider the following code that runs two tasks in parallel. The first task creates a <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> object and the second task cancels the overall task. For illustration, the example uses two <legacyLink xlink:href="fba35a53-6568-4bfa-9aaf-07c0928cf73d">concurrency::event</legacyLink> objects to make sure that the cancellation occurs after the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> object is created and that the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> object is destroyed after the cancellation operation occurs.</para>
      <codeReference>concrt-parallel-resource-destruction#2</codeReference>
      <para>This example produces the following output:</para>
      <computerOutput>Container 1: Freeing resources...Exiting program...</computerOutput>
      <para>This code example contains the following issues that may cause it to behave differently than you expect:</para>
      <list class="bullet">
        <listItem>
          <para>The cancellation of the parent task causes the child task, the call to <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink>, to also be canceled. Therefore, these two resources are not freed.</para>
        </listItem>
        <listItem>
          <para>The cancellation of the parent task causes the child task to throw an internal exception. Because the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> destructor does not handle this exception, the exception is propagated upward and the third resource is not freed. </para>
        </listItem>
        <listItem>
          <para>The exception that is thrown by the child task propagates through the <unmanagedCodeEntityReference>Container</unmanagedCodeEntityReference> destructor. Throwing from a destructor puts the application in an undefined state.</para>
        </listItem>
      </list>
      <para>We recommend that you do not perform critical operations, such as the freeing of resources, in tasks unless you can guarantee that these tasks will not be canceled. We also recommend that you do not use runtime functionality that can throw in the destructor of your types.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="repeated-blocking">
    <title>Do Not Block Repeatedly in a Parallel Loop</title>
    <content>
      <para>A parallel loop such as <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink> or <legacyLink xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">concurrency::parallel_for_each</legacyLink> that is dominated by blocking operations may cause the runtime to create many threads over a short time.</para>
      <para>The Concurrency Runtime performs additional work when a task finishes or cooperatively blocks or yields. When one parallel loop iteration blocks, the runtime might begin another iteration. When there are no available idle threads, the runtime creates a new thread.</para>
      <para>When the body of a parallel loop occasionally blocks, this mechanism helps maximize the overall task throughput. However, when many iterations block, the runtime may create many threads to run the additional work. This could lead to low-memory conditions or poor utilization of hardware resources.</para>
      <para>Consider the following example that calls the <legacyLink xlink:href="8713fb36-066b-47de-af12-589fa74805d6">concurrency::send</legacyLink> function in each iteration of a <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> loop. Because <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> blocks cooperatively, the runtime creates a new thread to run additional work every time <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> is called.</para>
      <codeReference>concrt-repeated-blocking#1</codeReference>
      <para>We recommend that you refactor your code to avoid this pattern. In this example, you can avoid the creation of additional threads by calling <unmanagedCodeEntityReference>send</unmanagedCodeEntityReference> in a serial <languageKeyword>for</languageKeyword> loop.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="blocking">
    <title>Do Not Perform Blocking Operations When You Cancel Parallel Work</title>
    <content>
      <para>When possible, do not perform blocking operations before you call the <legacyLink xlink:href="4f808727-92cd-4158-bc80-dac982c9630e">concurrency::task_group::cancel</legacyLink> or <legacyLink xlink:href="8b6015cd-cc68-4fe8-9467-a34386adbd69">concurrency::structured_task_group::cancel</legacyLink> method to cancel parallel work.</para>
      <para>When a task performs a cooperative blocking operation, the runtime can perform other work while the first task waits for data. The runtime reschedules the waiting task when it unblocks. The runtime typically reschedules tasks that were more recently unblocked before it reschedules tasks that were less recently unblocked. Therefore, the runtime could schedule unnecessary work during the blocking operation, which leads to decreased performance. Accordingly, when you perform a blocking operation before you cancel parallel work, the blocking operation can delay the call to <unmanagedCodeEntityReference>cancel</unmanagedCodeEntityReference>. This causes other tasks to perform unnecessary work.</para>
      <para>Consider the following example that defines the <unmanagedCodeEntityReference>parallel_find_answer</unmanagedCodeEntityReference> function, which searches for an element of the provided array that satisfies the provided predicate function. When the predicate function returns <languageKeyword>true</languageKeyword>, the parallel work function creates an <unmanagedCodeEntityReference>Answer</unmanagedCodeEntityReference> object and cancels the overall task.</para>
      <codeReference>concrt-blocking-cancel#1</codeReference>
      <para>The <languageKeyword>new</languageKeyword> operator performs a heap allocation, which might block. The runtime performs other work only when the task performs a cooperative blocking call, such as a call to <legacyLink xlink:href="62cc3d7b-4331-403e-8595-d07ff24023e4">concurrency::critical_section::lock</legacyLink>. </para>
      <para>The following example shows how to prevent unnecessary work, and thereby improve performance. This example cancels the task group before it allocates the storage for the <unmanagedCodeEntityReference>Answer</unmanagedCodeEntityReference> object.</para>
      <codeReference>concrt-blocking-cancel#2</codeReference>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="shared-writes">
    <title>Do Not Write to Shared Data in a Parallel Loop</title>
    <content>
      <para>The Concurrency Runtime provides several data structures, for example, <legacyLink xlink:href="fa3c89d6-be5d-4d1b-bddb-8232814e6cf6">concurrency::critical_section</legacyLink>, that synchronize concurrent access to shared data. These data structures are useful in many cases, for example, when multiple tasks infrequently require shared access to a resource. </para>
      <para>Consider the following example that uses the <legacyLink xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">concurrency::parallel_for_each</legacyLink> algorithm and a <unmanagedCodeEntityReference>critical_section</unmanagedCodeEntityReference> object to compute the count of prime numbers in a <legacyLink xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293">std::array</legacyLink> object. This example does not scale because each thread must wait to access the shared variable <unmanagedCodeEntityReference>prime_sum</unmanagedCodeEntityReference>.</para>
      <codeReference>concrt-parallel-sum-of-primes#2</codeReference>
      <para>This example can also lead to poor performance because the frequent locking operation effectively serializes the loop. In addition, when a Concurrency Runtime object performs a blocking operation, the scheduler might create an additional thread to perform other work while the first thread waits for data. If the runtime creates many threads because many tasks are waiting for shared data, the application can perform poorly or enter a low-resource state.</para>
      <para>The PPL defines the <legacyLink xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">concurrency::combinable</legacyLink> class, which helps you eliminate shared state by providing access to shared resources in a lock-free manner. The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class provides thread-local storage that lets you perform fine-grained computations and then merge those computations into a final result. You can think of a <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object as a reduction variable.</para>
      <para>The following example modifies the previous one by using a <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> object instead of a <unmanagedCodeEntityReference>critical_section</unmanagedCodeEntityReference> object to compute the sum. This example scales because each thread holds its own local copy of the sum. This example uses the <legacyLink xlink:href="492e55cc-c1f8-4e0e-8356-2636f25563de">concurrency::combinable::combine</legacyLink> method to merge the local computations into the final result.</para>
      <codeReference>concrt-parallel-sum-of-primes#3</codeReference>
      <para>For the complete version of this example, see <link xlink:href="fa730580-1c94-4b2d-8aec-57c91dc0497e">How to: Use combinable to Improve Performance</link>. For more information about the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class, see <link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="false-sharing">
    <title>When Possible, Avoid False Sharing</title>
    <content>
      <para>
        <newTerm>False sharing</newTerm> occurs when multiple concurrent tasks that are running on separate processors write to variables that are located on the same cache line. When one task writes to one of the variables, the cache line for both variables is invalidated. Each processor must reload the cache line every time that the cache line is invalidated. Therefore, false sharing can cause decreased performance in your application.</para>
      <para>The following basic example shows two concurrent tasks that each increment a shared counter variable.</para>
      <codeReference>concrt-false-sharing#1</codeReference>
      <para>To eliminate the sharing of data between the two tasks, you can modify the example to use two counter variables. This example computes the final counter value after the tasks finish. However, this example illustrates false sharing because the variables <unmanagedCodeEntityReference>count1</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>count2</unmanagedCodeEntityReference> are likely to be located on the same cache line.</para>
      <codeReference>concrt-false-sharing#2</codeReference>
      <para>One way to eliminate false sharing is to make sure that the counter variables are on separate cache lines. The following example aligns the variables <unmanagedCodeEntityReference>count1</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>count2</unmanagedCodeEntityReference> on 64-byte boundaries.</para>
      <codeReference>concrt-false-sharing#3</codeReference>
      <para>This example assumes that the size of the memory cache is 64 or fewer bytes.</para>
      <para>We recommend that you use the <legacyLink xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">concurrency::combinable</legacyLink> class when you must share data among tasks. The <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class creates thread-local variables in such a way that false sharing is less likely. For more information about the <unmanagedCodeEntityReference>combinable</unmanagedCodeEntityReference> class, see <link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="lifetime">
    <title>Make Sure That Variables Are Valid Throughout the Lifetime of a Task</title>
    <content>
      <para>When you provide a lambda expression to a task group or parallel algorithm, the capture clause specifies whether the body of the lambda expression accesses variables in the enclosing scope by value or by reference. When you pass variables to a lambda expression by reference, you must guarantee that the lifetime of that variable persists until the task finishes.</para>
      <para>Consider the following example that defines the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> class and the <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function. The <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function creates an <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable and performs some action on that variable asynchronously. Because the task is not guaranteed to finish before the <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function returns, the program will crash or exhibit unspecified behavior if the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable is destroyed when the task is running. </para>
      <codeReference>concrt-lambda-lifetime#1</codeReference>
      <para>Depending on the requirements of your application, you can use one of the following techniques to guarantee that variables remain valid throughout the lifetime of every task.</para>
      <para>The following example passes the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable by value to the task. Therefore, the task operates on its own copy of the variable.</para>
      <codeReference>concrt-lambda-lifetime#2</codeReference>
      <para>Because the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable is passed by value, any state changes that occur to this variable do not appear in the original copy. </para>
      <para>The following example uses the <legacyLink xlink:href="19ee5bbc-8654-40a7-9f22-d5329cec6e96">concurrency::task_group::wait</legacyLink> method to make sure that the task finishes before the <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function returns.</para>
      <codeReference>concrt-lambda-lifetime#3</codeReference>
      <para>Because the task now finishes before the function returns, the <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function no longer behaves asynchronously. </para>
      <para>The following example modifies the <unmanagedCodeEntityReference>perform_action</unmanagedCodeEntityReference> function to take a reference to the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable. The caller must guarantee that the lifetime of the <unmanagedCodeEntityReference>object</unmanagedCodeEntityReference> variable is valid until the task finishes.</para>
      <codeReference>concrt-lambda-lifetime#4</codeReference>
      <para>You can also use a pointer to control the lifetime of an object that you pass to a task group or parallel algorithm.</para>
      <para>For more information about lambda expressions, see <link xlink:href="713c7638-92be-4ade-ab22-fa33417073bf">Lambda Expressions in C++</link>.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="7231d4be-d1e3-401d-8b66-94fd51b587c9">Concurrency Runtime Best Practices</link>
<link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>
<link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>
<link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>
<link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>
<link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>
<link xlink:href="78ccadc9-5ce2-46cc-bd62-ce0f99d356b8">Walkthrough: Creating an Image-Processing Network</link>
<link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">Walkthrough: Using Task Groups to Improve Performance</link>
<link xlink:href="421cd2de-f058-465f-b890-dd8fcc0df273">How to: Use Cancellation to Break from a Parallel Loop</link>
<link xlink:href="fa730580-1c94-4b2d-8aec-57c91dc0497e">How to: Use combinable to Improve Performance</link>
<link xlink:href="85f52354-41eb-4b0d-98c5-f7344ee8a8cf">Best Practices in the Asynchronous Agents Library</link>
<link xlink:href="ce5c784c-051e-44a6-be84-8b3e1139c18b">General Best Practices in the Concurrency Runtime</link>
</relatedTopics>
</developerConceptualDocument>