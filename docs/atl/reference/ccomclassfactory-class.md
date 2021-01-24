---
description: "Learn more about: CComClassFactory Class"
title: "CComClassFactory Class"
ms.date: "11/04/2016"
f1_keywords: ["CComClassFactory", "ATLCOM/ATL::CComClassFactory", "ATLCOM/ATL::CComClassFactory::CreateInstance", "ATLCOM/ATL::CComClassFactory::LockServer"]
helpviewer_keywords: ["CComClassFactory class"]
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
---
# CComClassFactory Class

This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface.

## Syntax

```
class CComClassFactory
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComClassFactory::CreateInstance](#createinstance)|Creates an object of the specified CLSID.|
|[CComClassFactory::LockServer](#lockserver)|Locks the class factory in memory.|

## Remarks

`CComClassFactory` implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface, which contains methods for creating an object of a particular CLSID, as well as locking the class factory in memory to allow new objects to be created more quickly. `IClassFactory` must be implemented for every class that you register in the system registry and to which you assign a CLSID.

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), which declares `CComClassFactory` as the default class factory. To override this default, specify one of the `DECLARE_CLASSFACTORY`*XXX* macros in your class definition. For example, the [DECLARE_CLASSFACTORY_EX](aggregation-and-class-factory-macros.md#declare_classfactory_ex) macro uses the specified class for the class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]

The above class definition specifies that `CMyClassFactory` will be used as the object's default class factory. `CMyClassFactory` must derive from `CComClassFactory` and override `CreateInstance`.

ATL provides three other macros that declare a class factory:

- [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) Uses [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), which controls creation through a license.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) Uses [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), which creates objects in multiple apartments.

- [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) Uses [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), which constructs a single [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) object.

## Requirements

**Header:** atlcom.h

## <a name="createinstance"></a> CComClassFactory::CreateInstance

Creates an object of the specified CLSID and retrieves an interface pointer to this object.

```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```

### Parameters

*pUnkOuter*<br/>
[in] If the object is being created as part of an aggregate, then *pUnkOuter* must be the outer unknown. Otherwise, *pUnkOuter* must be NULL.

*riid*<br/>
[in] The IID of the requested interface. If *pUnkOuter* is non- NULL, *riid* must be `IID_IUnknown`.

*ppvObj*<br/>
[out] A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppvObj* is set to NULL.

### Return Value

A standard HRESULT value.

## <a name="lockserver"></a> CComClassFactory::LockServer

Increments and decrements the module lock count by calling `_Module::Lock` and `_Module::Unlock`, respectively.

```
STDMETHOD(LockServer)(BOOL fLock);
```

### Parameters

*fLock*<br/>
[in] If TRUE, the lock count is incremented; otherwise, the lock count is decremented.

### Return Value

A standard HRESULT value.

### Remarks

`_Module` refers to the global instance of [CComModule](../../atl/reference/ccommodule-class.md) or a class derived from it.

Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be created quickly.

## See also

[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Class Overview](../../atl/atl-class-overview.md)
