---
description: "Learn more about: CMFCToolBarDateTimeCtrl Class"
title: "CMFCToolBarDateTimeCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCToolBarDateTimeCtrl", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CanBeStretched", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CopyFrom", "AFXTOOLBARDATETIMECTRL/CMFCToolBarButton::ExportToMenuButton", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetByCmd", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetDateTimeCtrl", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetHwnd", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTime", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTimeAll", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::HaveHotBorder", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::NotifyCommand", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnAddToCustomizePage", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnChangeParentWnd", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnClick", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnCtlColor", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnMove", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnShow", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnUpdateToolTip", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTime", "AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTimeAll"]
helpviewer_keywords: ["CMFCToolBarDateTimeCtrl [MFC], CMFCToolBarDateTimeCtrl", "CMFCToolBarDateTimeCtrl [MFC], CanBeStretched", "CMFCToolBarDateTimeCtrl [MFC], CopyFrom", "CMFCToolBarButton [MFC], ExportToMenuButton", "CMFCToolBarDateTimeCtrl [MFC], GetByCmd", "CMFCToolBarDateTimeCtrl [MFC], GetDateTimeCtrl", "CMFCToolBarDateTimeCtrl [MFC], GetHwnd", "CMFCToolBarDateTimeCtrl [MFC], GetTime", "CMFCToolBarDateTimeCtrl [MFC], GetTimeAll", "CMFCToolBarDateTimeCtrl [MFC], HaveHotBorder", "CMFCToolBarDateTimeCtrl [MFC], NotifyCommand", "CMFCToolBarDateTimeCtrl [MFC], OnAddToCustomizePage", "CMFCToolBarDateTimeCtrl [MFC], OnChangeParentWnd", "CMFCToolBarDateTimeCtrl [MFC], OnClick", "CMFCToolBarDateTimeCtrl [MFC], OnCtlColor", "CMFCToolBarDateTimeCtrl [MFC], OnGlobalFontsChanged", "CMFCToolBarDateTimeCtrl [MFC], OnMove", "CMFCToolBarDateTimeCtrl [MFC], OnShow", "CMFCToolBarDateTimeCtrl [MFC], OnUpdateToolTip", "CMFCToolBarDateTimeCtrl [MFC], SetTime", "CMFCToolBarDateTimeCtrl [MFC], SetTimeAll"]
ms.assetid: a3853cb9-8ebc-444f-a1e4-9cf905e24c18
---
# CMFCToolBarDateTimeCtrl Class

A toolbar button that contains a date and time picker control.

## Syntax

