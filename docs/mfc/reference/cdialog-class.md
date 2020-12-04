---
description: "Learn more about: CDialog Class"
title: "CDialog Class"
ms.date: "09/07/2019"
f1_keywords: ["CDialog", "AFXWIN/CDialog", "AFXWIN/CDialog::CDialog", "AFXWIN/CDialog::Create", "AFXWIN/CDialog::CreateIndirect", "AFXWIN/CDialog::DoModal", "AFXWIN/CDialog::EndDialog", "AFXWIN/CDialog::GetDefID", "AFXWIN/CDialog::GotoDlgCtrl", "AFXWIN/CDialog::InitModalIndirect", "AFXWIN/CDialog::MapDialogRect", "AFXWIN/CDialog::NextDlgCtrl", "AFXWIN/CDialog::OnInitDialog", "AFXWIN/CDialog::OnSetFont", "AFXWIN/CDialog::PrevDlgCtrl", "AFXWIN/CDialog::SetDefID", "AFXWIN/CDialog::SetHelpID", "AFXWIN/CDialog::OnCancel", "AFXWIN/CDialog::OnOK"]
helpviewer_keywords: ["CDialog [MFC], CDialog", "CDialog [MFC], Create", "CDialog [MFC], CreateIndirect", "CDialog [MFC], DoModal", "CDialog [MFC], EndDialog", "CDialog [MFC], GetDefID", "CDialog [MFC], GotoDlgCtrl", "CDialog [MFC], InitModalIndirect", "CDialog [MFC], MapDialogRect", "CDialog [MFC], NextDlgCtrl", "CDialog [MFC], OnInitDialog", "CDialog [MFC], OnSetFont", "CDialog [MFC], PrevDlgCtrl", "CDialog [MFC], SetDefID", "CDialog [MFC], SetHelpID", "CDialog [MFC], OnCancel", "CDialog [MFC], OnOK"]
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
---
# CDialog Class

The base class used for displaying dialog boxes on the screen.

## Syntax

