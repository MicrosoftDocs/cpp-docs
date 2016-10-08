---
title: "SafeCast"
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
ms.assetid: 55316729-8456-403a-9f96-59d4038f67af
caps.latest.revision: 7
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
# SafeCast
Casts one type of number to another type.  
  
## Syntax  
  
```  
template<typename T, typename U>  
inline bool SafeCast (  
   const T From,  
   U& To  
);  
```  
  
#### Parameters  
 [in] `From`  
 The source number to convert. This must be of type T.  
  
 [out] `To`  
 A reference to the new number type. This must be of type U.  
  
## Return Value  
 `true` if no error occurs; `false` if an error occurs.  
  
## Remarks  
 This method is part of [SafeInt Library](../VS_visualcpp/SafeInt-Library.md) and is designed for a single casting operation without creating an instance of the [SafeInt Class](../VS_visualcpp/SafeInt-Class.md).  
  
> [!NOTE]
>  This method should only be used when a single operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.  
  
 For more information about the template types T and U, see [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md).  
  
## Requirements  
 **Header:** safeint.h  
  
 **Namespace:** Microsoft::Utilities  
  
## See Also  
 [SafeInt Functions](../VS_visualcpp/SafeInt-Functions.md)   
 [SafeInt Library](../VS_visualcpp/SafeInt-Library.md)   
 [SafeInt Class](../VS_visualcpp/SafeInt-Class.md)