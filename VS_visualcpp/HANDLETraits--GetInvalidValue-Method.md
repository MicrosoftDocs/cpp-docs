---
title: "HANDLETraits::GetInvalidValue Method"
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
ms.assetid: e95d2cc1-e70f-463f-8ff0-183cdeac1138
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
# HANDLETraits::GetInvalidValue Method
Represents an invalid handle.  
  
## Syntax  
  
```  
inline static HANDLE GetInvalidValue();  
```  
  
## Return Value  
 Always returns INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE is defined by Windows.)  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [HANDLETraits Structure](../VS_visualcpp/HANDLETraits-Structure.md)