```
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl](#cmfctoolbardatetimectrl)|Constructs a `CMFCToolBarDateTimeCtrl` object.|
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCToolBarDateTimeCtrl::CanBeStretched](#canbestretched)|Specifies whether a user can stretch the button during customization. (Overrides [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|
|[CMFCToolBarDateTimeCtrl::CopyFrom](#copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Reserved for future use.|
|[CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)|Copies text from the toolbar button to a menu.|
|`CMFCToolBarDateTimeCtrl::CreateObject`|Used by the framework to create a dynamic instance of this class type.|
|[CMFCToolBarDateTimeCtrl::GetByCmd](#getbycmd)|Retrieves the first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID.|
|[CMFCToolBarDateTimeCtrl::GetDateTimeCtrl](#getdatetimectrl)|Returns a pointer to the date and time picker control.|
|[CMFCToolBarDateTimeCtrl::GetHwnd](#gethwnd)|Retrieves the window handle that is associated with the toolbar button. (Overrides [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCToolBarDateTimeCtrl::GetTime](#gettime)|Gets the selected time from a date and time picker control and puts it in a specified [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure.|
|[CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall)|Returns the selected time from the time picker control button that has a specified command ID.|
|[CMFCToolBarDateTimeCtrl::HaveHotBorder](#havehotborder)|Determines whether a border of the button is displayed when a user selects the button. (Overrides [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|
|[CMFCToolBarDateTimeCtrl::NotifyCommand](#notifycommand)|Specifies whether the button processes the [WM_COMMAND](/windows/win32/menurc/wm-command) message. (Overrides [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).)|
|[CMFCToolBarDateTimeCtrl::OnAddToCustomizePage](#onaddtocustomizepage)|Called by the framework when the button is added to a **Customize** dialog box. (Overrides [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|
|[CMFCToolBarDateTimeCtrl::OnChangeParentWnd](#onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|
|[CMFCToolBarDateTimeCtrl::OnClick](#onclick)|Called by the framework when the user clicks the control. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|
|[CMFCToolBarDateTimeCtrl::OnCtlColor](#onctlcolor)|Called by the framework when the parent toolbar handles a WM_CTLCOLOR message. (Overrides [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).)|
|`CMFCToolBarDateTimeCtrl::OnDraw`|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|
|[CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged](#onglobalfontschanged)|Called by the framework when the global font has changed. (Overrides [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|
|[CMFCToolBarDateTimeCtrl::OnMove](#onmove)|Called by the framework when the parent toolbar moves. (Overrides [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|
|[CMFCToolBarDateTimeCtrl::OnShow](#onshow)|Called by the framework when the button becomes visible or invisible. (Overrides [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|
|`CMFCToolBarDateTimeCtrl::OnSize`|Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size. (Overrides [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|
|[CMFCToolBarDateTimeCtrl::OnUpdateToolTip](#onupdatetooltip)|Called by the framework when the parent toolbar updates its tooltip text. (Overrides [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).)|
|`CMFCToolBarDateTimeCtrl::Serialize`|Reads this object from an archive or writes it to an archive, (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|
|`CMFCToolBarDateTimeCtrl::SetStyle`|Sets the style of the toolbar button. (Overrides [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).)|
|[CMFCToolBarDateTimeCtrl::SetTime](#settime)|Sets the time and date in the time picker control.|
|[CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall)|Sets the time and date in all instances of the time picker control that have a specified command ID.|

## Remarks

For an example of how to use a date and time picker control, see the ToolbarDateTimePicker sample project. For information about how to add control buttons to toolbars, see [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)

[CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md)

## Requirements

**Header:** afxtoolbardatetimectrl.h

## <a name="canbestretched"></a> CMFCToolBarDateTimeCtrl::CanBeStretched

Specifies whether a user can stretch the button during customization.

```
virtual BOOL CanBeStretched() const;
```

### Return Value

This method returns TRUE.

### Remarks

By default, the framework does not allow the user to stretch a toolbar button during customization. This method extends the base class implementation ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) by allowing the user to stretch a date and time toolbar button during customization.

## <a name="cmfctoolbardatetimectrl"></a> CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl

Creates and initializes a [CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md) object.

```
CMFCToolBarDateTimeCtrl(
    UINT uiID,
    int iImage,
    DWORD dwStyle=0,
    int iWidth=0);
