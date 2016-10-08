---
title: "array::operator() Operator"
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
ms.assetid: aea59605-4038-4826-9dfb-99babc971ac3
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
# array::operator() Operator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Returns the element value that is specified by the parameters.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>value_type&amp;  operator() (const index&lt;_Rank&gt;&amp; _Index) restrict(amp,cpu);


const value_type&amp;  operator() (const index&lt;_Rank&gt;&amp; _Index) const restrict(amp,cpu);


value_type&amp;  operator() (int _I0, int _I1) restrict(amp,cpu);


const value_type&amp;  operator() (int _I0, int _I1) const restrict(amp,cpu);


value_type&amp;  operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);


const value_type&amp;  operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Result_type operator()(int _I) restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator()(int _I) const restrict(amp,cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Index</parameterReference>
        </definedTerm>
        <definition>
          <para>The location of the element.</para>
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
        <definedTerm> <parameterReference>_I</parameterReference>
        </definedTerm>
        <definition>
          <para>The location of the element.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>The element value specified by the parameters.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The overloads that have <parameterReference>I0</parameterReference>, <parameterReference>I1</parameterReference>, or <parameterReference>I2</parameterReference> parameters enable you to retrieve references to values in the <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> without having to create an <legacyLink xlink:href="cbe79b08-0ba7-474c-9828-f1a71da39eb3">index</legacyLink> object.</para>
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
  <relatedTopics> <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

