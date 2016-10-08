---
title: "accelerator::create_view Method"
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
ms.assetid: 8f405e0f-74c0-4868-8a22-ab6cbde72598
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
# accelerator::create_view Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Creates and returns an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object on this accelerator, using the specified queuing mode. When the queuing mode is not specified, the new <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> uses the <legacyLink xlink:href="8c641054-906d-40b3-bbb4-f62af9356a14">queuing_mode::immediate</legacyLink> queuing mode. </para>
  </introduction>
  <syntaxSection>
    <legacySyntax>accelerator_view create_view(    queuing_mode qmode = queuing_mode_automatic);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>qmode</parameterReference>
        </definedTerm>
        <definition>
          <para>The queuing mode.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>A new <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object on this accelerator, using the specified queuing mode. </para>
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
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link> <link xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

