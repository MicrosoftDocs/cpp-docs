---
title: "IOleObjectImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 15
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
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)].  
  
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
|[IOleObjectImpl::Advise](../Topic/IOleObjectImpl::Advise.md)|Establishes an advisory connection with the control.|  
|[IOleObjectImpl::Close](../Topic/IOleObjectImpl::Close.md)|Changes the control state from running to loaded.|  
|[IOleObjectImpl::DoVerb](../Topic/IOleObjectImpl::DoVerb.md)|Tells the control to perform one of its enumerated actions.|  
|[IOleObjectImpl::DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md)|Tells the control to discard any undo state it is maintaining.|  
|[IOleObjectImpl::DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md)|Tells the control to remove its user interface from view.|  
|[IOleObjectImpl::DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md)|Runs the control and installs its window, but does not install the control's user interface.|  
|[IOleObjectImpl::DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md)|Causes the control to be open-edited in a separate window.|  
|[IOleObjectImpl::DoVerbPrimary](../Topic/IOleObjectImpl::DoVerbPrimary.md)|Performs the specified action when the user double-clicks the control. The control defines the action, usually to activate the control in-place.|  
|[IOleObjectImpl::DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md)|Shows a newly inserted control to the user.|  
|[IOleObjectImpl::DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md)|Activates the control in-place and shows the control's user interface, such as menus and toolbars.|  
|[IOleObjectImpl::EnumAdvise](../Topic/IOleObjectImpl::EnumAdvise.md)|Enumerates the control's advisory connections.|  
|[IOleObjectImpl::EnumVerbs](../Topic/IOleObjectImpl::EnumVerbs.md)|Enumerates actions for the control.|  
|[IOleObjectImpl::GetClientSite](../Topic/IOleObjectImpl::GetClientSite.md)|Retrieves the control's client site.|  
|[IOleObjectImpl::GetClipboardData](../Topic/IOleObjectImpl::GetClipboardData.md)|Retrieves data from the Clipboard. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::GetExtent](../Topic/IOleObjectImpl::GetExtent.md)|Retrieves the extent of the control's display area.|  
|[IOleObjectImpl::GetMiscStatus](../Topic/IOleObjectImpl::GetMiscStatus.md)|Retrieves the status of the control.|  
|[IOleObjectImpl::GetMoniker](../Topic/IOleObjectImpl::GetMoniker.md)|Retrieves the control's moniker. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::GetUserClassID](../Topic/IOleObjectImpl::GetUserClassID.md)|Retrieves the control's class identifier.|  
|[IOleObjectImpl::GetUserType](../Topic/IOleObjectImpl::GetUserType.md)|Retrieves the control's user-type name.|  
|[IOleObjectImpl::InitFromData](../Topic/IOleObjectImpl::InitFromData.md)|Initializes the control from selected data. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::IsUpToDate](../Topic/IOleObjectImpl::IsUpToDate.md)|Checks if the control is up to date. The ATL implementation returns `S_OK`.|  
|[IOleObjectImpl::OnPostVerbDiscardUndo](../Topic/IOleObjectImpl::OnPostVerbDiscardUndo.md)|Called by [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) after the undo state is discarded.|  
|[IOleObjectImpl::OnPostVerbHide](../Topic/IOleObjectImpl::OnPostVerbHide.md)|Called by [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) after the control is hidden.|  
|[IOleObjectImpl::OnPostVerbInPlaceActivate](../Topic/IOleObjectImpl::OnPostVerbInPlaceActivate.md)|Called by [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) after the control is activated in place.|  
|[IOleObjectImpl::OnPostVerbOpen](../Topic/IOleObjectImpl::OnPostVerbOpen.md)|Called by [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) after the control has been opened for editing in a separate window.|  
|[IOleObjectImpl::OnPostVerbShow](../Topic/IOleObjectImpl::OnPostVerbShow.md)|Called by [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) after the control has been made visible.|  
|[IOleObjectImpl::OnPostVerbUIActivate](../Topic/IOleObjectImpl::OnPostVerbUIActivate.md)|Called by [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) after the control's user interface has been activated.|  
|[IOleObjectImpl::OnPreVerbDiscardUndo](../Topic/IOleObjectImpl::OnPreVerbDiscardUndo.md)|Called by [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) before the undo state is discarded.|  
|[IOleObjectImpl::OnPreVerbHide](../Topic/IOleObjectImpl::OnPreVerbHide.md)|Called by [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) before the control is hidden.|  
|[IOleObjectImpl::OnPreVerbInPlaceActivate](../Topic/IOleObjectImpl::OnPreVerbInPlaceActivate.md)|Called by [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) before the control is activated in place.|  
|[IOleObjectImpl::OnPreVerbOpen](../Topic/IOleObjectImpl::OnPreVerbOpen.md)|Called by [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) before the control has been opened for editing in a separate window.|  
|[IOleObjectImpl::OnPreVerbShow](../Topic/IOleObjectImpl::OnPreVerbShow.md)|Called by [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) before the control has been made visible.|  
|[IOleObjectImpl::OnPreVerbUIActivate](../Topic/IOleObjectImpl::OnPreVerbUIActivate.md)|Called by [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) before the control's user interface has been activated.|  
|[IOleObjectImpl::SetClientSite](../Topic/IOleObjectImpl::SetClientSite.md)|Tells the control about its client site in the container.|  
|[IOleObjectImpl::SetColorScheme](../Topic/IOleObjectImpl::SetColorScheme.md)|Recommends a color scheme to the control's application, if any. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::SetExtent](../Topic/IOleObjectImpl::SetExtent.md)|Sets the extent of the control's display area.|  
|[IOleObjectImpl::SetHostNames](../Topic/IOleObjectImpl::SetHostNames.md)|Tells the control the names of the container application and container document.|  
|[IOleObjectImpl::SetMoniker](../Topic/IOleObjectImpl::SetMoniker.md)|Tells the control what its moniker is. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleObjectImpl::Unadvise](../Topic/IOleObjectImpl::Unadvise.md)|Deletes an advisory connection with the control.|  
|[IOleObjectImpl::Update](../Topic/IOleObjectImpl::Update.md)|Updates the control. The ATL implementation returns `S_OK`.|  
  
