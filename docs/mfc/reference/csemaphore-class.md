---
title: "CSemaphore Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSemaphore"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "synchronization objects, semaphores"
  - "CSemaphore class"
  - "semaphores"
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
caps.latest.revision: 23
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
# CSemaphore Class
An object of class `CSemaphore` represents a "semaphore" — a synchronization object that allows a limited number of threads in one or more processes to access a Maintains a count of the number of threads currently accessing a specified resource.  
  
## Syntax  
  
```  
class CSemaphore : public CSyncObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSemaphore::CSemaphore](#csemaphore__csemaphore)|Constructs a `CSemaphore` object.|  
  
## Remarks  
 Semaphores are useful in controlling access to a shared resource that can only support a limited number of users. The current count of the `CSemaphore` object is the number of additional users allowed. When the count reaches zero, all attempts to use the resource controlled by the **CSemaphore** object will be inserted into a system queue and wait until they either time out or the count rises above 0. The maximum number of users who can access the controlled resource at one time is specified during construction of the `CSemaphore` object.  
  
 To use a **CSemaphore** object, construct the `CSemaphore` object when it is needed. Specify the name of the semaphore you wish to wait on, and that your application should initially own it. You can then access the semaphore when the constructor returns. Call [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#csyncobject__unlock) when you are done accessing the controlled resource.  
  
 An alternative method for using `CSemaphore` objects is to add a variable of type `CSemaphore` as a data member to the class you wish to control. During construction of the controlled object, call the constructor of the `CSemaphore` data member specifying the initial access count, maximum access count, name of the semaphore (if it will be used across process boundaries), and desired security attributes.  
  
 To access resources controlled by `CSemaphore` objects in this manner, first create a variable of either type [CSingleLock](../../mfc/reference/csinglelock-class.md) or type [CMultiLock](../../mfc/reference/cmultilock-class.md) in your resource's access member function. Then call the lock object's `Lock` member function (for example, [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#csinglelock__lock)). At this point, your thread will either gain access to the resource, wait for the resource to be released and gain access, or wait for the resource to be released and time out, failing to gain access to the resource. In any case, your resource has been accessed in a thread-safe manner. To release the resource, use the lock object's `Unlock` member function (for example, [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#csinglelock__unlock)), or allow the lock object to fall out of scope.  
  
 Alternatively, you can create a **CSemaphore** object stand-alone, and access it explicitly before attempting to access the controlled resource. This method, while clearer to someone reading your source code, is more prone to error.  
  
 For more information on how to use **CSemaphore** objects, see the article [Multithreading: How to Use the Synchronization Classes](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CSyncObject](../../mfc/reference/csyncobject-class.md)  
  
 `CSemaphore`  
  
## Requirements  
 **Header:** afxmt.h  
  
##  <a name="csemaphore__csemaphore"></a>  CSemaphore::CSemaphore  
 Constructs a named or unnamed `CSemaphore` object.  
  
```  
CSemaphore(
    LONG lInitialCount = 1,  
    LONG lMaxCount = 1,  
    LPCTSTR pstrName = NULL,  
    LPSECURITY_ATTRIBUTES lpsaAttributes = NULL);
```  
  
### Parameters  
 *lInitialCount*  
 The initial usage count for the semaphore. Must be greater than or equal to 0, and less than or equal to `lMaxCount`.  
  
 `lMaxCount`  
 The maximum usage count for the semaphore. Must be greater than 0.  
  
 `pstrName`  
 The name of the semaphore. Must be supplied if the semaphore will be accessed across process boundaries. If `NULL,` the object will be unnamed. If the name matches an existing semaphore, the constructor builds a new `CSemaphore` object which references the semaphore of that name. If the name matches an existing synchronization object that is not a semaphore, the construction will fail.  
  
 *lpsaAttributes*  
 Security attributes for the semaphore object. For a full description of this structure, see [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Remarks  
 To access or release a `CSemaphore` object, create a [CMultiLock](../../mfc/reference/cmultilock-class.md) or [CSingleLock](../../mfc/reference/csinglelock-class.md) object and call its [Lock](../../mfc/reference/csinglelock-class.md#csinglelock__lock) and [Unlock](../../mfc/reference/csinglelock-class.md#csinglelock__unlock) member functions.  
  
> [!IMPORTANT]
>  After creating the `CSemaphore` object, use [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) to ensure that the mutex did not already exist. If the mutex did exist unexpectedly, it may indicate a rogue process is squatting and may be intending to use the mutex maliciously. In this case, the recommended security-conscious procedure is to close the handle and continue as if there was a failure in creating the object.  
  
## See Also  
 [CSyncObject Class](../../mfc/reference/csyncobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



