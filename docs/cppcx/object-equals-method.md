---
title: "Object::Equals Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::Equals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::Equals"
ms.assetid: 263ccd41-2a29-4716-a47e-4bf2883f3403
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Object::Equals Method
Determines whether the specified object is equal to the current object.  
  
## Syntax  
  
```cpp  
  
bool Equals(  
    Object^ obj  
)  
```  
  
## Parameters  
 obj  
 The object to compare.  
  
## Return Value  
 `true` if the objects are equal, otherwise `false`.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Object Class](../cppcx/platform-object-class.md)