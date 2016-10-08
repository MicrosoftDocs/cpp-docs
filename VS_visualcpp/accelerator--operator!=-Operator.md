---
title: "accelerator::operator!= Operator"
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
ms.assetid: fafee516-c2f1-402e-ab11-1fee2e2144cf
caps.latest.revision: 9
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
# accelerator::operator!= Operator
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Compares this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object with another and returns <languageKeyword>false</languageKeyword> if they are the same; otherwise, returns <languageKeyword>true</languageKeyword>.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>bool operator!= (    const accelerator &amp; _Other ) const;</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Other</parameterReference>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object to compare with this one.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para> <languageKeyword>false</languageKeyword> if the two <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> objects are the same; otherwise, <languageKeyword>true</languageKeyword>.</para>
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
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

