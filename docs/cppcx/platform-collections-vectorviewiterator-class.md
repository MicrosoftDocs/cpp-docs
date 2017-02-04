---
title: "Platform::Collections::VectorViewIterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator Class"
ms.assetid: be3aa1ae-e6ba-4a06-8d6b-86d8128026f7
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::VectorViewIterator Class
Provides a Standard Template Library iterator for objects derived from the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]`IVectorView` interface.  
  
 `ViewVectorIterator` is a proxy iterator that stores elements of type `VectorProxy<T>`. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class VectorViewIterator;  
```  
  
#### Parameters  
 `T`  
 The typename of the VectorViewIterator template class.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`difference_type`|A pointer difference (ptrdiff_t).|  
|`iterator_category`|The category of a random access iterator (::std::random_access_iterator_tag).|  
|`pointer`|A pointer to an internal type that is required for the implementation of VectorViewIterator.|  
|`reference`|A reference to an internal type that is required for the implementation of VectorViewIterator.|  
|`value_type`|The `T` typename.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[VectorViewIterator::VectorViewIterator Constructor](../cppcx/vectorviewiterator-vectorviewiterator-constructor.md)|Initializes a new instance of the VectorViewIterator class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[VectorViewIterator::operator- Operator](../cppcx/vectorviewiterator-operator-minus-operator.md)|Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.|  
|[VectorViewIterator::operator-- Operator](../cppcx/vectorviewiterator-operator-decrement-operator.md)|Decrements the current VectorViewIterator.|  
|[VectorViewIterator::operator!= Operator](../cppcx/vectorviewiterator-operator-inequality-operator.md)|Indicates whether the current VectorViewIterator is not equal to a specified VectorViewIterator.|  
|[VectorViewIterator::operator* Operator](../cppcx/vectorviewiterator-operator-dereference-operator.md)|Retrieves a reference to the element specified by the current VectorViewIterator.|  
|[VectorViewIterator::operatorOperator](../cppcx/vectorviewiterator-operatoroperator.md)|Retrieves a reference to the element that is a specified displacement from the current VectorViewIterator.|  
|[VectorViewIterator::operator+ Operator](../cppcx/vectorviewiterator-operator-plus-operator.md)|Returns a VectorViewIterator that references the element at the specified displacement from the specified VectorViewIterator.|  
|[VectorViewIterator::operator++ Operator](../cppcx/vectorviewiterator-operator-increment-operator.md)|Increments the current VectorViewIterator.|  
|[VectorViewIterator::operator+= Operator](../cppcx/vectorviewiterator-operator-plus-assign-operator.md)|Increments the current VectorViewIterator by the specified displacement.|  
|[VectorViewIterator::operator< Operator](../cppcx/vectorviewiterator-operator-less-than-operator.md)|Indicates whether the current VectorViewIterator is less than a specified VectorViewIterator.|  
|[VectorViewIterator::operator\<= Operator](../cppcx/vectorviewiterator-operator-less-than-or-equals-operator.md)|Indicates whether the current VectorViewIterator is less than or equal to a specified VectorViewIterator.|  
|[VectorViewIterator::operator-= Operator](../cppcx/vectorviewiterator-operator-subtract-assign-operator.md)|Decrements the current VectorViewIterator by the specified displacement.|  
|[VectorViewIterator::operator== Operator](../cppcx/vectorviewiterator-operator-equality-operator.md)|Indicates whether the current VectorViewIterator is equal to a specified VectorViewIterator.|  
|[VectorViewIterator::operator> Operator](../cppcx/vectorviewiterator-operator-greater-than-operator.md)|Indicates whether the current VectorViewIterator is greater than a specified VectorViewIterator.|  
|[VectorViewIterator::operator-> Operator](../cppcx/vectorviewiterator-operator-arrow-operator.md)|Retrieves the address of the element referenced by the current VectorViewIterator.|  
|[VectorViewIterator::operator>= Operator](../cppcx/vectorviewiterator-operator-greater-than-or-equals-operator.md)|Indicates whether the current VectorViewIterator is greater than or equal to a specified VectorViewIterator.|  
  
## Inheritance Hierarchy  
 `VectorViewIterator`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)