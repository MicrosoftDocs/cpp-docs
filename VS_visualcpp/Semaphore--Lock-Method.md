---
title: "Semaphore::Lock Method"
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
ms.assetid: 0eef6ede-dc7d-4f09-a6c8-2f7d39d65bfa
caps.latest.revision: 4
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
# Semaphore::Lock Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Waits until the current object, or the Semaphore object associated with the specified handle, is in the signaled state or the specified time-out interval has elapsed.</para>
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
          <para>A handle to a Semaphore object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>
        <?Comment ta: Use the topic summary? 2011-11-07T14:30:00Z  Id='1?>A Details::SyncLockWithStatusT&lt;HandleTraits::SemaphoreTraits&gt;<?CommentEnd Id='1'
    ?></para>
    </content>
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
    <link xlink:href="">Semaphore Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>