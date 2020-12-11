---
description: "Learn more about: IViewObjectExImpl Class"
title: "IViewObjectExImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IViewObjectExImpl", "ATLCTL/ATL::IViewObjectExImpl", "ATLCTL/ATL::IViewObjectExImpl::Draw", "ATLCTL/ATL::IViewObjectExImpl::Freeze", "ATLCTL/ATL::IViewObjectExImpl::GetAdvise", "ATLCTL/ATL::IViewObjectExImpl::GetColorSet", "ATLCTL/ATL::IViewObjectExImpl::GetExtent", "ATLCTL/ATL::IViewObjectExImpl::GetNaturalExtent", "ATLCTL/ATL::IViewObjectExImpl::GetRect", "ATLCTL/ATL::IViewObjectExImpl::GetViewStatus", "ATLCTL/ATL::IViewObjectExImpl::QueryHitPoint", "ATLCTL/ATL::IViewObjectExImpl::QueryHitRect", "ATLCTL/ATL::IViewObjectExImpl::SetAdvise", "ATLCTL/ATL::IViewObjectExImpl::Unfreeze"]
helpviewer_keywords: ["ActiveX controls [C++], drawing", "IViewObjectEx ATL implementation", "advise sinks", "IViewObjectExImpl class"]
ms.assetid: ad6de760-1ee5-4883-b033-ae57beffc369
---
# IViewObjectExImpl Class

This class implements `IUnknown` and provides default implementations of the [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2), and [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) interfaces.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class ATL_NO_VTABLE IViewObjectExImpl
   : public IViewObjectEx
