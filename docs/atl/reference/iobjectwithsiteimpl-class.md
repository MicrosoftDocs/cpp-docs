---
title: "IObjectWithSiteImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IObjectWithSiteImpl", "ATLCOM/ATL::IObjectWithSiteImpl", "ATLCOM/ATL::IObjectWithSiteImpl::GetSite", "ATLCOM/ATL::IObjectWithSiteImpl::SetChildSite", "ATLCOM/ATL::IObjectWithSiteImpl::SetSite", "ATLCOM/ATL::IObjectWithSiteImpl::m_spUnkSite"]
dev_langs: ["C++"]
helpviewer_keywords: ["IObjectWithSiteImpl class"]
ms.assetid: 4e1f774f-bc3d-45ee-9a1c-c3533a511588
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IObjectWithSiteImpl Class

This class provides methods allowing an object to communicate with its site.

## Syntax

```
template <class T>
    class ATL_NO_VTABLE IObjectWithSiteImpl :
    public IObjectWithSite
```

#### Parameters

*T*  
Your class, derived from `IObjectWithSiteImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IObjectWithSiteImpl::GetSite](#getsite)|Queries the site for an interface pointer.|
|[IObjectWithSiteImpl::SetChildSite](#setchildsite)|Provides the object with the site's `IUnknown` pointer.|
|[IObjectWithSiteImpl::SetSite](#setsite)|Provides the object with the site's `IUnknown` pointer.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[IObjectWithSiteImpl::m_spUnkSite](#m_spunksite)|Manages the site's `IUnknown` pointer.|

## Remarks

The [IObjectWithSite](/windows/desktop/api/ocidl/nn-ocidl-iobjectwithsite) interface allows an object to communicate with its site. Class `IObjectWithSiteImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.

`IObjectWithSiteImpl` specifies two methods. The client first calls `SetSite`, passing the site's `IUnknown` pointer. This pointer is stored within the object, and can later be retrieved through a call to `GetSite`.

Typically, you derive your class from `IObjectWithSiteImpl` when you are creating an object that is not a control. For controls, derive your class from [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), which also provides a site pointer. Do not derive your class from both `IObjectWithSiteImpl` and `IOleObjectImpl`.

## Inheritance Hierarchy

`IObjectWithSite`

`IObjectWithSiteImpl`

## Requirements

**Header:** atlcom.h

##  <a name="getsite"></a>  IObjectWithSiteImpl::GetSite

Queries the site for a pointer to the interface identified by `riid`.

```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```

### Remarks

If the site supports this interface, the pointer is returned via `ppvSite`. Otherwise, `ppvSite` is set to NULL.

See [IObjectWithSite::GetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-getsite) in the Windows SDK.

##  <a name="m_spunksite"></a>  IObjectWithSiteImpl::m_spUnkSite

Manages the site's `IUnknown` pointer.

```
CComPtr<IUnknown> m_spUnkSite;
```

### Remarks

`m_spUnkSite` initially receives this pointer through a call to [SetSite](#setsite).

##  <a name="setchildsite"></a>  IObjectWithSiteImpl::SetChildSite

Provides the object with the site's `IUnknown` pointer.

```
HRESULT SetChildSite(IUnknown* pUnkSite);
```

### Parameters

*pUnkSite*  
[in] Pointer to the `IUnknown` interface pointer of the site managing this object. If NULL, the object should call `IUnknown::Release` on any existing site at which point the object no longer knows its site.

### Return Value

Returns S_OK.

##  <a name="setsite"></a>  IObjectWithSiteImpl::SetSite

Provides the object with the site's `IUnknown` pointer.

```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```

### Remarks

See [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite) in the Windows SDK.

## See Also

[Class Overview](../../atl/atl-class-overview.md)
