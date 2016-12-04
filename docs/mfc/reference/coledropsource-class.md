---
title: "COleDropSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDropSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "drag operations"
  - "drop target, dragging data to"
  - "COleDropSource class"
  - "drag and drop, drop source"
ms.assetid: d3eecc5f-a70b-4a01-b705-7d2c098ebe17
caps.latest.revision: 24
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
|[COleDropSource::COleDropSource](#coledropsource__coledropsource)|Constructs a `COleDropSource` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDropSource::GiveFeedback](#coledropsource__givefeedback)|Changes the cursor during a drag-and-drop operation.|  
|[COleDropSource::OnBeginDrag](#coledropsource__onbegindrag)|Handles mouse capture during a drag-and-drop operation.|  
|[COleDropSource::QueryContinueDrag](#coledropsource__querycontinuedrag)|Checks to see whether dragging should continue.|  
  
## Remarks  
 The [COleDropTarget](../../mfc/reference/coledroptarget-class.md) class handles the receiving portion of the drag-and-drop operation. The `COleDropSource` object is responsible for determining when a drag operation begins, providing feedback during the drag operation, and determining when the drag operation ends.  
  
 To use a `COleDropSource` object, just call the constructor. This simplifies the process of determining what events, such as a mouse click, begin a drag operation using [COleDataSource::DoDragDrop](../../mfc/reference/coledatasource-class.md#coledatasource__dodragdrop), [COleClientItem::DoDragDrop](../../mfc/reference/coleclientitem-class.md#coleclientitem__dodragdrop), or [COleServerItem::DoDragDrop](../../mfc/reference/coleserveritem-class.md#coleserveritem__dodragdrop) function. These functions will create a `COleDropSource` object for you. You might want to modify the default behavior of the `COleDropSource` overridable functions. These member functions will be called at the appropriate times by the framework.  
  
 For more information on drag-and-drop operations using OLE, see the article [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 For more information, see [IDropSource](http://msdn.microsoft.com/library/windows/desktop/ms690071) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDropSource`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coledropsource__coledropsource"></a>  COleDropSource::COleDropSource  
 Constructs a `COleDropSource` object.  
  
```  
COleDropSource();
```  
  
##  <a name="coledropsource__givefeedback"></a>  COleDropSource::GiveFeedback  
 Called by the framework after calling [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondragover) or [COleDropTarget::DragEnter](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondragenter).  
  
```  
virtual SCODE GiveFeedback(DROPEFFECT dropEffect);
```  
  
### Parameters  
 `dropEffect`  
 The effect you would like to display to the user, usually indicating what would happen if a drop occurred at this point with the selected data. Typically, this is the value returned by the most recent call to [CView::OnDragEnter](../../mfc/reference/cview-class.md#cview__ondragenter) or [CView::OnDragOver](../../mfc/reference/cview-class.md#cview__ondragover). It can be one or more of the following:  
  
- `DROPEFFECT_NONE` A drop would not be allowed.  
  
- `DROPEFFECT_COPY` A copy operation would be performed.  
  
- `DROPEFFECT_MOVE` A move operation would be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data would be established.  
  
- `DROPEFFECT_SCROLL` A drag scroll operation is about to occur or is occurring in the target.  
  
### Return Value  
 Returns **DRAGDROP_S_USEDEFAULTCURSORS** if dragging is in progress, **NOERROR** if it is not.  
  
### Remarks  
 Override this function to provide feedback to the user about what would happen if a drop occurred at this point. The default implementation uses the OLE default cursors. For more information on drag-and-drop operations using OLE, see the article [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
 For more information, see [IDropSource::GiveFeedback](http://msdn.microsoft.com/library/windows/desktop/ms693723), [IDropTarget::DragOver](http://msdn.microsoft.com/library/windows/desktop/ms680129), and [IDropTarget::DragEnter](http://msdn.microsoft.com/library/windows/desktop/ms680106) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledropsource__onbegindrag"></a>  COleDropSource::OnBeginDrag  
 Called by the framework when an event occurs that could begin a drag operation, such as pressing the left mouse button.  
  
```  
virtual BOOL OnBeginDrag(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 Points to the window that contains the selected data.  
  
### Return Value  
 Nonzero if dragging is allowed, otherwise 0.  
  
### Remarks  
 Override this function if you want to modify the way the dragging process is started. The default implementation captures the mouse and stays in drag mode until the user clicks the left or right mouse button or hits ESC, at which time it releases the mouse.  
  
##  <a name="coledropsource__querycontinuedrag"></a>  COleDropSource::QueryContinueDrag  
 After dragging has begun, this function is called repeatedly by the framework until the drag operation is either canceled or completed.  
  
```  
virtual SCODE QueryContinueDrag(
    BOOL bEscapePressed, DWORD dwKeyState);
```  
  
### Parameters  
 *bEscapePressed*  
 States whether the ESC key has been pressed since the last call to `COleDropSource::QueryContinueDrag`.  
  
 `dwKeyState`  
 Contains the state of the modifier keys on the keyboard. This is a combination of any number of the following: **MK_CONTROL**, **MK_SHIFT**, **MK_ALT**, **MK_LBUTTON**, **MK_MBUTTON**, and **MK_RBUTTON**.  
  
### Return Value  
 **DRAGDROP_S_CANCEL** if the ESC key or right button is pressed, or left button is raised before dragging starts. **DRAGDROP_S_DROP** if a drop operation should occur. Otherwise `S_OK`.  
  
### Remarks  
 Override this function if you want to change the point at which dragging is canceled or a drop occurs.  
  
 The default implementation initiates the drop or cancels the drag as follows. It cancels a drag operation when the ESC key or the right mouse button is pressed. It initiates a drop operation when the left mouse button is raised after dragging has started. Otherwise, it returns `S_OK` and performs no further operations.  
  
 Because this function is called frequently, it should be optimized as much as possible.  
  
## See Also  
 [MFC Sample HIERSVR](../../visual-cpp-samples.md)   
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



