---
title: "_com_ptr_t::QueryInterface"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::QueryInterface"
  - "_com_ptr_t.QueryInterface"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "QueryInterface method"
ms.assetid: d03292f1-6b02-40db-9756-8b0837a97319
caps.latest.revision: 6
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
# _com_ptr_t::QueryInterface
**Microsoft Specific**  
  
 Calls the `QueryInterface` member function of **IUnknown** on the encapsulated interface pointer.  
  
## Syntax  
  
```  
  
      template<typename _InterfaceType> HRESULT QueryInterface (  
   const IID& iid,  
   _InterfaceType*& p   
) throw ( );  
template<typename _InterfaceType> HRESULT QueryInterface (  
   const IID& iid,  
   _InterfaceType** p  
) throw( );  
```  
  
#### Parameters  
 `iid`  
 **IID** of an interface pointer.  
  
 `p`  
 Raw interface pointer.  
  
## Remarks  
 Calls **IUnknown::QueryInterface** on the encapsulated interface pointer with the specified **IID** and returns the resulting raw interface pointer in `p`. This routine returns the `HRESULT` to indicate success or failure.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/_com_ptr_t-class.md)