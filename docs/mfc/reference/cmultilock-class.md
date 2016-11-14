---
title: "CMultiLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiLock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiLock class"
  - "synchronization objects, access control"
ms.assetid: c5b7c78b-1f81-4387-b7dd-2c813c5b6b61
caps.latest.revision: 20
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
# CMultiLock Class
Represents the access-control mechanism used in controlling access to resources in a multithreaded program.  
  
## Syntax  
  
```  
class CMultiLock  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMultiLock::CMultiLock](#cmultilock__cmultilock)|Constructs a `CMultiLock` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMultiLock::IsLocked](#cmultilock__islocked)|Determines if a specific synchronization object in the array is locked.|  
|[CMultiLock::Lock](#cmultilock__lock)|Waits on the array of synchronization objects.|  
|[CMultiLock::Unlock](#cmultilock__unlock)|Releases any owned synchronization objects.|  
  
## Remarks  
 `CMultiLock` does not have a base class.  
  
 To use the synchronization classes [CSemaphore](../../mfc/reference/csemaphore-class.md), [CMutex](../../mfc/reference/cmutex-class.md), and [CEvent](../../mfc/reference/cevent-class.md), you can create either a **CMultiLock** or [CSingleLock](../../mfc/reference/csinglelock-class.md) object to wait on and release the synchronization object. Use **CMultiLock** when there are multiple objects that you could use at a particular time. Use `CSingleLock` when you only need to wait on one object at a time.  
  
 To use a **CMultiLock** object, first create an array of the synchronization objects that you wish to wait on. Next, call the **CMultiLock** object's constructor inside a member function in the controlled resource's class. Then call the [Lock](#cmultilock__lock) member function to determine if a resource is available (signaled). If one is, continue with the remainder of the member function. If no resource is available, either wait for a specified amount of time for a resource to be released, or return failure. After use of a resource is complete, either call the [Unlock](#cmultilock__unlock) function if the **CMultiLock** object is to be used again, or allow the **CMultiLock** object to be destroyed.  
  
 **CMultiLock** objects are most useful when a thread has a large number of `CEvent` objects it can respond to. Create an array containing all the `CEvent` pointers, and call `Lock`. This will cause the thread to wait until one of the events is signaled.  
  
 For more information on how to use **CMultiLock** objects, see the article [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Inheritance Hierarchy  
 `CMultiLock`  
  
## Requirements  
 **Header:** afxmt.h  
  
##  <a name="cmultilock__cmultilock"></a>  CMultiLock::CMultiLock  
 Constructs a **CMultiLock** object.  
  
```  
CMultiLock(
    CSyncObject* ppObjects [ ],  
    DWORD dwCount,  
    BOOL bInitialLock = FALSE);
```  
  
### Parameters  
 `ppObjects`  
 Array of pointers to the synchronization objects to be waited on. Cannot be **NULL**.  
  
 `dwCount`  
 Number of objects in `ppObjects`. Must be greater than 0.  
  
 `bInitialLock`  
 Specifies whether to initially attempt to access any of the supplied objects.  
  
### Remarks  
 This function is called after creating the array of synchronization objects to be waited on. It is usually called from within the thread that must wait for one of the synchronization objects to become available.  
  
##  <a name="cmultilock__islocked"></a>  CMultiLock::IsLocked  
 Determines if the specified object is nonsignaled (unavailable).  
  
```  
BOOL IsLocked(DWORD dwItem);
```  
  
### Parameters  
 *dwItem*  
 The index in the array of objects corresponding to the object whose state is being queried.  
  
### Return Value  
 Nonzero if the specified object is locked; otherwise 0.  
  
##  <a name="cmultilock__lock"></a>  CMultiLock::Lock  
 Call this function to gain access to one or more of the resources controlled by the synchronization objects supplied to the **CMultiLock** constructor.  
  
```  
DWORD Lock(
    DWORD dwTimeOut = INFINITE,  
    BOOL bWaitForAll = TRUE,  
    DWORD dwWakeMask = 0);
```  
  
### Parameters  
 *dwTimeOut*  
 Specifies the amount of time to wait for the synchronization object to be available (signaled). If **INFINITE**, `Lock` will wait until the object is signaled before returning.  
  
 `bWaitForAll`  
 Specifies whether all objects waited on must become signaled at the same time before returning. If **FALSE**, `Lock` will return when any one of the objects waited on is signaled.  
  
 `dwWakeMask`  
 Specifies other conditions that are allowed to abort the wait. For a full list of the available options for this parameter, see [MsgWaitForMultipleObjects](http://msdn.microsoft.com/library/windows/desktop/ms684242) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 If `Lock` fails, it returns – 1. If successful, it returns one of the following values:  
  
-   Between **WAIT_OBJECT_0** and **WAIT_OBJECT_0** + (number of objects – 1)  
  
     If `bWaitForAll` is **TRUE**, all objects are signaled (available). If `bWaitForAll` is **FALSE**, the return value – **WAIT_OBJECT_0** is the index in the array of objects of the object that is signaled (available).  
  
- **WAIT_OBJECT_0** + (number of objects)  
  
     An event specified in `dwWakeMask` is available in the thread's input queue.  
  
-   Between **WAIT_ABANDONED_0** and **WAIT_ABANDONED_0** + (number of objects – 1)  
  
     If `bWaitForAll` is **TRUE**, all objects are signaled, and at least one of the objects is an abandoned mutex object. If `bWaitForAll` is **FALSE**, the return value – **WAIT_ABANDONED_0** is the index in the array of objects of the abandoned mutex object that satisfied the wait.  
  
- **WAIT_TIMEOUT**  
  
     The timeout interval specified in *dwTimeOut* expired without the wait succeeding.  
  
### Remarks  
 If `bWaitForAll` is **TRUE**, `Lock` will return successfully as soon as all the synchronization objects become signaled simultaneously. If `bWaitForAll` is **FALSE**, `Lock` will return as soon as one or more of the synchronization objects becomes signaled.  
  
 If `Lock` is not able to return immediately, it will wait for no more than the number of milliseconds specified in the *dwTimeOut* parameter before returning. If *dwTimeOut* is **INFINITE**, `Lock` will not return until access to an object is gained or a condition specified in `dwWakeMask` was met. Otherwise, if `Lock` was able to acquire a synchronization object, it will return successfully; if not, it will return failure.  
  
##  <a name="cmultilock__unlock"></a>  CMultiLock::Unlock  
 Releases the synchronization object owned by `CMultiLock`.  
  
```  
BOOL Unlock();

 
BOOL Unlock(
    LONG lCount,  
    LPLONG lPrevCount = NULL);
```  
  
### Parameters  
 `lCount`  
 Number of reference counts to release. Must be greater than 0. If the specified amount would cause the object's count to exceed its maximum, the count is not changed and the function returns **FALSE**.  
  
 `lPrevCount`  
 Points to a variable to receive the previous count for the synchronization object. If **NULL**, the previous count is not returned.  
  
### Return Value  
 Nonzero if the function was successful; otherwise 0.  
  
### Remarks  
 This function is called by `CMultiLock`'s destructor.  
  
 The first form of `Unlock` tries to unlock the synchronization object managed by `CMultiLock`. The second form of `Unlock` tries to unlock the `CSemaphore` objects owned by `CMultiLock`. If `CMultiLock` does not own any locked `CSemaphore` object, the function returns **FALSE**; otherwise, it returns **TRUE**. `lCount` and `lpPrevCount` are exactly the same as the parameters of [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#csinglelock__unlock). The second form of `Unlock` is rarely applicable to multilock situations.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



