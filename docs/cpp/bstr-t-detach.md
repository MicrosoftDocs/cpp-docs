---
title: "_bstr_t::Detach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_bstr_t::Detach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Detach method [C++]"]
ms.assetid: cc8284bd-f68b-4fff-b2e6-ce8354dabf8b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _bstr_t::Detach
**Microsoft Specific**  
  
 Returns the `BSTR` wrapped by a `_bstr_t` and detaches the `BSTR` from the `_bstr_t`.  
  
## Syntax  
  
```  
  
BSTR Detach( ) throw;  
  
```  
  
## Return Value  
 The `BSTR` wrapped by the `_bstr_t`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for a example using `Detach`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)