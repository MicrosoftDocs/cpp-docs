---
title: "ITopologyExecutionResource Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["ITopologyExecutionResource", "CONCRTRM/concurrency::ITopologyExecutionResource", "CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetId", "CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetNext"]
dev_langs: ["C++"]
helpviewer_keywords: ["ITopologyExecutionResource structure"]
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ITopologyExecutionResource Structure
An interface to an execution resource as defined by the Resource Manager.  
  
## Syntax  
  
```
struct ITopologyExecutionResource;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ITopologyExecutionResource::GetId](#getid)|Returns the Resource Manager's unique identifier for this execution resource.|  
|[ITopologyExecutionResource::GetNext](#getnext)|Returns an interface to the next execution resource in enumeration order.|  
  
## Remarks  
 This interface is typically utilized to walk the topology of the system as observed by the Resource Manager.  
  
## Inheritance Hierarchy  
 `ITopologyExecutionResource`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="getid"></a>  ITopologyExecutionResource::GetId Method  
 Returns the Resource Manager's unique identifier for this execution resource.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### Return Value  
 The Resource Manager's unique identifier for this execution resource.  
  
##  <a name="getnext"></a>  ITopologyExecutionResource::GetNext Method  
 Returns an interface to the next execution resource in enumeration order.  
  
```
virtual ITopologyExecutionResource *GetNext() const = 0;
```  
  
### Return Value  
 An interface to the next execution resource in enumeration order. If there are no more nodes in enumeration order of the node to which this execution resource belongs, this method will return the value `NULL`.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
