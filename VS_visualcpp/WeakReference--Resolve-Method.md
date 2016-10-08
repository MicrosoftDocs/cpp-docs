---
title: "WeakReference::Resolve Method"
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
ms.assetid: fc65a4b7-48a0-4d64-a793-37f566fdd8e7
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
# WeakReference::Resolve Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>
STDMETHOD(Resolve)
   (REFIID <parameterReference>riid</parameterReference>, 
   _Deref_out_opt_ IInspectable **<parameterReference>ppvObject</parameterReference>
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>riid</parameterReference>
        </definedTerm>
        <definition>
          <para>An interface ID.</para>
        </definition>
        <definedTerm>
          <parameterReference>ppvObject</parameterReference>
        </definedTerm>
        <definition>
          <para>When this operation completes,  a copy of the current strong reference if the strong reference count is nonzero.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <list class="bullet">
        <listItem>
          <para>S_OK if this operation is successful and the strong reference count is zero. The <parameterReference>ppvObject</parameterReference> parameter is set to <languageKeyword>nullptr</languageKeyword>.</para>
        </listItem>
        <listItem>
          <para>S_OK if this operation is successful and the strong reference count is nonzero. The <parameterReference>ppvObject</parameterReference> parameter is set to the strong reference.</para>
        </listItem>
        <listItem>
          <para>Otherwise, an HRESULT that indicates the reason this operation failed.</para>
        </listItem>
      </list>
    </content>
  </returnValue>
  <languageReferenceRemarks>
    <content>
      <para>Sets the specified pointer to the current strong reference value if the strong reference count is nonzero.</para>
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