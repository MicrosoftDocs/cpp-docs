---
title: "Platform::Box Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box"
dev_langs: 
  - "C++"
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Box Class
Enables a value type such as `Windows::Foundation::DateTime` or a scalar type such as `int` to be stored in a `Platform::Object` type. It is usually not necessary to use `Box` explicitly because boxing happens implicitly when you cast a value type to `Object^`.  
  
## Syntax  
  
```cpp  
ref class Box abstract;  
```  
  
## Remarks  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)   
 [Boxing](../cppcx/boxing-c-cx.md)