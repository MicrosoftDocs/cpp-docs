---
title: "WeakReference::SetUnknown Method"
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
ms.assetid: 5dddb9e3-a7c1-4195-8166-97c5ab6e972f
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
# WeakReference::SetUnknown Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void SetUnknown(
   _In_ IUnknown* <parameterReference>unk</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>unk</parameterReference>
        </definedTerm>
        <definition>
          <para>A pointer to the <unmanagedCodeEntityReference>IUnknown</unmanagedCodeEntityReference> interface of an object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>Sets the strong reference of the current <unmanagedCodeEntityReference>WeakReference</unmanagedCodeEntityReference> object to the specified interface pointer.</para>
    </content>
  </languageReferenceRemarks>
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