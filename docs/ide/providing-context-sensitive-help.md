---
title: "Providing Context-Sensitive Help | Microsoft Docs"
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
  - "custom wizards, implementing Help"
  - "context-sensitive Help, Custom Wizard"
  - "context-sensitive Help"
ms.assetid: c6c4d961-29d3-4d16-9f39-b12545aba540
caps.latest.revision: 7
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
# Providing Context-Sensitive Help
When you use the [Custom Wizard](../ide/application-settings-custom-wizard.md) to create a wizard, it inserts a **Help** button on your wizard.  
  
 Each .htm file in your project includes the following code to provide support for the **Help** button for your wizard.  
  
```  
<BUTTON CLASS="BUTTONS" ID="HelpBtn" ACCESSKEY="H"  
 onClick="window.external.OnHelp('vc.appwiz.custom.overview');">  
```  
  
 The `Microsoft.VisualStudio.VsWizard.VCWizCtlClass.OnHelp` method specifies the keyword of the HTML Help file associated with that page of your wizard. To provide your own help for this wizard page, you must replace the string `'vc.appwiz.custom.overview'` with the keyword that identifies the HTML Help topic for the page.  
  
 **Note** This .htm file cannot be integrated into the compiled MSDN Help.  
  
## See Also  
 [Files Created for Your Wizard](../ide/files-created-for-your-wizard.md)   
 [Custom Wizard](../ide/custom-wizard.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)