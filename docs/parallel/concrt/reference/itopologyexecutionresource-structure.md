---
title: "ITopologyExecutionResource Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::ITopologyExecutionResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITopologyExecutionResource structure"
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
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
|[ITopologyExecutionResource::GetId Method](#getid)|Returns the Resource Manager's unique identifier for this execution resource.|  
|[ITopologyExecutionResource::GetNext Method](#getnext)|Returns an interface to the next execution resource in enumeration order.|  
  
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
