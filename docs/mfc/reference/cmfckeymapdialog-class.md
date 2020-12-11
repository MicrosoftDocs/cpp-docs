---
description: "Learn more about: CMFCKeyMapDialog Class"
title: "CMFCKeyMapDialog Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCKeyMapDialog", "AFXKEYMAPDIALOG/CMFCKeyMapDialog", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::CMFCKeyMapDialog", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::DoModal", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::FormatItem", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::GetCommandKeys", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnInsertItem", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintHeader", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintItem", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnSetColumns", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::PrintKeyMap", "AFXKEYMAPDIALOG/CMFCKeyMapDialog::SetColumnsWidth"]
helpviewer_keywords: ["CMFCKeyMapDialog [MFC], CMFCKeyMapDialog", "CMFCKeyMapDialog [MFC], DoModal", "CMFCKeyMapDialog [MFC], FormatItem", "CMFCKeyMapDialog [MFC], GetCommandKeys", "CMFCKeyMapDialog [MFC], OnInsertItem", "CMFCKeyMapDialog [MFC], OnPrintHeader", "CMFCKeyMapDialog [MFC], OnPrintItem", "CMFCKeyMapDialog [MFC], OnSetColumns", "CMFCKeyMapDialog [MFC], PrintKeyMap", "CMFCKeyMapDialog [MFC], SetColumnsWidth"]
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
---
# CMFCKeyMapDialog Class

The `CMFCKeyMapDialog` class supports a control that maps commands to keys on the keyboard.

## Syntax

```
class CMFCKeyMapDialog : public CDialogEx
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCKeyMapDialog::CMFCKeyMapDialog](#cmfckeymapdialog)|Constructs a `CMFCKeyMapDialog` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCKeyMapDialog::DoModal](#domodal)|Displays a keyboard mapping dialog box.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCKeyMapDialog::FormatItem](#formatitem)|Called by the framework to build a string that describes a key mapping. By default, the string contains the command name, the shortcut keys used, and the shortcut key description.|
|[CMFCKeyMapDialog::GetCommandKeys](#getcommandkeys)|Retrieves a string that contains a list of shortcut keys associated with the specified command.|
|[CMFCKeyMapDialog::OnInsertItem](#oninsertitem)|Called by the framework before a new item is inserted into the internal list control that supports the keyboard mapping control.|
|[CMFCKeyMapDialog::OnPrintHeader](#onprintheader)|Called by the framework to print the header for the keyboard map on a new page.|
|[CMFCKeyMapDialog::OnPrintItem](#onprintitem)|Called by the framework to print a keyboard mapping item.|
|[CMFCKeyMapDialog::OnSetColumns](#onsetcolumns)|Called by the framework to set captions for the columns in the internal list control that supports the keyboard mapping control.|
|[CMFCKeyMapDialog::PrintKeyMap](#printkeymap)|Called by the framework when a user clicks the **Print** button.|
|[CMFCKeyMapDialog::SetColumnsWidth](#setcolumnswidth)|Called by the framework to set the width of the columns in the internal list control that supports the keyboard mapping control.|

## Remarks

Use the `CMFCKeyMapDialog` class to implement a resizable keyboard mapping dialog box. The dialog box uses a list view control to display keyboard shortcuts and their associated commands.

To use the `CMFCKeyMapDialog` class in an application, pass in a pointer to the main frame window as a parameter to the `CMFCKeyMapDialog` constructor. Then call the `DoModal` method to start a modal dialog box.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)

## Requirements

**Header:** afxkeymapdialog.h

## <a name="cmfckeymapdialog"></a> CMFCKeyMapDialog::CMFCKeyMapDialog

Constructs a `CMFCKeyMapDialog` object.

```
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bEnablePrint=FALSE);
```

### Parameters

*pWndParentFrame*<br/>
[in] A pointer to the parent window of the `CMFCKeyMapDialog` object.

*bEnablePrint*<br/>
[in] TRUE if the list of accelerator keys can be printed; otherwise, FALSE. The default is FALSE.

### Remarks

### Example

The following example demonstrates how to construct an object of the `CMFCKeyMapDialog` class. This example is part of the [Visual Studio Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#21](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]

## <a name="domodal"></a> CMFCKeyMapDialog::DoModal

Displays a keyboard mapping dialog box.

```
virtual INT_PTR DoModal();
```

### Return Value

A signed integer, such as IDOK or IDCANCEL, that is passed to the [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#enddialog) method. The method, in turn, closes the dialog box. For more information, see [CDialog::DoModal](../../mfc/reference/cdialog-class.md#domodal).

### Remarks

The keyboard mapping dialog box enables you to select and assign accelerator keys to various categories of commands. In addition, you can copy the selected accelerator keys and their description to the clipboard.

## <a name="formatitem"></a> CMFCKeyMapDialog::FormatItem

Called by the framework to build a string that describes a key mapping. By default, the string contains the command name, the shortcut keys used, and the shortcut key description.

```
virtual CString FormatItem(int nItem) const;
```

### Parameters

*nItem*<br/>
[in] The zero-based index of an item in the internal list of key mappings.

### Return Value

A `CString` object that contains the formatted item text.

### Remarks

## <a name="getcommandkeys"></a> CMFCKeyMapDialog::GetCommandKeys

Retrieves a string value. The string contains a list of shortcut keys that are associated with a specified command.

```
virtual CString GetCommandKeys(UINT uiCmdID) const;
```

### Parameters

*uiCmdID*<br/>
[in] A command ID.

### Return Value

A semicolon-delimited (';') list of shortcut keys that is associated with the specified command.

### Remarks

## <a name="oninsertitem"></a> CMFCKeyMapDialog::OnInsertItem

Called by the framework before a new item is inserted into an internal list control that supports the keyboard mapping control.

```
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,
    int nItem);
