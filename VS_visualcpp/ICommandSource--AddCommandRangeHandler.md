---
title: "ICommandSource::AddCommandRangeHandler"
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
ms.assetid: f86cc4ea-acac-4523-8225-20a7fb182cec
caps.latest.revision: 10
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
# ICommandSource::AddCommandRangeHandler
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Adds a group of command handlers to a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void AddCommandRangeHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax,
    CommandHandler^ cmdHandler );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>cmdIDMin</parameterReference>
        </definedTerm>
        <definition>
          <para>The beginning index of the command ID range.</para>
        </definition>
        <definedTerm>
          <parameterReference>cmdIDMax</parameterReference>
        </definedTerm>
        <definition>
          <para>The ending index of the command ID range.</para>
        </definition>
        <definedTerm>
          <parameterReference>cmdHandler</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle to the message handler method to which the commands are mapped.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method maps a contiguous range of command IDs to a single message handler and adds it to the command source object. This is used for handling a group of related buttons with one method.</para>
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
<link xlink:href="7e74a854-6918-465d-98fe-3ea29a2a79b6">ICommandSource::RemoveCommandRangeHandler</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





