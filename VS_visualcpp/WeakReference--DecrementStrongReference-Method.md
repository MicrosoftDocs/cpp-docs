---
title: "WeakReference::DecrementStrongReference Method"
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
ms.assetid: 97d70d9f-41b8-4f8d-a6fa-4137cc4f9029
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
# WeakReference::DecrementStrongReference Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>ULONG DecrementStrongReference();</legacySyntax>
  </syntaxSection>
  <section>
    <title>Remarks</title>
    <content>
      <para>Decrements the strong reference count of the current WeakReference object.</para>
      <para>When the strong reference count becomes zero, the strong reference is set to <languageKeyword>nullptr</languageKeyword>.</para>
    </content>
  </section>
  <returnValue>
    <content>
      <para>The decremented strong reference count.</para>
    </content>
  </returnValue>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>implements.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="3f4c956b-dbbd-49b1-8cfa-9509a9956c97">WeakReference Class</link>
    <link xlink:href="d71fe149-d804-4c6f-961d-43fe21ef8630">Microsoft::WRL::Details Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>