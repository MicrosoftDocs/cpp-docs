---
title: "AFX_GLOBAL_DATA::GetITaskbarList"
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
ms.assetid: 82db87bc-4675-4970-a61f-0cb8c32715ff
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# AFX_GLOBAL_DATA::GetITaskbarList
Creates and stores in the global data a pointer to the `ITaskBarList` interface.  
  
## Syntax  
  
```  
ITaskbarList *GetITaskbarList();  
```  
  
## Return Value  
 A pointer to the `ITaskbarList` interface if creation of a task bar list object succeeds; `NULL` if creation fails or if the current Operation System is less than Windows 7.  
  
## Remarks  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)