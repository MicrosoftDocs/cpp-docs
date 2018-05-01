---
title: "_variant_t::Attach | Microsoft Docs"
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
  - "_variant_t::Attach"
  - "_variant_t.Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach method"
  - "VARIANT object, attach"
  - "VARIANT object"
ms.assetid: 2f02bd08-2306-4477-aa88-d2a5dee2b859
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _variant_t::Attach
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_variant_t::Attach](https://docs.microsoft.com/cpp/cpp/variant-t-attach).  
  
Microsoft Specific**  
  
 Attaches a **VARIANT** object into the `_variant_t` object.  
  
## Syntax  
  
```  
  
      void Attach(  
   VARIANT& varSrc   
);  
```  
  
#### Parameters  
 *varSrc*  
 A **VARIANT** object to be attached to this `_variant_t` object.  
  
## Remarks  
 Takes ownership of the **VARIANT** by encapsulating it. This member function releases any existing encapsulated **VARIANT**, then copies the supplied **VARIANT**, and sets its **VARTYPE** to `VT_EMPTY` to make sure its resources can only be released by the `_variant_t` destructor.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../cpp/variant-t-class.md)





