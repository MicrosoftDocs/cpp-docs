---
title: "Adding an Entry to an Accelerator Table"
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
ms.assetid: 559c2415-8323-4339-9447-6966665f8288
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
# Adding an Entry to an Accelerator Table
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction />
  <procedure>
    <title>To add an entry to an accelerator table</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Open the accelerator table by double-clicking its icon in <legacyLink xlink:href="10BE7FF6-195F-4783-9EC5-87E5E06A7369">Resource View</legacyLink>. </para>
          <alert class="note">
            <para>If your project doesn't already contain an .rc file, please see <legacyLink xlink:href="82BE732A-CDCD-4A58-8DE7-976D1418F86B">Creating a New Resource Script File</legacyLink>.</para>
          </alert>
        </content>
      </step>
      <step>
        <content>
          <para>Right-click within the accelerator table and choose <legacyBold>New Accelerator</legacyBold> from the shortcut menu, or click on the empty row entry at the bottom of the table.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Select an ID from the drop-down list in the <legacyLink xlink:href="756EA7AD-D39B-490D-A2BA-163C434577F0">ID</legacyLink> box or type a new ID in the <legacyBold>ID</legacyBold> box.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Type the <legacyLink xlink:href="D1570CD9-B414-4CD6-96BD-47C38281EACA">Key</legacyLink> you want to use as an accelerator or right-click and choose <legacyBold>Next Key Typed</legacyBold> from the shortcut menu to set a key combination (the <legacyBold>Next Key Typed</legacyBold> command is also available from the <legacyBold>Edit</legacyBold> menu).</para>
        </content>
      </step>
      <step>
        <content>
          <para>Change the <legacyLink xlink:href="F05A9379-E037-4CFB-B6EF-D2C655BCFA7F">Modifier</legacyLink> and <legacyLink xlink:href="8C349BC4-E6AD-43FA-959E-F29168AF35B8">Type</legacyLink>, if necessary.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Press <legacyBold>ENTER</legacyBold>. </para>
          <alert class="note">
            <para>Make sure all accelerators you define are unique. You can have several key combinations assigned to the same ID with no ill effect, for example, CTRL + P and F8 can both be assigned to ID_PRINT. However, having a key combination assigned to more than one ID will not work well, for example, CTRL + Z assigned to both ID_SPELL_CHECK and ID_THESAURUS.</para>
          </alert>
        </content>
      </step>
    </steps>
    <conclusion>
      <content>
        <para>For information on adding resources to managed projects, please see <legacyLink xlink:href="8AD495D4-2941-40CF-BF64-E82E85825890">Resources in Applications</legacyLink> in the <legacyItalic>.NET Framework Developer's Guide.</legacyItalic> For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see <link xlink:href="bb4e5b44-e2b0-48ab-bbe9-609fb33900b6">Walkthrough: Using Resources for Localization with ASP.NET</link>.</para>
        <para>
          <legacyBold>Requirements</legacyBold>
        </para>
        <para>Win32</para>
      </content>
    </conclusion>
  </procedure>
  <relatedTopics>
<link xlink:href="56E24EFB-D06B-4ED9-8915-1F99F725E247">Editing Accelerator Tables</link>
<link xlink:href="013C30B6-5D61-4F1C-ACEF-8BD15BED7060">Accelerator Editor</link>
</relatedTopics>
</developerHowToDocument>