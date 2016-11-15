---
title: "Examining the Basic Wizard Project | Microsoft Docs"
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
  - "custom wizards, files created"
ms.assetid: c6423e3c-ddb0-43e0-b8e5-9e3a98a7908c
caps.latest.revision: 10
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
# Examining the Basic Wizard Project
After you have used the [Custom Wizard](../ide/creating-a-custom-wizard.md) to create the basic project, examine the files it has created for you.  
  
1.  In **Solution Explorer**, expand the project and examine [the files](../ide/files-created-for-your-wizard.md) the wizard created for your project.  
  
2.  Double-click Default.js to open the project's [JScript file](../ide/jscript-file.md) in the code editor. This file contains JScript functions that create the project when the user clicks **Finish** in the wizard. Review the functions and TODO comments in this file.  
  
3.  If your project has a user interface, look in the folder labeled [HTML Files](../ide/html-files.md) and note that you have as many .htm files you as you specified in the [Application Settings](../ide/application-settings-custom-wizard.md) page in the Custom Wizard. Double-click Default.htm to open the project's main HTML page in the [HTML designer](http://msdn.microsoft.com/Library/640043cc-3657-4677-a091-bc315e636477). You can view the HTML in either [Design View](http://msdn.microsoft.com/Library/341aa58f-e248-4807-81f3-6965f14a4342) or in HTML view, as [HTML markup](http://msdn.microsoft.com/en-us/7bb90672-b36a-4cf9-9bbc-677c9b956318). Switch to HTML markup view and review the HTML markup. Click the **Script Only View** button (located at the upper right corner of the HTML View editing window, next to the **Events** drop-down list) and examine the JScript in the .htm file. By default, this file contains the JScript functions that initialize and load the wizard, and it provides default behavior for the **IVCWizCtrlUI** interface. See the coclass <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl> object for more information.  
  
4.  Save and close your wizard project.  
  
5.  Open the Visual Studio **New Project** dialog box and find your wizard icon. Double-click the icon to display your wizard. You can examine the basic wizard pages that the Custom Wizard created for you. Note that the first page contains some sample HTML controls and the standard **Finish**, **Cancel**, and **Help** buttons.  
  
6.  Click **Finish** to build a new project with your wizard. By default, your wizard creates two text files: ReadMe.txt and Sample.txt. These files describe the project that your wizard created. Close this project and reopen your wizard project.  
  
7.  Read [Examining the Mechanics of a Wizard](../ide/examining-the-mechanics-of-a-wizard.md) to get a clearer understanding of how the Visual Studio environment and the Visual C++ wizard engine created the project you created when you ran your wizard.  
  
 You are ready to start [customizing your custom wizard](../ide/customizing-your-wizard.md).  
  
## See Also  
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Steps to Designing a Wizard](../ide/steps-to-designing-a-wizard.md)   
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Providing Context-Sensitive Help](../ide/providing-context-sensitive-help.md)   
 [Customizing Your Wizard](../ide/customizing-your-wizard.md)