---
description: "Learn more about: CMFCEditBrowseCtrl Class"
title: "CMFCEditBrowseCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCEditBrowseCtrl", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableBrowseButton", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableFileBrowseButton", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableFolderBrowseButton", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::GetMode", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnAfterUpdate", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnBrowse", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnChangeLayout", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnDrawBrowseButton", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnIllegalFileName", "AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::SetBrowseButtonImage"]
helpviewer_keywords: ["CMFCEditBrowseCtrl [MFC], EnableBrowseButton", "CMFCEditBrowseCtrl [MFC], EnableFileBrowseButton", "CMFCEditBrowseCtrl [MFC], EnableFolderBrowseButton", "CMFCEditBrowseCtrl [MFC], GetMode", "CMFCEditBrowseCtrl [MFC], OnAfterUpdate", "CMFCEditBrowseCtrl [MFC], OnBrowse", "CMFCEditBrowseCtrl [MFC], OnChangeLayout", "CMFCEditBrowseCtrl [MFC], OnDrawBrowseButton", "CMFCEditBrowseCtrl [MFC], OnIllegalFileName", "CMFCEditBrowseCtrl [MFC], SetBrowseButtonImage"]
ms.assetid: 69cfd886-3d35-4bee-8901-7c88fcf9520f
---
# CMFCEditBrowseCtrl Class

The `CMFCEditBrowseCtrl` class supports the edit browse control, which is an editable text box that optionally contains a browse button. When the user clicks the browse button, the control performs a custom action or displays a standard dialog box that contains a file browser or a folder browser.

## Syntax

