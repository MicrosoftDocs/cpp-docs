---
title: "AFX_GLOBAL_DATA::GetDirect2dFactory"
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
ms.assetid: 1790156d-6f56-46df-9270-9dfa04f2da84
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
# AFX_GLOBAL_DATA::GetDirect2dFactory
Returns a pointer to the ID2D1Factory interface that is stored in the global data. If the interface is not initialized, it is created and has the default parameters.  
  
## Syntax  
  
```  
ID2D1Factory* GetDirect2dFactory();  
```  
  
## Return Value  
 A pointer to ID2D1Factory interface if creation of a factory succeeds, or NULL if creation fails or current Operation System don't have D2D support.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)