---
title: "CMFCDropDownFrame Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDropDownFrame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDropDownFrame class"
ms.assetid: 09ff81a9-de00-43ec-9df9-b626f7728c4b
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
# CMFCDropDownFrame Class
Provides drop-down frame window functionality to drop-down toolbars and drop-down toolbar buttons.  
  
## Syntax  
  
```  
class CMFCDropDownFrame : public CMiniFrameWnd  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDropDownFrame::CMFCDropDownFrame`|Default constructor.|  
|`CMFCDropDownFrame::~CMFCDropDownFrame`|Destructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCDropDownFrame::Create](#cmfcdropdownframe__create)|Creates a `CMFCDropDownFrame` object.|  
|`CMFCDropDownFrame::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCDropDownFrame::GetParentMenuBar](#cmfcdropdownframe__getparentmenubar)|Retrieves the parent menu bar of the drop-down frame.|  
|[CMFCDropDownFrame::GetParentPopupMenu](#cmfcdropdownframe__getparentpopupmenu)|Retrieves the parent pop-up menu of the drop-down frame.|  
|`CMFCDropDownFrame::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCDropDownFrame::RecalcLayout](#cmfcdropdownframe__recalclayout)|Repositions the drop-down frame.|  
|[CMFCDropDownFrame::SetAutoDestroy](#cmfcdropdownframe__setautodestroy)|Sets whether the child drop-down toolbar window is destroyed automatically.|  
  
### Remarks  
 This class is not intended to be used directly from your code.  
  
 The framework uses this class to provide frame behavior to the `CMFCDropDownToolbar` and `CMFCDropDownToolbarButton` classes. For more information about these classes, see [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md) and [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md).  
  
## Example  
 The following example demonstrates how to retrieve a pointer to a `CMFCDropDownFrame` object from a `CFrameWnd` class, and how to set the child drop-down toolbar window to be destroyed automatically.  
  
 [!code-cpp[NVC_MFC_RibbonApp#36](../../mfc/reference/codesnippet/cpp/cmfcdropdownframe-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCDropDownFrame](../../mfc/reference/cmfcdropdownframe-class.md)  
  
## Requirements  
 **Header:** afxdropdowntoolbar.h  
  
##  <a name="cmfcdropdownframe__create"></a>  CMFCDropDownFrame::Create  
 Creates a `CMFCDropDownFrame` object.  
  
```  
virtual BOOL Create(
    CWnd* pWndParent,  
    int x,  
    int y,  
    CMFCDropDownToolBar* pWndOriginToolbar);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWndParent`|The parent window of the drop-down frame.|  
|[in] `x`|The horizontal screen coordinate for the location of the down-down frame.|  
|[in] `y`|The vertical screen coordinate for the location of the down-down frame.|  
|[in] `pWndOriginToolbar`|The toolbar that has the drop-down buttons that this method uses to populate the new drop-down frame object.|  
  
### Return Value  
 `TRUE` if the drop-down frame was successfully created; otherwise `FALSE`.  
  
### Remarks  
 This method calls the base [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#cminiframewnd__createex) method to create the drop-down frame window with the `WS_POPUP` style. The drop-down frame window appears at the specified screen coordinates. This method fails if the [CMiniFrameWnd::CreateEx](../../mfc/reference/cminiframewnd-class.md#cminiframewnd__createex) method returns `FALSE`.  
  
 The `CMFCDropDownFrame` class creates a copy of the provided `CMFCDropDownToolBar` parameter. This method copies the button images and button states from the `pWndOriginToolbar` parameter to the `m_pWndOriginToolbar` data member.  
  
##  <a name="cmfcdropdownframe__getparentmenubar"></a>  CMFCDropDownFrame::GetParentMenuBar  
 Retrieves the parent menu bar of the drop-down frame.  
  
```  
CMFCMenuBar* GetParentMenuBar() const;

 
```  
  
### Return Value  
 A pointer to the parent menu bar of the drop-down frame, or `NULL` if the frame has no parent.  
  
### Remarks  
 This method retrieves the parent menu bar from the parent button. This method returns `NULL` if the drop-down frame has no parent button or the parent button has no parent menu bar.  
  
##  <a name="cmfcdropdownframe__getparentpopupmenu"></a>  CMFCDropDownFrame::GetParentPopupMenu  
 Retrieves the parent pop-up menu of the drop-down frame.  
  
```  
CMFCDropDownFrame* GetParentPopupMenu() const;

 
```  
  
### Return Value  
 A pointer to the parent drop-down menu of the drop-down frame, or `NULL` if the frame has no parent.  
  
### Remarks  
 This method retrieves the parent menu from the parent button. This method returns `NULL` if the drop-down frame has no parent button or the parent button has no parent menu.  
  
##  <a name="cmfcdropdownframe__recalclayout"></a>  CMFCDropDownFrame::RecalcLayout  
 Repositions the drop-down frame.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `bNotify`|Unused.|  
  
### Remarks  
 The framework calls this method when the drop-down frame is created or the parent window is resized. This method calculates the position and size of the drop-down frame by using the position and size of the parent window.  
  
##  <a name="cmfcdropdownframe__setautodestroy"></a>  CMFCDropDownFrame::SetAutoDestroy  
 Sets whether the child drop-down toolbar window is destroyed automatically.  
  
```  
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 [in] `bAutoDestroy`  
 `TRUE` to automatically destroy the associated drop-down toolbar window; otherwise, `FALSE`.  
  
### Remarks  
 If `bAutoDestroy` is `TRUE`, then the `CMFCDropDownFrame` destructor destroys the associated drop-down toolbar window. The default value is `TRUE`.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)
