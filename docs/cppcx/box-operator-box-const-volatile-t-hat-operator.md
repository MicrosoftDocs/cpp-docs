---
title: "Box::operator Box&lt;const volatile T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<const volatile T>^"
dev_langs: 
  - "C++"
ms.assetid: 3c91cf0f-1e90-4daf-8468-a7d8aedb6784
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;const volatile T&gt;^ Operator
Enables boxing conversions from a `const volatile` value class `T` or `enum` type `T` to `Box<T>`.  
  
## Syntax  
  
```cpp  
operator Box<const volatile T>^(const volatile T valueType);  
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