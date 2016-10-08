---
title: "_pAtlModule"
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
ms.assetid: 0ecde3a9-3f4d-4c7b-bb54-713ce05c4777
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
# _pAtlModule
A global variable storing a pointer to the current module.  
  
## Syntax  
  
```  
__declspec(selectany) CAtlModule * _pAtlModule  
```  
  
## Remarks  
 Methods on this global variable can be used to provide the functionality that the (now obsolete) class [CComModule](../VS_visualcpp/CComModule-Class.md) provided in Visual C++ 6.0.  
  
## Example  
 [!CODE [NVC_ATL_Windowing#97](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#97)]  
  
## Requirements  
 **Header:** atlbase.h  
  
## See Also  
 [Global Variables](../VS_visualcpp/ATL-Global-Variables.md)