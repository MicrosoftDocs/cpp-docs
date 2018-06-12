---
title: "_com_ptr_t::Attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_ptr_t::Attach"]
dev_langs: ["C++"]
helpviewer_keywords: ["COM interfaces, attach pointer", "Attach method [C++]"]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_ptr_t::Attach
**Microsoft Specific**  
  
 Encapsulates a raw interface pointer of this smart pointer's type.  
  
## Syntax  
  
```  
  
void Attach( Interface* pInterface ) throw( );  
void Attach( Interface* pInterface, bool fAddRef ) throw( );  
```  
  
#### Parameters  
 `pInterface`  
 A raw interface pointer.  
  
 `fAddRef`  
 If it is **true**, then `AddRef` is called. If it is **false**, the `_com_ptr_t` object takes ownership of the raw interface pointer without calling `AddRef`.  
  
## Remarks  
  
-   **Attach(**  `pInterface`  **)** `AddRef` is not called. The ownership of the interface is passed to this `_com_ptr_t` object. **Release** is called to decrement the reference count for the previously encapsulated pointer.  
  
-   **Attach(**  `pInterface` **,**  `fAddRef`  **)** If `fAddRef` is **true**, `AddRef` is called to increment the reference count for the encapsulated interface pointer. If `fAddRef` is **false**, this `_com_ptr_t` object takes ownership of the raw interface pointer without calling `AddRef`. **Release** is called to decrement the reference count for the previously encapsulated pointer.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)