---
title: "AFX_GLOBAL_DATA::GetNonClientMetrics"
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
ms.assetid: b42f4640-b6ab-47ce-8171-556d46d199cd
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
# AFX_GLOBAL_DATA::GetNonClientMetrics
Retrieves the metrics associated with the nonclient area of nonminimized windows.  
  
## Syntax  
  
```  
BOOL GetNonClientMetrics(  
   NONCLIENTMETRICS& info  
);  
```  
  
#### Parameters  
 [in, out] `info`  
 A [NONCLIENTMETRICS](http://msdn.microsoft.com/library/windows/desktop/ff729175) structure that contains the scalable metrics associated with the nonclient area of a nonminimized window.  
  
## Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [NONCLIENTMETRICS Structure](http://msdn.microsoft.com/library/windows/desktop/ff729175)