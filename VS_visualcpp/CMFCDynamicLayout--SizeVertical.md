---
title: "CMFCDynamicLayout::SizeVertical"
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
ms.topic: reference
ms.assetid: 38570359-e805-4867-8185-d38b71c8df75
caps.latest.revision: 4
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
# CMFCDynamicLayout::SizeVertical
Gets a [SizeSettings](../VS_visualcpp/CMFCDynamicLayout--SizeSettings-Structure.md) value that defines how much a child control is resized vertically when the user resizes its hosting window.  
  
## Syntax  
  
```vb  
  
static SizeSettings SizeVertical(    int nRatio);  
```  
  
#### Parameters  
 `nRatio`  
 Defines as a percentage how far a child control is resized vertically when the user resizes the host window.  
  
## Return Value  
 A [SizeSettings](../VS_visualcpp/CMFCDynamicLayout--SizeSettings-Structure.md) value that encapsulates the requested size ratio.  
  
## Remarks  
  
## Requirements  
 **Header:** afxlayout.h  
  
## See Also  
 [CMFCDynamicLayout Class](../VS_visualcpp/CMFCDynamicLayout-Class.md)   
 [CMFCDynamicLayout::SizeSettings Structure](../VS_visualcpp/CMFCDynamicLayout--SizeSettings-Structure.md)