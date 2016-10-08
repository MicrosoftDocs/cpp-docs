---
title: "NCCALCSIZE_PARAMS Structure"
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
ms.topic: article
ms.assetid: 3424cd9f-806a-4089-82fb-414187589edf
caps.latest.revision: 8
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
# NCCALCSIZE_PARAMS Structure
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <unmanagedCodeEntityReference>NCCALCSIZE_PARAMS</unmanagedCodeEntityReference> structure contains information that an application can use while processing the <unmanagedCodeEntityReference>WM_NCCALCSIZE</unmanagedCodeEntityReference> message to calculate the size, position, and valid contents of the client area of a window. </para>
  </introduction>
  <syntaxSection>
    <legacySyntax>
      <legacyBold>typedef struct tagNCCALCSIZE_PARAMS {</legacyBold>
<legacyBold>   RECT </legacyBold><parameterReference>rgrc</parameterReference><legacyBold>[3];</legacyBold>
<legacyBold>   PWINDOWPOS </legacyBold><parameterReference>lppos</parameterReference><legacyBold>;</legacyBold>
<legacyBold>} NCCALCSIZE_PARAMS;</legacyBold></legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <legacyItalic>rgrc</legacyItalic>
        </definedTerm>
        <definition>
          <para>Specifies an array of rectangles. The first contains the new coordinates of a window that has been moved or resized. The second contains the coordinates of the window before it was moved or resized. The third contains the coordinates of the client area of a window before it was moved or resized. If the window is a child window, the coordinates are relative to the client area of the parent window. If the window is a top-level window, the coordinates are relative to the screen. </para>
        </definition>
        <definedTerm>
          <legacyItalic>lppos</legacyItalic>
        </definedTerm>
        <definition>
          <para>Points to a WINDOWPOS structure that contains the size and position values specified in the operation that caused the window to be moved or resized.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> winuser.h</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="27566602-7D84-4089-880C-8E90FB04FA56">Structures, Styles, Callbacks, and Message Maps</link>
<link xlink:href="5A2D7AEF-3C83-4886-9824-DF5309FDCCAD">CWnd::OnNcCalcSize</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>

