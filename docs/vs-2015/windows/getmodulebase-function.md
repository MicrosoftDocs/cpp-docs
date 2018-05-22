---
title: "GetModuleBase Function | Microsoft Docs"
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
  - "implements/Microsoft::WRL::GetModuleBase"
dev_langs: 
  - "C++"
ms.assetid: 123d3b14-2eaf-4e02-8dcd-b6567917c6a6
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetModuleBase Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [GetModuleBase Function](https://docs.microsoft.com/cpp/windows/getmodulebase-function).  
  
  
Retrieves a [ModuleBase](../windows/modulebase-class.md) pointer that allows for incrementing and decrementing the reference count of a [RuntimeClass](../windows/runtimeclass-class.md) object.  
  
## Syntax  
  
```cpp  
inline Details::ModuleBase* GetModuleBase() throw()  
```  
  
## Return Value  
 A pointer to a `ModuleBase` object.  
  
## Remarks  
 This function is used internally to increment and decrement object reference counts.  
  
 You can use this function to control reference counts by calling [ModuleBase::IncrementObjectCount](../windows/modulebase-incrementobjectcount-method.md) and [ModuleBase::DecrementObjectCount](../windows/modulebase-decrementobjectcount-method.md).  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)

