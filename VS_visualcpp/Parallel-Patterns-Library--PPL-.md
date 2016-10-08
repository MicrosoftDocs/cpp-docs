---
title: "Parallel Patterns Library (PPL)"
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
ms.assetid: 40fd86b2-69fa-45e5-93d8-98a75636c242
caps.latest.revision: 21
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
# Parallel Patterns Library (PPL)
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The Parallel Patterns Library (PPL) provides an imperative programming model that promotes scalability and ease-of-use for developing concurrent applications. The PPL builds on the scheduling and resource management components of the Concurrency Runtime. It raises the level of abstraction between your application code and the underlying threading mechanism by providing generic, type-safe algorithms and containers that act on data in parallel. The PPL also lets you develop applications that scale by providing alternatives to shared state.</para>
    <para>The PPL provides the following features:</para>
    <list class="bullet">
      <listItem>
        <para>
          <newTerm>Task Parallelism</newTerm>: a mechanism that works on top of the Windows ThreadPool to execute several work items (tasks) in parallel</para>
      </listItem>
      <listItem>
        <para>
          <newTerm>Parallel algorithms</newTerm>: generic algorithms that works on top of the Concurrency Runtime to act on collections of data in parallel</para>
      </listItem>
      <listItem>
        <para>
          <newTerm>Parallel containers and objects</newTerm>: generic container types that provide safe concurrent access to their elements</para>
      </listItem>
    </list>
  </introduction>
  <section>
    <title>Example</title>
    <content>
      <para>The PPL provides a programming model that resembles the Standard Template Library (STL). The following example demonstrates many features of the PPL. It computes several Fibonacci numbers serially and in parallel. Both computations act on a <legacyLink xlink:href="fdfd43a5-b2b5-4b9e-991f-93bf10fb4293">std::array</legacyLink> object. The example also prints to the console the time that is required to perform both computations.</para>
      <para>The serial version uses the STL <legacyLink xlink:href="8cb2ae72-bef6-488b-b011-0475c0787e33">std::for_each</legacyLink> algorithm to traverse the array and stores the results in a "std::vector" object. The parallel version performs the same task, but uses the PPL <legacyLink xlink:href="ff7ec2dd-63fd-4838-b202-225036b30f28">concurrency::parallel_for_each</legacyLink> algorithm and stores the results in a <legacyLink xlink:href="a217b4ac-af2b-4d41-94eb-09a75ee28622">concurrency::concurrent_vector</legacyLink> object. The <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> class enables each loop iteration to concurrently add elements without the requirement to synchronize write access to the container.</para>
      <para>Because <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> acts concurrently, the parallel version of this example must sort the <unmanagedCodeEntityReference>concurrent_vector</unmanagedCodeEntityReference> object to produce the same results as the serial version.</para>
      <para>Note that the example uses a naïve method to compute the Fibonacci numbers; however, this method illustrates how the Concurrency Runtime can improve the performance of long computations.</para>
      <codeReference>concrt-parallel-fibonacci#1</codeReference>
      <para>The following sample output is for a computer that has four processors.</para>
      <computerOutput>serial time: 9250 ms
parallel time: 5726 ms

fib(24): 46368
fib(26): 121393
fib(41): 165580141
fib(42): 267914296</computerOutput>
      <para>Each iteration of the loop requires a different amount of time to finish. The performance of <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference> is bounded by the operation that finishes last. Therefore, you should not expect linear performance improvements between the serial and parallel versions of this example.</para>
    </content>
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
                <link xlink:href="42f05ac3-2098-494a-ba84-737fcdcad077">Task Parallelism</link>
              </para>
            </TD>
            <TD>
              <para>Describes the role of tasks and task groups in the PPL.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>
              </para>
            </TD>
            <TD>
              <para>Describes how to use parallel algorithms such as <unmanagedCodeEntityReference>parallel_for</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>parallel_for_each</unmanagedCodeEntityReference>.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="90ab715c-29cd-48eb-8e76-528619aab466">Parallel Containers and Objects</link>
              </para>
            </TD>
            <TD>
              <para>Describes the various parallel containers and objects that are provided by the PPL.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="baaef417-b2f9-470e-b8bd-9ed890725b35">Cancelation</link>
              </para>
            </TD>
            <TD>
              <para>Explains how to cancel the work that is being performed by a parallel algorithm.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <link xlink:href="874bc58f-8dce-483e-a3a1-4dcc9e52ed2c">Concurrency Runtime</link>
              </para>
            </TD>
            <TD>
              <para>Describes the Concurrency Runtime, which simplifies parallel programming, and contains links to related topics.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>