---
description: "Learn more about: IOleInPlaceActiveObjectImpl Class"
title: "IOleInPlaceActiveObjectImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IOleInPlaceActiveObjectImpl", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ContextSensitiveHelp", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::EnableModeless", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::GetWindow", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnDocWindowActivate", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::OnFrameWindowActivate", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::ResizeBorder", "ATLCTL/ATL::IOleInPlaceActiveObjectImpl::TranslateAccelerator"]
helpviewer_keywords: ["IOleInPlaceActiveObjectImpl class", "ActiveX controls [C++], communication between container and control", "IOleInPlaceActiveObject, ATL implementation"]
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
---
# IOleInPlaceActiveObjectImpl Class

This class provides methods for assisting communication between an in-place control and its container.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class IOleInPlaceActiveObjectImpl
```

#### Parameters

*T*<br/>
Your class, derived from `IOleInPlaceActiveObjectImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelp](#contextsensitivehelp)|Enables context-sensitive help. The ATL implementation returns E_NOTIMPL.|
|[IOleInPlaceActiveObjectImpl::EnableModeless](#enablemodeless)|Enables modeless dialog boxes. The ATL implementation returns S_OK.|
|[IOleInPlaceActiveObjectImpl::GetWindow](#getwindow)|Gets a window handle.|
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivate](#ondocwindowactivate)|Notifies the control when the container's document window is activated or deactivated. The ATL implementation returns S_OK.|
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivate](#onframewindowactivate)|Notifies the control when the container's top-level frame window is activated or deactivated. The ATL implementation returns|
|[IOleInPlaceActiveObjectImpl::ResizeBorder](#resizeborder)|Informs the control it needs to resize its borders. The ATL implementation returns S_OK.|
|[IOleInPlaceActiveObjectImpl::TranslateAccelerator](#translateaccelerator)|Processes menu accelerator-key messages from the container. The ATL implementation returns E_NOTIMPL.|

## Remarks

The [IOleInPlaceActiveObject](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceactiveobject) interface assists communication between an in-place control and its container; for example, communicating the active state of the control and container, and informing the control it needs to resize itself. Class `IOleInPlaceActiveObjectImpl` provides a default implementation of `IOleInPlaceActiveObject` and supports `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IOleInPlaceActiveObject`

`IOleInPlaceActiveObjectImpl`

## Requirements

**Header:** atlctl.h

## <a name="contextsensitivehelp"></a> IOleInPlaceActiveObjectImpl::ContextSensitiveHelp

Enables context-sensitive help.

```
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleWindow::ContextSensitiveHelp](/windows/win32/api/oleidl/nf-oleidl-iolewindow-contextsensitivehelp) in the Windows SDK.

## <a name="enablemodeless"></a> IOleInPlaceActiveObjectImpl::EnableModeless

Enables modeless dialog boxes.

```
HRESULT EnableModeless(BOOL fEnable);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleInPlaceActiveObject::EnableModeless](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless) in the Windows SDK.

## <a name="getwindow"></a> IOleInPlaceActiveObjectImpl::GetWindow

The container calls this function to get the window handle of the control.

```
HRESULT GetWindow(HWND* phwnd);
```

### Remarks

Some containers will not work with a control that has been windowless, even if it is currently windowed. In ATL's implementation, if the `CComControl::m_bWasOnceWindowless` data member is TRUE, the function returns E_FAIL. Otherwise, if \* *phwnd* is not NULL, `GetWindow` assigns *phwnd* to the control class's data member `m_hWnd` and returns S_OK.

See [IOleWindow::GetWindow](/windows/win32/api/oleidl/nf-oleidl-iolewindow-getwindow) in the Windows SDK.

## <a name="ondocwindowactivate"></a> IOleInPlaceActiveObjectImpl::OnDocWindowActivate

Notifies the control when the container's document window is activated or deactivated.

```
HRESULT OnDocWindowActivate(BOOL fActivate);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleInPlaceActiveObject::OnDocWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate) in the Windows SDK.

## <a name="onframewindowactivate"></a> IOleInPlaceActiveObjectImpl::OnFrameWindowActivate

Notifies the control when the container's top-level frame window is activated or deactivated.

```
HRESULT OnFrameWindowActivate(BOOL fActivate);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleInPlaceActiveObject::OnFrameWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate) in the Windows SDK.

## <a name="resizeborder"></a> IOleInPlaceActiveObjectImpl::ResizeBorder

Informs the control it needs to resize its borders.

```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleInPlaceActiveObject::ResizeBorder](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder) in the Windows SDK.

## <a name="translateaccelerator"></a> IOleInPlaceActiveObjectImpl::TranslateAccelerator

Processes menu accelerator-key messages from the container.

```
HRESULT TranslateAccelerator(LPMSG lpmsg);
```

### Return Value

This method supports the following return values:

S_OK if the message was translated successfully.

S_FALSE if the message was not translated.

### Remarks

See [IOleInPlaceActiveObject::TranslateAccelerator](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) in the Windows SDK.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[ActiveX Controls Interfaces](/windows/win32/com/activex-controls-interfaces)<br/>
[Class Overview](../../atl/atl-class-overview.md)
