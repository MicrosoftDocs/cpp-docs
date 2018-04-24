---
title: "_com_ptr_t::Detach | Microsoft Docs"
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
  - "_com_ptr_t::Detach"
  - "_com_ptr_t.Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach method"
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::Detach
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_ptr_t::Detach](https://docs.microsoft.com/cpp/cpp/com-ptr-t-detach).  
  
Microsoft Specific**  
  
 Extracts and returns the encapsulated interface pointer.  
  
## Syntax  
  
```  
  
Interface* Detach( ) throw( );  
  
```  
  
## Remarks  
 Extracts and returns the encapsulated interface pointer, and then clears the encapsulated pointer storage to **NULL**. This removes the interface pointer from encapsulation. It is up to you to call **Release** on the returned interface pointer.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)





