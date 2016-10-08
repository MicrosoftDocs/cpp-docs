---
title: "runtime_exception::operator= Operator"
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
ms.assetid: 6d767645-b9c6-41c0-aa24-1bbb10a0952b
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
# runtime_exception::operator= Operator
Copies the contents of the specified [runtime_exception](../VS_visualcpp/runtime_exception-Class.md) object into this one.  
  
## Syntax  
  
```  
runtime_exception & operator= (    const runtime_exception & _Other ) throw();  
```  
  
#### Parameters  
 `_Other`  
 The `runtime_exception` object to copy.  
  
## Return Value  
 A reference to this `runtime_exception` object.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [runtime_exception Class](../VS_visualcpp/runtime_exception-Class.md)