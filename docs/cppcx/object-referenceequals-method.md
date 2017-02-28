---
title: "Object::ReferenceEquals Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::ReferenceEquals"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::ReferenceEquals"
ms.assetid: a179e74a-46c7-4bfd-b848-b89ef3ff7197
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Object::ReferenceEquals Method
Determines whether the specified Object instances are the same instance.  
  
## Syntax  
  
```cpp  
public:static bool ReferenceEquals(  Object^ obj1,   Object^ obj2)  
```  
  
## Parameters  
 obj1  
 The first object to compare.  
  
 obj2  
 The second object to compare.  
  
## Return Value  
 `true` if the two objects are the same; otherwise, `false`.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Object Class](../cppcx/platform-object-class.md)