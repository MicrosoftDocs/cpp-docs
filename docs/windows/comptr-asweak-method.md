---
title: "ComPtr::AsWeak Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::AsWeak"]
dev_langs: ["C++"]
helpviewer_keywords: ["AsWeak method"]
ms.assetid: 23e29dcd-39cb-423f-abe6-6df4428213bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::AsWeak Method
Retrieves a weak reference to the current object.  
  
## Syntax  
  
```cpp  
HRESULT AsWeak(  
   _Out_ WeakRef* pWeakRef  
);  
```  
  
### Parameters  
 *pWeakRef*  
 When this operation completes, a pointer to a weak reference object.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)