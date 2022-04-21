---
title: "CComboBox Class"
description: "API reference for the MFC Windows combo box class CComboBox"
ms.date: "08/27/2020"
f1_keywords: ["CComboBox", "AFXWIN/CComboBox", "AFXWIN/CComboBox::CComboBox", "AFXWIN/CComboBox::AddString", "AFXWIN/CComboBox::Clear", "AFXWIN/CComboBox::CompareItem", "AFXWIN/CComboBox::Copy", "AFXWIN/CComboBox::Create", "AFXWIN/CComboBox::Cut", "AFXWIN/CComboBox::DeleteItem", "AFXWIN/CComboBox::DeleteString", "AFXWIN/CComboBox::Dir", "AFXWIN/CComboBox::DrawItem", "AFXWIN/CComboBox::FindString", "AFXWIN/CComboBox::FindStringExact", "AFXWIN/CComboBox::GetComboBoxInfo", "AFXWIN/CComboBox::GetCount", "AFXWIN/CComboBox::GetCueBanner", "AFXWIN/CComboBox::GetCurSel", "AFXWIN/CComboBox::GetDroppedControlRect", "AFXWIN/CComboBox::GetDroppedState", "AFXWIN/CComboBox::GetDroppedWidth", "AFXWIN/CComboBox::GetEditSel", "AFXWIN/CComboBox::GetExtendedUI", "AFXWIN/CComboBox::GetHorizontalExtent", "AFXWIN/CComboBox::GetItemData", "AFXWIN/CComboBox::GetItemDataPtr", "AFXWIN/CComboBox::GetItemHeight", "AFXWIN/CComboBox::GetLBText", "AFXWIN/CComboBox::GetLBTextLen", "AFXWIN/CComboBox::GetLocale", "AFXWIN/CComboBox::GetMinVisible", "AFXWIN/CComboBox::GetTopIndex", "AFXWIN/CComboBox::InitStorage", "AFXWIN/CComboBox::InsertString", "AFXWIN/CComboBox::LimitText", "AFXWIN/CComboBox::MeasureItem", "AFXWIN/CComboBox::Paste", "AFXWIN/CComboBox::ResetContent", "AFXWIN/CComboBox::SelectString", "AFXWIN/CComboBox::SetCueBanner", "AFXWIN/CComboBox::SetCurSel", "AFXWIN/CComboBox::SetDroppedWidth", "AFXWIN/CComboBox::SetEditSel", "AFXWIN/CComboBox::SetExtendedUI", "AFXWIN/CComboBox::SetHorizontalExtent", "AFXWIN/CComboBox::SetItemData", "AFXWIN/CComboBox::SetItemDataPtr", "AFXWIN/CComboBox::SetItemHeight", "AFXWIN/CComboBox::SetLocale", "AFXWIN/CComboBox::SetMinVisibleItems", "AFXWIN/CComboBox::SetTopIndex", "AFXWIN/CComboBox::ShowDropDown"]
helpviewer_keywords: ["CComboBox [MFC], CComboBox", "CComboBox [MFC], AddString", "CComboBox [MFC], Clear", "CComboBox [MFC], CompareItem", "CComboBox [MFC], Copy", "CComboBox [MFC], Create", "CComboBox [MFC], Cut", "CComboBox [MFC], DeleteItem", "CComboBox [MFC], DeleteString", "CComboBox [MFC], Dir", "CComboBox [MFC], DrawItem", "CComboBox [MFC], FindString", "CComboBox [MFC], FindStringExact", "CComboBox [MFC], GetComboBoxInfo", "CComboBox [MFC], GetCount", "CComboBox [MFC], GetCueBanner", "CComboBox [MFC], GetCurSel", "CComboBox [MFC], GetDroppedControlRect", "CComboBox [MFC], GetDroppedState", "CComboBox [MFC], GetDroppedWidth", "CComboBox [MFC], GetEditSel", "CComboBox [MFC], GetExtendedUI", "CComboBox [MFC], GetHorizontalExtent", "CComboBox [MFC], GetItemData", "CComboBox [MFC], GetItemDataPtr", "CComboBox [MFC], GetItemHeight", "CComboBox [MFC], GetLBText", "CComboBox [MFC], GetLBTextLen", "CComboBox [MFC], GetLocale", "CComboBox [MFC], GetMinVisible", "CComboBox [MFC], GetTopIndex", "CComboBox [MFC], InitStorage", "CComboBox [MFC], InsertString", "CComboBox [MFC], LimitText", "CComboBox [MFC], MeasureItem", "CComboBox [MFC], Paste", "CComboBox [MFC], ResetContent", "CComboBox [MFC], SelectString", "CComboBox [MFC], SetCueBanner", "CComboBox [MFC], SetCurSel", "CComboBox [MFC], SetDroppedWidth", "CComboBox [MFC], SetEditSel", "CComboBox [MFC], SetExtendedUI", "CComboBox [MFC], SetHorizontalExtent", "CComboBox [MFC], SetItemData", "CComboBox [MFC], SetItemDataPtr", "CComboBox [MFC], SetItemHeight", "CComboBox [MFC], SetLocale", "CComboBox [MFC], SetMinVisibleItems", "CComboBox [MFC], SetTopIndex", "CComboBox [MFC], ShowDropDown"]
ms.assetid: 4e73b5df-0d2e-4658-9706-38133fb10513
---
# `CComboBox` Class

Provides the functionality of a Windows combo box.

## Syntax

