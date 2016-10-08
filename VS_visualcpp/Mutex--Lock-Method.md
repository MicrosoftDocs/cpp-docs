---
title: "Mutex::Lock Method"
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
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
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
# Mutex::Lock Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Waits until the current object, or the Mutex object associated with the specified handle, releases the mutex or the specified time-out interval has elapsed.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>SyncLock Lock(
   DWORD <parameterReference>milliseconds</parameterReference> = INFINITE
);

static SyncLock Lock(
   HANDLE <parameterReference>h</parameterReference>,
   DWORD <parameterReference>milliseconds</parameterReference> = INFINITE
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>milliseconds</parameterReference>
        </definedTerm>
        <definition>
          <para>The time-out interval, in milliseconds. The default value is INFINITE, which waits indefinitely.</para>
        </definition>
        <definedTerm>
          <parameterReference>h</parameterReference>
        </definedTerm>
        <definition>
          <para>The handle of a Mutex object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content />
  </returnValue>
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