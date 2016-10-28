---
title: "Using the Gradient Service in a Tool Window"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
helpviewer_keywords: 
  - "services, walkthroughs"
  - "tool windows, gradient service"
  - "gradient service, walkthroughs"
  - "services, consuming"
ms.assetid: 67590982-6e1f-4e4b-be18-7d1b294cabff
caps.latest.revision: 44
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Using the Gradient Service in a Tool Window
Because [!INCLUDE[vsprvs](../build/includes/vsprvs_md.md)] tool windows are built with Windows Presentation Foundation (WPF), you do not have to call the gradient service in code. Instead, in the designer that represents the tool window surface, select the `StackPanel` element, and then, in the **Properties** window, modify the **Background** property to set the gradient. For more information, see [Setting Colors, Gradients, and Opacity](../notintoc/setting-colors--gradients--and-opacity.md).  
  
## See Also  
 [NOT IN BUILD: Tool Window Walkthroughs](assetId:///ecffc579-0e96-48ad-90f3-01a3d80f3ce5)   
 [Extending Tool Windows](../notintoc/extending-tool-windows.md)   
 [Setting Colors, Gradients, and Opacity](../notintoc/setting-colors--gradients--and-opacity.md)