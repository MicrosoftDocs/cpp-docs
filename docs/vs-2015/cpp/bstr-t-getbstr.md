---
title: "_bstr_t::GetBSTR | Microsoft Docs"
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
  - "GetBSTR"
  - "_bstr_t::GetBSTR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetBSTR method"
ms.assetid: 0c62ff16-4433-4183-a03c-d5a0a9b731ef
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::GetBSTR
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_bstr_t::GetBSTR](https://docs.microsoft.com/cpp/cpp/bstr-t-getbstr).  
  
Microsoft Specific**  
  
 Points to the beginning of the `BSTR` wrapped by the `_bstr_t`.  
  
## Syntax  
  
```  
  
BSTR& GetBSTR( );  
  
```  
  
## Return Value  
 The beginning of the `BSTR` wrapped by the `_bstr_t`.  
  
## Remarks  
 `GetBSTR` affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and and `operator=`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example using `GetBSTR`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)





