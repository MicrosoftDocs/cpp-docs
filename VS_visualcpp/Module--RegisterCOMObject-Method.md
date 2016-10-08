---
title: "Module::RegisterCOMObject Method"
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
ms.assetid: 59f223dc-03c6-429d-95da-b74b3f73b702
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
# Module::RegisterCOMObject Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Registers one or more COM objects so other applications can connect to them.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>WRL_NOTHROW virtual HRESULT RegisterCOMObject(
   const wchar_t* <parameterReference>serverName</parameterReference>,
   IID* <parameterReference>clsids</parameterReference>,
   IClassFactory** <parameterReference>factories</parameterReference>,
   DWORD* <parameterReference>cookies</parameterReference>,
   unsigned int <parameterReference>count</parameterReference>);
</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>Fully-qualified name of a server.</para>
        </definition>
        <definedTerm>
          <parameterReference>clsids</parameterReference>
        </definedTerm>
        <definition>
          <para>An array of CLSIDs to register.</para>
        </definition>
        <definedTerm>
          <parameterReference>factories</parameterReference>
        </definedTerm>
        <definition>
          <para>An array of IUnknown interfaces of the class objects whose availability is being published.</para>
        </definition>
        <definedTerm>
          <parameterReference>cookies</parameterReference>
        </definedTerm>
        <definition>
          <para>When the operation completes, an array of pointers to values that identify the class objects that were registered. These values are later used revoke the registration.</para>
        </definition>
        <definedTerm>
          <parameterReference>count</parameterReference>
        </definedTerm>
        <definition>
          <para>The number of CLSIDs to register.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successfu; otherwise, an HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The COM objects are registered with the CLSCTX_LOCAL_SERVER enumerator of the CLSCTX enumeration. </para>
      <para>The type of connection to the registered objects is specified by a combination of the current <parameterReference>comflag</parameterReference> template parameter and the REGCLS_SUSPENDED enumerator of the REGCLS enumeration.</para>
    </content>
  </section>
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