---
title: "AFX_GLOBAL_DATA::GetTextHeight"
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
ms.assetid: 54488f47-2fa0-4d03-885c-f5fe8e00b31d
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
# AFX_GLOBAL_DATA::GetTextHeight
Retrieves the height of text characters in the current font.  
  
## Syntax  
  
```  
int GetTextHeight(  
   BOOL bHorz = TRUE  
);  
```  
  
#### Parameters  
 [in] `bHorz`  
 `TRUE` to retrieve the height of characters when text runs horizontally; `FALSE` to retrieve the height of characters when text runs vertically. The default value is `TRUE`.  
  
## Return Value  
 The height of the current font, which is measured from its ascender to its descender.  
  
## Requirements  
 **Header:**  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)