---
title: "Box::operator Box&lt;const T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<const T>^"
dev_langs: 
  - "C++"
ms.assetid: c43a2e8f-7e9d-4587-960f-1bab48923f82
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;const T&gt;^ Operator
Enables boxing conversions from a `const` value class `T` or `enum` class `T` to `Box<T>`.  
  
## Syntax  
  
```cpp  
operator Box<const T>^(const T valueType);  
```  
  
#### Parameters  
 `T`  
 Any value class, value struct, or enum type. Includes the built-in types in the [default namespace](../cppcx/default-namespace.md).  
  
## Return Value  
 A `Platform::Box<T>``^` instance that represents the original value boxed in a ref class.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Box Class](../cppcx/platform-box-class.md)   
 [Platform::IBox Interface](../cppcx/platform-ibox-interface.md)