---
title: "ComPtr::Swap Method | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::Swap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Swap method"
ms.assetid: 74275f00-b24e-4b4c-b8b6-ac2aa2dd7ae9
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtr::Swap Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtr::Swap Method](https://docs.microsoft.com/cpp/windows/comptr-swap-method).  
  
  
Exchanges the interface managed by the current ComPtr with the interface managed by the specified ComPtr.  
  
## Syntax  
  
```  
void Swap(  
   _Inout_ ComPtr&& r  
);  
  
void Swap(  
   _Inout_ ComPtr& r  
);  
```  
  
#### Parameters  
 `r`  
 A ComPtr.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)

