---
description: "Learn more about: COleDropSource Class"
title: "COleDropSource Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDropSource", "AFXOLE/COleDropSource", "AFXOLE/COleDropSource::COleDropSource", "AFXOLE/COleDropSource::GiveFeedback", "AFXOLE/COleDropSource::OnBeginDrag", "AFXOLE/COleDropSource::QueryContinueDrag"]
helpviewer_keywords: ["COleDropSource [MFC], COleDropSource", "COleDropSource [MFC], GiveFeedback", "COleDropSource [MFC], OnBeginDrag", "COleDropSource [MFC], QueryContinueDrag"]
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
---
# COleDropSource Class

Allows data to be dragged to a drop target.

## Syntax

```
class COleDropSource : public CCmdTarget
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleDropSource::COleDropSource](#coledropsource)|Constructs a `COleDropSource` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDropSource::GiveFeedback](#givefeedback)|Changes the cursor during a drag-and-drop operation.|
|[COleDropSource::OnBeginDrag](#onbegindrag)|Handles mouse capture during a drag-and-drop operation.|
|[COleDropSource::QueryContinueDrag](#querycontinuedrag)|Checks to see whether dragging should continue.|

## Remarks

The [COleDropTarget](../../mfc/reference/coledroptarget-class.md) class handles the receiving portion of the drag-and-drop operation. The `COleDropSource` object is responsible for determining when a drag operation begins, providing feedback during the drag operation, and determining when the drag operation ends.

To use a `COleDropSource` object, just call the constructor. This simplifies the process of determining what events, such as a mouse click, begin a drag operation using [COleDataSource::DoDragDrop](../../mfc/reference/coledatasource-class.md#dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#dodragdrop), or [COleServerItem::DoDragDrop](../../mfc/reference/coleserveritem-class.md#dodragdrop) function. These functions will create a `COleDropSource` object for you. You might want to modify the default behavior of the `COleDropSource` overridable functions. These member functions will be called at the appropriate times by the framework.

For more information on drag-and-drop operations using OLE, see the article [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

For more information, see [IDropSource](/windows/win32/api/oleidl/nn-oleidl-idropsource) in the Windows SDK.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropSource`

## Requirements

**Header:** afxole.h

## <a name="coledropsource"></a> COleDropSource::COleDropSource

Constructs a `COleDropSource` object.

```
COleDropSource();
```

## <a name="givefeedback"></a> COleDropSource::GiveFeedback

Called by the framework after calling [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover) or [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).

```
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```

### Parameters

*dropEffect*<br/>
The effect you would like to display to the user, usually indicating what would happen if a drop occurred at this point with the selected data. Typically, this is the value returned by the most recent call to [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter) or [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover). It can be one or more of the following:

- DROPEFFECT_NONE A drop would not be allowed.

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

- DROPEFFECT_SCROLL A drag scroll operation is about to occur or is occurring in the target.

### Return Value

Returns DRAGDROP_S_USEDEFAULTCURSORS if dragging is in progress, NOERROR if it is not.

### Remarks

Override this function to provide feedback to the user about what would happen if a drop occurred at this point. The default implementation uses the OLE default cursors. For more information on drag-and-drop operations using OLE, see the article [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

For more information, see [IDropSource::GiveFeedback](/windows/win32/api/oleidl/nf-oleidl-idropsource-givefeedback), [IDropTarget::DragOver](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover), and [IDropTarget::DragEnter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) in the Windows SDK.

## <a name="onbegindrag"></a> COleDropSource::OnBeginDrag

Called by the framework when an event occurs that could begin a drag operation, such as pressing the left mouse button.

```
virtual BOOL OnBeginDrag(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
Points to the window that contains the selected data.

### Return Value

Nonzero if dragging is allowed, otherwise 0.

### Remarks

Override this function if you want to modify the way the dragging process is started. The default implementation captures the mouse and stays in drag mode until the user clicks the left or right mouse button or hits ESC, at which time it releases the mouse.

## <a name="querycontinuedrag"></a> COleDropSource::QueryContinueDrag

After dragging has begun, this function is called repeatedly by the framework until the drag operation is either canceled or completed.

```
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed,
    DWORD dwKeyState);
```

### Parameters

*bEscapePressed*<br/>
States whether the ESC key has been pressed since the last call to `COleDropSource::QueryContinueDrag`.

*dwKeyState*<br/>
Contains the state of the modifier keys on the keyboard. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

### Return Value

DRAGDROP_S_CANCEL if the ESC key or right button is pressed, or left button is raised before dragging starts. DRAGDROP_S_DROP if a drop operation should occur. Otherwise S_OK.

### Remarks

Override this function if you want to change the point at which dragging is canceled or a drop occurs.

The default implementation initiates the drop or cancels the drag as follows. It cancels a drag operation when the ESC key or the right mouse button is pressed. It initiates a drop operation when the left mouse button is raised after dragging has started. Otherwise, it returns S_OK and performs no further operations.

Because this function is called frequently, it should be optimized as much as possible.

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
