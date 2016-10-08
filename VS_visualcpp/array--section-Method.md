---
title: "array::section Method"
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
ms.assetid: 18cb537a-de02-404a-808a-2d52014f74f1
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
# array::section Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Returns a subsection of the array object that is at the specified origin and, optionally, that has the specified extent.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>array_view&lt;_Value_type,_Rank&gt; section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Section_origin,
    const Concurrency::extent&lt;_Rank&gt;&amp; _Section_extent ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const Concurrency::index&lt;_Rank&gt;&amp; _Section_origin,
    const Concurrency::extent&lt;_Rank&gt;&amp; _Section_extent ) const restrict(amp,cpu);


array_view&lt;_Value_type,_Rank&gt; section(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Ext ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const Concurrency::extent&lt;_Rank&gt;&amp; _Ext ) const restrict(amp,cpu);


array_view&lt;_Value_type,_Rank&gt; section(
    const index&lt;_Rank&gt;&amp; _Idx ) restrict(amp,cpu);


array_view&lt;const _Value_type,_Rank&gt; section(
    const index&lt;_Rank&gt;&amp; _Idx ) const restrict(amp,cpu);


array_view&lt;_Value_type,1&gt; section(
    int _I0,
    int _E0 ) restrict(amp,cpu);


array_view&lt;const _Value_type,1&gt; section(
    int _I0,
    int _E0 ) const restrict(amp,cpu);


array_view&lt;_Value_type,2&gt; section(
    int _I0,
    int _I1,
    int _E0,
    int _E1 ) restrict(amp,cpu);


array_view&lt;const _Value_type,2&gt; section(
    int _I0,
    int _I1,
    int _E0,
    int _E1 ) const restrict(amp,cpu);


array_view&lt;_Value_type,3&gt; section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2 ) restrict(amp,cpu);


array_view&lt;const _Value_type,3&gt; section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2 ) const restrict(amp,cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_E0</parameterReference>
        </definedTerm>
        <definition>
          <para>The most significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_E1</parameterReference>
        </definedTerm>
        <definition>
          <para>The next-to-most-significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_E2</parameterReference>
        </definedTerm>
        <definition>
          <para>The least significant component of the extent of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_Ext</parameterReference>
        </definedTerm>
        <definition>
          <para>The <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object that specifies the extent of the section. The origin is 0.</para>
        </definition>
        <definedTerm> <parameterReference>_Idx</parameterReference>
        </definedTerm>
        <definition>
          <para>The <legacyLink xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index</legacyLink> object that specifies the location of the origin. The subsection is the rest of the extent.</para>
        </definition>
        <definedTerm> <parameterReference>_I0</parameterReference>
        </definedTerm>
        <definition>
          <para>The most significant component of the origin of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_I1</parameterReference>
        </definedTerm>
        <definition>
          <para>The next-to-most-significant component of the origin of this section. </para>
        </definition>
        <definedTerm> <parameterReference>_I2</parameterReference>
        </definedTerm>
        <definition>
          <para>The least significant component of the origin of this section.</para>
        </definition>
        <definedTerm> <parameterReference>_Rank</parameterReference>
        </definedTerm>
        <definition>
          <para>The rank of the section.</para>
        </definition>
        <definedTerm> <parameterReference>_Section_extent</parameterReference>
        </definedTerm>
        <definition>
          <para>The <legacyLink xlink:href="edb5de3d-3935-4dbb-8365-4cc6c4fb0269">extent</legacyLink> object that specifies the extent of the section.</para>
        </definition>
        <definedTerm> <parameterReference>_Section_origin</parameterReference>
        </definedTerm>
        <definition>
          <para>The <legacyLink xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index</legacyLink> object that specifies the location of the origin.</para>
        </definition>
        <definedTerm> <parameterReference>_Value_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the elements that are copied.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>Returns a subsection of the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference> object that is at the specified origin and, optionally, that has the specified extent. When only the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object is specified, the subsection contains all elements in the associated grid that have indexes that are larger than the indexes of the elements in the <unmanagedCodeEntityReference>index</unmanagedCodeEntityReference> object.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The overloads of this method let you create subsections of the array objects that have one, two, or three dimension.</para>
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
  <relatedTopics> 
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

