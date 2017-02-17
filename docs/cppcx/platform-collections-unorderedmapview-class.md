---
title: "Platform::Collections::UnorderedMapView Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView"
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::UnorderedMapView Class
Represents a read-only view into a *map*, which is a collection of key-value pairs.  
  
## Syntax  
  
```cpp  
template <  
   typename K,  
   typename V,  
   typename C = ::std::equal_to<K>  
>  
ref class UnorderedMapView sealed;  
```  
  
#### Parameters  
 `K`  
 The type of the key in the key-value pair.  
  
 `V`  
 The type of the value in the key-value pair.  
  
 `C`  
 A type that provides a function object that can compare two key values for equality. By default, [std::equal_to\<K>](../standard-library/equal-to-struct.md)  
  
## Remarks  
 UnorderedMapView is a concrete C++ implementation of the [Windows::Foundation::Collections::IMapView\<K,V>](http://go.microsoft.com/fwlink/p/?LinkId=262409) interface that is passed across the application binary interface (ABI). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[UnorderedMapView::UnorderedMapView Constructor](../cppcx/unorderedmapview-unorderedmapview-constructor.md)|Initializes a new instance of the UnorderedMapView class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[UnorderedMapView::First Method](../cppcx/unorderedmapview-first-method.md)|Returns an iterator that is initialized to the first element in the map view.|  
|[UnorderedMapView::HasKey Method](../cppcx/unorderedmapview-haskey-method.md)|Determines whether the current UnorderedMapView contains the specified key.|  
|[UnorderedMapView::Lookup Method](../cppcx/unorderedmapview-lookup-method.md)|Retrieves the element at the specified key in the current UnorderedMapView object.|  
|[UnorderedMapView::Size Method](../cppcx/unorderedmapview-size-method.md)|Returns the number of elements in the current UnorderedMapView object.|  
|[UnorderedMapView::Split Method](../cppcx/unorderedmapview-split-method.md)|Splits an original UnorderedMapView object into two UnorderedMapView objects.|  
  
## Inheritance Hierarchy  
 `UnorderedMapView`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)   
 [Windows::Foundation::IMapView](http://go.microsoft.com/fwlink/p/?LinkId=262409)