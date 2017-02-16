---
title: "Platform::Collections::MapView Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::MapView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapView Class"
ms.assetid: 9577dde7-f599-43c6-b1e4-7d653706fd62
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::MapView Class
Represents a read-only view into a *map*, which is a collection of key-value pairs.  
  
## Syntax  
  
```  
template <  
   typename K,  
   typename V,  
   typename C = ::std::less<K>  
>  
ref class MapView sealed;  
```  
  
#### Parameters  
 `K`  
 The type of the key in the key-value pair.  
  
 `V`  
 The type of the value in the key-value pair.  
  
 `C`  
 A type that provides a function object that can compare two element values as sort keys to determine their relative order in the MapView. By default, [::std::less\<K>](../Topic/less%20Struct.md).  
  
## Remarks  
 MapView is a concrete C++ implementation of the [Windows::Foundation::Collections::IMapView \<K,V>](http://go.microsoft.com/fwlink/p/?LinkId=262409) interface that is passed across the application binary interface (ABI). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[MapView::MapView Constructor](../cppcx/mapview-mapview-constructor.md)|Initializes a new instance of the MapView class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[MapView::First Method](../cppcx/mapview-first-method.md)|Returns an iterator that is initialized to the first element in the map view.|  
|[MapView::HasKey Method](../cppcx/mapview-haskey-method.md)|Determines whether the current MapView contains the specified key.|  
|[MapView::Lookup Method](../cppcx/mapview-lookup-method.md)|Retrieves the element at the specified key in the current MapView object.|  
|[MapView::Size Method](../cppcx/mapview-size-method.md)|Returns the number of elements in the current MapView object.|  
|[MapView::Split Method](../cppcx/mapview-split-method.md)|Splits an original MapView object into two MapView objects.|  
  
## Inheritance Hierarchy  
 `MapView`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)