---
title: "scheduler_ptr Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplinterface/concurrency::scheduler_ptr"
dev_langs: 
  - "C++"
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
caps.latest.revision: 8
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
# scheduler_ptr Structure
Represents a pointer to a scheduler. This class exists to allow the the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer.  
  
## Syntax  
  
```
struct scheduler_ptr;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::scheduler_ptr Constructor](#ctor)|Overloaded. Creates a scheduler pointer from shared_ptr to scheduler|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::get Method](#get)|Returns the raw pointer to the scheduler|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_ptr::operator bool Operator](#operator_bool)|Test whether the scheduler pointer is non-null|  
|[scheduler_ptr::operator-&gt; Operator](#operator_ptr)|Behave like a pointer|  
  
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