```
class CMFCEditBrowseCtrl : public CEdit
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|`CMFCEditBrowseCtrl::CMFCEditBrowseCtrl`|Default constructor.|
|`CMFCEditBrowseCtrl::~CMFCEditBrowseCtrl`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton)|Enables or disables (hides) the browse button.|
|[CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton)|Enables the browse button and puts the edit browse control in *file browse* mode.|
|[CMFCEditBrowseCtrl::EnableFolderBrowseButton](#enablefolderbrowsebutton)|Enables the browse button and puts the edit browse control in *folder browse* mode.|
|[CMFCEditBrowseCtrl::GetMode](#getmode)|Returns the current browse mode.|
|[CMFCEditBrowseCtrl::OnAfterUpdate](#onafterupdate)|Called by the framework after the edit browse control is updated with the result of a browse action.|
|[CMFCEditBrowseCtrl::OnBrowse](#onbrowse)|Called by the framework after the user clicks the browse button.|
|[CMFCEditBrowseCtrl::OnChangeLayout](#onchangelayout)|Redraws the current edit browse control.|
|[CMFCEditBrowseCtrl::OnDrawBrowseButton](#ondrawbrowsebutton)|Called by the framework to draw the browse button.|
|[CMFCEditBrowseCtrl::OnIllegalFileName](#onillegalfilename)|Called by the framework when an illegal file name was entered in the edit control.|
|`CMFCEditBrowseCtrl::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. For syntax and more information, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCEditBrowseCtrl::SetBrowseButtonImage](#setbrowsebuttonimage)|Sets a custom image for the browse button.|

## Remarks

Use an edit browse control to select a file or folder name. Optionally, use the control to perform a custom action such as to display a dialog box. You can display or not display the browse button, and you can apply a custom label or image on the button.

The *browse mode* of the edit browse control determines whether it displays a browse button and what action occurs when the button is clicked. For more information, see the [GetMode](#getmode) method.

The `CMFCEditBrowseCtrl` class supports the following modes.

- **custom mode**

   A custom action is performed when the user clicks the browse button. For example, you can display an application-specific dialog box.

- **file mode**

   A standard file selection dialog box is displayed when the user clicks the browse button.

- **folder mode**

   A standard folder selection dialog box is displayed when the user clicks the browse button.

## How-To: Specify an Edit Browse Control

Perform the following steps to incorporate an edit browse control in your application:

1. If you want to implement a custom browse mode, derive your own class from the `CMFCEditBrowseCtrl` class and then override the [CMFCEditBrowseCtrl::OnBrowse](#onbrowse) method. In the overridden method, execute a custom browse action and update the edit browse control with the result.

1. Embed either the `CMFCEditBrowseCtrl` object or the derived edit browse control object into the parent window object.

1. If you use the **Class Wizard** to create a dialog box, add an edit control ( `CEdit`) to the dialog box form. Also, add a variable to access the control in your header file. In your header file, change the type of the variable from `CEdit` to `CMFCEditBrowseCtrl`. The edit browse control will be created automatically. If you do not use the **Class Wizard**, add a `CMFCEditBrowseCtrl` variable to your header file and then call its `Create` method.

1. If you add an edit browse control to a dialog box, use the **ClassWizard** tool to set up data exchange.

1. Call the [EnableFolderBrowseButton](#enablefolderbrowsebutton), [EnableFileBrowseButton](#enablefilebrowsebutton), or [EnableBrowseButton](#enablebrowsebutton) method to set the browse mode and display the browse button. Call the [GetMode](#getmode) method to obtain the current browse mode.

1. To provide a custom image for the browse button, call the [SetBrowseButtonImage](#setbrowsebuttonimage) method or override the [OnDrawBrowseButton](#ondrawbrowsebutton) method.

1. To remove the browse button from the edit browse control, call the [EnableBrowseButton](#enablebrowsebutton) method with the *bEnable* parameter set to FALSE.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)

## Example

The following example demonstrates how to use two methods in the `CMFCEditBrowseCtrl` class: `EnableFolderBrowseButton` and `EnableFileBrowseButton`. This example is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_2.cpp)]

## Requirements

**Header:** afxeditbrowsectrl.h

## <a name="enablebrowsebutton"></a> CMFCEditBrowseCtrl::EnableBrowseButton

Displays or does not display the browse button on the current edit browse control.

```cpp
void EnableBrowseButton(
    BOOL bEnable=TRUE,
    LPCTSTR szLabel=_T("..."));
```

### Parameters

*bEnable*<br/>
TRUE to display the browse button; FALSE not to display the browse button. The default value is TRUE.

*szLabel*<br/>
The label that is displayed on the browse button. The default value is " **...**".

### Remarks

If the *bEnable* parameter is TRUE, implement a custom action to perform when the browse button is clicked. To implement a custom action, derive a class from the `CMFCEditBrowseCtrl` class and then override its [OnBrowse](#onbrowse) method.

If the *bEnable* parameter is TRUE, the browse mode of the control is `BrowseMode_Default`; otherwise, the browse mode is `BrowseMode_None`. For more information about browse modes, see the [GetMode](#getmode) method.

## <a name="enablefilebrowsebutton"></a> CMFCEditBrowseCtrl::EnableFileBrowseButton

Displays the browse button on the current edit browse control and puts the control in *file browse* mode.

```cpp
void EnableFileBrowseButton(
    LPCTSTR lpszDefExt=NULL,
    LPCTSTR lpszFilter=NULL,
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);
```

### Parameters

*lpszDefExt*<br/>
Specifies the default file name extension that is used in the file selection dialog box. The default value is NULL.

*lpszFilter*<br/>
Specifies the default filter string that is used in the file selection dialog box. The default value is NULL.

*dwFlags*<br/>
Dialog box flags. The default value is a bitwise combination (OR) of OFN_HIDEREADONLY and OFN_OVERWRITEPROMPT.

### Remarks

When the edit browse control is in file browse mode and the user clicks the browse button, the control displays the standard file selection dialog box.

For a full list of available flags, see [OPENFILENAME structure](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

## <a name="enablefolderbrowsebutton"></a> CMFCEditBrowseCtrl::EnableFolderBrowseButton

Displays the browse button on the current edit browse control and puts the control in *folder browse* mode.

```cpp
void EnableFolderBrowseButton();
```

### Remarks

When the edit browse control is in folder browse mode and the user clicks the browse button, the control displays the standard folder selection dialog box.

## <a name="getmode"></a> CMFCEditBrowseCtrl::GetMode

Retrieves the browse mode of the current edit browse control.

```
CMFCEditBrowseCtrl::BrowseMode GetMode() const;
```

### Return Value

One of the enumeration values that specifies the current mode of the edit browse control. The browse mode determines whether the framework displays the browse button and what action occurs when a user clicks that button.

The following table lists the possible return values.

|Value|Description|
|-----------|-----------------|
|`BrowseMode_Default`|**custom mode**. A programmer-defined action is performed.|
|`BrowseMode_File`|**file mode**. The standard file browser dialog box is displayed.|
|`BrowseMode_Folder`|**folder mode**. The standard folder browser dialog box is displayed.|
|`BrowseMode_None`|The browse button is not displayed.|

### Remarks

By default, a `CMFCEditBrowseCtrl` object is initialized to `BrowseMode_None` mode. Modify the browse mode with the [CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton), [CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton), and [CMFCEditBrowseCtrl::EnableFolderBrowseButton](#enablefolderbrowsebutton) methods.

## <a name="onafterupdate"></a> CMFCEditBrowseCtrl::OnAfterUpdate

Called by the framework after the edit browse control is updated with the result of a browse action.

```
virtual void OnAfterUpdate();
```

### Remarks

Override this method in a derived class to implement a custom action.

## <a name="onbrowse"></a> CMFCEditBrowseCtrl::OnBrowse

Called by the framework after the user clicks the browse button of the edit browse control.

```
virtual void OnBrowse();
```

### Remarks

Use this method to execute custom code when the user clicks the browse button of the edit browse control. Derive your own class from the `CMFCEditBrowseCtrl` class and override its `OnBrowse` method. In that method, implement a custom browse action and optionally update the text box of the edit browse control. In your application, use the [EnableBrowseButton](#enablebrowsebutton) method to put the edit browse control in *custom browse* mode.

## <a name="onchangelayout"></a> CMFCEditBrowseCtrl::OnChangeLayout

Redraws the current edit browse control.

```
virtual void OnChangeLayout();
```

### Remarks

The framework calls this method when the browse mode of the edit browse control changes. For more information, see [CMFCEditBrowseCtrl::GetMode](#getmode).

## <a name="ondrawbrowsebutton"></a> CMFCEditBrowseCtrl::OnDrawBrowseButton

Called by the framework to draw the browse button on the edit browse control.

```
virtual void OnDrawBrowseButton(
    CDC* pDC,
    CRect rect,
    BOOL bIsButtonPressed,
    BOOL bIsButtonHot);
```

### Parameters

*pDC*<br/>
A pointer to a device context.

*Rect*<br/>
The bounding rectangle of the browse button.

*bIsButtonPressed*<br/>
TRUE if the button is pressed; otherwise, FALSE.

*bIsButtonHot*<br/>
TRUE if the button is highlighted; otherwise, FALSE.

### Remarks

Override this function in a derived class to customize the appearance of the browse button.

## <a name="setbrowsebuttonimage"></a> CMFCEditBrowseCtrl::SetBrowseButtonImage

Sets a custom image on the browse button of the edit browse control.

```cpp
void SetBrowseButtonImage(
    HICON hIcon,
    BOOL bAutoDestroy= TRUE);

void SetBrowseButtonImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy= TRUE);

void SetBrowseButtonImage(UINT uiBmpResId);
```

### Parameters

*hIcon*<br/>
The handle of an icon.

*hBitmap*<br/>
The handle of a bitmap.

*uiBmpResId*<br/>
The resource ID of a bitmap.

*bAutoDestroy*<br/>
TRUE to delete the specified icon or bitmap when this method exits; otherwise, FALSE. The default value is TRUE.

### Remarks

Use this method to apply a custom image to the browse button. By default, the framework obtains a standard image when the edit browse control is in *file browse* or *folder browse* mode.

## <a name="onillegalfilename"></a> CMFCEditBrowseCtrl::OnIllegalFileName

Called by the framework when an illegal file name was entered in the edit control.

```
virtual BOOL OnIllegalFileName(CString& strFileName);
```

### Parameters

*strFileName*<br/>
Specifies the illegal file name.

### Return Value

Should return FALSE if this file name can not be passed further to the file dialog. In this case, focus is set back to the edit control and the user should continue editing. The default implementation displays a message box telling the user about the illegal file name and returns FALSE. You can override this method, correct the file name, and return TRUE for further processing.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
