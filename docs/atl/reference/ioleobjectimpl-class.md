---
description: "Learn more about: IOleObjectImpl Class"
title: "IOleObjectImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IOleObjectImpl", "ATLCTL/ATL::IOleObjectImpl", "ATLCTL/ATL::IOleObjectImpl::Advise", "ATLCTL/ATL::IOleObjectImpl::Close", "ATLCTL/ATL::IOleObjectImpl::DoVerb", "ATLCTL/ATL::IOleObjectImpl::DoVerbDiscardUndo", "ATLCTL/ATL::IOleObjectImpl::DoVerbHide", "ATLCTL/ATL::IOleObjectImpl::DoVerbInPlaceActivate", "ATLCTL/ATL::IOleObjectImpl::DoVerbOpen", "ATLCTL/ATL::IOleObjectImpl::DoVerbPrimary", "ATLCTL/ATL::IOleObjectImpl::DoVerbShow", "ATLCTL/ATL::IOleObjectImpl::DoVerbUIActivate", "ATLCTL/ATL::IOleObjectImpl::EnumAdvise", "ATLCTL/ATL::IOleObjectImpl::EnumVerbs", "ATLCTL/ATL::IOleObjectImpl::GetClientSite", "ATLCTL/ATL::IOleObjectImpl::GetClipboardData", "ATLCTL/ATL::IOleObjectImpl::GetExtent", "ATLCTL/ATL::IOleObjectImpl::GetMiscStatus", "ATLCTL/ATL::IOleObjectImpl::GetMoniker", "ATLCTL/ATL::IOleObjectImpl::GetUserClassID", "ATLCTL/ATL::IOleObjectImpl::GetUserType", "ATLCTL/ATL::IOleObjectImpl::InitFromData", "ATLCTL/ATL::IOleObjectImpl::IsUpToDate", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbDiscardUndo", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbHide", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbInPlaceActivate", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbOpen", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbShow", "ATLCTL/ATL::IOleObjectImpl::OnPostVerbUIActivate", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbDiscardUndo", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbHide", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbInPlaceActivate", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbOpen", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbShow", "ATLCTL/ATL::IOleObjectImpl::OnPreVerbUIActivate", "ATLCTL/ATL::IOleObjectImpl::SetClientSite", "ATLCTL/ATL::IOleObjectImpl::SetColorScheme", "ATLCTL/ATL::IOleObjectImpl::SetExtent", "ATLCTL/ATL::IOleObjectImpl::SetHostNames", "ATLCTL/ATL::IOleObjectImpl::SetMoniker", "ATLCTL/ATL::IOleObjectImpl::Unadvise", "ATLCTL/ATL::IOleObjectImpl::Update"]
helpviewer_keywords: ["ActiveX controls [C++], communication between container and control", "IOleObject, ATL implementation", "IOleObjectImpl class"]
ms.assetid: 59750b2d-1633-4a51-a4c2-6455b6b90c45
---
# IOleObjectImpl Class

