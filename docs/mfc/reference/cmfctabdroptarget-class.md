---
description: "Learn more about: CMFCTabDropTarget Class"
title: "CMFCTabDropTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCTabDropTarget", "AFXBASETABCTRL/CMFCTabDropTarget", "AFXBASETABCTRL/CMFCTabDropTarget::OnDragEnter", "AFXBASETABCTRL/CMFCTabDropTarget::OnDragLeave", "AFXBASETABCTRL/CMFCTabDropTarget::OnDragOver", "AFXBASETABCTRL/CMFCTabDropTarget::OnDropEx", "AFXBASETABCTRL/CMFCTabDropTarget::Register"]
helpviewer_keywords: ["CMFCTabDropTarget [MFC], OnDragEnter", "CMFCTabDropTarget [MFC], OnDragLeave", "CMFCTabDropTarget [MFC], OnDragOver", "CMFCTabDropTarget [MFC], OnDropEx", "CMFCTabDropTarget [MFC], Register"]
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
---
# CMFCTabDropTarget Class

Provides the communication mechanism between a tab control and the OLE libraries.

## Syntax

```
class CMFCTabDropTarget : public COleDropTarget
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCTabDropTarget::CMFCTabDropTarget`|Default constructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCTabDropTarget::OnDragEnter](#ondragenter)|Called by the framework when the user drags an object into a tab window. (Overrides [COleDropTarget::OnDragEnter](../../mfc/reference/coledroptarget-class.md#ondragenter).)|
|[CMFCTabDropTarget::OnDragLeave](#ondragleave)|Called by the framework when the user drags an object outside of the tab window that has focus. (Overrides [COleDropTarget::OnDragLeave](../../mfc/reference/coledroptarget-class.md#ondragleave).)|
|[CMFCTabDropTarget::OnDragOver](#ondragover)|Called by the framework when the user drags an object onto the tab window that has focus. (Overrides [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#ondragover).)|
|[CMFCTabDropTarget::OnDropEx](#ondropex)|Called by the framework when the user releases the mouse button at the end of a drag operation. (Overrides [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).)|
|[CMFCTabDropTarget::Register](#register)|Registers the control as one that can be the target of an OLE drag-and-drop operation.|

### Remarks

This class provides drag-and-drop support to the `CMFCBaseTabCtrl` class. If your application initializes the OLE libraries by using the [AfxOleInit](ole-initialization.md#afxoleinit) function, `CMFCBaseTabCtrl` objects register themselves for drag-and-drop operations.

The `CMFCTabDropTarget` class extends its base class by making the tab that is under the cursor when a drag operation occurs active. For more information about drag-and-drop operations, see [OLE drag and drop](../../mfc/drag-and-drop-ole.md).

## Example

The following example demonstrates how to construct a `CMFCTabDropTarget` object and use its `Register` method.

[!code-cpp[NVC_MFC_RibbonApp#39](../../mfc/reference/codesnippet/cpp/cmfctabdroptarget-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[COleDropTarget](../../mfc/reference/coledroptarget-class.md)

[CMFCTabDropTarget](../../mfc/reference/cmfctabdroptarget-class.md)

## Requirements

**Header:** afxbasetabctrl.h

## <a name="ondragenter"></a> CMFCTabDropTarget::OnDragEnter

Called by the framework when the user drags an object into a tab window.

```
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pWnd*\
[in] Unused.

*pDataObject*\
[in] A pointer to the object that the user drags.

*dwKeyState*\
[in] Contains the state of the modifier keys. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

*point*\
[in] The location of the cursor in client coordinates.

### Return Value

The effect that results if the drop occurs at the location specified by *point*. It can be one or more of the following:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### Remarks

This method returns DROPEFFECT_NONE if the toolbar framework is not in customization mode or the Clipboard data format is unavailable. Otherwise, it returns the result of calling `CMFCBaseTabCtrl::OnDragEnter` with the provided parameters.

For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="ondragleave"></a> CMFCTabDropTarget::OnDragLeave

Called by the framework when the user drags an object outside of the tab window that has focus.

```
virtual void OnDragLeave(CWnd* pWnd);
```

### Parameters

*pWnd*\
[in] Unused.

### Remarks

This method calls the `CMFCBaseTabCtrl::OnDragLeave` method to perform the drag operation.

## <a name="ondragover"></a> CMFCTabDropTarget::OnDragOver

Called by the framework when the user drags an object onto the tab window that has focus.

```
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DWORD dwKeyState,
    CPoint point);
```

### Parameters

*pWnd*\
[in] Unused.

*pDataObject*\
[in] A pointer to the object that the user drags.

*dwKeyState*\
[in] Contains the state of the modifier keys. This is a combination of any number of the following: MK_CONTROL, MK_SHIFT, MK_ALT, MK_LBUTTON, MK_MBUTTON, and MK_RBUTTON.

*point*\
[in] The location of the mouse pointer in client coordinates.

### Return Value

The effect that results if the drop occurs at the location specified by *point*. It can be one or more of the following:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### Remarks

This method makes the tab that is under the cursor when a drag operation occurs active. It returns DROPEFFECT_NONE if the toolbar framework is not in customization mode or the Clipboard data format is unavailable. Otherwise, it returns the result of calling `CMFCBaseTabCtrl::OnDragOver` with the provided parameters.

For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="ondropex"></a> CMFCTabDropTarget::OnDropEx

Called by the framework when the user releases the mouse button at the end of a drag operation.

```
virtual DROPEFFECT OnDropEx(
    CWnd* pWnd,
    COleDataObject* pDataObject,
    DROPEFFECT dropEffect,
    DROPEFFECT dropList,
    CPoint point);
```

### Parameters

*pWnd*\
[in] Unused.

*pDataObject*\
[in] A pointer to the object that the user drags.

*dropEffect*\
[in] The default drop operation.

*dropList*\
[in] Unused.

*point*\
[in] The location of the mouse pointer in client coordinates.

### Return Value

The resulting drop effect. It can be one or more of the following:

- DROPEFFECT_NONE

- DROPEFFECT_COPY

- DROPEFFECT_MOVE

- DROPEFFECT_LINK

- DROPEFFECT_SCROLL

### Remarks

This method calls `CMFCBaseTabCtrl::OnDrop` if the toolbar framework is in customization mode and the Clipboard data format is available. If the call to `CMFCBaseTabCtrl::OnDrop` returns a nonzero value, this method returns the default drop effect specified by *dropEffect*. Otherwise, this method returns DROPEFFECT_NONE. For more information about drop effects, see [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#ondropex).

For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#isdataavailable).

## <a name="register"></a> CMFCTabDropTarget::Register

Registers the control as one that can be the target of an OLE drag-and-drop operation.

```
BOOL Register(CMFCBaseTabCtrl *pOwner);
```

### Parameters

*pOwner*\
[in] The tab control to register as a drop target.

### Return Value

Nonzero if registration was successful; otherwise 0.

### Remarks

This method calls [COleDropTarget::Register](../../mfc/reference/coledroptarget-class.md#register) to register the control for drag-and-drop operations.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[OLE drag and drop](../../mfc/drag-and-drop-ole.md)