```
class CComboBox : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CComboBox::CComboBox`](#ccombobox)|Constructs a `CComboBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[`CComboBox::AddString`](#addstring)|Adds a string to the end of the list in the list box of a combo box, or at the sorted position for list boxes with the `CBS_SORT` style.|
|[`CComboBox::Clear`](#clear)|Deletes (clears) the current selection, if any, in the edit control.|
|[`CComboBox::CompareItem`](#compareitem)|Called by the framework to determine the relative position of a new list item in a sorted owner-drawn combo box.|
|[`CComboBox::Copy`](#copy)|Copies the current selection, if any, onto the Clipboard in `CF_TEXT` format.|
|[`CComboBox::Create`](#create)|Creates the combo box and attaches it to the `CComboBox` object.|
|[`CComboBox::Cut`](#cut)|Deletes (cuts) the current selection, if any, in the edit control and copies the deleted text onto the Clipboard in `CF_TEXT` format.|
|[`CComboBox::DeleteItem`](#deleteitem)|Called by the framework when a list item is deleted from an owner-drawn combo box.|
|[`CComboBox::DeleteString`](#deletestring)|Deletes a string from the list box of a combo box.|
|[`CComboBox::Dir`](#dir)|Adds a list of file names to the list box of a combo box.|
|[`CComboBox::DrawItem`](#drawitem)|Called by the framework when a visual aspect of an owner-drawn combo box changes.|
|[`CComboBox::FindString`](#findstring)|Finds the first string that contains the specified prefix in the list box of a combo box.|
|[`CComboBox::FindStringExact`](#findstringexact)|Finds the first list-box string (in a combo box) that matches the specified string.|
|[`CComboBox::GetComboBoxInfo`](#getcomboboxinfo)|Retrieves information about the `CComboBox` object.|
|[`CComboBox::GetCount`](#getcount)|Retrieves the number of items in the list box of a combo box.|
|[`CComboBox::GetCueBanner`](#getcuebanner)|Gets the cue text that is displayed for a combo box control.|
|[`CComboBox::GetCurSel`](#getcursel)|Retrieves the index of the currently selected item, if any, in the list box of a combo box.|
|[`CComboBox::GetDroppedControlRect`](#getdroppedcontrolrect)|Retrieves the screen coordinates of the visible (dropped down) list box of a drop-down combo box.|
|[`CComboBox::GetDroppedState`](#getdroppedstate)|Determines whether the list box of a drop-down combo box is visible (dropped down).|
|[`CComboBox::GetDroppedWidth`](#getdroppedwidth)|Retrieves the minimum allowed width for the drop-down list-box portion of a combo box.|
|[`CComboBox::GetEditSel`](#geteditsel)|Gets the starting and ending character positions of the current selection in the edit control of a combo box.|
|[`CComboBox::GetExtendedUI`](#getextendedui)|Determines whether a combo box has the default user interface or the extended user interface.|
|[`CComboBox::GetHorizontalExtent`](#gethorizontalextent)|Returns the width in pixels that the list-box portion of the combo box can be scrolled horizontally.|
|[`CComboBox::GetItemData`](#getitemdata)|Retrieves the application-supplied 32-bit value associated with the specified combo-box item.|
|[`CComboBox::GetItemDataPtr`](#getitemdataptr)|Retrieves the application-supplied 32-bit pointer that is associated with the specified combo-box item.|
|[`CComboBox::GetItemHeight`](#getitemheight)|Retrieves the height of list items in a combo box.|
|[`CComboBox::GetLBText`](#getlbtext)|Gets a string from the list box of a combo box.|
|[`CComboBox::GetLBTextLen`](#getlbtextlen)|Gets the length of a string in the list box of a combo box.|
|[`CComboBox::GetLocale`](#getlocale)|Retrieves the locale identifier for a combo box.|
|[`CComboBox::GetMinVisible`](#getminvisible)|Gets the minimum number of visible items in the drop-down list of the current combo box.|
|[`CComboBox::GetTopIndex`](#gettopindex)|Returns the index of the first visible item in the list-box portion of the combo box.|
|[`CComboBox::InitStorage`](#initstorage)|Preallocates blocks of memory for items and strings in the list-box portion of the combo box.|
|[`CComboBox::InsertString`](#insertstring)|Inserts a string into the list box of a combo box.|
|[`CComboBox::LimitText`](#limittext)|Limits the length of the text that the user can enter into the edit control of a combo box.|
|[`CComboBox::MeasureItem`](#measureitem)|Called by the framework to determine combo box dimensions when an owner-drawn combo box is created.|
|[`CComboBox::Paste`](#paste)|Inserts the data from the Clipboard into the edit control at the current cursor position. Data is inserted only if the Clipboard contains data in `CF_TEXT` format.|
|[`CComboBox::ResetContent`](#resetcontent)|Removes all items from the list box and edit control of a combo box.|
|[`CComboBox::SelectString`](#selectstring)|Searches for a string in the list box of a combo box and, if the string is found, selects the string in the list box and copies the string to the edit control.|
|[`CComboBox::SetCueBanner`](#setcuebanner)|Sets the cue text that is displayed for a combo box control.|
|[`CComboBox::SetCurSel`](#setcursel)|Selects a string in the list box of a combo box.|
|[`CComboBox::SetDroppedWidth`](#setdroppedwidth)|Sets the minimum allowed width for the drop-down list-box portion of a combo box.|
|[`CComboBox::SetEditSel`](#seteditsel)|Selects characters in the edit control of a combo box.|
|[`CComboBox::SetExtendedUI`](#setextendedui)|Selects either the default user interface or the extended user interface for a combo box that has the `CBS_DROPDOWN` or `CBS_DROPDOWNLIST` style.|
|[`CComboBox::SetHorizontalExtent`](#sethorizontalextent)|Sets the width in pixels that the list-box portion of the combo box can be scrolled horizontally.|
|[`CComboBox::SetItemData`](#setitemdata)|Sets the 32-bit value associated with the specified item in a combo box.|
|[`CComboBox::SetItemDataPtr`](#setitemdataptr)|Sets the 32-bit pointer associated with the specified item in a combo box.|
|[`CComboBox::SetItemHeight`](#setitemheight)|Sets the height of list items in a combo box or the height of the edit-control (or static-text) portion of a combo box.|
|[`CComboBox::SetLocale`](#setlocale)|Sets the locale identifier for a combo box.|
|[`CComboBox::SetMinVisibleItems`](#setminvisibleitems)|Sets the minimum number of visible items in the drop-down list of the current combo box.|
|[`CComboBox::SetTopIndex`](#settopindex)|Tells the list-box portion of the combo box to display the item with the specified index at the top.|
|[`CComboBox::ShowDropDown`](#showdropdown)|Shows or hides the list box of a combo box that has the `CBS_DROPDOWN` or `CBS_DROPDOWNLIST` style.|

## Remarks

A combo box consists of a list box combined with either a static control or edit control. The list-box portion of the control may be displayed at all times or may only drop down when the user selects the drop-down arrow next to the control.

The currently selected item (if any) in the list box is displayed in the static or edit control. In addition, if the combo box has the drop-down list style, the user can type the initial character of one of the items in the list, and the list box, if visible, will highlight the next item with that initial character.

The following table compares the three combo-box [styles](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles).

|Style|When is list box visible|Static or edit control|
|-----------|-------------------------------|-----------------------------|
|Simple|Always|Edit|
|Drop-down|When dropped down|Edit|
|Drop-down list|When dropped down|Static|

You can create a `CComboBox` object from either a dialog template or directly in your code. In both cases, first call the constructor `CComboBox` to construct the `CComboBox` object; then call the [`Create`](#create) member function to create the control and attach it to the `CComboBox` object.

If you want to handle Windows notification messages sent by a combo box to its parent (usually a class derived from `CDialog`), add a message-map entry and message-handler member function to the parent class for each message.

Each message-map entry takes the following form:

`ON_Notification( id, memberFxn )`

where `id` specifies the child-window ID of the combo-box control sending the notification and `memberFxn` is the name of the parent member function you have written to handle the notification.

The parent's function prototype is as follows:

`afx_msg void memberFxn( );`

The order in which certain notifications will be sent cannot be predicted. In particular, a `CBN_SELCHANGE` notification may occur either before or after a `CBN_CLOSEUP` notification.

Potential message-map entries are the following:

- `ON_CBN_CLOSEUP` (Windows 3.1 and later.) The list box of a combo box has closed. This notification message is not sent for a combo box that has the [`CBS_SIMPLE`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

- `ON_CBN_DBLCLK` The user double-clicks a string in the list box of a combo box. This notification message is only sent for a combo box with the `CBS_SIMPLE` style. For a combo box with the [`CBS_DROPDOWN`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, a double-click cannot occur because a single click hides the list box.

- `ON_CBN_DROPDOWN` The list box of a combo box is about to drop down (be made visible). This notification message can occur only for a combo box with the `CBS_DROPDOWN` or `CBS_DROPDOWNLIST` style.

- `ON_CBN_EDITCHANGE` The user has taken an action that may have altered the text in the edit-control portion of a combo box. Unlike the `CBN_EDITUPDATE` message, this message is sent after Windows updates the screen. It is not sent if the combo box has the `CBS_DROPDOWNLIST` style.

- `ON_CBN_EDITUPDATE` The edit-control portion of a combo box is about to display altered text. This notification message is sent after the control has formatted the text but before it displays the text. It is not sent if the combo box has the `CBS_DROPDOWNLIST` style.

- `ON_CBN_ERRSPACE` The combo box cannot allocate enough memory to meet a specific request.

- `ON_CBN_SELENDCANCEL` (Windows 3.1 and later.) Indicates the user's selection should be canceled. The user clicks an item and then clicks another window or control to hide the list box of a combo box. This notification message is sent before the `CBN_CLOSEUP` notification message to indicate that the user's selection should be ignored. The `CBN_SELENDCANCEL` or `CBN_SELENDOK` notification message is sent even if the `CBN_CLOSEUP` notification message is not sent (as in the case of a combo box with the `CBS_SIMPLE` style).

- `ON_CBN_SELENDOK` The user selects an item and then either presses the ENTER key or clicks the DOWN ARROW key to hide the list box of a combo box. This notification message is sent before the `CBN_CLOSEUP` message to indicate that the user's selection should be considered valid. The `CBN_SELENDCANCEL` or `CBN_SELENDOK` notification message is sent even if the `CBN_CLOSEUP` notification message is not sent (as in the case of a combo box with the `CBS_SIMPLE` style).

- `ON_CBN_KILLFOCUS` The combo box is losing the input focus.

- `ON_CBN_SELCHANGE` The selection in the list box of a combo box is about to be changed as a result of the user either clicking in the list box or changing the selection by using the arrow keys. When processing this message, the text in the edit control of the combo box can only be retrieved via `GetLBText` or another similar function. `GetWindowText` cannot be used.

- `ON_CBN_SETFOCUS` The combo box receives the input focus.

If you create a `CComboBox` object within a dialog box (through a dialog resource), the `CComboBox` object is automatically destroyed when the user closes the dialog box.

If you embed a `CComboBox` object within another window object, you do not need to destroy it. If you create the `CComboBox` object on the stack, it is destroyed automatically. If you create the `CComboBox` object on the heap by using the **`new`** function, you must call **`delete`** on the object to destroy it when the Windows combo box is destroyed.

**Note** If you want to handle `WM_KEYDOWN` and `WM_CHAR` messages, you have to subclass the combo box's edit and list box controls, derive classes from `CEdit` and `CListBox`, and add handlers for those messages to the derived classes. For more information, see [`CWnd::SubclassWindow`](../../mfc/reference/cwnd-class.md#subclasswindow).

## Inheritance Hierarchy

[`CObject`](../../mfc/reference/cobject-class.md)

[`CCmdTarget`](../../mfc/reference/ccmdtarget-class.md)

[`CWnd`](../../mfc/reference/cwnd-class.md)

`CComboBox`

## Requirements

**Header:** `afxwin.h`

## <a name="addstring"></a> `CComboBox::AddString`

Adds a string to the list box of a combo box.

```
int AddString(LPCTSTR lpszString);
```

### Parameters

*`lpszString`*<br/>
Points to the null-terminated string that is to be added.

### Return Value

If the return value is greater than or equal to 0, it is the zero-based index to the string in the list box. The return value is `CB_ERR` if an error occurs; the return value is `CB_ERRSPACE` if insufficient space is available to store the new string.

### Remarks

If the list box was not created with the [`CBS_SORT`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, the string is added to the end of the list. Otherwise, the string is inserted into the list, and the list is sorted.

> [!NOTE]
> This function is not supported by the Windows `ComboBoxEx` control. For more information on this control, see [`ComboBoxEx` Controls](/windows/win32/Controls/comboboxex-controls) in the Windows SDK.

To insert a string into a specific location within the list, use the [`InsertString`](#insertstring) member function.

### Example

[!code-cpp[NVC_MFC_CComboBox#3](../../mfc/reference/codesnippet/cpp/ccombobox-class_1.cpp)]

## <a name="ccombobox"></a> `CComboBox::CComboBox`

Constructs a `CComboBox` object.

```
CComboBox();
```

### Example

[!code-cpp[NVC_MFC_CComboBox#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_2.cpp)]

## <a name="clear"></a> `CComboBox::Clear`

Deletes (clears) the current selection, if any, in the edit control of the combo box.

```cpp
void Clear();
```

### Remarks

To delete the current selection and place the deleted contents onto the Clipboard, use the [`Cut`](#cut) member function.

### Example

[!code-cpp[NVC_MFC_CComboBox#4](../../mfc/reference/codesnippet/cpp/ccombobox-class_3.cpp)]

## <a name="compareitem"></a> `CComboBox::CompareItem`

Called by the framework to determine the relative position of a new item in the list-box portion of a sorted owner-draw combo box.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### Parameters

*`lpCompareItemStruct`*<br/>
A long pointer to a [`COMPAREITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-compareitemstruct) structure.

### Return Value

Indicates the relative position of the two items described in the `COMPAREITEMSTRUCT` structure. It can be any of the following values:

|Value|Meaning|
|-----------|-------------|
|- 1|Item 1 sorts before item 2.|
|0|Item 1 and item 2 sort the same.|
|1|Item 1 sorts after item 2.|

See [`CWnd::OnCompareItem`](../../mfc/reference/cwnd-class.md#oncompareitem) for a description of `COMPAREITEMSTRUCT`.

### Remarks

By default, this member function does nothing. If you create an owner-draw combo box with the `LBS_SORT` style, you must override this member function to assist the framework in sorting new items added to the list box.

### Example

[!code-cpp[NVC_MFC_CComboBox#5](../../mfc/reference/codesnippet/cpp/ccombobox-class_4.cpp)]

## <a name="copy"></a> `CComboBox::Copy`

Copies the current selection, if any, in the edit control of the combo box onto the Clipboard in `CF_TEXT` format.

```cpp
void Copy();
```

### Example

[!code-cpp[NVC_MFC_CComboBox#6](../../mfc/reference/codesnippet/cpp/ccombobox-class_5.cpp)]

## <a name="create"></a> `CComboBox::Create`

Creates the combo box and attaches it to the `CComboBox` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*`dwStyle`*<br/>
Specifies the style of the combo box. Apply any combination of [combo-box styles](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) to the box.

*`rect`*<br/>
Points to the position and size of the combo box. Can be a [`RECT` structure](/windows/win32/api/windef/ns-windef-rect) or a `CRect` object.

*`pParentWnd`*<br/>
Specifies the combo box's parent window (usually a `CDialog`). It must not be `NULL`.

*`nID`*<br/>
Specifies the combo box's control ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CComboBox` object in two steps. First, call the constructor and then call `Create`, which creates the Windows combo box and attaches it to the `CComboBox` object.

When `Create` executes, Windows sends the [`WM_NCCREATE`](../../mfc/reference/cwnd-class.md#onnccreate), [`WM_CREATE`](../../mfc/reference/cwnd-class.md#oncreate), [`WM_NCCALCSIZE`](../../mfc/reference/cwnd-class.md#onnccalcsize), and [`WM_GETMINMAXINFO`](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messages to the combo box.

These messages are handled by default by the [`OnNcCreate`](../../mfc/reference/cwnd-class.md#onnccreate), [`OnCreate`](../../mfc/reference/cwnd-class.md#oncreate), [`OnNcCalcSize`](../../mfc/reference/cwnd-class.md#onnccalcsize), and [`OnGetMinMaxInfo`](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) member functions in the `CWnd` base class. To extend the default message handling, derive a class from `CComboBox`, add a message map to the new class, and override the preceding message-handler member functions. Override `OnCreate`, for example, to perform needed initialization for a new class.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a combo-box control. :

- `WS_CHILD` Always

- `WS_VISIBLE` Usually

- `WS_DISABLED` Rarely

- `WS_VSCROLL` To add vertical scrolling for the list box in the combo box

- `WS_HSCROLL` To add horizontal scrolling for the list box in the combo box

- `WS_GROUP` To group controls

- `WS_TABSTOP` To include the combo box in the tabbing order

### Example

[!code-cpp[NVC_MFC_CComboBox#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_6.cpp)]

## <a name="cut"></a> `CComboBox::Cut`

Deletes (cuts) the current selection, if any, in the combo-box edit control and copies the deleted text onto the Clipboard in `CF_TEXT` format.

```cpp
void Cut();
```

### Remarks

To delete the current selection without placing the deleted text onto the Clipboard, call the [`Clear`](#clear) member function.

### Example

[!code-cpp[NVC_MFC_CComboBox#7](../../mfc/reference/codesnippet/cpp/ccombobox-class_7.cpp)]

## <a name="deleteitem"></a> `CComboBox::DeleteItem`

Called by the framework when the user deletes an item from an owner-draw `CComboBox` object or destroys the combo box.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### Parameters

*`lpDeleteItemStruct`*<br/>
A long pointer to a Windows [`DELETEITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) structure that contains information about the deleted item. See [`CWnd::OnDeleteItem`](../../mfc/reference/cwnd-class.md#ondeleteitem) for a description of this structure.

### Remarks

The default implementation of this function does nothing. Override this function to redraw the combo box as needed.

### Example

[!code-cpp[NVC_MFC_CComboBox#8](../../mfc/reference/codesnippet/cpp/ccombobox-class_8.cpp)]

## <a name="deletestring"></a> `CComboBox::DeleteString`

Deletes the item in position *`nIndex`* from the combo box.

```
int DeleteString(UINT nIndex);
```

### Parameters

*`nIndex`*<br/>
Specifies the index to the string that is to be deleted.

### Return Value

If the return value is greater than or equal to 0, then it is a count of the strings remaining in the list. The return value is `CB_ERR` if *`nIndex`* specifies an index greater than the number of items in the list.

### Remarks

All items following *`nIndex`* now move down one position. For example, if a combo box contains two items, deleting the first item will cause the remaining item to now be in the first position. *`nIndex`*=0 for the item in the first position.

### Example

[!code-cpp[NVC_MFC_CComboBox#9](../../mfc/reference/codesnippet/cpp/ccombobox-class_9.cpp)]

## <a name="dir"></a> `CComboBox::Dir`

Adds a list of filenames or drives to the list box of a combo box.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### Parameters

*`attr`*<br/>
Can be any combination of the **`enum`** values described in [`CFile::GetStatus`](../../mfc/reference/cfile-class.md#getstatus) or any combination of the following values:

- `DDL_READWRITE` File can be read from or written to.

- `DDL_READONLY` File can be read from but not written to.

- `DDL_HIDDEN` File is hidden and does not appear in a directory listing.

- `DDL_SYSTEM` File is a system file.

- `DDL_DIRECTORY` The name specified by *`lpszWildCard`* specifies a directory.

- `DDL_ARCHIVE` File has been archived.

- `DDL_DRIVES` Include all drives that match the name specified by *`lpszWildCard`*.

- `DDL_EXCLUSIVE` Exclusive flag. If the exclusive flag is set, only files of the specified type are listed. Otherwise, files of the specified type are listed in addition to "normal" files.

*`lpszWildCard`*<br/>
Points to a file-specification string. The string can contain wildcards (for example, `*.*`).

### Return Value

If the return value is greater than or equal to 0, it is the zero-based index of the last filename added to the list. The return value is `CB_ERR` if an error occurs; the return value is `CB_ERRSPACE` if insufficient space is available to store the new strings.

### Remarks

This function is not supported by the Windows `ComboBoxEx` control. For more information on this control, see [`ComboBoxEx` Controls](/windows/win32/Controls/comboboxex-controls) in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CComboBox#10](../../mfc/reference/codesnippet/cpp/ccombobox-class_10.cpp)]

## <a name="drawitem"></a> `CComboBox::DrawItem`

Called by the framework when a visual aspect of an owner-draw combo box changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*`lpDrawItemStruct`*<br/>
A pointer to a [`DRAWITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed. See [`CWnd::OnDrawItem`](../../mfc/reference/cwnd-class.md#ondrawitem) for a description of this structure.

By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CComboBox` object. Before this member function terminates, the application should restore all graphics device interface (GDI) objects selected for the display context supplied in *`lpDrawItemStruct`*.

### Example

[!code-cpp[NVC_MFC_CComboBox#11](../../mfc/reference/codesnippet/cpp/ccombobox-class_11.cpp)]

## <a name="findstring"></a> `CComboBox::FindString`

Finds, but doesn't select, the first string that contains the specified prefix in the list box of a combo box.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszString) const;
```

### Parameters

*`nStartAfter`*<br/>
Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nStartAfter`*. If -1, the entire list box is searched from the beginning.

*`lpszString`*<br/>
Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string can contain any combination of uppercase and lowercase letters.

### Return Value

If the return value is greater than or equal to 0, it is the zero-based index of the matching item. It is `CB_ERR` if the search was unsuccessful.

### Remarks

This function is not supported by the Windows `ComboBoxEx` control. For more information on this control, see [`ComboBoxEx` Controls](/windows/win32/Controls/comboboxex-controls) in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CComboBox#12](../../mfc/reference/codesnippet/cpp/ccombobox-class_12.cpp)]

## <a name="findstringexact"></a> `CComboBox::FindStringExact`

Call the `FindStringExact` member function to find the first list-box string (in a combo box) that matches the string specified in *`lpszFind`*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### Parameters

*`nIndexStart`*<br/>
Specifies the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nIndexStart`*. If *`nIndexStart`* is -1, the entire list box is searched from the beginning.

*`lpszFind`*<br/>
Points to the null-terminated string to search for. This string can contain a complete filename, including the extension. The search is not case sensitive, so this string can contain any combination of uppercase and lowercase letters.

### Return Value

The zero-based index of the matching item, or `CB_ERR` if the search was unsuccessful.

### Remarks

If the combo box was created with an owner-draw style but without the [`CBS_HASSTRINGS`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, `FindStringExact` attempts to match the doubleword value against the value of *lpszFind*.

### Example

[!code-cpp[NVC_MFC_CComboBox#13](../../mfc/reference/codesnippet/cpp/ccombobox-class_13.cpp)]

## <a name="getcomboboxinfo"></a> `CComboBox::GetComboBoxInfo`

Retrieves information for the `CComboBox` object.

```
BOOL GetComboBoxInfo(PCOMBOBOXINFO pcbi) const;
```

### Parameters

*`pcbi*<br/>
A pointer to the [`COMBOBOXINFO`](/windows/win32/api/winuser/ns-winuser-comboboxinfo) structure.

### Return Value

Returns `TRUE` on success, `FALSE` on failure.

### Remarks

This member function emulates the functionality of the [`CB_GETCOMBOBOXINFO`](/windows/win32/Controls/cb-getcomboboxinfo) message, as described in the Windows SDK.

## <a name="getcount"></a> `CComboBox::GetCount`

Call this member function to retrieve the number of items in the list-box portion of a combo box.

```
int GetCount() const;
```

### Return Value

The number of items. The returned count is one greater than the index value of the last item (the index is zero-based). It is `CB_ERR` if an error occurs.

### Example

[!code-cpp[NVC_MFC_CComboBox#14](../../mfc/reference/codesnippet/cpp/ccombobox-class_14.cpp)]

## <a name="getcuebanner"></a> `CComboBox::GetCueBanner`

Gets the cue text that is displayed for a combo box control.

```
CString GetCueBanner() const;

BOOL GetCueBanner(
    LPTSTR lpszText,
    int cchText) const;
```

### Parameters

*`lpszText`*\
[out] Pointer to a buffer that receives the cue banner text.

*`cchText`*\
[in] Size of the buffer that the *`lpszText`* parameter points to.

### Return Value

In the first overload, a [`CString`](../../atl-mfc-shared/using-cstring.md) object that contains the cue banner text if it exists; otherwise, a `CString` object that has zero length.

-or-

In the second overload, `TRUE` if this method is successful; otherwise, `FALSE`.

### Remarks

Cue text is a prompt that is displayed in the input area of the combo box control. The cue text is displayed until the user provides input.

This method sends the [`CB_GETCUEBANNER`](/windows/win32/Controls/cb-getcuebanner) message, which is described in the Windows SDK.

## <a name="getcursel"></a> `CComboBox::GetCurSel`

Call this member function to determine which item in the combo box is selected.

```
int GetCurSel() const;
```

### Return Value

The zero-based index of the currently selected item in the list box of a combo box, or `CB_ERR` if no item is selected.

### Remarks

`GetCurSel` returns an index into the list.

### Example

[!code-cpp[NVC_MFC_CComboBox#15](../../mfc/reference/codesnippet/cpp/ccombobox-class_15.cpp)]

## <a name="getdroppedcontrolrect"></a> `CComboBox::GetDroppedControlRect`

Call the `GetDroppedControlRect` member function to retrieve the screen coordinates of the visible (dropped-down) list box of a drop-down combo box.

```cpp
void GetDroppedControlRect(LPRECT lprect) const;
```

### Parameters

*`lprect`*<br/>
Points to the [RECT structure](/windows/win32/api/windef/ns-windef-rect) that is to receive the coordinates.

### Example

[!code-cpp[NVC_MFC_CComboBox#16](../../mfc/reference/codesnippet/cpp/ccombobox-class_16.cpp)]

## <a name="getdroppedstate"></a> `CComboBox::GetDroppedState`

Call the `GetDroppedState` member function to determine whether the list box of a drop-down combo box is visible (dropped down).

```
BOOL GetDroppedState() const;
```

### Return Value

Nonzero if the list box is visible; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CComboBox#17](../../mfc/reference/codesnippet/cpp/ccombobox-class_17.cpp)]

## <a name="getdroppedwidth"></a> `CComboBox::GetDroppedWidth`

Call this function to retrieve the minimum allowable width, in pixels, of the list box of a combo box.

```
int GetDroppedWidth() const;
```

### Return Value

If successful, the minimum allowable width, in pixels; otherwise, `CB_ERR`.

### Remarks

This function only applies to combo boxes with the [`CBS_DROPDOWN`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

By default, the minimum allowable width of the drop-down list box is 0. The minimum allowable width can be set by calling [`SetDroppedWidth`](#setdroppedwidth). When the list-box portion of the combo box is displayed, its width is the larger of the minimum allowable width or the combo box width.

### Example

  See the example for [`SetDroppedWidth`](#setdroppedwidth).

## <a name="geteditsel"></a> `CComboBox::GetEditSel`

Gets the starting and ending character positions of the current selection in the edit control of a combo box.

```
DWORD GetEditSel() const;
```

### Return Value

A 32-bit value that contains the starting position in the low-order word and the position of the first nonselected character after the end of the selection in the high-order word. If this function is used on a combo box without an edit control, `CB_ERR` is returned.

### Example

[!code-cpp[NVC_MFC_CComboBox#18](../../mfc/reference/codesnippet/cpp/ccombobox-class_18.cpp)]

## <a name="getextendedui"></a> `CComboBox::GetExtendedUI`

Call the `GetExtendedUI` member function to determine whether a combo box has the default user interface or the extended user interface.

```
BOOL GetExtendedUI() const;
```

### Return Value

Nonzero if the combo box has the extended user interface; otherwise 0.

### Remarks

The extended user interface can be identified in the following ways:

- Clicking the static control displays the list box only for combo boxes with the [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

- Pressing the DOWN ARROW key displays the list box (F4 is disabled).

Scrolling in the static control is disabled when the item list is not visible (arrow keys are disabled).

### Example

[!code-cpp[NVC_MFC_CComboBox#19](../../mfc/reference/codesnippet/cpp/ccombobox-class_19.cpp)]

## <a name="gethorizontalextent"></a> `CComboBox::GetHorizontalExtent`

Retrieves from the combo box the width in pixels by which the list-box portion of the combo box can be scrolled horizontally.

```
UINT GetHorizontalExtent() const;
```

### Return Value

The scrollable width of the list-box portion of the combo box, in pixels.

### Remarks

This is applicable only if the list-box portion of the combo box has a horizontal scroll bar.

### Example

[!code-cpp[NVC_MFC_CComboBox#20](../../mfc/reference/codesnippet/cpp/ccombobox-class_20.cpp)]

## <a name="getitemdata"></a> `CComboBox::GetItemData`

Retrieves the application-supplied 32-bit value associated with the specified combo-box item.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index of an item in the combo box's list box.

### Return Value

The 32-bit value associated with the item, or `CB_ERR` if an error occurs.

### Remarks

The 32-bit value can be set with the *`dwItemData`* parameter of a [`SetItemData`](#setitemdata) member function call. Use the `GetItemDataPtr` member function if the 32-bit value to be retrieved is a pointer (**`void`** <strong>\*</strong>).

### Example

[!code-cpp[NVC_MFC_CComboBox#21](../../mfc/reference/codesnippet/cpp/ccombobox-class_21.cpp)]

## <a name="getitemdataptr"></a> `CComboBox::GetItemDataPtr`

Retrieves the application-supplied 32-bit value associated with the specified combo-box item as a pointer (**`void`** <strong>\*</strong>).

```cpp
void* GetItemDataPtr(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index of an item in the combo box's list box.

### Return Value

Retrieves a pointer, or -1 if an error occurs.

### Example

[!code-cpp[NVC_MFC_CComboBox#22](../../mfc/reference/codesnippet/cpp/ccombobox-class_22.cpp)]

## <a name="getitemheight"></a> `CComboBox::GetItemHeight`

Call the `GetItemHeight` member function to retrieve the height of list items in a combo box.

```
int GetItemHeight(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the component of the combo box whose height is to be retrieved. If the *`nIndex`* parameter is -1, the height of the edit-control (or static-text) portion of the combo box is retrieved. If the combo box has the [`CBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, *`nIndex`* specifies the zero-based index of the list item whose height is to be retrieved. Otherwise, *`nIndex`* should be set to 0.

### Return Value

The height, in pixels, of the specified item in a combo box. The return value is `CB_ERR` if an error occurs.

### Example

[!code-cpp[NVC_MFC_CComboBox#23](../../mfc/reference/codesnippet/cpp/ccombobox-class_23.cpp)]

## <a name="getlbtext"></a> `CComboBox::GetLBText`

Gets a string from the list box of a combo box.

```
int GetLBText(
    int nIndex,
    LPTSTR lpszText) const;

void GetLBText(
    int nIndex,
    CString& rString) const;
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index of the list-box string to be copied.

*`lpszText`*<br/>
Points to a buffer that is to receive the string. The buffer must have sufficient space for the string and a terminating null character.

*`rString`*<br/>
A reference to a `CString`.

### Return Value

The length (in bytes) of the string, excluding the terminating null character. If *`nIndex`* does not specify a valid index, the return value is `CB_ERR`.

### Remarks

The second form of this member function fills a `CString` object with the item's text.\
If *`nIndex`* is invalid, this function throws an `E_INVALIDARG` exception (error code: `-2147024809`, `0x80070057`).

### Example

[!code-cpp[NVC_MFC_CComboBox#24](../../mfc/reference/codesnippet/cpp/ccombobox-class_24.cpp)]

## <a name="getlbtextlen"></a> `CComboBox::GetLBTextLen`

Gets the length of a string in the list box of a combo box.

```
int GetLBTextLen(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index of the list-box string.

### Return Value

The length of the string in bytes, excluding the terminating null character. If *`nIndex`* does not specify a valid index, the return value is `CB_ERR`.

### Example

  See the example for [`CComboBox::GetLBText`](#getlbtext).

## <a name="getlocale"></a> `CComboBox::GetLocale`

Retrieves the locale used by the combo box.

```
LCID GetLocale() const;
```

### Return Value

The locale identifier (LCID) value for the strings in the combo box.

### Remarks

The locale is used, for example, to determine the sort order of the strings in a sorted combo box.

### Example

  See the example for [`CComboBox::SetLocale`](#setlocale).

## <a name="getminvisible"></a> `CComboBox::GetMinVisible`

Gets the minimum number of visible items in the drop-down list of the current combo box control.

```
int GetMinVisible() const;
```

### Return Value

The minimum number of visible items in the current drop-down list.

### Remarks

This method sends the [`CB_GETMINVISIBLE`](/windows/win32/Controls/cb-setminvisible) message, which is described in the Windows SDK.

## <a name="gettopindex"></a> `CComboBox::GetTopIndex`

Retrieves the zero-based index of the first visible item in the list-box portion of the combo box.

```
int GetTopIndex() const;
```

### Return Value

The zero-based index of the first visible item in the list-box portion of the combo box if successful, `CB_ERR` otherwise.

### Remarks

Initially, item 0 is at the top of the list box, but if the list box is scrolled, another item may be at the top.

### Example

[!code-cpp[NVC_MFC_CComboBox#25](../../mfc/reference/codesnippet/cpp/ccombobox-class_25.cpp)]

## <a name="initstorage"></a> `CComboBox::InitStorage`

Allocates memory for storing list box items in the list-box portion of the combo box.

```
int InitStorage(
    int nItems,
    UINT nBytes);
```

### Parameters

*`nItems`*<br/>
Specifies the number of items to add.

*`nBytes`*<br/>
Specifies the amount of memory, in bytes, to allocate for item strings.

### Return Value

If successful, the maximum number of items that the list-box portion of the combo box can store before a memory reallocation is needed, otherwise `CB_ERRSPACE`, meaning not enough memory is available.

### Remarks

Call this function before adding a large number of items to the list-box portion of the `CComboBox`.

Windows 95/98 only: The *`wParam`* parameter is limited to 16-bit values. This means list boxes cannot contain more than 32,767 items. Although the number of items is restricted, the total size of the items in a list box is limited only by available memory.

This function helps speed up the initialization of list boxes that have a large number of items (more than 100). It preallocates the specified amount of memory so that subsequent [`AddString`](#addstring), [`InsertString`](#insertstring), and [`Dir`](#dir) functions take the shortest possible time. You can use estimates for the parameters. If you overestimate, some extra memory is allocated; if you underestimate, the normal allocation is used for items that exceed the preallocated amount.

### Example

[!code-cpp[NVC_MFC_CComboBox#26](../../mfc/reference/codesnippet/cpp/ccombobox-class_26.cpp)]

## <a name="insertstring"></a> `CComboBox::InsertString`

Inserts a string into the list box of a combo box.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszString);
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index to the position in the list box that will receive the string. If this parameter is -1, the string is added to the end of the list.

*`lpszString`*<br/>
Points to the null-terminated string that is to be inserted.

### Return Value

The zero-based index of the position at which the string was inserted. The return value is `CB_ERR` if an error occurs. The return value is `CB_ERRSPACE` if insufficient space is available to store the new string.

### Remarks

Unlike the [`AddString`](#addstring) member function, the `InsertString` member function does not cause a list with the [`CBS_SORT`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style to be sorted.

> [!NOTE]
> This function is not supported by the Windows `ComboBoxEx` control. For more information on this control, see [`ComboBoxEx` Controls](/windows/win32/Controls/comboboxex-controls) in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CComboBox#27](../../mfc/reference/codesnippet/cpp/ccombobox-class_27.cpp)]

## <a name="limittext"></a> `CComboBox::LimitText`

Limits the length in bytes of the text that the user can enter into the edit control of a combo box.

```
BOOL LimitText(int nMaxChars);
```

### Parameters

*`nMaxChars`*<br/>
Specifies the length (in bytes) of the text that the user can enter. If this parameter is 0, the text length is set to 65,535 bytes.

### Return Value

Nonzero if successful. If called for a combo box with the style [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or for a combo box without an edit control, the return value is `CB_ERR`.

### Remarks

If the combo box does not have the style [`CBS_AUTOHSCROLL`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles), setting the text limit to be larger than the size of the edit control will have no effect.

`LimitText` only limits the text the user can enter. It has no effect on any text already in the edit control when the message is sent, nor does it affect the length of the text copied to the edit control when a string in the list box is selected.

### Example

[!code-cpp[NVC_MFC_CComboBox#28](../../mfc/reference/codesnippet/cpp/ccombobox-class_28.cpp)]

## <a name="measureitem"></a> `CComboBox::MeasureItem`

Called by the framework when a combo box with an owner-draw style is created.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### Parameters

*`lpMeasureItemStruct`*<br/>
A long pointer to a [`MEASUREITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-measureitemstruct) structure.

### Remarks

By default, this member function does nothing. Override this member function and fill in the `MEASUREITEMSTRUCT` structure to inform Windows of the dimensions of the list box in the combo box. If the combo box is created with the [`CBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, the framework calls this member function for each item in the list box. Otherwise, this member is called only once.

Using the `CBS_OWNERDRAWFIXED` style in an owner-draw combo box created with the [`SubclassDlgItem`](../../mfc/reference/cwnd-class.md#subclassdlgitem) member function of `CWnd` involves further programming considerations. See the discussion in [Technical Note 14](../../mfc/tn014-custom-controls.md).

See [`CWnd::OnMeasureItem`](../../mfc/reference/cwnd-class.md#onmeasureitem) for a description of the `MEASUREITEMSTRUCT` structure.

### Example

[!code-cpp[NVC_MFC_CComboBox#29](../../mfc/reference/codesnippet/cpp/ccombobox-class_29.cpp)]

## <a name="paste"></a> `CComboBox::Paste`

Inserts the data from the Clipboard into the edit control of the combo box at the current cursor position.

```cpp
void Paste();
```

### Remarks

Data is inserted only if the Clipboard contains data in `CF_TEXT` format.

### Example

[!code-cpp[NVC_MFC_CComboBox#30](../../mfc/reference/codesnippet/cpp/ccombobox-class_30.cpp)]

## <a name="resetcontent"></a> `CComboBox::ResetContent`

Removes all items from the list box and edit control of a combo box.

```cpp
void ResetContent();
```

### Example

[!code-cpp[NVC_MFC_CComboBox#31](../../mfc/reference/codesnippet/cpp/ccombobox-class_31.cpp)]

## <a name="selectstring"></a> `CComboBox::SelectString`

Searches for a string in the list box of a combo box, and if the string is found, selects the string in the list box and copies it to the edit control.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszString);
```

### Parameters

*`nStartAfter`*<br/>
Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nStartAfter`*. If -1, the entire list box is searched from the beginning.

*`lpszString`*<br/>
Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string can contain any combination of uppercase and lowercase letters.

### Return Value

The zero-based index of the selected item if the string was found. If the search was unsuccessful, the return value is `CB_ERR` and the current selection is not changed.

### Remarks

A string is selected only if its initial characters (from the starting point) match the characters in the prefix string.

Note that the `SelectString` and `FindString` member functions both find a string, but the `SelectString` member function also selects the string.

### Example

[!code-cpp[NVC_MFC_CComboBox#32](../../mfc/reference/codesnippet/cpp/ccombobox-class_32.cpp)]

## <a name="setcuebanner"></a> `CComboBox::SetCueBanner`

Sets the cue text that is displayed for a combo box control.

```
BOOL SetCueBanner(LPCTSTR lpszText);
```

### Parameters

*`lpszText`*\
[in] Pointer to a null-terminated buffer that contains the cue text.

### Return Value

`TRUE` if the method is successful; otherwise, `FALSE`.

### Remarks

Cue text is a prompt that is displayed in the input area of the combo box control. The cue text is displayed until the user provides input.

This method sends the [`CB_SETCUEBANNER`](/windows/win32/Controls/cb-setcuebanner) message, which is described in the Windows SDK.

### Example

The first code example defines the variable, *`m_combobox`*, that is used to programmatically access the combo box control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

The next code example sets the cue banner for the combo box control.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

## <a name="setcursel"></a> `CComboBox::SetCurSel`

Selects a string in the list box of a combo box.

```
int SetCurSel(int nSelect);
```

### Parameters

*`nSelect`*<br/>
Specifies the zero-based index of the string to select. If -1, any current selection in the list box is removed and the edit control is cleared.

### Return Value

The zero-based index of the item selected if the message is successful. The return value is `CB_ERR` if *`nSelect`* is greater than the number of items in the list or if *`nSelect`* is set to -1, which clears the selection.

### Remarks

If necessary, the list box scrolls the string into view (if the list box is visible). The text in the edit control of the combo box is changed to reflect the new selection. Any previous selection in the list box is removed.

### Example

[!code-cpp[NVC_MFC_CComboBox#33](../../mfc/reference/codesnippet/cpp/ccombobox-class_35.cpp)]

## <a name="setdroppedwidth"></a> `CComboBox::SetDroppedWidth`

Call this function to set the minimum allowable width, in pixels, of the list box of a combo box.

```
int SetDroppedWidth(UINT nWidth);
```

### Parameters

*`nWidth`*<br/>
The minimum allowable width of the list-box portion of the combo box, in pixels.

### Return Value

If successful, the new width of the list box, otherwise `CB_ERR`.

### Remarks

This function only applies to combo boxes with the [`CBS_DROPDOWN`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

By default, the minimum allowable width of the drop-down list box is 0. When the list-box portion of the combo box is displayed, its width is the larger of the minimum allowable width or the combo box width.

### Example

[!code-cpp[NVC_MFC_CComboBox#34](../../mfc/reference/codesnippet/cpp/ccombobox-class_36.cpp)]

## <a name="seteditsel"></a> `CComboBox::SetEditSel`

Selects characters in the edit control of a combo box.

```
BOOL SetEditSel(
    int nStartChar,
    int nEndChar);
```

### Parameters

*`nStartChar`*<br/>
Specifies the starting position. If the starting position is set to -1, then any existing selection is removed.

*`nEndChar`*<br/>
Specifies the ending position. If the ending position is set to -1, then all text from the starting position to the last character in the edit control is selected.

### Return Value

Nonzero if the member function is successful; otherwise 0. It is `CB_ERR` if `CComboBox` has the [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style or does not have a list box.

### Remarks

The positions are zero-based. To select the first character of the edit control, you specify a starting position of 0. The ending position is for the character just after the last character to select. For example, to select the first four characters of the edit control, you would use a starting position of 0 and an ending position of 4.

> [!NOTE]
> This function is not supported by the Windows `ComboBoxEx` control. For more information on this control, see [`ComboBoxEx` Controls](/windows/win32/Controls/comboboxex-controls) in the Windows SDK.

### Example

  See the example for [`CComboBox::GetEditSel`](#geteditsel).

## <a name="setextendedui"></a> `CComboBox::SetExtendedUI`

Call the `SetExtendedUI` member function to select either the default user interface or the extended user interface for a combo box that has the [`CBS_DROPDOWN`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

```
int SetExtendedUI(BOOL bExtended = TRUE);
```

### Parameters

*`bExtended`*<br/>
Specifies whether the combo box should use the extended user interface or the default user interface. A value of `TRUE` selects the extended user interface; a value of `FALSE` selects the standard user interface.

### Return Value

`CB_OKAY` if the operation is successful, or `CB_ERR` if an error occurs.

### Remarks

The extended user interface can be identified in the following ways:

- Clicking the static control displays the list box only for combo boxes with the `CBS_DROPDOWNLIST` style.

- Pressing the DOWN ARROW key displays the list box (F4 is disabled).

Scrolling in the static control is disabled when the item list is not visible (the arrow keys are disabled).

### Example

  See the example for [`CComboBox::GetExtendedUI`](#getextendedui).

## <a name="sethorizontalextent"></a> `CComboBox::SetHorizontalExtent`

Sets the width, in pixels, by which the list-box portion of the combo box can be scrolled horizontally.

```cpp
void SetHorizontalExtent(UINT nExtent);
```

### Parameters

*`nExtent`*<br/>
Specifies the number of pixels by which the list-box portion of the combo box can be scrolled horizontally.

### Remarks

If the width of the list box is smaller than this value, the horizontal scroll bar will horizontally scroll items in the list box. If the width of the list box is equal to or greater than this value, the horizontal scroll bar is hidden or, if the combo box has the [`CBS_DISABLENOSCROLL`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, disabled.

### Example

[!code-cpp[NVC_MFC_CComboBox#35](../../mfc/reference/codesnippet/cpp/ccombobox-class_37.cpp)]

## <a name="setitemdata"></a> `CComboBox::SetItemData`

Sets the 32-bit value associated with the specified item in a combo box.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### Parameters

*`nIndex`*<br/>
Contains a zero-based index to the item to set.

*`dwItemData`*<br/>
Contains the new value to associate with the item.

### Return Value

`CB_ERR` if an error occurs.

### Remarks

Use the `SetItemDataPtr` member function if the 32-bit item is to be a pointer.

### Example

[!code-cpp[NVC_MFC_CComboBox#36](../../mfc/reference/codesnippet/cpp/ccombobox-class_38.cpp)]

## <a name="setitemdataptr"></a> `CComboBox::SetItemDataPtr`

Sets the 32-bit value associated with the specified item in a combo box to be the specified pointer (**`void`** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### Parameters

*`nIndex`*<br/>
Contains a zero-based index to the item.

*`pData`*<br/>
Contains the pointer to associate with the item.

### Return Value

`CB_ERR` if an error occurs.

### Remarks

This pointer remains valid for the life of the combo box, even though the item's relative position within the combo box might change as items are added or removed. Hence, the item's index within the box can change, but the pointer remains reliable.

### Example

[!code-cpp[NVC_MFC_CComboBox#37](../../mfc/reference/codesnippet/cpp/ccombobox-class_39.cpp)]

## <a name="setitemheight"></a> `CComboBox::SetItemHeight`

Call the `SetItemHeight` member function to set the height of list items in a combo box or the height of the edit-control (or static-text) portion of a combo box.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### Parameters

*`nIndex`*<br/>
Specifies whether the height of list items or the height of the edit-control (or static-text) portion of the combo box is set.

If the combo box has the [`CBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, *`nIndex`* specifies the zero-based index of the list item whose height is to be set; otherwise, *`nIndex`* must be 0 and the height of all list items will be set.

If *`nIndex`* is -1, the height of the edit-control or static-text portion of the combo box is to be set.

*`cyItemHeight`*<br/>
Specifies the height, in pixels, of the combo-box component identified by *`nIndex`*.

### Return Value

`CB_ERR` if the index or height is invalid; otherwise 0.

### Remarks

The height of the edit-control (or static-text) portion of the combo box is set independently of the height of the list items. An application must ensure that the height of the edit-control (or static-text) portion is not smaller than the height of a particular list-box item.

### Example

[!code-cpp[NVC_MFC_CComboBox#38](../../mfc/reference/codesnippet/cpp/ccombobox-class_40.cpp)]

## <a name="setlocale"></a> `CComboBox::SetLocale`

Sets the locale identifier for this combo box.

```
LCID SetLocale(LCID nNewLocale);
```

### Parameters

*`nNewLocale`*<br/>
The new locale identifier (LCID) value to set for the combo box.

### Return Value

The previous locale identifier (LCID) value for this combo box.

### Remarks

If `SetLocale` is not called, the default locale is obtained from the system. This system default locale can be modified by using Control Panel's Regional (or International) application.

### Example

[!code-cpp[NVC_MFC_CComboBox#39](../../mfc/reference/codesnippet/cpp/ccombobox-class_41.cpp)]

## <a name="setminvisibleitems"></a> `CComboBox::SetMinVisibleItems`

Sets the minimum number of visible items in the drop-down list of the current combo box control.

```
BOOL SetMinVisibleItems(int iMinVisible);
```

### Parameters

*`iMinVisible`*\
[in] Specifies the minimum number of visible items.

### Return Value

`TRUE` if this method is successful; otherwise, `FALSE`.

### Remarks

This method sends the [`CB_SETMINVISIBLE`](/windows/win32/Controls/cb-setminvisible) message, which is described in the Windows SDK.

### Example

The first code example defines the variable, `m_combobox`, that is used to programmatically access the combo box control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CComboBox_s1#1](../../mfc/reference/codesnippet/cpp/ccombobox-class_33.h)]

The next code example inserts 20 items into the drop-down list of a combo box control. Then it specifies that a minimum of 10 items be displayed when a user presses the drop-down arrow.

[!code-cpp[NVC_MFC_CComboBox_s1#2](../../mfc/reference/codesnippet/cpp/ccombobox-class_34.cpp)]

## <a name="settopindex"></a> `CComboBox::SetTopIndex`

Ensures that a particular item is visible in the list-box portion of the combo box.

```
int SetTopIndex(int nIndex);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the list-box item.

### Return Value

Zero if successful, or `CB_ERR` if an error occurs.

### Remarks

The system scrolls the list box until either the item specified by *`nIndex`* appears at the top of the list box or the maximum scroll range has been reached.

### Example

[!code-cpp[NVC_MFC_CComboBox#40](../../mfc/reference/codesnippet/cpp/ccombobox-class_42.cpp)]

## <a name="showdropdown"></a> `CComboBox::ShowDropDown`

Shows or hides the list box of a combo box that has the [`CBS_DROPDOWN`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [`CBS_DROPDOWNLIST`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

```cpp
void ShowDropDown(BOOL bShowIt = TRUE);
```

### Parameters

*`bShowIt`*<br/>
Specifies whether the drop-down list box is to be shown or hidden. A value of `TRUE` shows the list box. A value of `FALSE` hides the list box.

### Remarks

By default, a combo box of this style will show the list box.

This member function has no effect on a combo box created with the [`CBS_SIMPLE`](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style.

### Example

  See the example for [`CComboBox::GetDroppedState`](#getdroppedstate).

## See also

[MFC Sample CTRLBARS](../../overview/visual-cpp-samples.md)<br/>
[`CWnd` Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[`CWnd` Class](../../mfc/reference/cwnd-class.md)<br/>
[`CButton` Class](../../mfc/reference/cbutton-class.md)<br/>
[`CEdit` Class](../../mfc/reference/cedit-class.md)<br/>
[`CListBox` Class](../../mfc/reference/clistbox-class.md)<br/>
[`CScrollBar` Class](../../mfc/reference/cscrollbar-class.md)<br/>
[`CStatic` Class](../../mfc/reference/cstatic-class.md)<br/>
[`CDialog` Class](../../mfc/reference/cdialog-class.md)
