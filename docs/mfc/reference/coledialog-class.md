---
description: "Learn more about: COleDialog Class"
title: "COleDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDialog", "AFXODLGS/COleDialog", "AFXODLGS/COleDialog::GetLastError"]
helpviewer_keywords: ["COleDialog [MFC], GetLastError"]
ms.assetid: b1ed0aca-3914-4b00-af34-4a4fb491aec7
---
# COleDialog Class

Provides functionality common to dialog boxes for OLE.

## Syntax

```
class COleDialog : public CCommonDialog
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDialog::GetLastError](#getlasterror)|Gets the error code returned by the dialog box.|

## Remarks

The Microsoft Foundation Class Library provides several classes derived from `COleDialog`:

- [COleInsertDialog](../../mfc/reference/coleinsertdialog-class.md)

- [COleConvertDialog](../../mfc/reference/coleconvertdialog-class.md)

- [COleChangeIconDialog](../../mfc/reference/colechangeicondialog-class.md)

- [COleLinksDialog](../../mfc/reference/colelinksdialog-class.md)

- [COleBusyDialog](../../mfc/reference/colebusydialog-class.md)

- [COleUpdateDialog](../../mfc/reference/coleupdatedialog-class.md)

- [COlePasteSpecialDialog](../../mfc/reference/colepastespecialdialog-class.md)

- [COlePropertiesDialog](../../mfc/reference/colepropertiesdialog-class.md)

- [COleChangeSourceDialog](../../mfc/reference/colechangesourcedialog-class.md)

For more information about OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`COleDialog`

## Requirements

**Header:** afxodlgs.h

## <a name="getlasterror"></a> COleDialog::GetLastError

Call the `GetLastError` member function to get additional error information when `DoModal` returns IDABORT.

```
UINT GetLastError() const;
```

### Return Value

The error codes returned by `GetLastError` depend on the specific dialog box displayed.

### Remarks

See the `DoModal` member function in the derived classes for information about specific error messages.

## See also

[CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
