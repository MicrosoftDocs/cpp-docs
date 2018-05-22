---
title: "_com_ptr_t::Release | Microsoft Docs"
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
  - "_com_ptr_t.Release"
  - "_com_ptr_t::Release"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Release method"
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::Release
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_ptr_t::Release](https://docs.microsoft.com/cpp/cpp/com-ptr-t-release).  
  
Microsoft Specific**  
  
 Calls the **Release** member function of **IUnknown** on the encapsulated interface pointer.  
  
## Syntax  
  
```  
  
void Release( );  
  
```  
  
## Remarks  
 Calls `IUnknown::Release` on the encapsulated interface pointer, raising an `E_POINTER` error if this interface pointer is **NULL**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)





