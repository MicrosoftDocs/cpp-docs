---
title: "Mutex::Mutex Constructor"
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
ms.topic: reference
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
caps.latest.revision: 3
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
# Mutex::Mutex Constructor
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Initializes a new instance of the Mutex class.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>explicit Mutex(
   HANDLE <parameterReference>h</parameterReference>
);

Mutex(
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
          <para>A handle, or an rvalue-reference to a handle, to a Mutex object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <section>
    <title>Remarks</title>
    <content>
      <para>
        <?Comment ta: Is this true? Is that what the move constructor does? 2011-11-09T11:33:00Z  Id='0?>The first constructor initializes a Mutex object from the specified handle. The second constructor initializes a Mutex object from the specified handle, and then moves ownership of the mutex to the current Mutex object.<?CommentEnd Id='0'
    ?></para>
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
    
  </relatedTopics>
</developerReferenceWithSyntaxDocument>