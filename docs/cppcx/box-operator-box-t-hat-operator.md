---
title: "Box::operator Box&lt;T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<T>^"
dev_langs: 
  - "C++"
ms.assetid: c2c89385-c334-4b09-8f87-d46ea4809232
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;T&gt;^ Operator
Enables boxing conversions from a value class `T` to `Box<T>`.  
  
## Syntax  
  
```cpp  
operator Box<const T>^(const T valueType);  
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