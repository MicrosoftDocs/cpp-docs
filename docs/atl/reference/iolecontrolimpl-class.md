---
description: "Learn more about: IOleControlImpl Class"
title: "IOleControlImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IOleControlImpl", "ATLCTL/ATL::IOleControlImpl", "ATLCTL/ATL::IOleControlImpl::FreezeEvents", "ATLCTL/ATL::IOleControlImpl::GetControlInfo", "ATLCTL/ATL::IOleControlImpl::OnAmbientPropertyChange", "ATLCTL/ATL::IOleControlImpl::OnMnemonic"]
helpviewer_keywords: ["IOleControlImpl class"]
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
---
# IOleControlImpl Class

This class provides a default implementation of the `IOleControl` interface and implements `IUnknown`.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class IOleControlImpl
```

#### Parameters

*T*<br/>
Your class, derived from `IOleControlImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IOleControlImpl::FreezeEvents](#freezeevents)|Indicates whether or not the container ignores or accepts events from the control.|
|[IOleControlImpl::GetControlInfo](#getcontrolinfo)|Fills in information about the control's keyboard behavior. The ATL implementation returns E_NOTIMPL.|
|[IOleControlImpl::OnAmbientPropertyChange](#onambientpropertychange)|Informs a control that one or more of the container's ambient properties has changed. The ATL implementation returns S_OK.|
|[IOleControlImpl::OnMnemonic](#onmnemonic)|Informs the control that a user has pressed a specified keystroke. The ATL implementation returns E_NOTIMPL.|

## Remarks

Class `IOleControlImpl` provides a default implementation of the [IOleControl](/windows/win32/api/ocidl/nn-ocidl-iolecontrol) interface and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IOleControl`

`IOleControlImpl`

## Requirements

**Header:** atlctl.h

## <a name="freezeevents"></a> IOleControlImpl::FreezeEvents

In ATL's implementation, `FreezeEvents` increments the control class's `m_nFreezeEvents` data member if `bFreeze` is TRUE, and decrements `m_nFreezeEvents` if `bFreeze` is FALSE.

```
HRESULT FreezeEvents(BOOL bFreeze);
```

### Remarks

`FreezeEvents` then returns S_OK.

See [IOleControl::FreezeEvents](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-freezeevents) in the Windows SDK.

## <a name="getcontrolinfo"></a> IOleControlImpl::GetControlInfo

Fills in information about the control's keyboard behavior.

```
HRESULT GetControlInfo(LPCONTROLINFO pCI);
```

### Remarks

See [IOleControl:GetControlInfo](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-getcontrolinfo) in the Windows SDK.

### Return Value

Returns E_NOTIMPL.

## <a name="onambientpropertychange"></a> IOleControlImpl::OnAmbientPropertyChange

Informs a control that one or more of the container's ambient properties has changed.

```
HRESULT OnAmbientPropertyChange(DISPID dispid);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleControl::OnAmbientPropertyChange](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onambientpropertychange) in the Windows SDK.

## <a name="onmnemonic"></a> IOleControlImpl::OnMnemonic

Informs the control that a user has pressed a specified keystroke.

```
HRESULT OnMnemonic(LPMSG pMsg);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleControl::OnMnemonic](/windows/win32/api/ocidl/nf-ocidl-iolecontrol-onmnemonic) in the Windows SDK.

## See also

[IOleObjectImpl Class](../../atl/reference/ioleobjectimpl-class.md)<br/>
[ActiveX Controls Interfaces](/windows/win32/com/activex-controls-interfaces)<br/>
[Class Overview](../../atl/atl-class-overview.md)
