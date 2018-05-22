---
title: "_variant_t::Detach | Microsoft Docs"
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
  - "_variant_t::Detach"
  - "_variant_t.Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VARIANT object, detatch"
  - "Detach method"
  - "VARIANT object"
ms.assetid: c348ac08-62cf-4657-a16f-974a79c12158
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::Detach
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_variant_t::Detach](https://docs.microsoft.com/cpp/cpp/variant-t-detach).  
  
Microsoft Specific**  
  
 Detaches the encapsulated **VARIANT** object from this `_variant_t` object.  
  
## Syntax  
  
```  
  
VARIANT Detach( );  
  
```  
  
## Return Value  
 The encapsulated **VARIANT**.  
  
## Remarks  
 Extracts and returns the encapsulated **VARIANT**, then clears this `_variant_t` object without destroying it. This member function removes the **VARIANT** from encapsulation and sets the **VARTYPE** of this `_variant_t` object to `VT_EMPTY`. It is up to you to release the returned **VARIANT** by calling the [VariantClear](http://msdn.microsoft.com/en-us/28741d81-8404-4f85-95d3-5c209ec13835) function.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../cpp/variant-t-class.md)





