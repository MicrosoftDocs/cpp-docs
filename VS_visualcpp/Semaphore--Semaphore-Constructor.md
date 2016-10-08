---
title: "Semaphore::Semaphore Constructor"
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
ms.assetid: 91c22ae7-181e-460d-ad40-70c3a53b26fd
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
# Semaphore::Semaphore Constructor
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Initializes a new instance of the Semaphore class.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>explicit Semaphore(
   HANDLE <parameterReference>h</parameterReference>
);

WRL_NOTHROW Semaphore(
   _Inout_ Semaphore&amp;&amp; <parameterReference>h</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>h</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle or an rvalue-reference to a Semaphore object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="ded53526-17b4-4381-9c60-ea5e77363db6">Semaphore Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>