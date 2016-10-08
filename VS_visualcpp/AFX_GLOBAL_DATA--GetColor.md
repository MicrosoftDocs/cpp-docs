---
title: "AFX_GLOBAL_DATA::GetColor"
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
ms.assetid: 3623df1d-3da3-4731-9be4-f56ab9736297
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
# AFX_GLOBAL_DATA::GetColor
Retrieves the current color of the specified user interface element.  
  
## Syntax  
  
```  
COLORREF GetColor(  
   int nColor  
);  
```  
  
#### Parameters  
 [in] `nColor`  
 A value that specifies a user interface element whose color is retrieved. For a list of valid values, see the `nIndex` parameter of the [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) method.  
  
## Return Value  
 The RGB color value of the specified user interface element. For more information, see Remarks.  
  
## Remarks  
 If the `nColor` parameter is out of range, the return value is zero. Because zero is also a valid RGB value, you cannot use this method to determine whether a system color is supported by the current operating system. Instead, use the [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927) method, which returns `NULL` if the color is not supported.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [GetSysColor Function](http://msdn.microsoft.com/library/windows/desktop/ms724371)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [GetSysColorBrush](http://msdn.microsoft.com/library/windows/desktop/dd144927)