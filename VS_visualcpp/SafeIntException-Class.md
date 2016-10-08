---
title: "SafeIntException Class"
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
ms.topic: language-reference
ms.assetid: 88bef958-1f48-4d55-ad4f-d1f9581a293a
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
# SafeIntException Class
The `SafeInt` class uses `SafeIntException` to identify why a mathematical operation cannot be completed.  
  
## Syntax  
  
```  
class SafeIntException;  
```  
  
## Members  
  
### Public Constructors  
 [SafeIntException::SafeIntException](../VS_visualcpp/SafeIntException--SafeIntException.md)  
 Creates a `SafeIntException` object.  
  
## Remarks  
 The [SafeInt Class](../VS_visualcpp/SafeInt-Class.md) is the only class that uses the `SafeIntException` class.  
  
## Inheritance Hierarchy  
 [SafeIntException Class](../VS_visualcpp/SafeIntException-Class.md)  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../VS_visualcpp/SafeInt-Library.md)   
 [SafeInt Class](../VS_visualcpp/SafeInt-Class.md)