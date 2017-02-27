---
title: "Box::Box Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::Box"
dev_langs: 
  - "C++"
ms.assetid: 3c4777f0-801c-4b24-9426-6d658dfaecf8
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::Box Constructor
Creates a `Box` that can encapsulate a value of the specified type.  
  
## Syntax  
  
```cpp  
Box(T valueArg);  
```  
  
#### Parameters  
 `valueArg`  
 The type of value to be boxed—for example, `int`, `bool`, `float64`, `DateTime`.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Box Class](../cppcx/platform-box-class.md)   
 [Boxing](../cppcx/boxing-c-cx.md)