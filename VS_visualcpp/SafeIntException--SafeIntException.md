---
title: "SafeIntException::SafeIntException"
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
ms.assetid: 8e5a0c24-a56b-4c80-9ee8-876604b1e7dc
caps.latest.revision: 6
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
# SafeIntException::SafeIntException
Creates a `SafeIntException` object.  
  
## Syntax  
  
```  
SafeIntException();  
  
SafeIntException(  
   SafeIntError code  
);  
```  
  
#### Parameters  
 [in] `code`  
 An enumerated data value that describes the error that occurred.  
  
## Remarks  
 The possible values for `code` are defined in the file Safeint.h. For convenience, the possible values are also listed here.  
  
-   `SafeIntNoError`  
  
-   `SafeIntArithmeticOverflow`  
  
-   `SafeIntDivideByZero`  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** msl::utilities  
  
## See Also  
 [SafeInt Library](../VS_visualcpp/SafeInt-Library.md)   
 [SafeIntException Class](../VS_visualcpp/SafeIntException-Class.md)   
 [SafeInt Class](../VS_visualcpp/SafeInt-Class.md)