---
title: "Examining the Mechanics of a Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom wizards, wizard projects"
ms.assetid: 79917075-a843-40f6-abf8-64d98e5f6bdc
caps.latest.revision: 12
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
# Examining the Mechanics of a Wizard
You do not need to compile a wizard project to have users start using it right away. Once you have created the necessary elements, the VSDIR directs the `New Project` dialog box to display the wizard icon and the `Add New Item` dialog box to display the wizard name in the shortcut menu. Your customer can launch the wizard immediately by selecting it.  
  
 When the user launches the wizard, the environment shell cocreates the wizard engine and queries for <xref:EnvDTE.IDTWizard>. It then calls <xref:EnvDTE.IDTWizard.Execute%2A> to launch the wizard.  
  
> [!NOTE]
>  If the wizard has no interface, the project is created with the supplied defaults and displayed in Solution Explorer, with the node structure supplied in the .vsz file. The rest of this topic assumes that the wizard has a UI.  
  
 If the wizard has a UI, the user accepts or changes the defaults in each control in the wizard's HTML-based UI. As the user navigates through the wizard's pages and makes changes, functions such as <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.Navigate%2A> and <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.Next%2A> are called in the Script section of the HTML.  
  
 Whenever the user selects different options within the wizard, the selections are captured in the symbol table in the wizard control. The symbol table matches the IDs of the controls in the wizard's HTML page to maintain a one-to-one correspondence between user selections and the symbol table.  
  
 When the user clicks **Finish** in the wizard UI, the JScript function **OnFinish** is called from the HTML script.  
  
> [!NOTE]
>  You can customize **OnFinish** in Default.js to perform any additional tasks you require.  
  
 The wizard engine then scans through the template files, parsing and rendering them based on the user's choices. It copies the rendered files to the project directory and adds these files to the project. The newly created project is loaded in the Visual Studio environment, and the project's nodes and files are displayed in Solution Explorer.  
  
## See Also  
 <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl>   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Steps to Designing a Wizard](../ide/steps-to-designing-a-wizard.md)   
 [Customizing Your Wizard](../ide/customizing-your-wizard.md)