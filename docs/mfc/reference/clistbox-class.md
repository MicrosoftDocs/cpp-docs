---
title: "CListBox Class"
description: "A description of the MFC CListBox class and its member functions."
ms.date: "01/22/2020"
f1_keywords: ["CListBox", "AFXWIN/CListBox", "AFXWIN/CListBox::CListBox", "AFXWIN/CListBox::AddString", "AFXWIN/CListBox::CharToItem", "AFXWIN/CListBox::CompareItem", "AFXWIN/CListBox::Create", "AFXWIN/CListBox::DeleteItem", "AFXWIN/CListBox::DeleteString", "AFXWIN/CListBox::Dir", "AFXWIN/CListBox::DrawItem", "AFXWIN/CListBox::FindString", "AFXWIN/CListBox::FindStringExact", "AFXWIN/CListBox::GetAnchorIndex", "AFXWIN/CListBox::GetCaretIndex", "AFXWIN/CListBox::GetCount", "AFXWIN/CListBox::GetCurSel", "AFXWIN/CListBox::GetHorizontalExtent", "AFXWIN/CListBox::GetItemData", "AFXWIN/CListBox::GetItemDataPtr", "AFXWIN/CListBox::GetItemHeight", "AFXWIN/CListBox::GetItemRect", "AFXWIN/CListBox::GetListBoxInfo", "AFXWIN/CListBox::GetLocale", "AFXWIN/CListBox::GetSel", "AFXWIN/CListBox::GetSelCount", "AFXWIN/CListBox::GetSelItems", "AFXWIN/CListBox::GetText", "AFXWIN/CListBox::GetTextLen", "AFXWIN/CListBox::GetTopIndex", "AFXWIN/CListBox::InitStorage", "AFXWIN/CListBox::InsertString", "AFXWIN/CListBox::ItemFromPoint", "AFXWIN/CListBox::MeasureItem", "AFXWIN/CListBox::ResetContent", "AFXWIN/CListBox::SelectString", "AFXWIN/CListBox::SelItemRange", "AFXWIN/CListBox::SetAnchorIndex", "AFXWIN/CListBox::SetCaretIndex", "AFXWIN/CListBox::SetColumnWidth", "AFXWIN/CListBox::SetCurSel", "AFXWIN/CListBox::SetHorizontalExtent", "AFXWIN/CListBox::SetItemData", "AFXWIN/CListBox::SetItemDataPtr", "AFXWIN/CListBox::SetItemHeight", "AFXWIN/CListBox::SetLocale", "AFXWIN/CListBox::SetSel", "AFXWIN/CListBox::SetTabStops", "AFXWIN/CListBox::SetTopIndex", "AFXWIN/CListBox::VKeyToItem"]
helpviewer_keywords: ["CListBox [MFC], CListBox", "CListBox [MFC], AddString", "CListBox [MFC], CharToItem", "CListBox [MFC], CompareItem", "CListBox [MFC], Create", "CListBox [MFC], DeleteItem", "CListBox [MFC], DeleteString", "CListBox [MFC], Dir", "CListBox [MFC], DrawItem", "CListBox [MFC], FindString", "CListBox [MFC], FindStringExact", "CListBox [MFC], GetAnchorIndex", "CListBox [MFC], GetCaretIndex", "CListBox [MFC], GetCount", "CListBox [MFC], GetCurSel", "CListBox [MFC], GetHorizontalExtent", "CListBox [MFC], GetItemData", "CListBox [MFC], GetItemDataPtr", "CListBox [MFC], GetItemHeight", "CListBox [MFC], GetItemRect", "CListBox [MFC], GetListBoxInfo", "CListBox [MFC], GetLocale", "CListBox [MFC], GetSel", "CListBox [MFC], GetSelCount", "CListBox [MFC], GetSelItems", "CListBox [MFC], GetText", "CListBox [MFC], GetTextLen", "CListBox [MFC], GetTopIndex", "CListBox [MFC], InitStorage", "CListBox [MFC], InsertString", "CListBox [MFC], ItemFromPoint", "CListBox [MFC], MeasureItem", "CListBox [MFC], ResetContent", "CListBox [MFC], SelectString", "CListBox [MFC], SelItemRange", "CListBox [MFC], SetAnchorIndex", "CListBox [MFC], SetCaretIndex", "CListBox [MFC], SetColumnWidth", "CListBox [MFC], SetCurSel", "CListBox [MFC], SetHorizontalExtent", "CListBox [MFC], SetItemData", "CListBox [MFC], SetItemDataPtr", "CListBox [MFC], SetItemHeight", "CListBox [MFC], SetLocale", "CListBox [MFC], SetSel", "CListBox [MFC], SetTabStops", "CListBox [MFC], SetTopIndex", "CListBox [MFC], VKeyToItem"]
ms.assetid: 7ba3c699-c286-4cd9-9066-532c41ec05d1
---
# `CListBox` Class

Provides the functionality of a Windows list box.

## Syntax

