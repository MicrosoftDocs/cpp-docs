---
title: "AFX_GLOBAL_DATA::D2D1MakeRotateMatrix"
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
ms.assetid: 6e6a6337-bd06-41f9-8d64-d81c85dd1450
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
# AFX_GLOBAL_DATA::D2D1MakeRotateMatrix
Creates a rotation transformation that rotates by a specified angle around a specified point.  
  
## Syntax  
  
```  
HRESULT D2D1MakeRotateMatrix(  
   FLOAT angle,  
   D2D1_POINT_2F center,  
   D2D1_MATRIX_3X2_F *matrix  
);  
```  
  
#### Parameters  
 `angle`  
 The clockwise rotation angle, in degrees.  
  
 `center`  
 The point about which to rotate.  
  
 `matrix`  
 When this method returns, contains the new rotation transformation. You must allocate storage for this parameter.  
  
## Return Value  
 Returns S_OK if successful, or an error value otherwise.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)