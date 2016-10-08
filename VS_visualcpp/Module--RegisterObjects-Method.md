---
title: "Module::RegisterObjects Method"
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
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
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
# Module::RegisterObjects Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Registers COM or <token>wrt</token> objects so other applications can connect to them.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>HRESULT RegisterObjects(
   ModuleBase* module, 
   const wchar_t* serverName);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>module</parameterReference>
        </definedTerm>
        <definition>
          <para>An array of COM or <token>wrt</token> objects.</para>
        </definition>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>Name of the server that created the objects.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successful; otherwise, an HRESULT that indicates the reason the operation failed.</para>
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