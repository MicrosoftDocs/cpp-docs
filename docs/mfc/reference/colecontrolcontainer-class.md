---
title: "COleControlContainer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlContainer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "custom controls [MFC], sites"
  - "COleControlContainer class"
  - "ActiveX control containers [C++], control site"
ms.assetid: f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8
caps.latest.revision: 21
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
# COleControlContainer Class
Acts as a control container for ActiveX controls.  
  
## Syntax  
  
```  
class COleControlContainer : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlContainer::COleControlContainer](#colecontrolcontainer__colecontrolcontainer)|Constructs a `COleControlContainer` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlContainer::AttachControlSite](#colecontrolcontainer__attachcontrolsite)|Creates a control site, hosted by the container.|  
|[COleControlContainer::BroadcastAmbientPropertyChange](#colecontrolcontainer__broadcastambientpropertychange)|Informs all hosted controls that an ambient property has changed.|  
|[COleControlContainer::CheckDlgButton](#colecontrolcontainer__checkdlgbutton)|Modifies the specified button control.|  
|[COleControlContainer::CheckRadioButton](#colecontrolcontainer__checkradiobutton)|Selects the specified radio button of a group.|  
|[COleControlContainer::CreateControl](#colecontrolcontainer__createcontrol)|Creates a hosted ActiveX control.|  
|[COleControlContainer::CreateOleFont](#colecontrolcontainer__createolefont)|Creates an OLE font.|  
|[COleControlContainer::FindItem](#colecontrolcontainer__finditem)|Returns the custom site of the specified control.|  
|[COleControlContainer::FreezeAllEvents](#colecontrolcontainer__freezeallevents)|Determines if the control site is accepting events.|  
|[COleControlContainer::GetAmbientProp](#colecontrolcontainer__getambientprop)|Retrieves the specified ambient property.|  
|[COleControlContainer::GetDlgItem](#colecontrolcontainer__getdlgitem)|Retrieves the specified dialog control.|  
|[COleControlContainer::GetDlgItemInt](#colecontrolcontainer__getdlgitemint)|Retrieves the value of the specified dialog control.|  
|[COleControlContainer::GetDlgItemText](#colecontrolcontainer__getdlgitemtext)|Retrieves the caption of the specified dialog control.|  
|[COleControlContainer::HandleSetFocus](#colecontrolcontainer__handlesetfocus)|Determines if the container handles `WM_SETFOCUS` messages.|  
|[COleControlContainer::HandleWindowlessMessage](#colecontrolcontainer__handlewindowlessmessage)|Handles messages sent to a windowless control.|  
|[COleControlContainer::IsDlgButtonChecked](#colecontrolcontainer__isdlgbuttonchecked)|Determines the state of the specified button.|  
|[COleControlContainer::OnPaint](#colecontrolcontainer__onpaint)|Called to repaint a portion of the container.|  
|[COleControlContainer::OnUIActivate](#colecontrolcontainer__onuiactivate)|Called when a control is about to be in-place activated.|  
|[COleControlContainer::OnUIDeactivate](#colecontrolcontainer__onuideactivate)|Called when a control is about to be deactivated.|  
|[COleControlContainer::ScrollChildren](#colecontrolcontainer__scrollchildren)|Called by the framework when scroll messages are received from a child window.|  
|[COleControlContainer::SendDlgItemMessage](#colecontrolcontainer__senddlgitemmessage)|Sends a message to the specified control.|  
|[COleControlContainer::SetDlgItemInt](#colecontrolcontainer__setdlgitemint)|Sets the value of the specified control.|  
|[COleControlContainer::SetDlgItemText](#colecontrolcontainer__setdlgitemtext)|Sets the text of the specified control.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleControlContainer::m_crBack](#colecontrolcontainer__m_crback)|The background color of the container.|  
|[COleControlContainer::m_crFore](#colecontrolcontainer__m_crfore)|The foreground color of the container.|  
|[COleControlContainer::m_listSitesOrWnds](#colecontrolcontainer__m_listsitesorwnds)|A list of the supported control sites.|  
|[COleControlContainer::m_nWindowlessControls](#colecontrolcontainer__m_nwindowlesscontrols)|The number of hosted windowless controls.|  
|[COleControlContainer::m_pOleFont](#colecontrolcontainer__m_polefont)|A pointer to the OLE font of the custom control site.|  
|[COleControlContainer::m_pSiteCapture](#colecontrolcontainer__m_psitecapture)|Pointer to the capture control site.|  
|[COleControlContainer::m_pSiteFocus](#colecontrolcontainer__m_psitefocus)|Pointer to the control that currently has input focus.|  
|[COleControlContainer::m_pSiteUIActive](#colecontrolcontainer__m_psiteuiactive)|Pointer to the control that is currently in-place activated.|  
|[COleControlContainer::m_pWnd](#colecontrolcontainer__m_pwnd)|Pointer to the window implementing the control container.|  
|[COleControlContainer::m_siteMap](#colecontrolcontainer__m_sitemap)|The site map.|  
  
## Remarks  
 This is done by providing support for one or more ActiveX control sites (implemented by `COleControlSite`). `COleControlContainer` fully implements the [IOleInPlaceFrame](http://msdn.microsoft.com/library/windows/desktop/ms692770) and [IOleContainer](http://msdn.microsoft.com/library/windows/desktop/ms690103) interfaces, allowing the contained ActiveX controls to fulfill their qualifications as in-place items.  
  
 Commonly, this class is used in conjunction with `COccManager` and `COleControlSite` to implement a custom ActiveX control container, with custom sites for one or more ActiveX controls.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleControlContainer`  
  
