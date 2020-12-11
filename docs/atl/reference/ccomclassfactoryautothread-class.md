---
description: "Learn more about: CComClassFactoryAutoThread Class"
title: "CComClassFactoryAutoThread Class"
ms.date: "11/04/2016"
f1_keywords: ["CComClassFactoryAutoThread", "ATLCOM/ATL::CComClassFactoryAutoThread", "ATLCOM/ATL::CComClassFactoryAutoThread::CreateInstance", "ATLCOM/ATL::CComClassFactoryAutoThread::LockServer"]
helpviewer_keywords: ["CComClassFactoryAutoThread class"]
ms.assetid: 22008042-533f-4dd9-bf7e-191ee571f9a1
---
# CComClassFactoryAutoThread Class

This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface, and allows objects to be created in multiple apartments.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CComClassFactoryAutoThread
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComClassFactoryAutoThread::CreateInstance](#createinstance)|Creates an object of the specified CLSID.|
|[CComClassFactoryAutoThread::LockServer](#lockserver)|Locks the class factory in memory.|

## Remarks

`CComClassFactoryAutoThread` is similar to [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), but allows objects to be created in multiple apartments. To take advantage of this support, derive your EXE module from [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), which declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. To use `CComClassFactoryAutoThread`, specify the [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]

## Inheritance Hierarchy

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

`CComClassFactoryAutoThread`

## Requirements

**Header:** atlcom.h

## <a name="createinstance"></a> CComClassFactoryAutoThread::CreateInstance

Creates an object of the specified CLSID and retrieves an interface pointer to this object.

```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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

### Remarks

If your module derives from [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` first selects a thread to create the object in the associated apartment.

## <a name="lockserver"></a> CComClassFactoryAutoThread::LockServer

Increments and decrements the module lock count by calling `_Module::Lock` and `_Module::Unlock`, respectively.

```
STDMETHODIMP LockServer(BOOL fLock);
```

### Parameters

*fLock*<br/>
[in] If TRUE, the lock count is incremented; otherwise, the lock count is decremented.

### Return Value

A standard HRESULT value.

### Remarks

When using `CComClassFactoryAutoThread`, `_Module` typically refers to the global instance of [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be quickly created.

## See also

[IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)<br/>
[CComClassFactory2 Class](../../atl/reference/ccomclassfactory2-class.md)<br/>
[CComClassFactorySingleton Class](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Class Overview](../../atl/atl-class-overview.md)
