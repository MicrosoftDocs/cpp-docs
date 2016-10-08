---
title: "How to: Add Command Routing to the Windows Forms Control"
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
ms.topic: get-started-article
ms.assetid: bf138ece-b463-442a-b0a0-de7063a760c0
caps.latest.revision: 10
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
# How to: Add Command Routing to the Windows Forms Control
<?xml version="1.0" encoding="utf-8"?>
<developerHowToDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>
      <legacyLink xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</legacyLink> routes commands and update-command UI messages to the user control to allow it to handle MFC commands (for example, frame menu items and toolbar buttons).</para>
    <para>The user control uses <link xlink:href="f580a1f4-d711-4b22-8651-6c1314536a11">ICommandTarget::Initialize</link> to store a reference to the command source object in <codeInline>m_CmdSrc</codeInline>, as shown in the following example. To use <unmanagedCodeEntityReference>ICommandTarget</unmanagedCodeEntityReference> you must add a reference to mfcmifc80.dll.</para>
    <para>
      <unmanagedCodeEntityReference>CWinFormsView</unmanagedCodeEntityReference> handles several of the common MFC view notifications by forwarding them to the managed user control. These notifications include the <legacyLink xlink:href="21dac456-961d-4ec3-85ef-7f5d00374119">OnInitialUpdate</legacyLink>, <legacyLink xlink:href="a5827cbe-a654-4147-8d3c-9b9588b64df1">OnUpdate</legacyLink> and <legacyLink xlink:href="7855222d-cbba-489a-ab11-56b4dc99a859">OnActivateView</legacyLink> methods of the <link xlink:href="9321f299-486e-4551-bee9-d2c4a7b91548">IView Interface</link>.</para>
    <para>This topic assumes you have previously completed <link xlink:href="03a53032-2f03-4fa2-b567-031615a26011">How to: Create the User Control and Host in a Dialog Box</link> and <link xlink:href="625b5821-f923-4701-aca0-c1a4ceca4f63">How to: Create the User Control and Host MDI View</link>.</para>
  </introduction>
  <procedure>
    <title>To create the MFC host application</title>
    <steps class="ordered">
      <step>
        <content>
          <para>Open Windows Forms Control Library you created in <link xlink:href="03a53032-2f03-4fa2-b567-031615a26011">How to: Create the User Control and Host in a Dialog Box</link>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a reference to mfcmifc80.dll, which you can do by right-clicking the project node in <ui>Solution Explorer</ui>, selecting <ui>Add</ui>, <ui>Reference</ui>, and then browsing to Microsoft Visual Studio 10.0\VC\atlmfc\lib.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Open UserControl1.Designer.cs and add the following using statement:</para>
          <code>using Microsoft.VisualC.MFC;</code>
        </content>
      </step>
      <step>
        <content>
          <para>Also, in UserControl1.Designer.cs, change this line:</para>
          <code>partial class UserControl1</code>
          <para>to this:</para>
          <code>partial class UserControl1 : System.Windows.Forms.UserControl, ICommandTarget</code>
        </content>
      </step>
      <step>
        <content>
          <para>Add this as the first line of the class definition for <codeInline>UserControl1</codeInline>:</para>
          <code>private ICommandSource m_CmdSrc;</code>
        </content>
      </step>
      <step>
        <content>
          <para>Add the following method definitions to <codeInline>UserControl1</codeInline> (we will create the ID of the MFC control in the next step):</para>
          <code>public void Initialize (ICommandSource cmdSrc)
{
   m_CmdSrc = cmdSrc;
   // need ID of control in MFC dialog and callback function 
   m_CmdSrc.AddCommandHandler(32771, new CommandHandler (singleMenuHandler));
}

private void singleMenuHandler (uint cmdUI)
{
   // User command handler code
   System.Windows.Forms.MessageBox.Show("Custom menu option was clicked.");
}</code>
        </content>
      </step>
      <step>
        <content>
          <para>Open the MFC application you created in <link xlink:href="625b5821-f923-4701-aca0-c1a4ceca4f63">How to: Create the User Control and Host MDI View</link>.</para>
        </content>
      </step>
      <step>
        <content>
          <para>Add a menu option that will invoke <codeInline>singleMenuHandler</codeInline>.</para>
          <para>Go to <ui>Resource View</ui> (Ctrl+Shift+E), expand the <ui>Menu</ui> folder, and then double-click <ui>IDR_MFC02TYPE</ui>. This displays the menu editor.</para>
          <para>Add a menu option at the bottom of the <ui>View</ui> menu. Notice the ID of the menu option in the <ui>Properties</ui> window. Save the file. </para>
          <para>In <ui>Solution Explorer</ui>, open the Resource.h file, copy the ID value for the menu option you just added, and paste that value as the first parameter to the <codeInline>m_CmdSrc.AddCommandHandler</codeInline> call in the C# project's <codeInline>Initialize</codeInline> method (replacing <codeInline>32771</codeInline> if necessary).</para>
        </content>
      </step>
      <step>
        <content>
          <para>Build and run the project.</para>
          <para>On the <ui>Build</ui> menu, click <ui>Build Solution</ui>.</para>
          <para>On the <ui>Debug</ui> menu, click <ui>Start without debugging</ui>.</para>
          <para>Select the menu option you added. Notice that the method in the .dll is called.</para>
          <para />
        </content>
      </step>
    </steps>
  </procedure>
  <relatedTopics>
<link xlink:href="43c02ab4-1366-434c-a980-0b19326d6ea0">Hosting a Windows Forms User Control as an MFC View</link>
<link xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource Interface</link>
<link xlink:href="dd9927f6-3479-4e7c-8ef9-13206cf901f3">ICommandTarget Interface</link>
<link xlink:href="22096734-e074-4aca-8523-4b15590109f9">CommandHandler Delegate</link>
</relatedTopics>
</developerHowToDocument>