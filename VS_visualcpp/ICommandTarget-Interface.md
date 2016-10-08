---
title: "ICommandTarget Interface"
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
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
caps.latest.revision: 19
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
# ICommandTarget Interface
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Provides a user control with an interface to receive commands from a command source object.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>interface class ICommandTarget</legacySyntax>
  </syntaxSection>
  <section>
    <title>Members</title>
    <content />
    <sections>
      <section>
        <title>Public Methods</title>
        <content>
          <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
            <thead>
              <tr>
                <TD>
                  <para>Name</para>
                </TD>
                <TD>
                  <para>Description</para>
                </TD>
              </tr>
            </thead>
            <tbody>
              <tr>
                <TD>
                  <para> <link xlink:href="f580a1f4-d711-4b22-8651-6c1314536a11">ICommandTarget::Initialize</link>
                  </para>
                </TD>
                <TD>
                  <para>Initializes the command target object.</para>
                </TD>
              </tr>
            </tbody>
          </table>
        </content>
      </section>
    </sections>
  </section>
  <languageReferenceRemarks>
    <content>
      <para>When you host a user control in an MFC View, <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> routes commands and update command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons). By implementing <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference>, you give the user control a reference to the <legacyLink xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource</legacyLink> object.</para>
      <para>See <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> for an example of how to use <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference>.</para>
      <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header:</embeddedLabel> afxwinforms.h (defined in assembly atlmfc\lib\mfcmifc80.dll)</para>
    </content>
  </requirements>
  <relatedTopics> <link xlink:href="bf138ece-b463-442a-b0a0-de7063a760c0">How To: Add Command Routing to the Windows Forms Control</link> <link xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource Interface</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>







