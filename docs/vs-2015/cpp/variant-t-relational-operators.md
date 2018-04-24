---
title: "_variant_t Relational Operators | Microsoft Docs"
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
  - "_variant_t::operator=="
  - "_variant_t.operator!="
  - "_variant_t::operator!="
  - "_variant_t.operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= operator"
  - "relational operators, _variant_t class"
  - "operator!=, variant"
  - "operator!=, relational operators"
  - "operator !=, variant"
  - "operator ==, variant"
  - "operator==, variant"
  - "operator !=, relational operators"
  - "== operator, with specific Visual C++ objects"
ms.assetid: 141bacb8-41a2-44dd-b3c0-4ad1f884f4ea
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t Relational Operators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_variant_t Relational Operators](https://docs.microsoft.com/cpp/cpp/variant-t-relational-operators).  
  
Microsoft Specific**  
  
 Compare two `_variant_t` objects for equality or inequality.  
  
## Syntax  
  
```  
  
      bool operator==(  
   const VARIANT& varSrc   
) const;  
bool operator==(  
   const VARIANT* pSrc   
) const;  
bool operator!=(  
   const VARIANT& varSrc   
) const;  
bool operator!=(  
   const VARIANT* pSrc   
) const;  
```  
  
#### Parameters  
 *varSrc*  
 A **VARIANT** to be compared with the `_variant_t` object.  
  
 `pSrc`  
 Pointer to the **VARIANT** to be compared with the `_variant_t` object.  
  
## Return Value  
 Returns **true** if comparison holds, **false** if not.  
  
## Remarks  
 Compares a `_variant_t` object with a **VARIANT**, testing for equality or inequality.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../cpp/variant-t-class.md)





