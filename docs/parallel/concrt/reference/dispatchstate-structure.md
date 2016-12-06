---
title: "DispatchState Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrtrm/concurrency::DispatchState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DispatchState structure"
ms.assetid: 8c52546e-1650-48a0-985f-7e4a0fc26a90
caps.latest.revision: 17
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
# DispatchState Structure
The `DispatchState` structure is used to transfer state to the `IExecutionContext::Dispatch` method. It describes the circumstances under which the `Dispatch` method is invoked on an `IExecutionContext` interface.  
  
## Syntax  
  
```
struct DispatchState;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[DispatchState::DispatchState Constructor](#ctor)|Constructs a new `DispatchState` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[DispatchState::m_dispatchStateSize Data Member](#m_dispatchstatesize)|Size of this structure, which is used for versioning.|  
|[DispatchState::m_fIsPreviousContextAsynchronouslyBlocked Data Member](#m_fispreviouscontextasynchronouslyblocked)|Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.|  
|[DispatchState::m_reserved Data Member](#m_reserved)|Bits reserved for future information passing.|  
  
## Inheritance Hierarchy  
 `DispatchState`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a>  DispatchState::DispatchState Constructor  
 Constructs a new `DispatchState` object.  
  
```
DispatchState();
```  
  
##  <a name="m_dispatchstatesize"></a>  DispatchState::m_dispatchStateSize Data Member  
 Size of this structure, which is used for versioning.  
  
```
unsigned long m_dispatchStateSize;
```  
  
##  <a name="m_fispreviouscontextasynchronouslyblocked"></a>  DispatchState::m_fIsPreviousContextAsynchronouslyBlocked Data Member  
 Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.  
  
```
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```  
  
##  <a name="m_reserved"></a>  DispatchState::m_reserved Data Member  
 Bits reserved for future information passing.  
  
```
unsigned int m_reserved : 31;
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
