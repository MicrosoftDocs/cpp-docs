---
title: "RemoveReference Structure"
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
ms.assetid: 43ff91bb-815a-440e-b9fb-7dcbb7c863af
caps.latest.revision: 5
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
# RemoveReference Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   class T  
>  
struct RemoveReference;  
template<  
   class T  
>  
struct RemoveReference<T&>;  
template<  
   class T  
>  
struct RemoveReference<T&&>;  
```  
  
#### Parameters  
 `T`  
 A class.  
  
## Remarks  
 Strips the reference or rvalue-reference trait from the specified class template parameter.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|Synonym for the class template parameter.|  
  
## Inheritance Hierarchy  
 `RemoveReference`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)