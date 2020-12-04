---
description: "Learn more about: CFirePropNotifyEvent Class"
title: "CFirePropNotifyEvent Class"
ms.date: "11/04/2016"
f1_keywords: ["CFirePropNotifyEvent", "ATLCTL/ATL::CFirePropNotifyEvent", "ATLCTL/ATL::CFirePropNotifyEvent::FireOnChanged", "ATLCTL/ATL::CFirePropNotifyEvent::FireOnRequestEdit"]
helpviewer_keywords: ["sinks, notifying of ATL events", "CFirePropNotifyEvent class", "connection points [C++], notifying of events"]
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
---
# CFirePropNotifyEvent Class

This class provides methods for notifying the container's sink regarding control property changes.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CFirePropNotifyEvent
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFirePropNotifyEvent::FireOnChanged](#fireonchanged)|(Static) Notifies the container's sink that a control property has changed.|
|[CFirePropNotifyEvent::FireOnRequestEdit](#fireonrequestedit)|(Static) Notifies the container's sink that a control property is about to change.|

## Remarks

`CFirePropNotifyEvent` has two methods that notify the container's sink that a control property has changed or is about to change.

If the class implementing your control is derived from `IPropertyNotifySink`, the `CFirePropNotifyEvent` methods are invoked when you call `FireOnRequestEdit` or `FireOnChanged`. If your control class is not derived from `IPropertyNotifySink`, calls to these functions return S_OK.

For more information about creating controls, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md).

## Requirements

**Header:** atlctl.h

## <a name="fireonchanged"></a> CFirePropNotifyEvent::FireOnChanged

Notifies all connected [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interfaces (on every connection point of the object) that the specified object property has changed.

```
static HRESULT FireOnChanged(IUnknown* pUnk, DISPID dispID);
```

### Parameters

*pUnk*<br/>
[in] Pointer to the `IUnknown` of the object sending the notification.

*dispID*<br/>
[in] Identifier of the property that has changed.

### Return Value

One of the standard HRESULT values.

### Remarks

This function is safe to call even if your control does not support connection points.

## <a name="fireonrequestedit"></a> CFirePropNotifyEvent::FireOnRequestEdit

Notifies all connected [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) interfaces (on every connection point of the object) that the specified object property is about to change.

```
static HRESULT FireOnRequestEdit(IUnknown* pUnk, DISPID dispID);
```

### Parameters

*pUnk*<br/>
[in] Pointer to the `IUnknown` of the object sending the notification.

*dispID*<br/>
[in] Identifier of the property about to change.

### Return Value

One of the standard HRESULT values.

### Remarks

This function is safe to call even if your control does not support connection points.

## See also

[Class Overview](../../atl/atl-class-overview.md)
