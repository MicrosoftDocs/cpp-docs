---
title: "IOleObjectImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IOleObjectImpl"
  - "ATL.IOleObjectImpl<T>"
  - "ATL::IOleObjectImpl"
  - "ATL::IOleObjectImpl<T>"
  - "IOleObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX controls [C++], communication between container and control"
  - "IOleObject, ATL implementation"
  - "IOleObjectImpl class"
ms.assetid: 59750b2d-1633-4a51-a4c2-6455b6b90c45
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
# IOleObjectImpl Class
This class implements **IUnknown** and is the principal interface through which a container communicates with a control.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template<class T>  class ATL_NO_VTABLE IOleObjectImpl :  public IOleObject
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IOleObjectImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IOleObjectImpl::Advise](#ioleobjectimpl__advise)|Establishes an advisory connection with the control.|  
|[IOleObjectImpl::Close](#ioleobjectimpl__close)|Changes the control state from running to loaded.|  
|[IOleObjectImpl::DoVerb](#ioleobjectimpl__doverb)|Tells the control to perform one of its enumerated actions.|  
|[IOleObjectImpl::DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo)|Tells the control to discard any undo state it is maintaining.|  
|[IOleObjectImpl::DoVerbHide](#ioleobjectimpl__doverbhide)|Tells the control to remove its user interface from view.|  
|[IOleObjectImpl::DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate)|Runs the control and installs its window, but does not install the control's user interface.|  
|[IOleObjectImpl::DoVerbOpen](#ioleobjectimpl__doverbopen)|Causes the control to be open-edited in a separate window.|  
|[IOleObjectImpl::DoVerbPrimary](#ioleobjectimpl__doverbprimary)|Performs the specified action when the user double-clicks the control. The control defines the action, usually to activate the control in-place.|  
|[IOleObjectImpl::DoVerbShow](#ioleobjectimpl__doverbshow)|Shows a newly inserted control to the user.|  
|[IOleObjectImpl::DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate)|Activates the control in-place and shows the control's user interface, such as menus and toolbars.|  
|[IOleObjectImpl::EnumAdvise](#ioleobjectimpl__enumadvise)|Enumerates the control's advisory connections.|  
|[IOleObjectImpl::EnumVerbs](#ioleobjectimpl__enumverbs)|Enumerates actions for the control.|  
|[IOleObjectImpl::GetClientSite](#ioleobjectimpl__getclientsite)|Retrieves the control's client site.|  
|[IOleObjectImpl::GetClipboardData](#ioleobjectimpl__getclipboarddata)|Retrieves data from the Clipboard. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::GetExtent](#ioleobjectimpl__getextent)|Retrieves the extent of the control's display area.|  
|[IOleObjectImpl::GetMiscStatus](#ioleobjectimpl__getmiscstatus)|Retrieves the status of the control.|  
|[IOleObjectImpl::GetMoniker](#ioleobjectimpl__getmoniker)|Retrieves the control's moniker. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::GetUserClassID](#ioleobjectimpl__getuserclassid)|Retrieves the control's class identifier.|  
|[IOleObjectImpl::GetUserType](#ioleobjectimpl__getusertype)|Retrieves the control's user-type name.|  
|[IOleObjectImpl::InitFromData](#ioleobjectimpl__initfromdata)|Initializes the control from selected data. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::IsUpToDate](#ioleobjectimpl__isuptodate)|Checks if the control is up to date. The ATL implementation returns `S_OK`.|  
|[IOleObjectImpl::OnPostVerbDiscardUndo](#ioleobjectimpl__onpostverbdiscardundo)|Called by [DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo) after the undo state is discarded.|  
|[IOleObjectImpl::OnPostVerbHide](#ioleobjectimpl__onpostverbhide)|Called by [DoVerbHide](#ioleobjectimpl__doverbhide) after the control is hidden.|  
|[IOleObjectImpl::OnPostVerbInPlaceActivate](#ioleobjectimpl__onpostverbinplaceactivate)|Called by [DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate) after the control is activated in place.|  
|[IOleObjectImpl::OnPostVerbOpen](#ioleobjectimpl__onpostverbopen)|Called by [DoVerbOpen](#ioleobjectimpl__doverbopen) after the control has been opened for editing in a separate window.|  
|[IOleObjectImpl::OnPostVerbShow](#ioleobjectimpl__onpostverbshow)|Called by [DoVerbShow](#ioleobjectimpl__doverbshow) after the control has been made visible.|  
|[IOleObjectImpl::OnPostVerbUIActivate](#ioleobjectimpl__onpostverbuiactivate)|Called by [DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate) after the control's user interface has been activated.|  
|[IOleObjectImpl::OnPreVerbDiscardUndo](#ioleobjectimpl__onpreverbdiscardundo)|Called by [DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo) before the undo state is discarded.|  
|[IOleObjectImpl::OnPreVerbHide](#ioleobjectimpl__onpreverbhide)|Called by [DoVerbHide](#ioleobjectimpl__doverbhide) before the control is hidden.|  
|[IOleObjectImpl::OnPreVerbInPlaceActivate](#ioleobjectimpl__onpreverbinplaceactivate)|Called by [DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate) before the control is activated in place.|  
|[IOleObjectImpl::OnPreVerbOpen](#ioleobjectimpl__onpreverbopen)|Called by [DoVerbOpen](#ioleobjectimpl__doverbopen) before the control has been opened for editing in a separate window.|  
|[IOleObjectImpl::OnPreVerbShow](#ioleobjectimpl__onpreverbshow)|Called by [DoVerbShow](#ioleobjectimpl__doverbshow) before the control has been made visible.|  
|[IOleObjectImpl::OnPreVerbUIActivate](#ioleobjectimpl__onpreverbuiactivate)|Called by [DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate) before the control's user interface has been activated.|  
|[IOleObjectImpl::SetClientSite](#ioleobjectimpl__setclientsite)|Tells the control about its client site in the container.|  
|[IOleObjectImpl::SetColorScheme](#ioleobjectimpl__setcolorscheme)|Recommends a color scheme to the control's application, if any. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::SetExtent](#ioleobjectimpl__setextent)|Sets the extent of the control's display area.|  
|[IOleObjectImpl::SetHostNames](#ioleobjectimpl__sethostnames)|Tells the control the names of the container application and container document.|  
|[IOleObjectImpl::SetMoniker](#ioleobjectimpl__setmoniker)|Tells the control what its moniker is. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::Unadvise](#ioleobjectimpl__unadvise)|Deletes an advisory connection with the control.|  
|[IOleObjectImpl::Update](#ioleobjectimpl__update)|Updates the control. The ATL implementation returns `S_OK`.|  
  
## Remarks  
 The [IOleObject](http://msdn.microsoft.com/library/windows/desktop/dd542709) interface is the principal interface through which a container communicates with a control. Class `IOleObjectImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IOleObject`  
  
 `IOleObjectImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ioleobjectimpl__advise"></a>  IOleObjectImpl::Advise  
 Establishes an advisory connection with the control.  
  
```
STDMETHOD(Advise)(
    IAdviseSink* pAdvSink,
    DWORD* pdwConnection);
```  
  
### Remarks  
 See [IOleObject::Advise](http://msdn.microsoft.com/library/windows/desktop/ms686573) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__close"></a>  IOleObjectImpl::Close  
 Changes the control state from running to loaded.  
  
```
STDMETHOD(Close)(DWORD dwSaveOption);
```  
  
### Remarks  
 Deactivates the control and destroys the control window if it exists. If the control class data member [CComControlBase::m_bRequiresSave](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_brequiressave) is **TRUE** and the `dwSaveOption` parameter is either `OLECLOSE_SAVEIFDIRTY` or `OLECLOSE_PROMPTSAVE`, the control properties are saved before closing.  
  
 The pointers held in the control class data members [CComControlBase::m_spInPlaceSite](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_spinplacesite) and [CComControlBase::m_spAdviseSink](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_spadvisesink) are released, and the data members [CComControlBase::m_bNegotiatedWnd](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_bnegotiatedwnd), [CComControlBase::m_bWndless](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_bwndless), and [CComControlBase::m_bInPlaceSiteEx](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_binplacesiteex) are set to **FALSE**.  
  
 See [IOleObject::Close](http://msdn.microsoft.com/library/windows/desktop/ms683922) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__doverb"></a>  IOleObjectImpl::DoVerb  
 Tells the control to perform one of its enumerated actions.  
  
```
STDMETHOD(DoVerb)(LONG iVerb,
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
|**OLEIVERB_DISCARDUNDOSTATE**|[DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo)|  
|`OLEIVERB_HIDE`|[DoVerbHide](#ioleobjectimpl__doverbhide)|  
|**OLEIVERB_INPLACEACTIVATE**|[DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate)|  
|`OLEIVERB_OPEN`|[DoVerbOpen](#ioleobjectimpl__doverbopen)|  
|`OLEIVERB_PRIMARY`|[DoVerbPrimary](#ioleobjectimpl__doverbprimary)|  
|**OLEIVERB_PROPERTIES**|[CComControlBase::DoVerbProperties](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__doverbproperties)|  
|`OLEIVERB_SHOW`|[DoVerbShow](#ioleobjectimpl__doverbshow)|  
|`OLEIVERB_UIACTIVATE`|[DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate)|  
  
 See [IOleObject::DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__doverbdiscardundo"></a>  IOleObjectImpl::DoVerbDiscardUndo  
 Tells the control to discard any undo state it is maintaining.  
  
```
HRESULT DoVerbDiscardUndo(LPCRECT /* prcPosRect */,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="ioleobjectimpl__doverbhide"></a>  IOleObjectImpl::DoVerbHide  
 Deactivates and removes the control's user interface, and hides the control.  
  
```
HRESULT DoVerbHide(LPCRECT /* prcPosRect */,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control. Not used in the ATL implementation.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="ioleobjectimpl__doverbinplaceactivate"></a>  IOleObjectImpl::DoVerbInPlaceActivate  
 Runs the control and installs its window, but does not install the control's user interface.  
  
```
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control. Not used in the ATL implementation.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 Activates the control in place by calling [CComControlBase::InPlaceActivate](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__inplaceactivate). Unless the control class's data member `m_bWindowOnly` is **TRUE**, `DoVerbInPlaceActivate` first attempts to activate the control as a windowless control (possible only if the container supports [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300)). If that fails, the function attempts to activate the control with extended features (possible only if the container supports [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461)). If that fails, the function attempts to activate the control with no extended features (possible only if the container supports [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586)). If activation succeeds, the function notifies the container the control has been activated.  
  
##  <a name="ioleobjectimpl__doverbopen"></a>  IOleObjectImpl::DoVerbOpen  
 Causes the control to be open-edited in a separate window.  
  
```
HRESULT DoVerbOpen(LPCRECT /* prcPosRect */,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="ioleobjectimpl__doverbprimary"></a>  IOleObjectImpl::DoVerbPrimary  
 Defines the action taken when the user double-clicks the control.  
  
```
HRESULT DoVerbPrimary(LPCRECT prcPosRect,  HWND hwndParent);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 By default, set to display the property pages. You can override this in your control class to invoke a different behavior on double-click; for example, play a video or go in-place active.  
  
##  <a name="ioleobjectimpl__doverbshow"></a>  IOleObjectImpl::DoVerbShow  
 Tells the container to make the control visible.  
  
```
HRESULT DoVerbShow(LPCRECT prcPosRect,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control. Not used in the ATL implementation.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
##  <a name="ioleobjectimpl__doverbuiactivate"></a>  IOleObjectImpl::DoVerbUIActivate  
 Activates the control's user interface and notifies the container that its menus are being replaced by composite menus.  
  
```
HRESULT DoVerbUIActivate(LPCRECT prcPosRect,  HWND /* hwndParent */);
```  
  
### Parameters  
 `prcPosRec`  
 [in] Pointer to the rectangle the container wants the control to draw into.  
  
 *hwndParent*  
 [in] Handle of the window containing the control. Not used in the ATL implementation.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
##  <a name="ioleobjectimpl__enumadvise"></a>  IOleObjectImpl::EnumAdvise  
 Supplies an enumeration of registered advisory connections for this control.  
  
```
STDMETHOD(EnumAdvise)(IEnumSTATDATA** ppenumAdvise);
```  
  
### Remarks  
 See [IOleObject::EnumAdvise](http://msdn.microsoft.com/library/windows/desktop/ms682355) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__enumverbs"></a>  IOleObjectImpl::EnumVerbs  
 Supplies an enumeration of registered actions (verbs) for this control by calling **OleRegEnumVerbs**.  
  
```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```  
  
### Remarks  
 You can add verbs to your project's .rgs file. For example, see CIRCCTL.RGS in the [CIRC](../../visual-cpp-samples.md) sample.  
  
 See [IOleObject::EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getclientsite"></a>  IOleObjectImpl::GetClientSite  
 Puts the pointer in the control class data member [CComControlBase::m_spClientSite](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_spclientsite) into *ppClientSite* and increments the reference count on the pointer.  
  
```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```  
  
### Remarks  
 See [IOleObject::GetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms692603) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getclipboarddata"></a>  IOleObjectImpl::GetClipboardData  
 Retrieves data from the Clipboard.  
  
```
STDMETHOD(GetClipboardData)(DWORD /* dwReserved */,
    IDataObject** /* ppDataObject */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/ms682288) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getextent"></a>  IOleObjectImpl::GetExtent  
 Retrieves a running control's display size in HIMETRIC units (0.01 millimeter per unit).  
  
```
STDMETHOD(GetExtent)(DWORD dwDrawAspect,
    SIZEL* psizel);
```  
  
### Remarks  
 The size is stored in the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_sizeextent).  
  
 See [IOleObject::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms692325) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getmiscstatus"></a>  IOleObjectImpl::GetMiscStatus  
 Returns a pointer to registered status information for the control by calling **OleRegGetMiscStatus**.  
  
```
STDMETHOD(GetMiscStatus)(DWORD dwAspect,
    DWORD* pdwStatus);
```  
  
### Remarks  
 The status information includes behaviors supported by the control and presentation data. You can add status information to your project's .rgs file.  
  
 See [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getmoniker"></a>  IOleObjectImpl::GetMoniker  
 Retrieves the control's moniker.  
  
```
STDMETHOD(GetMoniker)(DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker** /* ppmk */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::GetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms686576) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getuserclassid"></a>  IOleObjectImpl::GetUserClassID  
 Returns the control's class identifier.  
  
```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```  
  
### Remarks  
 See [IOleObject::GetUserClassID](http://msdn.microsoft.com/library/windows/desktop/ms682313) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getusertype"></a>  IOleObjectImpl::GetUserType  
 Returns the control's user-type name by calling **OleRegGetUserType**.  
  
```
STDMETHOD(GetUserType)(DWORD dwFormOfType,
    LPOLESTR* pszUserType);
```  
  
### Remarks  
 The user-type name is used for display in user-interfaces elements such as menus and dialog boxes. You can change the user-type name in your project's .rgs file.  
  
 See [IOleObject::GetUserType](http://msdn.microsoft.com/library/windows/desktop/ms688643) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__initfromdata"></a>  IOleObjectImpl::InitFromData  
 Initializes the control from selected data.  
  
```
STDMETHOD(InitFromData)(
    IDataObject* /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::InitFromData](http://msdn.microsoft.com/library/windows/desktop/ms688510) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__isuptodate"></a>  IOleObjectImpl::IsUpToDate  
 Checks if the control is up to date.  
  
```
STDMETHOD(IsUpToDate)(void);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::IsUpToDate](http://msdn.microsoft.com/library/windows/desktop/ms686624) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__onpostverbdiscardundo"></a>  IOleObjectImpl::OnPostVerbDiscardUndo  
 Called by [DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo) after the undo state is discarded.  
  
```
HRESULT OnPostVerbDiscardUndo();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the undo state is discarded.  
  
##  <a name="ioleobjectimpl__onpostverbhide"></a>  IOleObjectImpl::OnPostVerbHide  
 Called by [DoVerbHide](#ioleobjectimpl__doverbhide) after the control is hidden.  
  
```
HRESULT OnPostVerbHide();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control is hidden.  
  
##  <a name="ioleobjectimpl__onpostverbinplaceactivate"></a>  IOleObjectImpl::OnPostVerbInPlaceActivate  
 Called by [DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate) after the control is activated in place.  
  
```
HRESULT OnPostVerbInPlaceActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control is activated in place.  
  
##  <a name="ioleobjectimpl__onpostverbopen"></a>  IOleObjectImpl::OnPostVerbOpen  
 Called by [DoVerbOpen](#ioleobjectimpl__doverbopen) after the control has been opened for editing in a separate window.  
  
```
HRESULT OnPostVerbOpen();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control has been opened for editing in a separate window.  
  
##  <a name="ioleobjectimpl__onpostverbshow"></a>  IOleObjectImpl::OnPostVerbShow  
 Called by [DoVerbShow](#ioleobjectimpl__doverbshow) after the control has been made visible.  
  
```
HRESULT OnPostVerbShow();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control has been made visible.  
  
##  <a name="ioleobjectimpl__onpostverbuiactivate"></a>  IOleObjectImpl::OnPostVerbUIActivate  
 Called by [DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate) after the control's user interface has been activated.  
  
```
HRESULT OnPostVerbUIActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control's user interface has been activated.  
  
##  <a name="ioleobjectimpl__onpreverbdiscardundo"></a>  IOleObjectImpl::OnPreVerbDiscardUndo  
 Called by [DoVerbDiscardUndo](#ioleobjectimpl__doverbdiscardundo) before the undo state is discarded.  
  
```
HRESULT OnPreVerbDiscardUndo();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the undo state from being discarded, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbhide"></a>  IOleObjectImpl::OnPreVerbHide  
 Called by [DoVerbHide](#ioleobjectimpl__doverbhide) before the control is hidden.  
  
```
HRESULT OnPreVerbHide();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being hidden, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbinplaceactivate"></a>  IOleObjectImpl::OnPreVerbInPlaceActivate  
 Called by [DoVerbInPlaceActivate](#ioleobjectimpl__doverbinplaceactivate) before the control is activated in place.  
  
```
HRESULT OnPreVerbInPlaceActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being activated in place, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbopen"></a>  IOleObjectImpl::OnPreVerbOpen  
 Called by [DoVerbOpen](#ioleobjectimpl__doverbopen) before the control has been opened for editing in a separate window.  
  
```
HRESULT OnPreVerbOpen();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being opened for editing in a separate window, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbshow"></a>  IOleObjectImpl::OnPreVerbShow  
 Called by [DoVerbShow](#ioleobjectimpl__doverbshow) before the control has been made visible.  
  
```
HRESULT OnPreVerbShow();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being made visible, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbuiactivate"></a>  IOleObjectImpl::OnPreVerbUIActivate  
 Called by [DoVerbUIActivate](#ioleobjectimpl__doverbuiactivate) before the control's user interface has been activated.  
  
```
HRESULT OnPreVerbUIActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control's user interface from being activated, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__setclientsite"></a>  IOleObjectImpl::SetClientSite  
 Tells the control about its client site in the container.  
  
```
STDMETHOD(SetClientSite)(IOleClientSite* pClientSite);
```  
  
### Remarks  
 The method then returns `S_OK`.  
  
 See [IOleObject::SetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms684013) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setcolorscheme"></a>  IOleObjectImpl::SetColorScheme  
 Recommends a color scheme to the control's application, if any.  
  
```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::SetColorScheme](http://msdn.microsoft.com/library/windows/desktop/ms683971) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setextent"></a>  IOleObjectImpl::SetExtent  
 Sets the extent of the control's display area.  
  
```
STDMETHOD(SetExtent)(DWORD dwDrawAspect,
    SIZEL* psizel);
```  
  
### Remarks  
 Otherwise, `SetExtent` stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeExtent](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_sizeextent). This value is in HIMETRIC units (0.01 millimeter per unit).  
  
 If the control class data member [CComControlBase::m_bResizeNatural](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_bresizenatural) is **TRUE**, `SetExtent` also stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeNatural](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_sizenatural).  
  
 If the control class data member [CComControlBase::m_bRecomposeOnResize](../../atl/reference/ccomcontrolbase-class.md#ccomcontrolbase__m_brecomposeonresize) is **TRUE**, `SetExtent` calls `SendOnDataChange` and `SendOnViewChange` to notify all advisory sinks registered with the advise holder that the control size has changed.  
  
 See [IOleObject::SetExtent](http://msdn.microsoft.com/library/windows/desktop/ms694330) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__sethostnames"></a>  IOleObjectImpl::SetHostNames  
 Tells the control the names of the container application and container document.  
  
```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */,  LPCOLESTR /* szContainerObj */);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::SetHostNames](http://msdn.microsoft.com/library/windows/desktop/ms680642) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setmoniker"></a>  IOleObjectImpl::SetMoniker  
 Tells the control what its moniker is.  
  
```
STDMETHOD(SetMoniker)(DWORD /* dwWhichMoniker */,
    IMoniker** /* pmk */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::SetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679671) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__unadvise"></a>  IOleObjectImpl::Unadvise  
 Deletes the advisory connection stored in the control class's `m_spOleAdviseHolder` data member.  
  
```
STDMETHOD(Unadvise)(DWORD dwConnection);
```  
  
### Remarks  
 See [IOleObject::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms693749) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__update"></a>  IOleObjectImpl::Update  
 Updates the control.  
  
```
STDMETHOD(Update)(void);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::Update](http://msdn.microsoft.com/library/windows/desktop/ms679699) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../../atl/atl-class-overview.md)
