---
title: "COleControlSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleControlSite class"
ms.assetid: 43970644-5eab-434a-8ba6-56d144ff1e3f
caps.latest.revision: 24
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
# COleControlSite Class
Provides support for custom client-side control interfaces.  
  
## Syntax  
  
```  
class COleControlSite : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlSite::COleControlSite](#colecontrolsite__colecontrolsite)|Constructs a `COleControlSite` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlSite::BindDefaultProperty](#colecontrolsite__binddefaultproperty)|Binds the default property of the hosted control to a data source.|  
|[COleControlSite::BindProperty](#colecontrolsite__bindproperty)|Binds a property of the hosted control to a data source.|  
|[COleControlSite::CreateControl](#colecontrolsite__createcontrol)|Creates a hosted ActiveX control.|  
|[COleControlSite::DestroyControl](#colecontrolsite__destroycontrol)|Destroys the hosted control.|  
|[COleControlSite::DoVerb](#colecontrolsite__doverb)|Executes a specific verb of the hosted control.|  
|[COleControlSite::EnableDSC](#colecontrolsite__enabledsc)|Enables data sourcing for a control site.|  
|[COleControlSite::EnableWindow](#colecontrolsite__enablewindow)|Enables the control site.|  
|[COleControlSite::FreezeEvents](#colecontrolsite__freezeevents)|Specifies if the control site is accepting events.|  
|[COleControlSite::GetDefBtnCode](#colecontrolsite__getdefbtncode)|Retrieves the default button code for the hosted control.|  
|[COleControlSite::GetDlgCtrlID](#colecontrolsite__getdlgctrlid)|Retrieves the identifier of the control.|  
|[COleControlSite::GetEventIID](#colecontrolsite__geteventiid)|Retrieves the ID of an event interface for a hosted control.|  
|[COleControlSite::GetExStyle](#colecontrolsite__getexstyle)|Retrieves the extended styles of the control site.|  
|[COleControlSite::GetProperty](#colecontrolsite__getproperty)|Retrieves a specific property of the hosted control.|  
|[COleControlSite::GetStyle](#colecontrolsite__getstyle)|Retrieves the styles of the control site.|  
|[COleControlSite::GetWindowText](#colecontrolsite__getwindowtext)|Retrieves the text of the hosted control.|  
|[COleControlSite::InvokeHelper](#colecontrolsite__invokehelper)|Invoke a specific method of the hosted control.|  
|[COleControlSite::InvokeHelperV](#colecontrolsite__invokehelperv)|Invoke a specific method of the hosted control with a variable list of arguments.|  
|[COleControlSite::IsDefaultButton](#colecontrolsite__isdefaultbutton)|Determines if the control is the default button in the window.|  
|[COleControlSite::IsWindowEnabled](#colecontrolsite__iswindowenabled)|Checks the visible state of the control site.|  
|[COleControlSite::ModifyStyle](#colecontrolsite__modifystyle)|Modifies the current extended styles of the control site.|  
|[COleControlSite::ModifyStyleEx](#colecontrolsite__modifystyleex)|Modifies the current styles of the control site.|  
|[COleControlSite::MoveWindow](#colecontrolsite__movewindow)|Changes the position of the control site.|  
|[COleControlSite::QuickActivate](#colecontrolsite__quickactivate)|Quick activates the hosted control.|  
|[COleControlSite::SafeSetProperty](#colecontrolsite__safesetproperty)|Sets a property or method of the control without chance of throwing an exception.|  
|[COleControlSite::SetDefaultButton](#colecontrolsite__setdefaultbutton)|Sets the default button in the window.|  
|[COleControlSite::SetDlgCtrlID](#colecontrolsite__setdlgctrlid)|Retrieves the identifier of the control.|  
|[COleControlSite::SetFocus](#colecontrolsite__setfocus)|Sets the focus to the control site.|  
|[COleControlSite::SetProperty](#colecontrolsite__setproperty)|Sets a specific property of the hosted control.|  
|[COleControlSite::SetPropertyV](#colecontrolsite__setpropertyv)|Sets a specific property of the hosted control with a variable list of arguments.|  
|[COleControlSite::SetWindowPos](#colecontrolsite__setwindowpos)|Sets the position of the control site.|  
|[COleControlSite::SetWindowText](#colecontrolsite__setwindowtext)|Sets the text of the hosted control.|  
|[COleControlSite::ShowWindow](#colecontrolsite__showwindow)|Shows or hides the control site.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlSite::GetControlInfo](#colecontrolsite__getcontrolinfo)|Retrieves keyboard information and mnemonics for the hosted control.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlSite::m_bIsWindowless](#colecontrolsite__m_biswindowless)|Determines if the hosted control is a windowless control.|  
|[COleControlSite::m_ctlInfo](#colecontrolsite__m_ctlinfo)|Contains information on keyboard handling for the control.|  
|[COleControlSite::m_dwEventSink](#colecontrolsite__m_dweventsink)|The cookie of the control's connection point.|  
|[COleControlSite::m_dwMiscStatus](#colecontrolsite__m_dwmiscstatus)|The miscellaneous states for the hosted control.|  
|[COleControlSite::m_dwPropNotifySink](#colecontrolsite__m_dwpropnotifysink)|The `IPropertyNotifySink` cookie of the control.|  
|[COleControlSite::m_dwStyle](#colecontrolsite__m_dwstyle)|The styles of the hosted control.|  
|[COleControlSite::m_hWnd](#colecontrolsite__m_hwnd)|The handle of the control site.|  
|[COleControlSite::m_iidEvents](#colecontrolsite__m_iidevents)|The ID of the event interface for the hosted control.|  
|[COleControlSite::m_nID](#colecontrolsite__m_nid)|The ID of the hosted control.|  
|[COleControlSite::m_pActiveObject](#colecontrolsite__m_pactiveobject)|A pointer to the `IOleInPlaceActiveObject` object of the hosted control.|  
|[COleControlSite::m_pCtrlCont](#colecontrolsite__m_pctrlcont)|The container of the hosted control.|  
|[COleControlSite::m_pInPlaceObject](#colecontrolsite__m_pinplaceobject)|A pointer to the `IOleInPlaceObject` object of the hosted control.|  
|[COleControlSite::m_pObject](#colecontrolsite__m_pobject)|A pointer to the `IOleObjectInterface` interface of the control.|  
|[COleControlSite::m_pWindowlessObject](#colecontrolsite__m_pwindowlessobject)|A pointer to the `IOleInPlaceObjectWindowless` interface of the control.|  
|[COleControlSite::m_pWndCtrl](#colecontrolsite__m_pwndctrl)|A pointer to the window object for the hosted control.|  
|[COleControlSite::m_rect](#colecontrolsite__m_rect)|The dimensions of the control site.|  
  
## Remarks  
 This support is the primary means by which an embedded ActiveX control obtains information about the location and extent of its display site, its moniker, its user interface, its ambient properties, and other resources provided by its container. `COleControlSite` fully implements the [IOleControlSite](http://msdn.microsoft.com/library/windows/desktop/ms688502), [IOleInPlaceSite](http://msdn.microsoft.com/library/windows/desktop/ms686586), [IOleClientSite](http://msdn.microsoft.com/library/windows/desktop/ms693706), [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638), **IBoundObjectSite**, **INotifyDBEvents**, [IRowSetNotify](../../data/oledb/irowsetnotifyimpl-class.md)       interfaces. In addition, the IDispatch interface (providing support for ambient properties and event sinks) is also implemented.  
  
 To create an ActiveX control site using `COleControlSite`, derive a class from `COleControlSite`. In your `CWnd`-derived class for the container (for instance, your dialog box) override the **CWnd::CreateControlSite** function.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlSite`  
  
