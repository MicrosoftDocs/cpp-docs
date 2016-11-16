---
title: "_bstr_t::GetBSTR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
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
 `GetBSTR` affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and and `operator=`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example using `GetBSTR`.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)