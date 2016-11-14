---
title: "_com_ptr_t::Release | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# _com_ptr_t::Release
**Microsoft Specific**  
  
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