---
title: "Platform::Collections::Map Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Map Class (C++/Cx)"
ms.assetid: 2b8cf968-1167-4898-a149-1195b32c1785
caps.latest.revision: 19
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::Map Class
Represents a *map*, which is a collection of key-value pairs.  
  
## Syntax  
  
```  
template <  
   typename K,  
   typename V,  
   typename C = std::less<K>  
ref class Map sealed;  
```  
  
#### Parameters  
 `K`  
 The type of the key in the key-value pair.  
  
 `V`  
 The type of the value in the key-value pair.  
  
 `C`  
 A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map. By default, [std::less\<K>](../Topic/less%20Struct.md).  
  
 __is_valid_winrt_type()  
 A compiler generated function that validates the type of K and V and provides a friendly error message if the type cannot be stored in the Map.  
  
## Remarks  
 Allowed types are:  
  
-   integers  
  
-   interface class ^  
  
-   public ref class^  
  
-   value struct  
  
-   public enum class  
  
 Map is basically a wrapper for [std::map](../Topic/map%20Class.md). It is a C++ concrete implementation of the [Windows::Foundation::Collections::IMap<Windows::Foundation::Collections::IKeyValuePair\<K,V>>](http://go.microsoft.com/fwlink/p/?LinkId=262408) and [IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) types that are passed across public [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] interfaces. If you try to use a `Platform::Collections::Map` type in a public return value or parameter, compiler error C3986 is raised. You can fix the error by changing the type of the parameter or return value to [Windows::Foundation::Collections::IMap\<K,V>](http://go.microsoft.com/fwlink/p/?LinkId=262408).  
  
 For more information, see [Collections](../cppcx/collections-c-cx.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Map::Map Constructor](../cppcx/map-map-constructor.md)|Initializes a new instance of the Map class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Map::Clear Method](../cppcx/map-clear-method.md)|Removes all key-value pairs from the current Map object.|  
|[Map::First Method](../cppcx/map-first-method.md)|Returns an iterator that specifies the first element in the map.|  
|[Map::GetView Method](../cppcx/map-getview-method.md)|Returns a read-only view of the current Map; that is, a [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md).|  
|[Map::HasKey Method](../cppcx/map-haskey-method.md)|Determines whether the current Map contains the specified key.|  
|[Map::Insert Method](../cppcx/map-insert-method.md)|Adds the specified key-value pair to the current Map object.|  
|[Map::Lookup Method](../cppcx/map-lookup-method.md)|Retrieves the element at the specified key in the current Map object.|  
|[Map::Remove Method](../cppcx/map-remove-method.md)|Deletes the specified key-value pair from the current Map object.|  
|[Map::Size Method](../cppcx/map-size-method.md)|Returns the number of elements in the current Map object.|  
  
### Events  
  
|||  
|-|-|  
|Name|Description|  
|[Map::MapChanged Event](../cppcx/map-mapchanged-event.md) `event`|Occurs when the Map changes.|  
  
## Inheritance Hierarchy  
 `Map`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Creating Windows Runtime Components in C++](../Topic/Creating%20Windows%20Runtime%20Components%20in%20C++.md)