```

### Parameters

*pButton*<br/>
[in] A pointer to a toolbar button that is used to map a keyboard key combination to a command name and description. The key map item is stored in an internal list control.

*nItem*<br/>
[in] A zero-based index that specifies where to insert the new key map item in the internal list control.

### Remarks

## <a name="onprintheader"></a> CMFCKeyMapDialog::OnPrintHeader

Called by the framework to print the header for the keyboard map on a new page.

```
virtual int OnPrintHeader(
    CDC& dc,
    int nPage,
    int cx) const;
```

### Parameters

*dc*<br/>
[in] The device context for the printer.

*nPage*<br/>
[in] The page number to print.

*cx*<br/>
[in] The horizontal offset of the header, in pixels.

### Return Value

If successful, the height of the printed text. For more information, see the Return Value section of [CDC::DrawText](../../mfc/reference/cdc-class.md#drawtext).

### Remarks

The framework uses this method to print the keyboard map. By default, this method prints the page number, application name, and dialog box title.

## <a name="onprintitem"></a> CMFCKeyMapDialog::OnPrintItem

Called by the framework to print a keyboard mapping item.

```
virtual int OnPrintItem(
    CDC& dc,
    int nItem,
    int y,
    int cx,
    BOOL bCalcHeight) const;
```

### Parameters

*dc*<br/>
[in] The device context of the printer.

*nItem*<br/>
[in] The zero-based index of the item to print.

*y*<br/>
[in] The vertical offset between the top of the page and the position of the item.

*cx*<br/>
[in] The horizontal offset between the left of the page and the position of the item.

*bCalcHeight*<br/>
[in] TRUE to calculate the best height for the print item; FALSE to truncate the print item so that it fits the default space.

### Return Value

The height of the printed item.

### Remarks

The framework calls this method to print a key map dialog box item. By default, this method prints the item's command name, shortcut keys, and command description.

## <a name="onsetcolumns"></a> CMFCKeyMapDialog::OnSetColumns

Called by the framework to set captions for the columns in the internal list control that supports the keyboard mapping control.

```
virtual void OnSetColumns();
```

### Remarks

By default, this method obtains the captions for the columns from three resources. The command column caption is from IDS_AFXBARRES_COMMAND, the key column caption is from IDS_AFXBARRES_KEYS, and the description column caption is from IDS_AFXBARRES_DESCRIPTION.

## <a name="printkeymap"></a> CMFCKeyMapDialog::PrintKeyMap

Called by the framework when a user clicks the **Print** button.

```
virtual void PrintKeyMap();
```

### Remarks

The `PrintKeyMap` method prints the key map. It initiates a new print job and then repeatedly calls the [CMFCKeyMapDialog::OnPrintHeader](#onprintheader) and [CMFCKeyMapDialog::OnPrintItem](#onprintitem) methods until all the key mappings are printed.

## <a name="setcolumnswidth"></a> CMFCKeyMapDialog::SetColumnsWidth

Called by the framework to set the width of the columns in the internal list control that supports the keyboard mapping control.

```
virtual void SetColumnsWidth();
```

### Remarks

This method sets the internal list control's columns to default widths. First, the width of the shortcut keys column is calculated. Then one-third of the remaining width is allocated to the command column and the remaining two-thirds is allocated to the description column.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)
