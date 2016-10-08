---
title: "ICommandSource::RemoveCommandRangeUIHandler"
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
ms.assetid: c6d3e36c-f1fa-4b0a-bedf-1a64fd19f8a5
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
# ICommandSource::RemoveCommandRangeUIHandler
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Removes a group of user interface command message handlers from a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void RemoveCommandRangeUIHandler(
    unsigned int cmdIDMin,
    unsigned int cmdIDMax );</legacySyntax>
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
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method removes a group of user interface command message handlers, mapped to the command IDs specifed by <parameterReference>cmdIDMin</parameterReference> and <parameterReference>cmdIDMax</parameterReference>, from the command source object.</para>
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
<link xlink:href="b8560b1b-67d4-45a4-b5ba-ae1ea5d98bfd">ICommandSource::AddCommandRangeUIHandler</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





