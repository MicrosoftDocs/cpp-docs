---
title: "CComSafeDeleteCriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComSafeDeleteCriticalSection"
  - "ATL::CComSafeDeleteCriticalSection"
  - "ATL.CComSafeDeleteCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComSafeDeleteCriticalSection class"
ms.assetid: 4d2932c4-ba8f-48ec-8664-1db8bed01314
caps.latest.revision: 18
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
# CComSafeDeleteCriticalSection Class
This class provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```
class CComSafeDeleteCriticalSection : public CComCriticalSection
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection__ccomsafedeletecriticalsection)|The constructor.|  
|[CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection](#ccomsafedeletecriticalsection___dtorccomsafedeletecriticalsection)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComSafeDeleteCriticalSection::Init](#ccomsafedeletecriticalsection__init)|Creates and initializes a critical section object.|  
|[CComSafeDeleteCriticalSection::Lock](#ccomsafedeletecriticalsection__lock)|Obtains ownership of the critical section object.|  
|[CComSafeDeleteCriticalSection::Term](#ccomsafedeletecriticalsection__term)|Releases system resources used by the critical section object.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized)|Flags whether the internal **CRITICAL_SECTION** object has been initialized.|  
  
## Remarks  
 `CComSafeDeleteCriticalSection` derives from the class [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md). However, `CComSafeDeleteCriticalSection` provides additional safety mechanisms over [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).  
  
 When an instance of `CComSafeDeleteCriticalSection` goes out of scope or is explicitly deleted from memory, the underlying critical section object will automatically be cleaned up if it is still valid. In addition, the [CComSafeDeleteCriticalSection::Term](#ccomsafedeletecriticalsection__term) method will exit gracefully if the underlying critical section object has not yet been allocated or has already been released from memory.  
  
 See [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) for more information on critical section helper classes.  
  
## Inheritance Hierarchy  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComSafeDeleteCriticalSection`  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="ccomsafedeletecriticalsection__ccomsafedeletecriticalsection"></a>  CComSafeDeleteCriticalSection::CComSafeDeleteCriticalSection  
 The constructor.  
  
```
CComSafeDeleteCriticalSection();
```  
  
### Remarks  
 Sets the [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) data member to **false**.  
  
##  <a name="ccomsafedeletecriticalsection___dtorccomsafedeletecriticalsection"></a>  CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection  
 The destructor.  
  
```
~CComSafeDeleteCriticalSection() throw();
```  
  
### Remarks  
 Releases the internal **CRITICAL_SECTION** object from memory if the [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) data member is set to **true**.  
  
##  <a name="ccomsafedeletecriticalsection__init"></a>  CComSafeDeleteCriticalSection::Init  
 Calls the base class implementation of [Init](/visualstudio/debugger/init) and sets [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) to **true** if successful.  
  
```
HRESULT Init() throw();
```  
  
### Return Value  
 Returns the result of [CComCriticalSection::Init](../../atl/reference/ccomcriticalsection-class.md#ccomcriticalsection__init).  
  
##  <a name="ccomsafedeletecriticalsection__lock"></a>  CComSafeDeleteCriticalSection::Lock  
Calls the base class implementation of [Lock](ccomcriticalsection-class.md#ccomcriticalsection__lock).  

  
```
HRESULT Lock();
```  
  
### Return Value  
 Returns the result of [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#ccomcriticalsection__lock).  
  
### Remarks  
 This method assumes the [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) data member is set to **true** upon entry. An assertion is generated in Debug builds if this condidtion is not met.  
  
 For more information on the behavior of the function, refer to [CComCriticalSection::Lock](../../atl/reference/ccomcriticalsection-class.md#ccomcriticalsection__lock).  
  
##  <a name="ccomsafedeletecriticalsection__m_binitialized"></a>  CComSafeDeleteCriticalSection::m_bInitialized  
 Flags whether the internal **CRITICAL_SECTION** object has been initialized.  
  
```
bool m_bInitialized;
```  
  
### Remarks  
 The **m_bInitialized** data member is used to track validity of the underlying **CRITICAL_SECTION** object associated with the [CComSafeDeleteCriticalSection](../../atl/reference/ccomsafedeletecriticalsection-class.md) class. The underlying **CRITICAL_SECTION** object will not be attempted to be released from memory if this flag is not set to **true**.  
  
##  <a name="ccomsafedeletecriticalsection__term"></a>  CComSafeDeleteCriticalSection::Term  
 Calls the base class implementation of [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#ccomcriticalsection__term) if the internal **CRITICAL_SECTION** object is valid.  
  
```
HRESULT Term() throw();
```  
  
### Return Value  
 Returns the result of [CComCriticalSection::Term](../../atl/reference/ccomcriticalsection-class.md#ccomcriticalsection__term), or **S_OK** if [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) was set to **false** upon entry.  
  
### Remarks  
 It is safe to call this method even if the internal **CRITICAL_SECTION** object is not valid. The destructor of this class calls this method if the [m_bInitialized](#ccomsafedeletecriticalsection__m_binitialized) data member is set to **true**.  
  
## See Also  
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
