---
title: "scheduler_ptr Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::get", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::operator bool"]
dev_langs: ["C++"]
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# scheduler_ptr Structure
Represents a pointer to a scheduler. This class exists to allow the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer.  
  
## Syntax  
  
```
struct scheduler_ptr;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::scheduler_ptr](#ctor)|Overloaded. Creates a scheduler pointer from shared_ptr to scheduler|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::get](#get)|Returns the raw pointer to the scheduler|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::operator bool](#operator_bool)|Test whether the scheduler pointer is non-null|  
|[scheduler_ptr::operator-&gt;](#operator_ptr)|Behave like a pointer|  
  
## Inheritance Hierarchy  
 `scheduler_ptr`  
  
## Requirements  
 **Header:** pplinterface.h  
  
 **Namespace:** concurrency  
  
##  <a name="get"></a>  scheduler_ptr::get Method  
 Returns the raw pointer to the scheduler  
  
```
scheduler_interface* get() const;
```  
  
### Return Value  
  
##  <a name="operator_bool"></a>  scheduler_ptr::operator bool   
 Test whether the scheduler pointer is non-null  
  
```operator bool() const;
```  
  
##  <a name="operator_ptr"></a>  scheduler_ptr::operator-&gt;   
 Behave like a pointer  
  
```
scheduler_interface* operator->() const;
```  
  
### Return Value  
  
##  <a name="ctor"></a>  scheduler_ptr::scheduler_ptr Constructor  
 Creates a scheduler pointer from shared_ptr to scheduler  
  
```
explicit scheduler_ptr(std::shared_ptr<scheduler_interface> scheduler);

explicit scheduler_ptr(_In_opt_ scheduler_interface* pScheduler);
```  
  
### Parameters  
 `scheduler`  
 `pScheduler`  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
