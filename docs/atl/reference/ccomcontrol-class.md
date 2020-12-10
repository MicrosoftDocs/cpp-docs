---
description: "Learn more about: CComControl Class"
title: "CComControl Class"
ms.date: "11/04/2016"
f1_keywords: ["CComControl", "ATLCTL/ATL::CComControl", "ATLCTL/ATL::CComControl::CComControl", "ATLCTL/ATL::CComControl::ControlQueryInterface", "ATLCTL/ATL::CComControl::CreateControlWindow", "ATLCTL/ATL::CComControl::FireOnChanged", "ATLCTL/ATL::CComControl::FireOnRequestEdit", "ATLCTL/ATL::CComControl::MessageBox"]
helpviewer_keywords: ["control flags", "CComControlBase class, CComControl class", "stock properties, ATL", "CComControl class", "controls [ATL], control helper functions", "ambient properties", "controls [ATL], properties"]
ms.assetid: 55368c27-bd16-45a7-b701-edb36157c8e8
---
# CComControl Class

This class provides methods for creating and managing ATL controls.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T, class WinBase = CWindowImpl<T>>
class ATL_NO_VTABLE CComControl : public CComControlBase,
    public WinBase;
```

#### Parameters

*T*<br/>
The class implementing the control.

*WinBase*<br/>
The base class that implements windowing functions. Defaults to [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComControl::CComControl](#ccomcontrol)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComControl::ControlQueryInterface](#controlqueryinterface)|Retrieves a pointer to the requested interface.|
|[CComControl::CreateControlWindow](#createcontrolwindow)|Creates a window for the control.|
|[CComControl::FireOnChanged](#fireonchanged)|Notifies the container's sink that a control property has changed.|
|[CComControl::FireOnRequestEdit](#fireonrequestedit)|Notifies the container's sink that a control property is about to change and that the object is asking the sink how to proceed.|
|[CComControl::MessageBox](#messagebox)|Call this method to create, display, and operate a message box.|

## Remarks

`CComControl` is a set of useful control helper functions and essential data members for ATL controls. When you create a standard control or a DHTML control using the ATL Control Wizard, the wizard will automatically derive your class from `CComControl`. `CComControl` derives most of its methods from [CComControlBase](../../atl/reference/ccomcontrolbase-class.md).

For more information about creating a control, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md). For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).

For a demonstration of `CComControl` methods and data members, see the [CIRC](../../overview/visual-cpp-samples.md) sample.

## Inheritance Hierarchy

`WinBase`

[CComControlBase](../../atl/reference/ccomcontrolbase-class.md)

`CComControl`

## Requirements

**Header:** atlctl.h

## <a name="ccomcontrol"></a> CComControl::CComControl

The constructor.

```
CComControl();
```

### Remarks

Calls the [CComControlBase](ccomcontrolbase-class.md#ccomcontrolbase) constructor, passing the `m_hWnd` data member inherited through [CWindowImpl](../../atl/reference/cwindowimpl-class.md).

## <a name="controlqueryinterface"></a> CComControl::ControlQueryInterface

Retrieves a pointer to the requested interface.

```
virtual HRESULT ControlQueryInterface(const IID& iid, void** ppv);
```

### Parameters

*iid*<br/>
[in] The GUID of the interface being requested.

*ppv*<br/>
[out] A pointer to the interface pointer identified by *iid*, or NULL if the interface is not found.

### Remarks

Only handles interfaces in the COM map table.

### Example

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrol-class_1.cpp)]

## <a name="createcontrolwindow"></a> CComControl::CreateControlWindow

By default, creates a window for the control by calling `CWindowImpl::Create`.

```
virtual HWND CreateControlWindow(HWND hWndParent, RECT& rcPos);
```

### Parameters

*hWndParent*<br/>
[in] Handle to the parent or owner window. A valid window handle must be supplied. The control window is confined to the area of its parent window.

*rcPos*<br/>
[in] The initial size and position of the window to be created.

### Remarks

Override this method if you want to do something other than create a single window, for example, to create two windows, one of which becomes a toolbar for your control.

### Example

[!code-cpp[NVC_ATL_COM#16](../../atl/codesnippet/cpp/ccomcontrol-class_2.cpp)]

## <a name="fireonchanged"></a> CComControl::FireOnChanged

Notifies the container's sink that a control property has changed.

```
HRESULT FireOnChanged(DISPID dispID);
```

### Parameters

*dispID*<br/>
[in] Identifier of the property that has changed.

### Return Value

One of the standard HRESULT values.

### Remarks

If your control class derives from [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), this method calls [CFirePropNotifyEvent::FireOnChanged](cfirepropnotifyevent-class.md#fireonchanged) to notify all connected `IPropertyNotifySink` interfaces that the specified control property has changed. If your control class does not derive from `IPropertyNotifySink`, this method returns S_OK.

This method is safe to call even if your control doesn't support connection points.

### Example

[!code-cpp[NVC_ATL_COM#17](../../atl/codesnippet/cpp/ccomcontrol-class_3.cpp)]

## <a name="fireonrequestedit"></a> CComControl::FireOnRequestEdit

Notifies the container's sink that a control property is about to change and that the object is asking the sink how to proceed.

```
HRESULT FireOnRequestEdit(DISPID dispID);
```

### Parameters

*dispID*<br/>
[in] Identifier of the property about to change.

### Return Value

One of the standard HRESULT values.

### Remarks

If your control class derives from [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink), this method calls [CFirePropNotifyEvent::FireOnRequestEdit](cfirepropnotifyevent-class.md#fireonrequestedit) to notify all connected `IPropertyNotifySink` interfaces that the specified control property is about to change. If your control class does not derive from `IPropertyNotifySink`, this method returns S_OK.

This method is safe to call even if your control doesn't support connection points.

### Example

[!code-cpp[NVC_ATL_COM#18](../../atl/codesnippet/cpp/ccomcontrol-class_4.cpp)]

## <a name="messagebox"></a> CComControl::MessageBox

Call this method to create, display, and operate a message box.

```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = _T(""),
    UINT nType = MB_OK);
```

### Parameters

*lpszText*<br/>
The text to be displayed in the message box.

*lpszCaption*<br/>
The dialog box title. If NULL (the default), the title "Error" is used.

*nType*<br/>
Specifies the contents and behavior of the dialog box. See the [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) entry in the Windows SDK documentation for a list of the different message boxes available. The default provides a simple **OK** button.

### Return Value

Returns an integer value specifying one of the menu-item values listed under [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) in the Windows SDK documentation.

### Remarks

`MessageBox` is useful both during development and as an easy way to display an error or warning message to the user.

## See also

[CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComControlBase Class](../../atl/reference/ccomcontrolbase-class.md)<br/>
[CComCompositeControl Class](../../atl/reference/ccomcompositecontrol-class.md)
