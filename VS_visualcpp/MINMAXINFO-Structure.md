---
title: "MINMAXINFO Structure"
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
ms.assetid: be6fb578-f98a-4581-9ada-be9df308ed2f
caps.latest.revision: 8
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
# MINMAXINFO Structure
The `MINMAXINFO` structure contains information about a window's maximized size and position and its minimum and maximum tracking size.  
  
## Syntax  
  
```  
  
      typedef struct tagMINMAXINFO {  
   POINT ptReserved;  
   POINT ptMaxSize;  
   POINT ptMaxPosition;  
   POINT ptMinTrackSize;  
   POINT ptMaxTrackSize;  
} MINMAXINFO;  
```  
  
#### Parameters  
 *ptReserved*  
 Reserved for internal use.  
  
 *ptMaxSize*  
 Specifies the maximized width (point.x) and the maximized height (point.y) of the window.  
  
 `ptMaxPosition`  
 Specifies the position of the left side of the maximized window (point.x) and the position of the top of the maximized window (point.y).  
  
 *ptMinTrackSize*  
 Specifies the minimum tracking width (point.x) and the minimum tracking height (point.y) of the window.  
  
 *ptMaxTrackSize*  
 Specifies the maximum tracking width (point.x) and the maximum tracking height (point.y) of the window.  
  
## Requirements  
 **Header:** winuser.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CWnd::OnGetMinMaxInfo](../Topic/CWnd::OnGetMinMaxInfo.md)