```
class CListBox : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CListBox::CListBox`](#clistbox)|Constructs a `CListBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[`CListBox::AddString`](#addstring)|Adds a string to a list box.|
|[`CListBox::CharToItem`](#chartoitem)|Override to provide custom `WM_CHAR` handling for owner-draw list boxes which don't have strings.|
|[`CListBox::CompareItem`](#compareitem)|Called by the framework to determine the position of a new item in a sorted owner-draw list box.|
|[`CListBox::Create`](#create)|Creates the Windows list box and attaches it to the `CListBox` object.|
|[`CListBox::DeleteItem`](#deleteitem)|Called by the framework when the user deletes an item from an owner-draw list box.|
|[`CListBox::DeleteString`](#deletestring)|Deletes a string from a list box.|
|[`CListBox::Dir`](#dir)|Adds filenames, drives, or both from the current directory to a list box.|
|[`CListBox::DrawItem`](#drawitem)|Called by the framework when a visual aspect of an owner-draw list box changes.|
|[`CListBox::FindString`](#findstring)|Searches for a string in a list box.|
|[`CListBox::FindStringExact`](#findstringexact)|Finds the first list-box string that matches a specified string.|
|[`CListBox::GetAnchorIndex`](#getanchorindex)|Retrieves the zero-based index of the current anchor item in a list box.|
|[`CListBox::GetCaretIndex`](#getcaretindex)|Determines the index of the item that has the focus rectangle in a multiple-selection list box.|
|[`CListBox::GetCount`](#getcount)|Returns the number of strings in a list box.|
|[`CListBox::GetCurSel`](#getcursel)|Returns the zero-based index of the currently selected string in a list box.|
|[`CListBox::GetHorizontalExtent`](#gethorizontalextent)|Returns the width in pixels that a list box can be scrolled horizontally.|
|[`CListBox::GetItemData`](#getitemdata)|Returns a value associated with the list-box item.|
|[`CListBox::GetItemDataPtr`](#getitemdataptr)|Returns a pointer to a list-box item.|
|[`CListBox::GetItemHeight`](#getitemheight)|Determines the height of items in a list box.|
|[`CListBox::GetItemRect`](#getitemrect)|Returns the bounding rectangle of the list-box item as it is currently displayed.|
|[`CListBox::GetListBoxInfo`](#getlistboxinfo)|Retrieves the number of items per column.|
|[`CListBox::GetLocale`](#getlocale)|Retrieves the locale identifier for a list box.|
|[`CListBox::GetSel`](#getsel)|Returns the selection state of a list-box item.|
|[`CListBox::GetSelCount`](#getselcount)|Returns the number of strings currently selected in a multiple-selection list box.|
|[`CListBox::GetSelItems`](#getselitems)|Returns the indices of the strings currently selected in a list box.|
|[`CListBox::GetText`](#gettext)|Copies a list-box item into a buffer.|
|[`CListBox::GetTextLen`](#gettextlen)|Returns the length in bytes of a list-box item.|
|[`CListBox::GetTopIndex`](#gettopindex)|Returns the index of the first visible string in a list box.|
|[`CListBox::InitStorage`](#initstorage)|Preallocates blocks of memory for list box items and strings.|
|[`CListBox::InsertString`](#insertstring)|Inserts a string at a specific location in a list box.|
|[`CListBox::ItemFromPoint`](#itemfrompoint)|Returns the index of the list-box item nearest a point.|
|[`CListBox::MeasureItem`](#measureitem)|Called by the framework when an owner-draw list box is created to determine list-box dimensions.|
|[`CListBox::ResetContent`](#resetcontent)|Clears all the entries from a list box.|
|[`CListBox::SelectString`](#selectstring)|Searches for and selects a string in a single-selection list box.|
|[`CListBox::SelItemRange`](#selitemrange)|Selects or deselects a range of strings in a multiple-selection list box.|
|[`CListBox::SetAnchorIndex`](#setanchorindex)|Sets the anchor in a multiple-selection list box to begin an extended selection.|
|[`CListBox::SetCaretIndex`](#setcaretindex)|Sets the focus rectangle to the item at the specified index in a multiple-selection list box.|
|[`CListBox::SetColumnWidth`](#setcolumnwidth)|Sets the column width of a multicolumn list box.|
|[`CListBox::SetCurSel`](#setcursel)|Selects a list-box string.|
|[`CListBox::SetHorizontalExtent`](#sethorizontalextent)|Sets the width in pixels that a list box can be scrolled horizontally.|
|[`CListBox::SetItemData`](#setitemdata)|Sets a value associated with the list-box item.|
|[`CListBox::SetItemDataPtr`](#setitemdataptr)|Sets a pointer to the list-box item.|
|[`CListBox::SetItemHeight`](#setitemheight)|Sets the height of items in a list box.|
|[`CListBox::SetLocale`](#setlocale)|Sets the locale identifier for a list box.|
|[`CListBox::SetSel`](#setsel)|Selects or deselects a list-box item in a multiple-selection list box.|
|[`CListBox::SetTabStops`](#settabstops)|Sets the tab-stop positions in a list box.|
|[`CListBox::SetTopIndex`](#settopindex)|Sets the zero-based index of the first visible string in a list box.|
|[`CListBox::VKeyToItem`](#vkeytoitem)|Override to provide custom `WM_KEYDOWN` handling for list boxes with the `LBS_WANTKEYBOARDINPUT` style set.|

## Remarks

A list box displays a list of items, such as filenames, that the user can view and select.

In a single-selection list box, the user can select only one item. In a multiple-selection list box, a range of items can be selected. When the user selects an item, it is highlighted and the list box sends a notification message to the parent window.

You can create a list box either from a dialog template or directly in your code. To create it directly, construct the `CListBox` object, then call the [`Create`](#create) member function to create the Windows list-box control and attach it to the `CListBox` object. To use a list box in a dialog template, declare a list-box variable in your dialog box class, then use `DDX_Control` in your dialog box class's `DoDataExchange` function to connect the member variable to the control. (this is done for you automatically when you add a control variable to your dialog box class.)

Construction can be a one-step process in a class derived from `CListBox`. Write a constructor for the derived class and call `Create` from within the constructor.

If you want to handle Windows notification messages sent by a list box to its parent (usually a class derived from [`CDialog`](../../mfc/reference/cdialog-class.md)), add a message-map entry and message-handler member function to the parent class for each message.

Each message-map entry takes the following form:

`ON_Notification( id, memberFxn )`

where `id` specifies the child window ID of the list-box control sending the notification and `memberFxn` is the name of the parent member function you have written to handle the notification.

The parent's function prototype is as follows:

`afx_msg void memberFxn( );`

Following is a list of potential message-map entries and a description of the cases in which they would be sent to the parent:

- `ON_LBN_DBLCLK` The user double-clicks a string in a list box. Only a list box that has the [`LBS_NOTIFY`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style will send this notification message.

- `ON_LBN_ERRSPACE` The list box cannot allocate enough memory to meet the request.

- `ON_LBN_KILLFOCUS` The list box is losing the input focus.

- `ON_LBN_SELCANCEL` The current list-box selection is canceled. This message is only sent when a list box has the `LBS_NOTIFY` style.

- `ON_LBN_SELCHANGE` The selection in the list box has changed. This notification is not sent if the selection is changed by the [`CListBox::SetCurSel`](#setcursel) member function. This notification applies only to a list box that has the `LBS_NOTIFY` style. The `LBN_SELCHANGE` notification message is sent for a multiple-selection list box whenever the user presses an arrow key, even if the selection does not change.

- `ON_LBN_SETFOCUS` The list box is receiving the input focus.

- `ON_WM_CHARTOITEM` An owner-draw list box that has no strings receives a `WM_CHAR` message.

- `ON_WM_VKEYTOITEM` A list box with the `LBS_WANTKEYBOARDINPUT` style receives a `WM_KEYDOWN` message.

If you create a `CListBox` object within a dialog box (through a dialog resource), the `CListBox` object is automatically destroyed when the user closes the dialog box.

If you create a `CListBox` object within a window, you may need to destroy the `CListBox` object. If you create the `CListBox` object on the stack, it is destroyed automatically. If you create the `CListBox` object on the heap by using the **`new`** function, you must call **`delete`** on the object to destroy it when the user closes the parent window.

If you allocate any memory in the `CListBox` object, override the `CListBox` destructor to dispose of the allocation.

## Inheritance Hierarchy

[`CObject`](../../mfc/reference/cobject-class.md)

[`CCmdTarget`](../../mfc/reference/ccmdtarget-class.md)

[`CWnd`](../../mfc/reference/cwnd-class.md)

`CListBox`

## Requirements

**Header:** `afxwin.h`

## <a name="addstring"></a> `CListBox::AddString`

Adds a string to a list box.

```
int AddString(LPCTSTR lpszItem);
```

### Parameters

*`lpszItem`*<br/>
Points to the null-terminated string that is to be added.

### Return Value

The zero-based index to the string in the list box. The return value is `LB_ERR` if an error occurs; the return value is `LB_ERRSPACE` if insufficient space is available to store the new string.

### Remarks

If the list box was not created with the [`LBS_SORT`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the string is added to the end of the list. Otherwise, the string is inserted into the list, and the list is sorted. If the list box was created with the `LBS_SORT` style but not the [`LBS_HASSTRINGS`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the framework sorts the list by one or more calls to the `CompareItem` member function.

Use [`InsertString`](#insertstring) to insert a string into a specific location within the list box.

### Example

[!code-cpp[NVC_MFC_CListBox#3](../../mfc/codesnippet/cpp/clistbox-class_1.cpp)]

## <a name="chartoitem"></a> `CListBox::CharToItem`

Called by the framework when the list box's parent window receives a `WM_CHARTOITEM` message from the list box.

```
virtual int CharToItem(
    UINT nKey,
    UINT nIndex);
```

### Parameters

*`nKey`*<br/>
The ANSI code of the character the user typed.

*`nIndex`*<br/>
The current position of the list-box caret.

### Return Value

Returns - 1 or - 2 for no further action or a nonnegative number to specify an index of a list-box item on which to perform the default action for the keystroke. The default implementation returns - 1.

### Remarks

The `WM_CHARTOITEM` message is sent by the list box when it receives a `WM_CHAR` message, but only if the list box meets all of these criteria:

- Is an owner-draw list box.

- Does not have the [`LBS_HASSTRINGS`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style set.

- Has at least one item.

You should never call this function yourself. Override this function to provide your own custom handling of keyboard messages.

In your override, you must return a value to tell the framework what action you performed. A return value of - 1 or - 2 indicates that you handled all aspects of selecting the item and requires no further action by the list box. Before returning - 1 or - 2, you could set the selection or move the caret or both. To set the selection, use [`SetCurSel`](#setcursel) or [`SetSel`](#setsel). To move the caret, use [`SetCaretIndex`](#setcaretindex).

A return value of 0 or greater specifies the index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.

### Example

[!code-cpp[NVC_MFC_CListBox#4](../../mfc/codesnippet/cpp/clistbox-class_2.cpp)]

## <a name="clistbox"></a> `CListBox::CListBox`

Constructs a `CListBox` object.

```
CListBox();
```

### Remarks

You construct a `CListBox` object in two steps. First, call the constructor `ClistBox` and then call `Create`, which initializes the Windows list box and attaches it to the `CListBox`.

### Example

[!code-cpp[NVC_MFC_CListBox#1](../../mfc/codesnippet/cpp/clistbox-class_3.cpp)]

## <a name="compareitem"></a> `CListBox::CompareItem`

Called by the framework to determine the relative position of a new item in a sorted owner-draw list box.

```
virtual int CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### Parameters

*`lpCompareItemStruct`*<br/>
A long pointer to a `COMPAREITEMSTRUCT` structure.

### Return Value

Indicates the relative position of the two items described in the [`COMPAREITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-compareitemstruct) structure. It may be any of the following values:

|Value|Meaning|
|-----------|-------------|
|-1|Item 1 sorts before item 2.|
|0|Item 1 and item 2 sort the same.|
|1|Item 1 sorts after item 2.|

See [`CWnd::OnCompareItem`](../../mfc/reference/cwnd-class.md#oncompareitem) for a description of the `COMPAREITEMSTRUCT` structure.

### Remarks

By default, this member function does nothing. If you create an owner-draw list box with the `LBS_SORT` style, you must override this member function to assist the framework in sorting new items added to the list box.

### Example

[!code-cpp[NVC_MFC_CListBox#5](../../mfc/codesnippet/cpp/clistbox-class_4.cpp)]

## <a name="create"></a> `CListBox::Create`

Creates the Windows list box and attaches it to the `CListBox` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*`dwStyle`*<br/>
Specifies the style of the list box. Apply any combination of [list-box styles](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) to the box.

*`rect`*<br/>
Specifies the list-box size and position. Can be either a `CRect` object or a `RECT` structure.

*`pParentWnd`*<br/>
Specifies the list box's parent window (usually a `CDialog` object). It must not be `NULL`.

*`nID`*<br/>
Specifies the list box's control ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You construct a `CListBox` object in two steps. First, call the constructor and then call `Create`, which initializes the Windows list box and attaches it to the `CListBox` object.

When `Create` executes, Windows sends the [`WM_NCCREATE`](../../mfc/reference/cwnd-class.md#onnccreate), [`WM_CREATE`](../../mfc/reference/cwnd-class.md#oncreate), [`WM_NCCALCSIZE`](../../mfc/reference/cwnd-class.md#onnccalcsize), and [`WM_GETMINMAXINFO`](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) messages to the list-box control.

These messages are handled by default by the [`OnNcCreate`](../../mfc/reference/cwnd-class.md#onnccreate), [`OnCreate`](../../mfc/reference/cwnd-class.md#oncreate), [`OnNcCalcSize`](../../mfc/reference/cwnd-class.md#onnccalcsize), and [`OnGetMinMaxInfo`](../../mfc/reference/cwnd-class.md#ongetminmaxinfo) member functions in the `CWnd` base class. To extend the default message handling, derive a class from `CListBox`, add a message map to the new class, and override the preceding message-handler member functions. Override `OnCreate`, for example, to perform needed initialization for a new class.

Apply the following [window styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) to a list-box control.

- `WS_CHILD` Always

- `WS_VISIBLE` Usually

- `WS_DISABLED` Rarely

- `WS_VSCROLL` To add a vertical scroll bar

- `WS_HSCROLL` To add a horizontal scroll bar

- `WS_GROUP` To group controls

- `WS_TABSTOP` To allow tabbing to this control

### Example

[!code-cpp[NVC_MFC_CListBox#2](../../mfc/codesnippet/cpp/clistbox-class_5.cpp)]

## <a name="deleteitem"></a> `CListBox::DeleteItem`

Called by the framework when the user deletes an item from an owner-draw `CListBox` object or destroys the list box.

```
virtual void DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### Parameters

*`lpDeleteItemStruct`*<br/>
A long pointer to a Windows [`DELETEITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) structure that contains information about the deleted item.

### Remarks

The default implementation of this function does nothing. Override this function to redraw an owner-draw list box as needed.

See [`CWnd::OnDeleteItem`](../../mfc/reference/cwnd-class.md#ondeleteitem) for a description of the `DELETEITEMSTRUCT` structure.

### Example

[!code-cpp[NVC_MFC_CListBox#6](../../mfc/codesnippet/cpp/clistbox-class_6.cpp)]

## <a name="deletestring"></a> `CListBox::DeleteString`

Deletes the item in position *`nIndex`* from the list box.

```
int DeleteString(UINT nIndex);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the string to be deleted.

### Return Value

A count of the strings remaining in the list. The return value is `LB_ERR` if *`nIndex`* specifies an index greater than the number of items in the list.

### Remarks

All items following *`nIndex`* now move down one position. For example, if a list box contains two items, deleting the first item will cause the remaining item to now be in the first position. *`nIndex`*=0 for the item in the first position.

### Example

[!code-cpp[NVC_MFC_CListBox#7](../../mfc/codesnippet/cpp/clistbox-class_7.cpp)]

## <a name="dir"></a> `CListBox::Dir`

Adds a list of filenames, drives, or both to a list box.

```
int Dir(
    UINT attr,
    LPCTSTR lpszWildCard);
```

### Parameters

*`attr`*<br/>
Can be any combination of the **`enum`** values described in [`CFile::GetStatus`](../../mfc/reference/cfile-class.md#getstatus), or any combination of the following values:

|Value|Meaning|
|-----------|-------------|
|0x0000|File can be read from or written to.|
|0x0001|File can be read from but not written to.|
|0x0002|File is hidden and does not appear in a directory listing.|
|0x0004|File is a system file.|
|0x0010|The name specified by *`lpszWildCard`* specifies a directory.|
|0x0020|File has been archived.|
|0x4000|Include all drives that match the name specified by *`lpszWildCard`*.|
|0x8000|Exclusive flag. If the exclusive flag is set, only files of the specified type are listed. Otherwise, files of the specified type are listed in addition to "normal" files.|

*`lpszWildCard`*<br/>
Points to a file-specification string. The string can contain wildcards (for example, *.\*).

### Return Value

The zero-based index of the last filename added to the list. The return value is `LB_ERR` if an error occurs; the return value is `LB_ERRSPACE` if insufficient space is available to store the new strings.

### Example

[!code-cpp[NVC_MFC_CListBox#8](../../mfc/codesnippet/cpp/clistbox-class_8.cpp)]

## <a name="drawitem"></a> `CListBox::DrawItem`

Called by the framework when a visual aspect of an owner-draw list box changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*`lpDrawItemStruct`*<br/>
A long pointer to a [`DRAWITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure that contains information about the type of drawing required.

### Remarks

The `itemAction` and `itemState` members of the `DRAWITEMSTRUCT` structure define the drawing action that is to be performed.

By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CListBox` object. The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *`lpDrawItemStruct`* before this member function terminates.

See [`CWnd::OnDrawItem`](../../mfc/reference/cwnd-class.md#ondrawitem) for a description of the `DRAWITEMSTRUCT` structure.

### Example

[!code-cpp[NVC_MFC_CListBox#9](../../mfc/codesnippet/cpp/clistbox-class_9.cpp)]

## <a name="findstring"></a> `CListBox::FindString`

Finds the first string in a list box that contains the specified prefix without changing the list-box selection.

```
int FindString(
    int nStartAfter,
    LPCTSTR lpszItem) const;
```

### Parameters

*`nStartAfter`*<br/>
Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nStartAfter`*. If *`nStartAfter`* is -1, the entire list box is searched from the beginning.

*`lpszItem`*<br/>
Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string may contain any combination of uppercase and lowercase letters.

### Return Value

The zero-based index of the matching item, or `LB_ERR` if the search was unsuccessful.

### Remarks

Use the [`SelectString`](#selectstring) member function to both find and select a string.

### Example

[!code-cpp[NVC_MFC_CListBox#10](../../mfc/codesnippet/cpp/clistbox-class_10.cpp)]

## <a name="findstringexact"></a> `CListBox::FindStringExact`

Finds the first list-box string that matches the string specified in *`lpszFind`*.

```
int FindStringExact(
    int nIndexStart,
    LPCTSTR lpszFind) const;
```

### Parameters

*`nIndexStart`*<br/>
Specifies the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nIndexStart`*. If *`nIndexStart`* is -1, the entire list box is searched from the beginning.

*`lpszFind`*<br/>
Points to the null-terminated string to search for. This string can contain a complete filename, including the extension. The search is not case sensitive, so the string can contain any combination of uppercase and lowercase letters.

### Return Value

The index of the matching item, or `LB_ERR` if the search was unsuccessful.

### Remarks

If the list box was created with an owner-draw style but without the [`LBS_HASSTRINGS`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the `FindStringExact` member function attempts to match the doubleword value against the value of *`lpszFind`*.

### Example

[!code-cpp[NVC_MFC_CListBox#11](../../mfc/codesnippet/cpp/clistbox-class_11.cpp)]

## <a name="getanchorindex"></a> `CListBox::GetAnchorIndex`

Retrieves the zero-based index of the current anchor item in the list box.

```
int GetAnchorIndex() const;
```

### Return Value

The index of the current anchor item, if successful; otherwise LB_ERR.

### Remarks

In a multiple-selection list box, the anchor item is the first or last item in a block of contiguous selected items.

### Example

  See the example for [`CListBox::SetAnchorIndex`](#setanchorindex).

## <a name="getcaretindex"></a> `CListBox::GetCaretIndex`

Determines the index of the item that has the focus rectangle in a multiple-selection list box.

```
int GetCaretIndex() const;
```

### Return Value

The zero-based index of the item that has the focus rectangle in a list box. If the list box is a single-selection list box, the return value is the index of the item that is selected, if any.

### Remarks

The item may or may not be selected.

### Example

  See the example for [`CListBox::SetCaretIndex`](#setcaretindex).

## <a name="getcount"></a> `CListBox::GetCount`

Retrieves the number of items in a list box.

```
int GetCount() const;
```

### Return Value

The number of items in the list box, or `LB_ERR` if an error occurs.

### Remarks

The returned count is one greater than the index value of the last item (the index is zero-based).

### Example

[!code-cpp[NVC_MFC_CListBox#12](../../mfc/codesnippet/cpp/clistbox-class_12.cpp)]

## <a name="getcursel"></a> `CListBox::GetCurSel`

Retrieves the zero-based index of the currently selected item, if any, in a single-selection list box.

```
int GetCurSel() const;
```

### Return Value

The zero-based index of the currently selected item if it is a single-selection list box. It is `LB_ERR` if no item is currently selected.

In a multiple-selection list box, the index of the item that has the focus.

### Remarks

Do not call `GetCurSel` for a multiple-selection list box. Use [`CListBox::GetSelItems`](#getselitems) instead.

### Example

[!code-cpp[NVC_MFC_CListBox#13](../../mfc/codesnippet/cpp/clistbox-class_13.cpp)]

## <a name="gethorizontalextent"></a> `CListBox::GetHorizontalExtent`

Retrieves from the list box the width in pixels by which it can be scrolled horizontally.

```
int GetHorizontalExtent() const;
```

### Return Value

The scrollable width of the list box, in pixels.

### Remarks

This is applicable only if the list box has a horizontal scroll bar.

### Example

[!code-cpp[NVC_MFC_CListBox#14](../../mfc/codesnippet/cpp/clistbox-class_14.cpp)]

## <a name="getitemdata"></a> `CListBox::GetItemData`

Retrieves the application-supplied doubleword value associated with the specified list-box item.

```
DWORD_PTR GetItemData(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item in the list box.

### Return Value

The value associated with the item, or `LB_ERR` if an error occurs.

### Remarks

The doubleword value was the *`dwItemData`* parameter of a [`SetItemData`](#setitemdata) call.

### Example

[!code-cpp[NVC_MFC_CListBox#15](../../mfc/codesnippet/cpp/clistbox-class_15.cpp)]

## <a name="getitemdataptr"></a> `CListBox::GetItemDataPtr`

Retrieves the application-supplied 32-bit value associated with the specified list-box item as a pointer (**`void`** <strong>\*</strong>).

```cpp
void* GetItemDataPtr(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item in the list box.

### Return Value

Retrieves a pointer, or -1 if an error occurs.

### Example

[!code-cpp[NVC_MFC_CListBox#16](../../mfc/codesnippet/cpp/clistbox-class_16.cpp)]

## <a name="getitemheight"></a> `CListBox::GetItemHeight`

Determines the height of items in a list box.

```
int GetItemHeight(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item in the list box. This parameter is used only if the list box has the `LBS_OWNERDRAWVARIABLE` style; otherwise, it should be set to 0.

### Return Value

The height, in pixels, of the items in the list box. If the list box has the [`LBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the return value is the height of the item specified by *`nIndex`*. If an error occurs, the return value is `LB_ERR`.

### Example

[!code-cpp[NVC_MFC_CListBox#17](../../mfc/codesnippet/cpp/clistbox-class_17.cpp)]

## <a name="getitemrect"></a> `CListBox::GetItemRect`

Retrieves the dimensions of the rectangle that bounds a list-box item as it is currently displayed in the list-box window.

```
int GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item.

*`lpRect`*<br/>
Specifies a long pointer to a [`RECT` structure](/windows/win32/api/windef/ns-windef-rect) that receives the list-box client coordinates of the item.

### Return Value

`LB_ERR` if an error occurs.

### Example

[!code-cpp[NVC_MFC_CListBox#18](../../mfc/codesnippet/cpp/clistbox-class_18.cpp)]

## <a name="getlistboxinfo"></a> `CListBox::GetListBoxInfo`

Retrieves the number of items per column.

```
DWORD GetListBoxInfo() const;
```

### Return Value

Number of items per column of the `CListBox` object.

### Remarks

This member function emulates the functionality of the [`LB_GETLISTBOXINFO`](/windows/win32/Controls/lb-getlistboxinfo) message, as described in the Windows SDK.

## <a name="getlocale"></a> `CListBox::GetLocale`

Retrieves the locale used by the list box.

```
LCID GetLocale() const;
```

### Return Value

The locale identifier (LCID) value for the strings in the list box.

### Remarks

The locale is used, for example, to determine the sort order of the strings in a sorted list box.

### Example

  See the example for [`CListBox::SetLocale`](#setlocale).

## <a name="getsel"></a> `CListBox::GetSel`

Retrieves the selection state of an item.

```
int GetSel(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item.

### Return Value

A positive number if the specified item is selected; otherwise, it is 0. The return value is `LB_ERR` if an error occurs.

### Remarks

This member function works with both single- and multiple-selection list boxes.

To retrieve the index of the currently-selected list box item, use [`CListBox::GetCurSel`](#getcursel).

### Example

[!code-cpp[NVC_MFC_CListBox#19](../../mfc/codesnippet/cpp/clistbox-class_19.cpp)]

## <a name="getselcount"></a> `CListBox::GetSelCount`

Retrieves the total number of selected items in a multiple-selection list box.

```
int GetSelCount() const;
```

### Return Value

The count of selected items in a list box. If the list box is a single-selection list box, the return value is `LB_ERR`.

### Example

  See the example for [`CListBox::GetSelItems`](#getselitems).

## <a name="getselitems"></a> `CListBox::GetSelItems`

Fills a buffer with an array of integers that specifies the item numbers of selected items in a multiple-selection list box.

```
int GetSelItems(
    int nMaxItems,
    LPINT rgIndex) const;
```

### Parameters

*`nMaxItems`*<br/>
Specifies the maximum number of selected items whose item numbers are to be placed in the buffer.

*`rgIndex`*<br/>
Specifies a pointer to a buffer large enough for the number of integers specified by *`nMaxItems`*.

### Return Value

The actual number of items placed in the buffer. If the list box is a single-selection list box, the return value is `LB_ERR`.

### Example

[!code-cpp[NVC_MFC_CListBox#20](../../mfc/codesnippet/cpp/clistbox-class_20.cpp)]

## <a name="gettext"></a> `CListBox::GetText`

Gets a string from a list box.

```
int GetText(
    int nIndex,
    LPTSTR lpszBuffer) const;

void GetText(
    int nIndex,
    CString& rString) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the string to be retrieved.

*`lpszBuffer`*<br/>
Points to the buffer that receives the string. The buffer must have sufficient space for the string and a terminating null character. The size of the string can be determined ahead of time by calling the `GetTextLen` member function.

*`rString`*<br/>
A reference to a `CString` object.

### Return Value

The length (in bytes) of the string, excluding the terminating null character. If *`nIndex`* does not specify a valid index, the return value is `LB_ERR`.

### Remarks

The second form of this member function fills a `CString` object with the string text.

### Example

[!code-cpp[NVC_MFC_CListBox#21](../../mfc/codesnippet/cpp/clistbox-class_21.cpp)]

## <a name="gettextlen"></a> `CListBox::GetTextLen`

Gets the length of a string in a list-box item.

```
int GetTextLen(int nIndex) const;
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the string.

### Return Value

The length of the string in characters, excluding the terminating null character. If *`nIndex`* does not specify a valid index, the return value is `LB_ERR`.

### Example

  See the example for [`CListBox::GetText`](#gettext).

## <a name="gettopindex"></a> `CListBox::GetTopIndex`

Retrieves the zero-based index of the first visible item in a list box.

```
int GetTopIndex() const;
```

### Return Value

The zero-based index of the first visible item in a list box if successful, `LB_ERR` otherwise.

### Remarks

Initially, item 0 is at the top of the list box, but if the list box is scrolled, another item may be at the top.

### Example

[!code-cpp[NVC_MFC_CListBox#22](../../mfc/codesnippet/cpp/clistbox-class_22.cpp)]

## <a name="initstorage"></a> `CListBox::InitStorage`

Allocates memory for storing list-box items.

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

If successful, the maximum number of items that the list box can store before a memory reallocation is needed, otherwise `LB_ERRSPACE`, meaning not enough memory is available.

### Remarks

Call this function before adding a large number of items to a `CListBox`.

This function helps speed up the initialization of list boxes that have a large number of items (more than 100). It preallocates the specified amount of memory so that subsequent [`AddString`](#addstring), [`InsertString`](#insertstring), and [`Dir`](#dir) functions take the shortest possible time. You can use estimates for the parameters. If you overestimate, some extra memory is allocated; if you underestimate, the normal allocation is used for items that exceed the preallocated amount.

Windows 95/98 only: The *`nItems`* parameter is limited to 16-bit values. This means list boxes cannot contain more than 32,767 items. Although the number of items is restricted, the total size of the items in a list box is limited only by available memory.

### Example

[!code-cpp[NVC_MFC_CListBox#23](../../mfc/codesnippet/cpp/clistbox-class_23.cpp)]

## <a name="insertstring"></a> `CListBox::InsertString`

Inserts a string into the list box.

```
int InsertString(
    int nIndex,
    LPCTSTR lpszItem);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the position to insert the string. If this parameter is -1, the string is added to the end of the list.

*`lpszItem`*<br/>
Points to the null-terminated string that is to be inserted.

### Return Value

The zero-based index of the position at which the string was inserted. The return value is `LB_ERR` if an error occurs; the return value is `LB_ERRSPACE` if insufficient space is available to store the new string.

### Remarks

Unlike the [`AddString`](#addstring) member function, `InsertString` does not cause a list with the [`LBS_SORT`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style to be sorted.

### Example

[!code-cpp[NVC_MFC_CListBox#24](../../mfc/codesnippet/cpp/clistbox-class_24.cpp)]

## <a name="itemfrompoint"></a> `CListBox::ItemFromPoint`

Determines the list-box item nearest the point specified in *`pt`*.

```
UINT ItemFromPoint(
    CPoint pt,
    BOOL& bOutside) const;
```

### Parameters

*`pt`*<br/>
Point for which to find the nearest item, specified relative to the upper-left corner of the client area of the list box.

*`bOutside`*<br/>
Reference to a `BOOL` variable which will be set to `TRUE` if *`pt`* is outside the client area of the list box, `FALSE` if *`pt`* is inside the client area of the list box.

### Return Value

The index of the nearest item to the point specified in *`pt`*.

### Remarks

You could use this function to determine which list-box item the mouse cursor moves over.

### Example

  See the example for [`CListBox::SetAnchorIndex`](#setanchorindex).

## <a name="measureitem"></a> `CListBox::MeasureItem`

Called by the framework when a list box with an owner-draw style is created.

```
virtual void MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### Parameters

*`lpMeasureItemStruct`*<br/>
A long pointer to a [`MEASUREITEMSTRUCT`](/windows/win32/api/winuser/ns-winuser-measureitemstruct) structure.

### Remarks

By default, this member function does nothing. Override this member function and fill in the `MEASUREITEMSTRUCT` structure to inform Windows of the list-box dimensions. If the list box is created with the [`LBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the framework calls this member function for each item in the list box. Otherwise, this member is called only once.

For further information about using the [`LBS_OWNERDRAWFIXED`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style in an owner-draw list box created with the `SubclassDlgItem` member function of `CWnd`, see the discussion in [Technical Note 14](../../mfc/tn014-custom-controls.md).

See [`CWnd::OnMeasureItem`](../../mfc/reference/cwnd-class.md#onmeasureitem) for a description of the `MEASUREITEMSTRUCT` structure.

### Example

[!code-cpp[NVC_MFC_CListBox#25](../../mfc/codesnippet/cpp/clistbox-class_25.cpp)]

## <a name="resetcontent"></a> `CListBox::ResetContent`

Removes all items from a list box.

```cpp
void ResetContent();
```

### Example

[!code-cpp[NVC_MFC_CListBox#26](../../mfc/codesnippet/cpp/clistbox-class_26.cpp)]

## <a name="selectstring"></a> `CListBox::SelectString`

Searches for a list-box item that matches the specified string, and if a matching item is found, it selects the item.

```
int SelectString(
    int nStartAfter,
    LPCTSTR lpszItem);
```

### Parameters

*`nStartAfter`*<br/>
Contains the zero-based index of the item before the first item to be searched. When the search reaches the bottom of the list box, it continues from the top of the list box back to the item specified by *`nStartAfter`*. If *`nStartAfter`* is -1, the entire list box is searched from the beginning.

*`lpszItem`*<br/>
Points to the null-terminated string that contains the prefix to search for. The search is case independent, so this string may contain any combination of uppercase and lowercase letters.

### Return Value

The index of the selected item if the search was successful. If the search was unsuccessful, the return value is `LB_ERR` and the current selection is not changed.

### Remarks

The list box is scrolled, if necessary, to bring the selected item into view.

This member function cannot be used with a list box that has the [`LBS_MULTIPLESEL`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style.

An item is selected only if its initial characters (from the starting point) match the characters in the string specified by *`lpszItem`*.

Use the `FindString` member function to find a string without selecting the item.

### Example

[!code-cpp[NVC_MFC_CListBox#27](../../mfc/codesnippet/cpp/clistbox-class_27.cpp)]

## <a name="selitemrange"></a> `CListBox::SelItemRange`

Selects multiple consecutive items in a multiple-selection list box.

```
int SelItemRange(
    BOOL bSelect,
    int nFirstItem,
    int nLastItem);
```

### Parameters

*`bSelect`*<br/>
Specifies how to set the selection. If *`bSelect`* is `TRUE`, the string is selected and highlighted; if `FALSE`, the highlight is removed and the string is no longer selected.

*`nFirstItem`*<br/>
Specifies the zero-based index of the first item to set.

*`nLastItem`*<br/>
Specifies the zero-based index of the last item to set.

### Return Value

`LB_ERR` if an error occurs.

### Remarks

Use this member function only with multiple-selection list boxes. If you need to select only one item in a multiple-selection list box — that is, if *`nFirstItem`* is equal to *`nLastItem`* — call the [`SetSel`](#setsel) member function instead.

### Example

[!code-cpp[NVC_MFC_CListBox#28](../../mfc/codesnippet/cpp/clistbox-class_28.cpp)]

## <a name="setanchorindex"></a> `CListBox::SetAnchorIndex`

Sets the anchor in a multiple-selection list box to begin an extended selection.

```cpp
void SetAnchorIndex(int nIndex);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the list-box item that will be the anchor.

### Remarks

In a multiple-selection list box, the anchor item is the first or last item in a block of contiguous selected items.

### Example

[!code-cpp[NVC_MFC_CListBox#29](../../mfc/codesnippet/cpp/clistbox-class_29.cpp)]

## <a name="setcaretindex"></a> `CListBox::SetCaretIndex`

Sets the focus rectangle to the item at the specified index in a multiple-selection list box.

```
int SetCaretIndex(
    int nIndex,
    BOOL bScroll = TRUE);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item to receive the focus rectangle in the list box.

*`bScroll`*<br/>
If this value is 0, the item is scrolled until it is fully visible. If this value is not 0, the item is scrolled until it is at least partially visible.

### Return Value

`LB_ERR` if an error occurs.

### Remarks

If the item is not visible, it is scrolled into view.

### Example

[!code-cpp[NVC_MFC_CListBox#30](../../mfc/codesnippet/cpp/clistbox-class_30.cpp)]

## <a name="setcolumnwidth"></a> `CListBox::SetColumnWidth`

Sets the width in pixels of all columns in a multicolumn list box (created with the [`LBS_MULTICOLUMN`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style).

```cpp
void SetColumnWidth(int cxWidth);
```

### Parameters

*`cxWidth`*<br/>
Specifies the width in pixels of all columns.

### Example

[!code-cpp[NVC_MFC_CListBox#31](../../mfc/codesnippet/cpp/clistbox-class_31.cpp)]

## <a name="setcursel"></a> `CListBox::SetCurSel`

Selects a string and scrolls it into view, if necessary.

```
int SetCurSel(int nSelect);
```

### Parameters

*`nSelect`*<br/>
Specifies the zero-based index of the string to be selected. If *`nSelect`* is -1, the list box is set to have no selection.

### Return Value

`LB_ERR` if an error occurs.

### Remarks

When the new string is selected, the list box removes the highlight from the previously selected string.

Use this member function only with single-selection list boxes.

To set or remove a selection in a multiple-selection list box, use [`CListBox::SetSel`](#setsel).

### Example

[!code-cpp[NVC_MFC_CListBox#32](../../mfc/codesnippet/cpp/clistbox-class_32.cpp)]

## <a name="sethorizontalextent"></a> `CListBox::SetHorizontalExtent`

Sets the width, in pixels, by which a list box can be scrolled horizontally.

```cpp
void SetHorizontalExtent(int cxExtent);
```

### Parameters

*`cxExtent`*<br/>
Specifies the number of pixels by which the list box can be scrolled horizontally.

### Remarks

If the size of the list box is smaller than this value, the horizontal scroll bar will horizontally scroll items in the list box. If the list box is as large or larger than this value, the horizontal scroll bar is hidden.

To respond to a call to `SetHorizontalExtent`, the list box must have been defined with the [`WS_HSCROLL`](../../mfc/reference/styles-used-by-mfc.md#window-styles) style.

This member function is not useful for multicolumn list boxes. For multicolumn list boxes, call the `SetColumnWidth` member function.

### Example

[!code-cpp[NVC_MFC_CListBox#33](../../mfc/codesnippet/cpp/clistbox-class_33.cpp)]

## <a name="setitemdata"></a> `CListBox::SetItemData`

Sets a value associated with the specified item in a list box.

```
int SetItemData(
    int nIndex,
    DWORD_PTR dwItemData);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item.

*`dwItemData`*<br/>
Specifies the value to be associated with the item.

### Return Value

`LB_ERR` if an error occurs.

### Example

[!code-cpp[NVC_MFC_CListBox#34](../../mfc/codesnippet/cpp/clistbox-class_34.cpp)]

## <a name="setitemdataptr"></a> `CListBox::SetItemDataPtr`

Sets the 32-bit value associated with the specified item in a list box to be the specified pointer ( **`void`** <strong>\*</strong>).

```
int SetItemDataPtr(
    int nIndex,
    void* pData);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item.

*`pData`*<br/>
Specifies the pointer to be associated with the item.

### Return Value

`LB_ERR` if an error occurs.

### Remarks

This pointer remains valid for the life of the list box, even though the item's relative position within the list box might change as items are added or removed. Hence, the item's index within the box can change, but the pointer remains reliable.

### Example

[!code-cpp[NVC_MFC_CListBox#35](../../mfc/codesnippet/cpp/clistbox-class_35.cpp)]

## <a name="setitemheight"></a> `CListBox::SetItemHeight`

Sets the height of items in a list box.

```
int SetItemHeight(
    int nIndex,
    UINT cyItemHeight);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the item in the list box. This parameter is used only if the list box has the `LBS_OWNERDRAWVARIABLE` style; otherwise, it should be set to 0.

*`cyItemHeight`*<br/>
Specifies the height, in pixels, of the item.

### Return Value

`LB_ERR` if the index or height is invalid.

### Remarks

If the list box has the [`LBS_OWNERDRAWVARIABLE`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, this function sets the height of the item specified by *`nIndex`*. Otherwise, this function sets the height of all items in the list box.

### Example

[!code-cpp[NVC_MFC_CListBox#36](../../mfc/codesnippet/cpp/clistbox-class_36.cpp)]

## <a name="setlocale"></a> `CListBox::SetLocale`

Sets the locale identifier for this list box.

```
LCID SetLocale(LCID nNewLocale);
```

### Parameters

*`nNewLocale`*<br/>
The new locale identifier (LCID) value to set for the list box.

### Return Value

The previous locale identifier (LCID) value for this list box.

### Remarks

If `SetLocale` is not called, the default locale is obtained from the system. This system default locale can be modified by using Control Panel's Regional (or International) application.

### Example

[!code-cpp[NVC_MFC_CListBox#37](../../mfc/codesnippet/cpp/clistbox-class_37.cpp)]

## <a name="setsel"></a> `CListBox::SetSel`

Selects a string in a multiple-selection list box.

```
int SetSel(
    int nIndex,
    BOOL bSelect = TRUE);
```

### Parameters

*`nIndex`*<br/>
Contains the zero-based index of the string to be set. If -1, the selection is added to or removed from all strings, depending on the value of *`bSelect`*.

*`bSelect`*<br/>
Specifies how to set the selection. If *`bSelect`* is `TRUE`, the string is selected and highlighted; if `FALSE`, the highlight is removed and the string is no longer selected. The specified string is selected and highlighted by default.

### Return Value

`LB_ERR` if an error occurs.

### Remarks

Use this member function only with multiple-selection list boxes.

To select an item from a single-selection list box, use [`CListBox::SetCurSel`](#setcursel).

### Example

[!code-cpp[NVC_MFC_CListBox#38](../../mfc/codesnippet/cpp/clistbox-class_38.cpp)]

## <a name="settabstops"></a> `CListBox::SetTabStops`

Sets the tab-stop positions in a list box.

```cpp
void SetTabStops();
BOOL SetTabStops(const int& cxEachStop);

BOOL SetTabStops(
    int nTabStops,
    LPINT rgTabStops);
```

### Parameters

*`cxEachStop`*<br/>
Tab stops are set at every *`cxEachStop`* dialog units. See *`rgTabStops`* for a description of a dialog unit.

*`nTabStops`*<br/>
Specifies the number of tab stops to have in the list box.

*`rgTabStops`*<br/>
Points to the first member of an array of integers containing the tab-stop positions in dialog units. A dialog unit is a horizontal or vertical distance. One horizontal dialog unit is equal to one-fourth of the current dialog base width unit, and one vertical dialog unit is equal to one-eighth of the current dialog base height unit. The dialog base units are computed based on the height and width of the current system font. The `GetDialogBaseUnits` Windows function returns the current dialog base units in pixels. The tab stops must be sorted in increasing order; back tabs are not allowed.

### Return Value

Nonzero if all the tabs were set; otherwise 0.

### Remarks

To set tab stops to the default size of 2 dialog units, call the parameterless version of this member function. To set tab stops to a size other than 2, call the version with the *`cxEachStop`* argument.

To set tab stops to an array of sizes, use the version with the *`rgTabStops`* and *`nTabStops`* arguments. A tab stop will be set for each value in *`rgTabStops`*, up to the number specified by *`nTabStops`*.

To respond to a call to the `SetTabStops` member function, the list box must have been created with the [`LBS_USETABSTOPS`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style.

### Example

[!code-cpp[NVC_MFC_CListBox#39](../../mfc/codesnippet/cpp/clistbox-class_39.cpp)]

## <a name="settopindex"></a> `CListBox::SetTopIndex`

Ensures that a particular list-box item is visible.

```
int SetTopIndex(int nIndex);
```

### Parameters

*`nIndex`*<br/>
Specifies the zero-based index of the list-box item.

### Return Value

Zero if successful, or `LB_ERR` if an error occurs.

### Remarks

The system scrolls the list box until either the item specified by *`nIndex`* appears at the top of the list box or the maximum scroll range has been reached.

### Example

[!code-cpp[NVC_MFC_CListBox#40](../../mfc/codesnippet/cpp/clistbox-class_40.cpp)]

## <a name="vkeytoitem"></a> `CListBox::VKeyToItem`

Called by the framework when the list box's parent window receives a `WM_VKEYTOITEM` message from the list box.

```
virtual int VKeyToItem(
    UINT nKey,
    UINT nIndex);
```

### Parameters

*`nKey`*<br/>
The virtual key code of the key the user pressed. For a list of standard virtual key codes, see `Winuser.h`

*`nIndex`*<br/>
The current position of the list-box caret.

### Return Value

Returns - 2 for no further action, - 1 for default action, or a nonnegative number to specify an index of a list box item on which to perform the default action for the keystroke.

### Remarks

The `WM_VKEYTOITEM` message is sent by the list box when it receives a `WM_KEYDOWN` message, but only if the list box meets both of the following:

- Has the [`LBS_WANTKEYBOARDINPUT`](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style set.

- Has at least one item.

You should never call this function yourself. Override this function to provide your own custom handling of keyboard messages.

You must return a value to tell the framework what action your override performed. A return value of - 2 indicates that the application handled all aspects of selecting the item and requires no further action by the list box. Before returning - 2, you could set the selection or move the caret or both. To set the selection, use [`SetCurSel`](#setcursel) or [`SetSel`](#setsel). To move the caret, use [`SetCaretIndex`](#setcaretindex).

A return value of - 1 indicates that the list box should perform the default action in response to the keystroke.The default implementation returns - 1.

A return value of 0 or greater specifies the index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.

### Example

[!code-cpp[NVC_MFC_CListBox#41](../../mfc/codesnippet/cpp/clistbox-class_41.cpp)]

## See also

[MFC Sample CTRLTEST](../../overview/visual-cpp-samples.md)<br/>
[`CWnd` Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[`CWnd` Class](../../mfc/reference/cwnd-class.md)<br/>
[`CButton` Class](../../mfc/reference/cbutton-class.md)<br/>
[`CComboBox` Class](../../mfc/reference/ccombobox-class.md)<br/>
[`CEdit` Class](../../mfc/reference/cedit-class.md)<br/>
[`CScrollBar` Class](../../mfc/reference/cscrollbar-class.md)<br/>
[`CStatic` Class](../../mfc/reference/cstatic-class.md)
