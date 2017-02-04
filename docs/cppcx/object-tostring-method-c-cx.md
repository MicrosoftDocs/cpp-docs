---
title: "Object::ToString Method (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object::ToString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform, Object::ToString"
ms.assetid: 229dbf1c-cb43-4ed2-a1c5-a1f36b22a7ea
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Object::ToString Method (C++-CX)
Returns a string that represents the current object.  
  
## Syntax  
  
```cpp  
public:  
virtual String^ ToString()  
```  
  
## Return Value  
 A string that represents the current object. You can override this method to provide a custom string message in your ref class or struct:  
  
```cpp  
public ref class Tree sealed  
{  
public:  
Tree(){}  
virtual Platform::String^ ToString()override  
{  
return "I’m a Tree";  
};  
};  
```  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::Object Class](../cppcx/platform-object-class.md)