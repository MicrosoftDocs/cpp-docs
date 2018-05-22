---
title: "DispatchState Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# DispatchState Structure
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The `DispatchState` structure is used to transfer state to the `IExecutionContext::Dispatch` method. It describes the circumstances under which the `Dispatch` method is invoked on an `IExecutionContext` interface.  
  
## Syntax  
  
```
struct DispatchState;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[DispatchState::DispatchState Constructor](#dispatchstate__dispatchstate_constructor)|Constructs a new `DispatchState` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[DispatchState::m_dispatchStateSize Data Member](#dispatchstate__m_dispatchstatesize_data_member)|Size of this structure, which is used for versioning.|  
|[DispatchState::m_fIsPreviousContextAsynchronouslyBlocked Data Member](#dispatchstate__m_fispreviouscontextasynchronouslyblocked_data_member)|Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.|  
|[DispatchState::m_reserved Data Member](#dispatchstate__m_reserved_data_member)|Bits reserved for future information passing.|  
  
## Inheritance Hierarchy  
 `DispatchState`  
  
## Requirements  
 **Header:** concrtrm.h  
  
 **Namespace:** concurrency  
  
##  <a name="dispatchstate__dispatchstate_constructor"></a>  DispatchState::DispatchState Constructor  
 Constructs a new `DispatchState` object.  
  
```
DispatchState();
```  
  
##  <a name="dispatchstate__m_dispatchstatesize_data_member"></a>  DispatchState::m_dispatchStateSize Data Member  
 Size of this structure, which is used for versioning.  
  
```
unsigned long m_dispatchStateSize;
```  
  
##  <a name="dispatchstate__m_fispreviouscontextasynchronouslyblocked_data_member"></a>  DispatchState::m_fIsPreviousContextAsynchronouslyBlocked Data Member  
 Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.  
  
```
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```  
  
##  <a name="dispatchstate__m_reserved_data_member"></a>  DispatchState::m_reserved Data Member  
 Bits reserved for future information passing.  
  
```
unsigned int m_reserved : 31;
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
