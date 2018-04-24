---
title: "_com_ptr_t::GetInterfacePtr | Microsoft Docs"
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
  - "_com_ptr_t::GetInterfacePtr"
  - "_com_ptr_t.GetInterfacePtr"
  - "GetInterfacePtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfacePtr method"
ms.assetid: 55e3e2c7-c939-48b5-a905-4b9cbefeea7e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _com_ptr_t::GetInterfacePtr
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_com_ptr_t::GetInterfacePtr](https://docs.microsoft.com/cpp/cpp/com-ptr-t-getinterfaceptr).  
  
Microsoft Specific**  
  
 Returns the encapsulated interface pointer.  
  
## Syntax  
  
```  
  
      Interface* GetInterfacePtr( ) const throw( );   
Interface*& GetInterfacePtr() throw();  
```  
  
## Remarks  
 Returns the encapsulated interface pointer, which may be **NULL**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)





