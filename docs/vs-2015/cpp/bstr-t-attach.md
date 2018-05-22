---
title: "_bstr_t::Attach | Microsoft Docs"
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
  - "_bstr_t::Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach method"
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::Attach
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_bstr_t::Attach](https://docs.microsoft.com/cpp/cpp/bstr-t-attach).  
  
Microsoft Specific**  
  
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





