---
title: "ComPtr::Attach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::Attach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Attach method"]
ms.assetid: 5b911f2d-9830-4dc7-b9e3-527abd55d2c8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::Attach Method
Associates this **ComPtr** with the interface type specified by the current template type parameter.  
  
## Syntax  
  
```cpp  
void Attach(  
   _In_opt_ InterfaceType* other  
);  
```  
  
### Parameters  
 *other*  
 An interface type.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)