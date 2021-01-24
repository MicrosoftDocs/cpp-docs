---
description: "Learn more about: CPropertySheet Class"
title: "CPropertySheet Class"
ms.date: "11/04/2016"
f1_keywords: ["CPropertySheet", "AFXDLGS/CPropertySheet", "AFXDLGS/CPropertySheet::CPropertySheet", "AFXDLGS/CPropertySheet::AddPage", "AFXDLGS/CPropertySheet::Construct", "AFXDLGS/CPropertySheet::Create", "AFXDLGS/CPropertySheet::DoModal", "AFXDLGS/CPropertySheet::EnableStackedTabs", "AFXDLGS/CPropertySheet::EndDialog", "AFXDLGS/CPropertySheet::GetActiveIndex", "AFXDLGS/CPropertySheet::GetActivePage", "AFXDLGS/CPropertySheet::GetPage", "AFXDLGS/CPropertySheet::GetPageCount", "AFXDLGS/CPropertySheet::GetPageIndex", "AFXDLGS/CPropertySheet::GetTabControl", "AFXDLGS/CPropertySheet::MapDialogRect", "AFXDLGS/CPropertySheet::OnInitDialog", "AFXDLGS/CPropertySheet::PressButton", "AFXDLGS/CPropertySheet::RemovePage", "AFXDLGS/CPropertySheet::SetActivePage", "AFXDLGS/CPropertySheet::SetFinishText", "AFXDLGS/CPropertySheet::SetTitle", "AFXDLGS/CPropertySheet::SetWizardButtons", "AFXDLGS/CPropertySheet::SetWizardMode", "AFXDLGS/CPropertySheet::m_psh"]
helpviewer_keywords: ["CPropertySheet [MFC], CPropertySheet", "CPropertySheet [MFC], AddPage", "CPropertySheet [MFC], Construct", "CPropertySheet [MFC], Create", "CPropertySheet [MFC], DoModal", "CPropertySheet [MFC], EnableStackedTabs", "CPropertySheet [MFC], EndDialog", "CPropertySheet [MFC], GetActiveIndex", "CPropertySheet [MFC], GetActivePage", "CPropertySheet [MFC], GetPage", "CPropertySheet [MFC], GetPageCount", "CPropertySheet [MFC], GetPageIndex", "CPropertySheet [MFC], GetTabControl", "CPropertySheet [MFC], MapDialogRect", "CPropertySheet [MFC], OnInitDialog", "CPropertySheet [MFC], PressButton", "CPropertySheet [MFC], RemovePage", "CPropertySheet [MFC], SetActivePage", "CPropertySheet [MFC], SetFinishText", "CPropertySheet [MFC], SetTitle", "CPropertySheet [MFC], SetWizardButtons", "CPropertySheet [MFC], SetWizardMode", "CPropertySheet [MFC], m_psh"]
ms.assetid: 8461ccff-d14f-46e0-a746-42ad642ef94e
---
# CPropertySheet Class

Represents property sheets, also known as tab dialog boxes.

## Syntax

