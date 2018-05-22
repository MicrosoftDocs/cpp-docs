---
title: "_com_ptr_t::Attach | Microsoft Docs"
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
  - "_com_ptr_t::Attach"
  - "_com_ptr_t.Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM interfaces, attach pointer"
  - "Attach method"
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::Attach
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_ptr_t::Attach](https://docs.microsoft.com/cpp/cpp/com-ptr-t-attach).  
  
Microsoft Specific**  
  
 Encapsulates a raw interface pointer of this smart pointer's type.  
  
## Syntax  
  
```  
  
      void Attach(  
   Interface* pInterface   
) throw( );  
void Attach(  
   Interface* pInterface,  
   bool fAddRef   
) throw( );  
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





