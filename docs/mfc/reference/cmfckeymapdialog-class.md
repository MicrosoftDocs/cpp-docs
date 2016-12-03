---
title: "CMFCKeyMapDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCKeyMapDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCKeyMapDialog class"
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CMFCKeyMapDialog::CMFCKeyMapDialog](#cmfckeymapdialog__cmfckeymapdialog)|Constructs a `CMFCKeyMapDialog` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCKeyMapDialog::DoModal](#cmfckeymapdialog__domodal)|Displays a keyboard mapping dialog box.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCKeyMapDialog::FormatItem](#cmfckeymapdialog__formatitem)|Called by the framework to build a string that describes a key mapping. By default, the string contains the command name, the shortcut keys used, and the shortcut key description.|  
|[CMFCKeyMapDialog::GetCommandKeys](#cmfckeymapdialog__getcommandkeys)|Retrieves a string that contains a list of shortcut keys associated with the specified command.|  
|[CMFCKeyMapDialog::OnInsertItem](#cmfckeymapdialog__oninsertitem)|Called by the framework before a new item is inserted into the internal list control that supports the keyboard mapping control.|  
|[CMFCKeyMapDialog::OnPrintHeader](#cmfckeymapdialog__onprintheader)|Called by the framework to print the header for the keyboard map on a new page.|  
|[CMFCKeyMapDialog::OnPrintItem](#cmfckeymapdialog__onprintitem)|Called by the framework to print a keyboard mapping item.|  
|[CMFCKeyMapDialog::OnSetColumns](#cmfckeymapdialog__onsetcolumns)|Called by the framework to set captions for the columns in the internal list control that supports the keyboard mapping control.|  
|[CMFCKeyMapDialog::PrintKeyMap](#cmfckeymapdialog__printkeymap)|Called by the framework when a user clicks the **Print** button.|  
|[CMFCKeyMapDialog::SetColumnsWidth](#cmfckeymapdialog__setcolumnswidth)|Called by the framework to set the width of the columns in the internal list control that supports the keyboard mapping control.|  
  
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
  
##  <a name="cmfckeymapdialog__cmfckeymapdialog"></a>  CMFCKeyMapDialog::CMFCKeyMapDialog  
 Constructs a `CMFCKeyMapDialog` object.  
  
```  
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,  
    BOOL bEnablePrint=FALSE);
```  
  
### Parameters  
 [in] `pWndParentFrame`  
 A pointer to the parent window of the `CMFCKeyMapDialog` object.  
  
 [in] `bEnablePrint`  
 `TRUE` if the list of accelerator keys can be printed; otherwise, `FALSE`. The default is `FALSE`.  
  
### Remarks  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCKeyMapDialog` class. This example is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#21](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]  
  
##  <a name="cmfckeymapdialog__domodal"></a>  CMFCKeyMapDialog::DoModal  
 Displays a keyboard mapping dialog box.  
  
```  
virtual INT_PTR DoModal();
```  
  
### Return Value  
 A signed integer, such as `IDOK` or `IDCANCEL`, that is passed to the [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#cdialog__enddialog) method. The method, in turn, closes the dialog box. For more information, see [CDialog::DoModal](../../mfc/reference/cdialog-class.md#cdialog__domodal).  
  
### Remarks  
 The keyboard mapping dialog box enables you to select and assign accelerator keys to various categories of commands. In addition, you can copy the selected accelerator keys and their description to the clipboard.  
  
##  <a name="cmfckeymapdialog__formatitem"></a>  CMFCKeyMapDialog::FormatItem  
 Called by the framework to build a string that describes a key mapping. By default, the string contains the command name, the shortcut keys used, and the shortcut key description.  
  
```  
virtual CString FormatItem(int nItem) const;

 
```  
  
### Parameters  
 [in] `nItem`  
 The zero-based index of an item in the internal list of key mappings.  
  
### Return Value  
 A `CString` object that contains the formatted item text.  
  
### Remarks  
  
##  <a name="cmfckeymapdialog__getcommandkeys"></a>  CMFCKeyMapDialog::GetCommandKeys  
 Retrieves a string value. The string contains a list of shortcut keys that are associated with a specified command.  
  
```  
virtual CString GetCommandKeys(UINT uiCmdID) const;

 
```  
  
### Parameters  
 [in] `uiCmdID`  
 A command ID.  
  
### Return Value  
 A semicolon-delimited (';') list of shortcut keys that is associated with the specified command.  
  
### Remarks  
  
##  <a name="cmfckeymapdialog__oninsertitem"></a>  CMFCKeyMapDialog::OnInsertItem  
 Called by the framework before a new item is inserted into an internal list control that supports the keyboard mapping control.  
  
```  
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,  
    int nItem);
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to a toolbar button that is used to map a keyboard key combination to a command name and description. The key map item is stored in an internal list control.  
  
 [in] `nItem`  
 A zero-based index that specifies where to insert the new key map item in the internal list control.  
  
### Remarks  
  
##  <a name="cmfckeymapdialog__onprintheader"></a>  CMFCKeyMapDialog::OnPrintHeader  
 Called by the framework to print the header for the keyboard map on a new page.  
  
```  
virtual int OnPrintHeader(
    CDC& dc,  
    int nPage,  
    int cx) const;

 
```  
  
### Parameters  
 [in] `dc`  
 The device context for the printer.  
  
 [in] `nPage`  
 The page number to print.  
  
 [in] `cx`  
 The horizontal offset of the header, in pixels.  
  
### Return Value  
 If successful, the height of the printed text. For more information, see the Return Value section of [CDC::DrawText](../../mfc/reference/cdc-class.md#cdc__drawtext).  
  
### Remarks  
 The framework uses this method to print the keyboard map. By default, this method prints the page number, application name, and dialog box title.  
  
##  <a name="cmfckeymapdialog__onprintitem"></a>  CMFCKeyMapDialog::OnPrintItem  
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
 [in] `dc`  
 The device context of the printer.  
  
 [in] `nItem`  
 The zero-based index of the item to print.  
  
 [in] `y`  
 The vertical offset between the top of the page and the position of the item.  
  
 [in] `cx`  
 The horizontal offset between the left of the page and the position of the item.  
  
 [in] `bCalcHeight`  
 `TRUE` to calculate the best height for the print item; `FALSE` to truncate the print item so that it fits the default space.  
  
### Return Value  
 The height of the printed item.  
  
### Remarks  
 The framework calls this method to print a key map dialog box item. By default, this method prints the item's command name, shortcut keys, and command description.  
  
##  <a name="cmfckeymapdialog__onsetcolumns"></a>  CMFCKeyMapDialog::OnSetColumns  
 Called by the framework to set captions for the columns in the internal list control that supports the keyboard mapping control.  
  
```  
virtual void OnSetColumns();
```  
  
### Remarks  
 By default, this method obtains the captions for the columns from three resources. The command column caption is from IDS_AFXBARRES_COMMAND, the key column caption is from IDS_AFXBARRES_KEYS, and the description column caption is from IDS_AFXBARRES_DESCRIPTION.  
  
##  <a name="cmfckeymapdialog__printkeymap"></a>  CMFCKeyMapDialog::PrintKeyMap  
 Called by the framework when a user clicks the **Print** button.  
  
```  
virtual void PrintKeyMap();
```  
  
### Remarks  
 The `PrintKeyMap` method prints the key map. It initiates a new print job and then repeatedly calls the [CMFCKeyMapDialog::OnPrintHeader](#cmfckeymapdialog__onprintheader) and [CMFCKeyMapDialog::OnPrintItem](#cmfckeymapdialog__onprintitem) methods until all the key mappings are printed.  
  
##  <a name="cmfckeymapdialog__setcolumnswidth"></a>  CMFCKeyMapDialog::SetColumnsWidth  
 Called by the framework to set the width of the columns in the internal list control that supports the keyboard mapping control.  
  
```  
virtual void SetColumnsWidth();
```  
  
### Remarks  
 This method sets the internal list control's columns to default widths. First, the width of the shortcut keys column is calculated. Then one-third of the remaining width is allocated to the command column and the remaining two-thirds is allocated to the description column.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CKeyboardManager Class](../../mfc/reference/ckeyboardmanager-class.md)
