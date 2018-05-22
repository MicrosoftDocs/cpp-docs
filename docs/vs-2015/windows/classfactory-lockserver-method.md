---
title: "ClassFactory::LockServer Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ClassFactory::LockServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LockServer method"
ms.assetid: 8d859815-956d-4f81-a5af-7cdee7e945de
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ClassFactory::LockServer Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ClassFactory::LockServer Method](https://docs.microsoft.com/cpp/windows/classfactory-lockserver-method).  
  
  
Increments or decrements the number of underlying objects that are tracked by the current ClassFactory object.  
  
## Syntax  
  
```  
STDMETHOD(  
   LockServer  
)(BOOL fLock);  
```  
  
#### Parameters  
 `fLock`  
 `true` to increment the number of tracked objects. `false` to decrement the number of tracked objects.  
  
## Return Value  
 S_OK if successful; otherwise, E_FAIL.  
  
## Remarks  
 ClassFactory keeps track of objects in an underlying instance of the [Module](../windows/module-class.md) class.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../windows/classfactory-class.md)

