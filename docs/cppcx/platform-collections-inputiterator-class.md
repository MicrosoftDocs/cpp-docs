---
title: "Platform::Collections::InputIterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator Class"
ms.assetid: ef72eea4-32a9-42b9-8119-ce87dbdcd3be
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::InputIterator Class
Provides a Standard Template Library InputIterator for collections derived from the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].  
  
## Syntax  
  
```  
template <  
   typename X  
>  
class InputIterator;  
```  
  
#### Parameters  
 `X`  
 The typename of the InputIterator template class.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`difference_type`|A pointer difference (ptrdiff_t).|  
|`iterator_category`|The category of a input iterator (::std::input_iterator_tag).|  
|`pointer`|A pointer to a `const``X`|  
|`reference`|A reference to a `const``X`|  
|`value_type`|The `X` typename.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[InputIterator::InputIterator Constructor](../cppcx/inputiterator-inputiterator-constructor.md)|Initializes a new instance of the InputIterator class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[InputIterator::operator!= Operator](../cppcx/inputiterator-operator-inequality-operator.md)|Indicates whether the current InputIterator is not equal to a specified InputIterator.|  
|[InputIterator::operator* Operator](../cppcx/inputiterator-operator-decrementoperator.md)|Retrieves a reference to the element specified by the current InputIterator.|  
|[InputIterator::operator++ Operator](../cppcx/inputiterator-operator-increment-operator.md)|Increments the current InputIterator.|  
|[InputIterator::operator== Operator](../cppcx/inputiterator-operator-equality-operator.md)|Indicates whether the current InputIterator is equal to a specified InputIterator.|  
|[InputIterator::operator-> Operator](../cppcx/inputiterator-operator-arrow-operator.md)|Retrieves the address of the element referenced by the current InputIterator.|  
  
## Inheritance Hierarchy  
 `InputIterator`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)