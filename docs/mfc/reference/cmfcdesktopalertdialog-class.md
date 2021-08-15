---
description: "Learn more about: CMFCDesktopAlertDialog Class"
title: "CMFCDesktopAlertDialog Class"
ms.date: "10/18/2018"
f1_keywords: ["CMFCDesktopAlertDialog", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::CreateFromParams", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::GetDlgSize", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::HasFocus", "AFXDESKTOPALERTDIALOG/CMFCDesktopAlertDialog::PreTranslateMessage"]
helpviewer_keywords: ["CMFCDesktopAlertDialog [MFC], CreateFromParams", "CMFCDesktopAlertDialog [MFC], GetDlgSize", "CMFCDesktopAlertDialog [MFC], HasFocus", "CMFCDesktopAlertDialog [MFC], PreTranslateMessage"]
ms.assetid: a53c60aa-9607-485b-b826-ec64962075f6
---
# CMFCDesktopAlertDialog Class

The `CMFCDesktopAlertDialog` class is used together with the [CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md) to display a custom dialog in a popup window.

For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```
class CMFCDesktopAlertDialog : public CDialogEx
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCDesktopAlertDialog::CreateFromParams](#createfromparams)||
|[CMFCDesktopAlertDialog::GetDlgSize](#getdlgsize)||
|[CMFCDesktopAlertDialog::HasFocus](#hasfocus)||
|[CMFCDesktopAlertDialog::PreTranslateMessage](#pretranslatemessage)|(Overrides `CDialogEx::PreTranslateMessage`.)|

### Remarks

Perform the following steps to display a custom dialog in a popup window:

1. Derive a class from `CMFCDesktopAlertDialog`.

1. Create a child dialog template in the resources of the project.

1. Call [CMFCDesktopAlertWnd::Create](../../mfc/reference/cmfcdesktopalertwnd-class.md#create) with the resource ID of the dialog template and a pointer to the runtime class information of the derived class as parameters.

1. Program the custom dialog to handle all notifications that are coming from the hosted controls, or program the hosted controls to handle these notifications directly.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCDesktopAlertDialog](../../mfc/reference/cmfcdesktopalertdialog-class.md)

## Requirements

**Header:** afxDesktopAlertDialog.h

## <a name="createfromparams"></a> CMFCDesktopAlertDialog::CreateFromParams

```
BOOL CreateFromParams(
    CMFCDesktopAlertWndInfo& params,
    CMFCDesktopAlertWnd* pParent);
```

### Parameters

[in] *params*<br/>

[in] *pParent*<br/>

### Return Value

### Remarks

## <a name="getdlgsize"></a> CMFCDesktopAlertDialog::GetDlgSize

```
CSize GetDlgSize();
```

### Return Value

### Remarks

## <a name="hasfocus"></a> CMFCDesktopAlertDialog::HasFocus

```
BOOL HasFocus() const;
```

### Return Value

### Remarks

## <a name="pretranslatemessage"></a> CMFCDesktopAlertDialog::PreTranslateMessage

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

[in] *pMsg*<br/>

### Return Value

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCDesktopAlertWnd Class](../../mfc/reference/cmfcdesktopalertwnd-class.md)<br/>
[CMFCDesktopAlertWndInfo Class](../../mfc/reference/cmfcdesktopalertwndinfo-class.md)<br/>
[CDialogEx Class](../../mfc/reference/cdialogex-class.md)
