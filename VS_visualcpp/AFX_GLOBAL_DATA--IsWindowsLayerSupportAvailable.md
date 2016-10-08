---
title: "AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable"
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
ms.assetid: 4734cee5-9fba-4f99-8315-b67d3da3b6d3
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
# AFX_GLOBAL_DATA::IsWindowsLayerSupportAvailable
Indicates whether the operating system supports layered windows.  
  
## Syntax  
  
```  
BOOL IsWindowsLayerSupportAvailable() const;  
```  
  
## Return Value  
 `TRUE` if layered windows are supported; otherwise, `FALSE`.  
  
## Remarks  
 If layered windows are supported, *smart docking* markers use layered windows.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)