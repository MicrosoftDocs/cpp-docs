---
title: "Box::operator Box&lt;volatile T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<volatile T>^"
dev_langs: 
  - "C++"
ms.assetid: 90fffbf6-3429-46d0-bfaf-d99b7f48de6f
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;volatile T&gt;^ Operator
Enables boxing conversions from a `volatile` value class `T` or `enum` type `T` to `Box<T>`.  
  
## Syntax  
  
```cpp  
operator Box<volatile T>^(volatile T valueType);  
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