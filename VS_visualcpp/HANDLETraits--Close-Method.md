---
title: "HANDLETraits::Close Method"
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
ms.assetid: 3c631a7c-ccce-472a-b1da-aab8fa815c13
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
# HANDLETraits::Close Method
Closes the specified handle.  
  
## Syntax  
  
```  
inline static bool Close(  
   _In_ Type h  
);  
```  
  
#### Parameters  
 `h`  
 The handle to close.  
  
## Return Value  
 **true** if handle `h` closed successfully; otherwise, **false**.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [HANDLETraits Structure](../VS_visualcpp/HANDLETraits-Structure.md)