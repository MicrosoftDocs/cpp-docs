---
title: "array::view_as Method"
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
ms.assetid: a13aa5fb-7836-436a-8311-270d459b7e74
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
# array::view_as Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Reinterprets this array as an <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> of a different rank.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template &lt;
    int _New_rank
&gt;
array_view&lt;_Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt;&amp; _View_extent ) restrict(amp,cpu);


template &lt;
    int _New_rank
&gt;
array_view&lt;const _Value_type,_New_rank&gt; view_as(
    const Concurrency::extent&lt; _New_rank&gt;&amp; _View_extent ) const restrict(amp,cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_New_rank</parameterReference>
        </definedTerm>
        <definition>
          <para>The rank of the <unmanagedCodeEntityReference>extent</unmanagedCodeEntityReference> object passed as a parameter.</para>
        </definition>
        <definedTerm> <parameterReference>_View_extent</parameterReference>
        </definedTerm>
        <definition>
          <para>The extent that is used to construct the new <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object.</para>
        </definition>
        <definedTerm> <parameterReference>_Value_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the elements in both the original <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> object and the returned <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>The <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object that is constructed.</para>
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

