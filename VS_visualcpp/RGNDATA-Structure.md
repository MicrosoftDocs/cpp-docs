---
title: "RGNDATA Structure"
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
ms.topic: article
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
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
# RGNDATA Structure
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <unmanagedCodeEntityReference>RGNDATA</unmanagedCodeEntityReference> structure contains a header and an array of rectangles that compose a region. These rectangles, sorted top to bottom left to right, do not overlap.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>
      <legacyBold>typedef struct _RGNDATA { /* rgnd */</legacyBold>
<legacyBold>   RGNDATAHEADER </legacyBold><parameterReference>rdh</parameterReference><legacyBold>;</legacyBold>
<legacyBold>   char </legacyBold><parameterReference>Buffer</parameterReference><legacyBold>[1];</legacyBold>
<legacyBold>} RGNDATA;</legacyBold></legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <legacyItalic>rdh</legacyItalic>
        </definedTerm>
        <definition>
          <para>Specifies a <externalLink><linkText>RGNDATAHEADER</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162941</linkUri></externalLink> structure. (For more information on this structure, see the <token>winSDK</token>.) The members of this structure specify the type of region (whether it is rectangular or trapezoidal), the number of rectangles that make up the region, the size of the buffer that contains the rectangle structures, and so on.</para>
        </definition>
        <definedTerm>
          <parameterReference>Buffer</parameterReference>
        </definedTerm>
        <definition>
          <para>Specifies an arbitrary-size buffer that contains the <legacyLink xlink:href="1B3160DE-64E9-40D1-89EB-AF3E0FD6ACF0">RECT</legacyLink> structures that make up the region.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> wingdi.h</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="27566602-7D84-4089-880C-8E90FB04FA56">Structures, Styles, Callbacks, and Message Maps</link>
<link xlink:href="BDE6E1B7-C7B2-458C-9F2B-D00956DD32D1">CRgn::CreateFromData</link>
<link xlink:href="F2249159-8C24-48AA-BC3A-1603F5A70C4B">CRgn::GetRegionData</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>

