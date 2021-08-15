---
description: "Learn more about: CComControlBase Class"
title: "CComControlBase Class"
ms.date: "11/04/2016"
f1_keywords: ["CComControlBase", "ATLCTL/ATL::CComControlBase", "ATLCTL/ATL::CComControlBase::AppearanceType", "ATLCTL/ATL::CComControlBase::CComControlBase", "ATLCTL/ATL::CComControlBase::ControlQueryInterface", "ATLCTL/ATL::CComControlBase::DoesVerbActivate", "ATLCTL/ATL::CComControlBase::DoesVerbUIActivate", "ATLCTL/ATL::CComControlBase::DoVerbProperties", "ATLCTL/ATL::CComControlBase::FireViewChange", "ATLCTL/ATL::CComControlBase::GetAmbientAppearance", "ATLCTL/ATL::CComControlBase::GetAmbientAutoClip", "ATLCTL/ATL::CComControlBase::GetAmbientBackColor", "ATLCTL/ATL::CComControlBase::GetAmbientCharSet", "ATLCTL/ATL::CComControlBase::GetAmbientCodePage", "ATLCTL/ATL::CComControlBase::GetAmbientDisplayAsDefault", "ATLCTL/ATL::CComControlBase::GetAmbientDisplayName", "ATLCTL/ATL::CComControlBase::GetAmbientFont", "ATLCTL/ATL::CComControlBase::GetAmbientFontDisp", "ATLCTL/ATL::CComControlBase::GetAmbientForeColor", "ATLCTL/ATL::CComControlBase::GetAmbientLocaleID", "ATLCTL/ATL::CComControlBase::GetAmbientMessageReflect", "ATLCTL/ATL::CComControlBase::GetAmbientPalette", "ATLCTL/ATL::CComControlBase::GetAmbientProperty", "ATLCTL/ATL::CComControlBase::GetAmbientRightToLeft", "ATLCTL/ATL::CComControlBase::GetAmbientScaleUnits", "ATLCTL/ATL::CComControlBase::GetAmbientShowGrabHandles", "ATLCTL/ATL::CComControlBase::GetAmbientShowHatching", "ATLCTL/ATL::CComControlBase::GetAmbientSupportsMnemonics", "ATLCTL/ATL::CComControlBase::GetAmbientTextAlign", "ATLCTL/ATL::CComControlBase::GetAmbientTopToBottom", "ATLCTL/ATL::CComControlBase::GetAmbientUIDead", "ATLCTL/ATL::CComControlBase::GetAmbientUserMode", "ATLCTL/ATL::CComControlBase::GetDirty", "ATLCTL/ATL::CComControlBase::GetZoomInfo", "ATLCTL/ATL::CComControlBase::InPlaceActivate", "ATLCTL/ATL::CComControlBase::InternalGetSite", "ATLCTL/ATL::CComControlBase::OnDraw", "ATLCTL/ATL::CComControlBase::OnDrawAdvanced", "ATLCTL/ATL::CComControlBase::OnKillFocus", "ATLCTL/ATL::CComControlBase::OnMouseActivate", "ATLCTL/ATL::CComControlBase::OnPaint", "ATLCTL/ATL::CComControlBase::OnSetFocus", "ATLCTL/ATL::CComControlBase::PreTranslateAccelerator", "ATLCTL/ATL::CComControlBase::SendOnClose", "ATLCTL/ATL::CComControlBase::SendOnDataChange", "ATLCTL/ATL::CComControlBase::SendOnRename", "ATLCTL/ATL::CComControlBase::SendOnSave", "ATLCTL/ATL::CComControlBase::SendOnViewChange", "ATLCTL/ATL::CComControlBase::SetControlFocus", "ATLCTL/ATL::CComControlBase::SetDirty", "ATLCTL/ATL::CComControlBase::m_bAutoSize", "ATLCTL/ATL::CComControlBase::m_bDrawFromNatural", "ATLCTL/ATL::CComControlBase::m_bDrawGetDataInHimetric", "ATLCTL/ATL::CComControlBase::m_bInPlaceActive", "ATLCTL/ATL::CComControlBase::m_bInPlaceSiteEx", "ATLCTL/ATL::CComControlBase::m_bNegotiatedWnd", "ATLCTL/ATL::CComControlBase::m_bRecomposeOnResize", "ATLCTL/ATL::CComControlBase::m_bRequiresSave", "ATLCTL/ATL::CComControlBase::m_bResizeNatural", "ATLCTL/ATL::CComControlBase::m_bUIActive", "ATLCTL/ATL::CComControlBase::m_bUsingWindowRgn", "ATLCTL/ATL::CComControlBase::m_bWasOnceWindowless", "ATLCTL/ATL::CComControlBase::m_bWindowOnly", "ATLCTL/ATL::CComControlBase::m_bWndLess", "ATLCTL/ATL::CComControlBase::m_hWndCD", "ATLCTL/ATL::CComControlBase::m_nFreezeEvents", "ATLCTL/ATL::CComControlBase::m_rcPos", "ATLCTL/ATL::CComControlBase::m_sizeExtent", "ATLCTL/ATL::CComControlBase::m_sizeNatural", "ATLCTL/ATL::CComControlBase::m_spAdviseSink", "ATLCTL/ATL::CComControlBase::m_spAmbientDispatch", "ATLCTL/ATL::CComControlBase::m_spClientSite", "ATLCTL/ATL::CComControlBase::m_spDataAdviseHolder", "ATLCTL/ATL::CComControlBase::m_spInPlaceSite", "ATLCTL/ATL::CComControlBase::m_spOleAdviseHolder"]
helpviewer_keywords: ["CComControlBase class"]
ms.assetid: 3d1bf022-acf2-4092-8283-ff8cee6332f3
---
# CComControlBase Class

