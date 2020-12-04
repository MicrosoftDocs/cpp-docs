---
description: "Learn more about: CHeaderCtrl Class"
title: "CHeaderCtrl Class"
ms.date: "11/04/2016"
f1_keywords: ["CHeaderCtrl", "AFXCMN/CHeaderCtrl", "AFXCMN/CHeaderCtrl::CHeaderCtrl", "AFXCMN/CHeaderCtrl::ClearAllFilters", "AFXCMN/CHeaderCtrl::ClearFilter", "AFXCMN/CHeaderCtrl::Create", "AFXCMN/CHeaderCtrl::CreateDragImage", "AFXCMN/CHeaderCtrl::CreateEx", "AFXCMN/CHeaderCtrl::DeleteItem", "AFXCMN/CHeaderCtrl::DrawItem", "AFXCMN/CHeaderCtrl::EditFilter", "AFXCMN/CHeaderCtrl::GetBitmapMargin", "AFXCMN/CHeaderCtrl::GetFocusedItem", "AFXCMN/CHeaderCtrl::GetImageList", "AFXCMN/CHeaderCtrl::GetItem", "AFXCMN/CHeaderCtrl::GetItemCount", "AFXCMN/CHeaderCtrl::GetItemDropDownRect", "AFXCMN/CHeaderCtrl::GetItemRect", "AFXCMN/CHeaderCtrl::GetOrderArray", "AFXCMN/CHeaderCtrl::GetOverflowRect", "AFXCMN/CHeaderCtrl::HitTest", "AFXCMN/CHeaderCtrl::InsertItem", "AFXCMN/CHeaderCtrl::Layout", "AFXCMN/CHeaderCtrl::OrderToIndex", "AFXCMN/CHeaderCtrl::SetBitmapMargin", "AFXCMN/CHeaderCtrl::SetFilterChangeTimeout", "AFXCMN/CHeaderCtrl::SetFocusedItem", "AFXCMN/CHeaderCtrl::SetHotDivider", "AFXCMN/CHeaderCtrl::SetImageList", "AFXCMN/CHeaderCtrl::SetItem", "AFXCMN/CHeaderCtrl::SetOrderArray"]
helpviewer_keywords: ["CHeaderCtrl [MFC], CHeaderCtrl", "CHeaderCtrl [MFC], ClearAllFilters", "CHeaderCtrl [MFC], ClearFilter", "CHeaderCtrl [MFC], Create", "CHeaderCtrl [MFC], CreateDragImage", "CHeaderCtrl [MFC], CreateEx", "CHeaderCtrl [MFC], DeleteItem", "CHeaderCtrl [MFC], DrawItem", "CHeaderCtrl [MFC], EditFilter", "CHeaderCtrl [MFC], GetBitmapMargin", "CHeaderCtrl [MFC], GetFocusedItem", "CHeaderCtrl [MFC], GetImageList", "CHeaderCtrl [MFC], GetItem", "CHeaderCtrl [MFC], GetItemCount", "CHeaderCtrl [MFC], GetItemDropDownRect", "CHeaderCtrl [MFC], GetItemRect", "CHeaderCtrl [MFC], GetOrderArray", "CHeaderCtrl [MFC], GetOverflowRect", "CHeaderCtrl [MFC], HitTest", "CHeaderCtrl [MFC], InsertItem", "CHeaderCtrl [MFC], Layout", "CHeaderCtrl [MFC], OrderToIndex", "CHeaderCtrl [MFC], SetBitmapMargin", "CHeaderCtrl [MFC], SetFilterChangeTimeout", "CHeaderCtrl [MFC], SetFocusedItem", "CHeaderCtrl [MFC], SetHotDivider", "CHeaderCtrl [MFC], SetImageList", "CHeaderCtrl [MFC], SetItem", "CHeaderCtrl [MFC], SetOrderArray"]
ms.assetid: b847ac90-5fae-4a87-88e0-ca45f77b8b3b
---
# CHeaderCtrl Class

Provides the functionality of the Windows common header control.

## Syntax

