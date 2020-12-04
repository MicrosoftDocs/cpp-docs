---
description: "Learn more about: CCommonDialog Class"
title: "CCommonDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CCommonDialog", "AFXDLGS/CCommonDialog", "AFXDLGS/CCommonDialog::CCommonDialog"]
helpviewer_keywords: ["CCommonDialog [MFC], CCommonDialog"]
ms.assetid: 1f68d65f-a0fd-4778-be22-ebbe51a95f95
---
# CCommonDialog Class

The base class for classes that encapsulate functionality of the Windows common dialogs.

## Syntax

```
class CCommonDialog : public CDialog
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CCommonDialog::CCommonDialog](#ccommondialog)|Constructs a `CCommonDialog` object.|

## Remarks

The following classes encapsulate the functionality of the Windows common dialogs:

- [CFileDialog](../../mfc/reference/cfiledialog-class.md)

- [CFontDialog](../../mfc/reference/cfontdialog-class.md)

- [CColorDialog](../../mfc/reference/ccolordialog-class.md)

- [CPageSetupDialog](../../mfc/reference/cpagesetupdialog-class.md)

- [CPrintDialog](../../mfc/reference/cprintdialog-class.md)

- [CPrintDialogEx](../../mfc/reference/cprintdialogex-class.md)

- [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md)

- [COleDialog](../../mfc/reference/coledialog-class.md)

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

`CCommonDialog`

## Requirements

**Header:** afxdlgs.h

## <a name="ccommondialog"></a> CCommonDialog::CCommonDialog

Constructs a `CCommonDialog` object.

```
explicit CCommonDialog(CWnd* pParentWnd);
```

### Parameters

*pParentWnd*<br/>
Points to the parent or owner window object (of type [CWnd](../../mfc/reference/cwnd-class.md)) to which the dialog object belongs. If it is NULL, the dialog object's parent window is set to the main application window.

### Remarks

See [CDialog::CDialog](../../mfc/reference/cdialog-class.md#cdialog) for complete information.

## See also

[CDialog Class](../../mfc/reference/cdialog-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFileDialog Class](../../mfc/reference/cfiledialog-class.md)<br/>
[CFontDialog Class](../../mfc/reference/cfontdialog-class.md)<br/>
[CColorDialog Class](../../mfc/reference/ccolordialog-class.md)<br/>
[CPageSetupDialog Class](../../mfc/reference/cpagesetupdialog-class.md)<br/>
[CPrintDialog Class](../../mfc/reference/cprintdialog-class.md)<br/>
[CFindReplaceDialog Class](../../mfc/reference/cfindreplacedialog-class.md)<br/>
[COleDialog Class](../../mfc/reference/coledialog-class.md)
