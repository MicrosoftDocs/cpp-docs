---
title: "CComObjectNoLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComObjectNoLock"
  - "ATL::CComObjectNoLock"
  - "ATL.CComObjectNoLock<Base>"
  - "CComObjectNoLock"
  - "ATL::CComObjectNoLock<Base>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComObjectNoLock class"
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
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
# CComObjectNoLock Class
This class implements **IUnknown** for a nonaggregated object, but does not increment the module lock count in the constructor.  
  
## Syntax  
  
```
template<class Base>  class CComObjectNoLock :  public Base
```  
  
#### Parameters  
 `Base`  
 Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interface you want to support on the object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectNoLock::CComObjectNoLock](#ccomobjectnolock__ccomobjectnolock)|Constructor.|  
|[CComObjectNoLock::~CComObjectNoLock](#ccomobjectnolock___dtorccomobjectnolock)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectNoLock::AddRef](#ccomobjectnolock__addref)|Increments the reference count on the object.|  
|[CComObjectNoLock::QueryInterface](#ccomobjectnolock__queryinterface)|Returns a pointer to the requested interface.|  
|[CComObjectNoLock::Release](#ccomobjectnolock__release)|Decrements the reference count on the object.|  
  
## Remarks  
 `CComObjectNoLock` is similar to [CComObject](../../atl/reference/ccomobject-class.md) in that it implements [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) for a nonaggregated object; however, `CComObjectNoLock` does not increment the module lock count in the constructor.  
  
 ATL uses `CComObjectNoLock` internally for class factories. In general, you will not use this class directly.  
  
## Inheritance Hierarchy  
 `Base`  
  
 `CComObjectNoLock`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ccomobjectnolock__addref"></a>  CComObjectNoLock::AddRef  
 Increments the reference count on the object.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### Return Value  
 A value that may be useful for diagnostics or testing.  
  
##  <a name="ccomobjectnolock__ccomobjectnolock"></a>  CComObjectNoLock::CComObjectNoLock  
 The constructor. Unlike [CComObject](../../atl/reference/ccomobject-class.md), does not increment the module lock count.  
  
```
CComObjectNoLock(void* = NULL);
```  
  
### Parameters  
 **void\***  
 [in] This unnamed parameter is not used. It exists for symmetry with other **CCom***XXX*`Object`*XXX* constructors.  
  
##  <a name="ccomobjectnolock___dtorccomobjectnolock"></a>  CComObjectNoLock::~CComObjectNoLock  
 The destructor.  
  
```
~CComObjectNoLock();
```  
  
### Remarks  
 Frees all allocated resources and calls [FinalRelease](ccomobjectrootex-class.md#ccomobjectrootex__finalrelease).  

  
##  <a name="ccomobjectnolock__queryinterface"></a>  CComObjectNoLock::QueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
STDMETHOD(QueryInterface)(REFIID iid,
    void** ppvObject);
```  
  
### Parameters  
 `iid`  
 [in] The identifier of the interface being requested.  
  
 `ppvObject`  
 [out] A pointer to the interface pointer identified by `iid`. If the object does not support this interface, `ppvObject` is set to **NULL**.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="ccomobjectnolock__release"></a>  CComObjectNoLock::Release  
 Decrements the reference count on the object.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### Return Value  
 In debug builds, **Release** returns a value that may be useful for diagnostics or testing. In non-debug builds, **Release** always returns 0.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