```

### Parameters

*uiID*<br/>
[in] The control ID.

*iImage*<br/>
[in] The index of the image in the toolbar's `CMFCToolBarImages` object.

*dwStyle*<br/>
[in] The style of the `CMFCToolBarDateTimeCtrlImpl` window that is created when a user clicks the button.

*iWidth*<br/>
[in] The width of the control, in pixels.

### Remarks

This object is initialized to the system date and time. The window style of the internal `CMFCToolBarDateTimeCtrlImpl` object includes the *dwStyle* parameter and the WS_CHILD and WS_VISIBLE styles. You cannot change these styles by using `CMFCToolBarDateTimeCtrl::SetStyle`. Use `SetStyle` to change the style of the `CMFCToolBarDateTimeCtrl` control.

### Example

The following example demonstrates how to construct an object of the `CMFCToolBarDateTimeCtrl` class. This code snippet is part of the [Toolbar Date Time Picker sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_ToolbarDateTimePicker#1](../../mfc/reference/codesnippet/cpp/cmfctoolbardatetimectrl-class_1.cpp)]

## <a name="copyfrom"></a> CMFCToolBarDateTimeCtrl::CopyFrom

Copies the properties of another toolbar button to the current button.

```
virtual void CopyFrom(const CMFCToolBarButton& src);
```

### Parameters

*src*<br/>
[in] A reference to the source button from which to copy.

### Remarks

Call this method to copy another toolbar button to this toolbar button. *src* must be of type `CMFCToolBarDateTimeCtrl`.

## <a name="exporttomenubutton"></a> CMFCToolBarDateTimeCtrl::ExportToMenuButton

Copies text from the toolbar button to a menu.

```
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;
```

### Parameters

*menuButton*<br/>
[in] A reference to the target menu button.

### Return Value

This method returns TRUE.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) by loading the string resource that is associated with the command ID of the control. For more information about string resources, see [CStringT::LoadString](../../atl-mfc-shared/reference/cstringt-class.md#loadstring).

## <a name="getbycmd"></a> CMFCToolBarDateTimeCtrl::GetByCmd

Retrieves the first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID.

```
static CMFCToolBarDateTimeCtrl* __stdcall GetByCmd(UINT uiCmd);
```

### Parameters

*uiCmd*<br/>
[in] The command ID of the button to retrieve.

### Return Value

The first `CMFCToolBarDateTimeCtrl` object in the application that has the specified command ID, or NULL if no `CMFCToolBarDateTimeCtrl` objects have the specified command ID.

### Remarks

This shared utility method is used by methods such as [CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall) and [CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall) to set or get the time and date of all instances of the time picker control that have a specified command ID.

## <a name="getdatetimectrl"></a> CMFCToolBarDateTimeCtrl::GetDateTimeCtrl

Returns a pointer to the date and time picker control.

```
CDateTimeCtrl* GetDateTimeCtrl() const;
```

### Return Value

A pointer to date and time picker control; or NULL if the control does not exist.

### Remarks

The `CMFCToolBarDateTimeCtrl` class initializes the `m_pWndDateTime` data member when you insert a `CMFCToolBarDateTimeCtrl` object into a toolbar.

## <a name="gethwnd"></a> CMFCToolBarDateTimeCtrl::GetHwnd

Retrieves the window handle that is associated with the toolbar button.

```
virtual HWND GetHwnd();
```

### Return Value

The window handle that is associated with the date and time toolbar button.

### Remarks

This method overrides the [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) method.

## <a name="gettime"></a> CMFCToolBarDateTimeCtrl::GetTime

Gets the selected time from the associated date and time picker control and puts it in a specified [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure

```
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;
```

### Parameters

*timeDest*<br/>
[out] In the first overload, a [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) object that will receive the system time information. In the second overload, a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object that will receive the system time information.

*pTimeDest*<br/>
[out] A pointer to the [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure to receive the system time information. Must not be NULL.

### Return Value

In the first overload, nonzero if the time is successfully written to the [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) object; otherwise 0. In the second and third overloads, the return value is a DWORD that is equal to the dwFlag member that was set in the [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) structure.

### Remarks

The method sets the [NMDATETIMECHANGE](/windows/win32/api/commctrl/ns-commctrl-nmdatetimechange) structure member dwFlags to indicate whether the date and time picker is set to a date and time. If the value equals GDT_NONE, the control is set to `no date` status, and uses the DTS_SHOWNONE style. If the value returned equals GDT_VALID, the system time is successfully stored in the destination location.

## <a name="gettimeall"></a> CMFCToolBarDateTimeCtrl::GetTimeAll

Returns the time selected by the user from the time picker control button that has a specified command ID.

```
static BOOL GetTimeAll(
    UINT uiCmd,
    COleDateTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,
    CTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,
    LPSYSTEMTIME pTimeDest);