## Requirements  
 **Header:** afxocc.h  
  
##  <a name="colecontrolsite__binddefaultproperty"></a>  COleControlSite::BindDefaultProperty  
 Binds the calling object's default simple bound property, as marked in the type library, to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.  
  
```  
virtual void BindDefaultProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    LPCTSTR szFieldName,  
    CWnd* pDSCWnd);
```  
  
### Parameters  
 `dwDispID`  
 Specifies the **DISPID** of a property on a data-bound control that is to be bound to a data-source control.  
  
 `vtProp`  
 Specifies the type of the property to be bound — for example, `VT_BSTR`, **VT_VARIANT**, and so on.  
  
 `szFieldName`  
 Specifies the name of the column, in the cursor provided by the data-source control, to which the property will be bound.  
  
 `pDSCWnd`  
 A pointer to the `CWnd`-derived object that hosts the data-source control to which the property will be bound.  
  
### Remarks  
 The `CWnd` object on which you call this function must be a data-bound control.  
  
##  <a name="colecontrolsite__bindproperty"></a>  COleControlSite::BindProperty  
 Binds the calling object's simple bound property, as marked in the type library, to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.  
  
```  
virtual void BindProperty(
    DISPID dwDispId,  
    CWnd* pWndDSC);
```  
  
### Parameters  
 *dwDispId*  
 Specifies the **DISPID** of a property on a data-bound control that is to be bound to a data-source control.  
  
 `pWndDSC`  
 A pointer to the `CWnd`-derived object that hosts the data-source control to which the property will be bound.  
  
### Remarks  
 The `CWnd` object on which you call this function must be a data-bound control.  
  