This class provides methods for creating and managing ATL controls.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class ATL_NO_VTABLE CComControlBase
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CComControlBase::AppearanceType](#appearancetype)|Override if your `m_nAppearance` stock property isn't of type **`short`**.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComControlBase::CComControlBase](#ccomcontrolbase)|The constructor.|
|[CComControlBase::~CComControlBase](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CComControlBase::ControlQueryInterface](#controlqueryinterface)|Retrieves a pointer to the requested interface.|
|[CComControlBase::DoesVerbActivate](#doesverbactivate)|Checks that the *iVerb* parameter used by `IOleObjectImpl::DoVerb` either activates the control's user interface (*iVerb* equals OLEIVERB_UIACTIVATE), defines the action taken when the user double-clicks the control (*iVerb* equals OLEIVERB_PRIMARY), displays the control (*iVerb* equals OLEIVERB_SHOW), or activates the control (*iVerb* equals OLEIVERB_INPLACEACTIVATE).|
|[CComControlBase::DoesVerbUIActivate](#doesverbuiactivate)|Checks that the *iVerb* parameter used by `IOleObjectImpl::DoVerb` causes the control's user interface to activate and returns TRUE.|
|[CComControlBase::DoVerbProperties](#doverbproperties)|Displays the control's property pages.|
|[CComControlBase::FireViewChange](#fireviewchange)|Call this method to tell the container to redraw the control, or notify the registered advise sinks that the control's view has changed.|
|[CComControlBase::GetAmbientAppearance](#getambientappearance)|Retrieves DISPID_AMBIENT_APPEARANCE, the current appearance setting for the control: 0 for flat and 1 for 3D.|
|[CComControlBase::GetAmbientAutoClip](#getambientautoclip)|Retrieves DISPID_AMBIENT_AUTOCLIP, a flag indicating whether the container supports automatic clipping of the control display area.|
|[CComControlBase::GetAmbientBackColor](#getambientbackcolor)|Retrieves DISPID_AMBIENT_BACKCOLOR, the ambient background color for all controls, defined by the container.|
|[CComControlBase::GetAmbientCharSet](#getambientcharset)|Retrieves DISPID_AMBIENT_CHARSET, the ambient character set for all controls, defined by the container.|
|[CComControlBase::GetAmbientCodePage](#getambientcodepage)|Retrieves DISPID_AMBIENT_CODEPAGE, the ambient character set for all controls, defined by the container.|
|[CComControlBase::GetAmbientDisplayAsDefault](#getambientdisplayasdefault)|Retrieves DISPID_AMBIENT_DISPLAYASDEFAULT, a flag that is TRUE if the container has marked the control in this site to be a default button, and therefore a button control should draw itself with a thicker frame.|
|[CComControlBase::GetAmbientDisplayName](#getambientdisplayname)|Retrieves DISPID_AMBIENT_DISPLAYNAME, the name the container has supplied to the control.|
|[CComControlBase::GetAmbientFont](#getambientfont)|Retrieves a pointer to the container's ambient `IFont` interface.|
|[CComControlBase::GetAmbientFontDisp](#getambientfontdisp)|Retrieves a pointer to the container's ambient `IFontDisp` dispatch interface.|
|[CComControlBase::GetAmbientForeColor](#getambientforecolor)|Retrieves DISPID_AMBIENT_FORECOLOR, the ambient foreground color for all controls, defined by the container.|
|[CComControlBase::GetAmbientLocaleID](#getambientlocaleid)|Retrieves DISPID_AMBIENT_LOCALEID, the identifier of the language used by the container.|
|[CComControlBase::GetAmbientMessageReflect](#getambientmessagereflect)|Retrieves DISPID_AMBIENT_MESSAGEREFLECT, a flag indicating whether the container wants to receive window messages (such as WM_DRAWITEM) as events.|
|[CComControlBase::GetAmbientPalette](#getambientpalette)|Retrieves DISPID_AMBIENT_PALETTE, used to access the container's HPALETTE.|
|[CComControlBase::GetAmbientProperty](#getambientproperty)|Retrieves the container property specified by *id*.|
|[CComControlBase::GetAmbientRightToLeft](#getambientrighttoleft)|Retrieves DISPID_AMBIENT_RIGHTTOLEFT, the direction in which content is displayed by the container.|
|[CComControlBase::GetAmbientScaleUnits](#getambientscaleunits)|Retrieves DISPID_AMBIENT_SCALEUNITS, the container's ambient units (such as inches or centimeters) for labeling displays.|
|[CComControlBase::GetAmbientShowGrabHandles](#getambientshowgrabhandles)|Retrieves DISPID_AMBIENT_SHOWGRABHANDLES, a flag indicating whether the container allows the control to display grab handles for itself when active.|
|[CComControlBase::GetAmbientShowHatching](#getambientshowhatching)|Retrieves DISPID_AMBIENT_SHOWHATCHING, a flag indicating whether the container allows the control to display itself with a hatched pattern when the UI is active.|
|[CComControlBase::GetAmbientSupportsMnemonics](#getambientsupportsmnemonics)|Retrieves DISPID_AMBIENT_SUPPORTSMNEMONICS, a flag indicating whether the container supports keyboard mnemonics.|
|[CComControlBase::GetAmbientTextAlign](#getambienttextalign)|Retrieves DISPID_AMBIENT_TEXTALIGN, the text alignment preferred by the container: 0 for general alignment (numbers right, text left), 1 for left alignment, 2 for center alignment, and 3 for right alignment.|
|[CComControlBase::GetAmbientTopToBottom](#getambienttoptobottom)|Retrieves DISPID_AMBIENT_TOPTOBOTTOM, the direction in which content is displayed by the container.|
|[CComControlBase::GetAmbientUIDead](#getambientuidead)|Retrieves DISPID_AMBIENT_UIDEAD, a flag indicating whether the container wants the control to respond to user-interface actions.|
|[CComControlBase::GetAmbientUserMode](#getambientusermode)|Retrieves DISPID_AMBIENT_USERMODE, a flag indicating whether the container is in run-mode (TRUE) or design-mode (FALSE).|
|[CComControlBase::GetDirty](#getdirty)|Returns the value of data member `m_bRequiresSave`.|
|[CComControlBase::GetZoomInfo](#getzoominfo)|Retrieves the x and y values of the numerator and denominator of the zoom factor for a control activated for in-place editing.|
|[CComControlBase::InPlaceActivate](#inplaceactivate)|Causes the control to transition from the inactive state to whatever state the verb in *iVerb* indicates.|
|[CComControlBase::InternalGetSite](#internalgetsite)|Call this method to query the control site for a pointer to the identified interface.|
|[CComControlBase::OnDraw](#ondraw)|Override this method to draw your control.|
|[CComControlBase::OnDrawAdvanced](#ondrawadvanced)|The default `OnDrawAdvanced` prepares a normalized device context for drawing, then calls your control class's `OnDraw` method.|
|[CComControlBase::OnKillFocus](#onkillfocus)|Checks that the control is in-place active and has a valid control site, then informs the container that the control has lost focus.|
|[CComControlBase::OnMouseActivate](#onmouseactivate)|Checks that the UI is in user mode, then activates the control.|
|[CComControlBase::OnPaint](#onpaint)|Prepares the container for painting, gets the control's client area, then calls the control class's `OnDraw` method.|
|[CComControlBase::OnSetFocus](#onsetfocus)|Checks that the control is in-place active and has a valid control site, then informs the container the control has gained focus.|
|[CComControlBase::PreTranslateAccelerator](#pretranslateaccelerator)|Override this method to provide your own keyboard accelerator handlers.|
|[CComControlBase::SendOnClose](#sendonclose)|Notifies all advisory sinks registered with the advise holder that the control has been closed.|
|[CComControlBase::SendOnDataChange](#sendondatachange)|Notifies all advisory sinks registered with the advise holder that the control data has changed.|
|[CComControlBase::SendOnRename](#sendonrename)|Notifies all advisory sinks registered with the advise holder that the control has a new moniker.|
|[CComControlBase::SendOnSave](#sendonsave)|Notifies all advisory sinks registered with the advise holder that the control has been saved.|
|[CComControlBase::SendOnViewChange](#sendonviewchange)|Notifies all registered advisory sinks that the control's view has changed.|
|[CComControlBase::SetControlFocus](#setcontrolfocus)|Sets or removes the keyboard focus to or from the control.|
|[CComControlBase::SetDirty](#setdirty)|Sets the data member `m_bRequiresSave` to the value in *bDirty*.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CComControlBase::m_bAutoSize](#m_bautosize)|Flag indicating the control cannot be any other size.|
|[CComControlBase::m_bDrawFromNatural](#m_bdrawfromnatural)|Flag indicating that `IDataObjectImpl::GetData` and `CComControlBase::GetZoomInfo` should set the control size from `m_sizeNatural` rather than from `m_sizeExtent`.|
|[CComControlBase::m_bDrawGetDataInHimetric](#m_bdrawgetdatainhimetric)|Flag indicating that `IDataObjectImpl::GetData` should use HIMETRIC units and not pixels when drawing.|
|[CComControlBase::m_bInPlaceActive](#m_binplaceactive)|Flag indicating the control is in-place active.|
|[CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex)|Flag indicating the container supports the `IOleInPlaceSiteEx` interface and OCX96 control features, such as windowless and flicker-free controls.|
|[CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd)|Flag indicating whether or not the control has negotiated with the container about support for OCX96 control features (such as flicker-free and windowless controls), and whether the control is windowed or windowless.|
|[CComControlBase::m_bRecomposeOnResize](#m_brecomposeonresize)|Flag indicating the control wants to recompose its presentation when the container changes the control's display size.|
|[CComControlBase::m_bRequiresSave](#m_brequiressave)|Flag indicating the control has changed since it was last saved.|
|[CComControlBase::m_bResizeNatural](#m_bresizenatural)|Flag indicating the control wants to resize its natural extent (its unscaled physical size) when the container changes the control's display size.|
|[CComControlBase::m_bUIActive](#m_buiactive)|Flag indicating the control's user interface, such as menus and toolbars, is active.|
|[CComControlBase::m_bUsingWindowRgn](#m_busingwindowrgn)|Flag indicating the control is using the container-supplied window region.|
|[CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless)|Flag indicating the control has been windowless, but may or may not be windowless now.|
|[CComControlBase::m_bWindowOnly](#m_bwindowonly)|Flag indicating the control should be windowed, even if the container supports windowless controls.|
|[CComControlBase::m_bWndLess](#m_bwndless)|Flag indicating the control is windowless.|
|[CComControlBase::m_hWndCD](#m_hwndcd)|Contains a reference to the window handle associated with the control.|
|[CComControlBase::m_nFreezeEvents](#m_nfreezeevents)|A count of the number of times the container has frozen events (refused to accept events) without an intervening thaw of events (acceptance of events).|
|[CComControlBase::m_rcPos](#m_rcpos)|The position in pixels of the control, expressed in the coordinates of the container.|
|[CComControlBase::m_sizeExtent](#m_sizeextent)|The extent of the control in HIMETRIC units (each unit is 0.01 millimeters) for a particular display.|
|[CComControlBase::m_sizeNatural](#m_sizenatural)|The physical size of the control in HIMETRIC units (each unit is 0.01 millimeters).|
|[CComControlBase::m_spAdviseSink](#m_spadvisesink)|A direct pointer to the advisory connection on the container (the container's [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)).|
|[CComControlBase::m_spAmbientDispatch](#m_spambientdispatch)|A `CComDispatchDriver` object that lets you retrieve and set the container's properties through an `IDispatch` pointer.|
|[CComControlBase::m_spClientSite](#m_spclientsite)|A pointer to the control's client site within the container.|
|[CComControlBase::m_spDataAdviseHolder](#m_spdataadviseholder)|Provides a standard means to hold advisory connections between data objects and advise sinks.|
|[CComControlBase::m_spInPlaceSite](#m_spinplacesite)|A pointer to the container's [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex), or [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interface pointer.|
|[CComControlBase::m_spOleAdviseHolder](#m_spoleadviseholder)|Provides a standard implementation of a way to hold advisory connections.|

## Remarks

This class provides methods for creating and managing ATL controls. [CComControl Class](../../atl/reference/ccomcontrol-class.md) derives from `CComControlBase`. When you create a Standard Control or DHTML control using the ATL Control Wizard, the wizard will automatically derive your class from `CComControlBase`.

For more information about creating a control, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md). For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).

## Requirements

**Header:** atlctl.h

## <a name="appearancetype"></a> CComControlBase::AppearanceType

Override if your `m_nAppearance` stock property isn't of type **`short`**.

```
typedef short AppearanceType;
```

### Remarks

The ATL Control Wizard adds `m_nAppearance` stock property of type short. Override `AppearanceType` if you use a different data type.

## <a name="ccomcontrolbase"></a> CComControlBase::CComControlBase

The constructor.

```
CComControlBase(HWND& h);
```

### Parameters

*h*<br/>
The handle to the window associated with the control.

### Remarks

Initializes the control size to 5080X5080 HIMETRIC units (2"X2") and initializes the `CComControlBase` data member values to NULL or FALSE.

## <a name="dtor"></a> CComControlBase::~CComControlBase

The destructor.

```
~CComControlBase();
```

### Remarks

If the control is windowed, `~CComControlBase` destroys it by calling [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow).

## <a name="controlqueryinterface"></a> CComControlBase::ControlQueryInterface

Retrieves a pointer to the requested interface.

```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```

### Parameters

*iid*<br/>
The GUID of the interface being requested.

*ppv*<br/>
A pointer to the interface pointer identified by *iid*, or NULL if the interface is not found.

### Remarks

Only handles interfaces in the COM map table.

### Example

[!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]

## <a name="doesverbactivate"></a> CComControlBase::DoesVerbActivate

Checks that the *iVerb* parameter used by `IOleObjectImpl::DoVerb` either activates the control's user interface (*iVerb* equals OLEIVERB_UIACTIVATE), defines the action taken when the user double-clicks the control (*iVerb* equals OLEIVERB_PRIMARY), displays the control (*iVerb* equals OLEIVERB_SHOW), or activates the control (*iVerb* equals OLEIVERB_INPLACEACTIVATE).

```
BOOL DoesVerbActivate(LONG iVerb);
```

### Parameters

*iVerb*<br/>
Value indicating the action to be performed by `DoVerb`.

### Return Value

Returns TRUE if *iVerb* equals OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW, or OLEIVERB_INPLACEACTIVATE; otherwise, returns FALSE.

### Remarks

You can override this method to define your own activation verb.

## <a name="doesverbuiactivate"></a> CComControlBase::DoesVerbUIActivate

Checks that the *iVerb* parameter used by `IOleObjectImpl::DoVerb` causes the control's user interface to activate and returns TRUE.

```
BOOL DoesVerbUIActivate(LONG iVerb);
```

### Parameters

*iVerb*<br/>
Value indicating the action to be performed by `DoVerb`.

### Return Value

Returns TRUE if *iVerb* equals OLEIVERB_UIACTIVATE, OLEIVERB_PRIMARY, OLEIVERB_SHOW, or OLEIVERB_INPLACEACTIVATE. Otherwise, the method returns FALSE.

## <a name="doverbproperties"></a> CComControlBase::DoVerbProperties

Displays the control's property pages.

```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */, HWND hwndParent);
```

### Parameters

*prcPosRec*<br/>
Reserved.

*hwndParent*<br/>
Handle of the window containing the control.

### Return Value

One of the standard HRESULT values.

### Example

[!code-cpp[NVC_ATL_COM#19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]

[!code-cpp[NVC_ATL_COM#20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]

## <a name="fireviewchange"></a> CComControlBase::FireViewChange

Call this method to tell the container to redraw the control, or notify the registered advise sinks that the control's view has changed.

```
HRESULT FireViewChange();
```

### Return Value

One of the standard HRESULT values.

### Remarks

If the control is active (the control class data member [CComControlBase::m_bInPlaceActive](#m_binplaceactive) is TRUE), notifies the container that you want to redraw the entire control. If the control is inactive, notifies the control's registered advise sinks (through the control class data member [CComControlBase::m_spAdviseSink](#m_spadvisesink)) that the control's view has changed.

### Example

[!code-cpp[NVC_ATL_COM#21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]

## <a name="getambientappearance"></a> CComControlBase::GetAmbientAppearance

Retrieves DISPID_AMBIENT_APPEARANCE, the current appearance setting for the control: 0 for flat and 1 for 3D.

```
HRESULT GetAmbientAppearance(short& nAppearance);
```

### Parameters

*nAppearance*<br/>
The property DISPID_AMBIENT_APPEARANCE.

### Return Value

One of the standard HRESULT values.

### Example

[!code-cpp[NVC_ATL_COM#22](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]

## <a name="getambientautoclip"></a> CComControlBase::GetAmbientAutoClip

Retrieves DISPID_AMBIENT_AUTOCLIP, a flag indicating whether the container supports automatic clipping of the control display area.

```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```

### Parameters

*bAutoClip*<br/>
The property DISPID_AMBIENT_AUTOCLIP.

### Return Value

One of the standard HRESULT values.

## <a name="getambientbackcolor"></a> CComControlBase::GetAmbientBackColor

Retrieves DISPID_AMBIENT_BACKCOLOR, the ambient background color for all controls, defined by the container.

```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```

### Parameters

*BackColor*<br/>
The property DISPID_AMBIENT_BACKCOLOR.

### Return Value

One of the standard HRESULT values.

## <a name="getambientcharset"></a> CComControlBase::GetAmbientCharSet

Retrieves DISPID_AMBIENT_CHARSET, the ambient character set for all controls, defined by the container.

```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```

### Parameters

*bstrCharSet*<br/>
The property DISPID_AMBIENT_CHARSET.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="getambientcodepage"></a> CComControlBase::GetAmbientCodePage

Retrieves DISPID_AMBIENT_CODEPAGE, the ambient code page for all controls, defined by the container.

```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```

### Parameters

*ulCodePage*<br/>
The property DISPID_AMBIENT_CODEPAGE.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="getambientdisplayasdefault"></a> CComControlBase::GetAmbientDisplayAsDefault

Retrieves DISPID_AMBIENT_DISPLAYASDEFAULT, a flag that is TRUE if the container has marked the control in this site to be a default button, and therefore a button control should draw itself with a thicker frame.

```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```

### Parameters

*bDisplayAsDefault*<br/>
The property DISPID_AMBIENT_DISPLAYASDEFAULT.

### Return Value

One of the standard HRESULT values.

## <a name="getambientdisplayname"></a> CComControlBase::GetAmbientDisplayName

Retrieves DISPID_AMBIENT_DISPLAYNAME, the name the container has supplied to the control.

```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```

### Parameters

*bstrDisplayName*<br/>
The property DISPID_AMBIENT_DISPLAYNAME.

### Return Value

One of the standard HRESULT values.

## <a name="getambientfont"></a> CComControlBase::GetAmbientFont

Retrieves a pointer to the container's ambient `IFont` interface.

```
HRESULT GetAmbientFont(IFont** ppFont);
```

### Parameters

*ppFont*<br/>
A pointer to the container's ambient [IFont](/windows/win32/api/ocidl/nn-ocidl-ifont) interface.

### Return Value

One of the standard HRESULT values.

### Remarks

If the property is NULL, the pointer is NULL. If the pointer is not NULL, the caller must release the pointer.

## <a name="getambientfontdisp"></a> CComControlBase::GetAmbientFontDisp

Retrieves a pointer to the container's ambient `IFontDisp` dispatch interface.

```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```

### Parameters

*ppFont*<br/>
A pointer to the container's ambient [IFontDisp](/windows/win32/api/ocidl/nn-ocidl-ifontdisp) dispatch interface.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

If the property is NULL, the pointer is NULL. If the pointer is not NULL, the caller must release the pointer.

## <a name="getambientforecolor"></a> CComControlBase::GetAmbientForeColor

Retrieves DISPID_AMBIENT_FORECOLOR, the ambient foreground color for all controls, defined by the container.

```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```

### Parameters

*ForeColor*<br/>
The property DISPID_AMBIENT_FORECOLOR.

### Return Value

One of the standard HRESULT values.

## <a name="getambientlocaleid"></a> CComControlBase::GetAmbientLocaleID

Retrieves DISPID_AMBIENT_LOCALEID, the identifier of the language used by the container.

```
HRESULT GetAmbientLocaleID(LCID& lcid);
```

### Parameters

*lcid*<br/>
The property DISPID_AMBIENT_LOCALEID.

### Return Value

One of the standard HRESULT values.

### Remarks

The control can use this identifier to adapt its user interface to different languages.

## <a name="getambientmessagereflect"></a> CComControlBase::GetAmbientMessageReflect

Retrieves DISPID_AMBIENT_MESSAGEREFLECT, a flag indicating whether the container wants to receive window messages (such as `WM_DRAWITEM`) as events.

```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```

### Parameters

*bMessageReflect*<br/>
The property DISPID_AMBIENT_MESSAGEREFLECT.

### Return Value

One of the standard HRESULT values.

## <a name="getambientpalette"></a> CComControlBase::GetAmbientPalette

Retrieves DISPID_AMBIENT_PALETTE, used to access the container's HPALETTE.

```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```

### Parameters

*hPalette*<br/>
The property DISPID_AMBIENT_PALETTE.

### Return Value

One of the standard HRESULT values.

## <a name="getambientproperty"></a> CComControlBase::GetAmbientProperty

Retrieves the container property specified by *dispid*.

```
HRESULT GetAmbientProperty(DISPID dispid, VARIANT& var);
```

### Parameters

*dispid*<br/>
Identifier of the container property to be retrieved.

*var*<br/>
Variable to receive the property.

### Return Value

One of the standard HRESULT values.

### Remarks

ATL has provided a set of helper functions to retrieve specific properties, for example, [CComControlBase::GetAmbientBackColor](#getambientbackcolor). If there is no suitable method available, use `GetAmbientProperty`.

## <a name="getambientrighttoleft"></a> CComControlBase::GetAmbientRightToLeft

Retrieves DISPID_AMBIENT_RIGHTTOLEFT, the direction in which content is displayed by the container.

```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```

### Parameters

*bRightToLeft*<br/>
The property DISPID_AMBIENT_RIGHTTOLEFT. Set to TRUE if content is displayed right to left, FALSE if it is displayed left to right.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="getambientscaleunits"></a> CComControlBase::GetAmbientScaleUnits

Retrieves DISPID_AMBIENT_SCALEUNITS, the container's ambient units (such as inches or centimeters) for labeling displays.

```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```

### Parameters

*bstrScaleUnits*<br/>
The property DISPID_AMBIENT_SCALEUNITS.

### Return Value

One of the standard HRESULT values.

## <a name="getambientshowgrabhandles"></a> CComControlBase::GetAmbientShowGrabHandles

Retrieves DISPID_AMBIENT_SHOWGRABHANDLES, a flag indicating whether the container allows the control to display grab handles for itself when active.

```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```

### Parameters

*bShowGrabHandles*<br/>
The property DISPID_AMBIENT_SHOWGRABHANDLES.

### Return Value

One of the standard HRESULT values.

## <a name="getambientshowhatching"></a> CComControlBase::GetAmbientShowHatching

Retrieves DISPID_AMBIENT_SHOWHATCHING, a flag indicating whether the container allows the control to display itself with a hatched pattern when the control's user interface is active.

```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```

### Parameters

*bShowHatching*<br/>
The property DISPID_AMBIENT_SHOWHATCHING.

### Return Value

One of the standard HRESULT values.

## <a name="getambientsupportsmnemonics"></a> CComControlBase::GetAmbientSupportsMnemonics

Retrieves DISPID_AMBIENT_SUPPORTSMNEMONICS, a flag indicating whether the container supports keyboard mnemonics.

```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```

### Parameters

*bSupportsMnemonics*<br/>
The property DISPID_AMBIENT_SUPPORTSMNEMONICS.

### Return Value

One of the standard HRESULT values.

## <a name="getambienttextalign"></a> CComControlBase::GetAmbientTextAlign

Retrieves DISPID_AMBIENT_TEXTALIGN, the text alignment preferred by the container: 0 for general alignment (numbers right, text left), 1 for left alignment, 2 for center alignment, and 3 for right alignment.

```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```

### Parameters

*nTextAlign*<br/>
The property DISPID_AMBIENT_TEXTALIGN.

### Return Value

One of the standard HRESULT values.

## <a name="getambienttoptobottom"></a> CComControlBase::GetAmbientTopToBottom

Retrieves DISPID_AMBIENT_TOPTOBOTTOM, the direction in which content is displayed by the container.

```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```

### Parameters

*bTopToBottom*<br/>
The property DISPID_AMBIENT_TOPTOBOTTOM. Set to TRUE if text is displayed top to bottom, FALSE if it is displayed bottom to top.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="getambientuidead"></a> CComControlBase::GetAmbientUIDead

Retrieves DISPID_AMBIENT_UIDEAD, a flag indicating whether the container wants the control to respond to user-interface actions.

```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```

### Parameters

*bUIDead*<br/>
The property DISPID_AMBIENT_UIDEAD.

### Return Value

One of the standard HRESULT values.

### Remarks

If TRUE, the control should not respond. This flag applies regardless of the DISPID_AMBIENT_USERMODE flag. See [CComControlBase::GetAmbientUserMode](#getambientusermode).

## <a name="getambientusermode"></a> CComControlBase::GetAmbientUserMode

Retrieves DISPID_AMBIENT_USERMODE, a flag indicating whether the container is in run-mode (TRUE) or design-mode (FALSE).

```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```

### Parameters

*bUserMode*<br/>
The property DISPID_AMBIENT_USERMODE.

### Return Value

One of the standard HRESULT values.

## <a name="getdirty"></a> CComControlBase::GetDirty

Returns the value of data member `m_bRequiresSave`.

```
BOOL GetDirty();
```

### Return Value

Returns the value of data member [m_bRequiresSave](#m_brequiressave).

### Remarks

This value is set using [CComControlBase::SetDirty](#setdirty).

## <a name="getzoominfo"></a> CComControlBase::GetZoomInfo

Retrieves the x and y values of the numerator and denominator of the zoom factor for a control activated for in-place editing.

```cpp
void GetZoomInfo(ATL_DRAWINFO& di);
```

### Parameters

*di*<br/>
The structure that will hold the zoom factor's numerator and denominator. For more information, see [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).

### Remarks

The zoom factor is the proportion of the control's natural size to its current extent.

## <a name="inplaceactivate"></a> CComControlBase::InPlaceActivate

Causes the control to transition from the inactive state to whatever state the verb in *iVerb* indicates.

```
HRESULT InPlaceActivate(LONG iVerb, const RECT* prcPosRect = NULL);
```

### Parameters

*iVerb*<br/>
Value indicating the action to be performed by [IOleObjectImpl::DoVerb](../../atl/reference/ioleobjectimpl-class.md#doverb).

*prcPosRect*<br/>
Pointer to the position of the in-place control.

### Return Value

One of the standard HRESULT values.

### Remarks

Before activation, this method checks that the control has a client site, checks how much of the control is visible, and gets the control's location in the parent window. After the control is activated, this method activates the control's user interface and tells the container to make the control visible.

This method also retrieves an `IOleInPlaceSite`, `IOleInPlaceSiteEx`, or `IOleInPlaceSiteWindowless` interface pointer for the control and stores it in the control class's data member [CComControlBase::m_spInPlaceSite](#m_spinplacesite). The control class data members [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex), [CComControlBase::m_bWndLess](#m_bwndless), [CComControlBase::m_bWasOnceWindowless](#m_bwasoncewindowless), and [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) are set to true as appropriate.

## <a name="internalgetsite"></a> CComControlBase::InternalGetSite

Call this method to query the control site for a pointer to the identified interface.

```
HRESULT InternalGetSite(REFIID riid, void** ppUnkSite);
```

### Parameters

*riid*<br/>
The IID of the interface pointer that should be returned in *ppUnkSite*.

*ppUnkSite*<br/>
Address of the pointer variable that receives the interface pointer requested in *riid*.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

If the site supports the interface requested in *riid*, the pointer is returned by means of *ppUnkSite*. Otherwise, *ppUnkSite* is set to NULL.

## <a name="m_bautosize"></a> CComControlBase::m_bAutoSize

Flag indicating the control cannot be any other size.

```
unsigned m_bAutoSize:1;
```

### Remarks

This flag is checked by `IOleObjectImpl::SetExtent` and, if TRUE, causes the function to return E_FAIL.

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

If you add the **Auto Size** option on the [Stock Properties](../../atl/reference/stock-properties-atl-control-wizard.md) tab of the ATL Control Wizard, the wizard automatically creates this data member in your control class, creates put and get methods for the property, and supports [IPropertyNotifySink](/windows/win32/api/ocidl/nn-ocidl-ipropertynotifysink) to automatically notify the container when the property changes.

## <a name="m_bdrawfromnatural"></a> CComControlBase::m_bDrawFromNatural

Flag indicating that `IDataObjectImpl::GetData` and `CComControlBase::GetZoomInfo` should set the control size from `m_sizeNatural` rather than from `m_sizeExtent`.

```
unsigned m_bDrawFromNatural:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_bdrawgetdatainhimetric"></a> CComControlBase::m_bDrawGetDataInHimetric

Flag indicating that `IDataObjectImpl::GetData` should use HIMETRIC units and not pixels when drawing.

```
unsigned m_bDrawGetDataInHimetric:1;
```

### Remarks

Each logical HIMETRIC unit is 0.01 millimeter.

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_binplaceactive"></a> CComControlBase::m_bInPlaceActive

Flag indicating the control is in-place active.

```
unsigned m_bInPlaceActive:1;
```

### Remarks

This means the control is visible and its window, if any, is visible, but its menus and toolbars may not be active. The `m_bUIActive` flag indicates the control's user interface, such as menus, is also active.

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_binplacesiteex"></a> CComControlBase::m_bInPlaceSiteEx

Flag indicating the container supports the `IOleInPlaceSiteEx` interface and OCX96 control features, such as windowless and flicker-free controls.

```
unsigned m_bInPlaceSiteEx:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

The data member `m_spInPlaceSite` points to an [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex), or [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interface, depending on the value of the `m_bWndLess` and `m_bInPlaceSiteEx` flags. (The data member `m_bNegotiatedWnd` must be TRUE for the `m_spInPlaceSite` pointer to be valid.)

If `m_bWndLess` is FALSE and `m_bInPlaceSiteEx` is TRUE, `m_spInPlaceSite` is an `IOleInPlaceSiteEx` interface pointer. See [m_spInPlaceSite](#m_spinplacesite) for a table showing the relationship among these three data members.

## <a name="m_bnegotiatedwnd"></a> CComControlBase::m_bNegotiatedWnd

Flag indicating whether or not the control has negotiated with the container about support for OCX96 control features (such as flicker-free and windowless controls), and whether the control is windowed or windowless.

```
unsigned m_bNegotiatedWnd:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

The `m_bNegotiatedWnd` flag must be TRUE for the `m_spInPlaceSite` pointer to be valid.

## <a name="m_brecomposeonresize"></a> CComControlBase::m_bRecomposeOnResize

Flag indicating the control wants to recompose its presentation when the container changes the control's display size.

```
unsigned m_bRecomposeOnResize:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

This flag is checked by [IOleObjectImpl::SetExtent](../../atl/reference/ioleobjectimpl-class.md#setextent) and, if TRUE, `SetExtent` notifies the container of view changes. if this flag is set, the OLEMISC_RECOMPOSEONRESIZE bit in the [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) enumeration should also be set.

## <a name="m_brequiressave"></a> CComControlBase::m_bRequiresSave

Flag indicating the control has changed since it was last saved.

```
unsigned m_bRequiresSave:1;
```

### Remarks

The value of `m_bRequiresSave` can be set with [CComControlBase::SetDirty](#setdirty) and retrieved with [CComControlBase::GetDirty](#getdirty).

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_bresizenatural"></a> CComControlBase::m_bResizeNatural

Flag indicating the control wants to resize its natural extent (its unscaled physical size) when the container changes the control's display size.

```
unsigned m_bResizeNatural:1;
```

### Remarks

This flag is checked by `IOleObjectImpl::SetExtent` and, if TRUE, the size passed into `SetExtent` is assigned to `m_sizeNatural`.

The size passed into `SetExtent` is always assigned to `m_sizeExtent`, regardless of the value of `m_bResizeNatural`.

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_buiactive"></a> CComControlBase::m_bUIActive

Flag indicating the control's user interface, such as menus and toolbars, is active.

```
unsigned m_bUIActive:1;
```

### Remarks

The `m_bInPlaceActive` flag indicates that the control is active, but not that its user interface is active.

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_busingwindowrgn"></a> CComControlBase::m_bUsingWindowRgn

Flag indicating the control is using the container-supplied window region.

```
unsigned m_bUsingWindowRgn:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_bwasoncewindowless"></a> CComControlBase::m_bWasOnceWindowless

Flag indicating the control has been windowless, but may or may not be windowless now.

```
unsigned m_bWasOnceWindowless:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_bwindowonly"></a> CComControlBase::m_bWindowOnly

Flag indicating the control should be windowed, even if the container supports windowless controls.

```
unsigned m_bWindowOnly:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_bwndless"></a> CComControlBase::m_bWndLess

Flag indicating the control is windowless.

```
unsigned m_bWndLess:1;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

The data member `m_spInPlaceSite` points to an [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex), or [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interface, depending on the value of the `m_bWndLess` and [CComControlBase::m_bInPlaceSiteEx](#m_binplacesiteex) flags. (The data member [CComControlBase::m_bNegotiatedWnd](#m_bnegotiatedwnd) must be TRUE for the [CComControlBase::m_spInPlaceSite](#m_spinplacesite) pointer to be valid.)

If `m_bWndLess` is TRUE, `m_spInPlaceSite` is an `IOleInPlaceSiteWindowless` interface pointer. See [CComControlBase::m_spInPlaceSite](#m_spinplacesite) for a table showing the complete relationship between these data members.

## <a name="m_hwndcd"></a> CComControlBase::m_hWndCD

Contains a reference to the window handle associated with the control.

```
HWND& m_hWndCD;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_nfreezeevents"></a> CComControlBase::m_nFreezeEvents

A count of the number of times the container has frozen events (refused to accept events) without an intervening thaw of events (acceptance of events).

```
short m_nFreezeEvents;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_rcpos"></a> CComControlBase::m_rcPos

The position in pixels of the control, expressed in the coordinates of the container.

```
RECT m_rcPos;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_sizeextent"></a> CComControlBase::m_sizeExtent

The extent of the control in HIMETRIC units (each unit is 0.01 millimeters) for a particular display.

```
SIZE m_sizeExtent;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

This size is scaled by the display. The control's physical size is specified in the `m_sizeNatural` data member and is fixed.

You can convert the size to pixels with the global function [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

## <a name="m_sizenatural"></a> CComControlBase::m_sizeNatural

The physical size of the control in HIMETRIC units (each unit is 0.01 millimeters).

```
SIZE m_sizeNatural;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

This size is fixed, while the size in `m_sizeExtent` is scaled by the display.

You can convert the size to pixels with the global function [AtlHiMetricToPixel](pixel-himetric-conversion-global-functions.md#atlhimetrictopixel).

## <a name="m_spadvisesink"></a> CComControlBase::m_spAdviseSink

A direct pointer to the advisory connection on the container (the container's [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink)).

```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_spambientdispatch"></a> CComControlBase::m_spAmbientDispatch

A `CComDispatchDriver` object that lets you retrieve and set an object's properties through an `IDispatch` pointer.

```
CComDispatchDriver m_spAmbientDispatch;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_spclientsite"></a> CComControlBase::m_spClientSite

A pointer to the control's client site within the container.

```
CComPtr<IOleClientSite>
    m_spClientSite;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

## <a name="m_spdataadviseholder"></a> CComControlBase::m_spDataAdviseHolder

Provides a standard means to hold advisory connections between data objects and advise sinks.

```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

A data object is a control that can transfer data and that implements [IDataObject](/windows/win32/api/objidl/nn-objidl-idataobject), whose methods specify the format and transfer medium of the data.

The interface `m_spDataAdviseHolder` implements the [IDataObject::DAdvise](/windows/win32/api/objidl/nf-objidl-idataobject-dadvise) and [IDataObject::DUnadvise](/windows/win32/api/objidl/nf-objidl-idataobject-dunadvise) methods to establish and delete advisory connections to the container. The control's container must implement an advise sink by supporting the [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) interface.

## <a name="m_spinplacesite"></a> CComControlBase::m_spInPlaceSite

A pointer to the container's [IOleInPlaceSite](/windows/win32/api/oleidl/nn-oleidl-ioleinplacesite), [IOleInPlaceSiteEx](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesiteex), or [IOleInPlaceSiteWindowless](/windows/win32/api/ocidl/nn-ocidl-ioleinplacesitewindowless) interface pointer.

```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

The `m_spInPlaceSite` pointer is valid only if the [m_bNegotiatedWnd](#m_bnegotiatedwnd) flag is TRUE.

The following table shows how the `m_spInPlaceSite` pointer type depends on the [m_bWndLess](#m_bwndless) and [m_bInPlaceSiteEx](#m_binplacesiteex) data member flags:

|m_spInPlaceSite Type|m_bWndLess Value|m_bInPlaceSiteEx Value|
|---------------------------|-----------------------|-----------------------------|
|`IOleInPlaceSiteWindowless`|TRUE|TRUE or FALSE|
|`IOleInPlaceSiteEx`|FALSE|TRUE|
|`IOleInPlaceSite`|FALSE|FALSE|

## <a name="m_spoleadviseholder"></a> CComControlBase::m_spOleAdviseHolder

Provides a standard implementation of a way to hold advisory connections.

```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```

### Remarks

> [!NOTE]
> To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.

The interface `m_spOleAdviseHolder` implements the [IOleObject::Advise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-advise) and [IOleObject::Unadvise](/windows/win32/api/oleidl/nf-oleidl-ioleobject-unadvise) methods to establish and delete advisory connections to the container. The control's container must implement an advise sink by supporting the [IAdviseSink](/windows/win32/api/objidl/nn-objidl-iadvisesink) interface.

## <a name="ondraw"></a> CComControlBase::OnDraw

Override this method to draw your control.

```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```

### Parameters

*di*<br/>
A reference to the [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) structure that contains drawing information such as the draw aspect, the control bounds, and whether the drawing is optimized or not.

### Return Value

A standard HRESULT value.

### Remarks

The default `OnDraw` deletes or restores the device context or does nothing, depending on flags set in [CComControlBase::OnDrawAdvanced](#ondrawadvanced).

An `OnDraw` method is automatically added to your control class when you create your control with the ATL Control Wizard. The wizard's default `OnDraw` draws a rectangle with the label "ATL 8.0".

### Example

See the example for [CComControlBase::GetAmbientAppearance](#getambientappearance).

## <a name="ondrawadvanced"></a> CComControlBase::OnDrawAdvanced

The default `OnDrawAdvanced` prepares a normalized device context for drawing, then calls your control class's `OnDraw` method.

```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```

### Parameters

*di*<br/>
A reference to the [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) structure that contains drawing information such as the draw aspect, the control bounds, and whether the drawing is optimized or not.

### Return Value

A standard HRESULT value.

### Remarks

Override this method if you want to accept the device context passed by the container without normalizing it.

See [CComControlBase::OnDraw](#ondraw) for more details.

## <a name="onkillfocus"></a> CComControlBase::OnKillFocus

Checks that the control is in-place active and has a valid control site, then informs the container that the control has lost focus.

```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### Parameters

*nMsg*<br/>
Reserved.

*wParam*<br/>
Reserved.

*lParam*<br/>
Reserved.

*bHandled*<br/>
Flag that indicates whether the window message was successfully handled. The default is FALSE.

### Return Value

Always returns 1.

## <a name="onmouseactivate"></a> CComControlBase::OnMouseActivate

Checks that the UI is in user mode, then activates the control.

```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### Parameters

*nMsg*<br/>
Reserved.

*wParam*<br/>
Reserved.

*lParam*<br/>
Reserved.

*bHandled*<br/>
Flag that indicates whether the window message was successfully handled. The default is FALSE.

### Return Value

Always returns 1.

## <a name="onpaint"></a> CComControlBase::OnPaint

Prepares the container for painting, gets the control's client area, then calls the control class's `OnDrawAdvanced` method.

```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```

### Parameters

*nMsg*<br/>
Reserved.

*wParam*<br/>
An existing HDC.

*lParam*<br/>
Reserved.

*lResult*<br/>
Reserved.

### Return Value

Always returns zero.

### Remarks

If *wParam* is not NULL, `OnPaint` assumes it contains a valid HDC and uses it instead of [CComControlBase::m_hWndCD](#m_hwndcd).

## <a name="onsetfocus"></a> CComControlBase::OnSetFocus

Checks that the control is in-place active and has a valid control site, then informs the container the control has gained focus.

```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```

### Parameters

*nMsg*<br/>
Reserved.

*wParam*<br/>
Reserved.

*lParam*<br/>
Reserved.

*bHandled*<br/>
Flag that indicates whether the window message was successfully handled. The default is FALSE.

### Return Value

Always returns 1.

### Remarks

Sends a notification to the container that the control has received focus.

## <a name="pretranslateaccelerator"></a> CComControlBase::PreTranslateAccelerator

Override this method to provide your own keyboard accelerator handlers.

```
BOOL PreTranslateAccelerator(LPMSG /* pMsg */,
    HRESULT& /* hRet */);
```

### Parameters

*pMsg*<br/>
Reserved.

*hRet*<br/>
Reserved.

### Return Value

By default returns FALSE.

## <a name="sendonclose"></a> CComControlBase::SendOnClose

Notifies all advisory sinks registered with the advise holder that the control has been closed.

```
HRESULT SendOnClose();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Sends a notification that the control has closed its advisory sinks.

## <a name="sendondatachange"></a> CComControlBase::SendOnDataChange

Notifies all advisory sinks registered with the advise holder that the control data has changed.

```
HRESULT SendOnDataChange(DWORD advf = 0);
```

### Parameters

*advf*<br/>
Advise flags that specify how the call to [IAdviseSink::OnDataChange](/windows/win32/api/objidl/nf-objidl-iadvisesink-ondatachange) is made. Values are from the [ADVF](/windows/win32/api/objidl/ne-objidl-advf) enumeration.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

## <a name="sendonrename"></a> CComControlBase::SendOnRename

Notifies all advisory sinks registered with the advise holder that the control has a new moniker.

```
HRESULT SendOnRename(IMoniker* pmk);
```

### Parameters

*pmk*<br/>
Pointer to the new moniker of the control.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Sends a notification that the moniker for the control has changed.

## <a name="sendonsave"></a> CComControlBase::SendOnSave

Notifies all advisory sinks registered with the advise holder that the control has been saved.

```
HRESULT SendOnSave();
```

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

Sends a notification that the control has just saved its data.

## <a name="sendonviewchange"></a> CComControlBase::SendOnViewChange

Notifies all registered advisory sinks that the control's view has changed.

```
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
```

### Parameters

*dwAspect*<br/>
The aspect or view of the control.

*lindex*<br/>
The portion of the view that has changed. Only -1 is valid.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

`SendOnViewChange` calls [IAdviseSink::OnViewChange](/windows/win32/api/objidl/nf-objidl-iadvisesink-onviewchange). The only value of *lindex* currently supported is -1, which indicates that the entire view is of interest.

## <a name="setcontrolfocus"></a> CComControlBase::SetControlFocus

Sets or removes the keyboard focus to or from the control.

```
BOOL SetControlFocus(BOOL bGrab);
```

### Parameters

*bGrab*<br/>
If TRUE, sets the keyboard focus to the calling control. If FALSE, removes the keyboard focus from the calling control, provided it has the focus.

### Return Value

Returns TRUE if the control successfully receives focus; otherwise, FALSE.

### Remarks

For a windowed control, the Windows API function [SetFocus](/windows/win32/api/winuser/nf-winuser-setfocus) is called. For a windowless control, [IOleInPlaceSiteWindowless::SetFocus](/windows/win32/api/ocidl/nf-ocidl-ioleinplacesitewindowless-setfocus) is called. Through this call, a windowless control obtains the keyboard focus and can respond to window messages.

## <a name="setdirty"></a> CComControlBase::SetDirty

Sets the data member `m_bRequiresSave` to the value in *bDirty*.

```cpp
void SetDirty(BOOL bDirty);
```

### Parameters

*bDirty*<br/>
Value of the data member [CComControlBase::m_bRequiresSave](#m_brequiressave).

### Remarks

`SetDirty(TRUE)` should be called to flag that the control has changed since it was last saved. The value of `m_bRequiresSave` is retrieved with [CComControlBase::GetDirty](#getdirty).

## See also

[CComControl Class](../../atl/reference/ccomcontrol-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
