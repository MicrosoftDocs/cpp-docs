---
title: "auto_gcroot Class"
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
ms.assetid: b5790912-265d-463e-a486-47302e91042a
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
# auto_gcroot Class
Automatic resource management (like [auto_ptr Class](../VS_visualcpp/auto_ptr-Class.md)) which can be used to embed a virtual handle into a native type.  
  
## Syntax  
  
```  
template<typename _element_type>  
class auto_gcroot;  
```  
  
#### Parameters  
 `_element_type`  
 The managed type to be embedded.  
  
## Requirements  
 **Header file** <msclr\auto_gcroot.h>  
  
 **Namespace** msclr  
  
## See Also  
 [auto_gcroot](../VS_visualcpp/auto_gcroot.md)   
 [auto_gcroot Members](../VS_visualcpp/auto_gcroot-Members.md)   
 [How to: Declare Handles in Native Types](../VS_visualcpp/How-to--Declare-Handles-in-Native-Types.md)   
 [auto_handle Class](../VS_visualcpp/auto_handle-Class.md)