```
class CPropertySheet : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPropertySheet::CPropertySheet](#cpropertysheet)|Constructs a `CPropertySheet` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPropertySheet::AddPage](#addpage)|Adds a page to the property sheet.|
|[CPropertySheet::Construct](#construct)|Constructs a `CPropertySheet` object.|
|[CPropertySheet::Create](#create)|Displays a modeless property sheet.|
|[CPropertySheet::DoModal](#domodal)|Displays a modal property sheet.|
|[CPropertySheet::EnableStackedTabs](#enablestackedtabs)|Indicates whether the property sheet uses stacked or scrolling tabs.|
|[CPropertySheet::EndDialog](#enddialog)|Terminates the property sheet.|
|[CPropertySheet::GetActiveIndex](#getactiveindex)|Retrieves the index of the active page of the property sheet.|
|[CPropertySheet::GetActivePage](#getactivepage)|Returns the active page object.|
|[CPropertySheet::GetPage](#getpage)|Retrieves a pointer to the specified page.|
|[CPropertySheet::GetPageCount](#getpagecount)|Retrieves the number of pages in the property sheet.|
|[CPropertySheet::GetPageIndex](#getpageindex)|Retrieves the index of the specified page of the property sheet.|
|[CPropertySheet::GetTabControl](#gettabcontrol)|Retrieves a pointer to a tab control.|
|[CPropertySheet::MapDialogRect](#mapdialogrect)|Converts the dialog-box units of a rectangle to screen units.|
|[CPropertySheet::OnInitDialog](#oninitdialog)|Override to augment property sheet initialization.|
|[CPropertySheet::PressButton](#pressbutton)|Simulates the choice of the specified button in a property sheet.|
|[CPropertySheet::RemovePage](#removepage)|Removes a page from the property sheet.|
|[CPropertySheet::SetActivePage](#setactivepage)|Programmatically sets the active page object.|
|[CPropertySheet::SetFinishText](#setfinishtext)|Sets the text for the Finish button.|
|[CPropertySheet::SetTitle](#settitle)|Sets the caption of the property sheet.|
|[CPropertySheet::SetWizardButtons](#setwizardbuttons)|Enables the wizard buttons.|
|[CPropertySheet::SetWizardMode](#setwizardmode)|Enables the wizard mode.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CPropertySheet::m_psh](#m_psh)|The Windows [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) structure. Provides access to basic property sheet parameters.|

## Remarks

A property sheet consists of a `CPropertySheet` object and one or more [CPropertyPage](../../mfc/reference/cpropertypage-class.md) objects. The framework displays a property sheet as a window with a set of tab indices and an area that contains the currently selected page. The user navigates to a specific page by using the appropriate tab.

`CPropertySheet` provides support for the expanded [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2) structure introduced in Windows 98 and Windows NT 2000. The structure contains additional flags and members that support using a "watermark" background bitmap.

To display these new images automatically in your property sheet object, pass valid values for the bitmap and palette images in the call to [CPropertySheet::Construct](#construct) or [CPropertySheet::CPropertySheet](#cpropertysheet).

Even though `CPropertySheet` is not derived from [CDialog](../../mfc/reference/cdialog-class.md), managing a `CPropertySheet` object is like managing a `CDialog` object. For example, creation of a property sheet requires two-part construction: call the constructor, and then call [DoModal](#domodal) for a modal property sheet or [Create](#create) for a modeless property sheet. `CPropertySheet` has two types of constructors: [CPropertySheet::Construct](#construct) and [CPropertySheet::CPropertySheet](#cpropertysheet).

When you construct a `CPropertySheet` object, some [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) can cause a first-chance exception to occur. This results from the system trying to change the style of the property sheet before the sheet is created. To avoid this exception, make sure that you set the following styles when you create your `CPropertySheet`:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

The following styles are optional, and will not cause the first-chance exception:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Any other `Window Styles` are forbidden and you should not enable them.

Exchanging data between a `CPropertySheet` object and an external object is similar to exchanging data with a `CDialog` object. The important difference is that the settings of a property sheet are typically member variables of the `CPropertyPage` objects rather than of the `CPropertySheet` object itself.

You can create a type of tab dialog box called a wizard, which consists of a property sheet with a sequence of property pages that guide the user through the steps of an operation, such as setting up a device or creating a newsletter. In a wizard-type tab dialog box, the property pages do not have tabs, and only one property page is visible at a time. Also, instead of having **OK** and **Apply Now** buttons, a wizard-type tab dialog box has a **Back** button, a **Next** or **Finish** button, a **Cancel** button, and a **Help** button.

To create a wizard-type dialog box, follow the same steps that you would follow to create a standard property sheet, but call [SetWizardMode](#setwizardmode) before you call [DoModal](#domodal). To enable the wizard buttons, call [SetWizardButtons](#setwizardbuttons), using flags to customize their function and appearance. To enable the **Finish** button, call [SetFinishText](#setfinishtext) after the user has taken action on the last page of the wizard.

For more information about how to use `CPropertySheet` objects, see the article [Property Sheets and Property Pages](../../mfc/property-sheets-and-property-pages-in-mfc.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CPropertySheet`

## Requirements

**Header:** afxdlgs.h

## <a name="addpage"></a> CPropertySheet::AddPage

Adds the supplied page with the rightmost tab in the property sheet.

```cpp
void AddPage(CPropertyPage* pPage);
```

### Parameters

*pPage*<br/>
Points to the page to be added to the property sheet. Cannot be NULL.