```
class CHeaderCtrl : public CWnd
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CHeaderCtrl::CHeaderCtrl](#cheaderctrl)|Constructs a `CHeaderCtrl` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CHeaderCtrl::ClearAllFilters](#clearallfilters)|Clears all filters for a header control.|
|[CHeaderCtrl::ClearFilter](#clearfilter)|Clears the filter for a header control.|
|[CHeaderCtrl::Create](#create)|Creates a header control and attaches it to a `CHeaderCtrl` object.|
|[CHeaderCtrl::CreateDragImage](#createdragimage)|Creates a transparent version of an item's image within a header control.|
|[CHeaderCtrl::CreateEx](#createex)|Creates a header control with the specified Windows extended styles and attaches it to a `CListCtrl` object.|
|[CHeaderCtrl::DeleteItem](#deleteitem)|Deletes an item from a header control.|
|[CHeaderCtrl::DrawItem](#drawitem)|Draws the specified item of a header control.|
|[CHeaderCtrl::EditFilter](#editfilter)|Starts editing the specified filter of a header control.|
|[CHeaderCtrl::GetBitmapMargin](#getbitmapmargin)|Retrieves the width of the margin of a bitmap in a header control.|
|[CHeaderCtrl::GetFocusedItem](#getfocuseditem)|Gets the identifier of the item in the current header control that has the focus.|
|[CHeaderCtrl::GetImageList](#getimagelist)|Retrieves the handle of an image list used for drawing header items in a header control.|
|[CHeaderCtrl::GetItem](#getitem)|Retrieves information about an item in a header control.|
|[CHeaderCtrl::GetItemCount](#getitemcount)|Retrieves a count of the items in a header control.|
|[CHeaderCtrl::GetItemDropDownRect](#getitemdropdownrect)|Gets the bounding rectangle information for the specified drop-down button in a header control.|
|[CHeaderCtrl::GetItemRect](#getitemrect)|Retrieves the bounding rectangle for a given item in a header control.|
|[CHeaderCtrl::GetOrderArray](#getorderarray)|Retrieves the left-to-right order of items in a header control.|
|[CHeaderCtrl::GetOverflowRect](#getoverflowrect)|Gets the bounding rectangle of the overflow button for the current header control.|
|[CHeaderCtrl::HitTest](#hittest)|Determines which header item, if any, is located at a specified point.|
|[CHeaderCtrl::InsertItem](#insertitem)|Inserts a new item into a header control.|
|[CHeaderCtrl::Layout](#layout)|Retrieves the size and position of a header control within a given rectangle.|
|[CHeaderCtrl::OrderToIndex](#ordertoindex)|Retrieves the index value for an item based on its order in the header control.|
|[CHeaderCtrl::SetBitmapMargin](#setbitmapmargin)|Sets the width of the margin of a bitmap in a header control.|
|[CHeaderCtrl::SetFilterChangeTimeout](#setfilterchangetimeout)|Sets the timeout interval between the time a change takes place in the filter attributes and the posting of an `HDN_FILTERCHANGE` notification.|
|[CHeaderCtrl::SetFocusedItem](#setfocuseditem)|Sets the focus to a specified header item in the current header control.|
|[CHeaderCtrl::SetHotDivider](#sethotdivider)|Changes the divider between header items to indicate a manual drag and drop of a header item.|
|[CHeaderCtrl::SetImageList](#setimagelist)|Assigns an image list to a header control.|
|[CHeaderCtrl::SetItem](#setitem)|Sets the attributes of the specified item in a header control.|
|[CHeaderCtrl::SetOrderArray](#setorderarray)|Sets the left-to-right order of items in a header control.|

## Remarks

A header control is a window that is usually positioned above a set of columns of text or numbers. It contains a title for each column, and it can be divided into parts. The user can drag the dividers that separate the parts to set the width of each column. For an illustration of a header control, see [Header Controls](/windows/win32/Controls/header-controls).

This control (and therefore the `CHeaderCtrl` class) is available only to programs that run under Windows 95/98 and Windows NT version 3.51 and later.

Functionality added for Windows 95/Internet Explorer 4.0 common controls includes the following:

- Header item custom ordering.

- Header item drag and drop, for reordering of header items. Use the HDS_DRAGDROP style when you create the `CHeaderCtrl` object.

- Header column text constantly viewable during column resizing. Use the HDS_FULLDRAG style when you create a `CHeaderCtrl` object.

- Header hot tracking, which highlights the header item when the pointer is hovering over it. Use the HDS_HOTTRACK style when you create the `CHeaderCtrl` object.

- Image list support. Header items can contain images stored in a `CImageList` object or text.

For more information about using `CHeaderCtrl`, see [Controls](../../mfc/controls-mfc.md) and [Using CHeaderCtrl](../../mfc/using-cheaderctrl.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CHeaderCtrl`

