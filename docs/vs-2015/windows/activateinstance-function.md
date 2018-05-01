---
title: "ActivateInstance Function | Microsoft Docs"
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
  - "client/Windows::Foundation::ActivateInstance"
  - "client/ABI::Windows::Foundation::ActivateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActivateInstance function"
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivateInstance Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivateInstance Function](https://docs.microsoft.com/cpp/windows/activateinstance-function).  
  
  
Registers and retrieves an instance of a specified type defined in a specified class ID.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
inline HRESULT ActivateInstance(  
   _In_ HSTRING activatableClassId,  
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance  
);  
```  
  
#### Parameters  
 `T`  
 A type to activate.  
  
 `activatableClassId`  
 The name of the class ID that defines parameter `T`.  
  
 `instance`  
 When this operation completes, a reference to an instance of `T`.  
  
## Return Value  
 S_OK if successful; otherwise, an error HRESULT that indicates the cause of the error.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Windows::Foundation  
  
## See Also  
 [Windows::Foundation Namespace](../windows/windows-foundation-namespace.md)

