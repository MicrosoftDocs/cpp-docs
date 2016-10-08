---
title: "accelerator::supports_limited_double_precision Data Member"
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
ms.assetid: 3ffb9199-87c9-4da1-a46c-b93e2dadc578
caps.latest.revision: 5
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
# accelerator::supports_limited_double_precision Data Member
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Gets a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between <languageKeyword>int</languageKeyword> and <languageKeyword>double</languageKeyword> are not supported.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;</legacySyntax>
  </syntaxSection>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amprt.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
  <relatedTopics> 
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

