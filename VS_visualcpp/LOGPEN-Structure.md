---
title: "LOGPEN Structure"
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
ms.assetid: a89e8690-6b61-4af5-990c-7c82da24f3b0
caps.latest.revision: 7
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
# LOGPEN Structure
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The <unmanagedCodeEntityReference>LOGPEN</unmanagedCodeEntityReference> structure defines the style, width, and color of a pen, a drawing object used to draw lines and borders. The <legacyLink xlink:href="E86EE5D5-25AA-4521-9570-180EFE92BB8D">CPen::CreatePenIndirect</legacyLink> function uses the <unmanagedCodeEntityReference>LOGPEN</unmanagedCodeEntityReference> structure.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>
      <legacyBold>typedef struct tagLOGPEN {  /* lgpn */</legacyBold>
<legacyBold>   UINT </legacyBold><parameterReference>lopnStyle</parameterReference><legacyBold>;</legacyBold>
<legacyBold>   POINT </legacyBold><parameterReference>lopnWidth</parameterReference><legacyBold>;</legacyBold>
<legacyBold>   COLORREF </legacyBold><parameterReference>lopnColor</parameterReference><legacyBold>;</legacyBold>
<legacyBold>} LOGPEN;</legacyBold></legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <legacyItalic>lopnStyle</legacyItalic>
        </definedTerm>
        <definition>
          <para>Specifies the pen type. This member can be one of the following values: </para>
          <list class="bullet">
            <listItem>
              <para>
                <legacyBold>PS_SOLID</legacyBold>   Creates a solid pen.</para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_DASH</legacyBold>   Creates a dashed pen. (Valid only when the pen width is 1.) </para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_DOT</legacyBold>   Creates a dotted pen. (Valid only when the pen width is 1.) </para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_DASHDOT</legacyBold>   Creates a pen with alternating dashes and dots. (Valid only when the pen width is 1.) </para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_DASHDOTDOT</legacyBold>   Creates a pen with alternating dashes and double dots. (Valid only when the pen width is 1.) </para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_NULL</legacyBold>   Creates a null pen. </para>
            </listItem>
            <listItem>
              <para>
                <legacyBold>PS_INSIDEFRAME</legacyBold>   Creates a pen that draws a line inside the frame of closed shapes produced by GDI output functions that specify a bounding rectangle (for example, the <legacyBold>Ellipse</legacyBold>, <legacyBold>Rectangle</legacyBold>, <unmanagedCodeEntityReference>RoundRect</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>Pie</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>Chord</unmanagedCodeEntityReference> member functions). When this style is used with GDI output functions that do not specify a bounding rectangle (for example, the <unmanagedCodeEntityReference>LineTo</unmanagedCodeEntityReference> member function), the drawing area of the pen is not limited by a frame. </para>
              <para>If a pen has the <legacyBold>PS_INSIDEFRAME</legacyBold> style and a color that does not match a color in the logical color table, the pen is drawn with a dithered color. The <legacyBold>PS_SOLID</legacyBold> pen style cannot be used to create a pen with a dithered color. The <legacyBold>PS_INSIDEFRAME</legacyBold> style is identical to <legacyBold>PS_SOLID</legacyBold> if the pen width is less than or equal to 1.  </para>
              <para>When the <legacyBold>PS_INSIDEFRAME</legacyBold> style is used with GDI objects produced by functions other than <legacyBold>Ellipse</legacyBold>, <legacyBold>Rectangle</legacyBold>, and <unmanagedCodeEntityReference>RoundRect</unmanagedCodeEntityReference>, the line may not be completely inside the specified frame. </para>
            </listItem>
          </list>
        </definition>
        <definedTerm>
          <legacyItalic>lopnWidth</legacyItalic>
        </definedTerm>
        <definition>
          <para>Specifies the pen width, in logical units. If the <legacyBold>lopnWidth</legacyBold> member is 0, the pen is 1 pixel wide on raster devices regardless of the current mapping mode. </para>
        </definition>
        <definedTerm>
          <legacyItalic>lopnColor</legacyItalic>
        </definedTerm>
        <definition>
          <para>Specifies the pen color. </para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <languageReferenceRemarks>
    <content>
      <para>The <legacyBold>y</legacyBold> value in the <legacyLink xlink:href="965736D8-4E53-41B6-9B8B-6961992DD21F">POINT</legacyLink> structure for the <legacyBold>lopnWidth</legacyBold> member is not used. </para>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <legacyBold>Header:</legacyBold> wingdi.h</para>
    </content>
  </requirements>
  <relatedTopics>
<link xlink:href="27566602-7D84-4089-880C-8E90FB04FA56">Structures, Styles, Callbacks, and Message Maps</link>
<link xlink:href="E86EE5D5-25AA-4521-9570-180EFE92BB8D">CPen::CreatePenIndirect</link>
</relatedTopics>
</developerReferenceWithSyntaxDocument>