```
class CDialog : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDialog::CDialog](#cdialog)|Constructs a `CDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDialog::Create](#create)|Initializes the `CDialog` object. Creates a modeless dialog box and attaches it to the `CDialog` object.|
|[CDialog::CreateIndirect](#createindirect)|Creates a modeless dialog box from a dialog-box template in memory (not resource-based).|
|[CDialog::DoModal](#domodal)|Calls a modal dialog box and returns when done.|
|[CDialog::EndDialog](#enddialog)|Closes a modal dialog box.|
|[CDialog::GetDefID](#getdefid)|Gets the ID of the default pushbutton control for a dialog box.|
|[CDialog::GotoDlgCtrl](#gotodlgctrl)|Moves the focus to a specified dialog-box control in the dialog box.|
|[CDialog::InitModalIndirect](#initmodalindirect)|Creates a modal dialog box from a dialog-box template in memory (not resource-based). The parameters are stored until the function `DoModal` is called.|
|[CDialog::MapDialogRect](#mapdialogrect)|Converts the dialog-box units of a rectangle to screen units.|
|[CDialog::NextDlgCtrl](#nextdlgctrl)|Moves the focus to the next dialog-box control in the dialog box.|
|[CDialog::OnInitDialog](#oninitdialog)|Override to augment dialog-box initialization.|
|[CDialog::OnSetFont](#onsetfont)|Override to specify the font that a dialog-box control is to use when it draws text.|
|[CDialog::PrevDlgCtrl](#prevdlgctrl)|Moves the focus to the previous dialog-box control in the dialog box.|
|[CDialog::SetDefID](#setdefid)|Changes the default pushbutton control for a dialog box to a specified pushbutton.|
|[CDialog::SetHelpID](#sethelpid)|Sets a context-sensitive help ID for the dialog box.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CDialog::OnCancel](#oncancel)|Override to perform the Cancel button or ESC key action. The default closes the dialog box and `DoModal` returns IDCANCEL.|
|[CDialog::OnOK](#onok)|Override to perform the OK button action in a modal dialog box. The default closes the dialog box and `DoModal` returns IDOK.|

## Remarks

Dialog boxes are of two types: modal and modeless. A modal dialog box must be closed by the user before the application continues. A modeless dialog box allows the user to display the dialog box and return to another task without canceling or removing the dialog box.

A `CDialog` object is a combination of a dialog template and a `CDialog`-derived class. Use the dialog editor to create the dialog template and store it in a resource, then use the Add Class wizard to create a class derived from `CDialog`.

A dialog box, like any other window, receives messages from Windows. In a dialog box, you are particularly interested in handling notification messages from the dialog box's controls since that is how the user interacts with your dialog box. Use the [Class Wizard](mfc-class-wizard.md) to select which messages you wish to handle and it will add the appropriate message-map entries and message-handler member functions to the class for you. You only need to write application-specific code in the handler member functions.

If you prefer, you can always write message-map entries and member functions manually.

In all but the most trivial dialog box, you add member variables to your derived dialog class to store data entered in the dialog box's controls by the user or to display data for the user. You can use the Add Variable wizard to create member variables and associate them with controls. At the same time, you choose a variable type and permissible range of values for each variable. The code wizard adds the member variables to your derived dialog class.

A data map is generated to automatically handle the exchange of data between the member variables and the dialog box's controls. The data map provides functions that initialize the controls in the dialog box with the proper values, retrieve the data, and validate the data.

To create a modal dialog box, construct an object on the stack using the constructor for your derived dialog class and then call `DoModal` to create the dialog window and its controls. If you wish to create a modeless dialog, call `Create` in the constructor of your dialog class.

You can also create a template in memory by using a [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) data structure as described in the Windows SDK. After you construct a `CDialog` object, call [CreateIndirect](#createindirect) to create a modeless dialog box, or call [InitModalIndirect](#initmodalindirect) and [DoModal](#domodal) to create a modal dialog box.

The exchange and validation data map is written in an override of `CWnd::DoDataExchange` that is added to your new dialog class. See the [DoDataExchange](../../mfc/reference/cwnd-class.md#dodataexchange) member function in `CWnd` for more on the exchange and validation functionality.

Both the programmer and the framework call `DoDataExchange` indirectly through a call to [CWnd::UpdateData](../../mfc/reference/cwnd-class.md#updatedata).

The framework calls `UpdateData` when the user clicks the OK button to close a modal dialog box. (The data is not retrieved if the Cancel button is clicked.) The default implementation of [OnInitDialog](#oninitdialog) also calls `UpdateData` to set the initial values of the controls. You typically override `OnInitDialog` to further initialize controls. `OnInitDialog` is called after all the dialog controls are created and just before the dialog box is displayed.

You can call `CWnd::UpdateData` at any time during the execution of a modal or modeless dialog box.

If you develop a dialog box by hand, you add the necessary member variables to the derived dialog-box class yourself, and you add member functions to set or get these values.

A modal dialog box closes automatically when the user presses the OK or Cancel buttons or when your code calls the `EndDialog` member function.

When you implement a modeless dialog box, always override the `OnCancel` member function and call `DestroyWindow` from within it. Don't call the base class `CDialog::OnCancel`, because it calls `EndDialog`, which will make the dialog box invisible but will not destroy it. You should also override `PostNcDestroy` for modeless dialog boxes in order to delete **`this`**, since modeless dialog boxes are usually allocated with **`new`**. Modal dialog boxes are usually constructed on the frame and do not need `PostNcDestroy` cleanup.

For more information on `CDialog`, see [Dialog Boxes](../../mfc/dialog-boxes.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CDialog`

## Requirements

**Header:** afxwin.h

## <a name="cdialog"></a> CDialog::CDialog

To construct a resource-based modal dialog box, call either public form of the constructor.

```
explicit CDialog(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL);

explicit CDialog(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL);

CDialog();
```

### Parameters

*lpszTemplateName*<br/>
Contains a null-terminated string that is the name of a dialog-box template resource.

*nIDTemplate*<br/>
Contains the ID number of a dialog-box template resource.

*pParentWnd*<br/>
Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.

### Remarks

One form of the constructor provides access to the dialog resource by template name. The other constructor provides access by template ID number, usually with an **IDD_** prefix (for example, IDD_DIALOG1).

To construct a modal dialog box from a template in memory, first invoke the parameterless, protected constructor and then call `InitModalIndirect`.

After you construct a modal dialog box with one of the above methods, call `DoModal`.

To construct a modeless dialog box, use the protected form of the `CDialog` constructor. The constructor is protected because you must derive your own dialog-box class to implement a modeless dialog box. Construction of a modeless dialog box is a two-step process. First call the constructor; then call the `Create` member function to create a resource-based dialog box, or call `CreateIndirect` to create the dialog box from a template in memory.

## <a name="create"></a> CDialog::Create

Call `Create` to create a modeless dialog box using a dialog-box template from a resource.

```
virtual BOOL Create(
    LPCTSTR lpszTemplateName,
    CWnd* pParentWnd = NULL);

virtual BOOL Create(
    UINT nIDTemplate,
    CWnd* pParentWnd = NULL);
```

### Parameters

*lpszTemplateName*<br/>
Contains a null-terminated string that is the name of a dialog-box template resource.

*pParentWnd*<br/>
Points to the parent window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.

*nIDTemplate*<br/>
Contains the ID number of a dialog-box template resource.

### Return Value

Both forms return nonzero if dialog-box creation and initialization were successful; otherwise 0.

### Remarks

You can put the call to `Create` inside the constructor or call it after the constructor is invoked.

Two forms of the `Create` member function are provided for access to the dialog-box template resource by either template name or template ID number (for example, IDD_DIALOG1).

For either form, pass a pointer to the parent window object. If *pParentWnd* is NULL, the dialog box will be created with its parent or owner window set to the main application window.

The `Create` member function returns immediately after it creates the dialog box.

Use the WS_VISIBLE style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call `ShowWindow`. For further dialog-box styles and their application, see the [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) structure in the Windows SDK and [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) in the *MFC Reference*.

Use the `CWnd::DestroyWindow` function to destroy a dialog box created by the `Create` function.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#62](../../mfc/codesnippet/cpp/cdialog-class_1.cpp)]

## <a name="createindirect"></a> CDialog::CreateIndirect

Call this member function to create a modeless dialog box from a dialog-box template in memory.

```
virtual BOOL CreateIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL);

virtual BOOL CreateIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL);
```

### Parameters

*lpDialogTemplate*<br/>
Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) structure and control information, as described in the Windows SDK.

*pParentWnd*<br/>
Points to the dialog object's parent window object (of type [CWnd](../../mfc/reference/cwnd-class.md)). If it is NULL, the dialog object's parent window is set to the main application window.

*lpDialogInit*<br/>
Points to a DLGINIT resource.

*hDialogTemplate*<br/>
Contains a handle to global memory containing a dialog-box template. This template is in the form of a `DLGTEMPLATE` structure and data for each control in the dialog box.

### Return Value

Nonzero if the dialog box was created and initialized successfully; otherwise 0.

### Remarks

The `CreateIndirect` member function returns immediately after it creates the dialog box.

Use the WS_VISIBLE style in the dialog-box template if the dialog box should appear when the parent window is created. Otherwise, you must call `ShowWindow` to cause it to appear. For more information on how you can specify other dialog-box styles in the template, see the [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) structure in the Windows SDK.

Use the `CWnd::DestroyWindow` function to destroy a dialog box created by the `CreateIndirect` function.

Dialog boxes that contain ActiveX controls require additional information provided in a DLGINIT resource.

## <a name="domodal"></a> CDialog::DoModal

Call this member function to invoke the modal dialog box and return the dialog-box result when done.

```
virtual INT_PTR DoModal();
```

### Return Value

An **`int`** value that specifies the value of the *nResult* parameter that was passed to the [CDialog::EndDialog](#enddialog) member function, which is used to close the dialog box. The return value is -1 if the function could not create the dialog box, or IDABORT if some other error occurred, in which case the output window will contain error information from [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### Remarks

This member function handles all interaction with the user while the dialog box is active. This is what makes the dialog box modal; that is, the user cannot interact with other windows until the dialog box is closed.

If the user clicks one of the pushbuttons in the dialog box, such as OK or Cancel, a message-handler member function, such as [OnOK](#onok) or [OnCancel](#oncancel), is called to attempt to close the dialog box. The default `OnOK` member function will validate and update the dialog-box data and close the dialog box with result IDOK, and the default `OnCancel` member function will close the dialog box with result IDCANCEL without validating or updating the dialog-box data. You can override these message-handler functions to alter their behavior.

> [!NOTE]
> `PreTranslateMessage` is now called for modal dialog box message processing.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#63](../../mfc/codesnippet/cpp/cdialog-class_2.cpp)]

## <a name="enddialog"></a> CDialog::EndDialog

Call this member function to terminate a modal dialog box.

```cpp
void EndDialog(int nResult);
```

### Parameters

*nResult*<br/>
Contains the value to be returned from the dialog box to the caller of `DoModal`.

### Remarks

This member function returns *nResult* as the return value of `DoModal`. You must use the `EndDialog` function to complete processing whenever a modal dialog box is created.

You can call `EndDialog` at any time, even in [OnInitDialog](#oninitdialog), in which case you should close the dialog box before it is shown or before the input focus is set.

`EndDialog` does not close the dialog box immediately. Instead, it sets a flag that directs the dialog box to close as soon as the current message handler returns.

### Example

[!code-cpp[NVC_MFCControlLadenDialog#64](../../mfc/codesnippet/cpp/cdialog-class_3.cpp)]

[!code-cpp[NVC_MFCControlLadenDialog#65](../../mfc/codesnippet/cpp/cdialog-class_4.cpp)]

## <a name="getdefid"></a> CDialog::GetDefID

Call the `GetDefID` member function to get the ID of the default pushbutton control for a dialog box.

```
DWORD GetDefID() const;
```

### Return Value

A 32-bit value ( `DWORD`). If the default pushbutton has an ID value, the high-order word contains DC_HASDEFID and the low-order word contains the ID value. If the default pushbutton does not have an ID value, the return value is 0.

### Remarks

This is usually an OK button.

## <a name="gotodlgctrl"></a> CDialog::GotoDlgCtrl

Moves the focus to the specified control in the dialog box.

```cpp
void GotoDlgCtrl(CWnd* pWndCtrl);
```

### Parameters

*pWndCtrl*<br/>
Identifies the window (control) that is to receive the focus.

### Remarks

To get a pointer to the control (child window) to pass as *pWndCtrl*, call the `CWnd::GetDlgItem` member function, which returns a pointer to a [CWnd](../../mfc/reference/cwnd-class.md) object.

### Example

  See the example for [CWnd::GetDlgItem](../../mfc/reference/cwnd-class.md#getdlgitem).

## <a name="initmodalindirect"></a> CDialog::InitModalIndirect

Call this member function to initialize a modal dialog object using a dialog-box template that you construct in memory.

```
BOOL InitModalIndirect(
    LPCDLGTEMPLATE lpDialogTemplate,
    CWnd* pParentWnd = NULL,
    void* lpDialogInit = NULL);

    BOOL InitModalIndirect(
    HGLOBAL hDialogTemplate,
    CWnd* pParentWnd = NULL);
```

### Parameters

*lpDialogTemplate*<br/>
Points to memory that contains a dialog-box template used to create the dialog box. This template is in the form of a [DLGTEMPLATE](/windows/win32/api/winuser/ns-winuser-dlgtemplate) structure and control information, as described in the Windows SDK.

*hDialogTemplate*<br/>
Contains a handle to global memory containing a dialog-box template. This template is in the form of a `DLGTEMPLATE` structure and data for each control in the dialog box.

*pParentWnd*<br/>
Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.

*lpDialogInit*<br/>
Points to a DLGINIT resource.

### Return Value

Nonzero if the dialog object was created and initialized successfully; otherwise 0.

### Remarks

To create a modal dialog box indirectly, first allocate a global block of memory and fill it with the dialog box template. Then call the empty `CDialog` constructor to construct the dialog-box object. Next, call `InitModalIndirect` to store your handle to the in-memory dialog-box template. The Windows dialog box is created and displayed later, when the [DoModal](#domodal) member function is called.

Dialog boxes that contain ActiveX controls require additional information provided in a DLGINIT resource.

## <a name="mapdialogrect"></a> CDialog::MapDialogRect

Call to convert the dialog-box units of a rectangle to screen units.

```cpp
void MapDialogRect(LPRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or [CRect](../../atl-mfc-shared/reference/crect-class.md) object that contains the dialog-box coordinates to be converted.

### Remarks

Dialog-box units are stated in terms of the current dialog-box base unit derived from the average width and height of characters in the font used for dialog-box text. One horizontal unit is one-fourth of the dialog-box base-width unit, and one vertical unit is one-eighth of the dialog-box base height unit.

The `GetDialogBaseUnits` Windows function returns size information for the system font, but you can specify a different font for each dialog box if you use the DS_SETFONT style in the resource-definition file. The `MapDialogRect` Windows function uses the appropriate font for this dialog box.

The `MapDialogRect` member function replaces the dialog-box units in *lpRect* with screen units (pixels) so that the rectangle can be used to create a dialog box or position a control within a box.

## <a name="nextdlgctrl"></a> CDialog::NextDlgCtrl

Moves the focus to the next control in the dialog box.

```cpp
void NextDlgCtrl() const;
```

### Remarks

If the focus is at the last control in the dialog box, it moves to the first control.

## <a name="oncancel"></a> CDialog::OnCancel

The framework calls this method when the user clicks **Cancel** or presses the ESC key in a modal or modeless dialog box.

```
virtual void OnCancel();
```

### Remarks

Override this method to perform actions (such as restoring old data) when a user closes the dialog box by clicking **Cancel** or hitting the ESC key. The default closes a modal dialog box by calling [EndDialog](#enddialog) and causing [DoModal](#domodal) to return IDCANCEL.

If you implement the **Cancel** button in a modeless dialog box, you must override the `OnCancel` method and call [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) inside it. Do not call the base-class method, because it calls `EndDialog`, which will make the dialog box invisible but not destroy it.

> [!NOTE]
> You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows XP. For more information about `CFileDialog`, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).

### Example

[!code-cpp[NVC_MFCControlLadenDialog#66](../../mfc/codesnippet/cpp/cdialog-class_5.cpp)]

## <a name="oninitdialog"></a> CDialog::OnInitDialog

This method is called in response to the `WM_INITDIALOG` message.

```
virtual BOOL OnInitDialog();
```

### Return Value

Specifies whether the application has set the input focus to one of the controls in the dialog box. If `OnInitDialog` returns nonzero, Windows sets the input focus to the default location, the first control in the dialog box. The application can return 0 only if it has explicitly set the input focus to one of the controls in the dialog box.

### Remarks

Windows sends the `WM_INITDIALOG` message to the dialog box during the [Create](#create), [CreateIndirect](#createindirect), or [DoModal](#domodal) calls, which occur immediately before the dialog box is displayed.

Override this method if you want to perform special processing when the dialog box is initialized. In the overridden version, first call the base class `OnInitDialog` but ignore its return value. You will typically return `TRUE` from your overridden method.

Windows calls the `OnInitDialog` function by using the standard global dialog-box procedure common to all Microsoft Foundation Class Library dialog boxes. It does not call this function through your message map, and therefore you do not need a message map entry for this method.

> [!NOTE]
> You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows Vista or later operating systems. For more information about changes to `CFileDialog` under Windows Vista and later, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).

### Example

[!code-cpp[NVC_MFCControlLadenDialog#67](../../mfc/codesnippet/cpp/cdialog-class_6.cpp)]

## <a name="onok"></a> CDialog::OnOK

Called when the user clicks the **OK** button (the button with an ID of IDOK).

```
virtual void OnOK();
```

### Remarks

Override this method to perform actions when the **OK** button is activated. If the dialog box includes automatic data validation and exchange, the default implementation of this method validates the dialog box data and updates the appropriate variables in your application.

If you implement the **OK** button in a modeless dialog box, you must override the `OnOK` method and call [DestroyWindow](../../mfc/reference/cwnd-class.md#destroywindow) inside it. Do not call the base-class method, because it calls [EndDialog](#enddialog) which makes the dialog box invisible but does not destroy it.

> [!NOTE]
> You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows XP. For more information about `CFileDialog`, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).

### Example

[!code-cpp[NVC_MFCControlLadenDialog#68](../../mfc/codesnippet/cpp/cdialog-class_7.cpp)]

## <a name="onsetfont"></a> CDialog::OnSetFont

Specifies the font a dialog-box control will use when drawing text.

```
Virtual void OnSetFont(CFont* pFont);
```

### Parameters

*pFont*<br/>
[in] Specifies a pointer to the font that will be used as the default font for all controls in this dialog box.

### Remarks

The dialog box will use the specified font as the default for all its controls.

The dialog editor typically sets the dialog-box font as part of the dialog-box template resource.

> [!NOTE]
> You cannot override this method when you use a `CFileDialog` object in a program that is compiled under Windows Vista or later operating systems. For more information about changes to `CFileDialog` under Windows Vista and later, see [CFileDialog Class](../../mfc/reference/cfiledialog-class.md).

## <a name="prevdlgctrl"></a> CDialog::PrevDlgCtrl

Sets the focus to the previous control in the dialog box.

```cpp
void PrevDlgCtrl() const;
```

### Remarks

If the focus is at the first control in the dialog box, it moves to the last control in the box.

## <a name="setdefid"></a> CDialog::SetDefID

Changes the default pushbutton control for a dialog box.

```cpp
void SetDefID(UINT nID);
```

### Parameters

*nID*<br/>
Specifies the ID of the pushbutton control that will become the default.

## <a name="sethelpid"></a> CDialog::SetHelpID

Sets a context-sensitive help ID for the dialog box.

```cpp
void SetHelpID(UINT nIDR);
```

### Parameters

*nIDR*<br/>
Specifies the context-sensitive help ID.

## See also

[MFC Sample DLGCBR32](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample DLGTEMPL](../../overview/visual-cpp-samples.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
