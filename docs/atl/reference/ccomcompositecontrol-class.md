---
description: "Learn more about: CComCompositeControl Class"
title: "CComCompositeControl Class"
ms.date: "11/04/2016"
f1_keywords: ["CComCompositeControl", "ATLCTL/ATL::CComCompositeControl", "ATLCTL/ATL::CComCompositeControl::CComCompositeControl", "ATLCTL/ATL::CComCompositeControl::AdviseSinkMap", "ATLCTL/ATL::CComCompositeControl::CalcExtent", "ATLCTL/ATL::CComCompositeControl::Create", "ATLCTL/ATL::CComCompositeControl::CreateControlWindow", "ATLCTL/ATL::CComCompositeControl::SetBackgroundColorFromAmbient", "ATLCTL/ATL::CComCompositeControl::m_hbrBackground", "ATLCTL/ATL::CComCompositeControl::m_hWndFocus"]
helpviewer_keywords: ["CComCompositeControl class", "composite controls, CComCompositeControl class"]
ms.assetid: 1304b931-27e8-4fbc-be8e-bb226ad887fb
---
# CComCompositeControl Class

This class provides the methods required to implement a composite control.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T>
class CComCompositeControl : public CComControl<T,CAxDialogImpl<T>>
```

#### Parameters

*T*<br/>
Your class, derived from [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) or [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), as well as from any other interfaces you want to support for your composite control.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComCompositeControl::CComCompositeControl](#ccomcompositecontrol)|The constructor.|
|[CComCompositeControl::~CComCompositeControl](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComCompositeControl::AdviseSinkMap](#advisesinkmap)|Call this method to advise or unadvise all controls hosted by the composite control.|
|[CComCompositeControl::CalcExtent](#calcextent)|Call this method to calculate the size in HIMETRIC units of the dialog resource used to host the composite control.|
|[CComCompositeControl::Create](#create)|This method is called to create the control window for the composite control.|
|[CComCompositeControl::CreateControlWindow](#createcontrolwindow)|Call this method to create the control window and advise any hosted control.|
|[CComCompositeControl::SetBackgroundColorFromAmbient](#setbackgroundcolorfromambient)|Call this method to set the background color of the composite control using the container's background color.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComCompositeControl::m_hbrBackground](#m_hbrbackground)|The background brush.|
|[CComCompositeControl::m_hWndFocus](#m_hwndfocus)|The handle of the window that currently has focus.|

## Remarks

Classes derived from class `CComCompositeControl` inherit the functionality of an ActiveX composite control. ActiveX controls derived from `CComCompositeControl` are hosted by a standard dialog box. These types of controls are called composite controls because they are able to host other controls (native Windows controls and ActiveX controls).

`CComCompositeControl` identifies the dialog resource to use in creating the composite control by looking for an enumerated data member in the child class. The member IDD of this child class is set to the resource ID of the dialog resource that will be used as the control's window. The following is an example of the data member that the class derived from `CComCompositeControl` should contain to identify the dialog resource to be used for the control's window:

[!code-cpp[NVC_ATL_COM#13](../../atl/codesnippet/cpp/ccomcompositecontrol-class_1.h)]

> [!NOTE]
> Composite controls are always windowed controls, although they can contain windowless controls.

A control implemented by a `CComCompositeControl`-derived class has default tabbing behavior built in. When the control receives focus by being tabbed to in a containing application, successively pressing the TAB key will cause the focus to be cycled through all of the composite control's contained controls, then out of the composite control and on to the next item in the tab order of the container. The tab order of the hosted controls is determined by the dialog resource and determines the order in which tabbing will occur.

> [!NOTE]
> In order for accelerators to work properly with a `CComCompositeControl`, it is necessary to load an accelerator table as the control is created, pass the handle and number of accelerators back into [IOleControlImpl::GetControlInfo](../../atl/reference/iolecontrolimpl-class.md#getcontrolinfo), and finally destroy the table when the control is released.

## Example

[!code-cpp[NVC_ATL_COM#14](../../atl/codesnippet/cpp/ccomcompositecontrol-class_2.h)]

## Inheritance Hierarchy

`WinBase`

[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)

[CComControl](../../atl/reference/ccomcontrol-class.md)

`CComCompositeControl`

## Requirements

**Header:** atlctl.h

## <a name="advisesinkmap"></a> CComCompositeControl::AdviseSinkMap

Call this method to advise or unadvise all controls hosted by the composite control.

```
HRESULT AdviseSinkMap(bool bAdvise);
```

### Parameters

*bAdvise*<br/>
True if all controls are to be advised; otherwise false.

### Return Value

| Value | Description |
|--|--|
| `S_OK` | All controls in the event sink map were connected or disconnected from their event source successfully. |
| `E_FAIL` | Not all controls in the event sink map could be connected or disconnected from their event source successfully. |
| `E_POINTER` | This error usually indicates a problem with an entry in the control's event sink map or a problem with a template argument used in an `IDispEventImpl` or `IDispEventSimpleImpl` base class. |
| `CONNECT_E_ADVISELIMIT` | The connection point has already reached its limit of connections and cannot accept any more. |
| `CONNECT_E_CANNOTCONNECT` | The sink does not support the interface required by this connection point. |
| `CONNECT_E_NOCONNECTION` | The cookie value does not represent a valid connection. This error usually indicates a problem with an entry in the control's event sink map or a problem with a template argument used in an `IDispEventImpl` or `IDispEventSimpleImpl` base class. |

### Remarks

The base implementation of this method searches through the entries in the event sink map. It then advises or unadvises the connection points to the COM objects described by the event sink map's sink entries. This member method also relies on the fact that the derived class inherits from one instance of `IDispEventImpl` for every control in the sink map that is to be advised or unadvised.

## <a name="calcextent"></a> CComCompositeControl::CalcExtent

Call this method to calculate the size in HIMETRIC units of the dialog resource used to host the composite control.

```
BOOL CalcExtent(SIZE& size);
```

### Parameters

*size*<br/>
A reference to a `SIZE` structure to be filled by this method.

### Return Value

TRUE if the control is hosted by a dialog box; otherwise FALSE.

### Remarks

The size is returned in the *size* parameter.

## <a name="create"></a> CComCompositeControl::Create

This method is called to create the control window for the composite control.

```
HWND Create(
    HWND hWndParent,
    RECT& /* rcPos */,
    LPARAM dwInitParam = NULL);
