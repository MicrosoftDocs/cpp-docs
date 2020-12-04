---
description: "Learn more about: IOleInPlaceObjectWindowlessImpl Class"
title: "IOleInPlaceObjectWindowlessImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IOleInPlaceObjectWindowlessImpl", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetDropTarget", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::GetWindow", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::OnWindowMessage", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::SetObjectRects", "ATLCTL/ATL::IOleInPlaceObjectWindowlessImpl::UIDeactivate"]
helpviewer_keywords: ["IOleInPlaceObjectWindowless, ATL implementation", "activation [C++], ATL", "IOleInPlaceObjectWindowlessImpl class", "ActiveX controls [C++], communication between container and control", "controls [ATL], windowless", "deactivating ATL"]
ms.assetid: a2e0feb4-bc59-4adf-aab2-105457bbdbb4
---
# IOleInPlaceObjectWindowlessImpl Class

This class implements `IUnknown` and provides methods that enable a windowless control to receive window messages and to participate in drag-and-drop operations.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class IOleInPlaceObjectWindowlessImpl
```

#### Parameters

*T*<br/>
Your class, derived from `IOleInPlaceObjectWindowlessImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](#contextsensitivehelp)|Enables context-sensitive help. The ATL implementation returns E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](#getdroptarget)|Supplies the `IDropTarget` interface for an in-place active, windowless object that supports drag and drop. The ATL implementation returns E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::GetWindow](#getwindow)|Gets a window handle.|
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](#inplacedeactivate)|Deactivates an active in-place control.|
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](#onwindowmessage)|Dispatches a message from the container to a windowless control that is in-place active.|
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](#reactivateandundo)|Reactivates a previously deactivated control. The ATL implementation returns E_NOTIMPL.|
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](#setobjectrects)|Indicates what part of the in-place control is visible.|
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](#uideactivate)|Deactivates and removes the user interface that supports in-place activation.|

## Remarks

The [IOleInPlaceObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceobject) interface manages the reactivation and deactivation of in-place controls and determines how much of the control should be visible. The [IOleInPlaceObjectWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplaceobjectwindowless) interface enables a windowless control to receive window messages and to participate in drag-and-drop operations. Class `IOleInPlaceObjectWindowlessImpl` provides a default implementation of `IOleInPlaceObject` and `IOleInPlaceObjectWindowless` and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IOleInPlaceObjectWindowless`

`IOleInPlaceObjectWindowlessImpl`

## Requirements

**Header:** atlctl.h

## <a name="contextsensitivehelp"></a> IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp

Returns E_NOTIMPL.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### Remarks

See [IOleWindow::ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) in the Windows SDK.

## <a name="getdroptarget"></a> IOleInPlaceObjectWindowlessImpl::GetDropTarget

Returns E_NOTIMPL.

```
HRESULT GetDropTarget(IDropTarget** ppDropTarget);
```

### Remarks

See [IOleInPlaceObjectWindowless::GetDropTarget](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-getdroptarget) in the Windows SDK.

## <a name="getwindow"></a> IOleInPlaceObjectWindowlessImpl::GetWindow

The container calls this function to get the window handle of the control.

```
HRESULT GetWindow(HWND* phwnd);
```

### Remarks

Some containers will not work with a control that has been windowless, even if it is currently windowed. In ATL's implementation, if the control class's data member `m_bWasOnceWindowless` is TRUE, the function returns E_FAIL. Otherwise, if *phwnd* is not NULL, `GetWindow` sets \* *phwnd* to the control class's data member `m_hWnd` and returns S_OK.

See [IOleWindow::GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) in the Windows SDK.

## <a name="inplacedeactivate"></a> IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate

Called by the container to deactivate an in-place active control.

```
HRESULT InPlaceDeactivate(HWND* phwnd);
```

### Remarks

This method performs a full or partial deactivation depending on the state of the control. If necessary, the control's user interface is deactivated, and the control's window, if any, is destroyed. The container is notified that the control is no longer active in place. The `IOleInPlaceUIWindow` interface used by the container to negotiate menus and border space is released.

See [IOleInPlaceObject::InPlaceDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-inplacedeactivate) in the Windows SDK.

## <a name="onwindowmessage"></a> IOleInPlaceObjectWindowlessImpl::OnWindowMessage

Dispatches a message from a container to a windowless control that is in-place active.

```
HRESULT OnWindowMessage(
    UINT msg,
    WPARAM WParam,
    LPARAM LParam,
    LRESULT plResultParam);
```

### Remarks

See [IOleInPlaceObjectWindowless::OnWindowMessage](/windows/win32/api/ocidl/nf-ocidl-ioleinplaceobjectwindowless-onwindowmessage) in the Windows SDK.

## <a name="reactivateandundo"></a> IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo

Returns E_NOTIMPL.

```
HRESULT ReactivateAndUndo();
```

### Remarks

See [IOleInPlaceObject::ReactivateAndUndo](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-reactivateandundo) in the Windows SDK.

## <a name="setobjectrects"></a> IOleInPlaceObjectWindowlessImpl::SetObjectRects

Called by the container to inform the control that its size and/or position has changed.

```
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
```

### Remarks

Updates the control's `m_rcPos` data member and the control display. Only the part of the control that intersects the clip region is displayed. If a control's display was previously clipped but the clipping has been removed, this function can be called to redraw a full view of the control.

See [IOleInPlaceObject::SetObjectRects](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-setobjectrects) in the Windows SDK.

## <a name="uideactivate"></a> IOleInPlaceObjectWindowlessImpl::UIDeactivate

Deactivates and removes the control's user interface that supports in-place activation.

```
HRESULT UIDeactivate();
```

### Remarks

Sets the control class's data member `m_bUIActive` to FALSE. The ATL implementation of this function always returns S_OK.

See [IOleInPlaceObject::UIDeactivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceobject-uideactivate) in the Windows SDK.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
