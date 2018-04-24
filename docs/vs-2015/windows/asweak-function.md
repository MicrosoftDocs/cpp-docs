---
title: "AsWeak Function | Microsoft Docs"
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
  - "client/Microsoft::WRL::AsWeak"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsWeak function"
ms.assetid: a6f10cfc-c1d6-4761-adb9-1a119cc99913
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsWeak Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsWeak Function](https://docs.microsoft.com/cpp/windows/asweak-function).  
  
  
Retrieves a weak reference to a specified instance.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
HRESULT AsWeak(  
   _In_ T* p,  
   _Out_ WeakRef* pWeak  
);  
```  
  
#### Parameters  
 `T`  
 A pointer to the type of parameter `p`.  
  
 `p`  
 An instance of a type.  
  
 `pWeak`  
 When this operation completes, a pointer to a weak reference to parameter `p`.  
  
## Return Value  
 S_OK, if this operation is successful; otherwise, an error HRESULT that indicates the cause of the failure.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)