```

#### Parameters

*T*<br/>
Your class, derived from `IViewObjectExImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IViewObjectExImpl::Draw](#draw)|Draws a representation of the control onto a device context.|
|[IViewObjectExImpl::Freeze](#freeze)|Freezes the drawn representation of a control so it won't change until an `Unfreeze`. The ATL implementation returns E_NOTIMPL.|
|[IViewObjectExImpl::GetAdvise](#getadvise)|Retrieves an existing advisory sink connection on the control, if there is one.|
|[IViewObjectExImpl::GetColorSet](#getcolorset)|Returns the logical palette used by the control for drawing. The ATL implementation returns E_NOTIMPL.|
|[IViewObjectExImpl::GetExtent](#getextent)|Retrieves the control's display size in HIMETRIC units (0.01 millimeter per unit) from the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).|
|[IViewObjectExImpl::GetNaturalExtent](#getnaturalextent)|Provides sizing hints from the container for the object to use as the user resizes it.|
|[IViewObjectExImpl::GetRect](#getrect)|Returns a rectangle describing a requested drawing aspect. The ATL implementation returns E_NOTIMPL.|
|[IViewObjectExImpl::GetViewStatus](#getviewstatus)|Returns information about the opacity of the object and what drawing aspects are supported.|
|[IViewObjectExImpl::QueryHitPoint](#queryhitpoint)|Checks if the specified point is in the specified rectangle and returns a [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) value in `pHitResult`.|
|[IViewObjectExImpl::QueryHitRect](#queryhitrect)|Checks whether the control's display rectangle overlaps any point in the specified location rectangle and returns a HITRESULT value in `pHitResult`.|
|[IViewObjectExImpl::SetAdvise](#setadvise)|Sets up a connection between the control and an advise sink so the sink can be notified about changes in the control's view.|
|[IViewObjectExImpl::Unfreeze](#unfreeze)|Unfreezes the drawn representation of the control. The ATL implementation returns E_NOTIMPL.|

## Remarks

The [IViewObject](/windows/win32/api/oleidl/nn-oleidl-iviewobject), [IViewObject2](/windows/win32/api/oleidl/nn-oleidl-iviewobject2), and [IViewObjectEx](/windows/win32/api/ocidl/nn-ocidl-iviewobjectex) interfaces enable a control to display itself directly, and to create and manage an advise sink to notify the container of changes in the control display. The `IViewObjectEx` interface provides support for extended control features such as flicker-free drawing, non-rectangular and transparent controls, and hit-testing (for example, how close a mouse click must be to be considered on the control). Class `IViewObjectExImpl` provides a default implementation of these interfaces and implements `IUnknown` by sending information to the dump device in debug builds.

## Inheritance Hierarchy

`IViewObjectEx`

`IViewObjectExImpl`

## Requirements

**Header:** atlctl.h

## <a name="draw"></a> IViewObjectExImpl::Draw

Draws a representation of the control onto a device context.

```
STDMETHOD(Draw)(
    DWORD dwDrawAspect,
    LONG lindex,
    void* pvAspect,
    DVTARGETDEVICE* ptd,
    HDC hicTargetDev,
    LPCRECTL prcBounds,
    LPCRECTL prcWBounds,
    BOOL(_stdcall* /* pfnContinue*/) (DWORD_PTR dwContinue),
    DWORD_PTR /* dwContinue */);
```

### Remarks

This method calls `CComControl::OnDrawAdvanced` which in turn calls your control class's `OnDraw` method. An `OnDraw` method is automatically added to your control class when you create your control with the ATL Control Wizard. The Wizard's default `OnDraw` draws a rectangle with the label "ATL 3.0".

See [IViewObject::Draw](/windows/win32/api/oleidl/nf-oleidl-iviewobject-draw) in the Windows SDK.

## <a name="freeze"></a> IViewObjectExImpl::Freeze

Freezes the drawn representation of a control so it won't change until an `Unfreeze`. The ATL implementation returns E_NOTIMPL.

```
STDMETHOD(Freeze)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DWORD* /* pdwFreeze */);
```

### Remarks

See [IViewObject::Freeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-freeze) in the Windows SDK.

## <a name="getadvise"></a> IViewObjectExImpl::GetAdvise

Retrieves an existing advisory sink connection on the control, if there is one.

```
STDMETHOD(GetAdvise)(
    DWORD* /* pAspects */,
    DWORD* /* pAdvf */,
    IAdviseSink** /* ppAdvSink */);
```

### Remarks

The advisory sink is stored in the control class data member [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink).

See [IViewObject::GetAdvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getadvise) in the Windows SDK.

## <a name="getcolorset"></a> IViewObjectExImpl::GetColorSet

Returns the logical palette used by the control for drawing. The ATL implementation returns E_NOTIMPL.

```
STDMETHOD(GetColorSet)(
    DWORD /* dwAspect */,
    LONG /* lindex */,
    void* /* pvAspect */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    LOGPALETTE** /* ppColorSet */);
```

### Remarks

See [IViewObject::GetColorSet](/windows/win32/api/oleidl/nf-oleidl-iviewobject-getcolorset) in the Windows SDK.

## <a name="getextent"></a> IViewObjectExImpl::GetExtent

Retrieves the control's display size in HIMETRIC units (0.01 millimeter per unit) from the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

```
STDMETHOD(GetExtent)(
    DWORD /* dwDrawAspect */,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    LPSIZEL* lpsizel);
```

### Remarks

See [IViewObject2::GetExtent](/windows/win32/api/oleidl/nf-oleidl-iviewobject2-getextent) in the Windows SDK.

## <a name="getnaturalextent"></a> IViewObjectExImpl::GetNaturalExtent

Provides sizing hints from the container for the object to use as the user resizes it.

```
STDMETHOD(GetNaturalExtent)(
    DWORD dwAspect,
    LONG /* lindex */,
    DVTARGETDEVICE* /* ptd */,
    HDC /* hicTargetDevice */,
    DVEXTENTINFO* pExtentInfo,
    LPSIZEL psizel);
```

### Remarks

If `dwAspect` is DVASPECT_CONTENT and *pExtentInfo->dwExtentMode* is DVEXTENT_CONTENT, sets * `psizel` to the control class's data member [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural). Otherwise, returns an error HRESULT.

See [IViewObjectEx::GetNaturalExtent](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getnaturalextent) in the Windows SDK.

## <a name="getrect"></a> IViewObjectExImpl::GetRect

Returns a rectangle describing a requested drawing aspect. The ATL implementation returns E_NOTIMPL.

```
STDMETHOD(GetRect)(DWORD /* dwAspect */, LPRECTL /* pRect */);
```

### Remarks

See [IViewObjectEx::GetRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getrect) in the Windows SDK.

## <a name="getviewstatus"></a> IViewObjectExImpl::GetViewStatus

Returns information about the opacity of the object and what drawing aspects are supported.

```
STDMETHOD(GetViewStatus)(DWORD* pdwStatus);
```

### Remarks

By default, ATL sets `pdwStatus` to indicate that the control supports VIEWSTATUS_OPAQUE (possible values are in the [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) enumeration).

See [IViewObjectEx::GetViewStatus](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-getviewstatus) in the Windows SDK.

## <a name="queryhitpoint"></a> IViewObjectExImpl::QueryHitPoint

Checks if the specified point is in the specified rectangle and returns a [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) value in `pHitResult`.

```
STDMETHOD(QueryHitPoint)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    POINT ptlLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### Remarks

The value can be either HITRESULT_HIT or HITRESULT_OUTSIDE.

If `dwAspect` equals [DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), the method returns S_OK. Otherwise, the method returns E_FAIL.

See [IViewObjectEx::QueryHitPoint](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitpoint) in the Windows SDK.

## <a name="queryhitrect"></a> IViewObjectExImpl::QueryHitRect

Checks whether the control's display rectangle overlaps any point in the specified location rectangle and returns a [HITRESULT](/windows/win32/api/ocidl/ne-ocidl-hitresult) value in `pHitResult`.

```
STDMETHOD(QueryHitRect)(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPRECT prcLoc,
    LONG /* lCloseHit */,
    DWORD* /* pHitResult */);
```

### Remarks

The value can be either HITRESULT_HIT or HITRESULT_OUTSIDE.

If `dwAspect` equals [DVASPECT_CONTENT](/windows/win32/api/wtypes/ne-wtypes-dvaspect), the method returns S_OK. Otherwise, the method returns E_FAIL.

See [IViewObjectEx::QueryHitRect](/windows/win32/api/ocidl/nf-ocidl-iviewobjectex-queryhitrect) in the Windows SDK.

## <a name="setadvise"></a> IViewObjectExImpl::SetAdvise

Sets up a connection between the control and an advise sink so the sink can be notified about changes in the control's view.

```
STDMETHOD(SetAdvise)(
    DWORD /* aspects */,
    DWORD /* advf */,
    IAdviseSink* pAdvSink);
```

### Remarks

The pointer to the [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) interface on the advise sink is stored in the control class data member [CComControlBase::m_spAdviseSink](ccomcontrolbase-class.md#m_spadvisesink).

See [IViewObject::SetAdvise](/windows/win32/api/oleidl/nf-oleidl-iviewobject-setadvise) in the Windows SDK.

## <a name="unfreeze"></a> IViewObjectExImpl::Unfreeze

Unfreezes the drawn representation of the control. The ATL implementation returns E_NOTIMPL.

```
STDMETHOD(Unfreeze)(DWORD /* dwFreeze */);
```

### Remarks

See [IViewObject::Unfreeze](/windows/win32/api/oleidl/nf-oleidl-iviewobject-unfreeze) in the Windows SDK.

## <a name="closehandle"></a> IWorkerThreadClient::CloseHandle

Implement this method to close the handle associated with this object.

```
HRESULT CloseHandle(HANDLE hHandle);
```

### Parameters

*hHandle*<br/>
The handle to be closed.

### Return Value

Return S_OK on success, or an error HRESULT on failure.

### Remarks

The handle passed to this method was previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### Example

The following code shows a simple implementation of `IWorkerThreadClient::CloseHandle`.

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iviewobjecteximpl-class_1.cpp)]

## <a name="execute"></a> IWorkerThreadClient::Execute

Implement this method to execute code when the handle associated with this object becomes signaled.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### Parameters

*dwParam*<br/>
The user parameter.

*hObject*<br/>
The handle that has become signaled.

### Return Value

Return S_OK on success, or an error HRESULT on failure.

### Remarks

The handle and DWORD/pointer passed to this method were previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### Example

The following code shows a simple implementation of `IWorkerThreadClient::Execute`.

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iviewobjecteximpl-class_2.cpp)]

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[ActiveX Controls Interfaces](/windows/win32/com/activex-controls-interfaces)<br/>
[Tutorial](../../atl/active-template-library-atl-tutorial.md)<br/>
[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
