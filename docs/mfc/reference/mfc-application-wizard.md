---
title: "MFC Application Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC Application Wizard"
  - "executable files, creating"
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# MFC Application Wizard
The MFC Application Wizard generates an application that, when compiled, implements the basic features of a Windows executable (.exe) application. The MFC starter application includes C++ source (.cpp) files, resource (.rc) files, header (.h) files, and a project (.vcxproj) file. The code that is generated in these starter files is based on MFC.  
  
> [!NOTE]
>  Depending on the options that you select, the wizard creates additional files in your project. For example, if you select **Context-sensitive help** on the [Advanced Features](../../mfc/reference/advanced-features-mfc-application-wizard.md) page, the wizard creates the files that are necessary to compile the project's Help files. For more information about the files that the wizard creates, see [File Types Created for Visual C++ Projects](../../ide/file-types-created-for-visual-cpp-projects.md), and see the Readme.txt file in the project.  
  
## Overview  
 This wizard page describes the current application settings for the MFC application that you are creating. By default, the wizard creates a project as follows:  
  
-   [Application Type, MFC Application Wizard](../../mfc/reference/application-type-mfc-application-wizard.md)  
  
    -   The project is created with tabbed multiple-document interface (MDI) support. For more information, see [SDI and MDI](../../mfc/sdi-and-mdi.md).  
  
    -   The project uses the [Document/View Architecture](../../mfc/document-view-architecture.md).  
  
    -   The project uses Unicode libraries.  
  
    -   The project is created using the Visual Studio project style and enables visual style switching.  
  
    -   The project uses MFC in a shared DLL. For more information, see [DLLs in Visual C++](../../build/dlls-in-visual-cpp.md).  
  
-   [Compound Document Support, MFC Application Wizard](../../mfc/reference/compound-document-support-mfc-application-wizard.md)  
  
    -   The project provides no support for compound documents.  
  
-   [Document Template Strings, MFC Application Wizard](../../mfc/reference/document-template-strings-mfc-application-wizard.md)  
  
    -   The project uses the project name for the default document template strings.  
  
-   [Database Support, MFC Application Wizard](../../mfc/reference/database-support-mfc-application-wizard.md)  
  
    -   The project provides no support for databases.  
  
-   [User Interface Features, MFC Application Wizard](../../mfc/reference/user-interface-features-mfc-application-wizard.md)  
  
    -   The project implements standard Windows user interface features such as a system menu, a status bar, maximize and minimize boxes, an **About** box, a standard menu bar and docking toolbar, and child frames.  
  
-   [Advanced Features, MFC Application Wizard](../../mfc/reference/advanced-features-mfc-application-wizard.md)  
  
    -   The project supports printing and print preview.  
  
    -   The project supports ActiveX controls. For more information, see [Sequence of Operations for Creating ActiveX Controls](../../mfc/sequence-of-operations-for-creating-activex-controls.md).  
  
    -   The project provides no support for [Automation](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows Sockets](../../mfc/windows-sockets-in-mfc.md), or Active Accessibility.  
  
    -   The project supports an **Explorer** docking pane, an **Ouput** docking pane, and a **Properties** docking pane.  
  
-   [Generated Classes, MFC Application Wizard](../../mfc/reference/generated-classes-mfc-application-wizard.md)  
  
    -   The project's view class is derived from the [CView Class](../../mfc/reference/cview-class.md).  
  
    -   The project's application class is derived from the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).  
  
    -   The project's document class is derived from the [CDocument Class](../../mfc/reference/cdocument-class.md).  
  
    -   The project's main frame class is derived from the [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md).  
  
    -   The project's child frame class is derived from the [CMDIChildWndEx Class](../../mfc/reference/cmdichildwndex-class.md).  
  
 To change these default settings, click the appropriate tab title in the left column of the wizard and make the changes on the page that appears.  
  
 After you create an MFC application project, you can add objects or controls to your project using Visual C++ [code wizards](../../ide/adding-functionality-with-code-wizards-cpp.md).  
  
## See Also  
 [Creating an MFC Application](../../mfc/reference/creating-an-mfc-application.md)   
 [MFC Desktop Applications](../../mfc/mfc-desktop-applications.md)   
 [Using the Classes to Write Applications for Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)
