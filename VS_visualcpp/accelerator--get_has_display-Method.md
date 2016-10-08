---
title: "accelerator::get_has_display Method"
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
ms.assetid: 4e634e82-5459-4c6d-b34a-69fbe6ab101c
caps.latest.revision: 12
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
# accelerator::get_has_display Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Returns a Boolean value that indicates whether the <legacyLink xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator</legacyLink> can output to a display.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>bool get_has_display() const;</legacySyntax>
  </syntaxSection>
  <returnValue>
    <content>
      <para> <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> can output to a display; otherwise, <languageKeyword>false</languageKeyword>.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The return value of <unmanagedCodeEntityReference>get_has_display</unmanagedCodeEntityReference> indicates whether the accelerator can output to a display, but it does not necessarily indicate that a display is physically attached to the accelerator. For more information, see <link xlink:href="ba5481af-72c5-4d81-aeef-f2090d8baa28">has_display</link>.</para>
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
  <relatedTopics> <link xlink:href="ba5481af-72c5-4d81-aeef-f2090d8baa28">accelerator::has_display Data Member</link> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

