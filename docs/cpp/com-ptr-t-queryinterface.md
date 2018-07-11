---
title: "_com_ptr_t::QueryInterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_ptr_t::QueryInterface", "_com_ptr_t.QueryInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["QueryInterface method [C++]"]
ms.assetid: d03292f1-6b02-40db-9756-8b0837a97319
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_ptr_t::QueryInterface
**Microsoft Specific**  
  
 Calls the `QueryInterface` member function of `IUnknown` on the encapsulated interface pointer.  
  
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
 *iid*  
 `IID` of an interface pointer.  
  
 *p*  
 Raw interface pointer.  
  
## Remarks  
 Calls `IUnknown::QueryInterface` on the encapsulated interface pointer with the specified `IID` and returns the resulting raw interface pointer in *p*. This routine returns the HRESULT to indicate success or failure.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)