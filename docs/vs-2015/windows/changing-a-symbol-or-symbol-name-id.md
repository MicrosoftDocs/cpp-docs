---
title: "Changing a Symbol or Symbol Name (ID) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.symbol.changing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "symbol names"
  - "symbols, names"
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Changing a Symbol or Symbol Name (ID)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Changing a Symbol or Symbol Name (ID)](https://docs.microsoft.com/cpp/windows/changing-a-symbol-or-symbol-name-id).  
  
  
When you create a new resource or resource object, the development environment assigns it a default symbol name, for example, IDD_DIALOG1. You can use the [Properties Window](../Topic/Properties%20Window.md) to change the default symbol name or to change the name of any symbol already associated with a resource.  
  
### To change a resource's symbol name  
  
1.  In [Resource View](../windows/resource-view-window.md), select the resource.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the **Properties** window, type a new symbol name or select from the list of existing symbols in the **ID** box.  
  
     If you type a new symbol name, it is automatically assigned a value.  
  
 You can use the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) to change the names of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requirements  
  
 Win32  
  
## See Also  
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)