## Requirements

**Header:** afxcmn.h

## <a name="cheaderctrl"></a> CHeaderCtrl::CHeaderCtrl

Constructs a `CHeaderCtrl` object.

```
CHeaderCtrl();
```

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_1.cpp)]

## <a name="clearallfilters"></a> CHeaderCtrl::ClearAllFilters

Clears all filters for a header control.

```
BOOL ClearAllFilters();
```

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method implements the behavior of the Win32 message [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter) with a column value of -1, as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_2.cpp)]

## <a name="clearfilter"></a> CHeaderCtrl::ClearFilter

Clears the filter for a header control.

```
BOOL ClearFilter(int nColumn);
```

### Parameters

*nColumn*<br/>
Column value indicating which filter to clear.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method implements the behavior of the Win32 message [HDM_CLEARFILTER](/windows/win32/Controls/hdm-clearfilter), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_3.cpp)]

## <a name="create"></a> CHeaderCtrl::Create

Creates a header control and attaches it to a `CHeaderCtrl` object.

```
virtual BOOL Create(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwStyle*<br/>
Specifies the header control's style. For a description of header control styles, see [Header Control Styles](/windows/win32/Controls/header-control-styles) in the Windows SDK.

*rect*<br/>
Specifies the header control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT](/windows/win32/api/windef/ns-windef-rect) structure.

*pParentWnd*<br/>
Specifies the header control's parent window, usually a `CDialog`. It must not be NULL.

*nID*<br/>
Specifies the header control's ID.

### Return Value

Nonzero if initialization was successful; otherwise zero.

### Remarks

You construct a `CHeaderCtrl` object in two steps. First, call the constructor and then call `Create`, which creates the header control and attaches it to the `CHeaderCtrl` object.

In addition to the header control styles, you can use the following common control styles to determine how the header control positions and resizes itself (see [Common Control Styles](/windows/win32/Controls/common-control-styles) for more information):

- CCS_BOTTOM Causes the control to position itself at the bottom of the parent window's client area and sets the width to be the same as the parent window's width.

- CCS_NODIVIDER Prevents a two-pixel highlight from being drawn at the top of the control.

- CCS_NOMOVEY Causes the control to resize and move itself horizontally, but not vertically, in response to a WM_SIZE message. If the CCS_NORESIZE style is used, this style does not apply. Header controls have this style by default.

- CCS_NOPARENTALIGN Prevents the control from automatically moving to the top or bottom of the parent window. Instead, the control keeps its position within the parent window despite changes to the size of the parent window. If the CCS_TOP or CCS_BOTTOM style is also used, the height is adjusted to the default, but the position and width remain unchanged.

- CCS_NORESIZE Prevents the control from using the default width and height when setting its initial size or a new size. Instead, the control uses the width and height specified in the request for creation or sizing.

- CCS_TOP Causes the control to position itself at the top of the parent window's client area and sets the width to be the same as the parent window's width.

You can also apply the following window styles to a header control (see [Window Styles](../../mfc/reference/styles-used-by-mfc.md#window-styles) for more information):

- WS_CHILD Creates a child window. Cannot be used with the WS_POPUP style.

- WS_VISIBLE Creates a window that is initially visible.

- WS_DISABLED Creates a window that is initially disabled.

- WS_GROUP Specifies the first control of a group of controls in which the user can move from one control to the next with the arrow keys. All controls defined with the WS_GROUP style after the first control belong to the same group. The next control with the WS_GROUP style ends the style group and starts the next group (that is, one group ends where the next begins).

- WS_TABSTOP Specifies one of any number of controls through which the user can move by using the TAB key. The TAB key moves the user to the next control specified by the WS_TABSTOP style.

If you want to use extended windows styles with your control, call [CreateEx](#createex) instead of `Create`.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_4.cpp)]

## <a name="createex"></a> CHeaderCtrl::CreateEx

Creates a control (a child window) and associate it with the `CHeaderCtrl` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```

### Parameters

