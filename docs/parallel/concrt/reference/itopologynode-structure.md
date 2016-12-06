---
title: "ITopologyNode Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::ITopologyNode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITopologyNode structure"
ms.assetid: 92e7e032-04f6-4c7c-be36-8f9a35fc4734
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
# ITopologyNode Structure
An interface to a topology node as defined by the Resource Manager. A node contains one or more execution resources.  
  
## Syntax  
  
```
struct ITopologyNode;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ITopologyNode::GetExecutionResourceCount Method](#getexecutionresourcecount)|Returns the number of execution resources grouped together under this node.|  
|[ITopologyNode::GetFirstExecutionResource Method](#getfirstexecutionresource)|Returns the first execution resource grouped under this node in enumeration order.|  
|[ITopologyNode::GetId Method](#getid)|Returns the Resource Manager's unique identifier for this node.|  
|[ITopologyNode::GetNext Method](#getnext)|Returns an interface to the next topology node in enumeration order.|  
|[ITopologyNode::GetNumaNode Method](#getnumanode)|Returns the Windows assigned NUMA node number to which this Resource Maanger node belongs.|  
  
## Remarks  
 This interface is typically utilized to walk the topology of the system as observed by the Resource Manager.  
  
## Inheritance Hierarchy  
 `ITopologyNode`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="getexecutionresourcecount"></a>  ITopologyNode::GetExecutionResourceCount Method  
 Returns the number of execution resources grouped together under this node.  
  
```
virtual unsigned int GetExecutionResourceCount() const = 0;
```  
  
### Return Value  
 The number of execution resources grouped together under this node.  
  
##  <a name="getfirstexecutionresource"></a>  ITopologyNode::GetFirstExecutionResource Method  
 Returns the first execution resource grouped under this node in enumeration order.  
  
```
virtual ITopologyExecutionResource *GetFirstExecutionResource() const = 0;
```  
  
### Return Value  
 The first execution resource grouped under this node in enumeration order.  
  
##  <a name="getid"></a>  ITopologyNode::GetId Method  
 Returns the Resource Manager's unique identifier for this node.  
  
```
virtual unsigned int GetId() const = 0;
```  
  
### Return Value  
 The Resource Manager's unique identifier for this node.  
  
### Remarks  
 The Concurrency Runtime represents hardware threads on the system in groups of processor nodes. Nodes are usually derived from the hardware topology of the system. For example, all processors on a specific socket or a specific NUMA node may belong to the same processor node. The Resource Manager assigns unique identifiers to these nodes starting with `0` up to and including `nodeCount - 1`, where `nodeCount` represents the total number of processor nodes on the system.  
  
 The count of nodes can be obtained from the function [GetProcessorNodeCount](concurrency-namespace-functions.md).  
  
##  <a name="getnext"></a>  ITopologyNode::GetNext Method  
 Returns an interface to the next topology node in enumeration order.  
  
```
virtual ITopologyNode *GetNext() const = 0;
```  
  
### Return Value  
 An interface to the next node in enumeration order. If there are no more nodes in enumeration order of the system topology, this method will return the value `NULL`.  
  
##  <a name="getnumanode"></a>  ITopologyNode::GetNumaNode Method  
 Returns the Windows assigned NUMA node number to which this Resource Maanger node belongs.  
  
```
virtual unsigned long GetNumaNode() const = 0;
```  
  
### Return Value  
 The Windows assigned NUMA node number to which this Resource Manager node belongs.  
  
### Remarks  
 A thread proxy running on a virtual processor root belonging to this node will have affinity to at least the NUMA node level for the NUMA node returned by this method.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
