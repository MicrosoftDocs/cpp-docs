---
title: "RECT Structure"
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
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
caps.latest.revision: 11
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
# RECT Structure
The `RECT` structure defines the coordinates of the upper-left and lower-right corners of a rectangle.  
  
## Syntax  
  
```  
  
      typedef struct tagRECT {   
   LONG left;  
   LONG top;  
   LONG right;  
   LONG bottom;  
} RECT;  
```  
  
## Members  
 `left`  
 Specifies the x-coordinate of the upper-left corner of a rectangle.  
  
 `top`  
 Specifies the y-coordinate of the upper-left corner of a rectangle.  
  
 `right`  
 Specifies the x-coordinate of the lower-right corner of a rectangle.  
  
 `bottom`  
 Specifies the y-coordinate of the lower-right corner of a rectangle.  
  
## Example  
 [!CODE [NVC_MFC_Utilities#38](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#38)]  
  
## Requirements  
 **Header:** windef.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CRect Class](../VS_visualcpp/CRect-Class.md)