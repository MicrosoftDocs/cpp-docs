---
title: "CComControlBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComControlBase"
  - "ATL.CComControlBase"
  - "ATL::CComControlBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComControlBase class"
ms.assetid: 3d1bf022-acf2-4092-8283-ff8cee6332f3
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CComControlBase Class
This class provides methods for creating and managing ATL controls.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class ATL_NO_VTABLE CComControlBase
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CComControlBase::AppearanceType](#ccomcontrolbase__appearancetype)|Override if your `m_nAppearance` stock property isn't of type `short`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComControlBase::CComControlBase](#ccomcontrolbase__ccomcontrolbase)|The constructor.|  
|[CComControlBase::~CComControlBase](#ccomcontrolbase___dtorccomcontrolbase)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComControlBase::ControlQueryInterface](#ccomcontrolbase__controlqueryinterface)|Retrieves a pointer to the requested interface.|  
|[CComControlBase::DoesVerbActivate](#ccomcontrolbase__doesverbactivate)|Checks that the `iVerb` parameter used by `IOleObjectImpl::DoVerb` either activates the control's user interface ( `iVerb` equals `OLEIVERB_UIACTIVATE`), defines the action taken when the user double-clicks the control ( `iVerb` equals `OLEIVERB_PRIMARY`), displays the control ( `iVerb` equals `OLEIVERB_SHOW`), or activates the control ( `iVerb` equals **OLEIVERB_INPLACEACTIVATE**).|  
|[CComControlBase::DoesVerbUIActivate](#ccomcontrolbase__doesverbuiactivate)|Checks that the `iVerb` parameter used by `IOleObjectImpl::DoVerb` causes the control's user interface to activate and returns **TRUE**.|  
|[CComControlBase::DoVerbProperties](#ccomcontrolbase__doverbproperties)|Displays the control's property pages.|  
|[CComControlBase::FireViewChange](#ccomcontrolbase__fireviewchange)|Call this method to tell the container to redraw the control, or notify the registered advise sinks that the control's view has changed.|  
|[CComControlBase::GetAmbientAppearance](#ccomcontrolbase__getambientappearance)|Retrieves **DISPID_AMBIENT_APPEARANCE**, the current appearance setting for the control: 0 for flat and 1 for 3D.|  
|[CComControlBase::GetAmbientAutoClip](#ccomcontrolbase__getambientautoclip)|Retrieves **DISPID_AMBIENT_AUTOCLIP**, a flag indicating whether the container supports automatic clipping of the control display area.|  
|[CComControlBase::GetAmbientBackColor](#ccomcontrolbase__getambientbackcolor)|Retrieves **DISPID_AMBIENT_BACKCOLOR**, the ambient background color for all controls, defined by the container.|  
|[CComControlBase::GetAmbientCharSet](#ccomcontrolbase__getambientcharset)|Retrieves **DISPID_AMBIENT_CHARSET**, the ambient character set for all controls, defined by the container.|  
|[CComControlBase::GetAmbientCodePage](#ccomcontrolbase__getambientcodepage)|Retrieves **DISPID_AMBIENT_CODEPAGE**, the ambient character set for all controls, defined by the container.|  
|[CComControlBase::GetAmbientDisplayAsDefault](#ccomcontrolbase__getambientdisplayasdefault)|Retrieves **DISPID_AMBIENT_DISPLAYASDEFAULT**, a flag that is **TRUE** if the container has marked the control in this site to be a default button, and therefore a button control should draw itself with a thicker frame.|  
|[CComControlBase::GetAmbientDisplayName](#ccomcontrolbase__getambientdisplayname)|Retrieves **DISPID_AMBIENT_DISPLAYNAME**, the name the container has supplied to the control.|  
|[CComControlBase::GetAmbientFont](#ccomcontrolbase__getambientfont)|Retrieves a pointer to the container's ambient `IFont` interface.|  
|[CComControlBase::GetAmbientFontDisp](#ccomcontrolbase__getambientfontdisp)|Retrieves a pointer to the container's ambient **IFontDisp** dispatch interface.|  
|[CComControlBase::GetAmbientForeColor](#ccomcontrolbase__getambientforecolor)|Retrieves **DISPID_AMBIENT_FORECOLOR**, the ambient foreground color for all controls, defined by the container.|  
|[CComControlBase::GetAmbientLocaleID](#ccomcontrolbase__getambientlocaleid)|Retrieves **DISPID_AMBIENT_LOCALEID**, the identifier of the language used by the container.|  
|[CComControlBase::GetAmbientMessageReflect](#ccomcontrolbase__getambientmessagereflect)|Retrieves **DISPID_AMBIENT_MESSAGEREFLECT**, a flag indicating whether the container wants to receive window messages (such as `WM_DRAWITEM`) as events.|  
|[CComControlBase::GetAmbientPalette](#ccomcontrolbase__getambientpalette)|Retrieves **DISPID_AMBIENT_PALETTE**, used to access the container's `HPALETTE`.|  
|[CComControlBase::GetAmbientProperty](#ccomcontrolbase__getambientproperty)|Retrieves the container property specified by `id`.|  
|[CComControlBase::GetAmbientRightToLeft](#ccomcontrolbase__getambientrighttoleft)|Retrieves **DISPID_AMBIENT_RIGHTTOLEFT**, the direction in which content is displayed by the container.|  
|[CComControlBase::GetAmbientScaleUnits](#ccomcontrolbase__getambientscaleunits)|Retrieves **DISPID_AMBIENT_SCALEUNITS**, the container's ambient units (such as inches or centimeters) for labeling displays.|  
|[CComControlBase::GetAmbientShowGrabHandles](#ccomcontrolbase__getambientshowgrabhandles)|Retrieves **DISPID_AMBIENT_SHOWGRABHANDLES**, a flag indicating whether the container allows the control to display grab handles for itself when active.|  
|[CComControlBase::GetAmbientShowHatching](#ccomcontrolbase__getambientshowhatching)|Retrieves **DISPID_AMBIENT_SHOWHATCHING**, a flag indicating whether the container allows the control to display itself with a hatched pattern when the UI is active.|  
|[CComControlBase::GetAmbientSupportsMnemonics](#ccomcontrolbase__getambientsupportsmnemonics)|Retrieves **DISPID_AMBIENT_SUPPORTSMNEMONICS**, a flag indicating whether the container supports keyboard mnemonics.|  
|[CComControlBase::GetAmbientTextAlign](#ccomcontrolbase__getambienttextalign)|Retrieves **DISPID_AMBIENT_TEXTALIGN**, the text alignment preferred by the container: 0 for general alignment (numbers right, text left), 1 for left alignment, 2 for center alignment, and 3 for right alignment.|  
|[CComControlBase::GetAmbientTopToBottom](#ccomcontrolbase__getambienttoptobottom)|Retrieves **DISPID_AMBIENT_TOPTOBOTTOM**, the direction in which content is displayed by the container.|  
|[CComControlBase::GetAmbientUIDead](#ccomcontrolbase__getambientuidead)|Retrieves **DISPID_AMBIENT_UIDEAD**, a flag indicating whether the container wants the control to respond to user-interface actions.|  
|[CComControlBase::GetAmbientUserMode](#ccomcontrolbase__getambientusermode)|Retrieves **DISPID_AMBIENT_USERMODE**, a flag indicating whether the container is in run-mode ( **TRUE**) or design-mode ( **FALSE**).|  
|[CComControlBase::GetDirty](#ccomcontrolbase__getdirty)|Returns the value of data member `m_bRequiresSave`.|  
|[CComControlBase::GetZoomInfo](#ccomcontrolbase__getzoominfo)|Retrieves the x and y values of the numerator and denominator of the zoom factor for a control activated for in-place editing.|  
|[CComControlBase::InPlaceActivate](#ccomcontrolbase__inplaceactivate)|Causes the control to transition from the inactive state to whatever state the verb in `iVerb` indicates.|  
|[CComControlBase::InternalGetSite](#ccomcontrolbase__internalgetsite)|Call this method to query the control site for a pointer to the identified interface.|  
|[CComControlBase::OnDraw](#ccomcontrolbase__ondraw)|Override this method to draw your control.|  
|[CComControlBase::OnDrawAdvanced](#ccomcontrolbase__ondrawadvanced)|The default **OnDrawAdvanced** prepares a normalized device context for drawing, then calls your control class's `OnDraw` method.|  
|[CComControlBase::OnKillFocus](#ccomcontrolbase__onkillfocus)|Checks that the control is in-place active and has a valid control site, then informs the container that the control has lost focus.|  
|[CComControlBase::OnMouseActivate](#ccomcontrolbase__onmouseactivate)|Checks that the UI is in user mode, then activates the control.|  
|[CComControlBase::OnPaint](#ccomcontrolbase__onpaint)|Prepares the container for painting, gets the control's client area, then calls the control class's `OnDraw` method.|  
|[CComControlBase::OnSetFocus](#ccomcontrolbase__onsetfocus)|Checks that the control is in-place active and has a valid control site, then informs the container the control has gained focus.|  
|[CComControlBase::PreTranslateAccelerator](#ccomcontrolbase__pretranslateaccelerator)|Override this method to provide your own keyboard accelerator handlers.|  
|[CComControlBase::SendOnClose](#ccomcontrolbase__sendonclose)|Notifies all advisory sinks registered with the advise holder that the control has been closed.|  
|[CComControlBase::SendOnDataChange](#ccomcontrolbase__sendondatachange)|Notifies all advisory sinks registered with the advise holder that the control data has changed.|  
|[CComControlBase::SendOnRename](#ccomcontrolbase__sendonrename)|Notifies all advisory sinks registered with the advise holder that the control has a new moniker.|  
|[CComControlBase::SendOnSave](#ccomcontrolbase__sendonsave)|Notifies all advisory sinks registered with the advise holder that the control has been saved.|  
|[CComControlBase::SendOnViewChange](#ccomcontrolbase__sendonviewchange)|Notifies all registered advisory sinks that the control's view has changed.|  
|[CComControlBase::SetControlFocus](#ccomcontrolbase__setcontrolfocus)|Sets or removes the keyboard focus to or from the control.|  
|[CComControlBase::SetDirty](#ccomcontrolbase__setdirty)|Sets the data member `m_bRequiresSave` to the value in `bDirty`.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CComControlBase::m_bAutoSize](#ccomcontrolbase__m_bautosize)|Flag indicating the control cannot be any other size.|  
|[CComControlBase::m_bDrawFromNatural](#ccomcontrolbase__m_bdrawfromnatural)|Flag indicating that `IDataObjectImpl::GetData` and `CComControlBase::GetZoomInfo` should set the control size from `m_sizeNatural` rather than from `m_sizeExtent`.|  
|[CComControlBase::m_bDrawGetDataInHimetric](#ccomcontrolbase__m_bdrawgetdatainhimetric)|Flag indicating that `IDataObjectImpl::GetData` should use HIMETRIC units and not pixels when drawing.|  
|[CComControlBase::m_bInPlaceActive](#ccomcontrolbase__m_binplaceactive)|Flag indicating the control is in-place active.|  
|[CComControlBase::m_bInPlaceSiteEx](#ccomcontrolbase__m_binplacesiteex)|Flag indicating the container supports the **IOleInPlaceSiteEx** interface and OCX96 control features, such as windowless and flicker-free controls.|  
|[CComControlBase::m_bNegotiatedWnd](#ccomcontrolbase__m_bnegotiatedwnd)|Flag indicating whether or not the control has negotiated with the container about support for OCX96 control features (such as flicker-free and windowless controls), and whether the control is windowed or windowless.|  
|[CComControlBase::m_bRecomposeOnResize](#ccomcontrolbase__m_brecomposeonresize)|Flag indicating the control wants to recompose its presentation when the container changes the control's display size.|  
|[CComControlBase::m_bRequiresSave](#ccomcontrolbase__m_brequiressave)|Flag indicating the control has changed since it was last saved.|  
|[CComControlBase::m_bResizeNatural](#ccomcontrolbase__m_bresizenatural)|Flag indicating the control wants to resize its natural extent (its unscaled physical size) when the container changes the control's display size.|  
|[CComControlBase::m_bUIActive](#ccomcontrolbase__m_buiactive)|Flag indicating the control's user interface, such as menus and toolbars, is active.|  
|[CComControlBase::m_bUsingWindowRgn](#ccomcontrolbase__m_busingwindowrgn)|Flag indicating the control is using the container-supplied window region.|  
|[CComControlBase::m_bWasOnceWindowless](#ccomcontrolbase__m_bwasoncewindowless)|Flag indicating the control has been windowless, but may or may not be windowless now.|  
|[CComControlBase::m_bWindowOnly](#ccomcontrolbase__m_bwindowonly)|Flag indicating the control should be windowed, even if the container supports windowless controls.|  
|[CComControlBase::m_bWndLess](#ccomcontrolbase__m_bwndless)|Flag indicating the control is windowless.|  
|[CComControlBase::m_hWndCD](#ccomcontrolbase__m_hwndcd)|Contains a reference to the window handle associated with the control.|  
|[CComControlBase::m_nFreezeEvents](#ccomcontrolbase__m_nfreezeevents)|A count of the number of times the container has frozen events (refused to accept events) without an intervening thaw of events (acceptance of events).|  
|[CComControlBase::m_rcPos](#ccomcontrolbase__m_rcpos)|The position in pixels of the control, expressed in the coordinates of the container.|  
|[CComControlBase::m_sizeExtent](#ccomcontrolbase__m_sizeextent)|The extent of the control in HIMETRIC units (each unit is 0.01 millimeters) for a particular display.|  
|[CComControlBase::m_sizeNatural](#ccomcontrolbase__m_sizenatural)|The physical size of the control in HIMETRIC units (each unit is 0.01 millimeters).|  
|[CComControlBase::m_spAdviseSink](#ccomcontrolbase__m_spadvisesink)|A direct pointer to the advisory connection on the container (the container's [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513)).|  
|[CComControlBase::m_spAmbientDispatch](#ccomcontrolbase__m_spambientdispatch)|A `CComDispatchDriver` object that lets you retrieve and set the container's properties through an `IDispatch` pointer.|  
|[CComControlBase::m_spClientSite](#ccomcontrolbase__m_spclientsite)|A pointer to the control's client site within the container.|  
|[CComControlBase::m_spDataAdviseHolder](#ccomcontrolbase__m_spdataadviseholder)|Provides a standard means to hold advisory connections between data objects and advise sinks.|  
|[CComControlBase::m_spInPlaceSite](#ccomcontrolbase__m_spinplacesite)|A pointer to the container's [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), or [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interface pointer.|  
|[CComControlBase::m_spOleAdviseHolder](#ccomcontrolbase__m_spoleadviseholder)|Provides a standard implementation of a way to hold advisory connections.|  
  
## Remarks  
 This class provides methods for creating and managing ATL controls. [CComControl Class](../../atl/reference/ccomcontrol-class.md) derives from `CComControlBase`. When you create a Standard Control or DHTML control using the ATL Control Wizard, the wizard will automatically derive your class from `CComControlBase`.  
  
 For more information about creating a control, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md). For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ccomcontrolbase__appearancetype"></a>  CComControlBase::AppearanceType  
 Override if your **m_nAppearance** stock property isn't of type **short**.  
  
```
typedef short AppearanceType;
```  
  
### Remarks  
 The ATL Control Wizard adds **m_nAppearance** stock property of type short. Override `AppearanceType` if you use a different data type.  
  
##  <a name="ccomcontrolbase__ccomcontrolbase"></a>  CComControlBase::CComControlBase  
 The constructor.  
  
```
CComControlBase(HWND& h);
```  
  
### Parameters  
 `h`  
 The handle to the window associated with the control.  
  
### Remarks  
 Initializes the control size to 5080X5080 HIMETRIC units (2"X2") and initializes the `CComControlBase` data member values to **NULL** or **FALSE**.  
  
##  <a name="ccomcontrolbase___dtorccomcontrolbase"></a>  CComControlBase::~CComControlBase  
 The destructor.  
  
```
~CComControlBase();
```  
  
### Remarks  
 If the control is windowed, `~CComControlBase` destroys it by calling [DestroyWindow](http://msdn.microsoft.com/library/windows/desktop/ms632682).  
  
##  <a name="ccomcontrolbase__controlqueryinterface"></a>  CComControlBase::ControlQueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
virtual HRESULT ControlQueryInterface(const IID& iid,
    void** ppv);
```  
  
### Parameters  
 `iid`  
 The GUID of the interface being requested.  
  
 `ppv`  
 A pointer to the interface pointer identified by `iid`, or **NULL** if the interface is not found.  
  
### Remarks  
 Only handles interfaces in the COM map table.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#15](../../atl/codesnippet/cpp/ccomcontrolbase-class_1.cpp)]  
  
##  <a name="ccomcontrolbase__doesverbactivate"></a>  CComControlBase::DoesVerbActivate  
 Checks that the `iVerb` parameter used by `IOleObjectImpl::DoVerb` either activates the control's user interface ( `iVerb` equals `OLEIVERB_UIACTIVATE`), defines the action taken when the user double-clicks the control ( `iVerb` equals `OLEIVERB_PRIMARY`), displays the control ( `iVerb` equals `OLEIVERB_SHOW`), or activates the control ( `iVerb` equals **OLEIVERB_INPLACEACTIVATE**).  
  
```
BOOL DoesVerbActivate(LONG iVerb);
```  
  
### Parameters  
 `iVerb`  
 Value indicating the action to be performed by `DoVerb`.  
  
### Return Value  
 Returns **TRUE** if `iVerb` equals `OLEIVERB_UIACTIVATE`, `OLEIVERB_PRIMARY`, `OLEIVERB_SHOW`, or **OLEIVERB_INPLACEACTIVATE**; otherwise, returns **FALSE**.  
  
### Remarks  
 You can override this method to define your own activation verb.  
  
##  <a name="ccomcontrolbase__doesverbuiactivate"></a>  CComControlBase::DoesVerbUIActivate  
 Checks that the `iVerb` parameter used by `IOleObjectImpl::DoVerb` causes the control's user interface to activate and returns **TRUE**.  
  
```
BOOL DoesVerbUIActivate(LONG iVerb);
```  
  
### Parameters  
 `iVerb`  
 Value indicating the action to be performed by `DoVerb`.  
  
### Return Value  
 Returns **TRUE** if `iVerb` equals `OLEIVERB_UIACTIVATE`, `OLEIVERB_PRIMARY`, `OLEIVERB_SHOW`, or **OLEIVERB_INPLACEACTIVATE**. Otherwise, the method returns **FALSE**.  
  
##  <a name="ccomcontrolbase__doverbproperties"></a>  CComControlBase::DoVerbProperties  
 Displays the control's property pages.  
  
```
HRESULT DoVerbProperties(LPCRECT /* prcPosRect */,  HWND hwndParent);
```  
  
### Parameters  
 `prcPosRec`  
 Reserved.  
  
 *hwndParent*  
 Handle of the window containing the control.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#19](../../atl/codesnippet/cpp/ccomcontrolbase-class_2.cpp)]  
  
 [!code-cpp[NVC_ATL_COM#20](../../atl/codesnippet/cpp/ccomcontrolbase-class_3.h)]  
  
##  <a name="ccomcontrolbase__fireviewchange"></a>  CComControlBase::FireViewChange  
 Call this method to tell the container to redraw the control, or notify the registered advise sinks that the control's view has changed.  
  
```
HRESULT FireViewChange();
```  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 If the control is active (the control class data member [CComControlBase::m_bInPlaceActive](#ccomcontrolbase__m_binplaceactive) is **TRUE**), notifies the container that you want to redraw the entire control. If the control is inactive, notifies the control's registered advise sinks (through the control class data member [CComControlBase::m_spAdviseSink](#ccomcontrolbase__m_spadvisesink)) that the control's view has changed.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#21](../../atl/codesnippet/cpp/ccomcontrolbase-class_4.cpp)]  
  
##  <a name="ccomcontrolbase__getambientappearance"></a>  CComControlBase::GetAmbientAppearance  
 Retrieves **DISPID_AMBIENT_APPEARANCE**, the current appearance setting for the control: 0 for flat and 1 for 3D.  
  
```
HRESULT GetAmbientAppearance(short& nAppearance);
```  
  
### Parameters  
 `nAppearance`  
 The property **DISPID_AMBIENT_APPEARANCE**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#22](../../atl/codesnippet/cpp/ccomcontrolbase-class_5.h)]  
  
##  <a name="ccomcontrolbase__getambientautoclip"></a>  CComControlBase::GetAmbientAutoClip  
 Retrieves **DISPID_AMBIENT_AUTOCLIP**, a flag indicating whether the container supports automatic clipping of the control display area.  
  
```
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
```  
  
### Parameters  
 *bAutoClip*  
 The property **DISPID_AMBIENT_AUTOCLIP**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientbackcolor"></a>  CComControlBase::GetAmbientBackColor  
 Retrieves **DISPID_AMBIENT_BACKCOLOR**, the ambient background color for all controls, defined by the container.  
  
```
HRESULT GetAmbientBackColor(OLE_COLOR& BackColor);
```  
  
### Parameters  
 *BackColor*  
 The property **DISPID_AMBIENT_BACKCOLOR**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientcharset"></a>  CComControlBase::GetAmbientCharSet  
 Retrieves **DISPID_AMBIENT_CHARSET**, the ambient character set for all controls, defined by the container.  
  
```
HRESULT GetAmbientCharSet(BSTR& bstrCharSet);
```  
  
### Parameters  
 *bstrCharSet*  
 The property **DISPID_AMBIENT_CHARSET**.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="ccomcontrolbase__getambientcodepage"></a>  CComControlBase::GetAmbientCodePage  
 Retrieves **DISPID_AMBIENT_CODEPAGE**, the ambient code page for all controls, defined by the container.  
  
```
HRESULT GetAmbientCodePage(ULONG& ulCodePage);
```  
  
### Parameters  
 *ulCodePage*  
 The property **DISPID_AMBIENT_CODEPAGE**.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="ccomcontrolbase__getambientdisplayasdefault"></a>  CComControlBase::GetAmbientDisplayAsDefault  
 Retrieves **DISPID_AMBIENT_DISPLAYASDEFAULT**, a flag that is **TRUE** if the container has marked the control in this site to be a default button, and therefore a button control should draw itself with a thicker frame.  
  
```
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
```  
  
### Parameters  
 `bDisplayAsDefault`  
 The property **DISPID_AMBIENT_DISPLAYASDEFAULT**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientdisplayname"></a>  CComControlBase::GetAmbientDisplayName  
 Retrieves **DISPID_AMBIENT_DISPLAYNAME**, the name the container has supplied to the control.  
  
```
HRESULT GetAmbientDisplayName(BSTR& bstrDisplayName);
```  
  
### Parameters  
 *bstrDisplayName*  
 The property **DISPID_AMBIENT_DISPLAYNAME**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientfont"></a>  CComControlBase::GetAmbientFont  
 Retrieves a pointer to the container's ambient `IFont` interface.  
  
```
HRESULT GetAmbientFont(IFont** ppFont);
```  
  
### Parameters  
 `ppFont`  
 A pointer to the container's ambient [IFont](http://msdn.microsoft.com/library/windows/desktop/ms680673) interface.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 If the property is **NULL**, the pointer is **NULL**. If the pointer is not **NULL**, the caller must release the pointer.  
  
##  <a name="ccomcontrolbase__getambientfontdisp"></a>  CComControlBase::GetAmbientFontDisp  
 Retrieves a pointer to the container's ambient **IFontDisp** dispatch interface.  
  
```
HRESULT GetAmbientFontDisp(IFontDisp** ppFont);
```  
  
### Parameters  
 `ppFont`  
 A pointer to the container's ambient [IFontDisp](http://msdn.microsoft.com/library/windows/desktop/ms692695) dispatch interface.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 If the property is **NULL**, the pointer is **NULL**. If the pointer is not **NULL**, the caller must release the pointer.  
  
##  <a name="ccomcontrolbase__getambientforecolor"></a>  CComControlBase::GetAmbientForeColor  
 Retrieves **DISPID_AMBIENT_FORECOLOR**, the ambient foreground color for all controls, defined by the container.  
  
```
HRESULT GetAmbientForeColor(OLE_COLOR& ForeColor);
```  
  
### Parameters  
 *ForeColor*  
 The property **DISPID_AMBIENT_FORECOLOR**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientlocaleid"></a>  CComControlBase::GetAmbientLocaleID  
 Retrieves **DISPID_AMBIENT_LOCALEID**, the identifier of the language used by the container.  
  
```
HRESULT GetAmbientLocaleID(LCID& lcid);
```  
  
### Parameters  
 `lcid`  
 The property **DISPID_AMBIENT_LOCALEID**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 The control can use this identifier to adapt its user interface to different languages.  
  
##  <a name="ccomcontrolbase__getambientmessagereflect"></a>  CComControlBase::GetAmbientMessageReflect  
 Retrieves **DISPID_AMBIENT_MESSAGEREFLECT**, a flag indicating whether the container wants to receive window messages (such as `WM_DRAWITEM`) as events.  
  
```
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
```  
  
### Parameters  
 `bMessageReflect`  
 The property **DISPID_AMBIENT_MESSAGEREFLECT**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientpalette"></a>  CComControlBase::GetAmbientPalette  
 Retrieves **DISPID_AMBIENT_PALETTE**, used to access the container's `HPALETTE`.  
  
```
HRESULT GetAmbientPalette(HPALETTE& hPalette);
```  
  
### Parameters  
 `hPalette`  
 The property **DISPID_AMBIENT_PALETTE**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientproperty"></a>  CComControlBase::GetAmbientProperty  
 Retrieves the container property specified by `dispid`.  
  
```
HRESULT GetAmbientProperty(DISPID dispid,
    VARIANT& var);
```  
  
### Parameters  
 `dispid`  
 Identifier of the container property to be retrieved.  
  
 `var`  
 Variable to receive the property.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 ATL has provided a set of helper functions to retrieve specific properties, for example, [CComControlBase::GetAmbientBackColor](#ccomcontrolbase__getambientbackcolor). If there is no suitable method available, use `GetAmbientProperty`.  
  
##  <a name="ccomcontrolbase__getambientrighttoleft"></a>  CComControlBase::GetAmbientRightToLeft  
 Retrieves **DISPID_AMBIENT_RIGHTTOLEFT**, the direction in which content is displayed by the container.  
  
```
HRESULT GetAmbientRightToLeft(BOOL& bRightToLeft);
```  
  
### Parameters  
 *bRightToLeft*  
 The property **DISPID_AMBIENT_RIGHTTOLEFT**. Set to **TRUE** if content is displayed right to left, **FALSE** if it is displayed left to right.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="ccomcontrolbase__getambientscaleunits"></a>  CComControlBase::GetAmbientScaleUnits  
 Retrieves **DISPID_AMBIENT_SCALEUNITS**, the container's ambient units (such as inches or centimeters) for labeling displays.  
  
```
HRESULT GetAmbientScaleUnits(BSTR& bstrScaleUnits);
```  
  
### Parameters  
 *bstrScaleUnits*  
 The property **DISPID_AMBIENT_SCALEUNITS**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientshowgrabhandles"></a>  CComControlBase::GetAmbientShowGrabHandles  
 Retrieves **DISPID_AMBIENT_SHOWGRABHANDLES**, a flag indicating whether the container allows the control to display grab handles for itself when active.  
  
```
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
```  
  
### Parameters  
 *bShowGrabHandles*  
 The property **DISPID_AMBIENT_SHOWGRABHANDLES**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientshowhatching"></a>  CComControlBase::GetAmbientShowHatching  
 Retrieves **DISPID_AMBIENT_SHOWHATCHING**, a flag indicating whether the container allows the control to display itself with a hatched pattern when the control's user interface is active.  
  
```
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
```  
  
### Parameters  
 *bShowHatching*  
 The property **DISPID_AMBIENT_SHOWHATCHING**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambientsupportsmnemonics"></a>  CComControlBase::GetAmbientSupportsMnemonics  
 Retrieves **DISPID_AMBIENT_SUPPORTSMNEMONICS**, a flag indicating whether the container supports keyboard mnemonics.  
  
```
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
```  
  
### Parameters  
 *bSupportsMnemonics*  
 The property **DISPID_AMBIENT_SUPPORTSMNEMONICS**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambienttextalign"></a>  CComControlBase::GetAmbientTextAlign  
 Retrieves **DISPID_AMBIENT_TEXTALIGN**, the text alignment preferred by the container: 0 for general alignment (numbers right, text left), 1 for left alignment, 2 for center alignment, and 3 for right alignment.  
  
```
HRESULT GetAmbientTextAlign(short& nTextAlign);
```  
  
### Parameters  
 *nTextAlign*  
 The property **DISPID_AMBIENT_TEXTALIGN**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getambienttoptobottom"></a>  CComControlBase::GetAmbientTopToBottom  
 Retrieves **DISPID_AMBIENT_TOPTOBOTTOM**, the direction in which content is displayed by the container.  
  
```
HRESULT GetAmbientTopToBottom(BOOL& bTopToBottom);
```  
  
### Parameters  
 *bTopToBottom*  
 The property **DISPID_AMBIENT_TOPTOBOTTOM**. Set to **TRUE** if text is displayed top to bottom, **FALSE** if it is displayed bottom to top.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="ccomcontrolbase__getambientuidead"></a>  CComControlBase::GetAmbientUIDead  
 Retrieves **DISPID_AMBIENT_UIDEAD**, a flag indicating whether the container wants the control to respond to user-interface actions.  
  
```
HRESULT GetAmbientUIDead(BOOL& bUIDead);
```  
  
### Parameters  
 *bUIDead*  
 The property **DISPID_AMBIENT_UIDEAD**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 If **TRUE**, the control should not respond. This flag applies regardless of the **DISPID_AMBIENT_USERMODE** flag. See [CComControlBase::GetAmbientUserMode](#ccomcontrolbase__getambientusermode).  
  
##  <a name="ccomcontrolbase__getambientusermode"></a>  CComControlBase::GetAmbientUserMode  
 Retrieves **DISPID_AMBIENT_USERMODE**, a flag indicating whether the container is in run-mode ( **TRUE**) or design-mode ( **FALSE**).  
  
```
HRESULT GetAmbientUserMode(BOOL& bUserMode);
```  
  
### Parameters  
 `bUserMode`  
 The property **DISPID_AMBIENT_USERMODE**.  
  
### Return Value  
 One of the standard HRESULT values.  
  
##  <a name="ccomcontrolbase__getdirty"></a>  CComControlBase::GetDirty  
 Returns the value of data member `m_bRequiresSave`.  
  
```
BOOL GetDirty();
```  
  
### Return Value  
 Returns the value of data member [m_bRequiresSave](#ccomcontrolbase__m_brequiressave).  
  
### Remarks  
 This value is set using [CComControlBase::SetDirty](#ccomcontrolbase__setdirty).  
  
##  <a name="ccomcontrolbase__getzoominfo"></a>  CComControlBase::GetZoomInfo  
 Retrieves the x and y values of the numerator and denominator of the zoom factor for a control activated for in-place editing.  
  
```
void GetZoomInfo(ATL_DRAWINFO& di);
```  
  
### Parameters  
 `di`  
 The structure that will hold the zoom factor's numerator and denominator. For more information, see [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md).  
  
### Remarks  
 The zoom factor is the proportion of the control's natural size to its current extent.  
  
##  <a name="ccomcontrolbase__inplaceactivate"></a>  CComControlBase::InPlaceActivate  
 Causes the control to transition from the inactive state to whatever state the verb in `iVerb` indicates.  
  
```
HRESULT InPlaceActivate(LONG iVerb,  const RECT* prcPosRect = NULL);
```  
  
### Parameters  
 `iVerb`  
 Value indicating the action to be performed by [IOleObjectImpl::DoVerb](../../atl/reference/ioleobjectimpl-class.md#ioleobjectimpl__doverb).  
  
 *prcPosRect*  
 Pointer to the position of the in-place control.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 Before activation, this method checks that the control has a client site, checks how much of the control is visible, and gets the control's location in the parent window. After the control is activated, this method activates the control's user interface and tells the container to make the control visible.  
  
 This method also retrieves an `IOleInPlaceSite`, **IOleInPlaceSiteEx**, or **IOleInPlaceSiteWindowless** interface pointer for the control and stores it in the control class's data member [CComControlBase::m_spInPlaceSite](#ccomcontrolbase__m_spinplacesite). The control class data members [CComControlBase::m_bInPlaceSiteEx](#ccomcontrolbase__m_binplacesiteex), [CComControlBase::m_bWndLess](#ccomcontrolbase__m_bwndless), [CComControlBase::m_bWasOnceWindowless](#ccomcontrolbase__m_bwasoncewindowless), and [CComControlBase::m_bNegotiatedWnd](#ccomcontrolbase__m_bnegotiatedwnd) are set to true as appropriate.  
  
##  <a name="ccomcontrolbase__internalgetsite"></a>  CComControlBase::InternalGetSite  
 Call this method to query the control site for a pointer to the identified interface.  
  
```
HRESULT InternalGetSite(REFIID riid,
    void** ppUnkSite);
```  
  
### Parameters  
 `riid`  
 The IID of the interface pointer that should be returned in `ppUnkSite`.  
  
 `ppUnkSite`  
 Address of the pointer variable that receives the interface pointer requested in `riid`.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 If the site supports the interface requested in `riid`, the pointer is returned by means of `ppUnkSite`. Otherwise, `ppUnkSite` is set to NULL.  
  
##  <a name="ccomcontrolbase__m_bautosize"></a>  CComControlBase::m_bAutoSize  
 Flag indicating the control cannot be any other size.  
  
```
unsigned m_bAutoSize:1;
```  
  
### Remarks  
 This flag is checked by `IOleObjectImpl::SetExtent` and, if **TRUE**, causes the function to return **E_FAIL**.  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 If you add the **Auto Size** option on the [Stock Properties](../../atl/reference/stock-properties-atl-control-wizard.md) tab of the ATL Control Wizard, the wizard automatically creates this data member in your control class, creates put and get methods for the property, and supports [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) to automatically notify the container when the property changes.  
  
##  <a name="ccomcontrolbase__m_bdrawfromnatural"></a>  CComControlBase::m_bDrawFromNatural  
 Flag indicating that `IDataObjectImpl::GetData` and `CComControlBase::GetZoomInfo` should set the control size from `m_sizeNatural` rather than from `m_sizeExtent`.  
  
```
unsigned m_bDrawFromNatural:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_bdrawgetdatainhimetric"></a>  CComControlBase::m_bDrawGetDataInHimetric  
 Flag indicating that `IDataObjectImpl::GetData` should use HIMETRIC units and not pixels when drawing.  
  
```
unsigned m_bDrawGetDataInHimetric:1;
```  
  
### Remarks  
 Each logical HIMETRIC unit is 0.01 millimeter.  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_binplaceactive"></a>  CComControlBase::m_bInPlaceActive  
 Flag indicating the control is in-place active.  
  
```
unsigned m_bInPlaceActive:1;
```  
  
### Remarks  
 This means the control is visible and its window, if any, is visible, but its menus and toolbars may not be active. The `m_bUIActive` flag indicates the control's user interface, such as menus, is also active.  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_binplacesiteex"></a>  CComControlBase::m_bInPlaceSiteEx  
 Flag indicating the container supports the **IOleInPlaceSiteEx** interface and OCX96 control features, such as windowless and flicker-free controls.  
  
```
unsigned m_bInPlaceSiteEx:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 The data member `m_spInPlaceSite` points to an [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), or [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interface, depending on the value of the `m_bWndLess` and `m_bInPlaceSiteEx` flags. (The data member `m_bNegotiatedWnd` must be **TRUE** for the `m_spInPlaceSite` pointer to be valid.)  
  
 If `m_bWndLess` is **FALSE** and `m_bInPlaceSiteEx` is **TRUE**, `m_spInPlaceSite` is an **IOleInPlaceSiteEx** interface pointer. See [m_spInPlaceSite](#ccomcontrolbase__m_spinplacesite) for a table showing the relationship among these three data members.  
  
##  <a name="ccomcontrolbase__m_bnegotiatedwnd"></a>  CComControlBase::m_bNegotiatedWnd  
 Flag indicating whether or not the control has negotiated with the container about support for OCX96 control features (such as flicker-free and windowless controls), and whether the control is windowed or windowless.  
  
```
unsigned m_bNegotiatedWnd:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 The `m_bNegotiatedWnd` flag must be **TRUE** for the `m_spInPlaceSite` pointer to be valid.  
  
##  <a name="ccomcontrolbase__m_brecomposeonresize"></a>  CComControlBase::m_bRecomposeOnResize  
 Flag indicating the control wants to recompose its presentation when the container changes the control's display size.  
  
```
unsigned m_bRecomposeOnResize:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 This flag is checked by [IOleObjectImpl::SetExtent](../../atl/reference/ioleobjectimpl-class.md#ioleobjectimpl__setextent) and, if **TRUE**, `SetExtent` notifies the container of view changes. if this flag is set, the **OLEMISC_RECOMPOSEONRESIZE** bit in the [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) enumeration should also be set.  
  
##  <a name="ccomcontrolbase__m_brequiressave"></a>  CComControlBase::m_bRequiresSave  
 Flag indicating the control has changed since it was last saved.  
  
```
unsigned m_bRequiresSave:1;
```  
  
### Remarks  
 The value of `m_bRequiresSave` can be set with [CComControlBase::SetDirty](#ccomcontrolbase__setdirty) and retrieved with [CComControlBase::GetDirty](#ccomcontrolbase__getdirty).  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_bresizenatural"></a>  CComControlBase::m_bResizeNatural  
 Flag indicating the control wants to resize its natural extent (its unscaled physical size) when the container changes the control's display size.  
  
```
unsigned m_bResizeNatural:1;
```  
  
### Remarks  
 This flag is checked by `IOleObjectImpl::SetExtent` and, if **TRUE**, the size passed into `SetExtent` is assigned to `m_sizeNatural`.  
  
 The size passed into `SetExtent` is always assigned to `m_sizeExtent`, regardless of the value of `m_bResizeNatural`.  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_buiactive"></a>  CComControlBase::m_bUIActive  
 Flag indicating the control's user interface, such as menus and toolbars, is active.  
  
```
unsigned m_bUIActive:1;
```  
  
### Remarks  
 The `m_bInPlaceActive` flag indicates that the control is active, but not that its user interface is active.  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_busingwindowrgn"></a>  CComControlBase::m_bUsingWindowRgn  
 Flag indicating the control is using the container-supplied window region.  
  
```
unsigned m_bUsingWindowRgn:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_bwasoncewindowless"></a>  CComControlBase::m_bWasOnceWindowless  
 Flag indicating the control has been windowless, but may or may not be windowless now.  
  
```
unsigned m_bWasOnceWindowless:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_bwindowonly"></a>  CComControlBase::m_bWindowOnly  
 Flag indicating the control should be windowed, even if the container supports windowless controls.  
  
```
unsigned m_bWindowOnly:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_bwndless"></a>  CComControlBase::m_bWndLess  
 Flag indicating the control is windowless.  
  
```
unsigned m_bWndLess:1;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 The data member `m_spInPlaceSite` points to an [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), or [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interface, depending on the value of the `m_bWndLess` and [CComControlBase::m_bInPlaceSiteEx](#ccomcontrolbase__m_binplacesiteex) flags. (The data member [CComControlBase::m_bNegotiatedWnd](#ccomcontrolbase__m_bnegotiatedwnd) must be **TRUE** for the [CComControlBase::m_spInPlaceSite](#ccomcontrolbase__m_spinplacesite) pointer to be valid.)  
  
 If `m_bWndLess` is **TRUE**, `m_spInPlaceSite` is an **IOleInPlaceSiteWindowless** interface pointer. See [CComControlBase::m_spInPlaceSite](#ccomcontrolbase__m_spinplacesite) for a table showing the complete relationship between these data members.  
  
##  <a name="ccomcontrolbase__m_hwndcd"></a>  CComControlBase::m_hWndCD  
 Contains a reference to the window handle associated with the control.  
  
```
HWND& m_hWndCD;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_nfreezeevents"></a>  CComControlBase::m_nFreezeEvents  
 A count of the number of times the container has frozen events (refused to accept events) without an intervening thaw of events (acceptance of events).  
  
```
short m_nFreezeEvents;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_rcpos"></a>  CComControlBase::m_rcPos  
 The position in pixels of the control, expressed in the coordinates of the container.  
  
```
RECT m_rcPos;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_sizeextent"></a>  CComControlBase::m_sizeExtent  
 The extent of the control in HIMETRIC units (each unit is 0.01 millimeters) for a particular display.  
  
```
SIZE m_sizeExtent;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 This size is scaled by the display. The control's physical size is specified in the `m_sizeNatural` data member and is fixed.  
  
 You can convert the size to pixels with the global function [AtlHiMetricToPixel](http://msdn.microsoft.com/library/00c3af58-7298-4082-9a2e-5b68a8cec6fd).  
  
##  <a name="ccomcontrolbase__m_sizenatural"></a>  CComControlBase::m_sizeNatural  
 The physical size of the control in HIMETRIC units (each unit is 0.01 millimeters).  
  
```
SIZE m_sizeNatural;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 This size is fixed, while the size in `m_sizeExtent` is scaled by the display.  
  
 You can convert the size to pixels with the global function [AtlHiMetricToPixel](http://msdn.microsoft.com/library/00c3af58-7298-4082-9a2e-5b68a8cec6fd).  
  
##  <a name="ccomcontrolbase__m_spadvisesink"></a>  CComControlBase::m_spAdviseSink  
 A direct pointer to the advisory connection on the container (the container's [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513)).  
  
```
CComPtr<IAdviseSink>
    m_spAdviseSink;
```     
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_spambientdispatch"></a>  CComControlBase::m_spAmbientDispatch  
 A `CComDispatchDriver` object that lets you retrieve and set an object's properties through an `IDispatch` pointer.  
  
```
CComDispatchDriver m_spAmbientDispatch;
```  
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_spclientsite"></a>  CComControlBase::m_spClientSite  
 A pointer to the control's client site within the container.  
  
```
CComPtr<IOleClientSite>
    m_spClientSite;
```     
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
##  <a name="ccomcontrolbase__m_spdataadviseholder"></a>  CComControlBase::m_spDataAdviseHolder  
 Provides a standard means to hold advisory connections between data objects and advise sinks.  
  
```
CComPtr<IDataAdviseHolder>
    m_spDataAdviseHolder;
```     
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 A data object is a control that can transfer data and that implements [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421), whose methods specify the format and transfer medium of the data.  
  
 The interface `m_spDataAdviseHolder` implements the [IDataObject::DAdvise](http://msdn.microsoft.com/library/windows/desktop/ms692579) and [IDataObject::DUnadvise](http://msdn.microsoft.com/library/windows/desktop/ms692448) methods to establish and delete advisory connections to the container. The control's container must implement an advise sink by supporting the [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interface.  
  
##  <a name="ccomcontrolbase__m_spinplacesite"></a>  CComControlBase::m_spInPlaceSite  
 A pointer to the container's [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461), or [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300) interface pointer.  
  
```
CComPtr<IOleInPlaceSiteWindowless>
    m_spInPlaceSite;
```     
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 The `m_spInPlaceSite` pointer is valid only if the [m_bNegotiatedWnd](#ccomcontrolbase__m_bnegotiatedwnd) flag is **TRUE**.  
  
 The following table shows how the `m_spInPlaceSite` pointer type depends on the [m_bWndLess](#ccomcontrolbase__m_bwndless) and [m_bInPlaceSiteEx](#ccomcontrolbase__m_binplacesiteex) data member flags:  
  
|m_spInPlaceSite Type|m_bWndLess Value|m_bInPlaceSiteEx Value|  
|---------------------------|-----------------------|-----------------------------|  
|**IOleInPlaceSiteWindowless**|**TRUE**|**TRUE** or **FALSE**|  
|**IOleInPlaceSiteEx**|**FALSE**|**TRUE**|  
|`IOleInPlaceSite`|**FALSE**|**FALSE**|  
  
##  <a name="ccomcontrolbase__m_spoleadviseholder"></a>  CComControlBase::m_spOleAdviseHolder  
 Provides a standard implementation of a way to hold advisory connections.  
  
```
CComPtr<IOleAdviseHolder>
    m_spOleAdviseHolder;
```     
  
### Remarks  
  
> [!NOTE]
>  To use this data member within your control class, you must declare it as a data member in your control class. Your control class will not inherit this data member from the base class because it is declared within a union in the base class.  
  
 The interface `m_spOleAdviseHolder` implements the [IOleObject::Advise](http://msdn.microsoft.com/library/windows/desktop/ms686573) and [IOleObject::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms693749) methods to establish and delete advisory connections to the container. The control's container must implement an advise sink by supporting the [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) interface.  
  
##  <a name="ccomcontrolbase__ondraw"></a>  CComControlBase::OnDraw  
 Override this method to draw your control.  
  
```
virtual HRESULT OnDraw(ATL_DRAWINFO& di);
```  
  
### Parameters  
 `di`  
 A reference to the [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) structure that contains drawing information such as the draw aspect, the control bounds, and whether the drawing is optimized or not.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 The default `OnDraw` deletes or restores the device context or does nothing, depending on flags set in [CComControlBase::OnDrawAdvanced](#ccomcontrolbase__ondrawadvanced).  
  
 An `OnDraw` method is automatically added to your control class when you create your control with the ATL Control Wizard. The wizard's default `OnDraw` draws a rectangle with the label "ATL 8.0".  
  
### Example  
 See the example for [CComControlBase::GetAmbientAppearance](#ccomcontrolbase__getambientappearance).  
  
##  <a name="ccomcontrolbase__ondrawadvanced"></a>  CComControlBase::OnDrawAdvanced  
 The default `OnDrawAdvanced` prepares a normalized device context for drawing, then calls your control class's `OnDraw` method.  
  
```
virtual HRESULT OnDrawAdvanced(ATL_DRAWINFO& di);
```  
  
### Parameters  
 `di`  
 A reference to the [ATL_DRAWINFO](../../atl/reference/atl-drawinfo-structure.md) structure that contains drawing information such as the draw aspect, the control bounds, and whether the drawing is optimized or not.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 Override this method if you want to accept the device context passed by the container without normalizing it.  
  
 See [CComControlBase::OnDraw](#ccomcontrolbase__ondraw) for more details.  
  
##  <a name="ccomcontrolbase__onkillfocus"></a>  CComControlBase::OnKillFocus  
 Checks that the control is in-place active and has a valid control site, then informs the container that the control has lost focus.  
  
```
LRESULT OnKillFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### Parameters  
 `nMsg`  
 Reserved.  
  
 `wParam`  
 Reserved.  
  
 `lParam`  
 Reserved.  
  
 `bHandled`  
 Flag that indicates whether the window message was successfully handled. The default is `FALSE`.  
  
### Return Value  
 Always returns 1.  
  
##  <a name="ccomcontrolbase__onmouseactivate"></a>  CComControlBase::OnMouseActivate  
 Checks that the UI is in user mode, then activates the control.  
  
```
LRESULT OnMouseActivate(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### Parameters  
 `nMsg`  
 Reserved.  
  
 `wParam`  
 Reserved.  
  
 `lParam`  
 Reserved.  
  
 `bHandled`  
 Flag that indicates whether the window message was successfully handled. The default is `FALSE`.  
  
### Return Value  
 Always returns 1.  
  
##  <a name="ccomcontrolbase__onpaint"></a>  CComControlBase::OnPaint  
 Prepares the container for painting, gets the control's client area, then calls the control class's `OnDrawAdvanced` method.  
  
```
LRESULT OnPaint(UINT /* nMsg */,
    WPARAM wParam,
    LPARAM /* lParam */,
    BOOL& /* lResult */);
```  
  
### Parameters  
 `nMsg`  
 Reserved.  
  
 `wParam`  
 An existing HDC.  
  
 `lParam`  
 Reserved.  
  
 `lResult`  
 Reserved.  
  
### Return Value  
 Always returns zero.  
  
### Remarks  
 If `wParam` is not NULL, `OnPaint` assumes it contains a valid HDC and uses it instead of [CComControlBase::m_hWndCD](#ccomcontrolbase__m_hwndcd).  
  
##  <a name="ccomcontrolbase__onsetfocus"></a>  CComControlBase::OnSetFocus  
 Checks that the control is in-place active and has a valid control site, then informs the container the control has gained focus.  
  
```
LRESULT OnSetFocus(UINT /* nMsg */,
    WPARAM /* wParam */,
    LPARAM /* lParam */,
    BOOL& bHandled);
```  
  
### Parameters  
 `nMsg`  
 Reserved.  
  
 `wParam`  
 Reserved.  
  
 `lParam`  
 Reserved.  
  
 `bHandled`  
 Flag that indicates whether the window message was successfully handled. The default is `FALSE`.  
  
### Return Value  
 Always returns 1.  
  
### Remarks  
 Sends a notification to the container that the control has received focus.  
  
##  <a name="ccomcontrolbase__pretranslateaccelerator"></a>  CComControlBase::PreTranslateAccelerator  
 Override this method to provide your own keyboard accelerator handlers.  
  
```
BOOL PreTranslateAccelerator(LPMSG /* pMsg */,
    HRESULT& /* hRet */);
```  
  
### Parameters  
 `pMsg`  
 Reserved.  
  
 *hRet*  
 Reserved.  
  
### Return Value  
 By default returns **FALSE**.  
  
##  <a name="ccomcontrolbase__sendonclose"></a>  CComControlBase::SendOnClose  
 Notifies all advisory sinks registered with the advise holder that the control has been closed.  
  
```
HRESULT SendOnClose();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Sends a notification that the control has closed its advisory sinks.  
  
##  <a name="ccomcontrolbase__sendondatachange"></a>  CComControlBase::SendOnDataChange  
 Notifies all advisory sinks registered with the advise holder that the control data has changed.  
  
```
HRESULT SendOnDataChange(DWORD advf = 0);
```  
  
### Parameters  
 *advf*  
 Advise flags that specify how the call to [IAdviseSink::OnDataChange](http://msdn.microsoft.com/library/windows/desktop/ms687283) is made. Values are from the [ADVF](http://msdn.microsoft.com/library/windows/desktop/ms693742) enumeration.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="ccomcontrolbase__sendonrename"></a>  CComControlBase::SendOnRename  
 Notifies all advisory sinks registered with the advise holder that the control has a new moniker.  
  
```
HRESULT SendOnRename(IMoniker* pmk);
```  
  
### Parameters  
 *pmk*  
 Pointer to the new moniker of the control.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Sends a notification that the moniker for the control has changed.  
  
##  <a name="ccomcontrolbase__sendonsave"></a>  CComControlBase::SendOnSave  
 Notifies all advisory sinks registered with the advise holder that the control has been saved.  
  
```
HRESULT SendOnSave();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Sends a notification that the control has just saved its data.  
  
##  <a name="ccomcontrolbase__sendonviewchange"></a>  CComControlBase::SendOnViewChange  
 Notifies all registered advisory sinks that the control's view has changed.  
  
```
HRESULT SendOnViewChange(DWORD dwAspect,  LONG lindex = -1);
```  
  
### Parameters  
 `dwAspect`  
 The aspect or view of the control.  
  
 *lindex*  
 The portion of the view that has changed. Only -1 is valid.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 `SendOnViewChange` calls [IAdviseSink::OnViewChange](http://msdn.microsoft.com/library/windows/desktop/ms694337). The only value of *lindex* currently supported is -1, which indicates that the entire view is of interest.  
  
##  <a name="ccomcontrolbase__setcontrolfocus"></a>  CComControlBase::SetControlFocus  
 Sets or removes the keyboard focus to or from the control.  
  
```
BOOL SetControlFocus(BOOL bGrab);
```  
  
### Parameters  
 *bGrab*  
 If **TRUE**, sets the keyboard focus to the calling control. If **FALSE**, removes the keyboard focus from the calling control, provided it has the focus.  
  
### Return Value  
 Returns **TRUE** if the control successfully receives focus; otherwise, **FALSE**.  
  
### Remarks  
 For a windowed control, the Windows API function [SetFocus](http://msdn.microsoft.com/library/windows/desktop/ms646312) is called. For a windowless control, [IOleInPlaceSiteWindowless::SetFocus](http://msdn.microsoft.com/library/windows/desktop/ms679745) is called. Through this call, a windowless control obtains the keyboard focus and can respond to window messages.  
  
##  <a name="ccomcontrolbase__setdirty"></a>  CComControlBase::SetDirty  
 Sets the data member `m_bRequiresSave` to the value in `bDirty`.  
  
```
void SetDirty(BOOL bDirty);
```  
  
### Parameters  
 `bDirty`  
 Value of the data member [CComControlBase::m_bRequiresSave](#ccomcontrolbase__m_brequiressave).  
  
### Remarks  
 **SetDirty(TRUE)** should be called to flag that the control has changed since it was last saved. The value of `m_bRequiresSave` is retrieved with [CComControlBase::GetDirty](#ccomcontrolbase__getdirty).  
  
## See Also  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
