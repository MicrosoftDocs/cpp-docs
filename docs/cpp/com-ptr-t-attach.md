---
title: "_com_ptr_t::Attach | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# _com_ptr_t::Attach
**Microsoft Specific**  
  
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