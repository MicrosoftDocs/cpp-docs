---
title: "Using a Windows Form User Control in MFC"
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
ms.assetid: 63fb099b-1dff-469c-9e34-dab52e122fcd
caps.latest.revision: 16
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
# Using a Windows Form User Control in MFC
<?xml version="1.0" encoding="utf-8"?>
<developerOrientationDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Using the MFC Windows Forms support classes, you can host Windows Forms controls within your MFC applications as an ActiveX control within MFC dialog boxes or views. In addition, Windows Forms forms can be hosted as MFC dialog boxes.</para>
    <para>The following sections describe how to:</para>
    <list class="bullet">
      <listItem>
        <para>Host a Windows Forms control in an MFC dialog box.</para>
      </listItem>
      <listItem>
        <para>Host a Windows Forms user control as an MFC view.</para>
      </listItem>
      <listItem>
        <para>Host a Windows Forms form as an MFC dialog box.</para>
      </listItem>
    </list>
    <alert class="note">
      <para>MFC Windows Forms integration works only in projects that link dynamically with MFC (projects in which AFXDLL is defined).</para>
    </alert>
    <alert class="note">
      <para>When you build your application using a private (modified) copy of the MFC Windows Forms interfaces DLL (mfcmifc80.dll), it will fail to install in the GAC unless you replace the Microsoft key with your own vendor key. For more information on assembly signing, see <link xlink:href="25918b15-701d-42c7-95fc-c290d08648d6">Programming with Assemblies</link> and <link xlink:href="c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc">Strong Name Assemblies (Assembly Signing)</link>.</para>
    </alert>
    <para>For sample applications using Windows Forms, see <link xlink:href="ac932aed-5502-4667-be29-709bca435317">BirthdayPicker Sample: Demonstrates .NET Framework Resources with Windows Forms</link>, <link xlink:href="2283b516-3b7e-45f2-80c4-fdcfb366ce25">Calculator Sample: Windows Forms Pocket Calculator</link>, and <link xlink:href="f025da3e-659b-4222-b991-554a1b8b2358">Scribble Sample: MDI Drawing Application</link>.</para>
    <para>For a sample application that shows Windows Forms used with MFC, see <externalLink><linkText>MFC and Windows Forms Integration</linkText><linkUri>http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&amp;displaylang=en</linkUri></externalLink>.</para>
    <para>If your MFC application uses Windows Forms, you need to redistribute mfcmifc90.dll with your application. For more information, see <link xlink:href="72714ce1-385e-4c1c-afa5-96b03e873866">Redistributing the MFC Library</link>.</para>
  </introduction>
  <inThisSection>
    <content>
      <para>
        <link xlink:href="9f66ee52-b7cb-4ffd-8306-392a5da990d8">Hosting a Windows Forms Control in an MFC Dialog Box</link> </para>
      <para>
        <link xlink:href="43c02ab4-1366-434c-a980-0b19326d6ea0">Hosting a Windows Forms User Control as an MFC View</link> </para>
      <para>
        <link xlink:href="0434a9d7-8b14-48e6-ad69-9ba9a684677a">Hosting a Windows Forms Form as an MFC Dialog Box</link> </para>
    </content>
  </inThisSection>
  <reference>
    <content>
      <para>
        <link xlink:href="6406dd7b-fb89-4a18-ac3a-c010d6b6289a">CWinFormsControl Class</link>
      </para>
      <para>
        <link xlink:href="e3cec000-a578-448e-b06a-8af256312f61">CWinFormsDialog Class</link>
      </para>
      <para>
        <link xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView Class</link>
      </para>
      <para>
        <link xlink:href="a4b1f698-c09f-4ba8-9b13-0e74a0a4967e">ICommandSource Interface</link>
      </para>
      <para>
        <link xlink:href="dd9927f6-3479-4e7c-8ef9-13206cf901f3">ICommandTarget Interface</link>
      </para>
      <para>
        <link xlink:href="134afe8d-dcdf-47ca-857a-a166a6b665dd">ICommandUI Interface</link>
      </para>
      <para>
        <link xlink:href="9321f299-486e-4551-bee9-d2c4a7b91548">IView Interface</link>
      </para>
      <para>
        <link xlink:href="22096734-e074-4aca-8523-4b15590109f9">CommandHandler Delegate</link>
      </para>
      <para>
        <link xlink:href="2da11ecc-20d6-4a53-97fc-08b48f06d71a">CommandUIHandler Delegate</link>
      </para>
      <para>
        <link xlink:href="61b55a90-c993-478e-9dea-db27fbf0e193">DDX_ManagedControl</link>
      </para>
      <para>
        <link xlink:href="68d84834-e7f9-4ccb-8126-d492e27073e9">UICheckState Enumeration</link>
      </para>
    </content>
  </reference>
  <relatedSections>
    <content>
      <para>
        <link xlink:href="627df1e9-b254-41af-bbac-9a4f02810c54">Windows Forms</link>
      </para>
      <para>
        <link xlink:href="f050de8f-4ebd-4042-94b8-edf9a1dbd52a">Windows Forms Controls</link>
      </para>
      <para>
        <link xlink:href="5e601b3d-bb16-4dbe-9e35-7e92a34565ca">Web Forms User Controls</link>
      </para>
    </content>
  </relatedSections>
  <relatedTopics>
<link xlink:href="f5daf2c1-bc08-4b71-9b03-da2c0aab5764">User Interface</link>
<link xlink:href="efbe73c1-4ca4-4613-aac2-30d916e92c0e">Form Topics</link>
</relatedTopics>
</developerOrientationDocument>