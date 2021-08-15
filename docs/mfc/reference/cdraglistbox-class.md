---
description: "Learn more about: CDragListBox Class"
title: "CDragListBox Class"
ms.date: "11/04/2016"
f1_keywords: ["CDragListBox", "AFXCMN/CDragListBox", "AFXCMN/CDragListBox::CDragListBox", "AFXCMN/CDragListBox::BeginDrag", "AFXCMN/CDragListBox::CancelDrag", "AFXCMN/CDragListBox::Dragging", "AFXCMN/CDragListBox::DrawInsert", "AFXCMN/CDragListBox::Dropped", "AFXCMN/CDragListBox::ItemFromPt"]
helpviewer_keywords: ["CDragListBox [MFC], CDragListBox", "CDragListBox [MFC], BeginDrag", "CDragListBox [MFC], CancelDrag", "CDragListBox [MFC], Dragging", "CDragListBox [MFC], DrawInsert", "CDragListBox [MFC], Dropped", "CDragListBox [MFC], ItemFromPt"]
ms.assetid: fee20b42-60ae-4aa9-83f9-5a3d9b96e33b
---
# CDragListBox Class

In addition to providing the functionality of a Windows list box, the `CDragListBox` class allows the user to move list box items, such as filenames, within the list box.

## Syntax

```
class CDragListBox : public CListBox
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDragListBox::CDragListBox](#cdraglistbox)|Constructs a `CDragListBox` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDragListBox::BeginDrag](#begindrag)|Called by the framework when a drag operation starts.|
|[CDragListBox::CancelDrag](#canceldrag)|Called by the framework when a drag operation has been canceled.|
|[CDragListBox::Dragging](#dragging)|Called by the framework during a drag operation.|
|[CDragListBox::DrawInsert](#drawinsert)|Draws the insertion guide of the drag list box.|
|[CDragListBox::Dropped](#dropped)|Called by the framework after the item has been dropped.|
|[CDragListBox::ItemFromPt](#itemfrompt)|Returns the coordinates of the item being dragged.|

## Remarks

List boxes with this capability allow users to order the items in a list in whatever manner is most useful to them. By default, the list box will move the item to the new location in the list. However, `CDragListBox` objects can be customized to copy items instead of moving them.

The list box control associated with the `CDragListBox` class must not have the LBS_SORT or the LBS_MULTIPLESELECT style. For a description of list box styles, see [List-Box Styles](../../mfc/reference/styles-used-by-mfc.md#list-box-styles).

To use a drag list box in an existing dialog box of your application, add a list box control to your dialog template using the dialog editor and then assign a member variable (of Category `Control` and Variable Type `CDragListBox`) corresponding to the list box control in your dialog template.

For more information on assigning controls to member variables, see [Shortcut for Defining Member Variables for Dialog Controls](../../windows/adding-editing-or-deleting-controls.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CListBox](../../mfc/reference/clistbox-class.md)

`CDragListBox`

## Requirements

**Header:** afxcmn.h

## <a name="begindrag"></a> CDragListBox::BeginDrag

Called by the framework when an event occurs that could begin a drag operation, such as pressing the left mouse button.

```
virtual BOOL BeginDrag(CPoint pt);
```

### Parameters

*pt*<br/>
A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that contains the coordinates of the item being dragged.

### Return Value

Nonzero if dragging is allowed, otherwise 0.

### Remarks

Override this function if you want to control what happens when a drag operation begins. The default implementation captures the mouse and stays in drag mode until the user clicks the left or right mouse button or presses ESC, at which time the drag operation is canceled.

## <a name="canceldrag"></a> CDragListBox::CancelDrag

Called by the framework when a drag operation has been canceled.

```
virtual void CancelDrag(CPoint pt);
```

### Parameters

*pt*<br/>
A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that contains the coordinates of the item being dragged.

### Remarks

Override this function to handle any special processing for your list box control.

## <a name="cdraglistbox"></a> CDragListBox::CDragListBox

Constructs a `CDragListBox` object.

```
CDragListBox();
```

## <a name="dragging"></a> CDragListBox::Dragging

Called by the framework when a list box item is being dragged within the `CDragListBox` object.

```
virtual UINT Dragging(CPoint pt);
```

### Parameters

*pt*<br/>
A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that contains the x and y screen coordinates of the cursor.

### Return Value

The resource ID of the cursor to be displayed. The following values are possible:

- DL_COPYCURSOR Indicates that the item will be copied.

- DL_MOVECURSOR Indicates that the item will be moved.

- DL_STOPCURSOR Indicates that the current drop target is not acceptable.

### Remarks

The default behavior returns DL_MOVECURSOR. Override this function if you want to provide additional functionality.

## <a name="drawinsert"></a> CDragListBox::DrawInsert

Called by the framework to draw the insertion guide before the item with the indicated index.

```
virtual void DrawInsert(int nItem);
```

### Parameters

*nItem*<br/>
Zero-based index of the insertion point.

### Remarks

A value of - 1 clears the insertion guide. Override this function to modify the appearance or behavior of the insertion guide.

## <a name="dropped"></a> CDragListBox::Dropped

Called by the framework when an item is dropped within a `CDragListBox` object.

```
virtual void Dropped(
    int nSrcIndex,
    CPoint pt);
```

### Parameters

*nSrcIndex*<br/>
Specifies the zero-based index of the dropped string.

*pt*<br/>
A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that contains the coordinates of the drop site.

### Remarks

The default behavior copies the list box item and its data to the new location and then deletes the original item. Override this function to customize the default behavior, such as enabling copies of list box items to be dragged to other locations within the list.

## <a name="itemfrompt"></a> CDragListBox::ItemFromPt

Call this function to retrieve the zero-based index of the list box item located at *pt*.

```
int ItemFromPt(
    CPoint pt,
    BOOL bAutoScroll = TRUE) const;
```

### Parameters

*pt*<br/>
A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object containing the coordinates of a point within the list box.

*bAutoScroll*<br/>
Nonzero if scrolling is allowed, otherwise 0.

### Return Value

Zero-based index of the drag list box item.

## See also

[MFC Sample TSTCON](../../overview/visual-cpp-samples.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CListBox Class](../../mfc/reference/clistbox-class.md)
