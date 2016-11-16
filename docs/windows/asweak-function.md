---
title: "AsWeak Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# AsWeak Function
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