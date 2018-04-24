---
title: "Providing Context-Sensitive Help | Microsoft Docs"
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
  - "custom wizards, implementing Help"
  - "context-sensitive Help, Custom Wizard"
  - "context-sensitive Help"
ms.assetid: c6c4d961-29d3-4d16-9f39-b12545aba540
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Providing Context-Sensitive Help
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Providing Context-Sensitive Help](https://docs.microsoft.com/cpp/ide/providing-context-sensitive-help).  
  
  
When you use the [Custom Wizard](../ide/application-settings-custom-wizard.md) to create a wizard, it inserts a **Help** button on your wizard.  
  
 Each .htm file in your project includes the following code to provide support for the **Help** button for your wizard.  
  
```  
<BUTTON CLASS="BUTTONS" ID="HelpBtn" ACCESSKEY="H"  
 onClick="window.external.OnHelp('vc.appwiz.custom.overview');">  
```  
  
 The <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.OnHelp%2A> specifies the keyword of the HTML Help file associated with that page of your wizard. For more information about creating HTML Help files to associate with the page, see [HTML Help Start Page](vsconhh1start). To provide your own help for this wizard page, you must replace the string `'vc.appwiz.custom.overview'` with the keyword that identifies the HTML Help topic for the page.  
  
 **Note** This .htm file cannot be integrated into the compiled MSDN Help.  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)
