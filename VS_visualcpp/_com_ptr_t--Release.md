---
title: "_com_ptr_t::Release"
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
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
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
# _com_ptr_t::Release
**Microsoft Specific**  
  
 Calls the **Release** member function of **IUnknown** on the encapsulated interface pointer.  
  
## Syntax  
  
```  
  
void Release( );  
  
```  
  
## Remarks  
 Calls `IUnknown::Release` on the encapsulated interface pointer, raising an `E_POINTER` error if this interface pointer is **NULL**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../VS_visualcpp/_com_ptr_t-Class.md)