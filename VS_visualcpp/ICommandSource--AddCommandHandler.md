---
title: "ICommandSource::AddCommandHandler"
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
ms.assetid: 0829f789-bf15-4c62-ab41-9ae32925d78d
caps.latest.revision: 13
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
# ICommandSource::AddCommandHandler
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Adds a command handler to a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void AddCommandHandler(
    unsigned int cmdID,
    CommandHandler^ cmdHandler );</legacySyntax>
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
          <parameterReference>cmdHandler</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle to the command handler method.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>This method adds the command handler <parameterReference>cmdHandler</parameterReference> to the command source object and maps the handler to <parameterReference>cmdID</parameterReference>.</para>
      <para>See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>AddCommandHandler</unmanagedCodeEntityReference>.</para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> afxwinforms.h</para>
        <para>"ICommandSource Interface"</para>
    </content>
  </requirements>
  <relatedTopics>

<link xlink:href="2d0c6aba-57cf-4b75-b5a7-3902ab0fbcbd">ICommandSource::RemoveCommandHandler</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





