---
title: "&lt;numeric&gt;"
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
ms.assetid: 6d6ccb94-48cc-479b-b4a9-bd9c78d4896a
caps.latest.revision: 19
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
# &lt;numeric&gt;
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Defines container template functions that perform algorithms for numerical processing.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax> <legacyBold>#include </legacyBold>&lt;<legacyBold>numeric</legacyBold>&gt;</legacySyntax>
  </syntaxSection>
  <languageReferenceRemarks>
    <content>
      <para>The algorithms resemble the Standard Template Library (STL) algorithms, but are part of the C++ Standard Library instead. Nevertheless, they are compatible with the STL and, like the STL algorithms, they can operate on a variety of data structures. These include STL container classes—for example, <legacyLink xlink:href="a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d">vector</legacyLink> and <legacyLink xlink:href="d3707f4a-10fd-444f-b856-f9ca2077c1cd">list</legacyLink>, and program-defined data structures and arrays of elements that satisfy the requirements of a particular algorithm. The algorithms achieve this level of generality by accessing and traversing the elements of a container indirectly through iterators. The algorithms process iterator ranges that are typically specified by their beginning or ending positions. The ranges referred to must be valid in the sense that all pointers in the ranges must be dereferenceable and within the sequences of each range, and the last position must be reachable from the first by means of incrementation.</para>
      <para>The algorithms extend the actions that are supported by the operations and member functions of each of the STL containers and enable interaction with different types of container objects at the same time.</para>
    </content>
  </languageReferenceRemarks>
  <section>
    <title />
    <content />
    <sections>
      <section>
        <title>Functions</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <tbody>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b#accumulate">accumulate</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Computes the sum of all elements in a specified range—including some initial value—by computing successive partial sums, or computes the result of successive partial results that are obtained by using a specified binary operation instead of the sum operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b#adjacent_difference">adjacent_difference</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Computes the successive differences between each element and its predecessor in an input range and outputs the results to a destination range, or computes the result of a generalized procedure where the difference operation is replaced by another specified binary operation.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b#inner_product">inner_product</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Computes the sum of the element-wise product of two ranges and adds it to a specified initial value, or computes the result of a generalized procedure where the sum and product operations are replaced by other specified binary operations.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b#iota">iota</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Stores a starting value, beginning with the first element and filling with successive increments of the value (<unmanagedCodeEntityReference>value++</unmanagedCodeEntityReference>) in each of the elements in the interval <unmanagedCodeEntityReference>[first, last)</unmanagedCodeEntityReference>.</para>
                </TD>
              </tr>
              <tr>
                <TD>
                  <para> <legacyLink xlink:href="a4b0449a-c80c-4a1d-8d9f-d7fcd0058f8b#partial_sum">partial_sum</legacyLink>
                  </para>
                </TD>
                <TD>
                  <para>Computes a series of sums in an input range from the first element through the <placeholder>i</placeholder>th element and stores the result of each sum in the <placeholder>i</placeholder>th element of a destination range, or computes the result of a generalized procedure where the sum operation is replaced by another specified binary operation.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <relatedTopics> <link xlink:href="e7bf497a-0f63-48d0-9b54-cb0eef4073c4">Header Files</link> <link xlink:href="9351c8fb-4539-4728-b0e9-226e2ac4284b">Thread Safety in the Standard C++ Library</link> <link xlink:href="59f76cd1-cf9d-4802-b9eb-d4b9cbe015d9">Standard Template Library</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>



