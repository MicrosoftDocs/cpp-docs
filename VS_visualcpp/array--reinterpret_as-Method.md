---
title: "array::reinterpret_as Method"
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
ms.assetid: 5bb42023-d8b0-4c2b-baa0-b9065c5cd7e7
caps.latest.revision: 14
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
# array::reinterpret_as Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Reinterprets the array through a one-dimensional <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference>, which optionally may have a different value type than the source array.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>template &lt;
   typename <parameterReference>_Value_type2</parameterReference>
&gt;
array_view&lt;<parameterReference>_Value_type2</parameterReference>,1&gt; reinterpret_as()restrict(amp,cpu);

template &lt;
   typename <parameterReference>_Value_type2</parameterReference>
&gt;
array_view&lt;const <parameterReference>_Value_type2</parameterReference>,1&gt; reinterpret_as() const restrict(amp,cpu);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>_Value_type2</parameterReference>
        </definedTerm>
        <definition>
          <para>The data type of the returned data.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>An <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> or const <unmanagedCodeEntityReference>array_view</unmanagedCodeEntityReference> object that is based on the <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>, with the element type reinterpreted from <codeInline>T</codeInline> to <codeInline>ElementType</codeInline> and the rank reduced from <placeholder>N</placeholder> to 1.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>Sometimes it is convenient to view a multi-dimensional array as if it is a linear, one-dimensional array, possibly with a different value type than the source array. You can use this method to achieve this.</para>
      <?Comment MT: This soundsa little suspect without additional guidance. It would be better to have guidance about what conversions are safe. 2013-08-27T13:26:00Z  Id='1?>
      <?Comment MO: I agree that it would be helpful to add guidance about safe (or conversely, unsafe) operations. 2013-08-27T13:26:00Z  Id='2?>
      <alert class="caution">
        <para>Reinterpreting an array object by using a different value type is a potentially unsafe operation. We recommend that you use this functionality carefully.<?CommentEnd Id='1'
    ?><?CommentEnd Id='2'
    ?></para>
      </alert>
      <para>The following code provides an example.</para>
      <code language="cpp">struct RGB { float r; float g; float b; };

array&lt;RGB,3&gt;  a = ...; 
array_view&lt;float,1&gt; v = a.reinterpret_as&lt;float&gt;(); 

assert(v.extent == 3*a.extent);</code>
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
    <link xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>