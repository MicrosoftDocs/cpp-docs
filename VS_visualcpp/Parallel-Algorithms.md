---
title: "Parallel Algorithms"
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
ms.assetid: 045dca7b-4d73-4558-a44c-383b88a28473
caps.latest.revision: 30
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
# Parallel Algorithms
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Parallel Patterns Library (PPL) provides algorithms that concurrently perform work on collections of data. These algorithms resemble those provided by the Standard Template Library (STL).</para>
    <para>The parallel algorithms are composed from existing functionality in the Concurrency Runtime. For example, the <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink> algorithm uses a <legacyLink xlink:href="742afa8c-c7b6-482c-b0ba-04c809927b22">concurrency::structured_task_group</legacyLink> object to perform the parallel loop iterations. The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm partitions work in an optimal way given the available number of computing resources.</para>
  </introduction>
  <section address="top">
    <title>Sections</title>
    <content>
      <list class="bullet">
        <listItem>
          <para>
            <legacyLink xlink:href="#parallel_for">The parallel_for Algorithm</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#parallel_for_each">The parallel_for_each Algorithm</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#parallel_invoke">The parallel_invoke Algorithm</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#parallel_transform_reduce">The parallel_transform and parallel_reduce Algorithms</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#parallel_transform">The parallel_transform Algorithm</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#parallel_reduce">The parallel_reduce Algorithm</legacyLink>
              </para>
            </listItem>
            <listItem>
              <para>
                <legacyLink xlink:href="#map_reduce_example">Example: Performing Map and Reduce in Parallel</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#partitions">Partitioning Work</legacyLink>
          </para>
        </listItem>
        <listItem>
          <para>
            <legacyLink xlink:href="#parallel_sorting">Parallel Sorting</legacyLink>
          </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyLink xlink:href="#choose_sort">Choosing a Sorting Algorithm</legacyLink>
              </para>
            </listItem>
          </list>
        </listItem>
      </list>
    </content>
  </section>
  <section address="parallel_for">
    <title>The parallel_for Algorithm</title>
    <content>
      <para>The <legacyLink xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">concurrency::parallel_for</legacyLink> algorithm repeatedly performs the same task in parallel. Each of these tasks is parameterized by an iteration value. This algorithm is useful when you have a loop body that does not share resources among iterations of that loop.</para>
      <para>The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm partitions tasks in an optimum way for parallel execution. It uses a work-stealing algorithm and range stealing to balance these partitions when workloads are unbalanced. When one loop iteration blocks cooperatively, the runtime redistributes the range of iterations that is assigned to the current thread to other threads or processors. Similarly, when a thread completes a range of iterations, the runtime redistributes work from other threads to that thread. The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm also supports <newTerm>nested parallelism</newTerm>. When one parallel loop contains another parallel loop, the runtime coordinates processing resources between the loop bodies in an efficient way for parallel execution.</para>
      <para>The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm has several overloaded versions. The first version takes a start value, an end value, and a work function (a lambda expression, function object, or function pointer). The second version takes a start value, an end value, a value by which to step, and a work function. The first version of this function uses 1 as the step value. The remaining versions take partitioner objects, which enable you to specify how <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> should partition ranges among threads. Partitioners are explained in greater detail in the section <legacyLink xlink:href="#partitions">Partitioning Work</legacyLink> in this document.</para>
      <para>You can convert many <languageKeyword>for</languageKeyword> loops to use <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>. However, the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm differs from the <languageKeyword>for</languageKeyword> statement in the following ways:</para>
      <list class="bullet">
        <listItem>
          <para>The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> does not execute the tasks in a pre-determined order.</para>
        </listItem>
        <listItem>
          <para>The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm does not support arbitrary termination conditions. The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm stops when the current value of the iteration variable is one less than <parameterReference>_Last</parameterReference>. </para>
        </listItem>
        <listItem>
          <para>The <parameterReference>_Index_type</parameterReference> type parameter must be an integral type. This integral type can be signed or unsigned.</para>
        </listItem>
        <listItem>
          <para>The loop iteration must be forward. The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm throws an exception of type <legacyLink xlink:href="af6c227d-ad7c-4e63-9dee-67af81d83506">std::invalid_argument</legacyLink> if the <parameterReference>_Step</parameterReference> parameter is less than 1.</para>
        </listItem>
        <listItem>
          <para>The exception-handling mechanism for the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm differs from that of a <languageKeyword>for</languageKeyword> loop. If multiple exceptions occur simultaneously in a parallel loop body, the runtime propagates only one of the exceptions to the thread that called <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>. In addition, when one loop iteration throws an exception, the runtime does not immediately stop the overall loop. Instead, the loop is placed in the cancelled state and the runtime discards any tasks that have not yet started. For more information about exception-handling and parallel algorithms, see <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
        </listItem>
      </list>
      <para>Although the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm does not support arbitrary termination conditions, you can use cancellation to stop all tasks. For more information about cancellation, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>.</para>
      <alert class="note">
        <para>The scheduling cost that results from load balancing and support for features such as cancellation might not overcome the benefits of executing the loop body in parallel, especially when the loop body is relatively small. You can minimize this overhead by using a partitioner in your parallel loop. For more information, see <legacyLink xlink:href="#partitions">Partitioning Work</legacyLink> later in this document.</para>
      </alert>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm. This example prints to the console each value in the range [1, 5] in parallel.</para>
          <codeReference>concrt-parallel-for-structure#1</codeReference>
          <para>This example produces the following sample output:</para>
          <computerOutput>1 2 4 3 5</computerOutput>
          <para>Because the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm acts on each item in parallel, the order in which the values are printed to the console will vary.</para>
          <para>For a complete example that uses the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm, see <link xlink:href="adb4d64e-5514-4b70-8dcb-b9210e6b5a1c">How to: Write a parallel_for Loop</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="parallel_for_each">
    <title>The parallel_for_each Algorithm</title>
    <content>
      <para>The <legacyLink xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">concurrency::parallel_for_each</legacyLink> algorithm performs tasks on an iterative container, such as those provided by the STL, in parallel. It uses the same partitioning logic that the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm uses.</para>
      <para>The <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm resembles the STL <legacyLink xlink:href="8cb2ae72-bef6-488b-b011-0475c0787e33">std::for_each</legacyLink> algorithm, except that the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm executes the tasks concurrently. Like other parallel algorithms, <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> does not execute the tasks in a specific order.</para>
      <para>Although the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm works on both forward iterators and random access iterators, it performs better with random access iterators.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm. This example prints to the console each value in a <legacyLink xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293">std::array</legacyLink> object in parallel.</para>
          <codeReference>concrt-parallel-for-each-structure#1</codeReference>
          <para>This example produces the following sample output:</para>
          <computerOutput>4 5 1 2 3</computerOutput>
          <para>Because the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm acts on each item in parallel, the order in which the values are printed to the console will vary.</para>
          <para>For a complete example that uses the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm, see <link xlink:href="fa9c0ba6-ace0-4f88-8681-c7c1f52aff20">How to: Write a parallel_for_each Loop</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="parallel_invoke">
    <title>The parallel_invoke Algorithm</title>
    <content>
      <para>The <legacyLink xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">concurrency::parallel_invoke</legacyLink> algorithm executes a set of tasks in parallel. It does not return until each task finishes. This algorithm is useful when you have several independent tasks that you want to execute at the same time.</para>
      <para>The <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm takes as its parameters a series of work functions (lambda functions, function objects, or function pointers). The <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm is overloaded to take between two and ten parameters. Every function that you pass to <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> must take zero parameters.</para>
      <para>Like other parallel algorithms, <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> does not execute the tasks in a specific order. The topic <link xlink:href="42f05ac3-2098-494a-ba84-737fcdcad077">Task Parallelism (Concurrency Runtime)</link> explains how the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm relates to tasks and task groups.</para>
    </content>
    <sections>
      <section>
        <title>Example</title>
        <content>
          <para>The following example shows the basic structure of the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm. This example concurrently calls the <unmanagedCodeEntityReference>twice</unmanagedCodeEntityReference> function on three local variables and prints the result to the console.</para>
          <codeReference>concrt-parallel-invoke-structure#1</codeReference>
          <para>This example produces the following output:</para>
          <computerOutput>108 11.2 HelloHello</computerOutput>
          <para>For complete examples that use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm, <?Comment TP: For RC, reconsider this example because we now how PAGE \# "'Page: '#''" 3 versions ofparallel_sort. (Perhaps just add a note saying that it’s for demonstration, but useparallel_sortin real world code. 2012-04-04T09:47:00Z  Id='66?>see <?CommentEnd Id='66'
    ?><link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">How to: Use parallel_invoke to Write a Parallel Sort Routine</link> and <link xlink:href="a6aea69b-d647-4b7e-bf3b-e6a6a9880072">How to: Use parallel_invoke to Execute Parallel Operations</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="parallel_transform_reduce">
    <title>The parallel_transform and parallel_reduce Algorithms</title>
    <content>
      <para>The <legacyLink xlink:href="3f61f693-2a7f-45a7-8904-b6df436a2818">concurrency::parallel_transform</legacyLink> and <legacyLink xlink:href="275a2706-c12a-4c87-9ad6-f07d4fc205cc">concurrency::parallel_reduce</legacyLink> algorithms are parallel versions of the STL algorithms <legacyLink xlink:href="99396865-54fb-47dd-a661-38ce03467854">std::transform</legacyLink> and <legacyLink xlink:href="9908525b-967c-402d-9ee9-aadacc241efc">std::accumulate</legacyLink>, respectively. The Concurrency Runtime versions behave like the STL versions except that the operation order is not determined because they execute in parallel. Use these algorithms when you work with a set that is large enough to get performance and scalability benefits from being processed in parallel.</para>
      <alert class="important">
        <para>The <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithms support only random access, bi-directional, and forward iterators because these iterators produce stable memory addresses. Also, these iterators must produce non-<languageKeyword>const</languageKeyword> l-values.</para>
      </alert>
    </content>
    <sections>
      <section address="parallel_transform">
        <title>The parallel_transform Algorithm</title>
        <content>
          <para>You can use the <unmanagedCodeEntityReference>parallel transform</unmanagedCodeEntityReference> algorithm to perform many data parallelization operations. For example, you can:</para>
          <list class="bullet">
            <listItem>
              <para>Adjust the brightness of an image, and perform other image processing operations.</para>
            </listItem>
            <listItem>
              <para>Sum or take the dot product between two vectors, and perform other numeric calculations on vectors.</para>
            </listItem>
            <listItem>
              <para>Perform 3-D ray tracing, where each iteration refers to one pixel that must be rendered.</para>
            </listItem>
          </list>
          <para>The following example shows the basic structure that is used to call the <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithm. This example negates each element of a std::"vector" object in two ways. The first way uses a lambda expression. The second way uses <legacyLink xlink:href="8a372686-786e-4262-b37c-ca13dc11e62f">std::negate</legacyLink>, which derives from <legacyLink xlink:href="04c2fbdc-c1f6-48ed-b6cc-292a6d484627">std::unary_function</legacyLink>.</para>
          <codeReference>concrt-basic-parallel-transform#1</codeReference>
          <alert class="warning">
            <para>This example demonstrates the basic use of <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference>. Because the work function does not perform a significant amount of work, a significant increase in performance is not expected in this example.</para>
          </alert>
          <para>The <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithm has two overloads. The first overload takes one input range and a unary function. The unary function can be a lambda expression that takes one argument, a function object, or a type that derives from <unmanagedCodeEntityReference>unary_function</unmanagedCodeEntityReference>. The second overload takes two input ranges and a binary function. The binary function can be a lambda expression that takes two arguments, a function object, or a type that derives from <legacyLink xlink:href="79b6d53d-644c-4add-b0ba-3a5f40f69c60">std::binary_function</legacyLink>. The following example illustrates these differences. </para>
          <codeReference>concrt-parallel-transform-vectors#2</codeReference>
          <alert class="important">
            <para>The iterator that you supply for the output of <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> must completely overlap the input iterator or not overlap at all. The behavior of this algorithm is unspecified if the input and output iterators partially overlap.</para>
          </alert>
        </content>
      </section>
      <section address="parallel_reduce">
        <title>
          <?Comment TP:  PAGE \# "'Page: '#''" Review: Not talking about the two-phase design because that’s strictly an implementation detail. Correct?From Hong:If you only introduce the simplest version ofparallel_reduce, two-phase design are not necessary, however, to understand the advanced overloadparallel_reduce, I didn’t see the way to avoid that topic.Do we have “in depth” topic onthat ? 2012-04-04T09:47:00Z  Id='283?>The parallel_reduce Algorithm<?CommentEnd Id='283'
    ?></title>
        <content>
          <para>The <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithm is useful when you have a sequence of operations that satisfy the associative property. (This algorithm does not require the commutative property.) Here are some of the operations that you can perform with <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference>:</para>
          <list class="bullet">
            <listItem>
              <para>Multiply sequences of matrices to produce a matrix.</para>
            </listItem>
            <listItem>
              <para>Multiply a vector by a sequence of matrices to produce a vector.</para>
            </listItem>
            <listItem>
              <para>Compute the length of a sequence of strings.</para>
            </listItem>
            <listItem>
              <para>Combine a list of elements, such as strings, into one element.</para>
            </listItem>
          </list>
          <para>The following basic example shows how to use the <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithm to combine a sequence of strings into one string. As with the examples for <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference>, performance gains are not expected in this basic example.</para>
          <codeReference>concrt-basic-parallel-reduce#1</codeReference>
          <?Comment TP: Need to fix this – perhaps when we talk about the two-phase design. 2012-04-04T09:56:00Z  Id='371?>
          <para />
          <para>In many cases, you can think of <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> as shorthand for the use of the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm together with the <legacyLink xlink:href="fe0bfbf6-6250-47da-b8d0-f75369f0b5be">concurrency::combinable</legacyLink> class.</para>
        </content>
      </section>
      <section address="map_reduce_example">
        <title>Example: Performing Map and Reduce in Parallel</title>
        <content>
          <para>A <newTerm>map</newTerm> operation applies a function to each value in a sequence. A <newTerm>reduce</newTerm> operation combines the elements of a sequence into one value. You can use the Standard Template Library (STL) <legacyLink xlink:href="99396865-54fb-47dd-a661-38ce03467854">std::transform</legacyLink> <legacyLink xlink:href="9908525b-967c-402d-9ee9-aadacc241efc">std::accumulate</legacyLink> classes to perform map and reduce operations. However, for many problems, you can use the <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithm to perform the map operation in parallel and the <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithm perform the reduce operation in parallel.</para>
          <para>The following example compares the time that it takes to compute the sum of prime numbers serially and in parallel. The map phase transforms non-prime values to 0 and the reduce phase sums the values.</para>
          <codeReference>concrt-parallel-map-reduce-sum-of-primes#1</codeReference>
          <para>For another example that performs a map and reduce operation in parallel, see <link xlink:href="9d19fac0-4ab6-4380-a375-3b18eeb87720">How to: Perform Map and Reduce Operations in Parallel</link>.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section address="partitions">
    <title>Partitioning Work</title>
    <content>
      <para>To parallelize an operation on a data source, an essential step is to <newTerm>partition</newTerm> the source into multiple sections that can be accessed concurrently by multiple threads. A partitioner specifies how a parallel algorithm should partition ranges among threads. As explained previously in this document, the PPL uses a default partitioning mechanism that creates an initial workload and then uses a work-stealing algorithm and range stealing to balance these partitions when workloads are unbalanced. For example, when one loop iteration completes a range of iterations, the runtime redistributes work from other threads to that thread. However, for some scenarios, you might want to specify a different partitioning mechanism that is better suited to your <?Comment TP:  PAGE \# "'Page: '#''" For RC, perhaps expand on what problems this solves. 2012-04-04T09:47:00Z  Id='476?>problem<?CommentEnd Id='476'
    ?>. </para>
      <para>The <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithms provide overloaded versions that take an additional parameter, <parameterReference>_Partitioner</parameterReference>. This parameter defines the partitioner type that divides work. Here are the kinds of partitioners that the PPL defines:</para>
      <definitionTable>
        <definedTerm>
          <legacyLink xlink:href="31bf7bb1-bd01-491c-9760-d9d60edfccad">concurrency::affinity_partitioner</legacyLink>
        </definedTerm>
        <definition>
          <para>Divides work into a fixed number of ranges (typically the number of worker threads that are available to work on the loop). This partitioner type resembles <unmanagedCodeEntityReference>static_partitioner</unmanagedCodeEntityReference>, but improves cache affinity by the way it maps ranges to worker threads. This partitioner type can improve performance when a loop is executed over the same data set multiple times (such as a loop within a loop) and the data fits in cache. This partitioner does not fully participate in cancellation. It also does not use cooperative blocking semantics and therefore cannot be used with parallel loops that have a forward dependency.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e">concurrency::auto_partitioner</legacyLink>
        </definedTerm>
        <definition>
          <para>Divides work into an initial number of ranges (typically the number of worker threads that are available to work on the loop). The runtime uses this type by default when you do not call an overloaded parallel algorithm that takes a <parameterReference>_Partitioner</parameterReference> parameter. Each range can be divided into sub-ranges, and thereby enables load balancing to occur. When a range of work completes, the runtime redistributes sub-ranges of work from other threads to that thread. Use this partitioner if your workload does not fall under one of the other categories or you require full support for cancellation or cooperative blocking.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="d7e997af-54d1-43f5-abe0-def72df6edb3">concurrency::simple_partitioner</legacyLink>
        </definedTerm>
        <definition>
          <para>
            <?Comment TP:  PAGE \# "'Page: '#''" TODO: Still not clear when you would use this one. 2012-04-04T09:47:00Z  Id='483?>Divides <?CommentEnd Id='483'
    ?>work into ranges such that each range has at least the number of iterations that are specified by the given chunk size. This partitioner type participates in load balancing; however, the runtime does not divide ranges into sub-ranges. For each worker, the runtime checks for cancellation and performs load-balancing after <parameterReference>_Chunk_size</parameterReference> iterations complete.</para>
        </definition>
        <definedTerm>
          <legacyLink xlink:href="2b3dbdf0-6eb9-49f6-8639-03df1d974143">concurrency::static_partitioner</legacyLink>
        </definedTerm>
        <definition>
          <para>Divides work into a fixed number of ranges (typically the number of worker threads that are available to work on the loop). This partitioner type can improve performance because it does not use work-stealing and therefore has less overhead. Use this partitioner type when each iteration of a parallel loop performs a fixed and uniform amount of work and you do not require support for cancellation or forward cooperative blocking.</para>
        </definition>
      </definitionTable>
      <alert class="warning">
        <para>The <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithms support only containers that use random access iterators (such as std::"vector") for the static, simple, and affinity partitioners. The use of containers that use bidirectional and forward iterators produces a compile-time error. The default partitioner, <unmanagedCodeEntityReference>auto_partitioner</unmanagedCodeEntityReference>, supports all three of these iterator types.</para>
      </alert>
      <para>Typically, these partitioners are used in the same way, except for <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference>. Most partitioner types do not maintain state and are not modified by the runtime. Therefore you can create these partitioner objects at the call site, as shown in the following example.</para>
      <codeReference>concrt-static-partitioner#1</codeReference>
      <para>However, you must pass an <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference> object as a non-<languageKeyword>const</languageKeyword>, l-value reference so that the algorithm can store state for future loops to reuse. The following example shows a basic application that performs the same operation on a data set in parallel multiple times. The use of <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference> can improve performance because the array is likely to fit in cache.</para>
      <codeReference>concrt-affinity-partitioner#1</codeReference>
      <alert class="caution">
        <para>Use caution when you modify existing code that relies on cooperative blocking semantics to use <unmanagedCodeEntityReference>static_partitioner</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>affinity_partitioner</unmanagedCodeEntityReference>. These partitioner types do not use load balancing or range stealing, and therefore can alter the behavior of your application.</para>
      </alert>
      <para>The best way to determine whether to use a partitioner in any given scenario is to experiment and measure how long it takes operations to complete under representative loads and computer configurations. For example, static partitioning might provide significant speedup on a multi-core computer that has only a few cores, but it might result in slowdowns on computers that have relatively many cores.</para>
      <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
    </content>
  </section>
  <section address="parallel_sorting">
    <title>Parallel Sorting</title>
    <content>
      <para>The PPL provides three sorting algorithms: <legacyLink xlink:href="9c84defe-c8c2-4b56-806e-484b1ce73ef5">concurrency::parallel_sort</legacyLink>, <legacyLink xlink:href="fe173c7e-7986-4a31-86e5-0e03c8648824">concurrency::parallel_buffered_sort</legacyLink>, and <legacyLink xlink:href="f3cf915b-b280-4bf1-bed9-ce3fb660341c">concurrency::parallel_radixsort</legacyLink>. These sorting algorithms are useful when you have a data set that can benefit from being sorted in parallel. In particular, sorting in parallel is useful when you have a large dataset or when you use a computationally-expensive compare operation to sort your data. Each of these algorithms sorts elements in place.</para>
      <para>The <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> algorithms are both compare-based algorithms. That is, they compare elements by value. The <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> algorithm has no additional memory requirements, and is suitable for general-purpose sorting. The <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> algorithm can perform better than <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference>, but it requires <math>O(N)</math> space.</para>
      <para>The <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> algorithm is hash-based. That is, it uses integer keys to sort elements. By using keys, this algorithm can directly compute the destination of an element instead of using comparisons. Like <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference>, this algorithm requires <math>O(N)</math> space.</para>
      <para>The following table summarizes the important properties of the three parallel sorting algorithms.</para>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Algorithm</para>
            </TD>
            <TD>
              <para>Description</para>
            </TD>
            <TD>
              <para>Sorting mechanism</para>
            </TD>
            <TD>
              <para>Sort Stability</para>
            </TD>
            <TD>
              <para>Memory requirements</para>
            </TD>
            <TD>
              <para>Time Complexity</para>
            </TD>
            <TD>
              <para>Iterator access</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>General-purpose compare-based sort.</para>
            </TD>
            <TD>
              <para>Compare-based (ascending)</para>
            </TD>
            <TD>
              <para>Unstable</para>
            </TD>
            <TD>
              <para>None</para>
            </TD>
            <TD>
              <para>
                <math>O((N/P)log(N/P) + 2N((P-1)/P))</math>
              </para>
            </TD>
            <TD>
              <para>Random</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Faster general-purpose compare-based sort that requires O(N) space.</para>
            </TD>
            <TD>
              <para>Compare-based (ascending)</para>
            </TD>
            <TD>
              <para>Unstable</para>
            </TD>
            <TD>
              <para>Requires additional <math>O(N)</math> space</para>
            </TD>
            <TD>
              <para>
                <math>O((N/P)log(N))</math>
              </para>
            </TD>
            <TD>
              <para>Random</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Integer key-based sort that requires O(N) space.</para>
            </TD>
            <TD>
              <para>Hash-based</para>
            </TD>
            <TD>
              <para>Stable</para>
            </TD>
            <TD>
              <para>Requires additional <math>O(N)</math> space</para>
            </TD>
            <TD>
              <para>
                <math>O(N/P)</math>
              </para>
            </TD>
            <TD>
              <para>Random</para>
            </TD>
          </tr>
        </tbody>
      </table>
      <?Comment TP: Mark, the last two columns look odd in Preview. Can you take a moment to look at this?Apparently, Word thinks that this table includes a split cell. I couldn't figure out how to fix that, so I just created a new table and then copied the info over. Please double-check my copies. 2012-04-04T09:47:00Z  Id='695?>
      <?CommentEnd Id='695'
    ?>
      <para>The following illustration  shows the important properties of the three parallel sorting algorithms more graphically.</para>
      <mediaLink>
        <image xlink:href="72cc5a6e-153b-4171-873d-8afa14d20f9a" />
      </mediaLink>
      <para>These parallel sorting algorithms follow the rules of cancellation and exception handling. For more information about cancellation and exception handling in the Concurrency Runtime, see <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35#algorithms">Canceling Parallel Algorithms</link> and <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>.</para>
      <alert class="tip">
        <para>These parallel sorting algorithms support <?Comment TP: Review: from the spec:“andspecial overloading for the “swap” function that supports move semantic is also required for compare-based sort”Can you explain this in more detail? I’m not sure what we mean by “special overloading for the swap function”. 2012-04-04T09:47:00Z  Id='872?>move semantics<?CommentEnd Id='872'
    ?>. You can define a move assignment operator to enable swap operations to occur more efficiently. For more information about move semantics and the move assignment operator, see <link xlink:href="eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d">Rvalue Reference Declarator: &amp;&amp;</link>, and <link xlink:href="e75efe0e-4b74-47a9-96ed-4e83cfc4378d">How to: Write a Move Constructor</link>. If you do not provide a move assignment operator or swap function, the sorting algorithms use the copy constructor.</para>
      </alert>
      <para conref="39349da3-11cd-4774-b2cc-b46af5aae5d7">The following basic example shows how to use <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> to sort a <unmanagedCodeEntityReference>vector</unmanagedCodeEntityReference> of <unmanagedCodeEntityReference>int</unmanagedCodeEntityReference> values. By default, <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> uses <legacyLink xlink:href="39349da3-11cd-4774-b2cc-b46af5aae5d7">std::less</legacyLink> to compare values.</para>
      <codeReference>concrt-basic-parallel-sort#1</codeReference>
      <para conref="39349da3-11cd-4774-b2cc-b46af5aae5d7">This example shows how to provide a custom compare function. <?Comment TP: TODO: Best way to describe this? 2012-04-04T09:47:00Z  Id='903?>It uses the <legacyLink xlink:href="fa5cd11c-f94b-4ebf-a42d-47083a83ed6b">std::complex::real</legacyLink> method to sort <?CommentEnd Id='903'
    ?><legacyLink xlink:href="d6492e1c-5eba-4bc5-835b-2a88001a5868">std::complex&lt;double&gt;</legacyLink> values in ascending order.</para>
      <codeReference>concrt-basic-parallel-sort#2</codeReference>
      <para>This example shows how to provide a hash function to the <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> algorithm. This example sorts 3-D points. The points are sorted based on their distance from a reference point.</para>
      <codeReference>concrt-parallel-sort-points#1</codeReference>
      <para>For illustration, this example uses a relatively small data set. You can increase the initial size of the vector to experiment with performance improvements over larger sets of data.</para>
      <para>This example uses a lambda expression as the hash function. You can also use one of the built-in implementations of the std::"hash class"" or define your own specialization. You can also use a custom hash function object, as shown in this example:</para>
      <codeReference>concrt-parallel-sort-points#2</codeReference>
      <codeReference>concrt-parallel-sort-points#3</codeReference>
      <para>The hash function must return an integral type (<legacyLink xlink:href="fe9279d0-4495-4e88-bf23-153cc6602397">std::is_integral::value</legacyLink> must be <languageKeyword>true</languageKeyword>). This integral type must be convertible to type <languageKeyword>size_t</languageKeyword>. </para>
    </content>
    <sections>
      <section address="choose_sort">
        <title>Choosing a Sorting Algorithm</title>
        <content>
          <para>In many cases, <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> provides the best balance of speed and memory performance. However, as you increase the size of your data set, the number of available processors, or the complexity of your compare function, <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> can perform better. The best way to determine which sorting algorithm to use in any given scenario is to experiment and measure how long it takes to sort typical data under representative computer configurations. Keep the following guidelines in mind when you choose a sorting strategy.</para>
          <para />
          <list class="bullet">
            <listItem>
              <para>The size of your data set. <?Comment TP: Vinod’sranges had gapsLet me know if you want different ranges here. 2012-04-04T09:47:00Z  Id='1052?>In this document<?CommentEnd Id='1052'
    ?>, a <newTerm>small</newTerm> dataset contains fewer than 1,000 elements, a <newTerm>medium</newTerm> dataset contains between 10,000 and 100,000 elements, and a <newTerm>large</newTerm> dataset contains more than 100,000 elements.</para>
            </listItem>
            <listItem>
              <para>The amount of work that your compare function or hash function performs.</para>
            </listItem>
            <listItem>
              <para>The amount of available computing resources. </para>
            </listItem>
            <listItem>
              <para>The characteristics of your data set. For example, one algorithm might perform well for data that is already nearly sorted, but not as well for data that is completely unsorted.</para>
            </listItem>
            <listItem>
              <para>The chunk size. The optional <parameterReference>_Chunk_size</parameterReference> argument specifies when the algorithm switches from a parallel to a serial sort implementation as it subdivides the overall sort into smaller units of work. For example, if you provide 512, the algorithm switches to serial implementation when a unit of work contains 512 or fewer elements. A serial implementation can improve overall performance because it eliminates the overhead that is required to process data in parallel.</para>
            </listItem>
          </list>
          <para>It might not be worthwhile to sort a small dataset in parallel, even when you have a large number of available computing resources or your compare function or hash function performs a relatively large amount of work. You can use <legacyLink xlink:href="9b0a4fc1-5131-4c73-9c2e-d72211f2d0ae">std::sort</legacyLink> function to sort small datasets. (<unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> call <unmanagedCodeEntityReference>sort</unmanagedCodeEntityReference> when you specify a chunk size that is larger than the dataset; however, <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> would have to allocate <math>O(N)</math> space, which could take additional time due to lock contention or memory allocation.)</para>
          <para>If you must conserve memory or your memory allocator is subject to lock contention, use <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> to sort a medium-sized dataset. <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference> requires no additional space; the other algorithms require <math>O(N)</math> space.</para>
          <para>Use <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> to sort medium-sized datasets and when your application meets the additional <math>O(N)</math> space requirement. <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference> can be especially useful when you have a large number of computing resources or an expensive compare function or hash function.</para>
          <para>Use <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> to sort large datasets and when your application meets the additional <math>O(N)</math> space requirement. <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> can be especially useful when the equivalent compare operation is more expensive or when both operations are expensive.</para>
          <alert class="caution">
            <para>Implementing a good hash function requires that you know the <?Comment TP: Mark, just realized, is there a difference between “data set” and “dataset”? 2012-04-04T09:47:00Z  Id='1276?>dataset <?CommentEnd Id='1276'
    ?>range and how each element in the dataset is transformed to a corresponding unsigned value. Because the hash operation works on unsigned values, consider a different sorting strategy if unsigned hash values cannot be produced.</para>
          </alert>
          <para>The following example compares the performance of <unmanagedCodeEntityReference>sort</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>parallel_sort</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>parallel_buffered_sort</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> against the same large set of random data.</para>
          <codeReference>concrt-choosing-parallel-sort#1</codeReference>
          <para>In this example, which assumes that it is acceptable to allocate <math>O(N)</math> space during the sort, <unmanagedCodeEntityReference>parallel_radixsort</unmanagedCodeEntityReference> performs the best on this dataset on this computer configuration.</para>
          <para>[<legacyLink xlink:href="#top">Top</legacyLink>]</para>
        </content>
      </section>
    </sections>
  </section>
  <section>
    <title>Related Topics</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Title</para>
            </TD>
            <TD>
              <para>Description</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>
                <link xlink:href="adb4d64e-5514-4b70-8dcb-b9210e6b5a1c">How to: Write a parallel_for Loop</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> algorithm to perform matrix multiplication.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="fa9c0ba6-ace0-4f88-8681-c7c1f52aff20">How to: Write a parallel_for_each Loop</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> algorithm to compute the count of prime numbers in a <legacyLink xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293">std::array</legacyLink> object in parallel.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="53979a2a-525d-4437-8952-f1ff85b37673">How to: Use parallel_invoke to Write a Parallel Sort Routine</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to improve the performance of the bitonic sort algorithm.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="a6aea69b-d647-4b7e-bf3b-e6a6a9880072">How to: Use parallel_invoke to Execute Parallel Operations</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_invoke</unmanagedCodeEntityReference> algorithm to improve the performance of a program that performs multiple operations on a shared data source.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="9d19fac0-4ab6-4380-a375-3b18eeb87720">How to: Perform Map and Reduce Operations in Parallel</link>
              </para>
            </TD>
            <TD>
              <para>Shows how to use the <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithms to perform a map and reduce operation that counts the occurrences of words in files.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="40fd86b2-69fa-45e5-93d8-98a75636c242">Parallel Patterns Library (PPL)</link>
              </para>
            </TD>
            <TD>
              <para>Describes the PPL, which provides an imperative programming model that promotes scalability and ease-of-use for developing concurrent applications.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancellation in the PPL</link>
              </para>
            </TD>
            <TD>
              <para>Explains the role of cancellation in the PPL, how to cancel parallel work, and how to determine when a task group is canceled.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="4d1494fb-3089-4f4b-8cfb-712aa67d7a7a">Exception Handling in the Concurrency Runtime</link>
              </para>
            </TD>
            <TD>
              <para>Explains the role of exception handling in the Concurrency Runtime.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <section>
    <title>Reference</title>
    <content>
      <para>
        <link xlink:href="97521998-db27-4a52-819a-17c9cfe09b2d">parallel_for Function</link>
      </para>
      <para>
        <link xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">parallel_for_each Function</link>
      </para>
      <para>
        <link xlink:href="8c8fe553-f372-4138-b9c6-e31b0e83eb9b">parallel_invoke Function</link>
      </para>
      <para>
        <link xlink:href="31bf7bb1-bd01-491c-9760-d9d60edfccad">affinity_partitioner Class</link>
      </para>
      <para>
        <link xlink:href="7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e">auto_partitioner Class</link>
      </para>
      <para>
        <link xlink:href="d7e997af-54d1-43f5-abe0-def72df6edb3">simple_partitioner Class</link>
      </para>
      <para>
        <link xlink:href="2b3dbdf0-6eb9-49f6-8639-03df1d974143">static_partitioner Class</link>
      </para>
      <para>
        <link xlink:href="9c84defe-c8c2-4b56-806e-484b1ce73ef5">parallel_sort Function</link>
      </para>
      <para>
        <link xlink:href="fe173c7e-7986-4a31-86e5-0e03c8648824">parallel_buffered_sort Function</link>
      </para>
      <para>
        <link xlink:href="f3cf915b-b280-4bf1-bed9-ce3fb660341c">parallel_radixsort Function</link>
      </para>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>