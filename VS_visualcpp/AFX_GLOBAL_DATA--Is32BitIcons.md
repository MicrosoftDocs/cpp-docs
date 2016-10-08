---
title: "AFX_GLOBAL_DATA::Is32BitIcons"
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
ms.assetid: ce80667c-87b4-498f-8b3f-ef07b69d3072
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
# AFX_GLOBAL_DATA::Is32BitIcons
Indicates whether predefined 32-bit icons are supported.  
  
## Syntax  
  
```  
BOOL Is32BitIcons() const;  
```  
  
## Return Value  
 `TRUE` if predefined 32-bit icons are supported; otherwise, `FALSE`.  
  
## Remarks  
 This method returns `TRUE` if the framework supports 32-bit built-in icons, and if the operating system supports 16 bits per pixel or more, and if images are not displayed in high contrast.  
  
## Requirements  
 **Header:**  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)