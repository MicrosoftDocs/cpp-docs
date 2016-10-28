---
title: "CComFakeCriticalSection Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 14
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
# CComFakeCriticalSection Class
This class provides the same methods as [CComCriticalSection](../atl/ccomcriticalsection-class.md) but does not provide a critical section.  
  
## Syntax  
  
```
class CComFakeCriticalSection
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComFakeCriticalSection::Init](../Topic/CComFakeCriticalSection::Init.md)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Lock](../Topic/CComFakeCriticalSection::Lock.md)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Term](../Topic/CComFakeCriticalSection::Term.md)|Does nothing since there is no critical section.|  
|[CComFakeCriticalSection::Unlock](../Topic/CComFakeCriticalSection::Unlock.md)|Does nothing since there is no critical section.|  
  
## Remarks  
 `CComFakeCriticalSection` mirrors the methods found in [CComCriticalSection](../atl/ccomcriticalsection-class.md). However, `CComFakeCriticalSection` does not provide a critical section; therefore, its methods do nothing.  
  
 Typically, you use `CComFakeCriticalSection` through a `typedef` name, either `AutoCriticalSection` or `CriticalSection`. When using [CComSingleThreadModel](../atl/ccomsinglethreadmodel-class.md) or [CComMultiThreadModelNoCS](../atl/ccommultithreadmodelnocs-class.md), both of these `typedef` names reference `CComFakeCriticalSection`. When using [CComMultiThreadModel](../atl/ccommultithreadmodel-class.md), they reference [CComAutoCriticalSection](../atl/ccomautocriticalsection-class.md) and `CComCriticalSection`, respectively.  
  
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
 [Class Overview](../atl/atl-class-overview.md)

