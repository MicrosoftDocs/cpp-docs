---
title: "MakeAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::MakeAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MakeAllocator class"
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
caps.latest.revision: 5
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
# MakeAllocator Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
  
template<  
   typename T,  
   bool hasWeakReferenceSupport =   
         !__is_base_of(RuntimeClassFlags<InhibitWeakReference>,   
   T)> , T)> class MakeAllocator;  
  
template<  
   typename T  
>  
class MakeAllocator<T, false>;  
  
template<  
   typename T  
>  
class MakeAllocator<T, true>;  
```  
  
#### Parameters  
 `T`  
 A type name.  
  
 `hasWeakReferenceSupport`  
 `true` to allocate memory for an object that supports weak references; `false` to allocate memory for an object that doesn't support weak references.  
  
## Remarks  
 Allocates memory for an activatable class, with or without weak reference support.  
  
 Override the MakeAllocator class to implement a user-defined memory allocation model.  
  
 MakeAllocator is typically used to prevent memory leaks if an object throws during construction.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[MakeAllocator::MakeAllocator Constructor](../windows/makeallocator-makeallocator-constructor.md)|Initializes a new instance of the MakeAllocator class.|  
|[MakeAllocator::~MakeAllocator Destructor](../windows/makeallocator-tilde-makeallocator-destructor.md)|Deinitializes the current instance of the MakeAllocator class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[MakeAllocator::Allocate Method](../windows/makeallocator-allocate-method.md)|Allocates memory and associates it with the current MakeAllocator object.|  
|[MakeAllocator::Detach Method](../windows/makeallocator-detach-method.md)|Disassociates memory allocated by the [Allocate](../windows/makeallocator-allocate-method.md) method from the current MakeAllocator object.|  
  
## Inheritance Hierarchy  
 `MakeAllocator`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)