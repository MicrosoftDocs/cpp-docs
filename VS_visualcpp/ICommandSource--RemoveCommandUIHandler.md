---
title: "ICommandSource::RemoveCommandUIHandler"
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
ms.assetid: dcb490bd-0211-45b1-a0dd-444584e15eb7
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
# ICommandSource::RemoveCommandUIHandler
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Removes a user interface command message handler from a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void RemoveCommandUIHandler( 
    unsigned int cmdID );</legacySyntax>
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
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method removes the user interface command message handler mapped to <parameterReference>cmdID</parameterReference> from the command source object.</para>
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
<link xlink:href="f0c9523b-fc75-4721-bc7b-8c6e7e00539a">ICommandSource::AddCommandUIHandler</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





