---
title: "_bstr_t::GetAddress | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::GetAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetAddress method"
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# _bstr_t::GetAddress
**Microsoft Specific**  
  
 Frees any existing string and returns the address of a newly allocated string.  
  
## Syntax  
  
```  
  
BSTR* GetAddress( );  
  
```  
  
## Return Value  
 A pointer to the `BSTR` wrapped by the `_bstr_t`.  
  
## Remarks  
 `GetAddress` affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and and `operator=`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for a example using `GetAddress`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)