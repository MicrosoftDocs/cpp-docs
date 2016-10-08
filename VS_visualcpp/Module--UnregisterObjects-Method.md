---
title: "Module::UnregisterObjects Method"
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
ms.topic: reference
ms.assetid: 3d8119a7-991d-45e9-b8c5-ed36c0be0332
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
# Module::UnregisterObjects Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Unregisters the objects in the specified module so that other applications cannot connect to them.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>HRESULT UnregisterObjects(
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
          <para>Pointer to a module.</para>
        </definition>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>A qualifying name that specifies a subset of objects affected by this operation.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason this operation failed.</para>
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
    
  </relatedTopics>
</developerReferenceWithSyntaxDocument>