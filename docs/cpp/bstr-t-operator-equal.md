---
title: "_bstr_t::operator = | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_bstr_t::operator="]
dev_langs: ["C++"]
helpviewer_keywords: ["operator = [C++], bstr", "operator= [C++], bstr"]
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _bstr_t::operator =
**Microsoft Specific**  
  
 Assigns a new value to an existing `_bstr_t` object.  
  
## Syntax  
  
```  
_bstr_t& operator=(const _bstr_t& s1) throw ( );  
_bstr_t& operator=(const char* s2);  
_bstr_t& operator=(const wchar_t* s3);  
_bstr_t& operator=(const _variant_t& var);  
```  
  
#### Parameters  
 *s1*  
 A `_bstr_t` object to be assigned to an existing `_bstr_t` object.  
  
 *s2*  
 A multibyte string to be assigned to an existing `_bstr_t` object.  
  
 *s3*  
 A Unicode string to be assigned to an existing `_bstr_t` object.  
  
 *var*  
 A `_variant_t` object to be assigned to an existing `_bstr_t` object.  
  
 **END Microsoft Specific**  
  
## Example  
 See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example of using **operator=**.  
  
## See also  
 [_bstr_t Class](../cpp/bstr-t-class.md)