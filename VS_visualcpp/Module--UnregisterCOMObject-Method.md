---
title: "Module::UnregisterCOMObject Method"
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
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
caps.latest.revision: 2
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
# Module::UnregisterCOMObject Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Unregisters one or more COM objects, which prevents other applications from connecting to them.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>(Unused)</para>
        </definition>
        <definedTerm>
          <parameterReference>cookies</parameterReference>
        </definedTerm>
        <definition>
          <para>An array of pointers to values that identify the class objects to be unregistered. The array was created by the <legacyLink xlink:href="59f223dc-03c6-429d-95da-b74b3f73b702">RegisterCOMObject</legacyLink> method.</para>
        </definition>
        <definedTerm>
          <parameterReference>count</parameterReference>
        </definedTerm>
        <definition>
          <para>The number of classes to unregister.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason the operation failed.</para>
    </content>
  </returnValue>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>