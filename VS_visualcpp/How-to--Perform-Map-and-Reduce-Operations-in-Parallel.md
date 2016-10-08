---
title: "How to: Perform Map and Reduce Operations in Parallel"
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
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
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
# How to: Perform Map and Reduce Operations in Parallel
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>This example shows how to use the <legacyLink xlink:href="3f61f693-2a7f-45a7-8904-b6df436a2818">concurrency::parallel_transform</legacyLink> and <legacyLink xlink:href="275a2706-c12a-4c87-9ad6-f07d4fc205cc">concurrency::parallel_reduce</legacyLink> algorithms and the <legacyLink xlink:href="b2d879dd-87ef-4af9-a266-a5443fd538b8">concurrency::concurrent_unordered_map</legacyLink> class to count the occurrences of words in files.</para>
    <para>A <newTerm>map</newTerm> operation applies a function to each value in a sequence. A <newTerm>reduce</newTerm> operation combines the elements of a sequence into one value. You can use the Standard Template Library (STL) <legacyLink xlink:href="99396865-54fb-47dd-a661-38ce03467854">std::transform</legacyLink> <legacyLink xlink:href="9908525b-967c-402d-9ee9-aadacc241efc">std::accumulate</legacyLink> classes to perform map and reduce operations. However, to improve performance for many problems, you can use the <unmanagedCodeEntityReference>parallel_transform</unmanagedCodeEntityReference> algorithm to perform the map operation in parallel and the <unmanagedCodeEntityReference>parallel_reduce</unmanagedCodeEntityReference> algorithm to perform the reduce operation in parallel. In some cases, you can use <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> to perform the map and the reduce in one operation.</para>
  </introduction>
  <codeExample>
    <description>
      <content>
        <para>The following example counts the occurrences of words in files. It uses <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">std::vector</legacyLink> to represent the contents of two files. The map operation computes the occurrences of each word in each vector. The reduce operation accumulates the word counts across both vectors.</para>
      </content>
    </description>
    <codeReference>concrt-parallel-map-reduce#1</codeReference>
  </codeExample>
  <buildInstructions>
    <content>
      <para>To compile the code, copy it and then paste it in a Visual Studio project, or paste it in a file that is named <userInput>parallel-map-reduce.cpp</userInput> and then run the following command in a Visual Studio Command Prompt window.</para>
      <para>
        <system>cl.exe /EHsc parallel-map-reduce.cpp</system>
      </para>
    </content>
  </buildInstructions>
  <robustProgramming>
    <content>
      <para>In this example, you can use the <unmanagedCodeEntityReference>concurrent_unordered_map</unmanagedCodeEntityReference> class—which is defined in concurrent_unordered_map.h—to perform the map and reduce in one operation.</para>
      <codeReference>concrt-parallel-map-reduce#2</codeReference>
      <para>Typically, you parallelize only the outer or the inner loop. Parallelize the inner loop if you have relatively few files and each file contains many words. Parallelize the outer loop if you have relatively many files and each file contains few words.</para>
    </content>
  </robustProgramming>
  <relatedTopics>
    <link xlink:href="045dca7b-4d73-4558-a44c-383b88a28473">Parallel Algorithms</link>
    <link xlink:href="3f61f693-2a7f-45a7-8904-b6df436a2818">concurrency::parallel_transform</link>
    <link xlink:href="275a2706-c12a-4c87-9ad6-f07d4fc205cc">concurrency::parallel_reduce</link>
    <link xlink:href="b2d879dd-87ef-4af9-a266-a5443fd538b8">concurrency::concurrent_unordered_map</link>
  </relatedTopics>
</developerHowToDocument>