---
title: "_variant_t::ChangeType"
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
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
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
# _variant_t::ChangeType
**Microsoft Specific**  
  
 Changes the type of the `_variant_t` object to the indicated **VARTYPE**.  
  
## Syntax  
  
```  
  
      void ChangeType(  
   VARTYPE vartype,  
   const _variant_t* pSrc = NULL   
);  
```  
  
#### Parameters  
 `vartype`  
 The **VARTYPE** for this `_variant_t` object.  
  
 `pSrc`  
 A pointer to the `_variant_t` object to be converted. If this value is **NULL**, conversion is done in place.  
  
## Remarks  
 This member function converts a `_variant_t` object into the indicated **VARTYPE**. If `pSrc` is **NULL**, the conversion is done in place, otherwise this `_variant_t` object is copied from `pSrc` and then converted.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../VS_visualcpp/_variant_t-Class.md)