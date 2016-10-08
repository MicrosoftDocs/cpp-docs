---
title: "ICommandTarget::Initialize"
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
ms.assetid: f580a1f4-d711-4b22-8651-6c1314536a11
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
# ICommandTarget::Initialize
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Initializes the command target object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>void Initialize( ICommandSource^ cmdSource );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>cmdSource</parameterReference>
        </definedTerm>
        <definition>
          <para>A handle to the command source object.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>When you host a user control in an MFC View, <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> routes commands and update command UI messages to the user control to allow it to handle MFC commands.</para>
      <para>This method initializes the command target object and associates it with the specified command source object <parameterReference>cmdSource</parameterReference>. It should be called in the user control class implementation. At initialization, you should register command handlers with the command source object by calling <link xlink:href="0829f789-bf15-4c62-ab41-9ae32925d78d">ICommandSource::AddCommandHandler</link> in the <unmanagedCodeEntityReference>Initialize</unmanagedCodeEntityReference> implementation. See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>Initialize</unmanagedCodeEntityReference> to do this.</para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> afxwinforms.h</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="dd9927f6-3479-4e7c-8ef9-13206cf901f3">ICommandTarget Interface</link>
<link xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource Interface</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>





