---
title: "COleDropTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDropTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDropTarget class"
  - "drag and drop, drop target"
  - "drop commands, accepting"
  - "drop commands"
ms.assetid: a58c9a48-6a93-4357-b078-4594df258311
caps.latest.revision: 23
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
|[COleDropTarget::COleDropTarget](#coledroptarget__coledroptarget)|Constructs a `COleDropTarget` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDropTarget::OnDragEnter](#coledroptarget__ondragenter)|Called when the cursor first enters the window.|  
|[COleDropTarget::OnDragLeave](#coledroptarget__ondragleave)|Called when the cursor is dragged out of the window.|  
|[COleDropTarget::OnDragOver](#coledroptarget__ondragover)|Called repeatedly when the cursor is dragged over the window.|  
|[COleDropTarget::OnDragScroll](#coledroptarget__ondragscroll)|Called to determine whether the cursor is dragged into the scroll region of the window.|  
|[COleDropTarget::OnDrop](#coledroptarget__ondrop)|Called when data is dropped into the window, default handler.|  
|[COleDropTarget::OnDropEx](#coledroptarget__ondropex)|Called when data is dropped into the window, initial handler.|  
|[COleDropTarget::Register](#coledroptarget__register)|Registers the window as a valid drop target.|  
|[COleDropTarget::Revoke](#coledroptarget__revoke)|Causes the window to cease being a valid drop target.|  
  
## Remarks  
 Creating an object of this class allows a window to accept data through the OLE drag-and-drop mechanism.  
  
 To get a window to accept drop commands, you should first create an object of the `COleDropTarget` class, and then call the [Register](#coledroptarget__register) function with a pointer to the desired `CWnd` object as the only parameter.  
  
 For more information on drag-and-drop operations using OLE, see the article [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropTarget`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coledroptarget__coledroptarget"></a>  COleDropTarget::COleDropTarget  
 Constructs an object of class `COleDropTarget`.  
  
```  
COleDropTarget();
```  
  
### Remarks  
 Call [Register](#coledroptarget__register) to associate this object with a window.  
  
##  <a name="coledroptarget__ondragenter"></a>  COleDropTarget::OnDragEnter  
 Called by the framework when the cursor is first dragged into the window.  
  
```  
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
 `pWnd`  
 Points to the window the cursor is entering.  
  
 `pDataObject`  
 Points to the data object containing the data that can be dropped.  
  
 `dwKeyState`  
 Contains the state of the modifier keys. This is a combination of any number of the following: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, and **MK_RBUTTON**.  
  
 `point`  
 Contains the current location of the cursor in client coordinates.  
  
### Return Value  
 The effect that would result if a drop were attempted at the location specified by `point`. It can be one or more of the following:  
  
- `DROPEFFECT_NONE` A drop would not be allowed.  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
- `DROPEFFECT_SCROLL` A drag scroll operation is about to occur or is occurring in the target.  
  
### Remarks  
 Override this function to allow drop operations to occur in the window. The default implementation calls [CView::OnDragEnter](../../mfc/reference/cview-class.md#cview__ondragenter), which simply returns `DROPEFFECT_NONE` by default.  
  
 For more information, see [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledroptarget__ondragleave"></a>  COleDropTarget::OnDragLeave  
 Called by the framework when the cursor leaves the window while a dragging operation is in effect.  
  
```  
virtual void OnDragLeave(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 Points to the window the cursor is leaving.  
  
### Remarks  
 Override this function if you want special behavior when the drag operation leaves the specified window. The default implementation of this function calls [CView::OnDragLeave](../../mfc/reference/cview-class.md#cview__ondragleave).  
  
 For more information, see [IDropTarget::DragLeave](http://msdn.microsoft.com/library/windows/desktop/ms680110) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledroptarget__ondragover"></a>  COleDropTarget::OnDragOver  
 Called by the framework when the cursor is dragged over the window.  
  
```  
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
 `pWnd`  
 Points to the window that the cursor is over.  
  
 `pDataObject`  
 Points to the data object that contains the data to be dropped.  
  
 `dwKeyState`  
 Contains the state of the modifier keys. This is a combination of any number of the following: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, and **MK_RBUTTON**.  
  
 `point`  
 Contains the current location of the cursor in client coordinates.  
  
### Return Value  
 The effect that would result if a drop were attempted at the location specified by `point`. It can be one or more of the following:  
  
- `DROPEFFECT_NONE` A drop would not be allowed.  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
- `DROPEFFECT_SCROLL` Indicates that a drag scroll operation is about to occur or is occurring in the target.  
  
### Remarks  
 This function should be overridden to allow drop operations to occur in the window. The default implementation of this function calls [CView::OnDragOver](../../mfc/reference/cview-class.md#cview__ondragover), which returns `DROPEFFECT_NONE` by default. Because this function is called frequently during a drag-and-drop operation, it should be optimized as much as possible.  
  
 For more information, see [IDropTarget::DragOver](http://msdn.microsoft.com/library/windows/desktop/ms680129) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code-cpp[NVC_MFCOleContainer#21](../../mfc/codesnippet/cpp/coledroptarget-class_1.cpp)]  
  
##  <a name="coledroptarget__ondragscroll"></a>  COleDropTarget::OnDragScroll  
 Called by the framework before calling [OnDragEnter](#coledroptarget__ondragenter) or [OnDragOver](#coledroptarget__ondragover) to determine whether `point` is in the scrolling region.  
  
```  
virtual DROPEFFECT OnDragScroll(
    CWnd* pWnd,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
 `pWnd`  
 Points to the window the cursor is currently over.  
  
 `dwKeyState`  
 Contains the state of the modifier keys. This is a combination of any number of the following: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, and **MK_RBUTTON**.  
  
 `point`  
 Contains the location of the cursor, in pixels, relative to the screen.  
  
### Return Value  
 The effect that would result if a drop were attempted at the location specified by `point`. It can be one or more of the following:  
  
- `DROPEFFECT_NONE` A drop would not be allowed.  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
- `DROPEFFECT_SCROLL` Indicates that a drag scroll operation is about to occur or is occurring in the target.  
  
### Remarks  
 Override this function when you want to provide special behavior for this event. The default implementation of this function calls [CView::OnDragScroll](../../mfc/reference/cview-class.md#cview__ondragscroll), which returns `DROPEFFECT_NONE` and scrolls the window when the cursor is dragged into the default scroll region inside the border of the window.  
  
##  <a name="coledroptarget__ondrop"></a>  COleDropTarget::OnDrop  
 Called by the framework when a drop operation is to occur.  
  
```  
virtual BOOL OnDrop(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DROPEFFECT dropEffect,  
    CPoint point);
```  
  
### Parameters  
 `pWnd`  
 Points to the window the cursor is currently over.  
  
 `pDataObject`  
 Points to the data object that contains the data to be dropped.  
  
 `dropEffect`  
 The effect that the user chose for the drop operation. It can be one or more of the following:  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
 `point`  
 Contains the location of the cursor, in pixels, relative to the screen.  
  
### Return Value  
 Nonzero if the drop is successful; otherwise 0.  
  
### Remarks  
 The framework first calls [OnDropEx](#coledroptarget__ondropex). If the `OnDropEx` function does not handle the drop, the framework then calls this member function, `OnDrop`. Typically, the application overrides [OnDropEx](../../mfc/reference/cview-class.md#cview__ondropex) in the view class to handle right mouse-button drag and drop. Typically, the view class [OnDrop](../../mfc/reference/cview-class.md#cview__ondrop) is used to handle simple drag and drop.  
  
 The default implementation of `COleDropTarget::OnDrop` calls [CView::OnDrop](../../mfc/reference/cview-class.md#cview__ondrop), which simply returns **FALSE** by default.  
  
 For more information, see [IDropTarget::Drop](http://msdn.microsoft.com/library/windows/desktop/ms687242) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledroptarget__ondropex"></a>  COleDropTarget::OnDropEx  
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
 `pWnd`  
 Points to the window the cursor is currently over.  
  
 `pDataObject`  
 Points to the data object that contains the data to be dropped.  
  
 `dropDefault`  
 The effect that the user chose for the default drop operation based on the current key state. It can be `DROPEFFECT_NONE`. Drop effects are discussed in the Remarks section.  
  
 `dropList`  
 A list of the drop effects that the drop source supports. Drop effect values can be combined using the bitwise OR ( **&#124;**) operation. Drop effects are discussed in the Remarks section.  
  
 `point`  
 Contains the location of the cursor, in pixels, relative to the screen.  
  
### Return Value  
 The drop effect that resulted from the drop attempt at the location specified by `point`. Drop effects are discussed in the Remarks section.  
  
### Remarks  
 The framework first calls this function. If it does not handle the drop, the framework then calls [OnDrop](#coledroptarget__ondrop). Typically, you will override [OnDropEx](../../mfc/reference/cview-class.md#cview__ondropex) in the view class to support right mouse-button drag and drop. Typically, the view class [OnDrop](../../mfc/reference/cview-class.md#cview__ondrop) is used to handle the case of support for simple drag and drop.  
  
 The default implementation of `COleDropTarget::OnDropEx` calls [CView::OnDropEx](../../mfc/reference/cview-class.md#cview__ondropex). By default, [CView::OnDropEx](../../mfc/reference/cview-class.md#cview__ondropex) simply returns a dummy value to indicate the [OnDrop](#coledroptarget__ondrop) member function should be called.  
  
 Drop effects describe the action associated with a drop operation. See the following list of drop effects:  
  
- `DROPEFFECT_NONE` A drop would not be allowed.  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
- `DROPEFFECT_SCROLL` Indicates that a drag scroll operation is about to occur or is occurring in the target.  
  
 For more information, see [IDropTarget::Drop](http://msdn.microsoft.com/library/windows/desktop/ms687242) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledroptarget__register"></a>  COleDropTarget::Register  
 Call this function to register your window with the OLE DLLs as a valid drop target.  
  
```  
BOOL Register(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 Points to the window that is to be registered as a drop target.  
  
### Return Value  
 Nonzero if registration is successful; otherwise 0.  
  
### Remarks  
 This function must be called for drop operations to be accepted.  
  
 For more information, see [RegisterDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms678405) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledroptarget__revoke"></a>  COleDropTarget::Revoke  
 Call this function before destroying any window that has been registered as a drop target through a call to [Register](#coledroptarget__register) to remove it from the list of drop targets.  
  
```  
virtual void Revoke();
```  
  
### Remarks  
 This function is called automatically from the [OnDestroy](../../mfc/reference/cwnd-class.md#cwnd__ondestroy) handler for the window that was registered, so it is usually not necessary to call this function explicitly.  
  
 For more information, see [RevokeDragDrop](http://msdn.microsoft.com/library/windows/desktop/ms692643) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [MFC Sample HIERSVR](../../visual-cpp-samples.md)   
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDropSource Class](../../mfc/reference/coledropsource-class.md)
