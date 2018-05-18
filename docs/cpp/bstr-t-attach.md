---
title: "_bstr_t::Attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_bstr_t::Attach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Attach method [C++]"]
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _bstr_t::Attach
**Microsoft Specific**  
  
 Links a `_bstr_t` wrapper to a `BSTR`.  
  
## Syntax  
  
```  
  
      void Attach(  
   BSTR s  
);  
```  
  
#### Parameters  
 *s*  
 A `BSTR` to be associated with, or assigned to, the `_bstr_t` variable.  
  
## Remarks  
 If the `_bstr_t` was previously attached to another `BSTR`, the `_bstr_t` will clean up the `BSTR` resource, if no other `_bstr_t` variables are using the `BSTR`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example using **Attach**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)