## Requirements  
 **Header:** afxocc.h  
  
##  <a name="colecontrolcontainer__attachcontrolsite"></a>  COleControlContainer::AttachControlSite  
 Called by the framework to create and attach a control site.  
  
```  
virtual void AttachControlSite(
    CWnd* pWnd,  
    UINT nIDC = 0);

 
void AttachControlSite(
    CWnd* pWnd,  
    UINT nIDC = 0);
```  
  
### Parameters  
 `pWnd`  
 A pointer to a `CWnd` object.  
  
 `nIDC`  
 The ID of the control to be attached.  
  
### Remarks  
 Override this function if you want to customize this process.  
  
> [!NOTE]
>  Use the first form of this function if you are statically linking to the MFC library. Use the second form if you are dynamically linking to the MFC library.  
  
##  <a name="colecontrolcontainer__broadcastambientpropertychange"></a>  COleControlContainer::BroadcastAmbientPropertyChange  
 Informs all hosted controls that an ambient property has changed.  
  
```  
virtual void BroadcastAmbientPropertyChange(DISPID dispid);
```  
  
### Parameters  
 `dispid`  
 The dispatch ID of the ambient property being changed.  
  
### Remarks  
 This function is called by the framework when an ambient property has changed value. Override this function to customize this behavior.  
  
##  <a name="colecontrolcontainer__checkdlgbutton"></a>  COleControlContainer::CheckDlgButton  
 Modifies the current state of the button.  
  
```  
virtual void CheckDlgButton(
    int nIDButton,  
    UINT nCheck);
```  
  
### Parameters  
 `nIDButton`  
 The ID of the button to be modified.  
  
 `nCheck`  
 Specifies the state of the button. Can be one of the following:  
  
- **BST_CHECKED** Sets the button state to checked.  
  
- **BST_INDETERMINATE** Sets the button state to grayed, indicating an indeterminate state. Use this value only if the button has the **BS_3STATE** or **BS_AUTO3STATE** style.  
  
- **BST_UNCHECKED** Sets the button state to cleared.  
  
##  <a name="colecontrolcontainer__checkradiobutton"></a>  COleControlContainer::CheckRadioButton  
 Selects a specified radio button in a group and clears the remaining buttons in the group.  
  
```  
virtual void CheckRadioButton(
    int nIDFirstButton,  
    int nIDLastButton,  
    int nIDCheckButton);
```  
  
