---
title: "array::copy_to Method"
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
ms.assetid: 10f08975-2156-4b75-b836-e50b5b9f150c
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
# array::copy_to Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Copies the contents of the <legacyLink xlink:href="0832b6c1-40f0-421d-9104-6b1baa0c63a7">array</legacyLink> to another <unmanagedCodeEntityReference>array</unmanagedCodeEntityReference>.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void copy_to(
    array&lt;_Value_type, _Rank&gt;&amp; _Dest ) const ;

void copy_to(
    array_view&lt;_Value_type, _Rank&gt;&amp; _Dest ) const ;</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Dest</parameterReference>
        </definedTerm>
        <definition>
          <para>The <legacyLink xlink:href="7e7ec9bc-05a2-4372-b05d-752b50006c5a">array_view</legacyLink> object to copy to.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <title>Remarks</title>
    <content>
      <para>A call to <codeInline>copy(*this, dest)</codeInline> is used to make the copy.</para>
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
  <relatedTopics> <link xlink:href="">"array Class"</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

