---
title: "accelerator::get_supports_limited_double_precision Method"
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
ms.assetid: 2fdb9c32-81b0-4224-9dab-4277be44ce75
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
# accelerator::get_supports_limited_double_precision Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Returns a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between <languageKeyword>int</languageKeyword> and <languageKeyword>double</languageKeyword> are not supported.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>bool get_supports_limited_double_precision() const;</legacySyntax>
  </syntaxSection>
  <returnValue>
    <content>
      <para> <languageKeyword>true</languageKeyword> if the accelerator has limited support for double precision math; otherwise, <languageKeyword>false</languageKeyword>.</para>
    </content>
  </returnValue>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amprt.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
    </content>
  </requirements>
    <relatedTopics></relatedTopics>
</developerReferenceWithSyntaxDocument>

