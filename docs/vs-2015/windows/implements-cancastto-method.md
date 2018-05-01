---
title: "Implements::CanCastTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Implements::CanCastTo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CanCastTo method"
ms.assetid: a8e85c7d-4dcd-446d-bebc-a97da46ce44a
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Implements::CanCastTo Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Implements::CanCastTo Method](https://docs.microsoft.com/cpp/windows/implements-cancastto-method).  
  
  
Gets a pointer to the specified interface.  
  
## Syntax  
  
```  
__forceinline HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### Parameters  
 `riid`  
 A reference to an interface ID.  
  
 `ppv`  
 If successful, a pointer to the interface specified by `riid`.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error, such as E_NOINTERFACE.  
  
## Remarks  
 This is an internal helper function that performs a QueryInterface operation.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Implements Structure](../windows/implements-structure.md)

