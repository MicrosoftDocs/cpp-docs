---
title: "_variant_t::Detach"
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
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
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
# _variant_t::Detach
**Microsoft Specific**  
  
 Detaches the encapsulated **VARIANT** object from this `_variant_t` object.  
  
## Syntax  
  
```  
  
VARIANT Detach( );  
  
```  
  
## Return Value  
 The encapsulated **VARIANT**.  
  
## Remarks  
 Extracts and returns the encapsulated **VARIANT**, then clears this `_variant_t` object without destroying it. This member function removes the **VARIANT** from encapsulation and sets the **VARTYPE** of this `_variant_t` object to `VT_EMPTY`. It is up to you to release the returned **VARIANT** by calling the [VariantClear](assetId:///28741d81-8404-4f85-95d3-5c209ec13835) function.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../VS_visualcpp/_variant_t-Class.md)