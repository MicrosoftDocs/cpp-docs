---
title: "Platform::Collections::UnorderedMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap"
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::UnorderedMap Class
Represents an unordered *map*, which is a collection of key-value pairs.  
  
## Syntax  
  
```scr  
template <  
   typename K,  
   typename V,  
   typename C = std::equal_to<K>  
>  
ref class Map sealed;  
```  
  
#### Parameters  
 `K`  
 The type of the key in the key-value pair.  
  
 `V`  
 The type of the value in the key-value pair.  
  
 `C`  
 A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map. By default,  [std::equal_to\<K>](../standard-library/equal-to-struct.md).  
  
## Remarks  
 Allowed types are:  
  
-   integers  
  
-   interface class ^  
  
-   public ref class^  
  
-   value struct  
  
-   public enum class  
  
 UnorderedMap is basically a wrapper for [std::unordered_map](../standard-library/unordered-map-class.md) that supports storage of [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types. It is the a concrete implementation of the [Windows::Foundation::Collections::IMap](http://go.microsoft.com/fwlink/p/?LinkId=262408) and [IObservableMap](http://msdn.microsoft.com/library/windows/apps/br226050.aspx) types that are passed across public [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] interfaces. If you try to use a Platform::Collections::UnorderedMap type in a public return value or parameter, compiler error C3986 is raised. You can fix the error by changing the type of the parameter or return value to [Windows::Foundation::Collections::IMap](http://go.microsoft.com/fwlink/p/?LinkId=262408).  
  
 For more information, see [Collections](../cppcx/collections-c-cx.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|UnorderedMap::UnorderedMap Constructor|Initializes a new instance of the Map class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[UnorderedMap::Clear Method](../cppcx/unorderedmap-clear-method.md)|Removes all key-value pairs from the current Map object.|  
|[UnorderedMap::First Method](../cppcx/unorderedmap-first-method.md)|Returns an iterator that specifies the first element in the map.|  
|[UnorderedMap::GetView Method](../cppcx/unorderedmap-getview-method.md)|Returns a read-only view of the current Map; that is, a Platform::Collections::UnorderedMapView Class.|  
|[UnorderedMap::HasKey Method](../cppcx/unorderedmap-haskey-method.md)|Determines whether the current Map contains the specified key.|  
|[UnorderedMap::Insert Method](../cppcx/unorderedmap-insert-method.md)|Adds the specified key-value pair to the current Map object.|  
|[UnorderedMap::Lookup Method](../cppcx/unorderedmap-lookup-method.md)|Retrieves the element at the specified key in the current Map object.|  
|[UnorderedMap::Remove Method](../cppcx/unorderedmap-remove-method.md)|Deletes the specified key-value pair from the current Map object.|  
|[UnorderedMap::Size Method](../cppcx/unorderedmap-size-method.md)|Returns the number of elements in the current Map object.|  
  
### Events  
  
|||  
|-|-|  
|Name|Description|  
|[Map::MapChanged Event](../cppcx/map-mapchanged-event.md) `event`|Occurs when the Map changes.|  
  
## Inheritance Hierarchy  
 `UnorderedMap`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)   
 [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)   
 [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)   
 [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)   
 [Collections](../cppcx/collections-c-cx.md)   
 [Creating Windows Runtime Components in C++](/MicrosoftDocs/windows-uwp/blob/docs/windows-apps-src/winrt-components/creating-windows-runtime-components-in-cpp.md)