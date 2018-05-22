---
title: "_bstr_t::operator = | Microsoft Docs"
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
  - "_bstr_t::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator =, bstr"
  - "operator=, bstr"
  - "= operator, with specific Visual C++ objects"
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::operator =
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_bstr_t::operator =](https://docs.microsoft.com/cpp/cpp/bstr-t-operator-equal).  
  
Microsoft Specific**  
  
 Assigns a new value to an existing `_bstr_t` object.  
  
## Syntax  
  
```  
  
      _bstr_t& operator=(  
   const _bstr_t& s1   
) throw ( );  
_bstr_t& operator=(  
   const char* s2   
);  
_bstr_t& operator=(  
   const wchar_t* s3   
);  
_bstr_t& operator=(  
   const _variant_t& var   
);  
```  
  
#### Parameters  
 *s1*  
 A `_bstr_t` object to be assigned to an existing `_bstr_t` object.  
  
 *s2*  
 A multibyte string to be assigned to an existing `_bstr_t` object.  
  
 `s3`  
 A Unicode string to be assigned to an existing `_bstr_t` object.  
  
 `var`  
 A `_variant_t` object to be assigned to an existing `_bstr_t` object.  
  
 **END Microsoft Specific**  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example of using `operator=`.  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)