### Parameters  
 `nIDFirstButton`  
 Specifies the identifier of the first radio button in the group.  
  
 `nIDLastButton`  
 Specifies the identifier of the last radio button in the group.  
  
 `nIDCheckButton`  
 Specifies the identifier of the radio button to be checked.  
  
##  <a name="colecontrolcontainer__colecontrolcontainer"></a>  COleControlContainer::COleControlContainer  
 Constructs a `COleControlContainer` object.  
  
```  
explicit COleControlContainer(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 A pointer to the parent window of the control container.  
  
### Remarks  
 Once the object has been successfully created, add a custom control site with a call to `AttachControlSite`.  
  
##  <a name="colecontrolcontainer__createcontrol"></a>  COleControlContainer::CreateControl  
 Creates an ActiveX control, hosted by the specified `COleControlSite` object.  
  
```  
BOOL CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    UINT nID,  
    CFile* pPersist =NULL,  
    BOOL bStorage =FALSE,  
    BSTR bstrLicKey =NULL,  
    COleControlSite** ppNewSite =NULL);

 
BOOL CreateControl(
    CWnd* pWndCtrl,  
    REFCLSID clsid,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const POINT* ppt,  
    const SIZE* psize,  
    UINT nID,  
    CFile* pPersist =NULL,  
    BOOL bStorage =FALSE,  
    BSTR bstrLicKey =NULL,  
    COleControlSite** ppNewSite =NULL);
```  
  
### Parameters  
 `pWndCtrl`  
 A pointer to the window object representing the control.  
  
 `clsid`  
 The unique class ID of the control.  
  
 `lpszWindowName`  
 A pointer to the text to be displayed in the control. Sets the value of the control's Caption or Text property (if any). If **NULL**, the control's Caption or Text property is not changed.  
  
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
  
 *ppNewSite*  
 A pointer to the existing control site that will host the control being created. The default value is **NULL**, indicating that a new control site will be automatically created and attached to the new control.  
  
 `ppt`  
 A pointer to a **POINT** structure that contains the upper-left corner of the control. The size of the control is determined by the value of *psize*. The `ppt` and *psize* values are an optional method of specifying the size and position of the control.  
  
 *psize*  
 A pointer to a **SIZE** structure that contains the size of the control. The upper-left corner is determined by the value of `ppt`. The `ppt` and *psize* values are an optional method of specifying the size and position of the control.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Only a subset of the Windows `dwStyle` flags are supported by `CreateControl`:  
  
- **WS_VISIBLE** Creates a window that is initially visible. Required if you want the control to be visible immediately, like ordinary windows.  
  
- **WS_DISABLED** Creates a window that is initially disabled. A disabled window cannot receive input from the user. Can be set if the control has an Enabled property.  
  
- `WS_BORDER` Creates a window with a thin-line border. Can be set if control has a BorderStyle property.  
  
- **WS_GROUP** Specifies the first control of a group of controls. The user can change the keyboard focus from one control in the group to the next by using the direction keys. All controls defined with the **WS_GROUP** style after the first control belong to the same group. The next control with the **WS_GROUP** style ends the group and starts the next group.  
  
- **WS_TABSTOP** Specifies a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control of the **WS_TABSTOP** style.  
  
 Use the second overload to create default-sized controls.  
  
##  <a name="colecontrolcontainer__createolefont"></a>  COleControlContainer::CreateOleFont  
 Creates an OLE font.  
  
```  
void CreateOleFont(CFont* pFont);
```  
  
### Parameters  
 `pFont`  
 A pointer to the font to be used by the control container.  
  
##  <a name="colecontrolcontainer__finditem"></a>  COleControlContainer::FindItem  
 Finds the custom site that hosts the specified item.  
  
```  
virtual COleControlSite* FindItem(UINT nID) const;

 
```  
  
### Parameters  
 `nID`  
 The identifier of the item to be found.  
  
### Return Value  
 A pointer to the custom site of the specified item.  
  
##  <a name="colecontrolcontainer__freezeallevents"></a>  COleControlContainer::FreezeAllEvents  
 Determines if the container will ignore events from the attached control sites or accept them.  
  
```  
void FreezeAllEvents(BOOL bFreeze);
```  
  
### Parameters  
 `bFreeze`  
 Nonzero if events will be processed; otherwise 0.  
  
### Remarks  
  
> [!NOTE]
>  The control is not required to stop firing events if requested by the control container. It can continue firing but all subsequent events will be ignored by the control container.  
  
##  <a name="colecontrolcontainer__getambientprop"></a>  COleControlContainer::GetAmbientProp  
 Retrieves the value of a specified ambient property.  
  
```  
virtual BOOL GetAmbientProp(
    COleControlSite* pSite,  
    DISPID dispid,  
    VARIANT* pvarResult);
