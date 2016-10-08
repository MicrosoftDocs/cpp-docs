---
title: "AFX_GLOBAL_DATA::SetLayeredAttrib"
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
ms.assetid: 144ad07c-d37c-4058-9794-665fdce9a403
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
# AFX_GLOBAL_DATA::SetLayeredAttrib
Provides a simple way to call the Windows [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540) method.  
  
## Syntax  
  
```  
BOOL SetLayeredAttrib(  
   HWND hwnd,  
   COLORREF crKey,  
   BYTE bAlpha,  
   DWORD dwFlags  
);  
```  
  
#### Parameters  
 [in] `hwnd`  
 Handle to the layered window.  
  
 [in] `crKey`  
 The transparency color key that the [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) uses to compose the layered window.  
  
 [in] `bAlpha`  
 The alpha value that is used to describe the opacity of the layered window.  
  
 [in] `dwFlags`  
 A bitwise combination (OR) of flags that specify which method parameters to use. Specify LWA_COLORKEY to use the `crKey` parameter as the transparency color. Specify LWA_ALPHA to use the `bAlpha` parameter to determine the opacity of the layered window.  
  
## Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [SetLayeredWindowAttributes](http://msdn.microsoft.com/library/windows/desktop/ms633540)