```

### Parameters

*uiCmd*<br/>
[in] Specifies a toolbar button's command ID.

*timeDest*<br/>
[out] In the first overload, a [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) object that will receive the system time information. In the second overload, a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object that will receive the system time information.

*pTimeDest*<br/>
[out] A pointer to the [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure to receive the system time information. Must not be NULL.

### Return Value

If the framework cannot find a toolbar button that matches the command ID *uiCmd*, the return value is zero in the first overload, and GDT_NONE in the other overloads. If the toolbar button is found, the return value is the same as the return value from a call to [CMFCToolBarDateTimeCtrl::GetTime](#gettime) on that button. A return value of zero or GDT_NONE can occur when the button is found, which indicates that the call to `GetTime` did not return a valid date for some other reason.

### Remarks

This method looks for a toolbar button that has the specified command ID and calls [CMFCToolBarDateTimeCtrl::GetTime](#gettime) method on that button.

## <a name="havehotborder"></a> CMFCToolBarDateTimeCtrl::HaveHotBorder

Determines whether a border of the button is displayed when a user selects the button.

```
virtual BOOL HaveHotBorder() const;
```

### Return Value

Nonzero if a button displays its border when selected; otherwise 0.

### Remarks

This method returns a nonzero value if the control is visible.

## <a name="notifycommand"></a> CMFCToolBarDateTimeCtrl::NotifyCommand

Specifies whether the button processes the [WM_COMMAND](/windows/win32/menurc/wm-command) message.

```
virtual BOOL NotifyCommand(int iNotifyCode);
```

### Parameters

*iNotifyCode*<br/>
[in] The notification message that is associated with the command.

### Return Value

TRUE if the button processes the WM_COMMAND message, or FALSE to indicate that the message should be handled by the parent toolbar.

### Remarks

The framework calls this method when it is about to send a [WM_COMMAND](/windows/win32/menurc/wm-command) message to the parent window.

This method extends the base class implementation ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) by processing the [DTN_DATETIMECHANGE](/windows/win32/Controls/dtn-datetimechange) notification. It updates the internal time status and updates the time property of all `CMFCToolBarDateTimeCtrl` objects with the same command ID.

## <a name="onaddtocustomizepage"></a> CMFCToolBarDateTimeCtrl::OnAddToCustomizePage

Called by the framework when the button is added to a **Customize** dialog box.

```
virtual void OnAddToCustomizePage();
```

### Remarks

This method extends the base class implementation, [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage), by copying the properties from the first date and time control in any toolbar that has the same command ID as this object. This method does nothing if no toolbar has a date and time control that has the same command ID as this object.

For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).

## <a name="onchangeparentwnd"></a> CMFCToolBarDateTimeCtrl::OnChangeParentWnd

Called by the framework when the button is inserted into a new toolbar.

```
virtual void OnChangeParentWnd(CWnd* pWndParent);
```

### Parameters

*pWndParent*<br/>
[in] The new parent window.

### Remarks

This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) by recreating the internal `CMFCToolBarDateTimeCtrlImpl` object.

## <a name="onclick"></a> CMFCToolBarDateTimeCtrl::OnClick

Called by the framework when the user clicks the control.

```
virtual BOOL OnClick(
    CWnd* pWnd,
    BOOL bDelay = TRUE);
```

### Parameters

*pWnd*<br/>
[in] Unused.

*bDelay*<br/>
[in] Unused.

### Return Value

Nonzero if the button processes the click message; otherwise 0.

### Remarks

This method overrides the base class implementation, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), by returning a nonzero value if the internal `CMFCToolBarDateTimeCtrlImpl` object is visible.

## <a name="onctlcolor"></a> CMFCToolBarDateTimeCtrl::OnCtlColor

Called by the framework when the parent toolbar handles a WM_CTLCOLOR message.

```
virtual HBRUSH OnCtlColor(
    CDC* pDC,
    UINT nCtlColor);
