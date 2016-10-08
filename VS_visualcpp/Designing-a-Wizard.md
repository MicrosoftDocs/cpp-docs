---
title: "Designing a Wizard"
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
ms.assetid: a7c0be7e-9297-4fed-83e3-5645c896d56b
caps.latest.revision: 9
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
# Designing a Wizard
You might need to create projects with standardized features that differ from the application wizards that are provided in Visual C++. For such tasks, you can use the Visual C++ wizard architecture, which is designed for easy extensibility and customization. You can create a wizard using the [Visual C++ Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md). After you create your wizard, you can configure it to generate the starter files you need for your projects.  
  
 A Visual C++ wizard is an HTML control. It uses the Visual C++ wizard engine, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI?qualifyHint=False>, which provides common services, such as <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.NavigateToCommandHandler?qualifyHint=False>, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.OkCancelAlert?qualifyHint=False>, and so on. The wizard also uses the script engine, which allows a wizard to understand both VBScript and [JScript .NET](assetId:///c7e636ee-c10f-45b1-85ec-fe2daca30bf5).  
  
 The wizard architecture allows you to access the following object models directly in your wizards, and call their methods, properties, and events from either the JScript or the HTML files. (See the examples in [The HTML Files](../VS_visualcpp/HTML-Files.md) and [The JScript File](../VS_visualcpp/JScript-File.md) for more information.)  
  
-   [Developer Tools Environment (DTE) Object Model](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)  
  
-   [Visual C++ Code Model](assetId:///dd6452c2-1054-44a1-b0eb-639a94a1216b)  
  
-   [Visual C++ Project Model](assetId:///06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f)  
  
-   [Visual C++ Wizard Model](assetId:///159395ac-33c7-47bf-ad42-4e1435ddc758)  
  
 See [Files Created for Your Wizard](../VS_visualcpp/Files-Created-for-Your-Wizard.md) for a description of each element of designing a wizard.  
  
## See Also  
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Steps to Designing a Wizard](../VS_visualcpp/Steps-to-Designing-a-Wizard.md)   
 [Customizing Your Wizard](../VS_visualcpp/Customizing-Your-Wizard.md)