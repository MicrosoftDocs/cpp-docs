---
title: "Platform::Object Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Object class"
ms.assetid: 709e84a8-0bff-471b-bc14-63e424080b5a
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Object Class
Provides common behavior for ref classes and ref structs in Windows Store apps. All ref class and ref struct instances are implicitly convertible to Platform::Object^ and can override its virtual ToString method.  
  
## Syntax  
  
```scr  
public ref class Object : Object  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Object::Object Constructor](../cppcx/object-object-constructor.md)|Initializes a new instance of the Object class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Object::Equals Method](../cppcx/object-equals-method.md)|Determines whether the specified object is equal to the current object.|  
|[Object::GetHashCode Method](../cppcx/object-gethashcode-method.md)|Returns the hash code for this instance.|  
|[Object::ReferenceEquals Method](../cppcx/object-referenceequals-method.md)|Determines whether the specified Object instances are the same instance.|  
|[ToString Method](../cppcx/object-tostring-method-c-cx.md)|Returns a string that represents the current object. Can be overridden.|  
|[GetType Method](../cppcx/object-gettype-method.md)|Gets a [Platform::Type](../cppcx/platform-type-class.md) that describes the current instance.|  
  
## Inheritance Hierarchy  
 `Object`  
  
 `Object`  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)