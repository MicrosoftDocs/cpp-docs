---
title: "CComSimpleThreadAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComSimpleThreadAllocator"
  - "ATL::CComSimpleThreadAllocator"
  - "ATL.CComSimpleThreadAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading [ATL], selecting threads"
  - "ATL threads"
  - "CComSimpleThreadAllocator class"
  - "ATL threads, allocating"
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
caps.latest.revision: 19
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
# CComSimpleThreadAllocator Class
This class manages thread selection for the class `CComAutoThreadModule`.  
  
## Syntax  
  
```
class CComSimpleThreadAllocator
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComSimpleThreadAllocator::GetThread](#ccomsimplethreadallocator__getthread)|Selects a thread.|  
  
## Remarks  
 `CComSimpleThreadAllocator` manages thread selection for [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread` simply cycles through each thread and returns the next one in the sequence.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomsimplethreadallocator__getthread"></a>  CComSimpleThreadAllocator::GetThread  
 Selects a thread by specifying the next thread in the sequence.  
  
```
int GetThread(
    CComApartment* /* pApt */,  int nThreads);
```  
  
### Parameters  
 `pApt`  
 Not used in ATL's default implementation.  
  
 `nThreads`  
 The maximum number of threads in the EXE module.  
  
### Return Value  
 An integer between zero and ( `nThreads` – 1). Identifies one of the threads in the EXE module.  
  
### Remarks  
 You can override `GetThread` to provide a different method of selection or to make use of the `pApt` parameter.  
  
 `GetThread` is called by [CComAutoThreadModule::CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#ccomautothreadmodule__createinstance).  
  
## See Also  
 [CComApartment Class](../../atl/reference/ccomapartment-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