##  <a name="colecontrolsite__colecontrolsite"></a>  COleControlSite::COleControlSite  
 Constructs a new `COleControlSite` object.  
  
```  
explicit COleControlSite(COleControlContainer* pCtrlCont);
```  
  
### Parameters  
 `pCtrlCont`  
 A pointer to the control's container (which represents the window that hosts the AtiveX control).  
  
### Remarks  
 This function is called by the [COccManager::CreateContainer](../../mfc/reference/coccmanager-class.md#coccmanager__createcontainer) function. For more information on customizing the creation of containers, see [COccManager::CreateSite](../../mfc/reference/coccmanager-class.md#coccmanager__createsite).  
  
##  <a name="colecontrolsite__createcontrol"></a>  COleControlSite::CreateControl  
 Creates an ActiveX control, hosted by the `COleControlSite` object.  
  
```  
virtual HRESULT CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    UINT nID,  
    CFile* pPersist = NULL,  
    BOOL bStorage = FALSE,  
    BSTR bstrLicKey = NULL);

 
virtual HRESULT CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const POINT* ppt,  
    const SIZE* psize,  
    UINT nID,  
    CFile* pPersist = NULL,  
    BOOL bStorage = FALSE,  
    BSTR bstrLicKey = NULL);
```  
  
### Parameters  
 `pWndCtrl`  
 A pointer to the window object representing the control.  
  
 `clsid`  
 The unique class ID of the control.  
  
 `lpszWindowName`  
 A pointer to the text to be displayed in the control. Sets the value of the winodw's Caption or Text property (if any).  
  
 `dwStyle`  
 Windows styles. The available styles are listed under the **Remarks** section.  
  
 `rect`  
 Specifies the control's size and position. It can be either a `CRect` object or a `RECT` structure.  
  
 `nID`  
 Specifies the control's child window ID.  
  
 `pPersist`  
 A pointer to a `CFile` containing the persistent state for the control. The default value is **NULL**, indicating that the control initializes itself without restoring its state from any persistent storage. If not **NULL**, it should be a pointer to a `CFile`-derived object that contains the control's persistent data, in the form of either a stream or a storage. This data could have been saved in a previous activation of the client. The `CFile` can contain other data, but must have its read-write pointer set to the first byte of persistent data at the time of the call to `CreateControl`.  
  
 `bStorage`  
 Indicates whether the data in `pPersist` should be interpreted as `IStorage` or `IStream` data. If the data in `pPersist` is a storage, `bStorage` should be **TRUE**. If the data in `pPersist` is a stream, `bStorage` should be **FALSE**. The default value is **FALSE**.  
  
 `bstrLicKey`  
 Optional license key data. This data is needed only for creating controls that require a run-time license key. If the control supports licensing, you must provide a license key for the creation of the control to succeed. The default value is **NULL**.  
  
 `ppt`  
 A pointer to a **POINT** structure that contains the upper-left corner of the control. The size of the control is determined by the value of *psize*. The `ppt` and *psize* values are an optional method of specifying the size and position opf the control.  
  
 *psize*  
 A pointer to a **SIZE** structure that contains the size of the control. The upper-left corner is determined by the value of `ppt`. The `ppt` and *psize* values are an optional method of specifying the size and position opf the control.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 Only a subset of the Windows `dwStyle` flags are supported by `CreateControl`:  
  
- **WS_VISIBLE** Creates a window that is initially visible. Required if you want the control to be visible immediately, like ordinary windows.  
  
- **WS_DISABLED** Creates a window that is initially disabled. A disabled window cannot receive input from the user. Can be set if the control has an Enabled property.  
  
- `WS_BORDER` Creates a window with a thin-line border. Can be set if control has a BorderStyle property.  
  
- **WS_GROUP** Specifies the first control of a group of controls. The user can change the keyboard focus from one control in the group to the next by using the direction keys. All controls defined with the **WS_GROUP** style after the first control belong to the same group. The next control with the **WS_GROUP** style ends the group and starts the next group.  
  
- **WS_TABSTOP** Specifies a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control of the **WS_TABSTOP** style.  
  
 Use the second overload to create default-sized controls.  
  
##  <a name="colecontrolsite__destroycontrol"></a>  COleControlSite::DestroyControl  
 Destroys the `COleControlSite` object.  
  
```  
virtual BOOL DestroyControl();
```  
  
### Return Value  
 Nonzero if successful, otherwise 0.  
  
### Remarks  
 Once completed, the object is freed from memory and any pointers to the object are no longer valid.  
  
##  <a name="colecontrolsite__doverb"></a>  COleControlSite::DoVerb  
 Executes the specified verb.  
  
```  
virtual HRESULT DoVerb(
    LONG nVerb,  
    LPMSG lpMsg = NULL);
```  
  
### Parameters  
 `nVerb`  
 Specifies the verb to execute. It can include one of the following:  
  
|Value|Meaning|Symbol|  
|-----------|-------------|------------|  
|0|Primary verb|`OLEIVERB_PRIMARY`|  
|-1|Secondary verb|(None)|  
|1|Displays the object for editing.|`OLEIVERB_SHOW`|  
|-2|Edits the item in a separate window.|`OLEIVERB_OPEN`|  
|-3|Hides the object.|`OLEIVERB_HIDE`|  
|-4|Activates a control in-place.|`OLEIVERB_UIACTIVATE`|  
|-5|Activates a control in-place, without additional user interface elements.|**OLEIVERB_INPLACEACTIVATE**|  
|-7|Display the control's properties.|**OLEIVERB_PROPERTIES**|  
  
 `lpMsg`  
 Pointer to the message that caused the item to be activated.  
  
### Return Value  
 A standard `HRESULT` value.  
  
### Remarks  
 This function directly calls through the control's `IOleObject` interface to execute the specified verb. If an exception is thrown as a result of this function call, an `HRESULT` error code is returned.  
  
 For more information, see [IOleObject::DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="colecontrolsite__enabledsc"></a>  COleControlSite::EnableDSC  
 Enables data sourcing for the control site.  
  
```  
virtual void EnableDSC();
```  
  
### Remarks  
 Called by the framework to enable and initialize data sourcing for the control site. Override this function to provide customized behavior.  
  
##  <a name="colecontrolsite__enablewindow"></a>  COleControlSite::EnableWindow  
 Enables or disables mouse and keyboard input to the control site.  
  
```  
virtual BOOL EnableWindow(BOOL bEnable);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether to enable or disable the window: **TRUE** if window input is to be enabled, otherwise **FALSE**.  
  
### Return Value  
 Nonzero if the window was previously disabled, otherwise 0.  
  
##  <a name="colecontrolsite__freezeevents"></a>  COleControlSite::FreezeEvents  
 Specifies whether the control site will handle or ignore events fired from a control.  
  
```  
void FreezeEvents(BOOL bFreeze);
```  
  
### Parameters  
 `bFreeze`  
 Specifies whether the control site wishes to stop accepting events. Nonzero if the control is not accepting events; otherwise zero.  
  
### Remarks  
 If `bFreeze` is **TRUE**, the control site requests the control to stop fring events. If `bFreeze` is **FALSE**, the control site requests the control to continue firing events.  
  
> [!NOTE]
>  The control is not required to stop firing events if requested by the control site. It can continue firing but all subsequent events will be ignored by the control site.  
  
##  <a name="colecontrolsite__getcontrolinfo"></a>  COleControlSite::GetControlInfo  
 Retrieves information about a control's keyboard mnemonics and keyboard behavior.  
  
```  
void GetControlInfo();
```  
  
### Remarks  
 The information is stored in [COleControlSite::m_ctlInfo](#colecontrolsite__m_ctlinfo).  
  
##  <a name="colecontrolsite__getdefbtncode"></a>  COleControlSite::GetDefBtnCode  
 Determines if the control is a default push button.  
  
```  
DWORD GetDefBtnCode();
```  
  
### Return Value  
 Can be one of the following values:  
  
- **DLGC_DEFPUSHBUTTON** Control is the default button in the dialog.  
  
- **DLGC_UNDEFPUSHBUTTON** Control is not the default button in the dialog.  
  
- **0** Control is not a button.  
  
##  <a name="colecontrolsite__getdlgctrlid"></a>  COleControlSite::GetDlgCtrlID  
 Retrieves the identifier of the control.  
  
```  
virtual int GetDlgCtrlID() const;

 
```  
  
### Return Value  
 The dialog item identifier of the control.  
  
##  <a name="colecontrolsite__geteventiid"></a>  COleControlSite::GetEventIID  
 Retrieves a pointer to the control's default event interface.  
  
```  
BOOL GetEventIID(IID* piid);
```  
  
### Parameters  
 `piid`  
 A pointer to an interface ID.  
  
### Return Value  
 Nonzero if successful, otherwise 0. If successful, `piid` contains the interface ID for the control's default event interface.  
  
##  <a name="colecontrolsite__getexstyle"></a>  COleControlSite::GetExStyle  
 Retrieves the window's extended styles.  
  
```  
virtual DWORD GetExStyle() const;

 
```  
  
### Return Value  
 The control window's extended styles.  
  
### Remarks  
 To retrieve the regular styles, call [COleControlSite::GetStyle](#colecontrolsite__getstyle).  
  
##  <a name="colecontrolsite__getproperty"></a>  COleControlSite::GetProperty  
 Gets the control property specified by `dwDispID`.  
  
```  
virtual void GetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    void* pvProp) const;

 
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property, found on the control's default `IDispatch` interface, to be retrieved.  
  
 `vtProp`  
 Specifies the type of the property to be retrieved. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 `pvProp`  
 Address of the variable that will receive the property value. It must match the type specified by `vtProp`.  
  
### Remarks  
 The value is returned through `pvProp`.  
  
##  <a name="colecontrolsite__getstyle"></a>  COleControlSite::GetStyle  
 Retrieves the styles of the control site.  
  
```  
virtual DWORD GetStyle() const;

 
```  
  
### Return Value  
 The window's styles.  
  
### Remarks  
 For a list of possible values, see [Windows Styles](../../mfc/reference/window-styles.md). To retrieve the extended styles of the control site, call [COleControlSite::GetExStyle](#colecontrolsite__getexstyle).  
  
##  <a name="colecontrolsite__getwindowtext"></a>  COleControlSite::GetWindowText  
 Retrieves the current text of the control.  
  
```  
virtual void GetWindowText(CString& str) const;

 
```  
  
### Parameters  
 `str`  
 A reference to a `CString` object that contains the current text of the control.  
  
### Remarks  
 If the control supports the Caption stock property, this value is returned. If the Caption stock property is not supported, the value for the Text property is returned.  
  
##  <a name="colecontrolsite__invokehelper"></a>  COleControlSite::InvokeHelper  
 Invokes the method or property specified by `dwDispID`, in the context specified by `wFlags`.  
  
```  
virtual void AFX_CDECL InvokeHelper(
    DISPID dwDispID,  
    WORD wFlags,  
    VARTYPE vtRet,  
    void* pvRet,  
    const BYTE* pbParamInfo, ...);
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property or method, found on the control's `IDispatch` interface, to be invoked.  
  
 `wFlags`  
 Flags describing the context of the call to IDispatch::Invoke. For possible `wFlags` values, see `IDispatch::Invoke` in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `vtRet`  
 Specifies the type of the return value. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 `pvRet`  
 Address of the variable that will receive the property value or return value. It must match the type specified by `vtRet`.  
  
 `pbParamInfo`  
 Pointer to a null-terminated string of bytes specifying the types of the parameters following `pbParamInfo`. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 *...*  
 Variable list of parameters, of types specified in `pbParamInfo`.  
  
### Remarks  
 The `pbParamInfo` parameter specifies the types of the parameters passed to the method or property. The variable list of arguments is represented by ... in the syntax declaration.  
  
 This function converts the parameters to **VARIANTARG** values, then invokes the **IDispatch::Invoke** method on the control. If the call to **IDispatch::Invoke** fails, this function will throw an exception. If the status code returned by **IDispatch::Invoke** is `DISP_E_EXCEPTION`, this function throws a **COleDispatchException** object, otherwise it throws a `COleException`.  
  
##  <a name="colecontrolsite__invokehelperv"></a>  COleControlSite::InvokeHelperV  
 Invokes the method or property specified by `dwDispID`, in the context specified by `wFlags`.  
  
```  
virtual void InvokeHelperV(
    DISPID dwDispID,  
    WORD wFlags,  
    VARTYPE vtRet,  
    void* pvRet,  
    const BYTE* pbParamInfo,  
    va_list argList);
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property or method, found on the control's `IDispatch` interface, to be invoked.  
  
 `wFlags`  
 Flags describing the context of the call to IDispatch::Invoke.  
  
 `vtRet`  
 Specifies the type of the return value. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 `pvRet`  
 Address of the variable that will receive the property value or return value. It must match the type specified by `vtRet`.  
  
 `pbParamInfo`  
 Pointer to a null-terminated string of bytes specifying the types of the parameters following `pbParamInfo`. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 `argList`  
 Pointer to a variable argument list.  
  
### Remarks  
 The `pbParamInfo` parameter specifies the types of the parameters passed to the method or property. Extra parameters for the method or property being invoked can be passed using the *va_list* parameter.  
  
 Typically, this function is called by `COleControlSite::InvokeHelper`.  
  
##  <a name="colecontrolsite__isdefaultbutton"></a>  COleControlSite::IsDefaultButton  
 Determines if the control is the default button.  
  
```  
BOOL IsDefaultButton();
```  
  
### Return Value  
 Nonzero if the control is the default button on the window, otherwise zero.  
  
##  <a name="colecontrolsite__iswindowenabled"></a>  COleControlSite::IsWindowEnabled  
 Determines if the control site is enabled.  
  
```  
virtual BOOL IsWindowEnabled() const;

 
```  
  
### Return Value  
 Nonzero if the control is enabled, otherwise zero.  
  
### Remarks  
 The value is retrieved from the control's Enabled stock property.  
  
##  <a name="colecontrolsite__m_biswindowless"></a>  COleControlSite::m_bIsWindowless  
 Determines if the object is a windowless control.  
  
```  
BOOL m_bIsWindowless;  
```  
  
### Remarks  
 Nonzero if the control has no window, otherwise zero.  
  
##  <a name="colecontrolsite__m_ctlinfo"></a>  COleControlSite::m_ctlInfo  
 Information on how keyboard input is handled by the control.  
  
```  
CONTROLINFO m_ctlInfo;  
```  
  
### Remarks  
 This information is stored in a [CONTROLINFO](http://msdn.microsoft.com/library/windows/desktop/ms680734) structure.  
  
##  <a name="colecontrolsite__m_dweventsink"></a>  COleControlSite::m_dwEventSink  
 Contains the connection point's cookie from the control's event sink.  
  
```  
DWORD m_dwEventSink;  
```  
  
##  <a name="colecontrolsite__m_dwmiscstatus"></a>  COleControlSite::m_dwMiscStatus  
 Contains miscellaneous information about the control.  
  
```  
DWORD m_dwMiscStatus;  
```  
  
### Remarks  
 For more information, see [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497)in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="colecontrolsite__m_dwpropnotifysink"></a>  COleControlSite::m_dwPropNotifySink  
 Contains the [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) cookie.  
  
```  
DWORD m_dwPropNotifySink;  
```  
  
##  <a name="colecontrolsite__m_dwstyle"></a>  COleControlSite::m_dwStyle  
 Contains the Window styles of the control.  
  
```  
DWORD m_dwStyle;  
```  
  
##  <a name="colecontrolsite__m_hwnd"></a>  COleControlSite::m_hWnd  
 Contains the `HWND` of the control, or **NULL** if the control is windowless.  
  
```  
HWND m_hWnd;  
```  
  
##  <a name="colecontrolsite__m_iidevents"></a>  COleControlSite::m_iidEvents  
 Contains the interface ID of the control's default event sink interface.  
  
```  
IID m_iidEvents;  
```  
  
##  <a name="colecontrolsite__m_nid"></a>  COleControlSite::m_nID  
 Contains the control's dialog item ID.  
  
```  
UINT m_nID;  
```  
  
##  <a name="colecontrolsite__m_pactiveobject"></a>  COleControlSite::m_pActiveObject  
 Contains the [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) interface of the control.  
  
```  
LPOLEINPLACEACTIVEOBJECT m_pActiveObject;  
```  
  
##  <a name="colecontrolsite__m_pctrlcont"></a>  COleControlSite::m_pCtrlCont  
 Contains the control's container (representing the form).  
  
```  
COleControlContainer* m_pCtrlCont;  
```  
  
##  <a name="colecontrolsite__m_pinplaceobject"></a>  COleControlSite::m_pInPlaceObject  
 Contains the `IOleInPlaceObject` [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) interface of the control.  
  
```  
LPOLEINPLACEOBJECT m_pInPlaceObject;  
```  
  
##  <a name="colecontrolsite__m_pobject"></a>  COleControlSite::m_pObject  
 Contains the **IOleObjectInterface** interface of the control.  
  
```  
LPOLEOBJECT m_pObject;  
```  
  
##  <a name="colecontrolsite__m_pwindowlessobject"></a>  COleControlSite::m_pWindowlessObject  
 Contains the `IOleInPlaceObjectWindowless`[IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) interface of the control.  
  
```  
IOleInPlaceObjectWindowless* m_pWindowlessObject;  
```  
  
##  <a name="colecontrolsite__m_pwndctrl"></a>  COleControlSite::m_pWndCtrl  
 Contains a pointer to the `CWnd` object that represents the control itself.  
  
```  
CWnd* m_pWndCtrl;  
```  
  
##  <a name="colecontrolsite__m_rect"></a>  COleControlSite::m_rect  
 Contains the bounds of the control, relative to the container's window.  
  
```  
CRect m_rect;  
```  
  
##  <a name="colecontrolsite__modifystyle"></a>  COleControlSite::ModifyStyle  
 Modifies the styles of the control.  
  
```  
virtual BOOL ModifyStyle(
    DWORD dwRemove,  
    DWORD dwAdd,  
    UINT nFlags);
```  
  
### Parameters  
 `dwRemove`  
 The styles to be removed from the current window styles.  
  
 `dwAdd`  
 The styles to be added from the current window styles.  
  
 `nFlags`  
 Window positioning flags. For a list of possible values, see the [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if the styles are changed, otherwise zero.  
  
### Remarks  
 The control's stock Enabled property will be modified to match the setting for **WS_DISABLED**. The control's stock Border Style property will be modified to match the requested setting for `WS_BORDER`. All other styles are applied directly to the control's window handle, if one is present.  
  
 Modifies the window styles of the control. Styles to be added or removed can be combined by using the bitwise OR ( &#124; ) operator. See the [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for information about the available window styles.  
  
 If `nFlags` is nonzero, `ModifyStyle` calls the Win32 function `SetWindowPos`, and redraws the window by combining `nFlags` with the following four flags:  
  
- `SWP_NOSIZE` Retains the current size.  
  
- `SWP_NOMOVE` Retains the current position.  
  
- `SWP_NOZORDER` Retains the current Z order.  
  
- `SWP_NOACTIVATE` Does not activate the window.  
  
 To modify a window's extended styles, call [ModifyStyleEx](#colecontrolsite__modifystyleex).  
  
##  <a name="colecontrolsite__modifystyleex"></a>  COleControlSite::ModifyStyleEx  
 Modifies the extended styles of the control.  
  
```  
virtual BOOL ModifyStyleEx(
    DWORD dwRemove,  
    DWORD dwAdd,  
    UINT nFlags);
```  
  
### Parameters  
 `dwRemove`  
 The extended styles to be removed from the current window styles.  
  
 `dwAdd`  
 The extended styles to be added from the current window styles.  
  
 `nFlags`  
 Window positioning flags. For a list of possible values, see the [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if the styles are changed, otherwise zero.  
  
### Remarks  
 The control's stock Appearance property will be modified to match the setting for **WS_EX_CLIENTEDGE**. All other extended window styles are applied directly to the control's window handle, if one is present.  
  
 Modifies the window extended styles of the control site object. Styles to be added or removed can be combined by using the bitwise OR ( &#124; ) operator. See the [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) function in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for information about the available window styles.  
  
 If `nFlags` is nonzero, `ModifyStyleEx` calls the Win32 function `SetWindowPos`, and redraws the window by combining `nFlags` with the following four flags:  
  
- `SWP_NOSIZE` Retains the current size.  
  
- `SWP_NOMOVE` Retains the current position.  
  
- `SWP_NOZORDER` Retains the current Z order.  
  
- `SWP_NOACTIVATE` Does not activate the window.  
  
 To modify a window's extended styles, call [ModifyStyle](#colecontrolsite__modifystyle).  
  
##  <a name="colecontrolsite__movewindow"></a>  COleControlSite::MoveWindow  
 Changes the position of the control.  
  
```  
virtual void MoveWindow(
    int x,  
    int y,  
    int nWidth,  
    int nHeight);
```  
  
### Parameters  
 *x*  
 The new position of the left side of the window.  
  
 *y*  
 The new position of the top of the window.  
  
 `nWidth`  
 The new width of the window  
  
 `nHeight`  
 The new height of the window.  
  
##  <a name="colecontrolsite__quickactivate"></a>  COleControlSite::QuickActivate  
 Quick activates the contained control.  
  
```  
virtual BOOL QuickActivate();
```  
  
### Return Value  
 Nonzero if the control site was activated, otherwise zero.  
  
### Remarks  
 This function should be called only if the user is overriding the creation process of the control.  
  
 The `IPersist*::Load` and `IPersist*::InitNew` methods should be called after quick activation occurs. The control should establish its connections to the container's sinks during quick activation. However, these connections are not live until `IPersist*::Load` or `IPersist*::InitNew` has been called.  
  
##  <a name="colecontrolsite__safesetproperty"></a>  COleControlSite::SafeSetProperty  
 Sets the control property specified by `dwDispID`.  
  
```  
virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property or method, found on the control's `IDispatch` interface, to be set.  
  
 `vtProp`  
 Specifies the type of property to be set. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 *...*  
 A single parameter of the type specified by `vtProp`.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
  
> [!NOTE]
>  Unlike `SetProperty` and `SetPropertyV`, if an error is encountered (such as trying to set a nonexistent property), no exception is thrown.  
  
##  <a name="colecontrolsite__setdefaultbutton"></a>  COleControlSite::SetDefaultButton  
 Sets the control as the default button.  
  
```  
void SetDefaultButton(BOOL bDefault);
```  
  
### Parameters  
 `bDefault`  
 Nonzero if the control should become the default button; otherwise zero.  
  
### Remarks  
  
> [!NOTE]
>  The control must have the **OLEMISC_ACTSLIKEBUTTON** status bit set.  
  
##  <a name="colecontrolsite__setdlgctrlid"></a>  COleControlSite::SetDlgCtrlID  
 Changes the value of the control's dialog item identifier.  
  
```  
virtual int SetDlgCtrlID(int nID);
```  
  
### Parameters  
 `nID`  
 The new identifier value.  
  
### Return Value  
 If successful, the previous dialog item identifier of the window; otherwise 0.  
  
### Remarks  
  
##  <a name="colecontrolsite__setfocus"></a>  COleControlSite::SetFocus  
 Sets focus to the control.  
  
```  
virtual CWnd* SetFocus();

 
virtual CWnd* SetFocus(LPMSG lpmsg);
```  
  
### Parameters  
 *lpmsg*  
 A pointer to a [MSG structure](../../mfc/reference/msg-structure1.md). This structure contains the Windows message triggering the `SetFocus` request for the control contained in the current control site.  
  
### Return Value  
 A pointer to the window that previously had focus.  
  
##  <a name="colecontrolsite__setproperty"></a>  COleControlSite::SetProperty  
 Sets the control property specified by `dwDispID`.  
  
```  
virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,  
    VARTYPE vtProp, ...);
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property or method, found on the control's `IDispatch` interface, to be set.  
  
 `vtProp`  
 Specifies the type of property to be set. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 *...*  
 A single parameter of the type specified by `vtProp`.  
  
### Remarks  
 If `SetProperty` encounters an error, an exception is thrown.  
  
 The type of exception is determined by the return value of the attempt to set the property or method. If the return value is `DISP_E_EXCEPTION`, a **COleDispatchExcpetion** is thrown; otherwise a `COleException`.  
  
##  <a name="colecontrolsite__setpropertyv"></a>  COleControlSite::SetPropertyV  
 Sets the control property specified by `dwDispID`.  
  
```  
virtual void SetPropertyV(
    DISPID dwDispID,  
    VARTYPE vtProp,  
    va_list argList);
```  
  
### Parameters  
 `dwDispID`  
 Identifies the dispatch ID of the property or method, found on the control's `IDispatch` interface, to be set.  
  
 `vtProp`  
 Specifies the type of property to be set. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__invokehelper).  
  
 `argList`  
 Pointer to the list of arguments.  
  
### Remarks  
 Extra parameters for the method or property being invoked can be passeed using the *arg_list* parameter. If `SetProperty` encounters an error, an exception is thrown.  
  
 The type of exception is determined by the return value of the attempt to set the property or method. If the return value is `DISP_E_EXCEPTION`, a **COleDispatchExcpetion** is thrown; otherwise a `COleException`.  
  
##  <a name="colecontrolsite__setwindowpos"></a>  COleControlSite::SetWindowPos  
 Sets the size, position, and Z order of the control site.  
  
```  
virtual BOOL SetWindowPos(
    const CWnd* pWndInsertAfter,  
    int x,  
    int y,  
    int cx,  
    int cy,  
    UINT nFlags);
```  
  
### Parameters  
 `pWndInsertAfter`  
 A pointer to the window.  
  
 *x*  
 The new position of the left side of the window.  
  
 *y*  
 The new position of the top of the window.  
  
 `cx`  
 The new width of the window  
  
 `cy`  
 The new height of the window.  
  
 `nFlags`  
 Specifies the window sizing and positioning flags. For possible values, see the Remarks section for [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 Nonzero if successful, otherwise zero.  
  
##  <a name="colecontrolsite__setwindowtext"></a>  COleControlSite::SetWindowText  
 Sets the text for the control site.  
  
```  
virtual void SetWindowText(LPCTSTR lpszString);
```  
  
### Parameters  
 `lpszString`  
 Pointer to a null-terminated string to be used as the new title or control text.  
  
### Remarks  
 This function first attempts to set the Caption stock property. If the Caption stock property is not supported, the Text property is set instead.  
  
##  <a name="colecontrolsite__showwindow"></a>  COleControlSite::ShowWindow  
 Sets the window's show state.  
  
```  
virtual BOOL ShowWindow(int nCmdShow);
```  
  
### Parameters  
 `nCmdShow`  
 Specifies how the control site is to be shown. It must be one of the following values:  
  
- **SW_HIDE** Hides this window and passes activation to another window.  
  
- **SW_MINIMIZE** Minimizes the window and activates the top-level window in the system's list.  
  
- **SW_RESTORE** Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.  
  
- **SW_SHOW** Activates the window and displays it in its current size and position.  
  
- **SW_SHOWMAXIMIZED** Activates the window and displays it as a maximized window.  
  
- **SW_SHOWMINIMIZED** Activates the window and displays it as an icon.  
  
- **SW_SHOWMINNOACTIVE** Displays the window as an icon. The window that is currently active remains active.  
  
- **SW_SHOWNA** Displays the window in its current state. The window that is currently active remains active.  
  
- **SW_SHOWNOACTIVATE** Displays the window in its most recent size and position. The window that is currently active remains active.  
  
- **SW_SHOWNORMAL** Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.  
  
### Return Value  
 Nonzero if the window was previously visible; 0 if the window was previously hidden.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleControlContainer Class](../../mfc/reference/colecontrolcontainer-class.md)