### Remarks

Add pages to the property sheet in the left-to-right order you want them to appear.

`AddPage` adds the [CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage) object to the `CPropertySheet` object's list of pages but does not actually create the window for the page. The framework postpones creation of the window for the page until the user selects that page.

When you add a property page using `AddPage`, the `CPropertySheet` is the parent of the `CPropertyPage`. To gain access to the property sheet from the property page, call [CWnd::GetParent](../../mfc/reference/cwnd-class.md#getparent).

It is not necessary to wait until creation of the property sheet window to call `AddPage`. Typically, you will call `AddPage` before calling [DoModal](#domodal) or [Create](#create).

If you call `AddPage` after displaying the property page, the tab row will reflect the newly added page.

### Example

[!code-cpp[NVC_MFCDocView#129](../../mfc/codesnippet/cpp/cpropertysheet-class_1.cpp)]

## <a name="construct"></a> CPropertySheet::Construct

Constructs a `CPropertySheet` object.

```cpp
void Construct(
    UINT nIDCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

void Construct(
    LPCTSTR pszCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

void Construct(
    UINT nIDCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);

void Construct(
    LPCTSTR pszCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);
```

### Parameters

*nIDCaption*<br/>
ID of the caption to be used for the property sheet.

*pParentWnd*<br/>
Pointer to the parent window of the property sheet. If NULL, the parent window will be the main window of the application.

*iSelectPage*<br/>
The index of the page that will initially be on top. Default is the first page added to the sheet.

*pszCaption*<br/>
Pointer to a string containing the caption to be used for the property sheet. Cannot be NULL.

*hbmWatermark*<br/>
Handle to the watermark bitmap of the property page.

*hpalWatermark*<br/>
Handle to the palette of the watermark bitmap and/or header bitmap.

*hbmHeader*<br/>
Handle to the header bitmap of the property page.

### Remarks

Call this member function if one of the class constructors has not already been called. For example, call `Construct` when you declare or allocate arrays of `CPropertySheet` objects. In the case of arrays, you must call `Construct` for each member in the array.

To display the property sheet, call [DoModal](#domodal) or [Create](#create). The string contained in the first parameter will be placed in the caption bar for the property sheet.

You can display watermark and/or header images automatically if you use the third or fourth prototypes of `Construct`, listed above, and you pass valid values for the *hbmWatermark*, *hpalWatermark*, and/or *hbmHeader* parameters.

### Example

The following example demonstrates under what circumstances you would call `Construct`.

[!code-cpp[NVC_MFCDocView#130](../../mfc/codesnippet/cpp/cpropertysheet-class_2.cpp)]

## <a name="cpropertysheet"></a> CPropertySheet::CPropertySheet

Constructs a `CPropertySheet` object.

```
CPropertySheet();

explicit CPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

explicit CPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd = NULL,
    UINT iSelectPage = 0);

CPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);

CPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd,
    UINT iSelectPage,
    HBITMAP hbmWatermark,
    HPALETTE hpalWatermark = NULL,
    HBITMAP hbmHeader = NULL);
```

### Parameters

*nIDCaption*<br/>
ID of the caption to be used for the property sheet.

*pParentWnd*<br/>
Points to the parent window of the property sheet. If NULL, the parent window will be the main window of the application.

*iSelectPage*<br/>
The index of the page that will initially be on top. Default is the first page added to the sheet.

*pszCaption*<br/>
Points to a string containing the caption to be used for the property sheet. Cannot be NULL.

*hbmWatermark*<br/>
A handle to the background bitmap of the property sheet.

*hpalWatermark*<br/>
A handle to the palette of the watermark bitmap and/or header bitmap.

*hbmHeader*<br/>
A handle to the header bitmap of the property page.

### Remarks

To display the property sheet, call [DoModal](#domodal) or [Create](#create). The string contained in the first parameter will be placed in the caption bar for the property sheet.

If you have multiple parameters (for example, if you are using an array), use [Construct](#construct) instead of `CPropertySheet`.

You can display watermark and/or header images automatically if you use the third or fourth prototypes of `CPropertySheet`, above, and you pass valid values for the *hbmWatermark*, *hpalWatermark*, and/or *hbmHeader* parameters.

### Example

[!code-cpp[NVC_MFCDocView#131](../../mfc/codesnippet/cpp/cpropertysheet-class_3.cpp)]

## <a name="create"></a> CPropertySheet::Create

Displays a modeless property sheet.

```
virtual BOOL Create(CWnd* pParentWnd = NULL,
    DWORD dwStyle = (DWORD)-1,
    DWORD dwExStyle = 0);
```

### Parameters

*pParentWnd*<br/>
Points to parent window. If NULL, parent is the desktop.

*dwStyle*<br/>
Window styles for property sheet. For a complete list of available styles, see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles).

*dwExStyle*<br/>
Extended window styles for property sheet. For a complete list of available styles, see [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles)

### Return Value

Nonzero if the property sheet is created successfully; otherwise 0.

### Remarks

The call to `Create` can be inside the constructor, or you can call it after the constructor is invoked.

The default style, expressed by passing -1 as *dwStyle*, is actually WS_SYSMENU&#124;WS_POPUP&#124;WS_CAPTION&#124;DS_MODALFRAME&#124;DS_CONTEXTHELP&#124;WS_VISIBLE. The default extended window style, expressed by passing 0 as *dwExStyle*, is actually WS_EX_DLGMODALFRAME.

The `Create` member function returns immediately after creating the property sheet. To destroy the property sheet, call [CWnd::DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow).

Modeless property sheets displayed with a call to `Create` do not have OK, Cancel, Apply Now, and Help buttons as modal property sheets do. Desired buttons must be created by the user.

To display a modal property sheet, call [DoModal](#domodal) instead.

### Example

[!code-cpp[NVC_MFCDocView#132](../../mfc/codesnippet/cpp/cpropertysheet-class_4.cpp)]

[!code-cpp[NVC_MFCDocView#133](../../mfc/codesnippet/cpp/cpropertysheet-class_5.cpp)]

## <a name="domodal"></a> CPropertySheet::DoModal

Displays a modal property sheet.

```
virtual INT_PTR DoModal();
```

### Return Value

IDOK or IDCANCEL if the function was successful; otherwise 0 or -1. If the property sheet has been established as a wizard (see [SetWizardMode](#setwizardmode)), `DoModal` returns either ID_WIZFINISH or IDCANCEL.

### Remarks

The return value corresponds to the ID of the control that closed the property sheet. After this function returns, the windows corresponding to the property sheet and all the pages will have been destroyed. The objects themselves will still exist. Typically, you will retrieve data from the [CPropertyPage](../../mfc/reference/cpropertypage-class.md) objects after `DoModal` returns IDOK.

To display a modeless property sheet, call [Create](#create) instead.

When a property page is created from its corresponding dialog resource, it can cause a first-chance exception. This results from the property page changing the style of the dialog resource to the required style before the page is created. Because resources are generally read-only, this causes an exception. The system handles the exception, and makes a copy of the modified resource. The first-chance exception can therefore be ignored.

> [!NOTE]
> This exception must be handled by the operating system if you are compiling with the asynchronous exception handling model. For more information about exception handling models, see [/EH (Exception Handling Model)](../../build/reference/eh-exception-handling-model.md). In this case, do not wrap calls to `CPropertySheet::DoModal` with a C++ try-catch block in which the catch handles all exceptions, for example, `catch (...)`. This block would handle the exception intended for the operating system, and cause unpredictable behavior. However, you can safely use C++ exception handling with specific exception types or structured exception handling where the Access Violation exception is passed through to the operating system.

To avoid generating this first-chance exception, you can manually guarantee that the property sheet has the correct [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles). You need to set the following styles for a property sheet:

- DS_3DLOOK

- DS_CONTROL

- WS_CHILD

- WS_TABSTOP

You can use the following optional styles without causing a first-chance exception:

- DS_SHELLFONT

- DS_LOCALEDIT

- WS_CLIPCHILDREN

Disable all other Windows styles because they are not compatible with property sheets. This advice does not apply to extended styles. Setting these standard styles appropriately will guarantee that the property sheet does not have to be modified and will avoid generating the first-chance exception.

### Example

See the example for [CPropertySheet::AddPage](#addpage).

## <a name="enablestackedtabs"></a> CPropertySheet::EnableStackedTabs

Indicates whether to stack rows of tabs in a property sheet.

```cpp
void EnableStackedTabs(BOOL bStacked);
```

### Parameters

*bStacked*<br/>
Indicates whether stacked tabs are enabled in the property sheet. Disable stacked rows of tags by setting *bStacked* to FALSE.

### Remarks

By default, if a property sheet has more tabs than will fit in a single row in the width of the property sheet, the tabs will stack in multiple rows. To use scrolling tabs instead of stacking tabs, call `EnableStackedTabs` with *bStacked* set to FALSE before calling [DoModal](#domodal) or [Create](#create).

You must call `EnableStackedTabs` when you create a modal or a modeless property sheet. To incorporate this style in a `CPropertySheet`-derived class, write a message handler for WM_CREATE. In the overridden version of [CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate), call `EnableStackedTabs( FALSE )` before calling the base class implementation.

### Example

[!code-cpp[NVC_MFCDocView#134](../../mfc/codesnippet/cpp/cpropertysheet-class_6.cpp)]

## <a name="enddialog"></a> CPropertySheet::EndDialog

Terminates the property sheet.

```cpp
void EndDialog(int nEndID);
```

### Parameters

*nEndID*<br/>
Identifier to be used as return value of the property sheet.

### Remarks

This member function is called by the framework when the OK, Cancel, or Close button is pressed. Call this member function if an event occurs that should close the property sheet.

This member function is only used with a modal dialog box.

### Example

See the example for [CPropertySheet::PressButton](#pressbutton).

## <a name="getactiveindex"></a> CPropertySheet::GetActiveIndex

Gets the index number of the property sheet window's active page and then uses the returned index number as the parameter for `GetPage`.

```
int GetActiveIndex() const;
```

### Return Value

The index number of the active page.

### Example

See the example for [CPropertySheet::GetActivePage](#getactivepage).

## <a name="getactivepage"></a> CPropertySheet::GetActivePage

Retrieves the property sheet window's active page.

```
CPropertyPage* GetActivePage() const;
```

### Return Value

The pointer to the active page.

### Remarks

Use this member function to perform some action on the active page.

### Example

[!code-cpp[NVC_MFCDocView#135](../../mfc/codesnippet/cpp/cpropertysheet-class_7.cpp)]

## <a name="getpage"></a> CPropertySheet::GetPage

Returns a pointer to the specified page in this property sheet.

```
CPropertyPage* GetPage(int nPage) const;
```

### Parameters

*nPage*<br/>
Index of the desired page, starting at 0. Must be between 0 and one less than the number of pages in the property sheet, inclusive.

### Return Value

The pointer to the page corresponding to the *nPage* parameter.

### Example

See the example for [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="getpagecount"></a> CPropertySheet::GetPageCount

Determines the number of pages currently in the property sheet.

```
int GetPageCount() const;
```

### Return Value

The number of pages in the property sheet.

### Example

See the example for [CPropertyPage::OnWizardFinish](../../mfc/reference/cpropertypage-class.md#onwizardfinish).

## <a name="getpageindex"></a> CPropertySheet::GetPageIndex

Retrieves the index number of the specified page in the property sheet.

```
int GetPageIndex(CPropertyPage* pPage);
```

### Parameters

*pPage*<br/>
Points to the page with the index to be found. Cannot be NULL.

### Return Value

The index number of a page.

### Remarks

For example, you would use `GetPageIndex` to get the page index in order to use [SetActivePage](#setactivepage) or [GetPage](#getpage).

### Example

See the example for [CPropertySheet::GetActivePage](#getactivepage).

## <a name="gettabcontrol"></a> CPropertySheet::GetTabControl

Retrieves a pointer to a tab control to do something specific to the tab control (that is, to use any of the APIs in [CTabCtrl](../../mfc/reference/ctabctrl-class.md)).

```
CTabCtrl* GetTabControl() const;
```

### Return Value

A pointer to a tab control.

### Remarks

For example, call this member function if you want to add bitmaps to each of the tabs during initialization.

### Example

[!code-cpp[NVC_MFCDocView#136](../../mfc/codesnippet/cpp/cpropertysheet-class_8.cpp)]

## <a name="m_psh"></a> CPropertySheet::m_psh

A structure whose members store the characteristics of [PROPSHEETHEADER](/windows/win32/api/prsht/ns-prsht-propsheetheadera_v2).

### Remarks

Use this structure to initialize the appearance of the property sheet after it is constructed but before it is displayed with the [DoModal](#domodal) member function. For example, set the *dwSize* member of `m_psh` to the size you want the property sheet to have.

For more information on this structure, including a listing of its members, see PROPSHEETHEADER in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#143](../../mfc/codesnippet/cpp/cpropertysheet-class_9.cpp)]

## <a name="mapdialogrect"></a> CPropertySheet::MapDialogRect

Converts the dialog-box units of a rectangle to screen units.

```cpp
void MapDialogRect(LPRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the dialog-box coordinates to be converted.

### Remarks

Dialog-box units are stated in terms of the current dialog-box base unit derived from the average width and height of characters in the font used for dialog-box text. One horizontal unit is one-fourth of the dialog-box base-width unit, and one vertical unit is one-eighth of the dialog-box base height unit.

The [GetDialogBaseUnits](/windows/win32/api/winuser/nf-winuser-getdialogbaseunits) Windows function returns size information for the system font, but you can specify a different font for each property sheet if you use the DS_SETFONT style in the resource-definition file. The [MapDialogRect](/windows/win32/api/winuser/nf-winuser-mapdialogrect) Windows function, described in the Windows SDK, uses the appropriate font for this dialog box.

The `MapDialogRect` member function replaces the dialog-box units in *lpRect* with screen units (pixels) so that the rectangle can be used to create a dialog box or position a control within a box.

## <a name="oninitdialog"></a> CPropertySheet::OnInitDialog

Overrides to augment property sheet initialization.

```
virtual BOOL OnInitDialog();
```

### Return Value

Specifies whether the application has set the input focus to one of the controls in the property sheet. If `OnInitDialog` returns nonzero, Windows sets the input focus to the first control in the property sheet. The application can return 0 only if it has explicitly set the input focus to one of the controls in the property sheet.

### Remarks

This member function is called in response to the WM_INITDIALOG message. This message is sent to the property sheet during the [Create](#create) or [DoModal](#domodal) calls, which occur immediately before the property sheet is displayed.

Override this member function if you need to perform special processing when the property sheet is initialized. In the overridden version, first call the base class `OnInitDialog` but disregard its return value. You will normally return TRUE from your overridden member function.

You do not need a message-map entry for this member function.

## <a name="pressbutton"></a> CPropertySheet::PressButton

Simulates the choice of the specified button in a property sheet.

```cpp
void PressButton(int nButton);
```

### Parameters

*nButton*<br/>
nButton : Identifies the button to be pressed. This parameter can be one of the following values:

- PSBTN_BACK Chooses the Back button.

- PSBTN_NEXT Chooses the Next button.

- PSBTN_FINISH Chooses the Finish button.

- PSBTN_OK Chooses the OK button.

- PSBTN_APPLYNOW Chooses the Apply Now button.

- PSBTN_CANCEL Chooses the Cancel button.

- PSBTN_HELP Chooses the Help button.

### Remarks

See [PSM_PRESSBUTTON](/windows/win32/Controls/psm-pressbutton) for more information about the Windows SDK Pressbutton message.

A call to `PressButton` will not send the [PSN_APPLY](/windows/win32/Controls/psn-apply) notification from a property page to the framework. To send this notification, call [CPropertyPage::OnOK](../../mfc/reference/cpropertypage-class.md#onok).

### Example

[!code-cpp[NVC_MFCDocView#137](../../mfc/codesnippet/cpp/cpropertysheet-class_10.cpp)]

## <a name="removepage"></a> CPropertySheet::RemovePage

Removes a page from the property sheet and destroys the associated window.

```cpp
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### Parameters

*pPage*<br/>
Points to the page to be removed from the property sheet. Cannot be NULL.

*nPage*<br/>
Index of the page to be removed. Must be between 0 and one less than the number of pages in the property sheet, inclusive.

### Remarks

The [CPropertyPage](../../mfc/reference/cpropertypage-class.md) object itself is not destroyed until the owner of the `CPropertySheet` window is closed.

## <a name="setactivepage"></a> CPropertySheet::SetActivePage

Changes the active page.

```
BOOL SetActivePage(int nPage);
BOOL SetActivePage(CPropertyPage* pPage);
```

### Parameters

*nPage*<br/>
Index of the page to set. It must be between 0 and one less than the number of pages in the property sheet, inclusive.

*pPage*<br/>
Points to the page to set in the property sheet. It cannot be NULL.

### Return Value

Nonzero if the property sheet is activated successfully; otherwise 0.

### Remarks

For example, use `SetActivePage` if a user's action on one page should cause another page to become the active page.

### Example

See the example for [CPropertySheet::GetActivePage](#getactivepage).

## <a name="setfinishtext"></a> CPropertySheet::SetFinishText

Sets the text in the Finish command button.

```cpp
void SetFinishText(LPCTSTR lpszText);
```

### Parameters

*lpszText*<br/>
Points to the text to be displayed on the Finish command button.

### Remarks

Call `SetFinishText` to display the text on the Finish command button and hide the Next and Back buttons after the user completes action on the last page of the wizard.

### Example

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="settitle"></a> CPropertySheet::SetTitle

Specifies the property sheet's caption (the text displayed in the title bar of a frame window).

```cpp
void SetTitle(
    LPCTSTR lpszText,
    UINT nStyle = 0);
```

### Parameters

*nStyle*<br/>
Specifies the style of the property sheet title. The style must be specified at 0 or as PSH_PROPTITLE. If the style is set as PSH_PROPTITLE, the word "Properties" appears after the text specified as the caption. For example, calling `SetTitle`("Simple", PSH_PROPTITLE) will result in a property sheet caption of "Simple Properties."

*lpszText*<br/>
Points to the text to be used as the caption in the title bar of the property sheet.

### Remarks

By default, a property sheet uses the caption parameter in the property sheet constructor.

### Example

[!code-cpp[NVC_MFCDocView#139](../../mfc/codesnippet/cpp/cpropertysheet-class_12.cpp)]

## <a name="setwizardbuttons"></a> CPropertySheet::SetWizardButtons

Enables or disables the Back, Next, or Finish button in a wizard property sheet.

```cpp
void SetWizardButtons(DWORD dwFlags);
```

### Parameters

*dwFlags*<br/>
A set of flags that customize the function and appearance of the wizard buttons. This parameter can be a combination of the following values:

- PSWIZB_BACK Back button

- PSWIZB_NEXT Next button

- PSWIZB_FINISH Finish button

- PSWIZB_DISABLEDFINISH Disabled Finish button

### Remarks

Call `SetWizardButtons` only after the dialog is open; you can't call `SetWizardButtons` before you call [DoModal](#domodal). Typically, you should call `SetWizardButtons` from [CPropertyPage::OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).

If you want to change the text on the Finish button or hide the Next and Back buttons once the user has completed the wizard, call [SetFinishText](#setfinishtext). Note that the same button is shared for Finish and Next. You can display a Finish or a Next button at one time, but not both.

### Example

A `CPropertySheet` has three wizard property pages: `CStylePage`, `CColorPage`, and `CShapePage`.  The code fragment below shows how to enable and disable the **Back** and **Next** buttons on the wizard property page.

[!code-cpp[NVC_MFCDocView#140](../../mfc/codesnippet/cpp/cpropertysheet-class_13.cpp)]

[!code-cpp[NVC_MFCDocView#141](../../mfc/codesnippet/cpp/cpropertysheet-class_14.cpp)]

[!code-cpp[NVC_MFCDocView#138](../../mfc/codesnippet/cpp/cpropertysheet-class_11.cpp)]

## <a name="setwizardmode"></a> CPropertySheet::SetWizardMode

Establishes a property page as a wizard.

```cpp
void SetWizardMode();
```

### Remarks

A key characteristic of a wizard property page is that the user navigates using Next or Finish, Back, and Cancel buttons instead of tabs.

Call `SetWizardMode` before calling [DoModal](#domodal). After you call `SetWizardMode`, `DoModal` will return either ID_WIZFINISH (if the user closes with the Finish button) or IDCANCEL.

`SetWizardMode` sets the PSH_WIZARD flag.

### Example

[!code-cpp[NVC_MFCDocView#142](../../mfc/codesnippet/cpp/cpropertysheet-class_15.cpp)]

## See also

[MFC Sample CMNCTRL1](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample CMNCTRL2](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
