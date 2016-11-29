---
title: "CComCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComCriticalSection"
  - "CComCriticalSection"
  - "ATL::CComCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCriticalSection class"
ms.assetid: 44e1edd2-90be-4bfe-9739-58e8b419e7d1
caps.latest.revision: 21
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
# CComCriticalSection Class
This class provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```
class CComCriticalSection
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComCriticalSection::CComCriticalSection](#ccomcriticalsection__ccomcriticalsection)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComCriticalSection::Init](#ccomcriticalsection__init)|Creates and initializes a critical section object.|  
|[CComCriticalSection::Lock](#ccomcriticalsection__lock)|Obtains ownership of the critical section object.|  
|[CComCriticalSection::Term](#ccomcriticalsection__term)|Releases system resources used by the critical section object.|  
|[CComCriticalSection::Unlock](#ccomcriticalsection__unlock)|Releases ownership of the critical section object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CComCriticalSection::m_sec](#ccomcriticalsection__m_sec)|A **CRITICAL_SECTION** object.|  
  
## Remarks  
 `CComCriticalSection` is similar to class [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md), except that you must explicitly initialize and release the critical section.  
  
 Typically, you use `CComCriticalSection` through the `typedef` name [CriticalSection](ccommultithreadmodel-class.md#ccommultithreadmodel__criticalsection). This name references `CComCriticalSection` when [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) is being used.  

  
 See [CComCritSecLock Class](../../atl/reference/ccomcritseclock-class.md) for a safer way to use this class than calling `Lock` and `Unlock` directly.  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="ccomcriticalsection__ccomcriticalsection"></a>  CComCriticalSection::CComCriticalSection  
 The constructor.  
  
```
CComCriticalSection() throw();
```  
  
### Remarks  
 Sets the [m_sec](#ccomcriticalsection__m_sec) data member to NULL **.**  
  
##  <a name="ccomcriticalsection__init"></a>  CComCriticalSection::Init  
 Calls the Win32 function [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), which initializes the critical section object contained in the [m_sec](#ccomcriticalsection__m_sec) data member.  
  
```
HRESULT Init() throw();
```  
  
### Return Value  
 Returns `S_OK` on success, **E_OUTOFMEMORY** or **E_FAIL** on failure.  
  
##  <a name="ccomcriticalsection__lock"></a>  CComCriticalSection::Lock  
 Calls the Win32 function [EnterCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682608), which waits until the thread can take ownership of the critical section object contained in the [m_sec](#ccomcriticalsection__m_sec) data member.  
  
```
HRESULT Lock() throw();
```  
  
### Return Value  
 Returns `S_OK` on success, **E_OUTOFMEMORY** or **E_FAIL** on failure.  
  
### Remarks  
 The critical section object must first be initialized with a call to the [Init](#ccomcriticalsection__init) method. When the protected code has finished executing, the thread must call [Unlock](#ccomcriticalsection__unlock) to release ownership of the critical section.  
  
##  <a name="ccomcriticalsection__m_sec"></a>  CComCriticalSection::m_sec  
 Contains a critical section object that is used by all `CComCriticalSection` methods.  
  
```
CRITICAL_SECTION m_sec;
```  
  
##  <a name="ccomcriticalsection__term"></a>  CComCriticalSection::Term  
 Calls the Win32 function [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), which releases all resources used by the critical section object contained in the [m_sec](#ccomcriticalsection__m_sec) data member.  
  
```
HRESULT Term() throw();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Once `Term` has been called, the critical section can no longer be used for synchronization.  
  
##  <a name="ccomcriticalsection__unlock"></a>  CComCriticalSection::Unlock  
 Calls the Win32 function [LeaveCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms684169), which releases ownership of the critical section object contained in the [m_sec](#ccomcriticalsection__m_sec) data member.  
  
```
HRESULT Unlock() throw();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To first obtain ownership, the thread must call the [Lock](#ccomcriticalsection__lock) method. Each call to `Lock` requires a corresponding call to `Unlock` to release ownership of the critical section.  
  
## See Also  
 [CComFakeCriticalSection Class](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComCritSecLock Class](../../atl/reference/ccomcritseclock-class.md)
