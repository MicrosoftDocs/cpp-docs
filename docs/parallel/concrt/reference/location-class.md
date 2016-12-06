---
title: "location Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::location"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "location class"
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[location::location Constructor](#ctor)|Overloaded. Constructs a `location` object.|  
|[location::~location Destructor](#dtor)|Destroys a `location` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[location::current Method](#current)|Returns a `location` object representing the most specific place the calling thread is executing.|  
|[location::from_numa_node Method](#from_numa_node)|Returns a `location` object which represents a given NUMA node.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[location::operator!= Operator](#operator_neq)|Determines whether two `location` objects represent different location.|  
|[location::operator= Operator](#operator_eq)|Assigns the contents of a different `location` object to this one.|  
|[location::operator== Operator](#operator_eq_eq)|Determines whether two `location` objects represent the same location.|  
  
## Inheritance Hierarchy  
 `location`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a>  location::~location Destructor  
 Destroys a `location` object.  
  
```
~location();
```  
  
##  <a name="current"></a>  location::current Method  
 Returns a `location` object representing the most specific place the calling thread is executing.  
  
```
static location __cdecl current();
```  
  
### Return Value  
 A location representing the most specific place the calling thread is executing.  
  
##  <a name="from_numa_node"></a>  location::from_numa_node Method  
 Returns a `location` object which represents a given NUMA node.  
  
```
static location __cdecl from_numa_node(unsigned short _NumaNodeNumber);
```  
  
### Parameters  
 `_NumaNodeNumber`  
 The NUMA node number to construct a location for.  
  
### Return Value  
 A location representing the NUMA node specified by the `_NumaNodeNumber` parameter.  
  
##  <a name="ctor"></a>  location::location Constructor  
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
  
##  <a name="operator_neq"></a>  location::operator!= Operator  
 Determines whether two `location` objects represent different location.  
  
```
bool operator!= (const location& _Rhs) const;
```  
  
### Parameters  
 `_Rhs`  
  
### Return Value  
 `true` if the two locations are different, `false` otherwise.  
  
##  <a name="operator_eq"></a>  location::operator= Operator  
 Assigns the contents of a different `location` object to this one.  
  
```
location& operator= (const location& _Rhs);
```  
  
### Parameters  
 `_Rhs`  
 The source `location` object.  
  
### Return Value  
  
##  <a name="operator_eq_eq"></a>  location::operator== Operator  
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
