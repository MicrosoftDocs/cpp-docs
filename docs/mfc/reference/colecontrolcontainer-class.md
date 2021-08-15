---
description: "Learn more about: COleControlContainer Class"
title: "COleControlContainer Class"
ms.date: "11/04/2016"
f1_keywords: ["COleControlContainer", "AFXOCC/COleControlContainer", "AFXOCC/COleControlContainer::COleControlContainer", "AFXOCC/COleControlContainer::AttachControlSite", "AFXOCC/COleControlContainer::BroadcastAmbientPropertyChange", "AFXOCC/COleControlContainer::CheckDlgButton", "AFXOCC/COleControlContainer::CheckRadioButton", "AFXOCC/COleControlContainer::CreateControl", "AFXOCC/COleControlContainer::CreateOleFont", "AFXOCC/COleControlContainer::FindItem", "AFXOCC/COleControlContainer::FreezeAllEvents", "AFXOCC/COleControlContainer::GetAmbientProp", "AFXOCC/COleControlContainer::GetDlgItem", "AFXOCC/COleControlContainer::GetDlgItemInt", "AFXOCC/COleControlContainer::GetDlgItemText", "AFXOCC/COleControlContainer::HandleSetFocus", "AFXOCC/COleControlContainer::HandleWindowlessMessage", "AFXOCC/COleControlContainer::IsDlgButtonChecked", "AFXOCC/COleControlContainer::OnPaint", "AFXOCC/COleControlContainer::OnUIActivate", "AFXOCC/COleControlContainer::OnUIDeactivate", "AFXOCC/COleControlContainer::ScrollChildren", "AFXOCC/COleControlContainer::SendDlgItemMessage", "AFXOCC/COleControlContainer::SetDlgItemInt", "AFXOCC/COleControlContainer::SetDlgItemText", "AFXOCC/COleControlContainer::m_crBack", "AFXOCC/COleControlContainer::m_crFore", "AFXOCC/COleControlContainer::m_listSitesOrWnds", "AFXOCC/COleControlContainer::m_nWindowlessControls", "AFXOCC/COleControlContainer::m_pOleFont", "AFXOCC/COleControlContainer::m_pSiteCapture", "AFXOCC/COleControlContainer::m_pSiteFocus", "AFXOCC/COleControlContainer::m_pSiteUIActive", "AFXOCC/COleControlContainer::m_pWnd", "AFXOCC/COleControlContainer::m_siteMap"]
helpviewer_keywords: ["COleControlContainer [MFC], COleControlContainer", "COleControlContainer [MFC], AttachControlSite", "COleControlContainer [MFC], BroadcastAmbientPropertyChange", "COleControlContainer [MFC], CheckDlgButton", "COleControlContainer [MFC], CheckRadioButton", "COleControlContainer [MFC], CreateControl", "COleControlContainer [MFC], CreateOleFont", "COleControlContainer [MFC], FindItem", "COleControlContainer [MFC], FreezeAllEvents", "COleControlContainer [MFC], GetAmbientProp", "COleControlContainer [MFC], GetDlgItem", "COleControlContainer [MFC], GetDlgItemInt", "COleControlContainer [MFC], GetDlgItemText", "COleControlContainer [MFC], HandleSetFocus", "COleControlContainer [MFC], HandleWindowlessMessage", "COleControlContainer [MFC], IsDlgButtonChecked", "COleControlContainer [MFC], OnPaint", "COleControlContainer [MFC], OnUIActivate", "COleControlContainer [MFC], OnUIDeactivate", "COleControlContainer [MFC], ScrollChildren", "COleControlContainer [MFC], SendDlgItemMessage", "COleControlContainer [MFC], SetDlgItemInt", "COleControlContainer [MFC], SetDlgItemText", "COleControlContainer [MFC], m_crBack", "COleControlContainer [MFC], m_crFore", "COleControlContainer [MFC], m_listSitesOrWnds", "COleControlContainer [MFC], m_nWindowlessControls", "COleControlContainer [MFC], m_pOleFont", "COleControlContainer [MFC], m_pSiteCapture", "COleControlContainer [MFC], m_pSiteFocus", "COleControlContainer [MFC], m_pSiteUIActive", "COleControlContainer [MFC], m_pWnd", "COleControlContainer [MFC], m_siteMap"]
ms.assetid: f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8
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
|[COleControlContainer::COleControlContainer](#colecontrolcontainer)|Constructs a `COleControlContainer` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleControlContainer::AttachControlSite](#attachcontrolsite)|Creates a control site, hosted by the container.|
|[COleControlContainer::BroadcastAmbientPropertyChange](#broadcastambientpropertychange)|Informs all hosted controls that an ambient property has changed.|
|[COleControlContainer::CheckDlgButton](#checkdlgbutton)|Modifies the specified button control.|
|[COleControlContainer::CheckRadioButton](#checkradiobutton)|Selects the specified radio button of a group.|
|[COleControlContainer::CreateControl](#createcontrol)|Creates a hosted ActiveX control.|
|[COleControlContainer::CreateOleFont](#createolefont)|Creates an OLE font.|
|[COleControlContainer::FindItem](#finditem)|Returns the custom site of the specified control.|
|[COleControlContainer::FreezeAllEvents](#freezeallevents)|Determines if the control site is accepting events.|
|[COleControlContainer::GetAmbientProp](#getambientprop)|Retrieves the specified ambient property.|
|[COleControlContainer::GetDlgItem](#getdlgitem)|Retrieves the specified dialog control.|
|[COleControlContainer::GetDlgItemInt](#getdlgitemint)|Retrieves the value of the specified dialog control.|
|[COleControlContainer::GetDlgItemText](#getdlgitemtext)|Retrieves the caption of the specified dialog control.|
|[COleControlContainer::HandleSetFocus](#handlesetfocus)|Determines if the container handles WM_SETFOCUS messages.|
|[COleControlContainer::HandleWindowlessMessage](#handlewindowlessmessage)|Handles messages sent to a windowless control.|
|[COleControlContainer::IsDlgButtonChecked](#isdlgbuttonchecked)|Determines the state of the specified button.|
|[COleControlContainer::OnPaint](#onpaint)|Called to repaint a portion of the container.|
|[COleControlContainer::OnUIActivate](#onuiactivate)|Called when a control is about to be in-place activated.|
|[COleControlContainer::OnUIDeactivate](#onuideactivate)|Called when a control is about to be deactivated.|
|[COleControlContainer::ScrollChildren](#scrollchildren)|Called by the framework when scroll messages are received from a child window.|
|[COleControlContainer::SendDlgItemMessage](#senddlgitemmessage)|Sends a message to the specified control.|
|[COleControlContainer::SetDlgItemInt](#setdlgitemint)|Sets the value of the specified control.|
|[COleControlContainer::SetDlgItemText](#setdlgitemtext)|Sets the text of the specified control.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[COleControlContainer::m_crBack](#m_crback)|The background color of the container.|
|[COleControlContainer::m_crFore](#m_crfore)|The foreground color of the container.|
|[COleControlContainer::m_listSitesOrWnds](#m_listsitesorwnds)|A list of the supported control sites.|
|[COleControlContainer::m_nWindowlessControls](#m_nwindowlesscontrols)|The number of hosted windowless controls.|
|[COleControlContainer::m_pOleFont](#m_polefont)|A pointer to the OLE font of the custom control site.|
|[COleControlContainer::m_pSiteCapture](#m_psitecapture)|Pointer to the capture control site.|
|[COleControlContainer::m_pSiteFocus](#m_psitefocus)|Pointer to the control that currently has input focus.|
|[COleControlContainer::m_pSiteUIActive](#m_psiteuiactive)|Pointer to the control that is currently in-place activated.|
|[COleControlContainer::m_pWnd](#m_pwnd)|Pointer to the window implementing the control container.|
|[COleControlContainer::m_siteMap](#m_sitemap)|The site map.|

## Remarks

This is done by providing support for one or more ActiveX control sites (implemented by `COleControlSite`). `COleControlContainer` fully implements the [IOleInPlaceFrame](/windows/win32/api/oleidl/nn-oleidl-ioleinplaceframe) and [IOleContainer](/windows/win32/api/oleidl/nn-oleidl-iolecontainer) interfaces, allowing the contained ActiveX controls to fulfill their qualifications as in-place items.

Commonly, this class is used in conjunction with `COccManager` and `COleControlSite` to implement a custom ActiveX control container, with custom sites for one or more ActiveX controls.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleControlContainer`

## Requirements

**Header:** afxocc.h

## <a name="attachcontrolsite"></a> COleControlContainer::AttachControlSite

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

*pWnd*<br/>
A pointer to a `CWnd` object.

*nIDC*<br/>
The ID of the control to be attached.

### Remarks

Override this function if you want to customize this process.

> [!NOTE]
> Use the first form of this function if you are statically linking to the MFC library. Use the second form if you are dynamically linking to the MFC library.

## <a name="broadcastambientpropertychange"></a> COleControlContainer::BroadcastAmbientPropertyChange

Informs all hosted controls that an ambient property has changed.

```
virtual void BroadcastAmbientPropertyChange(DISPID dispid);
```

### Parameters

*dispid*<br/>
The dispatch ID of the ambient property being changed.

### Remarks

This function is called by the framework when an ambient property has changed value. Override this function to customize this behavior.

## <a name="checkdlgbutton"></a> COleControlContainer::CheckDlgButton

Modifies the current state of the button.

```
virtual void CheckDlgButton(
    int nIDButton,
    UINT nCheck);
```

### Parameters

*nIDButton*<br/>
The ID of the button to be modified.

*nCheck*<br/>
Specifies the state of the button. Can be one of the following:

- BST_CHECKED Sets the button state to checked.

- BST_INDETERMINATE Sets the button state to grayed, indicating an indeterminate state. Use this value only if the button has the BS_3STATE or BS_AUTO3STATE style.

- BST_UNCHECKED Sets the button state to cleared.

## <a name="checkradiobutton"></a> COleControlContainer::CheckRadioButton

Selects a specified radio button in a group and clears the remaining buttons in the group.

```
virtual void CheckRadioButton(
    int nIDFirstButton,
    int nIDLastButton,
    int nIDCheckButton);
```

### Parameters

*nIDFirstButton*<br/>
Specifies the identifier of the first radio button in the group.

*nIDLastButton*<br/>
Specifies the identifier of the last radio button in the group.

*nIDCheckButton*<br/>
Specifies the identifier of the radio button to be checked.

## <a name="colecontrolcontainer"></a> COleControlContainer::COleControlContainer

Constructs a `COleControlContainer` object.

```
explicit COleControlContainer(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
A pointer to the parent window of the control container.

### Remarks

Once the object has been successfully created, add a custom control site with a call to `AttachControlSite`.

## <a name="createcontrol"></a> COleControlContainer::CreateControl

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

*pWndCtrl*<br/>
A pointer to the window object representing the control.

*clsid*<br/>
The unique class ID of the control.

*lpszWindowName*<br/>
A pointer to the text to be displayed in the control. Sets the value of the control's Caption or Text property (if any). If NULL, the control's Caption or Text property is not changed.

*dwStyle*<br/>
Windows styles. The available styles are listed under the **Remarks** section.

*rect*<br/>
Specifies the control's size and position. It can be either a `CRect` object or a `RECT` structure.

*nID*<br/>
Specifies the control's child window ID.

*pPersist*<br/>
A pointer to a `CFile` containing the persistent state for the control. The default value is NULL, indicating that the control initializes itself without restoring its state from any persistent storage. If not NULL, it should be a pointer to a `CFile`-derived object that contains the control's persistent data, in the form of either a stream or a storage. This data could have been saved in a previous activation of the client. The `CFile` can contain other data, but must have its read-write pointer set to the first byte of persistent data at the time of the call to `CreateControl`.

*bStorage*<br/>
Indicates whether the data in *pPersist* should be interpreted as `IStorage` or `IStream` data. If the data in *pPersist* is a storage, *bStorage* should be TRUE. If the data in *pPersist* is a stream, *bStorage* should be FALSE. The default value is FALSE.

*bstrLicKey*<br/>
Optional license key data. This data is needed only for creating controls that require a run-time license key. If the control supports licensing, you must provide a license key for the creation of the control to succeed. The default value is NULL.

*ppNewSite*<br/>
A pointer to the existing control site that will host the control being created. The default value is NULL, indicating that a new control site will be automatically created and attached to the new control.

*ppt*<br/>
A pointer to a `POINT` structure that contains the upper-left corner of the control. The size of the control is determined by the value of *psize*. The *ppt* and *psize* values are an optional method of specifying the size and position of the control.

*psize*<br/>
A pointer to a `SIZE` structure that contains the size of the control. The upper-left corner is determined by the value of *ppt*. The *ppt* and *psize* values are an optional method of specifying the size and position of the control.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Only a subset of the Windows *dwStyle* flags are supported by `CreateControl`:

- WS_VISIBLE Creates a window that is initially visible. Required if you want the control to be visible immediately, like ordinary windows.

- WS_DISABLED Creates a window that is initially disabled. A disabled window cannot receive input from the user. Can be set if the control has an Enabled property.

- WS_BORDER Creates a window with a thin-line border. Can be set if control has a BorderStyle property.

- WS_GROUP Specifies the first control of a group of controls. The user can change the keyboard focus from one control in the group to the next by using the direction keys. All controls defined with the WS_GROUP style after the first control belong to the same group. The next control with the WS_GROUP style ends the group and starts the next group.

- WS_TABSTOP Specifies a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control of the WS_TABSTOP style.

Use the second overload to create default-sized controls.

## <a name="createolefont"></a> COleControlContainer::CreateOleFont

Creates an OLE font.

```cpp
void CreateOleFont(CFont* pFont);
```

### Parameters

*pFont*<br/>
A pointer to the font to be used by the control container.

## <a name="finditem"></a> COleControlContainer::FindItem

Finds the custom site that hosts the specified item.

```
virtual COleControlSite* FindItem(UINT nID) const;
```

### Parameters

*nID*<br/>
The identifier of the item to be found.

### Return Value

A pointer to the custom site of the specified item.

## <a name="freezeallevents"></a> COleControlContainer::FreezeAllEvents

Determines if the container will ignore events from the attached control sites or accept them.

```cpp
void FreezeAllEvents(BOOL bFreeze);
```

### Parameters

*bFreeze*<br/>
Nonzero if events will be processed; otherwise 0.

### Remarks

> [!NOTE]
> The control is not required to stop firing events if requested by the control container. It can continue firing but all subsequent events will be ignored by the control container.

## <a name="getambientprop"></a> COleControlContainer::GetAmbientProp

Retrieves the value of a specified ambient property.

```
virtual BOOL GetAmbientProp(
    COleControlSite* pSite,
    DISPID dispid,
    VARIANT* pvarResult);
```

### Parameters

*pSite*<br/>
A pointer to a control site from which the ambient property will be retrieved.

*dispid*<br/>
The dispatch ID of the desired ambient property.

*pVarResult*<br/>
A pointer to the value of the ambient property.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="getdlgitem"></a> COleControlContainer::GetDlgItem

Retrieves a pointer to the specified control or child window in a dialog box or other window.

```
virtual CWnd* GetDlgItem(int nID) const;

virtual void GetDlgItem(
    int nID,
    HWND* phWnd) const;
```

### Parameters

*nID*<br/>
Identifier of the dialog item to retrieve.

*phWnd*<br/>
A pointer to the handle of the specified dialog item's window object.

### Return Value

A pointer to the dialog item's window.

## <a name="getdlgitemint"></a> COleControlContainer::GetDlgItemInt

Retrieves the value of the translated text of the given control.

```
virtual UINT GetDlgItemInt(
    int nID,
    BOOL* lpTrans,
    BOOL bSigned) const;
```

### Parameters

*nID*<br/>
The identifier of the control.

*lpTrans*<br/>
Pointer to a Boolean variable that receives a function success/failure value (TRUE indicates success, FALSE indicates failure).

*bSigned*<br/>
Specifies whether the function should examine the text for a minus sign at the beginning and return a signed integer value if it finds one. If the *bSigned* parameter is TRUE, specifying that the value to be retrieved is a signed integer value, cast the return value to an **`int`** type. To get extended error information, call [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### Return Value

If successful, the variable pointed to by *lpTrans* is set to TRUE, and the return value is the translated value of the control text.

If the function fails, the variable pointed to by *lpTrans* is set to FALSE, and the return value is zero. Note that, since zero is a possible translated value, a return value of zero does not by itself indicate failure.

If *lpTrans* is NULL, the function returns no information about success or failure.

### Remarks

The function translates the retrieved text by stripping any extra spaces at the beginning of the text and then converting the decimal digits. The function stops translating when it reaches the end of the text or encounters a nonnumeric character.

This function returns zero if the translated value is greater than INT_MAX (for signed numbers) or UINT_MAX (for unsigned numbers).

## <a name="getdlgitemtext"></a> COleControlContainer::GetDlgItemText

Retrieves the text of the given control.

```
virtual int GetDlgItemText(
    int nID,
    LPTSTR lpStr,
    int nMaxCount) const;
```

### Parameters

*nID*<br/>
The identifier of the control.

*lpStr*<br/>
Pointer to the text of the control.

*nMaxCount*<br/>
Specifies the maximum length, in characters, of the string to be copied to the buffer pointed to by *lpStr*. If the length of the string exceeds the limit, the string is truncated.

### Return Value

If the function succeeds, the return value specifies the number of characters copied to the buffer, not including the terminating null character.

If the function fails, the return value is zero. To get extended error information, call [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

## <a name="handlesetfocus"></a> COleControlContainer::HandleSetFocus

Determines if the container handles WM_SETFOCUS messages.

```
virtual BOOL HandleSetFocus();
```

### Return Value

Nonzero if the container handles WM_SETFOCUS messages; otherwise zero.

## <a name="handlewindowlessmessage"></a> COleControlContainer::HandleWindowlessMessage

Processes window messages for windowless controls.

```
virtual BOOL HandleWindowlessMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* plResult);
```

### Parameters

*message*<br/>
The identifier for the window message, provided by Windows.

*wParam*<br/>
Parameter of the message; provided by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the *message* parameter.

*lParam*<br/>
Parameter of the message; provided by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the *message* parameter.

*plResult*<br/>
Windows result code. Specifies the result of the message processing and depends on the message sent.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

Override this function to customize the handling of windowless control messages.

## <a name="isdlgbuttonchecked"></a> COleControlContainer::IsDlgButtonChecked

Determines the state of the specified button.

```
virtual UINT IsDlgButtonChecked(int nIDButton) const;
```

### Parameters

*nIDButton*<br/>
The identifier of the button control.

### Return Value

The return value, from a button created with the BS_AUTOCHECKBOX, BS_AUTORADIOBUTTON, BS_AUTO3STATE, BS_CHECKBOX, BS_RADIOBUTTON, or BS_3STATE style. Can be one of the following:

- BST_CHECKED Button is checked.

- BST_INDETERMINATE Button is grayed, indicating an indeterminate state (applies only if the button has the BS_3STATE or BS_AUTO3STATE style).

- BST_UNCHECKED Button is cleared.

### Remarks

If the button is a three-state control, the member function determines whether it is dimmed, checked, or neither.

## <a name="m_crback"></a> COleControlContainer::m_crBack

The background color of the container.

```
COLORREF m_crBack;
```

## <a name="m_crfore"></a> COleControlContainer::m_crFore

The foreground color of the container.

```
COLORREF m_crFore;
```

## <a name="m_listsitesorwnds"></a> COleControlContainer::m_listSitesOrWnds

A list of the control sites hosted by the container.

```
CTypedPtrList<CPtrList, COleControlSiteOrWnd*> m_listSitesOrWnds;
```

## <a name="m_nwindowlesscontrols"></a> COleControlContainer::m_nWindowlessControls

The number of windowless controls hosted by the control container.

```
int m_nWindowlessControls;
```

## <a name="m_polefont"></a> COleControlContainer::m_pOleFont

A pointer to the OLE font of the custom control site.

```
LPFONTDISP m_pOleFont;
```

## <a name="m_psitecapture"></a> COleControlContainer::m_pSiteCapture

Pointer to the capture control site.

```
COleControlSite* m_pSiteCapture;
```

## <a name="m_psitefocus"></a> COleControlContainer::m_pSiteFocus

A pointer to the control site that currently has input focus.

```
COleControlSite* m_pSiteFocus;
```

## <a name="m_psiteuiactive"></a> COleControlContainer::m_pSiteUIActive

A pointer to the control site that is in-place activated.

```
COleControlSite* m_pSiteUIActive;
```

## <a name="m_pwnd"></a> COleControlContainer::m_pWnd

A pointer to the window object associated with the container.

```
CWnd* m_pWnd;
```

## <a name="m_sitemap"></a> COleControlContainer::m_siteMap

The site map.

```
CMapPtrToPtr m_siteMap;
```

## <a name="onpaint"></a> COleControlContainer::OnPaint

Called by the framework to handle WM_PAINT requests.

```
virtual BOOL OnPaint(CDC* pDC);
```

### Parameters

*pDC*<br/>
A pointer to the device context used by the container.

### Return Value

Nonzero if the message was handled; otherwise zero.

### Remarks

Override this function to customize the painting process.

## <a name="onuiactivate"></a> COleControlContainer::OnUIActivate

Called by the framework when the control site, pointed to by *pSite*, is about to be activated in-place.

```
virtual void OnUIActivate(COleControlSite* pSite);
```

### Parameters

*pSite*<br/>
A pointer to the control site about to be in-place activated.

### Remarks

In-place activation means that the container's main menu is replaced with an in-place composite menu.

## <a name="onuideactivate"></a> COleControlContainer::OnUIDeactivate

Called by the framework when the control site, pointed to by *pSite*, is about to be deactivated.

```
virtual void OnUIDeactivate(COleControlSite* pSite);
```

### Parameters

*pSite*<br/>
A pointer to the control site about to be deactivated.

### Remarks

When this notification is received, the container should reinstall its user interface and take focus.

## <a name="scrollchildren"></a> COleControlContainer::ScrollChildren

Called by the framework when scroll messages are received from a child window.

```
virtual void ScrollChildren(
    int dx,
    int dy);
```

### Parameters

*dx*<br/>
The amount, in pixels, of scrolling along the x-axis.

*dy*<br/>
The amount, in pixels, of scrolling along the y-axis.

## <a name="senddlgitemmessage"></a> COleControlContainer::SendDlgItemMessage

Sends a message to the specified control.

```
virtual LRESULT SendDlgItemMessage(
    int nID,
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*nID*<br/>
Specifies the identifier of the control that receives the message.

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-specific information.

*lParam*<br/>
Specifies additional message-specific information.

## <a name="setdlgitemint"></a> COleControlContainer::SetDlgItemInt

Sets the text of a control in a dialog box to the string representation of a specified integer value.

```
virtual void SetDlgItemInt(
    int nID,
    UINT nValue,
    BOOL bSigned);
```

### Parameters

*nID*<br/>
The identifier of the control.

*nValue*<br/>
The integer value to be displayed.

*bSigned*<br/>
Specifies whether the *nValue* parameter is signed or unsigned. If this parameter is TRUE, *nValue* is signed. If this parameter is TRUE and *nValue* is less than zero, a minus sign is placed before the first digit in the string. If this parameter is FALSE, *nValue* is unsigned.

## <a name="setdlgitemtext"></a> COleControlContainer::SetDlgItemText

Sets the text of the specified control, using the text contained in *lpszString*.

```
virtual void SetDlgItemText(
    int nID,
    LPCTSTR lpszString);
```

### Parameters

*nID*<br/>
The identifier of the control.

*lpszString*<br/>
Pointer to the text of the control.

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleControlSite Class](../../mfc/reference/colecontrolsite-class.md)<br/>
[COccManager Class](../../mfc/reference/coccmanager-class.md)
