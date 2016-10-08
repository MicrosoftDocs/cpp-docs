---
title: "MFC Application Wizard"
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
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
caps.latest.revision: 12
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
# MFC Application Wizard
The MFC Application Wizard generates an application that, when compiled, implements the basic features of a Windows executable (.exe) application. The MFC starter application includes C++ source (.cpp) files, resource (.rc) files, header (.h) files, and a project (.vcxproj) file. The code that is generated in these starter files is based on MFC.  
  
> [!NOTE]
>  Depending on the options that you select, the wizard creates additional files in your project. For example, if you select **Context-sensitive help** on the [Advanced Features](../VS_visualcpp/Advanced-Features--MFC-Application-Wizard.md) page, the wizard creates the files that are necessary to compile the project's Help files. For more information about the files that the wizard creates, see [File Types Created for Visual C++ Projects](../VS_visualcpp/File-Types-Created-for-Visual-C---Projects.md), and see the Readme.txt file in the project.  
  
## Overview  
 This wizard page describes the current application settings for the MFC application that you are creating. By default, the wizard creates a project as follows:  
  
-   [Application Type, MFC Application Wizard](../VS_visualcpp/Application-Type--MFC-Application-Wizard.md)  
  
    -   The project is created with tabbed multiple-document interface (MDI) support. For more information, see [SDI and MDI](../VS_visualcpp/SDI-and-MDI.md).  
  
    -   The project uses the [Document/View Architecture](../VS_visualcpp/Document-View-Architecture.md).  
  
    -   The project uses Unicode libraries.  
  
    -   The project is created using the Visual Studio project style and enables visual style switching.  
  
    -   The project uses MFC in a shared DLL. For more information, see [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md).  
  
-   [Compound Document Support, MFC Application Wizard](../VS_visualcpp/Compound-Document-Support--MFC-Application-Wizard.md)  
  
    -   The project provides no support for compound documents.  
  
-   [Document Template Strings, MFC Application Wizard](../VS_visualcpp/Document-Template-Strings--MFC-Application-Wizard.md)  
  
    -   The project uses the project name for the default document template strings.  
  
-   [Database Support, MFC Application Wizard](../VS_visualcpp/Database-Support--MFC-Application-Wizard.md)  
  
    -   The project provides no support for databases.  
  
-   [User Interface Features, MFC Application Wizard](../VS_visualcpp/User-Interface-Features--MFC-Application-Wizard.md)  
  
    -   The project implements standard Windows user interface features such as a system menu, a status bar, maximize and minimize boxes, an **About** box, a standard menu bar and docking toolbar, and child frames.  
  
-   [Advanced Features, MFC Application Wizard](../VS_visualcpp/Advanced-Features--MFC-Application-Wizard.md)  
  
    -   The project supports printing and print preview.  
  
    -   The project supports ActiveX controls. For more information, see [Sequence of Operations for Creating ActiveX Controls](../VS_visualcpp/Sequence-of-Operations-for-Creating-ActiveX-Controls.md).  
  
    -   The project provides no support for [Automation](../VS_visualcpp/Automation.md), [MAPI](../VS_visualcpp/MAPI-Support-in-MFC.md), [Windows Sockets](../VS_visualcpp/Windows-Sockets-in-MFC.md), or Active Accessibility.  
  
    -   The project supports an **Explorer** docking pane, an **Ouput** docking pane, and a **Properties** docking pane.  
  
-   [Generated Classes, MFC Application Wizard](../VS_visualcpp/Generated-Classes--MFC-Application-Wizard.md)  
  
    -   The project's view class is derived from the [CView Class](../VS_visualcpp/CView-Class.md).  
  
    -   The project's application class is derived from the [CWinAppEx Class](../VS_visualcpp/CWinAppEx-Class.md).  
  
    -   The project's document class is derived from the [CDocument Class](../VS_visualcpp/CDocument-Class.md).  
  
    -   The project's main frame class is derived from the [CMDIFrameWndEx Class](../VS_visualcpp/CMDIFrameWndEx-Class.md).  
  
    -   The project's child frame class is derived from the [CMDIChildWndEx Class](../VS_visualcpp/CMDIChildWndEx-Class.md).  
  
 To change these default settings, click the appropriate tab title in the left column of the wizard and make the changes on the page that appears.  
  
 After you create an MFC application project, you can add objects or controls to your project using Visual C++ [code wizards](../VS_visualcpp/Adding-Functionality-with-Code-Wizards--C---.md).  
  
## See Also  
 [Creating an MFC Application](../VS_visualcpp/Creating-an-MFC-Application.md)   
 [MFC Desktop Applications](../VS_visualcpp/MFC-Desktop-Applications.md)   
 [Using the Classes to Write Applications for Windows](../VS_visualcpp/Using-the-Classes-to-Write-Applications-for-Windows.md)