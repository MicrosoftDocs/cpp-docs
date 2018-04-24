---
title: "_variant_t::ChangeType | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t::ChangeType"
  - "_variant_t.ChangeType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ChangeType method"
  - "VARIANT object, ChangeType"
  - "VARIANT object"
ms.assetid: 829d2eeb-3338-4a88-9dce-0ca145f47aac
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::ChangeType
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_variant_t::ChangeType](https://docs.microsoft.com/cpp/cpp/variant-t-changetype).  
  
Microsoft Specific**  
  
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
 [_variant_t Class](../cpp/variant-t-class.md)





