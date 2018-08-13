---
title: "_com_ptr_t::AddRef | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_ptr_t::AddRef"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddRef method [C++], interface pointers"]
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_ptr_t::AddRef
**Microsoft Specific**  
  
 Calls the `AddRef` member function of `IUnknown` on the encapsulated interface pointer.  
  
## Syntax  
  
```  
void AddRef( );  
```  
  
## Remarks  
 Calls `IUnknown::AddRef` on the encapsulated interface pointer, raising an `E_POINTER` error if the pointer is NULL.  
  
 **END Microsoft Specific**  
  
## See also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)