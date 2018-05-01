---
title: "CComFakeCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComFakeCriticalSection"
  - "CComFakeCriticalSection"
  - "ATL::CComFakeCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComFakeCriticalSection class"
ms.assetid: a4811b97-96bb-493b-ab9f-62822aeddb10
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComFakeCriticalSection Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComFakeCriticalSection Class](https://docs.microsoft.com/cpp/atl/reference/ccomfakecriticalsection-class).  
  
  
This class provides the same methods as [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) but does not provide a critical section.  
  
## Syntax  
  
```
class CComFakeCriticalSection
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComFakeCriticalSection::Init](#ccomfakecriticalsection__init)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Lock](#ccomfakecriticalsection__lock)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Term](#ccomfakecriticalsection__term)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Unlock](#ccomfakecriticalsection__unlock)|Does nothing since there is no critical section.|  
  
## Remarks  
 `CComFakeCriticalSection` mirrors the methods found in [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). However, `CComFakeCriticalSection` does not provide a critical section; therefore, its methods do nothing.  
  
 Typically, you use `CComFakeCriticalSection` through a `typedef` name, either `AutoCriticalSection` or `CriticalSection`. When using [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), both of these `typedef` names reference `CComFakeCriticalSection`. When using [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), they reference [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md) and `CComCriticalSection`, respectively.  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="ccomfakecriticalsection__init"></a>  CComFakeCriticalSection::Init  
 Does nothing since there is no critical section.  
  
```
HRESULT Init() throw();
```  
  
### Return Value  
 Returns S_OK.  
  
##  <a name="ccomfakecriticalsection__lock"></a>  CComFakeCriticalSection::Lock  
 Does nothing since there is no critical section.  
  
```
HRESULT Lock() throw();
```  
  
### Return Value  
 Returns S_OK.  
  
##  <a name="ccomfakecriticalsection__term"></a>  CComFakeCriticalSection::Term  
 Does nothing since there is no critical section.  
  
```
HRESULT Term() throw();
```  
  
### Return Value  
 Returns S_OK.  
  
##  <a name="ccomfakecriticalsection__unlock"></a>  CComFakeCriticalSection::Unlock  
 Does nothing since there is no critical section.  
  
```
HRESULT Unlock() throw();
```  
  
### Return Value  
 Returns S_OK.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)








