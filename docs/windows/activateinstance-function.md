---
title: "ActivateInstance Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ActivateInstance Function
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