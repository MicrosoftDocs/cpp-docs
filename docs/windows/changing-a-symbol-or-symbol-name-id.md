---
title: "Changing a Symbol or Symbol Name (ID) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["vc.editors.symbol.changing"]
dev_langs: ["C++"]
helpviewer_keywords: ["symbol names", "symbols, names"]
ms.assetid: 26541832-8dba-4177-b642-e08f94502ea7
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Changing a Symbol or Symbol Name (ID)
When you create a new resource or resource object, the development environment assigns it a default symbol name, for example, IDD_DIALOG1. You can use the [Properties Window](/visualstudio/ide/reference/properties-window) to change the default symbol name or to change the name of any symbol already associated with a resource.  
  
### To change a resource's symbol name  
  
1.  In [Resource View](../windows/resource-view-window.md), select the resource.  
  
    > [!NOTE]
    >  If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).  
  
2.  In the **Properties** window, type a new symbol name or select from the list of existing symbols in the **ID** box.  
  
     If you type a new symbol name, it is automatically assigned a value.  
  
 You can use the [Resource Symbols dialog box](../windows/resource-symbols-dialog-box.md) to change the names of symbols not currently assigned to a resource. For more information, see [Changing Unassigned Symbols](../windows/changing-unassigned-symbols.md).  
  

  
 Requirements  
  
 Win32  
  
## See Also  
 [Symbol Name Restrictions](../windows/symbol-name-restrictions.md)   
 [Predefined Symbol IDs](../windows/predefined-symbol-ids.md)