```

### Parameters

*hWndParent*<br/>
A handle to the parent window of the control.

*rcPos*<br/>
Reserved.

*dwInitParam*<br/>
Data to be passed to the control during control creation. The data passed as *dwInitParam* will show up as the LPARAM parameter of the [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) message, which will be sent to the composite control when it gets created.

### Return Value

A handle to the newly created composite control dialog box.

### Remarks

This method is usually called during in-place activation of the control.

## <a name="ccomcompositecontrol"></a> CComCompositeControl::CComCompositeControl

The constructor.

```
CComCompositeControl();
```

### Remarks

Initializes the [CComCompositeControl::m_hbrBackground](#m_hbrbackground) and [CComCompositeControl::m_hWndFocus](#m_hwndfocus) data members to NULL.

## <a name="dtor"></a> CComCompositeControl::~CComCompositeControl

The destructor.

```
~CComCompositeControl();
```

### Remarks

Deletes the background object, if it exists.

## <a name="createcontrolwindow"></a> CComCompositeControl::CreateControlWindow

Call this method to create the control window and advise any hosted controls.

```
virtual HWND CreateControlWindow(
    HWND hWndParent,
    RECT& rcPos);
```

### Parameters

*hWndParent*<br/>
A handle to the parent window of the control.

*rcPos*<br/>
The position rectangle of the composite control in client coordinates relative to *hWndParent*.

### Return Value

Returns a handle to the newly created composite control dialog box.

### Remarks

This method calls [CComCompositeControl::Create](#create) and [CComCompositeControl::AdviseSinkMap](#advisesinkmap).

## <a name="m_hbrbackground"></a> CComCompositeControl::m_hbrBackground

The background brush.

```
HBRUSH m_hbrBackground;
```

## <a name="m_hwndfocus"></a> CComCompositeControl::m_hWndFocus

The handle of the window that currently has focus.

```
HWND m_hWndFocus;
```

## <a name="setbackgroundcolorfromambient"></a> CComCompositeControl::SetBackgroundColorFromAmbient

Call this method to set the background color of the composite control using the container's background color.

```
HRESULT SetBackgroundColorFromAmbient();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Composite Control Fundamentals](../../atl/atl-composite-control-fundamentals.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
