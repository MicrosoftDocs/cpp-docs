---
title: "copy Function"
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
ms.assetid: cf3cda4b-5c64-4083-a0aa-39de2b378802
caps.latest.revision: 15
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
# copy Function
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Copies a C++ AMP object. All synchronous data transfer requirements are met. You can't copy data when running code on an accelerator. The general form of this function is <codeInline>copy(src, dest)</codeInline>.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array&lt; _Value_type, _Rank&gt;&amp; _Src,
    array&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename InputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy( InputIterator _SrcFirst, InputIterator _SrcLast,
    array&lt; _Value_type, _Rank&gt; &amp; _Dest );


template &lt;
    typename InputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy( InputIterator _SrcFirst,
    array&lt; _Value_type, _Rank&gt; &amp; _Dest );


template &lt;
    typename OutputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array&lt; _Value_type, _Rank&gt; &amp; _Src, OutputIterator _DestIter );


template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array&lt; _Value_type, _Rank&gt;&amp; _Src,
    array_view&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src,
    array&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array_view&lt; _Value_type, _Rank&gt;&amp; _Src,
    array&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array_view&lt;const _Value_type, _Rank&gt;&amp; _Src,
    array_view&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array_view&lt; _Value_type, _Rank&gt;&amp; _Src,
    array_view&lt; _Value_type, _Rank&gt;&amp; _Dest );


template &lt;
    typename InputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy( InputIterator _SrcFirst, InputIterator _SrcLast,
    array_view&lt; _Value_type, _Rank&gt; &amp; _Dest );


template &lt;
    typename InputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy( InputIterator _SrcFirst,
    array_view&lt; _Value_type, _Rank&gt; &amp; _Dest );


template &lt;
    typename OutputIterator,
    typename _Value_type,
    int _Rank
&gt;
void copy(
    const array_view&lt; _Value_type, _Rank&gt; &amp; _Src, OutputIterator _DestIter );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Dest</parameterReference>
        </definedTerm>
        <definition>
          <para>The object to copy to.</para>
        </definition>
        <definedTerm> <parameterReference>_DestIter</parameterReference>
        </definedTerm>
        <definition>
          <para>An output iterator to the beginning position at destination.</para>
        </definition>
        <definedTerm> <parameterReference>InputIterator</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the input interator.</para>
        </definition>
        <definedTerm> <parameterReference>OutputIterator</parameterReference>
        </definedTerm>
        <definition>
          <para>The type of the output iterator.</para>
        </definition>
        <definedTerm> <parameterReference>_Rank</parameterReference>
        </definedTerm>
        <definition>
          <para>The rank of the object to copy from or the object to copy to.</para>
        </definition>
        <definedTerm> <parameterReference>_Src</parameterReference>
        </definedTerm>
        <definition>
          <para>To object to copy.</para>
        </definition>
        <definedTerm> <parameterReference>_SrcFirst</parameterReference>
        </definedTerm>
        <definition>
          <para>A beginning iterator into the source container.</para>
        </definition>
        <definedTerm> <parameterReference>_SrcLast</parameterReference>
        </definedTerm>
        <definition>
          <para>An ending iterator into the source container.</para>
        </definition>
        <definedTerm> <parameterReference>_Value_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the elements that are copied.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <title>Remarks</title>
    <content>
      <para>The copy operation always performs a deep copy.</para>
      <para>If the extents of the source and destination objects do not match, a <legacyLink xlink:href="8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd">runtime_exception</legacyLink> is thrown.</para>
      <para>You can copy to <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> and <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> objects from the following sources:</para>
      <list class="bullet">
        <listItem>
          <para>An <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> that has the same rank and element type as the destination <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>.</para>
        </listItem>
        <listItem>
          <para>A standard container whose element type is the same as the destination <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>. Containers that expose <unmanagedCodeEntityReference>size()</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>data()</unmanagedCodeEntityReference> members perform more efficiently.</para>
        </listItem>
      </list>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amp.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="b5aab265-3bac-42c5-8ead-f92ce05ef267">Concurrency Namespace (C++ Accelerated Massive Parallelism)</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

