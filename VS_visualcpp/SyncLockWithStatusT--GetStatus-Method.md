---
title: "SyncLockWithStatusT::GetStatus Method"
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
ms.assetid: d448b51d-a63d-40d9-a9ee-4aad3204118d
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
# SyncLockWithStatusT::GetStatus Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>DWORD GetStatus() const;</legacySyntax>
  </syntaxSection>
  <returnValue>
    <content>
      <para>The result of a wait operation on the object that is based on the SyncLockWithStatusT class, such as a <legacyLink xlink:href="682a0963-721c-46a2-8871-000e9997505b">Mutex</legacyLink> or <legacyLink xlink:href="ded53526-17b4-4381-9c60-ea5e77363db6">Semaphore</legacyLink>. Zero (0) indicates the wait operation returned the signaled state; otherwise, another state occurred, such as time-out value elapsed. </para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>Retrieves the wait status of the current SyncLockWithStatusT object.</para>
      <para>The GetStatus() function retrieves the value of the underlying <legacyLink xlink:href="466fa336-b5ff-4d43-8efd-1e87e5fddf88">status_</legacyLink> data member. When an object based on the SyncLockWithStatusT class performs a lock operation, the object first waits for the object to become available. The result of that wait operation is stored in the <codeInline>status_</codeInline> data member. The possible values of the <codeInline>status_</codeInline> data member are the return values of the wait operation. For more information, see the return values of the <system>WaitForSingleObjectEx()</system> function in the MSDN Library.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>corewrappers.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Wrappers::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="4832fd93-0ac8-4168-9404-b43fefea7476">SyncLockWithStatusT Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>