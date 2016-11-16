---
title: "Designing a Wizard | Microsoft Docs"
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
  - "Visual C++ projects, custom wizards"
  - "projects [C++], custom wizards"
  - "wizards [C++], custom"
  - "custom wizards [C++], designing for projects"
ms.assetid: a7c0be7e-9297-4fed-83e3-5645c896d56b
caps.latest.revision: 9
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
# Designing a Wizard
You might need to create projects with standardized features that differ from the application wizards that are provided in Visual C++. For such tasks, you can use the Visual C++ wizard architecture, which is designed for easy extensibility and customization. You can create a wizard using the [Visual C++ Custom Wizard](../ide/creating-a-custom-wizard.md). After you create your wizard, you can configure it to generate the starter files you need for your projects.  
  
 A Visual C++ wizard is an HTML control. It uses the Visual C++ wizard engine, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>, which provides common services, such as <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.NavigateToCommandHandler%2A>, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.OkCancelAlert%2A>, and so on. The wizard also uses the script engine, which allows a wizard to understand both VBScript and [JScript .NET](http://msdn.microsoft.com/en-us/c7e636ee-c10f-45b1-85ec-fe2daca30bf5).  
  
 The wizard architecture allows you to access the following object models directly in your wizards, and call their methods, properties, and events from either the JScript or the HTML files. (See the examples in [The HTML Files](../ide/html-files.md) and [The JScript File](../ide/jscript-file.md) for more information.)  
  
-   [Developer Tools Environment (DTE) Object Model](http://msdn.microsoft.com/Library/4173a963-7ac7-4966-9bb7-e28a9d9f6792)  
  
-   [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b)  
  
-   [Visual C++ Project Model](http://msdn.microsoft.com/en-us/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f)  
  
-   [Visual C++ Wizard Model](http://msdn.microsoft.com/en-us/159395ac-33c7-47bf-ad42-4e1435ddc758)  
  
 See [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md) for a description of each element of designing a wizard.  
  
## See Also  
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Steps to Designing a Wizard](../ide/steps-to-designing-a-wizard.md)   
 [Customizing Your Wizard](../ide/customizing-your-wizard.md)