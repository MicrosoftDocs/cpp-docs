---
title: "ICommandSource::SendCommand"
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
ms.assetid: be347ba3-a9d7-48a4-9020-86d0be0f8956
caps.latest.revision: 11
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
# ICommandSource::SendCommand
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Sends a message and waits for it to be processed before returning.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void SendCommand( 
    unsigned int command );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>command</parameterReference>
        </definedTerm>
        <definition>
          <para>The command ID of the message to be sent.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method synchronously sends the message mapped to the ID specified by <parameterReference>command</parameterReference>. It calls <link xlink:href="ba72b0bd-57ec-4ef5-bee4-f5dbb971f927">CWnd::SendMessage</link> to place the message in the window's message queue and waits until that window procedure has processed the message before returning.</para>
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
<link xlink:href="b5c721bf-223a-4d3b-bd2d-287ea11dfaca">ICommandSource::PostCommand</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