```  
  
### Parameters  
 `pSite`  
 A pointer to a control site from which the ambient property will be retrieved.  
  
 `dispid`  
 The dispatch ID of the desired ambient property.  
  
 *pVarResult*  
 A pointer to the value of the ambient property.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
##  <a name="colecontrolcontainer__getdlgitem"></a>  COleControlContainer::GetDlgItem  
 Retrieves a pointer to the specified control or child window in a dialog box or other window.  
  
```  
virtual CWnd* GetDlgItem(
    int nID) const;

 
 
virtual void GetDlgItem(
    int nID,  
    HWND* phWnd) const;

 
```  
  
### Parameters  
 `nID`  
 Identifier of the dialog item to retrieve.  
  
 `phWnd`  
 A pointer to the handle of the specified dialog item's window object.  
  
### Return Value  
 A pointer to the dialog item's window.  
  
##  <a name="colecontrolcontainer__getdlgitemint"></a>  COleControlContainer::GetDlgItemInt  
 Retrieves the value of the translated text of the given control.  
  
```  
virtual UINT GetDlgItemInt(
    int nID,  
    BOOL* lpTrans,  
    BOOL bSigned) const;

 
```  
  
### Parameters  
 `nID`  
 The identifier of the control.  
  
 `lpTrans`  
 Pointer to a Boolean variable that receives a function success/failure value ( **TRUE** indicates success, **FALSE** indicates failure).  
  
 `bSigned`  
 Specifies whether the function should examine the text for a minus sign at the beginning and return a signed integer value if it finds one. If the `bSigned` parameter is **TRUE**, specifying that the value to be retrieved is a signed integer value, cast the return value to an `int` type. To get extended error information, call [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### Return Value  
 If successful, the variable pointed to by `lpTrans` is set to **TRUE**, and the return value is the translated value of the control text.  
  
 If the function fails, the variable pointed to by `lpTrans` is set to **FALSE**, and the return value is zero. Note that, since zero is a possible translated value, a return value of zero does not by itself indicate failure.  
  
 If `lpTrans` is **NULL**, the function returns no information about success or failure.  
  
### Remarks  
 The function translates the retrieved text by stripping any extra spaces at the beginning of the text and then converting the decimal digits. The function stops translating when it reaches the end of the text or encounters a nonnumeric character.  
  
 This function returns zero if the translated value is greater than **INT_MAX** (for signed numbers) or **UINT_MAX** (for unsigned numbers).  
  
##  <a name="colecontrolcontainer__getdlgitemtext"></a>  COleControlContainer::GetDlgItemText  
 Retrieves the text of the given control.  
  
```  
virtual int GetDlgItemText(
    int nID,  
    LPTSTR lpStr,  
    int nMaxCount) const;

 
```  
  
### Parameters  
 `nID`  
 The identifier of the control.  
  
 `lpStr`  
 Pointer to the text of the control.  
  
 `nMaxCount`  
 Specifies the maximum length, in characters, of the string to be copied to the buffer pointed to by `lpStr`. If the length of the string exceeds the limit, the string is truncated.  
  
### Return Value  
 If the function succeeds, the return value specifies the number of characters copied to the buffer, not including the terminating null character.  
  
 If the function fails, the return value is zero. To get extended error information, call [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
##  <a name="colecontrolcontainer__handlesetfocus"></a>  COleControlContainer::HandleSetFocus  
 Determines if the container handles `WM_SETFOCUS` messages.  
  
```  
virtual BOOL HandleSetFocus();
```  
  
### Return Value  
 Nonzero if the container handles `WM_SETFOCUS` messages; otherwise zero.  
  
##  <a name="colecontrolcontainer__handlewindowlessmessage"></a>  COleControlContainer::HandleWindowlessMessage  
 Processes window messages for windowless controls.  
  
```  
virtual BOOL HandleWindowlessMessage(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam,  
    LRESULT* plResult);
