---
title: "Platform::Agile Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "agile/Platform::Agile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::Agile"
ms.assetid: e34459a9-c429-4c79-97fd-030c43ca4155
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Agile Class
Represents an object that has a MashalingBehavior=Standard as an agile object, which greatly reduces the chances for runtime threading exceptions. The `Agile<T>` enables the non-agile object to call, or be called from, the same or a different thread. For more information, see [Threading and Marshaling](../cppcx/threading-and-marshaling-c-cx.md).  
  
## Syntax  
  
```scr  
  
template <typename T>  
    class Agile  
;  
```  
  
#### Parameters  
 T  
 The typename for the non-agile class.  
  
## Remarks  
 Most of the classes in the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] are agile. An agile object can call, or be called by, an in-proc or out-of-proc object in the same or a different thread. If an object is not agile, wrap the non-agile object in a `Agile<T>` object, which is agile. Then the `Agile<T>` object can be marshaled, and the underlying non-agile object can be used.  
  
 The `Agile<T>` class is a native, standard C++ class and requires `agile.h`. It represents the non-agile object and the Agile object's *context*. The context specifies an agile object's threading model and marshaling behavior. The operating system uses the context to determine how to marshal an object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Agile::Agile Constructor](../cppcx/agile-agile-constructor.md)|Initializes a new instance of the Agile class.|  
|[Agile::~Agile Destructor](../cppcx/agile-tilde-agile-destructor.md)|Destroys the current instance of the Agile class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Agile::Get](../cppcx/agile-get-method.md)|Returns a handle to the object that is represented by the current Agile object.|  
|[Agile::GetAddressOf](../cppcx/agile-getaddressof-method.md)|Reinitializes the current Agile object, and then returns the address of a handle to an object of type `T`.|  
|[Agile::GetAddressOfForInOut](../cppcx/agile-getaddressofforinout-method.md)|Returns the address of a handle to the object represented by the current Agile object.|  
|[Agile::Release](../cppcx/agile-release-method.md)|Discards the current Agile object's underlying object and context.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[Agile::operator->](../cppcx/agile-operator-arrow-operator.md)|Retrieves a handle to the object represented by the current Agile object.|  
|[Agile::operator=](../cppcx/agile-operator-assign-operator.md)|Assigns the specified value to the current Agile object.|  
  
## Inheritance Hierarchy  
 `Object`  
  
 `Agile`  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** agile.h  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)