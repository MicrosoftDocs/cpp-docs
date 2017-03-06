---
title: "Box::operator T Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator T"
dev_langs: 
  - "C++"
ms.assetid: 7445ef5b-563c-4ff0-829d-f22aa558b5ec
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator T Operator
Enables boxing conversions from a value class `T` or `enum` class `T` to `Box<T>`.  
  
## Syntax  
  
```cpp  
operator Box<T>^(T valueType);  
```  
  
#### Parameters  
 `T`  
 Any enum type, value class, or value struct. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).  
  
## Return Value  
 A `Platform::Box<T>``^` instance that represents the original value boxed in a ref class.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Box Class](../cppcx/platform-box-class.md)   
 [Platform::IBox Interface](../cppcx/platform-ibox-interface.md)   
 [Boxing](../cppcx/boxing-c-cx.md)