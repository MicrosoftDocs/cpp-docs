---
description: "Learn more about: COleDropTarget Class"
title: "COleDropTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDropTarget", "AFXOLE/COleDropTarget", "AFXOLE/COleDropTarget::COleDropTarget", "AFXOLE/COleDropTarget::OnDragEnter", "AFXOLE/COleDropTarget::OnDragLeave", "AFXOLE/COleDropTarget::OnDragOver", "AFXOLE/COleDropTarget::OnDragScroll", "AFXOLE/COleDropTarget::OnDrop", "AFXOLE/COleDropTarget::OnDropEx", "AFXOLE/COleDropTarget::Register", "AFXOLE/COleDropTarget::Revoke"]
helpviewer_keywords: ["COleDropTarget [MFC], COleDropTarget", "COleDropTarget [MFC], OnDragEnter", "COleDropTarget [MFC], OnDragLeave", "COleDropTarget [MFC], OnDragOver", "COleDropTarget [MFC], OnDragScroll", "COleDropTarget [MFC], OnDrop", "COleDropTarget [MFC], OnDropEx", "COleDropTarget [MFC], Register", "COleDropTarget [MFC], Revoke"]
ms.assetid: a58c9a48-6a93-4357-b078-4594df258311
---
# COleDropTarget Class

Provides the communication mechanism between a window and the OLE libraries.

## Syntax

```
class COleDropTarget : public CCmdTarget
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleDropTarget::COleDropTarget](#coledroptarget)|Constructs a `COleDropTarget` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDropTarget::OnDragEnter](#ondragenter)|Called when the cursor first enters the window.|
|[COleDropTarget::OnDragLeave](#ondragleave)|Called when the cursor is dragged out of the window.|
|[COleDropTarget::OnDragOver](#ondragover)|Called repeatedly when the cursor is dragged over the window.|
|[COleDropTarget::OnDragScroll](#ondragscroll)|Called to determine whether the cursor is dragged into the scroll region of the window.|
|[COleDropTarget::OnDrop](#ondrop)|Called when data is dropped into the window, default handler.|
|[COleDropTarget::OnDropEx](#ondropex)|Called when data is dropped into the window, initial handler.|
|[COleDropTarget::Register](#register)|Registers the window as a valid drop target.|
|[COleDropTarget::Revoke](#revoke)|Causes the window to cease being a valid drop target.|

## Remarks

Creating an object of this class allows a window to accept data through the OLE drag-and-drop mechanism.

To get a window to accept drop commands, you should first create an object of the `COleDropTarget` class, and then call the [Register](#register) function with a pointer to the desired `CWnd` object as the only parameter.

For more information on drag-and-drop operations using OLE, see the article [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`COleDropTarget`

## Requirements

**Header:** afxole.h

## <a name="coledroptarget"></a> COleDropTarget::COleDropTarget

Constructs an object of class `COleDropTarget`.

```
COleDropTarget();
```

### Remarks

Call [Register](#register) to associate this object with a window.

## <a name="ondragenter"></a> COleDropTarget::OnDragEnter

Called by the framework when the cursor is first dragged into the window.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pWnd*<br/>
Points to the window the cursor is entering.

*pDataObject*<br/>
Points to the data object containing the data that can be dropped.

*dwKeyState*<br/>
Contains the state of the modifier keys. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

*point*<br/>
Contains the current location of the cursor in client coordinates.

### Return Value

The effect that would result if a drop were attempted at the location specified by *point*. It can be one or more of the following:

- DROPEFFECT_NONE A drop would not be allowed.

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

- DROPEFFECT_SCROLL A drag scroll operation is about to occur or is occurring in the target.

### Remarks

Override this function to allow drop operations to occur in the window. The default implementation calls [CView::OnDragEnter](../../mfc/reference/cview-class.md#ondragenter), which simply returns DROPEFFECT_NONE by default.

For more information, see [IDropTarget::DragEnter](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragenter) in the Windows SDK.

## <a name="ondragleave"></a> COleDropTarget::OnDragLeave

Called by the framework when the cursor leaves the window while a dragging operation is in effect.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
Points to the window the cursor is leaving.

### Remarks

Override this function if you want special behavior when the drag operation leaves the specified window. The default implementation of this function calls [CView::OnDragLeave](../../mfc/reference/cview-class.md#ondragleave).

For more information, see [IDropTarget::DragLeave](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragleave) in the Windows SDK.

## <a name="ondragover"></a> COleDropTarget::OnDragOver

Called by the framework when the cursor is dragged over the window.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pWnd*<br/>
Points to the window that the cursor is over.

*pDataObject*<br/>
Points to the data object that contains the data to be dropped.

*dwKeyState*<br/>
Contains the state of the modifier keys. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

*point*<br/>
Contains the current location of the cursor in client coordinates.

### Return Value

The effect that would result if a drop were attempted at the location specified by *point*. It can be one or more of the following:

- DROPEFFECT_NONE A drop would not be allowed.

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

- DROPEFFECT_SCROLL Indicates that a drag scroll operation is about to occur or is occurring in the target.

### Remarks

This function should be overridden to allow drop operations to occur in the window. The default implementation of this function calls [CView::OnDragOver](../../mfc/reference/cview-class.md#ondragover), which returns DROPEFFECT_NONE by default. Because this function is called frequently during a drag-and-drop operation, it should be optimized as much as possible.

For more information, see [IDropTarget::DragOver](/windows/win32/api/oleidl/nf-oleidl-idroptarget-dragover) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]

## <a name="ondragscroll"></a> COleDropTarget::OnDragScroll

Called by the framework before calling [OnDragEnter](#ondragenter) or [OnDragOver](#ondragover) to determine whether *point* is in the scrolling region.

```
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pWnd*<br/>
Points to the window the cursor is currently over.

