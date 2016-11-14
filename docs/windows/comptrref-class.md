---
title: "ComPtrRef Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtrRef class"
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
caps.latest.revision: 6
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
# ComPtrRef Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class ComPtrRef : public ComPtrRefBase<T>;  
```  
  
#### Parameters  
 `T`  
 A [ComPtr\<T>](../windows/comptr-class.md) type or a type derived from it, not merely the interface represented by the ComPtr.  
  
## Remarks  
 Represents a reference to an object of type ComPtr\<T>.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::ComPtrRef Constructor](../windows/comptrref-comptrref-constructor.md)|Initializes a new instance of the ComPtrRef class from the specified pointer to another ComPtrRef object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::GetAddressOf Method](../windows/comptrref-getaddressof-method.md)|Retrieves the address of a pointer to the interface represented by the current ComPtrRef object.|  
|[ComPtrRef::ReleaseAndGetAddressOf Method](../windows/comptrref-releaseandgetaddressof-method.md)|Deletes the current ComPtrRef object and returns a pointer-to-a-pointer to the interface that was represented by the ComPtrRef object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef::operator InterfaceType** Operator](../windows/comptrref-operator-interfacetype-star-star-operator.md)|Deletes the current ComPtrRef object and returns a pointer-to-a-pointer to the interface that was represented by the ComPtrRef object.|  
|[ComPtrRef::operator T* Operator](../windows/comptrref-operator-t-star-operator.md)|Returns the value of the [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member of the current ComPtrRef object.|  
|[ComPtrRef::operator void** Operator](../windows/comptrref-operator-void-star-star-operator.md)|Deletes the current ComPtrRef object, casts the pointer to the interface that was represented by the ComPtrRef object as a pointer-to-pointer-to `void`, and then returns the cast pointer.|  
|[ComPtrRef::operator* Operator](../windows/comptrref-operator-star-operator.md)|Retrieves the pointer to the interface represented by the current ComPtrRef object.|  
|[ComPtrRef::operator== Operator](../windows/comptrref-operator-equality-operator.md)|Indicates whether two ComPtrRef objects are equal.|  
|[ComPtrRef::operator!= Operator](../windows/comptrref-operator-inequality-operator.md)|Indicates whether two ComPtrRef objects are not equal.|  
  
## Inheritance Hierarchy  
 `ComPtrRefBase`  
  
 `ComPtrRef`  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)