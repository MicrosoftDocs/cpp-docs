---
title: "Box::Value Property | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::Value"
dev_langs: 
  - "C++"
ms.assetid: f456b105-6c14-4737-8c27-ad47d1eabd32
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::Value Property
Returns the value that is encapsulated in the `Box` object.  
  
## Syntax  
  
```cpp  
virtual property T Value{  
   T get();  
}  
```  
  
## Return Value  
 Returns the boxed value with the same type as it originally had before it was boxed.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Box Class](../cppcx/platform-box-class.md)   
 [Boxing](../cppcx/boxing-c-cx.md)