```

### Parameters

*pDC*<br/>
[in] The device context that displays the button.

*nCtlColor*<br/>
[in] Unused.

### Return Value

A handle to the global brush that the framework uses to paint the background of the button.

### Remarks

This method overrides the base class implementation, [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor), by setting the text and background colors of the provided device context to the global text and background colors, respectively.

For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="onglobalfontschanged"></a> CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged

Called by the framework when the global font has changed.

```
virtual void OnGlobalFontsChanged();
```

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) by changing the font of the control to that of the global font.

For more information about global options that are available to your application, see [AFX_GLOBAL_DATA Structure](../../mfc/reference/afx-global-data-structure.md).

## <a name="onmove"></a> CMFCToolBarDateTimeCtrl::OnMove

Called by the framework when the parent toolbar moves.

```
virtual void OnMove();
```

### Remarks

This method overrides the default class implementation ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)) by updating the position of the internal `CMFCToolBarDateTimeCtrlImpl` object.

## <a name="onshow"></a> CMFCToolBarDateTimeCtrl::OnShow

Called by the framework when the button becomes visible or invisible.

```
virtual void OnShow(BOOL bShow);
```

### Parameters

*bShow*<br/>
[in] Specifies whether the button is visible. If this parameter is TRUE, the button is visible. Otherwise, the button is not visible.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) by displaying the button if *bShow* is TRUE. Otherwise, this method hides the button.

## <a name="onsize"></a> CMFCToolBarDateTimeCtrl::OnSize

Called by the framework when the parent toolbar changes its size or position and this change causes the button to change size.

```
virtual void OnSize(int iSize);
```

### Parameters

*iSize*<br/>
[in] The new width of the button, in pixels.

### Remarks

This method overrides the default class implementation ( [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize)) by updating the size and position of the internal `CMFCToolBarDateTimeCtrlImpl` object.

## <a name="onupdatetooltip"></a> CMFCToolBarDateTimeCtrl::OnUpdateToolTip

Called by the framework when the parent toolbar updates its tooltip text.

```
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,
    int iButtonIndex,
    CToolTipCtrl& wndToolTip,
    CString& str);
```

### Parameters

*pWndParent*<br/>
[in] The parent window.

*iButtonIndex*<br/>
[in] The zero-based index of the button in the parent button collection.

*wndToolTip*<br/>
[in] The control that displays the tooltip text.

*str*<br/>
[out] A `CString` object that receives the updated tooltip text.

### Return Value

Nonzero if the method updates the tooltip text; otherwise 0.

### Remarks

This method extends the base class implementation ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) by displaying the tooltip text that is associated with the button. If the button is not docked horizontally, this method does nothing and returns FALSE.

## <a name="settime"></a> CMFCToolBarDateTimeCtrl::SetTime

Sets the time and date in the time picker control.

```
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* timeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew=NULL);
```

### Parameters

*timeNew*<br/>
[in] In the first version, a reference to a [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) object that contains the time to which the control will be set. In the second version, a pointer to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object that contains the time to which the control will be set.

*pTimeNew*<br/>
[in] A pointer to the [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that contains the time to which the control will be set.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Sets the time in a date and time picker control by calling [CDateTimeCtrl::SetTime](../../mfc/reference/cdatetimectrl-class.md#settime).

## <a name="settimeall"></a> CMFCToolBarDateTimeCtrl::SetTimeAll

Sets the time and date in all instances of the time picker control that have a specified command ID.

```
static BOOL SetTimeAll(
    UINT uiCmd,
    const COleDateTime& timeNew);

static BOOL SetTimeAll(
    UINT uiCmd,
    const CTime* pTimeNew);

static BOOL SetTimeAll(
    UINT uiCmd,
    LPSYSTEMTIME pTimeNew=NULL);
```

### Parameters

*uiCmd*<br/>
[in] Specifies a toolbar button's command ID.

*timeNew*<br/>
[in] In the first version, a [COleDateTime Class](../../atl-mfc-shared/reference/coledatetime-class.md) object that contains the time to which the control will be set. In the second version, a pointer to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object that contains the time to which the control will be set.

*pTimeNew*<br/>
[in] A pointer to the [SYSTEMTIME](/windows/win32/api/minwinbase/ns-minwinbase-systemtime) structure that contains the time to which the control will be set.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Looks for a toolbar button with the specified command ID and sets the time in a date and time picker control by calling [CMFCToolBarDateTimeCtrl::SetTime](#settime).

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)<br/>
[Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)
