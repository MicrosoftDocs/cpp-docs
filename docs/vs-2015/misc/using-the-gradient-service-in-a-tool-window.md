---
title: "Using the Gradient Service in a Tool Window | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "services, walkthroughs"
  - "tool windows, gradient service"
  - "gradient service, walkthroughs"
  - "services, consuming"
ms.assetid: 67590982-6e1f-4e4b-be18-7d1b294cabff
caps.latest.revision: 44
manager: "douge"
---
# Using the Gradient Service in a Tool Window
Because [!INCLUDE[vsprvs](../includes/vsprvs-md.md)] tool windows are built with Windows Presentation Foundation (WPF), you do not have to call the gradient service in code. Instead, in the designer that represents the tool window surface, select the `StackPanel` element, and then, in the **Properties** window, modify the **Background** property to set the gradient. For more information, see [Setting Colors, Gradients, and Opacity](../misc/setting-colors-gradients-and-opacity.md).  
  
## See Also  
 [NOT IN BUILD: Tool Window Walkthroughs](http://msdn.microsoft.com/en-us/ecffc579-0e96-48ad-90f3-01a3d80f3ce5)   
 [Extending Tool Windows](../misc/extending-tool-windows.md)   
 [Setting Colors, Gradients, and Opacity](../misc/setting-colors-gradients-and-opacity.md)