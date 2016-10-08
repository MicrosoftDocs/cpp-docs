---
title: "ComPtr::Swap Method"
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
ms.assetid: 74275f00-b24e-4b4c-b8b6-ac2aa2dd7ae9
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ComPtr::Swap Method
Exchanges the interface managed by the current ComPtr with the interface managed by the specified ComPtr.  
  
## Syntax  
  
```  
void Swap(  
   _Inout_ ComPtr&& r  
);  
  
void Swap(  
   _Inout_ ComPtr& r  
);  
```  
  
#### Parameters  
 `r`  
 A ComPtr.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../VS_visualcpp/ComPtr-Class.md)