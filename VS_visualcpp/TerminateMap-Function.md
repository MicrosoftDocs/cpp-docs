---
title: "TerminateMap Function"
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
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
caps.latest.revision: 5
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
# TerminateMap Function
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Supports the WRL infrastructure and is not intended to be used directly from your code.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>inline bool TerminateMap(
   _In_ ModuleBase *<parameterReference>module</parameterReference>, 
   _In_opt_z_ const wchar_t *<parameterReference>serverName</parameterReference>, 
    bool <parameterReference>forceTerminate</parameterReference>) throw()</legacySyntax>
  </syntaxSection>
  <section>
    <title>Parameters</title>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>module</parameterReference>
        </definedTerm>
        <definition>
          <para>A module. </para>
        </definition>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>The name of a subset of class factories in the module specified by parameter <parameterReference>module</parameterReference>.</para>
        </definition>
        <definedTerm>
          <parameterReference>forceTerminate</parameterReference>
        </definedTerm>
        <definition>
          <para>
            <languageKeyword>true</languageKeyword> to terminate the class factories regardless of they are active; <languageKeyword>false</languageKeyword> to not terminate the class factories if any factory is active.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <returnValue>
    <content>
      <para>
        <languageKeyword>true</languageKeyword> if all class factories were terminated; otherwise, <languageKeyword>false</languageKeyword>.</para>
    </content>
  </returnValue>
  <languageReferenceRemarks>
    <content>
      <para>Shuts down the class factories in the specified module.</para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL::Details</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="d71fe149-d804-4c6f-961d-43fe21ef8630">Microsoft::WRL::Details Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>