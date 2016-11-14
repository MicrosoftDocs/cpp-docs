---
title: "Creating an MFC ActiveX Control | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.activex.project"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC ActiveX controls [C++], creating"
  - "ActiveX controls [C++], creating"
ms.assetid: 8bd5a93c-d04d-414e-bb28-163fdc1c0dd5
caps.latest.revision: 13
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
# Creating an MFC ActiveX Control
ActiveX control programs are modular programs designed to give a specific type of functionality to a parent application. For example, you can create a control such as a button for use in a dialog, or toolbar for use in a Web page.  
  
 The easiest way to create an MFC ActiveX control is to use the [MFC ActiveX Control Wizard](../../mfc/reference/mfc-activex-control-wizard.md).  
  
### To create an MFC ActiveX Control using the MFC ActiveX Control Wizard  
  
1.  Follow the instructions in the help topic [Creating a Project with a Visual C++ Application Wizard](../../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
2.  In the **New Project** dialog box, select the **MFC ActiveX Control** icon in the Templates pane to open the MFC ActiveX Control Wizard.  
  
3.  Define your [application settings](../../mfc/reference/application-settings-mfc-activex-control-wizard.md), [control names](../../mfc/reference/control-names-mfc-activex-control-wizard.md), and [control settings](../../mfc/reference/control-settings-mfc-activex-control-wizard.md) using the MFC ActiveX Control Wizard.  
  
    > [!NOTE]
    >  Skip this step to keep the wizard default settings.  
  
4.  Click **Finish** to close the wizard and open your new project in the development environment.  
  
 After you have created your project, you can view the files created in **Solution Explorer**. For more information about the files the wizard creates for your project, see the project-generated file ReadMe.txt. For more information about the file types, see [File Types Created for Visual C++ Projects](../../ide/file-types-created-for-visual-cpp-projects.md).  
  
 After you have created your project, you can use the code wizards to add [functions](../../ide/add-member-function-wizard.md), [variables](../../ide/add-member-variable-wizard.md), [events](../../ide/add-event-wizard.md), [properties](../../ide/names-add-property-wizard.md), and [methods](../../ide/add-method-wizard.md). For more information about customizing your ActiveX control, see [MFC ActiveX Controls](../../mfc/mfc-activex-controls.md).  
  
## See Also  
 [Adding Functionality with Code Wizards](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Property Pages](../../ide/property-pages-visual-cpp.md)   
 [Deploying Applications](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)

