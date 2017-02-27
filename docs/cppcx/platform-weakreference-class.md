---
title: "Platform::WeakReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform::WeakReference"
ms.assetid: 8cfe1977-a8c7-4b7b-b539-25c77ed4c5f1
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::WeakReference Class
Represents a weak reference to an instance of a ref class.  
  
## Syntax  
  
```vb  
class WeakReference  
```  
  
#### Parameters  
  
## Members  
  
### Constructors  
  
|Member|Description|  
|------------|-----------------|  
|[WeakReference::WeakReference Constructor](../cppcx/weakreference-weakreference-constructor-c-cx.md)|Initializes a new instance of the WeakReference class.|  
  
### Methods  
  
|Member|Description|  
|------------|-----------------|  
|[WeakReference::Resolve Method](../cppcx/weakreference-resolve-method-platform-namespace.md)|Returns a handle to the underlying ref class, or nullptr if the object no longer exists.|  
  
### Operators  
  
|Member|Description|  
|------------|-----------------|  
|[WeakReference::operator=](../cppcx/weakreference-operator-assign.md)|Assigns a new value to the WeakReference object.|  
  
## Remarks  
 The WeakReference class itself is not a ref class and therefore it does not inherit from Platform::Object^ and cannot be used in the signature of a public method.  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)