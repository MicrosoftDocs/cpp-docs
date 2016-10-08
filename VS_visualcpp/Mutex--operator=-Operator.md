---
title: "Mutex::operator= Operator"
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
ms.topic: reference
ms.assetid: 9b0ee206-a930-4fea-8dc0-1f79839e9d13
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Mutex::operator= Operator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Assigns (moves) the specified Mutex object to the current Mutex object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>Mutex&amp; operator=(
   _Inout_ Mutex&amp;&amp; <parameterReference>h</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>h</parameterReference>
        </definedTerm>
        <definition>
          <para>An rvalue-reference to a Mutex object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>A reference to the current Mutex object.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>
        <?Comment ta: Relevant; that is, is anything actually moved? 2011-11-09T11:36:00Z  Id='1?>For <?CommentEnd Id='1'
    ?>more information, see the <embeddedLabel>Move Semantics</embeddedLabel> section of <link xlink:href="eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d">Rvalue Reference Declarator: &amp;&amp;</link>.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="682a0963-721c-46a2-8871-000e9997505b">Mutex Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>