---
title: "Module::RegisterWinRTObject Method"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: a2782c9c-b9c5-4e4b-9c8d-ef513aea20c5
caps.latest.revision: 6
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
# Module::RegisterWinRTObject Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Registers one or more <token>wrt</token> objects so other applications can connect to them.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>A name that specifies a subset of objects affected by this operation.</para>
        </definition>
        <definedTerm>
          <parameterReference>activatableClassIds</parameterReference>
        </definedTerm>
        <definition>
          <para>An array of activatable CLSIDs to register.</para>
        </definition>
        <definedTerm>
          <parameterReference>cookie</parameterReference>
        </definedTerm>
        <definition>
          <para>A value that identifies the class objects that were registered. This value is used later to revoke the registration.</para>
        </definition>
        <definedTerm>
          <parameterReference>count</parameterReference>
        </definedTerm>
        <definition>
          <para>The number of objects to register.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successful; otherwise, an error HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.</para>
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