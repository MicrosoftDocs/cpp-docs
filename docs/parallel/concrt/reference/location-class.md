---
title: "location Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["location", "CONCRT/concurrency::location", "CONCRT/concurrency::location::location", "CONCRT/concurrency::location::current", "CONCRT/concurrency::location::from_numa_node"]
dev_langs: ["C++"]
helpviewer_keywords: ["location class"]
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# location Class
An abstraction of a physical location on hardware.  
  
## Syntax  
  
```
class location;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[location](#ctor)|Overloaded. Constructs a `location` object.|  
|[~location Destructor](#dtor)|Destroys a `location` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[current](#current)|Returns a `location` object representing the most specific place the calling thread is executing.|  
|[from_numa_node](#from_numa_node)|Returns a `location` object which represents a given NUMA node.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator!=](#operator_neq)|Determines whether two `location` objects represent different location.|  
|[operator=](#operator_eq)|Assigns the contents of a different `location` object to this one.|  
|[operator==](#operator_eq_eq)|Determines whether two `location` objects represent the same location.|  
  
## Inheritance Hierarchy  
 `location`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a> ~location 

 Destroys a `location` object.  
  
```
~location();
```  
  
##  <a name="current"></a> current 

 Returns a `location` object representing the most specific place the calling thread is executing.  
  
```
static location __cdecl current();
```  
  
### Return Value  
 A location representing the most specific place the calling thread is executing.  
  
##  <a name="from_numa_node"></a> from_numa_node 

 Returns a `location` object which represents a given NUMA node.  
  
```
static location __cdecl from_numa_node(unsigned short _NumaNodeNumber);
```  
  
### Parameters  
 `_NumaNodeNumber`  
 The NUMA node number to construct a location for.  
  
### Return Value  
 A location representing the NUMA node specified by the `_NumaNodeNumber` parameter.  
  
##  <a name="ctor"></a> location 

 Constructs a `location` object.  
  
```
location();

location(
    const location& _Src);

location(
    T _LocationType,
    unsigned int _Id,
    unsigned int _BindingId = 0,
    _Inout_opt_ void* _PBinding = NULL);
```  
  
### Parameters  
 `_Src`  
 `_LocationType`  
 `_Id`  
 `_BindingId`  
 `_PBinding`  
  
### Remarks  
 A default constructed location represents the system as a whole.  
  
##  <a name="operator_neq"></a> operator!= 

 Determines whether two `location` objects represent different location.  
  
```
bool operator!= (const location& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
 `true` if the two locations are different, `false` otherwise.  
  
##  <a name="operator_eq"></a> operator= 

 Assigns the contents of a different `location` object to this one.  
  
```
location& operator= (const location& _Rhs);
```  
  
### Parameters  
 `_Rhs`  
 The source `location` object.  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a> operator== 

 Determines whether two `location` objects represent the same location.  
  
```
bool operator== (const location& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
 `true` if the two locations are identical, and `false` otherwise.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
