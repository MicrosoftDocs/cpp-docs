---
title: "ClassFactory::QueryInterface Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ClassFactory::QueryInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["QueryInterface method"]
ms.assetid: 9593881f-4585-4d70-8ca6-b328918d4d6b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ClassFactory::QueryInterface Method
Retrieves a pointer to the interface specified by parameter.  
  
## Syntax  
  
```cpp  
STDMETHOD(  
   QueryInterface  
)(REFIID riid, _Deref_out_ void **ppvObject);  
```  
  
### Parameters  
 *riid*  
 An interface ID.  
  
 *ppvObject*  
 When this operation completes, a pointer to the interface specified by parameter *riid*.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../windows/classfactory-class.md)