```  
  
### Parameters  
 `message`  
 The identifier for the window message, provided by Windows.  
  
 `wParam`  
 Parameter of the message; provided by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the `message` parameter.  
  
 `lParam`  
 Parameter of the message; provided by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the `message` parameter.  
  
 *plResult*  
 Windows result code. Specifies the result of the message processing and depends on the message sent.  
  
### Return Value  
 Nonzero if successful; otherwise zero.  
  
### Remarks  
 Override this function to customize the handling of windowless control messages.  
  
##  <a name="colecontrolcontainer__isdlgbuttonchecked"></a>  COleControlContainer::IsDlgButtonChecked  
 Determines the state of the specified button.  
  
```  
virtual UINT IsDlgButtonChecked(int nIDButton) const;

 
```  
  
### Parameters  
 `nIDButton`  
 The identifier of the button control.  
  
### Return Value  
 The return value, from a button created with the **BS_AUTOCHECKBOX**, **BS_AUTORADIOBUTTON**, **BS_AUTO3STATE**, **BS_CHECKBOX**, **BS_RADIOBUTTON**, or **BS_3STATE** style. Can be one of the following:  
  
- **BST_CHECKED** Button is checked.  
  
- **BST_INDETERMINATE** Button is grayed, indicating an indeterminate state (applies only if the button has the **BS_3STATE** or **BS_AUTO3STATE** style).  
  
- **BST_UNCHECKED** Button is cleared.  
  
### Remarks  
 If the button is a three-state control, the member function determines whether it is dimmed, checked, or neither.  
  
##  <a name="colecontrolcontainer__m_crback"></a>  COleControlContainer::m_crBack  
 The background color of the container.  
  
```  
COLORREF m_crBack;  
```  
  
##  <a name="colecontrolcontainer__m_crfore"></a>  COleControlContainer::m_crFore  
 The foreground color of the container.  
  
```  
COLORREF m_crFore;  
```  
  
##  <a name="colecontrolcontainer__m_listsitesorwnds"></a>  COleControlContainer::m_listSitesOrWnds  
 A list of the control sites hosted by the container.  
  
```  
CTypedPtrList<CPtrList, COleControlSiteOrWnd*> m_listSitesOrWnds;  
```  
  
##  <a name="colecontrolcontainer__m_nwindowlesscontrols"></a>  COleControlContainer::m_nWindowlessControls  
 The number of windowless controls hosted by the control container.  
  
```  
int m_nWindowlessControls;  
```  
  
##  <a name="colecontrolcontainer__m_polefont"></a>  COleControlContainer::m_pOleFont  
 A pointer to the OLE font of the custom control site.  
  
```  
LPFONTDISP m_pOleFont;  
```  
  
##  <a name="colecontrolcontainer__m_psitecapture"></a>  COleControlContainer::m_pSiteCapture  
 Pointer to the capture control site.  
  
```  
COleControlSite* m_pSiteCapture;  
```  
  
##  <a name="colecontrolcontainer__m_psitefocus"></a>  COleControlContainer::m_pSiteFocus  
 A pointer to the control site that currently has input focus.  
  
```  
COleControlSite* m_pSiteFocus;  
```  
  
##  <a name="colecontrolcontainer__m_psiteuiactive"></a>  COleControlContainer::m_pSiteUIActive  
 A pointer to the control site that is in-place activated.  
  
```  
COleControlSite* m_pSiteUIActive;  
```  
  
##  <a name="colecontrolcontainer__m_pwnd"></a>  COleControlContainer::m_pWnd  
 A pointer to the window object associated with the container.  
  
```  
CWnd* m_pWnd;  
```  
  
##  <a name="colecontrolcontainer__m_sitemap"></a>  COleControlContainer::m_siteMap  
 The site map.  
  
```  
CMapPtrToPtr m_siteMap;  
```  
  
##  <a name="colecontrolcontainer__onpaint"></a>  COleControlContainer::OnPaint  
 Called by the framework to handle `WM_PAINT` requests.  
  
```  
virtual BOOL OnPaint(CDC* pDC);
```  
  
### Parameters  
 `pDC`  
 A pointer to the device context used by the container.  
  
### Return Value  
 Nonzero if the message was handled; otherwise zero.  
  
### Remarks  
 Override this function to customize the painting process.  
  
##  <a name="colecontrolcontainer__onuiactivate"></a>  COleControlContainer::OnUIActivate  
 Called by the framework when the control site, pointed to by `pSite`, is about to be activated in-place.  
  
```  
virtual void OnUIActivate(COleControlSite* pSite);
```  
  
### Parameters  
 `pSite`  
 A pointer to the control site about to be in-place activated.  
  
### Remarks  
 In-place activation means that the container's main menu is replaced with an in-place composite menu.  
  
##  <a name="colecontrolcontainer__onuideactivate"></a>  COleControlContainer::OnUIDeactivate  
 Called by the framework when the control site, pointed to by `pSite`, is about to be deactivated.  
  
```  
virtual void OnUIDeactivate(COleControlSite* pSite);
```  
  
### Parameters  
 `pSite`  
 A pointer to the control site about to be deactivated.  
  
### Remarks  
 When this notification is received, the container should reinstall its user interface and take focus.  
  
##  <a name="colecontrolcontainer__scrollchildren"></a>  COleControlContainer::ScrollChildren  
 Called by the framework when scroll messages are received from a child window.  
  
```  
virtual void ScrollChildren(
    int dx,  
    int dy);
