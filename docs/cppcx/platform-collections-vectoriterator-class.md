---
title: "Platform::Collections::VectorIterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator Class"
ms.assetid: d531cb42-27e0-48a6-bf5e-c265891a18ff
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::VectorIterator Class
Provides a Standard Template Library iterator for objects derived from the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] IVector interface.  
  
 VectorIterator is a proxy iterator that stores elements of type VectorProxy\<T>. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
## Syntax  
  
```  
template <typename T>  
class VectorIterator;  
```  
  
#### Parameters  
 `T`  
 The typename of the VectorIterator template class.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`difference_type`|A pointer difference (ptrdiff_t).|  
|`iterator_category`|The category of a random access iterator (::std::random_access_iterator_tag).|  
|`pointer`|A pointer to an internal type, Platform::Collections::Details::VectorProxy\<T>, that is required for the implementation of VectorIterator.|  
|`reference`|A reference to an internal type, Platform::Collections::Details::VectorProxy\<T>,, that is required for the implementation of VectorIterator.|  
|`value_type`|The `T` typename.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[VectorIterator::VectorIterator Constructor](../cppcx/vectoriterator-vectoriterator-constructor.md)|Initializes a new instance of the VectorIterator class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[VectorIterator::operator- Operator](../cppcx/vectoriterator-operator-minus-operator.md)|Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.|  
|[VectorIterator::operator-- Operator](../cppcx/vectoriterator-operator-decrement-operator.md)|Decrements the current VectorIterator.|  
|[VectorIterator::operator!= Operator](../cppcx/vectoriterator-operator-inequality-operator.md)|Indicates whether the current VectorIterator is not equal to a specified VectorIterator.|  
|[VectorIterator::operator* Operator](../cppcx/vectoriterator-operator-dereference-operator.md)|Retrieves a reference to the element specified by the current VectorIterator.|  
|[VectorIterator::operatorOperator](../cppcx/vectoriterator-operatoroperator.md)|Retrieves a reference to the element that is a specified displacement from the current VectorIterator.|  
|[VectorIterator::operator+ Operator](vectoriterator-plus-operator.md)|Returns a VectorIterator that references the element at the specified displacement from the specified VectorIterator.|  
|[VectorIterator::operator++ Operator](../cppcx/vectoriterator-operator-increment-operator.md)|Increments the current VectorIterator.|  
|[VectorIterator::operator+= Operator](../cppcx/vectoriterator-operator-plus-assign-operator.md)|Increments the current VectorIterator by the specified displacement.|  
|[VectorIterator::operator< Operator](../cppcx/vectoriterator-operator-less-than-operator.md)|Indicates whether the current VectorIterator is less than a specified VectorIterator.|  
|[VectorIterator::operator\<= Operator](../cppcx/vectoriterator-operator-less-than-or-equals-operator.md)|Indicates whether the current VectorIterator is less than or equal to a specified VectorIterator.|  
|[VectorIterator::operator-= Operator](../cppcx/vectoriterator-operator-subtract-assign-operator.md)|Decrements the current VectorIterator by the specified displacement.|  
|[VectorIterator::operator== Operator](../cppcx/vectoriterator-operator-equality-operator.md)|Indicates whether the current VectorIterator is equal to a specified VectorIterator.|  
|[VectorIterator::operator> Operator](../cppcx/vectoriterator-operator-greater-than-operator.md)|Indicates whether the current VectorIterator is greater than a specified VectorIterator.|  
|[VectorIterator::operator-> Operator](../cppcx/vectoriterator-operator-arrow-operator.md)|Retrieves the address of the element referenced by the current VectorIterator.|  
|[VectorIterator::operator>= Operator](../cppcx/vectoriterator-operator-greater-than-or-equal-operator.md)|Indicates whether the current VectorIterator is greater than or equal to a specified VectorIterator.|  
  
## Inheritance Hierarchy  
 `VectorIterator`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)