---
title: "ClassFactory::LockServer Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ClassFactory::LockServer"]
dev_langs: ["C++"]
helpviewer_keywords: ["LockServer method"]
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ClassFactory::LockServer Method
Increments or decrements the number of underlying objects that are tracked by the current **ClassFactory** object.  
  
## Syntax  
  
```cpp  
STDMETHOD(  
   LockServer  
)(BOOL fLock);  
```  
  
### Parameters  
 *fLock*  
 **true** to increment the number of tracked objects. **false** to decrement the number of tracked objects.  
  
## Return Value  
 S_OK if successful; otherwise, E_FAIL.  
  
## Remarks  
 **ClassFactory** keeps track of objects in an underlying instance of the [Module](../windows/module-class.md) class.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../windows/classfactory-class.md)