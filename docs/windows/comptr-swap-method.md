---
title: "ComPtr::Swap Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::Swap"]
dev_langs: ["C++"]
helpviewer_keywords: ["Swap method"]
ms.assetid: 74275f00-b24e-4b4c-b8b6-ac2aa2dd7ae9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::Swap Method
Exchanges the interface managed by the current **ComPtr** with the interface managed by the specified **ComPtr**.  
  
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
 *r*  
 A **ComPtr**.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)