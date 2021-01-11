---
description: "Learn more about: IQuickActivateImpl Class"
title: "IQuickActivateImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IQuickActivateImpl", "ATLCTL/ATL::IQuickActivateImpl", "ATLCTL/ATL::IQuickActivateImpl::GetContentExtent", "ATLCTL/ATL::IQuickActivateImpl::QuickActivate", "ATLCTL/ATL::IQuickActivateImpl::SetContentExtent"]
helpviewer_keywords: ["activating ATL controls", "controls [ATL], activating", "IQuickActivateImpl class", "IQuickActivate ATL implementation"]
ms.assetid: aa80c056-1041-494e-b21d-2acca7dc27ea
---
# IQuickActivateImpl Class

This class combines containers' control initialization into a single call.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T>
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```

#### Parameters

*T*<br/>
Your class, derived from `IQuickActivateImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Retrieves the current display size for a running control.|
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Performs quick initialization of controls being loaded.|
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Informs the control of how much display space the container has assigned to it.|

## Remarks

The [IQuickActivate](/windows/win32/api/ocidl/nn-ocidl-iquickactivate) interface helps containers avoid delays when loading controls by combining initialization in a single call. The `QuickActivate` method allows the container to pass a pointer to a [QACONTAINER](/windows/win32/api/ocidl/ns-ocidl-qacontainer) structure that holds pointers to all the interfaces the control needs. On return, the control passes back a pointer to a [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) structure that holds pointers to its own interfaces, which are used by the container. Class `IQuickActivateImpl` provides a default implementation of `IQuickActivate` and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IQuickActivate`

`IQuickActivateImpl`

## Requirements

**Header:** atlctl.h

## <a name="getcontentextent"></a> IQuickActivateImpl::GetContentExtent

Retrieves the current display size for a running control.

```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```

### Remarks

The size is for a full rendering of the control and is specified in HIMETRIC units.

See [IQuickActivate::GetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-getcontentextent) in the Windows SDK.

## <a name="quickactivate"></a> IQuickActivateImpl::QuickActivate

Performs quick initialization of controls being loaded.

```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```

### Remarks

The structure contains pointers to interfaces needed by the control and the values of some ambient properties. Upon return, the control passes a pointer to a [QACONTROL](/windows/win32/api/ocidl/ns-ocidl-qacontrol) structure that contains pointers to its own interfaces that the container requires, and additional status information.

See [IQuickActivate::QuickActivate](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-quickactivate) in the Windows SDK.

## <a name="setcontentextent"></a> IQuickActivateImpl::SetContentExtent

Informs the control of how much display space the container has assigned to it.

```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```

### Remarks

The size is specified in HIMETRIC units.

See [IQuickActivate::SetContentExtent](/windows/win32/api/ocidl/nf-ocidl-iquickactivate-setcontentextent) in the Windows SDK.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