This class implements `IUnknown` and is the principal interface through which a container communicates with a control.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T>
class ATL_NO_VTABLE IOleObjectImpl : public IOleObject
```

#### Parameters

*T*<br/>
Your class, derived from `IOleObjectImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IOleObjectImpl::Advise](#advise)|Establishes an advisory connection with the control.|
|[IOleObjectImpl::Close](#close)|Changes the control state from running to loaded.|
|[IOleObjectImpl::DoVerb](#doverb)|Tells the control to perform one of its enumerated actions.|
|[IOleObjectImpl::DoVerbDiscardUndo](#doverbdiscardundo)|Tells the control to discard any undo state it is maintaining.|
|[IOleObjectImpl::DoVerbHide](#doverbhide)|Tells the control to remove its user interface from view.|
|[IOleObjectImpl::DoVerbInPlaceActivate](#doverbinplaceactivate)|Runs the control and installs its window, but does not install the control's user interface.|
|[IOleObjectImpl::DoVerbOpen](#doverbopen)|Causes the control to be open-edited in a separate window.|
|[IOleObjectImpl::DoVerbPrimary](#doverbprimary)|Performs the specified action when the user double-clicks the control. The control defines the action, usually to activate the control in-place.|
|[IOleObjectImpl::DoVerbShow](#doverbshow)|Shows a newly inserted control to the user.|
|[IOleObjectImpl::DoVerbUIActivate](#doverbuiactivate)|Activates the control in-place and shows the control's user interface, such as menus and toolbars.|
|[IOleObjectImpl::EnumAdvise](#enumadvise)|Enumerates the control's advisory connections.|
|[IOleObjectImpl::EnumVerbs](#enumverbs)|Enumerates actions for the control.|
|[IOleObjectImpl::GetClientSite](#getclientsite)|Retrieves the control's client site.|
|[IOleObjectImpl::GetClipboardData](#getclipboarddata)|Retrieves data from the Clipboard. The ATL implementation returns E_NOTIMPL.|
|[IOleObjectImpl::GetExtent](#getextent)|Retrieves the extent of the control's display area.|
|[IOleObjectImpl::GetMiscStatus](#getmiscstatus)|Retrieves the status of the control.|
|[IOleObjectImpl::GetMoniker](#getmoniker)|Retrieves the control's moniker. The ATL implementation returns E_NOTIMPL.|
|[IOleObjectImpl::GetUserClassID](#getuserclassid)|Retrieves the control's class identifier.|
|[IOleObjectImpl::GetUserType](#getusertype)|Retrieves the control's user-type name.|
|[IOleObjectImpl::InitFromData](#initfromdata)|Initializes the control from selected data. The ATL implementation returns E_NOTIMPL.|
|[IOleObjectImpl::IsUpToDate](#isuptodate)|Checks if the control is up to date. The ATL implementation returns S_OK.|
|[IOleObjectImpl::OnPostVerbDiscardUndo](#onpostverbdiscardundo)|Called by [DoVerbDiscardUndo](#doverbdiscardundo) after the undo state is discarded.|
|[IOleObjectImpl::OnPostVerbHide](#onpostverbhide)|Called by [DoVerbHide](#doverbhide) after the control is hidden.|
|[IOleObjectImpl::OnPostVerbInPlaceActivate](#onpostverbinplaceactivate)|Called by [DoVerbInPlaceActivate](#doverbinplaceactivate) after the control is activated in place.|
|[IOleObjectImpl::OnPostVerbOpen](#onpostverbopen)|Called by [DoVerbOpen](#doverbopen) after the control has been opened for editing in a separate window.|
|[IOleObjectImpl::OnPostVerbShow](#onpostverbshow)|Called by [DoVerbShow](#doverbshow) after the control has been made visible.|
|[IOleObjectImpl::OnPostVerbUIActivate](#onpostverbuiactivate)|Called by [DoVerbUIActivate](#doverbuiactivate) after the control's user interface has been activated.|
|[IOleObjectImpl::OnPreVerbDiscardUndo](#onpreverbdiscardundo)|Called by [DoVerbDiscardUndo](#doverbdiscardundo) before the undo state is discarded.|
|[IOleObjectImpl::OnPreVerbHide](#onpreverbhide)|Called by [DoVerbHide](#doverbhide) before the control is hidden.|
|[IOleObjectImpl::OnPreVerbInPlaceActivate](#onpreverbinplaceactivate)|Called by [DoVerbInPlaceActivate](#doverbinplaceactivate) before the control is activated in place.|
|[IOleObjectImpl::OnPreVerbOpen](#onpreverbopen)|Called by [DoVerbOpen](#doverbopen) before the control has been opened for editing in a separate window.|
|[IOleObjectImpl::OnPreVerbShow](#onpreverbshow)|Called by [DoVerbShow](#doverbshow) before the control has been made visible.|
|[IOleObjectImpl::OnPreVerbUIActivate](#onpreverbuiactivate)|Called by [DoVerbUIActivate](#doverbuiactivate) before the control's user interface has been activated.|
|[IOleObjectImpl::SetClientSite](#setclientsite)|Tells the control about its client site in the container.|
|[IOleObjectImpl::SetColorScheme](#setcolorscheme)|Recommends a color scheme to the control's application, if any. The ATL implementation returns E_NOTIMPL.|
|[IOleObjectImpl::SetExtent](#setextent)|Sets the extent of the control's display area.|
|[IOleObjectImpl::SetHostNames](#sethostnames)|Tells the control the names of the container application and container document.|
|[IOleObjectImpl::SetMoniker](#setmoniker)|Tells the control what its moniker is. The ATL implementation returns E_NOTIMPL.|
|[IOleObjectImpl::Unadvise](#unadvise)|Deletes an advisory connection with the control.|
|[IOleObjectImpl::Update](#update)|Updates the control. The ATL implementation returns S_OK.|

## Remarks

The [IOleObject](/windows/win32/api/oleidl/nn-oleidl-ioleobject) interface is the principal interface through which a container communicates with a control. Class `IOleObjectImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IOleObject`

`IOleObjectImpl`

## Requirements

**Header:** atlctl.h

## <a name="advise"></a> IOleObjectImpl::Advise

Establishes an advisory connection with the control.

```
STDMETHOD(Advise)(
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```

### Remarks

See [IOleObject::Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) in the Windows SDK.

## <a name="close"></a> IOleObjectImpl::Close

Changes the control state from running to loaded.

```
STDMETHOD(Close)(DWORD dwSaveOption);
```

### Remarks

Deactivates the control and destroys the control window if it exists. If the control class data member [CComControlBase::m_bRequiresSave](../../atl/reference/ccomcontrolbase-class.md#m_brequiressave) is TRUE and the *dwSaveOption* parameter is either OLECLOSE_SAVEIFDIRTY or OLECLOSE_PROMPTSAVE, the control properties are saved before closing.

The pointers held in the control class data members [CComControlBase::m_spInPlaceSite](../../atl/reference/ccomcontrolbase-class.md#m_spinplacesite) and [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#m_spadvisesink) are released, and the data members [CComControlBase::m_bNegotiatedWnd](../../atl/reference/ccomcontrolbase-class.md#m_bnegotiatedwnd), [CComControlBase::m_bWndless](../../atl/reference/ccomcontrolbase-class.md#m_bwndless), and [CComControlBase::m_bInPlaceSiteEx](../../atl/reference/ccomcontrolbase-class.md#m_binplacesiteex) are set to FALSE.

See [IOleObject::Close](/windows/win32/api/oleidl/nf-oleidl-ioleobject-close) in the Windows SDK.

## <a name="doverb"></a> IOleObjectImpl::DoVerb

Tells the control to perform one of its enumerated actions.

```
STDMETHOD(DoVerb)(
    LONG iVerb,
    LPMSG /* pMsg */,
    IOleClientSite* pActiveSite,
    LONG /* lindex */,
    HWND hwndParent,
    LPCRECT lprcPosRect);
```

### Remarks

Depending on the value of `iVerb`, one of the ATL `DoVerb` helper functions is called as follows:

|*iVerb* Value|DoVerb helper function called|
|-------------------|-----------------------------------|
|OLEIVERB_DISCARDUNDOSTATE|[DoVerbDiscardUndo](#doverbdiscardundo)|
|OLEIVERB_HIDE|[DoVerbHide](#doverbhide)|
|OLEIVERB_INPLACEACTIVATE|[DoVerbInPlaceActivate](#doverbinplaceactivate)|
|OLEIVERB_OPEN|[DoVerbOpen](#doverbopen)|
|OLEIVERB_PRIMARY|[DoVerbPrimary](#doverbprimary)|
|OLEIVERB_PROPERTIES|[CComControlBase::DoVerbProperties](../../atl/reference/ccomcontrolbase-class.md#doverbproperties)|
|OLEIVERB_SHOW|[DoVerbShow](#doverbshow)|
|OLEIVERB_UIACTIVATE|[DoVerbUIActivate](#doverbuiactivate)|

See [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb) in the Windows SDK.

## <a name="doverbdiscardundo"></a> IOleObjectImpl::DoVerbDiscardUndo

Tells the control to discard any undo state it is maintaining.

```
HRESULT DoVerbDiscardUndo(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control.

### Return Value

Returns S_OK.

## <a name="doverbhide"></a> IOleObjectImpl::DoVerbHide

Deactivates and removes the control's user interface, and hides the control.

```
HRESULT DoVerbHide(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control. Not used in the ATL implementation.

### Return Value

Returns S_OK.

## <a name="doverbinplaceactivate"></a> IOleObjectImpl::DoVerbInPlaceActivate

Runs the control and installs its window, but does not install the control's user interface.

```
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control. Not used in the ATL implementation.

### Return Value

One of the standard HRESULT values.

### Remarks

Activates the control in place by calling [CComControlBase::InPlaceActivate](../../atl/reference/ccomcontrolbase-class.md#inplaceactivate). Unless the control class's data member `m_bWindowOnly` is TRUE, `DoVerbInPlaceActivate` first attempts to activate the control as a windowless control (possible only if the container supports [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless)). If that fails, the function attempts to activate the control with extended features (possible only if the container supports [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex)). If that fails, the function attempts to activate the control with no extended features (possible only if the container supports [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite)). If activation succeeds, the function notifies the container the control has been activated.

## <a name="doverbopen"></a> IOleObjectImpl::DoVerbOpen

Causes the control to be open-edited in a separate window.

```
HRESULT DoVerbOpen(LPCRECT /* prcPosRect */, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control.

### Return Value

Returns S_OK.

## <a name="doverbprimary"></a> IOleObjectImpl::DoVerbPrimary

Defines the action taken when the user double-clicks the control.

```
HRESULT DoVerbPrimary(LPCRECT prcPosRect, HWND hwndParent);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control.

### Return Value

One of the standard HRESULT values.

### Remarks

By default, set to display the property pages. You can override this in your control class to invoke a different behavior on double-click; for example, play a video or go in-place active.

## <a name="doverbshow"></a> IOleObjectImpl::DoVerbShow

Tells the container to make the control visible.

```
HRESULT DoVerbShow(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control. Not used in the ATL implementation.

### Return Value

One of the standard HRESULT values.

## <a name="doverbuiactivate"></a> IOleObjectImpl::DoVerbUIActivate

Activates the control's user interface and notifies the container that its menus are being replaced by composite menus.

```
HRESULT DoVerbUIActivate(LPCRECT prcPosRect, HWND /* hwndParent */);
```

### Parameters

*prcPosRec*<br/>
[in] Pointer to the rectangle the container wants the control to draw into.

*hwndParent*<br/>
[in] Handle of the window containing the control. Not used in the ATL implementation.

### Return Value

One of the standard HRESULT values.

## <a name="enumadvise"></a> IOleObjectImpl::EnumAdvise

Supplies an enumeration of registered advisory connections for this control.

```
STDMETHOD(EnumAdvise)(IEnumSTATDATA** ppenumAdvise);
```

### Remarks

See [IOleObject::EnumAdvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumadvise) in the Windows SDK.

## <a name="enumverbs"></a> IOleObjectImpl::EnumVerbs

Supplies an enumeration of registered actions (verbs) for this control by calling `OleRegEnumVerbs`.

```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```

### Remarks

You can add verbs to your project's .rgs file. For example, see CIRCCTL.RGS in the [CIRC](../../overview/visual-cpp-samples.md) sample.

See [IOleObject::EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs) in the Windows SDK.

## <a name="getclientsite"></a> IOleObjectImpl::GetClientSite

Puts the pointer in the control class data member [CComControlBase::m_spClientSite](../../atl/reference/ccomcontrolbase-class.md#m_spclientsite) into *ppClientSite* and increments the reference count on the pointer.

```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```

### Remarks

See [IOleObject::GetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclientsite) in the Windows SDK.

## <a name="getclipboarddata"></a> IOleObjectImpl::GetClipboardData

Retrieves data from the Clipboard.

```
STDMETHOD(GetClipboardData)(
    DWORD /* dwReserved */,
    IDataObject** /* ppDataObject */);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleObject::GetClipboardData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getclipboarddata) in the Windows SDK.

## <a name="getextent"></a> IOleObjectImpl::GetExtent

Retrieves a running control's display size in HIMETRIC units (0.01 millimeter per unit).

```
STDMETHOD(GetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### Remarks

The size is stored in the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent).

See [IOleObject::GetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getextent) in the Windows SDK.

## <a name="getmiscstatus"></a> IOleObjectImpl::GetMiscStatus

Returns a pointer to registered status information for the control by calling `OleRegGetMiscStatus`.

```
STDMETHOD(GetMiscStatus)(
    DWORD dwAspect,
    DWORD* pdwStatus);
```

### Remarks

The status information includes behaviors supported by the control and presentation data. You can add status information to your project's .rgs file.

See [IOleObject::GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) in the Windows SDK.

## <a name="getmoniker"></a> IOleObjectImpl::GetMoniker

Retrieves the control's moniker.

```
STDMETHOD(GetMoniker)(
    DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker** /* ppmk */);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleObject::GetMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmoniker) in the Windows SDK.

## <a name="getuserclassid"></a> IOleObjectImpl::GetUserClassID

Returns the control's class identifier.

```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```

### Remarks

See [IOleObject::GetUserClassID](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getuserclassid) in the Windows SDK.

## <a name="getusertype"></a> IOleObjectImpl::GetUserType

Returns the control's user-type name by calling `OleRegGetUserType`.

```
STDMETHOD(GetUserType)(
    DWORD dwFormOfType,
    LPOLESTR* pszUserType);
```

### Remarks

The user-type name is used for display in user-interfaces elements such as menus and dialog boxes. You can change the user-type name in your project's .rgs file.

See [IOleObject::GetUserType](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getusertype) in the Windows SDK.

## <a name="initfromdata"></a> IOleObjectImpl::InitFromData

Initializes the control from selected data.

```
STDMETHOD(InitFromData)(
    IDataObject* /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleObject::InitFromData](/windows/win32/api/oleidl/nf-oleidl-ioleobject-initfromdata) in the Windows SDK.

## <a name="isuptodate"></a> IOleObjectImpl::IsUpToDate

Checks if the control is up to date.

```
STDMETHOD(IsUpToDate)(void);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleObject::IsUpToDate](/windows/win32/api/oleidl/nf-oleidl-ioleobject-isuptodate) in the Windows SDK.

## <a name="onpostverbdiscardundo"></a> IOleObjectImpl::OnPostVerbDiscardUndo

Called by [DoVerbDiscardUndo](#doverbdiscardundo) after the undo state is discarded.

```
HRESULT OnPostVerbDiscardUndo();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the undo state is discarded.

## <a name="onpostverbhide"></a> IOleObjectImpl::OnPostVerbHide

Called by [DoVerbHide](#doverbhide) after the control is hidden.

```
HRESULT OnPostVerbHide();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the control is hidden.

## <a name="onpostverbinplaceactivate"></a> IOleObjectImpl::OnPostVerbInPlaceActivate

Called by [DoVerbInPlaceActivate](#doverbinplaceactivate) after the control is activated in place.

```
HRESULT OnPostVerbInPlaceActivate();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the control is activated in place.

## <a name="onpostverbopen"></a> IOleObjectImpl::OnPostVerbOpen

Called by [DoVerbOpen](#doverbopen) after the control has been opened for editing in a separate window.

```
HRESULT OnPostVerbOpen();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the control has been opened for editing in a separate window.

## <a name="onpostverbshow"></a> IOleObjectImpl::OnPostVerbShow

Called by [DoVerbShow](#doverbshow) after the control has been made visible.

```
HRESULT OnPostVerbShow();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the control has been made visible.

## <a name="onpostverbuiactivate"></a> IOleObjectImpl::OnPostVerbUIActivate

Called by [DoVerbUIActivate](#doverbuiactivate) after the control's user interface has been activated.

```
HRESULT OnPostVerbUIActivate();
```

### Return Value

Returns S_OK.

### Remarks

Override this method with code you want executed after the control's user interface has been activated.

## <a name="onpreverbdiscardundo"></a> IOleObjectImpl::OnPreVerbDiscardUndo

Called by [DoVerbDiscardUndo](#doverbdiscardundo) before the undo state is discarded.

```
HRESULT OnPreVerbDiscardUndo();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the undo state from being discarded, override this method to return an error HRESULT.

## <a name="onpreverbhide"></a> IOleObjectImpl::OnPreVerbHide

Called by [DoVerbHide](#doverbhide) before the control is hidden.

```
HRESULT OnPreVerbHide();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the control from being hidden, override this method to return an error HRESULT.

## <a name="onpreverbinplaceactivate"></a> IOleObjectImpl::OnPreVerbInPlaceActivate

Called by [DoVerbInPlaceActivate](#doverbinplaceactivate) before the control is activated in place.

```
HRESULT OnPreVerbInPlaceActivate();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the control from being activated in place, override this method to return an error HRESULT.

## <a name="onpreverbopen"></a> IOleObjectImpl::OnPreVerbOpen

Called by [DoVerbOpen](#doverbopen) before the control has been opened for editing in a separate window.

```
HRESULT OnPreVerbOpen();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the control from being opened for editing in a separate window, override this method to return an error HRESULT.

## <a name="onpreverbshow"></a> IOleObjectImpl::OnPreVerbShow

Called by [DoVerbShow](#doverbshow) before the control has been made visible.

```
HRESULT OnPreVerbShow();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the control from being made visible, override this method to return an error HRESULT.

## <a name="onpreverbuiactivate"></a> IOleObjectImpl::OnPreVerbUIActivate

Called by [DoVerbUIActivate](#doverbuiactivate) before the control's user interface has been activated.

```
HRESULT OnPreVerbUIActivate();
```

### Return Value

Returns S_OK.

### Remarks

To prevent the control's user interface from being activated, override this method to return an error HRESULT.

## <a name="setclientsite"></a> IOleObjectImpl::SetClientSite

Tells the control about its client site in the container.

```
STDMETHOD(SetClientSite)(IOleClientSite* pClientSite);
```

### Remarks

The method then returns S_OK.

See [IOleObject::SetClientSite](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setclientsite) in the Windows SDK.

## <a name="setcolorscheme"></a> IOleObjectImpl::SetColorScheme

Recommends a color scheme to the control's application, if any.

```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleObject::SetColorScheme](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setcolorscheme) in the Windows SDK.

## <a name="setextent"></a> IOleObjectImpl::SetExtent

Sets the extent of the control's display area.

```
STDMETHOD(SetExtent)(
    DWORD dwDrawAspect,
    SIZEL* psizel);
```

### Remarks

Otherwise, `SetExtent` stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#m_sizeextent). This value is in HIMETRIC units (0.01 millimeter per unit).

If the control class data member [CComControlBase::m_bResizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_bresizenatural) is TRUE, `SetExtent` also stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#m_sizenatural).

If the control class data member [CComControlBase::m_bRecomposeOnResize](../../atl/reference/ccomcontrolbase-class.md#m_brecomposeonresize) is TRUE, `SetExtent` calls `SendOnDataChange` and `SendOnViewChange` to notify all advisory sinks registered with the advise holder that the control size has changed.

See [IOleObject::SetExtent](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setextent) in the Windows SDK.

## <a name="sethostnames"></a> IOleObjectImpl::SetHostNames

Tells the control the names of the container application and container document.

```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */, LPCOLESTR /* szContainerObj */);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleObject::SetHostNames](/windows/win32/api/oleidl/nf-oleidl-ioleobject-sethostnames) in the Windows SDK.

## <a name="setmoniker"></a> IOleObjectImpl::SetMoniker

Tells the control what its moniker is.

```
STDMETHOD(SetMoniker)(
    DWORD /* dwWhichMoniker */,
    IMoniker** /* pmk */);
```

### Return Value

Returns E_NOTIMPL.

### Remarks

See [IOleObject::SetMoniker](/windows/win32/api/oleidl/nf-oleidl-ioleobject-setmoniker) in the Windows SDK.

## <a name="unadvise"></a> IOleObjectImpl::Unadvise

Deletes the advisory connection stored in the control class's `m_spOleAdviseHolder` data member.

```
STDMETHOD(Unadvise)(DWORD dwConnection);
```

### Remarks

See [IOleObject::Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) in the Windows SDK.

## <a name="update"></a> IOleObjectImpl::Update

Updates the control.

```
STDMETHOD(Update)(void);
```

### Return Value

Returns S_OK.

### Remarks

See [IOleObject::Update](/windows/win32/api/oleidl/nf-oleidl-ioleobject-update) in the Windows SDK.

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[ActiveX Controls Interfaces](/windows/win32/com/activex-controls-interfaces)<br/>
[Class Overview](../../atl/atl-class-overview.md)
