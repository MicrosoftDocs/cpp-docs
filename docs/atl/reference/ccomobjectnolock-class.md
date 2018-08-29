---
title: "CComObjectNoLock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComObjectNoLock", "ATLCOM/ATL::CComObjectNoLock", "ATLCOM/ATL::CComObjectNoLock::CComObjectNoLock", "ATLCOM/ATL::CComObjectNoLock::AddRef", "ATLCOM/ATL::CComObjectNoLock::QueryInterface", "ATLCOM/ATL::CComObjectNoLock::Release"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComObjectNoLock class"]
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComObjectNoLock Class
This class implements `IUnknown` for a nonaggregated object, but does not increment the module lock count in the constructor.  
  
## Syntax  
  
```
template<class Base>  
class CComObjectNoLock : public Base
```  
  
#### Parameters  
 *Base*  
 Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interface you want to support on the object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectNoLock::CComObjectNoLock](#ccomobjectnolock)|Constructor.|  
|[CComObjectNoLock::~CComObjectNoLock](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComObjectNoLock::AddRef](#addref)|Increments the reference count on the object.|  
|[CComObjectNoLock::QueryInterface](#queryinterface)|Returns a pointer to the requested interface.|  
|[CComObjectNoLock::Release](#release)|Decrements the reference count on the object.|  
  
## Remarks  
 `CComObjectNoLock` is similar to [CComObject](../../atl/reference/ccomobject-class.md) in that it implements [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) for a nonaggregated object; however, `CComObjectNoLock` does not increment the module lock count in the constructor.  
  
 ATL uses `CComObjectNoLock` internally for class factories. In general, you will not use this class directly.  
  
## Inheritance Hierarchy  
 `Base`  
  
 `CComObjectNoLock`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="addref"></a>  CComObjectNoLock::AddRef  
 Increments the reference count on the object.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### Return Value  
 A value that may be useful for diagnostics or testing.  
  
##  <a name="ccomobjectnolock"></a>  CComObjectNoLock::CComObjectNoLock  
 The constructor. Unlike [CComObject](../../atl/reference/ccomobject-class.md), does not increment the module lock count.  
  
```
CComObjectNoLock(void* = NULL);
```  
  
### Parameters  
 <em>void\*</em>  
 [in] This unnamed parameter is not used. It exists for symmetry with other `CComXXXObjectXXX` constructors.  
  
##  <a name="dtor"></a>  CComObjectNoLock::~CComObjectNoLock  
 The destructor.  
  
```
~CComObjectNoLock();
```  
  
### Remarks  
 Frees all allocated resources and calls [FinalRelease](ccomobjectrootex-class.md#finalrelease).  

  
##  <a name="queryinterface"></a>  CComObjectNoLock::QueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### Parameters  
 *iid*  
 [in] The identifier of the interface being requested.  
  
 *ppvObject*  
 [out] A pointer to the interface pointer identified by *iid*. If the object does not support this interface, *ppvObject* is set to NULL.  
  
### Return Value  
 A standard HRESULT value.  
  
##  <a name="release"></a>  CComObjectNoLock::Release  
 Decrements the reference count on the object.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### Return Value  
 In debug builds, `Release` returns a value that may be useful for diagnostics or testing. In non-debug builds, `Release` always returns 0.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
