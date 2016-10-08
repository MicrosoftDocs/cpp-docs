---
title: "accelerator::get_is_emulated Method"
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
ms.assetid: db25b773-6342-4870-912a-454392cf3e5c
caps.latest.revision: 10
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
# accelerator::get_is_emulated Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Determines whether the <legacyLink xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator</legacyLink> is emulated.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>bool get_is_emulated() const;</legacySyntax>
  </syntaxSection>
  <returnValue>
    <content>
      <para> <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is emulated. Otherwise, <languageKeyword>false</languageKeyword>.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The Direct3D reference and WARP accelerators, for example, are emulated.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amprt.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

