---
title: "AFX_GLOBAL_DATA::IsHighContrastMode"
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
ms.assetid: b99912f3-ac1f-4042-baa8-44190c7f720c
caps.latest.revision: 9
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
# AFX_GLOBAL_DATA::IsHighContrastMode
Indicates whether images are currently displayed in high contrast.  
  
## Syntax  
  
```  
BOOL IsHighContrastMode() const;  
```  
  
## Return Value  
 `TRUE` if images are currently displayed in black or white high contrast mode; otherwise, `FALSE`.  
  
## Remarks  
 In black high contrast mode, edges facing the light are white and the background is black. In white high contrast mode, edges facing the light are black and the background is white.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)