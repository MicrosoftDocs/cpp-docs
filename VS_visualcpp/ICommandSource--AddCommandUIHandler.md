---
title: "ICommandSource::AddCommandUIHandler"
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
ms.assetid: f0c9523b-fc75-4721-bc7b-8c6e7e00539a
caps.latest.revision: 9
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
# ICommandSource::AddCommandUIHandler
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Adds a user interface command message handler to a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void AddCommandUIHandler( 
    unsigned int cmdID, 
    CommandUIHandler^ cmdUIHandler );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>cmdID</parameterReference>
        </definedTerm>
        <definition>
          <para>The command ID.</para>
        </definition>
        <definedTerm>
          <parameterReference>cmdUIHandler</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle to the user interface command message handler method.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method adds the user interface command message handler <parameterReference>cmdHandler</parameterReference> to the command source object and maps the handler to <parameterReference>cmdID</parameterReference>.</para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> afxwinforms.h</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource Interface</link>
<link xlink:href="dcb490bd-0211-45b1-a0dd-444584e15eb7">ICommandSource::RemoveCommandUIHandler</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





