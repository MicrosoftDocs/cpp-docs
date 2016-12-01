---
title: "CMFCTabDropTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCTabDropTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCTabDropTarget class"
ms.assetid: 9777b7b6-10da-4c4b-b1d1-7ea795b0f1cb
caps.latest.revision: 22
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
# CMFCTabDropTarget Class
Provides the communication mechanism between a tab control and the OLE libraries.  
  
## Syntax  
  
```  
class CMFCTabDropTarget : public COleDropTarget  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCTabDropTarget::CMFCTabDropTarget`|Default constructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCTabDropTarget::OnDragEnter](#cmfctabdroptarget__ondragenter)|Called by the framework when the user drags an object into a tab window. (Overrides [COleDropTarget::OnDragEnter](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondragenter).)|  
|[CMFCTabDropTarget::OnDragLeave](#cmfctabdroptarget__ondragleave)|Called by the framework when the user drags an object outside of the tab window that has focus. (Overrides [COleDropTarget::OnDragLeave](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondragleave).)|  
|[CMFCTabDropTarget::OnDragOver](#cmfctabdroptarget__ondragover)|Called by the framework when the user drags an object onto the tab window that has focus. (Overrides [COleDropTarget::OnDragOver](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondragover).)|  
|[CMFCTabDropTarget::OnDropEx](#cmfctabdroptarget__ondropex)|Called by the framework when the user releases the mouse button at the end of a drag operation. (Overrides [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondropex).)|  
|[CMFCTabDropTarget::Register](#cmfctabdroptarget__register)|Registers the control as one that can be the target of an OLE drag-and-drop operation.|  
  
### Remarks  
 This class provides drag-and-drop support to the `CMFCBaseTabCtrl` class. If your application initializes the OLE libraries by using the [AfxOleInit](ole-initialization.md#afxoleinit) function, `CMFCBaseTabCtrl` objects register themselves for drag-and-drop operations.  
  
 The `CMFCTabDropTarget` class extends its base class by making the tab that is under the cursor when a drag operation occurs active. For more information about drag-and-drop operations, see [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md).  
  
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
  
##  <a name="cmfctabdroptarget__ondragenter"></a>  CMFCTabDropTarget::OnDragEnter  
 Called by the framework when the user drags an object into a tab window.  
  
```  
virtual DROPEFFECT OnDragEnter(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|Unused.|  
|[in] `pDataObject`|A pointer to the object that the user drags.|  
|[in] `dwKeyState`|Contains the state of the modifier keys. This is a combination of any number of the following: `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, and `MK_RBUTTON`.|  
|[in] `point`|The location of the cursor in client coordinates.|  
  
### Return Value  
 The effect that results if the drop occurs at the location specified by `point`. It can be one or more of the following:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### Remarks  
 This method returns `DROPEFFECT_NONE` if the toolbar framework is not in customization mode or the Clipboard data format is unavailable. Otherwise, it returns the result of calling `CMFCBaseTabCtrl::OnDragEnter` with the provided parameters.  
  
 For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#coledataobject__isdataavailable).  
  
##  <a name="cmfctabdroptarget__ondragleave"></a>  CMFCTabDropTarget::OnDragLeave  
 Called by the framework when the user drags an object outside of the tab window that has focus.  
  
```  
virtual void OnDragLeave(CWnd* pWnd);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|Unused.|  
  
### Remarks  
 This method calls the `CMFCBaseTabCtrl::OnDragLeave` method to perform the drag operation.  
  
##  <a name="cmfctabdroptarget__ondragover"></a>  CMFCTabDropTarget::OnDragOver  
 Called by the framework when the user drags an object onto the tab window that has focus.  
  
```  
virtual DROPEFFECT OnDragOver(
    CWnd* pWnd,  
    COleDataObject* pDataObject,  
    DWORD dwKeyState,  
    CPoint point);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|Unused.|  
|[in] `pDataObject`|A pointer to the object that the user drags.|  
|[in] `dwKeyState`|Contains the state of the modifier keys. This is a combination of any number of the following: `MK_CONTROL`, `MK_SHIFT`, `MK_ALT`, `MK_LBUTTON`, `MK_MBUTTON`, and `MK_RBUTTON`.|  
|[in] `point`|The location of the mouse pointer in client coordinates.|  
  
### Return Value  
 The effect that results if the drop occurs at the location specified by `point`. It can be one or more of the following:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### Remarks  
 This method makes the tab that is under the cursor when a drag operation occurs active. It returns `DROPEFFECT_NONE` if the toolbar framework is not in customization mode or the Clipboard data format is unavailable. Otherwise, it returns the result of calling `CMFCBaseTabCtrl::OnDragOver` with the provided parameters.  
  
 For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#coledataobject__isdataavailable).  
  
##  <a name="cmfctabdroptarget__ondropex"></a>  CMFCTabDropTarget::OnDropEx  
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
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|Unused.|  
|[in] `pDataObject`|A pointer to the object that the user drags.|  
|[in] `dropEffect`|The default drop operation.|  
|[in] `dropList`|Unused.|  
|[in] `point`|The location of the mouse pointer in client coordinates.|  
  
### Return Value  
 The resulting drop effect. It can be one or more of the following:  
  
- `DROPEFFECT_NONE`  
  
- `DROPEFFECT_COPY`  
  
- `DROPEFFECT_MOVE`  
  
- `DROPEFFECT_LINK`  
  
- `DROPEFFECT_SCROLL`  
  
### Remarks  
 This method calls `CMFCBaseTabCtrl::OnDrop` if the toolbar framework is in customization mode and the Clipboard data format is available. If the call to `CMFCBaseTabCtrl::OnDrop` returns a nonzero value, this method returns the default drop effect specified by `dropEffect`. Otherwise, this method returns `DROPEFFECT_NONE`. For more information about drop effects, see [COleDropTarget::OnDropEx](../../mfc/reference/coledroptarget-class.md#coledroptarget__ondropex).  
  
 For more information about customization mode, see [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__iscustomizemode). For more information about Clipboard data formats, see [COleDataObject::IsDataAvailable](../../mfc/reference/coledataobject-class.md#coledataobject__isdataavailable).  
  
##  <a name="cmfctabdroptarget__register"></a>  CMFCTabDropTarget::Register  
 Registers the control as one that can be the target of an OLE drag-and-drop operation.  
  
```  
BOOL Register(CMFCBaseTabCtrl *pOwner);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pOwner`|The tab control to register as a drop target.|  
  
### Return Value  
 Nonzero if registration was successful; otherwise 0.  
  
### Remarks  
 This method calls [COleDropTarget::Register](../../mfc/reference/coledroptarget-class.md#coledroptarget__register) to register the control for drag-and-drop operations.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [Drag and Drop (OLE)](../../mfc/drag-and-drop-ole.md)