*dwKeyState*<br/>
Contains the state of the modifier keys. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

*point*<br/>
Contains the location of the cursor, in pixels, relative to the screen.

### Return Value

The effect that would result if a drop were attempted at the location specified by *point*. It can be one or more of the following:

- DROPEFFECT_NONE A drop would not be allowed.

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

- DROPEFFECT_SCROLL Indicates that a drag scroll operation is about to occur or is occurring in the target.

### Remarks

Override this function when you want to provide special behavior for this event. The default implementation of this function calls [CView::OnDragScroll](../../mfc/reference/cview-class.md#ondragscroll), which returns DROPEFFECT_NONE and scrolls the window when the cursor is dragged into the default scroll region inside the border of the window.

## <a name="ondrop"></a> COleDropTarget::OnDrop

Called by the framework when a drop operation is to occur.

```
virtual BOOL OnDrop(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    CPoint point);
```

### Parameters

*pWnd*<br/>
Points to the window the cursor is currently over.

*pDataObject*<br/>
Points to the data object that contains the data to be dropped.

*dropEffect*<br/>
The effect that the user chose for the drop operation. It can be one or more of the following:

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

*point*<br/>
Contains the location of the cursor, in pixels, relative to the screen.

### Return Value

Nonzero if the drop is successful; otherwise 0.

### Remarks

The framework first calls [OnDropEx](#ondropex). If the `OnDropEx` function does not handle the drop, the framework then calls this member function, `OnDrop`. Typically, the application overrides [OnDropEx](../../mfc/reference/cview-class.md#ondropex) in the view class to handle right mouse-button drag and drop. Typically, the view class [OnDrop](../../mfc/reference/cview-class.md#ondrop) is used to handle simple drag and drop.

The default implementation of `COleDropTarget::OnDrop` calls [CView::OnDrop](../../mfc/reference/cview-class.md#ondrop), which simply returns FALSE by default.

For more information, see [IDropTarget::Drop](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) in the Windows SDK.

## <a name="ondropex"></a> COleDropTarget::OnDropEx

Called by the framework when a drop operation is to occur.

```
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropDefault,
    DROPEFFECT dropList,
    CPoint point);
```

### Parameters

*pWnd*<br/>
Points to the window the cursor is currently over.

*pDataObject*<br/>
Points to the data object that contains the data to be dropped.

*dropDefault*<br/>
The effect that the user chose for the default drop operation based on the current key state. It can be DROPEFFECT_NONE. Drop effects are discussed in the Remarks section.

*dropList*<br/>
A list of the drop effects that the drop source supports. Drop effect values can be combined using the bitwise OR (**&#124;**) operation. Drop effects are discussed in the Remarks section.

*point*<br/>
Contains the location of the cursor, in pixels, relative to the screen.

### Return Value

The drop effect that resulted from the drop attempt at the location specified by *point*. Drop effects are discussed in the Remarks section.

### Remarks

The framework first calls this function. If it does not handle the drop, the framework then calls [OnDrop](#ondrop). Typically, you will override [OnDropEx](../../mfc/reference/cview-class.md#ondropex) in the view class to support right mouse-button drag and drop. Typically, the view class [OnDrop](../../mfc/reference/cview-class.md#ondrop) is used to handle the case of support for simple drag and drop.

The default implementation of `COleDropTarget::OnDropEx` calls [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex). By default, [CView::OnDropEx](../../mfc/reference/cview-class.md#ondropex) simply returns a dummy value to indicate the [OnDrop](#ondrop) member function should be called.

Drop effects describe the action associated with a drop operation. See the following list of drop effects:

- DROPEFFECT_NONE A drop would not be allowed.

- DROPEFFECT_COPY A copy operation would be performed.

- DROPEFFECT_MOVE A move operation would be performed.

- DROPEFFECT_LINK A link from the dropped data to the original data would be established.

- DROPEFFECT_SCROLL Indicates that a drag scroll operation is about to occur or is occurring in the target.

For more information, see [IDropTarget::Drop](/windows/win32/api/oleidl/nf-oleidl-idroptarget-drop) in the Windows SDK.

## <a name="register"></a> COleDropTarget::Register

Call this function to register your window with the OLE DLLs as a valid drop target.

```
BOOL Register(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
Points to the window that is to be registered as a drop target.

### Return Value

Nonzero if registration is successful; otherwise 0.

### Remarks

This function must be called for drop operations to be accepted.

For more information, see [RegisterDragDrop](/windows/win32/api/ole2/nf-ole2-registerdragdrop) in the Windows SDK.

## <a name="revoke"></a> COleDropTarget::Revoke

Call this function before destroying any window that has been registered as a drop target through a call to [Register](#register) to remove it from the list of drop targets.

```
virtual void Revoke();
```

### Remarks

This function is called automatically from the [OnDestroy](../../mfc/reference/cwnd-class.md#ondestroy) handler for the window that was registered, so it is usually not necessary to call this function explicitly.

For more information, see [RevokeDragDrop](/windows/win32/api/ole2/nf-ole2-revokedragdrop) in the Windows SDK.

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample OCLIENT](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[COleDropSource Class](../../mfc/reference/coledropsource-class.md)
