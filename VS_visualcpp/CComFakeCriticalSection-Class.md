---
title: "CComFakeCriticalSection Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: a4811b97-96bb-493b-ab9f-62822aeddb10
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CComFakeCriticalSection Class
This class provides the same methods as [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md) but does not provide a critical section.  
  
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
 `CComFakeCriticalSection` mirrors the methods found in [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md). However, `CComFakeCriticalSection` does not provide a critical section; therefore, its methods do nothing.  
  
 Typically, you use `CComFakeCriticalSection` through a `typedef` name, either `AutoCriticalSection` or `CriticalSection`. When using [CComSingleThreadModel](../VS_visualcpp/CComSingleThreadModel-Class.md) or [CComMultiThreadModelNoCS](../VS_visualcpp/CComMultiThreadModelNoCS-Class.md), both of these `typedef` names reference `CComFakeCriticalSection`. When using [CComMultiThreadModel](../VS_visualcpp/CComMultiThreadModel-Class.md), they reference [CComAutoCriticalSection](../VS_visualcpp/CComAutoCriticalSection-Class.md) and `CComCriticalSection`, respectively.  
  
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
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)