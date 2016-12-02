---
title: "CComCritSecLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComCritSecLock"
  - "ATL.CComCritSecLock<TLock>"
  - "ATL::CComCritSecLock<TLock>"
  - "ATL.CComCritSecLock"
  - "CComCritSecLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCritSecLock class"
ms.assetid: 223152a1-86c3-4ef9-89a7-f455fe791b0e
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
# CComCritSecLock Class
This class provides methods for locking and unlocking a critical section object.  
  
## Syntax  
  
```
template<class TLock> class CComCritSecLock
```  
  
#### Parameters  
 *TLock*  
 The object to be locked and unlocked.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComCritSecLock::CComCritSecLock](#ccomcritseclock__ctor)|The constructor.|  
|[CComCritSecLock::~CComCritSecLock](#ccomcritseclock__dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComCritSecLock::Lock](#ccomcritseclock__lock)|Call this method to lock the critical section object.|  
|[CComCritSecLock::Unlock](#ccomcritseclock__unlock)|Call this method to unlock the critical section object.|  
  
## Remarks  
 Use this class to lock and unlock objects in a safer way than with the [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md) or [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md).  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomcritseclock__ctor"></a>  CComCritSecLock::CComCritSecLock  
 The constructor.  
  
```
CComCritSecLock(
    TLock& cs,  bool bInitialLock = true);
```  
  
### Parameters  
 *cs*  
 The critical section object.  
  
 `bInitialLock`  
 The initial lock state: **true** means locked.  
  
### Remarks  
 Initializes the critical section object.  
  
##  <a name="ccomcritseclock__dtor"></a>  CComCritSecLock::~CComCritSecLock  
 The destructor.  
  
```
~CComCritSecLock() throw();
```  
  
### Remarks  
 Unlocks the critical section object.  
  
##  <a name="ccomcritseclock__lock"></a>  CComCritSecLock::Lock  
 Call this method to lock the critical section object.  
  
```
HRESULT Lock() throw();
```  
  
### Return Value  
 Returns S_OK if the object has successfully been locked, or an error HRESULT on failure.  
  
### Remarks  
 If the object is already locked, an ASSERT error will occur in debug builds.  
  
##  <a name="ccomcritseclock__unlock"></a>  CComCritSecLock::Unlock  
 Call this method to unlock the critical section object.  
  
```
void Unlock() throw();
```  
  
### Remarks  
 If the object is already unlocked, an ASSERT error will occur in debug builds.  
  
## See Also  
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md)

















