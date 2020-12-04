---
description: "Learn more about: CComClassFactory2 Class"
title: "CComClassFactory2 Class"
ms.date: "11/04/2016"
f1_keywords: ["CComClassFactory2", "ATLCOM/ATL::CComClassFactory2", "ATLCOM/ATL::CComClassFactory2::CreateInstance", "ATLCOM/ATL::CComClassFactory2::CreateInstanceLic", "ATLCOM/ATL::CComClassFactory2::GetLicInfo", "ATLCOM/ATL::CComClassFactory2::LockServer", "ATLCOM/ATL::CComClassFactory2::RequestLicKey"]
helpviewer_keywords: ["CComClassFactory2 class"]
ms.assetid: 19b66fd6-b9ed-47a0-822c-8132184f5a3e
---
# CComClassFactory2 Class

This class implements the [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) interface.

## Syntax

```
template <class license>
class CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

#### Parameters

*license*<br/>
A class that implements the following static functions:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComClassFactory2::CreateInstance](#createinstance)|Creates an object of the specified CLSID.|
|[CComClassFactory2::CreateInstanceLic](#createinstancelic)|Given a license key, creates an object of the specified CLSID.|
|[CComClassFactory2::GetLicInfo](#getlicinfo)|Retrieves information describing the licensing capabilities of the class factory.|
|[CComClassFactory2::LockServer](#lockserver)|Locks the class factory in memory.|
|[CComClassFactory2::RequestLicKey](#requestlickey)|Creates and returns a license key.|

## Remarks

`CComClassFactory2` implements the [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) interface, which is an extension of [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2` controls object creation through a license. A class factory executing on a licensed machine can provide a run-time license key. This license key allows an application to instantiate objects when a full machine license does not exist.

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), which declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. To use `CComClassFactory2`, specify the [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomclassfactory2-class_1.h)]

`CMyLicense`, the template parameter to `CComClassFactory2`, must implement the static functions `VerifyLicenseKey`, `GetLicenseKey`, and `IsLicenseValid`. The following is an example of a simple license class:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/ccomclassfactory2-class_2.h)]

`CComClassFactory2` derives from both `CComClassFactory2Base` and *license*. `CComClassFactory2Base`, in turn, derives from `IClassFactory2` and `CComObjectRootEx< CComGlobalsThreadModel >`.

## Inheritance Hierarchy

`CComObjectRootBase`

`license`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory2`

`CComClassFactory2`

## Requirements

**Header:** atlcom.h

## <a name="createinstance"></a> CComClassFactory2::CreateInstance

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

### Remarks

Requires the machine to be fully licensed. If a full machine license does not exist, call [CreateInstanceLic](#createinstancelic).

## <a name="createinstancelic"></a> CComClassFactory2::CreateInstanceLic

Similar to [CreateInstance](#createinstance), except that `CreateInstanceLic` requires a license key.

```
STDMETHOD(CreateInstanceLic)(
    IUnknown* pUnkOuter,
    IUnknown* /* pUnkReserved
*/,
    REFIID riid,
    BSTR bstrKey,
    void** ppvObject);
```

### Parameters

*pUnkOuter*<br/>
[in] If the object is being created as part of an aggregate, then *pUnkOuter* must be the outer unknown. Otherwise, *pUnkOuter* must be NULL.

*pUnkReserved*<br/>
[in] Not used. Must be NULL.

*riid*<br/>
[in] The IID of the requested interface. If *pUnkOuter* is non- NULL, *riid* must be `IID_IUnknown`.

*bstrKey*<br/>
[in] The run-time license key previously obtained from a call to `RequestLicKey`. This key is required to create the object.

*ppvObject*<br/>
[out] A pointer to the interface pointer specified by *riid*. If the object does not support this interface, *ppvObject* is set to NULL.

### Return Value

A standard HRESULT value.

### Remarks

You can obtain a license key using [RequestLicKey](#requestlickey). In order to create an object on an unlicensed machine, you must call `CreateInstanceLic`.

## <a name="getlicinfo"></a> CComClassFactory2::GetLicInfo

Fills a [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) structure with information that describes the class factory's licensing capabilities.

```
STDMETHOD(GetLicInfo)(LICINFO* pLicInfo);
```

### Parameters

*pLicInfo*<br/>
[out] Pointer to a `LICINFO` structure.

### Return Value

A standard HRESULT value.

### Remarks

The `fRuntimeKeyAvail` member of this structure indicates whether, given a license key, the class factory allows objects to be created on an unlicensed machine. The *fLicVerified* member indicates whether a full machine license exists.

## <a name="lockserver"></a> CComClassFactory2::LockServer

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

Calling `LockServer` allows a client to hold onto a class factory so that multiple objects can be quickly created.

## <a name="requestlickey"></a> CComClassFactory2::RequestLicKey

Creates and returns a license key, provided that the `fRuntimeKeyAvail` member of the [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) structure is TRUE.

```
STDMETHOD(RequestLicKey)(DWORD dwReserved, BSTR* pbstrKey);
```

### Parameters

*dwReserved*<br/>
[in] Not used. Must be zero.

*pbstrKey*<br/>
[out] Pointer to the license key.

### Return Value

A standard HRESULT value.

### Remarks

A license key is required for calling [CreateInstanceLic](#createinstancelic) to create an object on an unlicensed machine. If `fRuntimeKeyAvail` is FALSE, then objects can only be created on a fully licensed machine.

Call [GetLicInfo](#getlicinfo) to retrieve the value of `fRuntimeKeyAvail`.

## See also

[CComClassFactoryAutoThread Class](../../atl/reference/ccomclassfactoryautothread-class.md)<br/>
[CComClassFactorySingleton Class](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Class Overview](../../atl/atl-class-overview.md)
