---
title: "WeakReference Class1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::WeakReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WeakReference class"
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# WeakReference Class1
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
class WeakReference;  
```  
  
## Remarks  
 Represents a *weak reference* that can be used with the Windows Runtime or classic COM. A weak reference represents an object that might or might not be accessible.  
  
 A `WeakReference` object maintains a *strong reference*, which is a pointer to an object, and a *strong reference count*, which is the number of copies of the strong reference that have been distributed by the Resolve() method. While the strong reference count is nonzero, the strong reference is valid and the object is accessible. When the strong reference count becomes zero, the strong reference is invalid and the object is inaccessible.  
  
 A WeakReference object is typically used to represent an object whose existence is controlled by an external thread or application. For example, construct a WeakReference object from a reference to a file object. While the file is open, the strong reference is valid. But if the file is closed, the strong reference becomes invalid.  
  
 The WeakReference methods are thread safe.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[WeakReference::WeakReference Constructor](../windows/weakreference-weakreference-constructor.md)|Initializes a new instance of the WeakReference class.|  
|[WeakReference::~WeakReference Destructor](../windows/weakreference-tilde-weakreference-destructor.md)|Deinitializes (destroys) the current instance of the WeakReference class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[WeakReference::DecrementStrongReference Method](../windows/weakreference-decrementstrongreference-method.md)|Decrements the strong reference count of the current WeakReference object.|  
|[WeakReference::IncrementStrongReference Method](../windows/weakreference-incrementstrongreference-method.md)|Increments the strong reference count of the current WeakReference object.|  
|[WeakReference::Resolve Method](../windows/weakreference-resolve-method.md)|Sets the specified pointer to the current strong reference value if the strong reference count is nonzero.|  
|[WeakReference::SetUnknown Method](../windows/weakreference-setunknown-method.md)|Sets the strong reference of the current WeakReference object to the specified interface pointer.|  
  
## Inheritance Hierarchy  
 `WeakReference`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)