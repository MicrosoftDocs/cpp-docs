---
title: "CSingleLock Class"
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
ms.assetid: 7dae7288-8066-4a3e-85e0-78d28bfc6bc8
caps.latest.revision: 16
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
# CSingleLock Class
Represents the access-control mechanism used in controlling access to a resource in a multithreaded program.  
  
## Syntax  
  
```  
class CSingleLock  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSingleLock::CSingleLock](#csinglelock__csinglelock)|Constructs a `CSingleLock` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSingleLock::IsLocked](#csinglelock__islocked)|Determines if the object is locked.|  
|[CSingleLock::Lock](#csinglelock__lock)|Waits on a synchronization object.|  
|[CSingleLock::Unlock](#csinglelock__unlock)|Releases a synchronization object.|  
  
## Remarks  
 `CSingleLock` does not have a base class.  
  
 In order to use the synchronization classes [CSemaphore](../VS_visualcpp/CSemaphore-Class.md), [CMutex](../VS_visualcpp/CMutex-Class.md), [CCriticalSection](../VS_visualcpp/CCriticalSection-Class.md), and [CEvent](../VS_visualcpp/CEvent-Class.md), you must create either a `CSingleLock` or [CMultiLock](../VS_visualcpp/CMultiLock-Class.md) object to wait on and release the synchronization object. Use `CSingleLock` when you only need to wait on one object at a time. Use **CMultiLock** when there are multiple objects that you could use at a particular time.  
  
 To use a `CSingleLock` object, call its constructor inside a member function in the controlled resource's class. Then call the [IsLocked](#csinglelock__islocked) member function to determine if the resource is available. If it is, continue with the remainder of the member function. If the resource is unavailable, either wait for a specified amount of time for the resource to be released, or return failure. After use of the resource is complete, either call the [Unlock](#csinglelock__unlock) function if the `CSingleLock` object is to be used again, or allow the `CSingleLock` object to be destroyed.  
  
 `CSingleLock` objects require the presence of an object derived from [CSyncObject](../VS_visualcpp/CSyncObject-Class.md). This is usually a data member of the controlled resource's class. For more information on how to use `CSingleLock` objects, see the article [Multithreading: How to Use the Synchronization Classes](../VS_visualcpp/Multithreading--How-to-Use-the-Synchronization-Classes.md).  
  
## Inheritance Hierarchy  
 `CSingleLock`  
  
## Requirements  
 **Header:** afxmt.h  
  
##  <a name="csinglelock__csinglelock"></a>  CSingleLock::CSingleLock  
 Constructs a `CSingleLock` object.  
  
```  
explicit CSingleLock(  
    CSyncObject* pObject,  
    BOOL bInitialLock = FALSE  );  
```  
  
### Parameters  
 `pObject`  
 Points to the synchronization object to be accessed. Cannot be **NULL**.  
  
 `bInitialLock`  
 Specifies whether to initially attempt to access the supplied object.  
  
### Remarks  
 This function is generally called from within an access member function of the controlled resource.  
  
### Example  
 [!CODE [NVC_MFC_Utilities#19](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#19)]  
  
##  <a name="csinglelock__islocked"></a>  CSingleLock::IsLocked  
 Determines if the object associated with the `CSingleLock` object is nonsignaled (unavailable).  
  
```  
BOOL IsLocked();  
```  
  
### Return Value  
 Nonzero if the object is locked; otherwise 0.  
  
### Example  
 [!CODE [NVC_MFC_Utilities#20](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#20)]  
  
##  <a name="csinglelock__lock"></a>  CSingleLock::Lock  
 Call this function to gain access to the resource controlled by the synchronization object supplied to the `CSingleLock` constructor.  
  
```  
BOOL Lock( DWORD dwTimeOut = INFINITE  );  
```  
  
### Parameters  
 *dwTimeOut*  
 Specifies the amount of time to wait for the synchronization object to be available (signaled). If **INFINITE**, `Lock` will wait until the object is signaled before returning.  
  
### Return Value  
 Nonzero if the function was successful; otherwise 0.  
  
### Remarks  
 If the synchronization object is signaled, `Lock` will return successfully and the thread now owns the object. If the synchronization object is nonsignaled (unavailable), `Lock` will wait for the synchronization object to become signaled up to the number of milliseconds specified in the                         *dwTimeOut* parameter. If the synchronization object did not become signaled in the specified amount of time, `Lock` returns failure.  
  
### Example  
 [!CODE [NVC_MFC_Utilities#21](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#21)]  
  
##  <a name="csinglelock__unlock"></a>  CSingleLock::Unlock  
 Releases the synchronization object owned by `CSingleLock`.  
  
```  
BOOL Unlock();  
  
BOOL Unlock(  
    LONG lCount,  
    LPLONG lPrevCount = NULL  );  
```  
  
### Parameters  
 `lCount`  
 Number of accesses to release. Must be greater than 0. If the specified amount would cause the object's count to exceed its maximum, the count is not changed and the function returns **FALSE**.  
  
 `lPrevCount`  
 Points to a variable to receive the previous count of the synchronization object. If **NULL**, the previous count is not returned.  
  
### Return Value  
 Nonzero if the function was successful; otherwise 0.  
  
### Remarks  
 This function is called by `CSingleLock`'s destructor.  
  
 If you need to release more than one access count of a semaphore, use the second form of `Unlock` and specify the number of accesses to release.  
  
### Example  
 [!CODE [NVC_MFC_Utilities#21](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_Utilities#21)]  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CMultiLock Class](../VS_visualcpp/CMultiLock-Class.md)