```  
  
### Parameters  
 `dx`  
 The amount, in pixels, of scrolling along the x-axis.  
  
 *dy*  
 The amount, in pixels, of scrolling along the y-axis.  
  
##  <a name="colecontrolcontainer__senddlgitemmessage"></a>  COleControlContainer::SendDlgItemMessage  
 Sends a message to the specified control.  
  
```  
virtual LRESULT SendDlgItemMessage(
    int nID,  
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 `nID`  
 Specifies the identifier of the control that receives the message.  
  
 `message`  
 Specifies the message to be sent.  
  
 `wParam`  
 Specifies additional message-specific information.  
  
 `lParam`  
 Specifies additional message-specific information.  
  
##  <a name="colecontrolcontainer__setdlgitemint"></a>  COleControlContainer::SetDlgItemInt  
 Sets the text of a control in a dialog box to the string representation of a specified integer value.  
  
```  
virtual void SetDlgItemInt(
    int nID,  
    UINT nValue,  
    BOOL bSigned);
```  
  
### Parameters  
 `nID`  
 The identifier of the control.  
  
 `nValue`  
 The integer value to be displayed.  
  
 `bSigned`  
 Specifies whether the `nValue` parameter is signed or unsigned. If this parameter is **TRUE**, `nValue` is signed. If this parameter is **TRUE** and `nValue` is less than zero, a minus sign is placed before the first digit in the string. If this parameter is **FALSE**, `nValue` is unsigned.  
  
##  <a name="colecontrolcontainer__setdlgitemtext"></a>  COleControlContainer::SetDlgItemText  
 Sets the text of the specified control, using the text contained in `lpszString`.  
  
```  
virtual void SetDlgItemText(
    int nID,  
    LPCTSTR lpszString);
```  
  
### Parameters  
 `nID`  
 The identifier of the control.  
  
 `lpszString`  
 Pointer to the text of the control.  
  
## See Also  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleControlSite Class](../../mfc/reference/colecontrolsite-class.md)   
 [COccManager Class](../../mfc/reference/coccmanager-class.md)
