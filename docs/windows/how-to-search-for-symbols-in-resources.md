---
title: "How to: Search for Symbols in Resources"
ms.custom: ""
ms.date: "10/28/2016"
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
  - "symbols, finding"
  - "resources [Visual Studio], searching for symbols"
ms.assetid: 6efef8e8-d0d4-4c49-b895-314974e7791a
caps.latest.revision: 8
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
# How to: Search for Symbols in Resources
### To find symbols in resources  
  
1.  From the **Edit** menu, choose **Find Symbol**.  
  
2.  In the [Find Symbol dialog box](http://msdn.microsoft.com/en-us/63e93d9c-784f-418d-a76a-723da5ff5d96), in the **Find What** box, select a previous search string from the drop-down list or type the accelerator key you want to find (for example, ID_ACCEL1).  
  
    > [!TIP]
    >  To use [regular expressions](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md) for your search, you must use the [Find in Files command](../Topic/Find%20Command.md) from the **Edit** menu instead of the **Find Symbol** command. To enable regular expressions, you must have the **Use: Regular Expressions** check box selected in the [Find dialog box](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600). Then you can click the right-arrow button to the right of the **Find What** box to display a list of regular search expressions. When you select an expression from this list, it is substituted as the search text in the **Find What** box.  
  
3.  Select any of the **Find** options.  
  
4.  Click **Find Next**.  
  
    > [!NOTE]
    >  You cannot search for symbols in string, accelerator, or binary resources.  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 **Requirements**  
  
 Win32  
  
## See Also  
 [Symbols: Resource Identifiers](../mfc/symbols-resource-identifiers.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Resource Editors](../mfc/resource-editors.md)