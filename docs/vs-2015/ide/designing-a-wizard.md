---
title: "Designing a Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Designing a Wizard
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Designing a Wizard](https://docs.microsoft.com/cpp/ide/designing-a-wizard).  
  
  
You might need to create projects with standardized features that differ from the application wizards that are provided in Visual C++. For such tasks, you can use the Visual C++ wizard architecture, which is designed for easy extensibility and customization. You can create a wizard using the [Visual C++ Custom Wizard](../ide/creating-a-custom-wizard.md). After you create your wizard, you can configure it to generate the starter files you need for your projects.  
  
 A Visual C++ wizard is an HTML control. It uses the Visual C++ wizard engine, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>, which provides common services, such as <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.NavigateToCommandHandler%2A>, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.OkCancelAlert%2A>, and so on. The wizard also uses the script engine, which allows a wizard to understand both VBScript and [JScript .NET](http://msdn.microsoft.com/en-us/c7e636ee-c10f-45b1-85ec-fe2daca30bf5).  
  
 The wizard architecture allows you to access the following object models directly in your wizards, and call their methods, properties, and events from either the JScript or the HTML files. (See the examples in [The HTML Files](../ide/html-files.md) and [The JScript File](../ide/jscript-file.md) for more information.)  
  
-   [Developer Tools Environment (DTE) Object Model](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)  
  
-   [Visual C++ Code Model](http://msdn.microsoft.com/en-us/dd6452c2-1054-44a1-b0eb-639a94a1216b)  
  
-   [Visual C++ Project Model](http://msdn.microsoft.com/en-us/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f)  
  
-   [Visual C++ Wizard Model](http://msdn.microsoft.com/en-us/159395ac-33c7-47bf-ad42-4e1435ddc758)  
  
 See [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md) for a description of each element of designing a wizard.  
  
## See Also  
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Steps to Designing a Wizard](../ide/steps-to-designing-a-wizard.md)   
 [Customizing Your Wizard](../ide/customizing-your-wizard.md)

