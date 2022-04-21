---
description: "Learn more about: CFolderPickerDialog Class"
title: "CFolderPickerDialog Class"
ms.date: "03/27/2019"
f1_keywords: ["CFolderPickerDialog", "AFXDLGS/CFolderPickerDialog", "AFXDLGS/CFolderPickerDialog::CFolderPickerDialog"]
helpviewer_keywords: ["CFolderPickerDialog [MFC], CFolderPickerDialog"]
---
# `CFolderPickerDialog` Class

`CFolderPickerDialog` class implements `CFileDialog` in the folder picker mode.

## Syntax

```
class CFolderPickerDialog : public CFileDialog;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CFolderPickerDialog::~CFolderPickerDialog`](#_dtorcfolderpickerdialog)|Destructor.|
|[`CFolderPickerDialog::CFolderPickerDialog`](#cfolderpickerdialog)|Constructor.|

## Remarks

## Inheritance Hierarchy

[`CObject`](../../mfc/reference/cobject-class.md)

[`CCmdTarget`](../../mfc/reference/ccmdtarget-class.md)

[`CWnd`](../../mfc/reference/cwnd-class.md)

[`CDialog`](../../mfc/reference/cdialog-class.md)

[`CCommonDialog`](../../mfc/reference/ccommondialog-class.md)

[`CFileDialog`](../../mfc/reference/cfiledialog-class.md)

`CFolderPickerDialog`

## Requirements

**Header:** `afxdlgs.h`

## <a name="cfolderpickerdialog"></a> `CFolderPickerDialog::CFolderPickerDialog`

Constructor.

```
explicit CFolderPickerDialog(
    LPCTSTR lpszFolder = NULL,
    DWORD dwFlags = 0,
    CWnd* pParentWnd = NULL,
    DWORD dwSize = 0);
```

### Parameters

*`lpszFolder`*\
Initial folder.

*`dwFlags`*\
A combination of one or more flags that allow you to customize the dialog box.

*`pParentWnd`*\
A pointer to the dialog box object's parent or owner window.

*`dwSize`*\
The size of the `OPENFILENAME` structure.

### Remarks

## <a name="_dtorcfolderpickerdialog"></a> `CFolderPickerDialog::~CFolderPickerDialog`

Destructor.

```
virtual ~CFolderPickerDialog();
```

### Remarks

## See also

[Classes](../../mfc/reference/mfc-classes.md)
