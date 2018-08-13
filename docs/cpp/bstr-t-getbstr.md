---
title: "_bstr_t::GetBSTR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_bstr_t::GetBSTR"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetBSTR method [C++]"]
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _bstr_t::GetBSTR
**Microsoft Specific**  
  
 Points to the beginning of the `BSTR` wrapped by the `_bstr_t`.  
  
## Syntax  
  
```  
BSTR& GetBSTR( );  
```  
  
## Return Value  
 The beginning of the `BSTR` wrapped by the `_bstr_t`.  
  
## Remarks  
 **GetBSTR** affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and **operator=**.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example using **GetBSTR**.  
  
 **END Microsoft Specific**  
  
## See also  
 [_bstr_t Class](../cpp/bstr-t-class.md)