*dwExStyle*<br/>
Specifies the extended style of the control being created. For a list of extended Windows styles, see the *dwExStyle* parameter for [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK.

*dwStyle*<br/>
The header control's style. For a description of header control styles, see [Header Control Styles](/windows/win32/Controls/header-control-styles) in the Windows SDK. See [Create](#create) for a list of additional styles.

*rect*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure describing the size and position of the window to be created, in client coordinates of *pParentWnd*.

*pParentWnd*<br/>
A pointer to the window that is the control's parent.

*nID*<br/>
The control's child-window ID.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Use `CreateEx` instead of `Create` to apply extended Windows styles, specified by the Windows extended style preface **WS_EX_**.

## <a name="createdragimage"></a> CHeaderCtrl::CreateDragImage

Creates a transparent version of an item's image within a header control.

```
CImageList* CreateDragImage(int nIndex);
```

### Parameters

*nIndex*<br/>
The zero-based index of the item within the header control. The image assigned to this item is the basis for the transparent image.

### Return Value

A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object if successful; otherwise NULL. The returned list contains only one image.

### Remarks

This member function implements the behavior of the Win32 message [HDM_CREATEDRAGIMAGE](/windows/win32/Controls/hdm-createdragimage), as described in the Windows SDK. It is provided to support header item drag and drop.

The `CImageList` object to which the returned pointer points is a temporary object and is deleted in the next idle-time processing.

## <a name="deleteitem"></a> CHeaderCtrl::DeleteItem

Deletes an item from a header control.

```
BOOL DeleteItem(int nPos);
```

### Parameters

*nPos*<br/>
Specifies the zero-based index of the item to delete.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#5](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_5.cpp)]

## <a name="drawitem"></a> CHeaderCtrl::DrawItem

Called by the framework when a visual aspect of an owner-draw header control changes.

```
virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*lpDrawItemStruct*<br/>
A pointer to a [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure describing the item to be painted.

### Remarks

The `itemAction` member of the `DRAWITEMSTRUCT` structure defines the drawing action that is to be performed.

By default, this member function does nothing. Override this member function to implement drawing for an owner-draw `CHeaderCtrl` object.

The application should restore all graphics device interface (GDI) objects selected for the display context supplied in *lpDrawItemStruct* before this member function terminates.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_6.cpp)]

## <a name="editfilter"></a> CHeaderCtrl::EditFilter

Begins to edit the specified filter of a header control.

```
BOOL EditFilter(
    int nColumn,
    BOOL bDiscardChanges);
```

### Parameters

*nColumn*<br/>
The column to edit.

*bDiscardChanges*<br/>
A value that specifies how to handle the user's editing changes if the user is in the process of editing the filter when the [HDM_EDITFILTER](/windows/win32/Controls/hdm-editfilter) message is sent.

Specify TRUE to discard the changes made by the user, or FALSE to accept the changes made by the user.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method implements the behavior of the Win32 message [HDM_EDITFILTER](/windows/win32/Controls/hdm-editfilter), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#7](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_7.cpp)]

## <a name="getbitmapmargin"></a> CHeaderCtrl::GetBitmapMargin

Retrieves the width of the margin of a bitmap in a header control.

```
int GetBitmapMargin() const;
```

### Return Value

The width of the bitmap margin in pixels.

### Remarks

This member function implements the behavior of the Win32 message [HDM_GETBITMAPMARGIN](/windows/win32/Controls/hdm-getbitmapmargin), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#8](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_8.cpp)]

## <a name="getfocuseditem"></a> CHeaderCtrl::GetFocusedItem

Gets the index of the item that has the focus in the current header control.

```
int GetFocusedItem() const;
```

### Return Value

The zero-based index of the header item that has the focus.

### Remarks

This method sends the [HDM_GETFOCUSEDITEM](/windows/win32/Controls/hdm-getfocuseditem) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_headerCtrl`, that is used to access the current header control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### Example

The following code example demonstrates the `SetFocusedItem` and `GetFocusedItem` methods. In an earlier section of the code, we created a header control with five columns. However, you can drag a column separator so that the column is not visible. The following example sets and then confirms the last column header as the focus item.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

## <a name="getimagelist"></a> CHeaderCtrl::GetImageList

Retrieves the handle of an image list used for drawing header items in a header control.

```
CImageList* GetImageList() const;
```

### Return Value

A pointer to a [CImageList](../../mfc/reference/cimagelist-class.md) object.

### Remarks

This member function implements the behavior of the Win32 message [HDM_GETIMAGELIST](/windows/win32/Controls/hdm-getimagelist), as described in the Windows SDK. The `CImageList` object to which the returned pointer points is a temporary object and is deleted in the next idle-time processing.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#9](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_11.cpp)]

## <a name="getitem"></a> CHeaderCtrl::GetItem

Retrieves information about a header control item.

```
BOOL GetItem(
    int nPos,
    HDITEM* pHeaderItem) const;
```

### Parameters

*nPos*<br/>
Specifies the zero-based index of the item to retrieve.

*pHeaderItem*<br/>
Pointer to an [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) structure that receives the new item. This structure is used with the `InsertItem` and `SetItem` member functions. Any flags set in the `mask` element ensure that values in the corresponding elements are properly filled in upon return. If the `mask` element is set to zero, values in the other structure elements are meaningless.

### Return Value

Nonzero if successful; otherwise 0.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#10](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_12.cpp)]

## <a name="getitemcount"></a> CHeaderCtrl::GetItemCount

Retrieves a count of the items in a header control.

```
int GetItemCount() const;
```

### Return Value

Number of header control items if successful; otherwise - 1.

### Example

  See the example for [CHeaderCtrl::DeleteItem](#deleteitem).

## <a name="getitemdropdownrect"></a> CHeaderCtrl::GetItemDropDownRect

Gets the bounding rectangle of the drop-down button for a header item in the current header control.

```
BOOL GetItemDropDownRect(
    int iItem,
    LPRECT lpRect) const;
```

### Parameters

*iItem*\
[in] Zero-based index of a header item whose style is HDF_SPLITBUTTON. For more information, see the `fmt` member of the [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) structure.

*lpRect*\
[out] Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure to receive the bounding rectangle information.

### Return Value

TRUE if this function is successful; otherwise, FALSE.

### Remarks

This method sends the [HDM_GETITEMDROPDOWNRECT](/windows/win32/Controls/hdm-getitemdropdownrect) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_headerCtrl`, that is used to access the current header control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### Example

The following code example demonstrates the `GetItemDropDownRect` method. In an earlier section of the code, we created a header control with five columns. The following code example draws a 3D rectangle around the location on the first column that is reserved for the header drop-down button.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#2](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_13.cpp)]

## <a name="getitemrect"></a> CHeaderCtrl::GetItemRect

Retrieves the bounding rectangle for a given item in a header control.

```
BOOL GetItemRect(
    int nIndex,
    LPRECT lpRect) const;
```

### Parameters

*nIndex*<br/>
The zero-based index of the header control item.

*lpRect*<br/>
A pointer to the address of a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that receives the bounding rectangle information.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This method implements the behavior of the Win32 message [HDM_GETITEMRECT](/windows/win32/Controls/hdm-getitemrect), as described in the Windows SDK.

## <a name="getorderarray"></a> CHeaderCtrl::GetOrderArray

Retrieves the left-to-right order of items in a header control.

```
BOOL GetOrderArray(
    LPINT piArray,
    int iCount);
```

### Parameters

*piArray*<br/>
A pointer to the address of a buffer that receives the index values of the items in the header control, in the order in which they appear from left to right.

*iCount*<br/>
The number of header control items. Must be non-negative.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 message [HDM_GETORDERARRAY](/windows/win32/Controls/hdm-getorderarray), as described in the Windows SDK. It is provided to support header item ordering.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#11](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_14.cpp)]

## <a name="getoverflowrect"></a> CHeaderCtrl::GetOverflowRect

Gets the bounding rectangle of the overflow button of the current header control.

```
BOOL GetOverflowRect(LPRECT lpRect) const;
```

### Parameters

*lpRect*\
[out] Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure that receives the bounding rectangle information.

### Return Value

TRUE if this function is successful; otherwise, FALSE.

### Remarks

If the header control contains more items than can be simultaneously displayed, the control can display an overflow button that scrolls to items that are not visible. The header control must have the HDS_OVERFLOW and HDF_SPLITBUTTON styles to display the overflow button. The bounding rectangle encloses the overflow button and exists only when the overflow button is displayed. For more information, see [Header Control Styles](/windows/win32/Controls/header-control-styles).

This method sends the [HDM_GETOVERFLOWRECT](/windows/win32/Controls/hdm-getoverflowrect) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_headerCtrl`, that is used to access the current header control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### Example

The following code example demonstrates the `GetOverflowRect` method. In an earlier section of the code, we created a header control with five columns. However, you can drag a column separator so that the column is not visible. If some columns are not visible, the header control draws an overflow button. The following code example draws a 3D rectangle around the location of the overflow button.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#3](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_15.cpp)]

## <a name="hittest"></a> CHeaderCtrl::HitTest

Determines which header item, if any, is located at a specified point.

```
int HitTest(LPHDHITTESTINFO* phdhti);
```

### Parameters

*phdhti*\
[in, out] Pointer to a [HDHITTESTINFO](/windows/win32/api/commctrl/ns-commctrl-hdhittestinfo) structure that specifies the point to test and receives the results of the test.

### Return Value

The zero-based index of the header item, if any, at the specified position; otherwise, -1.

### Remarks

This method sends the [HDM_HITTEST](/windows/win32/Controls/hdm-hittest) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_headerCtrl`, that is used to access the current header control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### Example

The following code example demonstrates the `HitTest` method. In an earlier section of this code example, we created a header control with five columns. However, you can drag a column separator so that the column is not visible. This example reports the index of the column if it is visible and -1 if the column is not visible.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#1](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_16.cpp)]

## <a name="insertitem"></a> CHeaderCtrl::InsertItem

Inserts a new item into a header control at the specified index.

```
int InsertItem(
    int nPos,
    HDITEM* phdi);
```

### Parameters

*nPos*<br/>
The zero-based index of the item to be inserted. If the value is zero, the item is inserted at the beginning of the header control. If the value is greater than the maximum value, the item is inserted at the end of the header control.

*phdi*<br/>
Pointer to an [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) structure that contains information about the item to be inserted.

### Return Value

Index of the new item if successful; otherwise - 1.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#12](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_17.cpp)]

## <a name="layout"></a> CHeaderCtrl::Layout

Retrieves the size and position of a header control within a given rectangle.

```
BOOL Layout(HDLAYOUT* pHeaderLayout);
```

### Parameters

*pHeaderLayout*<br/>
Pointer to an [HDLAYOUT](/windows/win32/api/commctrl/ns-commctrl-hdlayout) structure, which contains information used to set the size and position of a header control.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This function is used to determine the appropriate dimensions for a new header control that is to occupy the given rectangle.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#13](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_18.cpp)]

## <a name="ordertoindex"></a> CHeaderCtrl::OrderToIndex

Retrieves the index value for an item based on its order in the header control.

```
int OrderToIndex(int nOrder) const;
```

### Parameters

*nOrder*<br/>
The zero-based order that the item appears in the header control, from left to right.

### Return Value

The index of the item, based on its order in the header control. The index counts from left to right, beginning with 0.

### Remarks

This member function implements the behavior of the Win32 macro [HDM_ORDERTOINDEX](/windows/win32/controls/hdm-ordertoindex), as described in the Windows SDK. It is provided to support header item ordering.

## <a name="setbitmapmargin"></a> CHeaderCtrl::SetBitmapMargin

Sets the width of the margin of a bitmap in a header control.

```
int SetBitmapMargin(int nWidth);
```

### Parameters

*nWidth*<br/>
Width, specified in pixels, of the margin that surrounds a bitmap within an existing header control.

### Return Value

The width of the bitmap margin in pixels.

### Remarks

This member function implements the behavior of the Win32 message [HDM_SETBITMAPMARGIN](/windows/win32/Controls/hdm-setbitmapmargin), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#14](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_19.cpp)]

## <a name="setfilterchangetimeout"></a> CHeaderCtrl::SetFilterChangeTimeout

Sets the timeout interval between the time a change takes place in the filter attributes and the posting of an [HDN_FILTERCHANGE](/windows/win32/Controls/hdn-filterchange) notification.

```
int SetFilterChangeTimeout(DWORD dwTimeOut);
```

### Parameters

*dwTimeOut*<br/>
Timeout value, in milliseconds.

### Return Value

The index of the filter control being modified.

### Remarks

This member function implements the behavior of the Win32 message [HDM_SETFILTERCHANGETIMEOUT](/windows/win32/Controls/hdm-setfilterchangetimeout), as described in the Windows SDK.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#15](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_20.cpp)]

## <a name="setfocuseditem"></a> CHeaderCtrl::SetFocusedItem

Sets the focus to a specified header item in the current header control.

```
BOOL SetFocusedItem(int iItem);
```

### Parameters

*iItem*\
[in] Zero-based index of a header item.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

### Remarks

This method sends the [HDM_SETFOCUSEDITEM](/windows/win32/Controls/hdm-setfocuseditem) message, which is described in the Windows SDK.

### Example

The following code example defines the variable, `m_headerCtrl`, that is used to access the current header control. This variable is used in the next example.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#6](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_9.h)]

### Example

The following code example demonstrates the `SetFocusedItem` and `GetFocusedItem` methods. In an earlier section of the code, we created a header control with five columns. However, you can drag a column separator so that the column is not visible. The following example sets and then confirms the last column header as the focus item.

[!code-cpp[NVC_MFC_CHeaderCtrl_s4#4](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_10.cpp)]

## <a name="sethotdivider"></a> CHeaderCtrl::SetHotDivider

Changes the divider between header items to indicate a manual drag and drop of a header item.

```
int SetHotDivider(CPoint pt);
int SetHotDivider(int nIndex);
```

### Parameters

*pt*<br/>
The position of the pointer. The header control highlights the appropriate divider based on the pointer's position.

*nIndex*<br/>
The index of the highlighted divider.

### Return Value

The index of the highlighted divider.

### Remarks

This member function implements the behavior of the Win32 message [HDM_SETHOTDIVIDER](/windows/win32/Controls/hdm-sethotdivider), as described in the Windows SDK. It is provided to support header item drag and drop.

### Example

[!code-cpp[NVC_MFC_CHeaderCtrl#16](../../mfc/reference/codesnippet/cpp/cheaderctrl-class_21.cpp)]

## <a name="setimagelist"></a> CHeaderCtrl::SetImageList

Assigns an image list to a header control.

```
CImageList* SetImageList(CImageList* pImageList);
```

### Parameters

*pImageList*<br/>
A pointer to a `CImageList` object containing the image list to be assigned to the header control.

### Return Value

A pointer to the [CImageList](../../mfc/reference/cimagelist-class.md) object previously assigned to the header control.

### Remarks

This member function implements the behavior of the Win32 message [HDM_SETIMAGELIST](/windows/win32/Controls/hdm-setimagelist), as described in the Windows SDK. The `CImageList` object to which the returned pointer points is a temporary object and is deleted in the next idle-time processing.

### Example

  See the example for [CHeaderCtrl::GetImageList](#getimagelist).

## <a name="setitem"></a> CHeaderCtrl::SetItem

Sets the attributes of the specified item in a header control.

```
BOOL SetItem(
    int nPos,
    HDITEM* pHeaderItem);
```

### Parameters

*nPos*<br/>
The zero-based index of the item to be manipulated.

*pHeaderItem*<br/>
Pointer to an [HDITEM](/windows/win32/api/commctrl/ns-commctrl-hditemw) structure that contains information about the new item.

### Return Value

Nonzero if successful; otherwise 0.

### Example

  See the example for [CHeaderCtrl::GetItem](#getitem).

## <a name="setorderarray"></a> CHeaderCtrl::SetOrderArray

Sets the left-to-right order of items in a header control.

```
BOOL SetOrderArray(
    int iCount,
    LPINT piArray);
```

### Parameters

*iCount*<br/>
The number of header control items.

*piArray*<br/>
A pointer to the address of a buffer that receives the index values of the items in the header control, in the order in which they appear from left to right.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

This member function implements the behavior of the Win32 macro [HDM_SETORDERARRAY](/windows/win32/Controls/hdm-setorderarray), as described in the Windows SDK. It is provided to support header item ordering.

### Example

  See the example for [CHeaderCtrl::GetOrderArray](#getorderarray).

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CTabCtrl Class](../../mfc/reference/ctabctrl-class.md)<br/>
[CListCtrl Class](../../mfc/reference/clistctrl-class.md)<br/>
[CImageList Class](../../mfc/reference/cimagelist-class.md)
