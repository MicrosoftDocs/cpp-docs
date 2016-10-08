---
title: "array::operatorOperator"
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
ms.assetid: 8a04e8cf-a73e-4e5d-8806-c783671cf324
caps.latest.revision: 13
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
# array::operatorOperator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Returns the element that is at the specified index.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>value_type&amp;  operator[] (
    const index&lt;_Rank&gt;&amp; _Index ) restrict(amp,cpu);


const value_type&amp;  operator[] (
    const index&lt;_Rank&gt;&amp; _Index ) const restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Result_type operator[](int _I) restrict(amp,cpu);


typename details::_Projection_result_type&lt;_Value_type,_Rank&gt;::_Const_result_type operator[](int _I) const restrict(amp,cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Index</parameterReference>
        </definedTerm>
        <definition>
          <para>The index.</para>
        </definition>
        <definedTerm> <parameterReference>_I</parameterReference>
        </definedTerm>
        <definition>
          <para>The index.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>The element that is at the specified index.</para>
    </content>
  </returnValue>
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

