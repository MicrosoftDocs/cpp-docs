---
title: "accelerator::set_default_cpu_access_type Method"
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
ms.assetid: bee89989-1a00-4319-9961-3efecf1b9c8d
caps.latest.revision: 3
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
# accelerator::set_default_cpu_access_type Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Set the default cpu access_type for arrays created on this accelerator or for implicit memory allocations as part of array_views accessed on this this accelerator. This method only succeeds if the default_cpu_access_type for the accelerator has not already been overriden by a previous call to this method and the runtime selected default_cpu_access_type for this accelerator has not yet been used for allocating an array or for an implicit memory allocation backing an array_view accessed on this accelerator. </para>
  </introduction>
  <syntaxSection>
    <legacySyntax xml:space= "preserve">bool set_default_cpu_access_type(    access_type _Default_cpu_access_type );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Default_cpu_access_type</parameterReference>
        </definedTerm>
        <definition>
          <para>The default cpu access_type to be used for array/array_view memory allocations on this accelerator. </para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>A boolean value indicating if the default cpu access_type for the accelerator was successfully set. </para>
    </content>
  </returnValue>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>amprt.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>concurrency</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

