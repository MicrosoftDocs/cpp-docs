---
description: "Learn more about: CWinFormsDialog Class"
title: "CWinFormsDialog Class"
ms.date: "03/27/2019"
f1_keywords: ["CWinFormsDialog", "AFXWINFORMS/CWinFormsDialog", "AFXWINFORMS/CWinFormsDialog::CWinFormsDialog", "AFXWINFORMS/CWinFormsDialog::GetControl", "AFXWINFORMS/CWinFormsDialog::GetControlHandle", "AFXWINFORMS/CWinFormsDialog::OnInitDialog"]
helpviewer_keywords: ["CWinFormsDialog [MFC], CWinFormsDialog", "CWinFormsDialog [MFC], GetControl", "CWinFormsDialog [MFC], GetControlHandle", "CWinFormsDialog [MFC], OnInitDialog"]
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
---
# CWinFormsDialog Class

A wrapper for an MFC dialog class that hosts a Windows Forms user control.

## Syntax

```
template <typename TManagedControl>
class CWinFormsDialog :
    public CDialog
```

#### Parameters

*TManagedControl*<br/>
The .NET Framework user control to be displayed in the MFC application.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWinFormsDialog::CWinFormsDialog](#cwinformsdialog)|Constructs a `CWinFormsDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWinFormsDialog::GetControl](#getcontrol)|Retrieves a reference to the Windows Forms user control.|
|[CWinFormsDialog::GetControlHandle](#getcontrolhandle)|Retrieves a window handle to the Windows Forms user control.|
|[CWinFormsDialog::OnInitDialog](#oninitdialog)|Initializes the MFC dialog box by creating and hosting a Windows Forms user control on it.|

### Public Operators

|Name|Description|
|----------|-|
|[CWinFormsDialog::operator -&gt;](#operator_-_gt)|Replaces [CWinFormsDialog::GetControl](#getcontrol) in expressions.|
|[CWinFormsDialog::operator TManagedControl^](#operator-tmanagedcontrol-hat)|Casts a type as a reference to a Windows Forms user control.|

## Remarks

`CWinFormsDialog` is a wrapper for an MFC dialog class ( [CDialog](../../mfc/reference/cdialog-class.md)) that hosts a Windows Forms user control. This allows the display of .NET Framework controls on a modal or modeless MFC dialog box.

For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) and [Hosting a Windows Form User Control as an MFC Dialog Box](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).

## Requirements

**Header:** afxwinforms.h

## <a name="cwinformsdialog"></a> CWinFormsDialog::CWinFormsDialog

Constructs a `CWinFormsDialog` object.

```
CWinFormsDialog(UINT nIDTemplate = IDD);
```

### Parameters

*nIDTemplate*<br/>
Contains the ID of a dialog box template resource. Use the dialog editor to create the dialog template and store it in the application's resource script file. For more information on dialog templates, see [CDialog Class](../../mfc/reference/cdialog-class.md).

## <a name="getcontrol"></a> CWinFormsDialog::GetControl

Retrieves a reference to the Windows Forms user control.

```
inline TManagedControl^ GetControl() const;
```

### Return Value

Returns a reference to the Windows Forms control in the MFC dialog box.

## <a name="getcontrolhandle"></a> CWinFormsDialog::GetControlHandle

Retrieves a window handle to the Windows Forms user control.

```
inline HWND GetControlHandle() const throw();
```

### Return Value

Returns a window handle to the Windows Forms user control.

## <a name="oninitdialog"></a> CWinFormsDialog::OnInitDialog

Initializes the MFC dialog box by creating and hosting a Windows Forms user control on it.

```
virtual BOOL OnInitDialog();
```

### Return Value

A Boolean value that specifies whether the application has set the input focus to one of the controls in the dialog box. If `OnInitDialog` returns nonzero, Windows sets the input focus to the first control in the dialog box. This method can return 0 only if the application has explicitly set the input focus to one of the controls in the dialog box.

### Remarks

When the MFC dialog box is created (using the [Create](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect), or [DoModal](../../mfc/reference/cdialog-class.md#domodal) method inherited from [CDialog](../../mfc/reference/cdialog-class.md)), a WM_INITDIALOG message is sent and this method is called. It creates an instance of a Windows Forms control on the dialog box and adjusts the size of the dialog box to accommodate for the size of the user control. Then it hosts the new control in the MFC dialog box.

Override this member function if you need to perform special processing when the dialog box is initialized. For more information on using this method, see [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog).

## <a name="operator_-_gt"></a> CWinFormsDialog::operator -&gt;

Replaces [CWinFormsDialog::GetControl](#getcontrol) in expressions.

```
inline TManagedControl^  operator->() const throw();
```

### Remarks

This operator provides a convenient syntax that replaces `GetControl` in expressions.

For information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="operator-tmanagedcontrol-hat"></a> CWinFormsDialog::operator TManagedControl^

Casts a type as a reference to a Windows Forms user control.

```
inline operator TManagedControl^() const throw();
```

### Remarks

This operator casts a type as a reference to a Windows Forms control. It is used to pass a `CWinFormsDialog<TManagedControl>` dialog box to functions that accept a pointer to a Windows Forms user control object.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)<br/>
[CDialog Class](../../mfc/reference/cdialog-class.md)
