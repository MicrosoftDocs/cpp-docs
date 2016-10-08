---
title: "Setting Accelerator Properties"
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
ms.assetid: 0fce9156-3025-4e18-b034-e219a4c65812
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
# Setting Accelerator Properties
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithoutSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>In Visual C++ .NET, you can set accelerator properties in the <legacyLink xlink:href="E6E0FA4F-75C4-4A52-AF15-281CD61876CA">Properties window</legacyLink> at any time. You can also use the Accelerator editor to modify the accelerator properties in the accelerator table. Changes made using the Properties window or the Accelerator editor have the same result: edits are immediately reflected in the accelerator table.</para>
    <para>There are three properties for each accelerator "ID":  </para>
    <list class="bullet">
      <listItem>
        <para>The <legacyLink xlink:href="F05A9379-E037-4CFB-B6EF-D2C655BCFA7F">Modifier property</legacyLink> sets control key combinations for the accelerator. </para>
        <alert class="note">
          <para>In the Properties window, this property appears as three separate Boolean properties, all of which can be controlled independently: Alt, Ctrl, and Shift.</para>
        </alert>
      </listItem>
      <listItem>
        <para>The <legacyLink xlink:href="D1570CD9-B414-4CD6-96BD-47C38281EACA">Key property</legacyLink> sets the actual key to use as the accelerator.</para>
      </listItem>
      <listItem>
        <para>The <legacyLink xlink:href="8C349BC4-E6AD-43FA-959E-F29168AF35B8">Type property</legacyLink> determines whether the key is interpreted as virtual (VIRTKEY) or ASCII/ANSI.</para>
      </listItem>
    </list>
    <para>For information on adding resources to managed projects, please see <legacyLink xlink:href="8AD495D4-2941-40CF-BF64-E82E85825890">Resources in Applications</legacyLink> in the <legacyItalic>.NET Framework Developer's Guide.</legacyItalic> For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see <link xlink:href="bb4e5b44-e2b0-48ab-bbe9-609fb33900b6">Walkthrough: Using Resources for Localization with ASP.NET</link>.</para>
  </introduction>
  <section>
    <title>Requirements</title>
    <content>
      <para>Win32</para>
    </content>
  </section>
  <relatedTopics>
<link xlink:href="F234C5F2-4EC3-4C9E-834A-B5DD297625B9">Predefined Accelerator Keys</link>
<link xlink:href="E20A29EC-D6FB-4EAD-98F3-431A0E23AAAF">Resource Editors</link>
<link xlink:href="013C30B6-5D61-4F1C-ACEF-8BD15BED7060">Accelerator Editor</link>
</relatedTopics>
</developerReferenceWithoutSyntaxDocument>