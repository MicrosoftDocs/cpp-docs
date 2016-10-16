---
title: "scheduler_ptr Structure (Concurrency Runtime)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "pplinterface/concurrency::scheduler_ptr"
dev_langs: 
  - "C++"
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
caps.latest.revision: 7
ms.author: "mithom"
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
# scheduler_ptr Structure (Concurrency Runtime)
Represents a pointer to a scheduler. This class exists to allow the the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer.  
  
## Syntax  
  
```
struct scheduler_ptr;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::scheduler_ptr Constructor (Concurrency Runtime)](#scheduler_ptr__scheduler_ptr_constructor__concurrency_runtime_)|Overloaded. Creates a scheduler pointer from shared_ptr to scheduler|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::get Method (Concurrency Runtime)](#scheduler_ptr__get_method__concurrency_runtime_)|Returns the raw pointer to the scheduler|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::operator bool Operator (Concurrency Runtime)](#scheduler_ptr__operator_bool_operator__concurrency_runtime_)|Test whether the scheduler pointer is non-null|  
|[scheduler_ptr::operator-&gt; Operator (Concurrency Runtime)](#scheduler_ptr__operator-_gt__operator__concurrency_runtime_)|Behave like a pointer|  
  
## Inheritance Hierarchy  
 `scheduler_ptr`  
  
## Requirements  
 **Header:** pplinterface.h  
  
 **Namespace:** concurrency  
  
##  <a name="scheduler_ptr__get_method__concurrency_runtime_"></a>  scheduler_ptr::get Method (Concurrency Runtime)  
 Returns the raw pointer to the scheduler  
  
```
scheduler_interface* get() const;
```  
  
### Return Value  
  
##  <a name="scheduler_ptr__operator_bool_operator__concurrency_runtime_"></a>  scheduler_ptr::operator bool Operator (Concurrency Runtime)  
 Test whether the scheduler pointer is non-null  
  
```
    operatorbool() const;
```  
  
##  <a name="scheduler_ptr__operator-_gt__operator__concurrency_runtime_"></a>  scheduler_ptr::operator-&gt; Operator (Concurrency Runtime)  
 Behave like a pointer  
  
```
scheduler_interface* operator->() const;
```  
  
### Return Value  
  
##  <a name="scheduler_ptr__scheduler_ptr_constructor__concurrency_runtime_"></a>  scheduler_ptr::scheduler_ptr Constructor (Concurrency Runtime)  
 Creates a scheduler pointer from shared_ptr to scheduler  
  
```
explicit scheduler_ptr(std::shared_ptr<scheduler_interface> scheduler);

explicit scheduler_ptr(_In_opt_ scheduler_interface* pScheduler);
```  
  
### Parameters  
 `scheduler`  
 `pScheduler`  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)

