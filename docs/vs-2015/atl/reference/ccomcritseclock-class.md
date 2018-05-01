---
title: "CComCritSecLock Class | Microsoft Docs"
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
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComCritSecLock Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComCritSecLock Class](https://docs.microsoft.com/cpp/atl/reference/ccomcritseclock-class).  
  
  
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
|[CComCritSecLock::CComCritSecLock](http://msdn.microsoft.com/library/6bea525f-736c-4658-8e15-ced12ac83ac6)|The constructor.|  
|[CComCritSecLock::~CComCritSecLock](http://msdn.microsoft.com/library/ae892bd2-d09e-4e81-ad69-c63b7294435d)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComCritSecLock::Lock](http://msdn.microsoft.com/library/d247c378-7d7a-49c0-8236-436d765c3a04)|Call this method to lock the critical section object.|  
|[CComCritSecLock::Unlock](http://msdn.microsoft.com/library/7298728d-cab7-4bb2-8c50-689c286e727a)|Call this method to unlock the critical section object.|  
  
## Remarks  
 Use this class to lock and unlock objects in a safer way than with the [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md) or [CComAutoCriticalSection Class](../../atl/reference/ccomautocriticalsection-class.md).  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomcritseclock__ccomcritseclock"></a>  CComCritSecLock::CComCritSecLock  
 The constructor.  
  
```
CComCritSecLock(TLock& cs, bool bInitialLock = true);
```  
  
### Parameters  
 *cs*  
 The critical section object.  
  
 `bInitialLock`  
 The initial lock state: **true** means locked.  
  
### Remarks  
 Initializes the critical section object.  
  
##  <a name="ccomcritseclock___dtorccomcritseclock"></a>  CComCritSecLock::~CComCritSecLock  
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




























