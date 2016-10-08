---
title: "AFX_GLOBAL_DATA::IsDwmCompositionEnabled"
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
ms.assetid: 09d1e8af-fdb7-44ec-8d31-662ca240a73f
caps.latest.revision: 10
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
# AFX_GLOBAL_DATA::IsDwmCompositionEnabled
Provides a simple way to call the Windows [DwmIsCompositionEnabled](http://msdn.microsoft.com/library/windows/desktop/aa969518) method.  
  
## Syntax  
  
```  
BOOL IsDwmCompositionEnabled();  
```  
  
## Return Value  
 `TRUE` if [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) composition is enabled; otherwise, `FALSE`.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Enable and Control DWM Composition](http://msdn.microsoft.com/library/windows/desktop/aa969538)