## Remarks  
 The [IOleObject](http://msdn.microsoft.com/library/windows/desktop/dd542709) interface is the principal interface through which a container communicates with a control. Class `IOleObjectImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../atl/active-template-library--atl--tutorial.md), [Creating an ATL Project](../atl/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IOleObject`  
  
 `IOleObjectImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ioleobjectimpl__advise"></a>  IOleObjectImpl::Advise  
 Establishes an advisory connection with the control.  
  
```
STDMETHOD(Advise)(
    IAdviseSink*  pAdvSink,
    DWORD*  pdwConnection);
```  
  
### Remarks  
 See [IOleObject::Advise](http://msdn.microsoft.com/library/windows/desktop/ms686573) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__close"></a>  IOleObjectImpl::Close  
 Changes the control state from running to loaded.  
  
```
STDMETHOD(Close)(DWORD dwSaveOption);
```  
  
### Remarks  
 Deactivates the control and destroys the control window if it exists. If the control class data member [CComControlBase::m_bRequiresSave](../Topic/CComControlBase::m_bRequiresSave.md) is **TRUE** and the `dwSaveOption` parameter is either `OLECLOSE_SAVEIFDIRTY` or `OLECLOSE_PROMPTSAVE`, the control properties are saved before closing.  
  
 The pointers held in the control class data members [CComControlBase::m_spInPlaceSite](../Topic/CComControlBase::m_spInPlaceSite.md) and [CComControlBase::m_spAdviseSink](../Topic/CComControlBase::m_spAdviseSink.md) are released, and the data members [CComControlBase::m_bNegotiatedWnd](../Topic/CComControlBase::m_bNegotiatedWnd.md), [CComControlBase::m_bWndless](../Topic/CComControlBase::m_bWndLess.md), and [CComControlBase::m_bInPlaceSiteEx](../Topic/CComControlBase::m_bInPlaceSiteEx.md) are set to **FALSE**.  
  
 See [IOleObject::Close](http://msdn.microsoft.com/library/windows/desktop/ms683922) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__doverb"></a>  IOleObjectImpl::DoVerb  
 Tells the control to perform one of its enumerated actions.  
  
```
STDMETHOD(DoVerb)(LONG iVerb,
    LPMSG /* pMsg */,
    IOleClientSite*  pActiveSite,
    LONG /* lindex */,
    HWND hwndParent,
    LPCRECT lprcPosRect);
```  
  
### Remarks  
 Depending on the value of `iVerb`, one of the ATL `DoVerb` helper functions is called as follows:  
  
|*iVerb* Value|DoVerb helper function called|  
|-------------------|-----------------------------------|  
|**OLEIVERB_DISCARDUNDOSTATE**|[DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md)|  
|`OLEIVERB_HIDE`|[DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md)|  
|**OLEIVERB_INPLACEACTIVATE**|[DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md)|  
|`OLEIVERB_OPEN`|[DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md)|  
|`OLEIVERB_PRIMARY`|[DoVerbPrimary](../Topic/IOleObjectImpl::DoVerbPrimary.md)|  
|**OLEIVERB_PROPERTIES**|[CComControlBase::DoVerbProperties](../Topic/CComControlBase::DoVerbProperties.md)|  
|`OLEIVERB_SHOW`|[DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md)|  
|`OLEIVERB_UIACTIVATE`|[DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md)|  
  
 See [IOleObject::DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
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
 Activates the control in place by calling [CComControlBase::InPlaceActivate](../Topic/CComControlBase::InPlaceActivate.md). Unless the control class's data member `m_bWindowOnly` is **TRUE**, `DoVerbInPlaceActivate` first attempts to activate the control as a windowless control (possible only if the container supports [IOleInPlaceSiteWindowless](http://msdn.microsoft.com/library/windows/desktop/ms682300)). If that fails, the function attempts to activate the control with extended features (possible only if the container supports [IOleInPlaceSiteEx](http://msdn.microsoft.com/library/windows/desktop/ms693461)). If that fails, the function attempts to activate the control with no extended features (possible only if the container supports [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586)). If activation succeeds, the function notifies the container the control has been activated.  
  
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
 See [IOleObject::EnumAdvise](http://msdn.microsoft.com/library/windows/desktop/ms682355) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__enumverbs"></a>  IOleObjectImpl::EnumVerbs  
 Supplies an enumeration of registered actions (verbs) for this control by calling **OleRegEnumVerbs**.  
  
```
STDMETHOD(EnumVerbs)(IEnumOLEVERB** ppEnumOleVerb);
```  
  
### Remarks  
 You can add verbs to your project's .rgs file. For example, see CIRCCTL.RGS in the [CIRC](../top/visual-c---samples.md) sample.  
  
 See [IOleObject::EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getclientsite"></a>  IOleObjectImpl::GetClientSite  
 Puts the pointer in the control class data member [CComControlBase::m_spClientSite](../Topic/CComControlBase::m_spClientSite.md) into *ppClientSite* and increments the reference count on the pointer.  
  
```
STDMETHOD(GetClientSite)(IOleClientSite** ppClientSite);
```  
  
### Remarks  
 See [IOleObject::GetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms692603) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getclipboarddata"></a>  IOleObjectImpl::GetClipboardData  
 Retrieves data from the Clipboard.  
  
```
STDMETHOD(GetClipboardData)(DWORD /* dwReserved */,
    IDataObject**  /* ppDataObject */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::GetClipboardData](http://msdn.microsoft.com/library/windows/desktop/ms682288) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getextent"></a>  IOleObjectImpl::GetExtent  
 Retrieves a running control's display size in HIMETRIC units (0.01 millimeter per unit).  
  
```
STDMETHOD(GetExtent)(DWORD dwDrawAspect,
    SIZEL*  psizel);
```  
  
### Remarks  
 The size is stored in the control class data member [CComControlBase::m_sizeExtent](../Topic/CComControlBase::m_sizeExtent.md).  
  
 See [IOleObject::GetExtent](http://msdn.microsoft.com/library/windows/desktop/ms692325) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getmiscstatus"></a>  IOleObjectImpl::GetMiscStatus  
 Returns a pointer to registered status information for the control by calling **OleRegGetMiscStatus**.  
  
```
STDMETHOD(GetMiscStatus)(DWORD dwAspect,
    DWORD*  pdwStatus);
```  
  
### Remarks  
 The status information includes behaviors supported by the control and presentation data. You can add status information to your project's .rgs file.  
  
 See [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getmoniker"></a>  IOleObjectImpl::GetMoniker  
 Retrieves the control's moniker.  
  
```
STDMETHOD(GetMoniker)(DWORD /* dwAssign */,
    DWORD /* dwWhichMoniker */,
    IMoniker**  /* ppmk */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::GetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms686576) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getuserclassid"></a>  IOleObjectImpl::GetUserClassID  
 Returns the control's class identifier.  
  
```
STDMETHOD(GetUserClassID)(CLSID* pClsid);
```  
  
### Remarks  
 See [IOleObject::GetUserClassID](http://msdn.microsoft.com/library/windows/desktop/ms682313) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__getusertype"></a>  IOleObjectImpl::GetUserType  
 Returns the control's user-type name by calling **OleRegGetUserType**.  
  
```
STDMETHOD(GetUserType)(DWORD dwFormOfType,
    LPOLESTR*  pszUserType);
```  
  
### Remarks  
 The user-type name is used for display in user-interfaces elements such as menus and dialog boxes. You can change the user-type name in your project's .rgs file.  
  
 See [IOleObject::GetUserType](http://msdn.microsoft.com/library/windows/desktop/ms688643) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__initfromdata"></a>  IOleObjectImpl::InitFromData  
 Initializes the control from selected data.  
  
```
STDMETHOD(InitFromData)(
    IDataObject*  /* pDataObject */,
    BOOL /* fCreation */,
    DWORD /* dwReserved */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::InitFromData](http://msdn.microsoft.com/library/windows/desktop/ms688510) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__isuptodate"></a>  IOleObjectImpl::IsUpToDate  
 Checks if the control is up to date.  
  
```
STDMETHOD(IsUpToDate)(void);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::IsUpToDate](http://msdn.microsoft.com/library/windows/desktop/ms686624) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__onpostverbdiscardundo"></a>  IOleObjectImpl::OnPostVerbDiscardUndo  
 Called by [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) after the undo state is discarded.  
  
```
HRESULT OnPostVerbDiscardUndo();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the undo state is discarded.  
  
##  <a name="ioleobjectimpl__onpostverbhide"></a>  IOleObjectImpl::OnPostVerbHide  
 Called by [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) after the control is hidden.  
  
```
HRESULT OnPostVerbHide();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control is hidden.  
  
##  <a name="ioleobjectimpl__onpostverbinplaceactivate"></a>  IOleObjectImpl::OnPostVerbInPlaceActivate  
 Called by [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) after the control is activated in place.  
  
```
HRESULT OnPostVerbInPlaceActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control is activated in place.  
  
##  <a name="ioleobjectimpl__onpostverbopen"></a>  IOleObjectImpl::OnPostVerbOpen  
 Called by [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) after the control has been opened for editing in a separate window.  
  
```
HRESULT OnPostVerbOpen();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control has been opened for editing in a separate window.  
  
##  <a name="ioleobjectimpl__onpostverbshow"></a>  IOleObjectImpl::OnPostVerbShow  
 Called by [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) after the control has been made visible.  
  
```
HRESULT OnPostVerbShow();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control has been made visible.  
  
##  <a name="ioleobjectimpl__onpostverbuiactivate"></a>  IOleObjectImpl::OnPostVerbUIActivate  
 Called by [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) after the control's user interface has been activated.  
  
```
HRESULT OnPostVerbUIActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 Override this method with code you want executed after the control's user interface has been activated.  
  
##  <a name="ioleobjectimpl__onpreverbdiscardundo"></a>  IOleObjectImpl::OnPreVerbDiscardUndo  
 Called by [DoVerbDiscardUndo](../Topic/IOleObjectImpl::DoVerbDiscardUndo.md) before the undo state is discarded.  
  
```
HRESULT OnPreVerbDiscardUndo();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the undo state from being discarded, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbhide"></a>  IOleObjectImpl::OnPreVerbHide  
 Called by [DoVerbHide](../Topic/IOleObjectImpl::DoVerbHide.md) before the control is hidden.  
  
```
HRESULT OnPreVerbHide();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being hidden, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbinplaceactivate"></a>  IOleObjectImpl::OnPreVerbInPlaceActivate  
 Called by [DoVerbInPlaceActivate](../Topic/IOleObjectImpl::DoVerbInPlaceActivate.md) before the control is activated in place.  
  
```
HRESULT OnPreVerbInPlaceActivate();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being activated in place, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbopen"></a>  IOleObjectImpl::OnPreVerbOpen  
 Called by [DoVerbOpen](../Topic/IOleObjectImpl::DoVerbOpen.md) before the control has been opened for editing in a separate window.  
  
```
HRESULT OnPreVerbOpen();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being opened for editing in a separate window, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbshow"></a>  IOleObjectImpl::OnPreVerbShow  
 Called by [DoVerbShow](../Topic/IOleObjectImpl::DoVerbShow.md) before the control has been made visible.  
  
```
HRESULT OnPreVerbShow();
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 To prevent the control from being made visible, override this method to return an error HRESULT.  
  
##  <a name="ioleobjectimpl__onpreverbuiactivate"></a>  IOleObjectImpl::OnPreVerbUIActivate  
 Called by [DoVerbUIActivate](../Topic/IOleObjectImpl::DoVerbUIActivate.md) before the control's user interface has been activated.  
  
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
  
 See [IOleObject::SetClientSite](http://msdn.microsoft.com/library/windows/desktop/ms684013) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setcolorscheme"></a>  IOleObjectImpl::SetColorScheme  
 Recommends a color scheme to the control's application, if any.  
  
```
STDMETHOD(SetColorScheme)(LOGPALETTE* /* pLogPal */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::SetColorScheme](http://msdn.microsoft.com/library/windows/desktop/ms683971) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setextent"></a>  IOleObjectImpl::SetExtent  
 Sets the extent of the control's display area.  
  
```
STDMETHOD(SetExtent)(DWORD dwDrawAspect,
    SIZEL*  psizel);
```  
  
### Remarks  
 Otherwise, `SetExtent` stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeExtent](../Topic/CComControlBase::m_sizeExtent.md). This value is in HIMETRIC units (0.01 millimeter per unit).  
  
 If the control class data member [CComControlBase::m_bResizeNatural](../Topic/CComControlBase::m_bResizeNatural.md) is **TRUE**, `SetExtent` also stores the value pointed to by `psizel` in the control class data member [CComControlBase::m_sizeNatural](../Topic/CComControlBase::m_sizeNatural.md).  
  
 If the control class data member [CComControlBase::m_bRecomposeOnResize](../Topic/CComControlBase::m_bRecomposeOnResize.md) is **TRUE**, `SetExtent` calls `SendOnDataChange` and `SendOnViewChange` to notify all advisory sinks registered with the advise holder that the control size has changed.  
  
 See [IOleObject::SetExtent](http://msdn.microsoft.com/library/windows/desktop/ms694330) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__sethostnames"></a>  IOleObjectImpl::SetHostNames  
 Tells the control the names of the container application and container document.  
  
```
STDMETHOD(SetHostNames)(LPCOLESTR /* szContainerApp */,  LPCOLESTR /* szContainerObj */);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::SetHostNames](http://msdn.microsoft.com/library/windows/desktop/ms680642) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__setmoniker"></a>  IOleObjectImpl::SetMoniker  
 Tells the control what its moniker is.  
  
```
STDMETHOD(SetMoniker)(DWORD /* dwWhichMoniker */,
    IMoniker**  /* pmk */);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleObject::SetMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679671) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__unadvise"></a>  IOleObjectImpl::Unadvise  
 Deletes the advisory connection stored in the control class's `m_spOleAdviseHolder` data member.  
  
```
STDMETHOD(Unadvise)(DWORD dwConnection);
```  
  
### Remarks  
 See [IOleObject::Unadvise](http://msdn.microsoft.com/library/windows/desktop/ms693749) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleobjectimpl__update"></a>  IOleObjectImpl::Update  
 Updates the control.  
  
```
STDMETHOD(Update)(void);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleObject::Update](http://msdn.microsoft.com/library/windows/desktop/ms679699) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [CComControl Class](../atl/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../atl/atl-class-overview.md)

