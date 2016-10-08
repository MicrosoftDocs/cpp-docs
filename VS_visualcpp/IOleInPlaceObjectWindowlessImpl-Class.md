---
title: "IOleInPlaceObjectWindowlessImpl Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: a2e0feb4-bc59-4adf-aab2-105457bbdbb4
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# IOleInPlaceObjectWindowlessImpl Class
This class implements **IUnknown** and provides methods that enable a windowless control to receive window messages and to participate in drag-and-drop operations.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
  
template< class  T>  
   class IOleInPlaceObjectWindowlessImpl  
  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IOleInPlaceObjectWindowlessImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp](../Topic/IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp.md)|Enables context-sensitive help. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetDropTarget](../Topic/IOleInPlaceObjectWindowlessImpl::GetDropTarget.md)|Supplies the `IDropTarget` interface for an in-place active, windowless object that supports drag and drop. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::GetWindow](../Topic/IOleInPlaceObjectWindowlessImpl::GetWindow.md)|Gets a window handle.|  
|[IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate](../Topic/IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate.md)|Deactivates an active in-place control.|  
|[IOleInPlaceObjectWindowlessImpl::OnWindowMessage](../Topic/IOleInPlaceObjectWindowlessImpl::OnWindowMessage.md)|Dispatches a message from the container to a windowless control that is in-place active.|  
|[IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo](../Topic/IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo.md)|Reactivates a previously deactivated control. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleInPlaceObjectWindowlessImpl::SetObjectRects](../Topic/IOleInPlaceObjectWindowlessImpl::SetObjectRects.md)|Indicates what part of the in-place control is visible.|  
|[IOleInPlaceObjectWindowlessImpl::UIDeactivate](../Topic/IOleInPlaceObjectWindowlessImpl::UIDeactivate.md)|Deactivates and removes the user interface that supports in-place activation.|  
  
## Remarks  
 The [IOleInPlaceObject](http://msdn.microsoft.com/library/windows/desktop/ms692646) interface manages the reactivation and deactivation of in-place controls and determines how much of the control should be visible. The [IOleInPlaceObjectWindowless](http://msdn.microsoft.com/library/windows/desktop/ms687304) interface enables a windowless control to receive window messages and to participate in drag-and-drop operations. Class `IOleInPlaceObjectWindowlessImpl` provides a default implementation of `IOleInPlaceObject` and `IOleInPlaceObjectWindowless` and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md), [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)  
  
## Inheritance Hierarchy  
 `IOleInPlaceObjectWindowless`  
  
 `IOleInPlaceObjectWindowlessImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ioleinplaceobjectwindowlessimpl__contextsensitivehelp"></a>  IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp  
 Returns **E_NOTIMPL**.  
  
```  
  
HRESULT ContextSensitiveHelp(  
      BOOL  fEnterMode  
   );  
  
```  
  
### Remarks  
 See [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__getdroptarget"></a>  IOleInPlaceObjectWindowlessImpl::GetDropTarget  
 Returns **E_NOTIMPL**.  
  
```  
  
HRESULT GetDropTarget(  
      IDropTarget**  ppDropTarget  
   );  
  
```  
  
### Remarks  
 See [IOleInPlaceObjectWindowless::GetDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms678535) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__getwindow"></a>  IOleInPlaceObjectWindowlessImpl::GetWindow  
 The container calls this function to get the window handle of the control.  
  
```  
  
HRESULT GetWindow(  
      HWND*  phwnd  
   );  
  
```  
  
### Remarks  
 Some containers will not work with a control that has been windowless, even if it is currently windowed. In ATL's implementation, if the control class's data member `m_bWasOnceWindowless` is **TRUE**, the function returns **E_FAIL**. Otherwise, if *phwnd* is not **NULL**, `GetWindow` sets \* *phwnd* to the control class's data member `m_hWnd` and returns `S_OK`.  
  
 See [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__inplacedeactivate"></a>  IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate  
 Called by the container to deactivate an in-place active control.  
  
```  
  
HRESULT InPlaceDeactivate(  
      HWND*  phwnd  
   );  
  
```  
  
### Remarks  
 This method performs a full or partial deactivation depending on the state of the control. If necessary, the control's user interface is deactivated, and the control's window, if any, is destroyed. The container is notified that the control is no longer active in place. The **IOleInPlaceUIWindow** interface used by the container to negotiate menus and border space is released.  
  
 See [IOleInPlaceObject::InPlaceDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms679700) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__onwindowmessage"></a>  IOleInPlaceObjectWindowlessImpl::OnWindowMessage  
 Dispatches a message from a container to a windowless control that is in-place active.  
  
```  
  
HRESULT OnWindowMessage(  
      UINT  msg,  
      WPARAM  WParam,  
      LPARAM  LParam,  
      LRESULT  plResultParam  
   );  
  
```  
  
### Remarks  
 See [IOleInPlaceObjectWindowless::OnWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms693783) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__reactivateandundo"></a>  IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo  
 Returns **E_NOTIMPL**.  
  
```  
  
HRESULT ReactivateAndUndo( );  
  
```  
  
### Remarks  
 See [IOleInPlaceObject::ReactivateAndUndo](http://msdn.microsoft.com/library/windows/desktop/ms691372) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__setobjectrects"></a>  IOleInPlaceObjectWindowlessImpl::SetObjectRects  
 Called by the container to inform the control that its size and/or position has changed.  
  
```  
  
HRESULT SetObjectRects(  
      LPCRECT  prcPos,  
      LPCRECT  prcClip  
   );  
  
```  
  
### Remarks  
 Updates the control's `m_rcPos` data member and the control display. Only the part of the control that intersects the clip region is displayed. If a control's display was previously clipped but the clipping has been removed, this function can be called to redraw a full view of the control.  
  
 See [IOleInPlaceObject::SetObjectRects](http://msdn.microsoft.com/library/windows/desktop/ms683767) in the Windows SDK.  
  
##  <a name="ioleinplaceobjectwindowlessimpl__uideactivate"></a>  IOleInPlaceObjectWindowlessImpl::UIDeactivate  
 Deactivates and removes the control's user interface that supports in-place activation.  
  
```  
  
HRESULT UIDeactivate(  
   );  
  
```  
  
### Remarks  
 Sets the control class's data member `m_bUIActive` to **FALSE**. The ATL implementation of this function always returns `S_OK`.  
  
 See [IOleInPlaceObject::UIDeactivate](http://msdn.microsoft.com/library/windows/desktop/ms693348) in the Windows SDK.  
  
## See Also  
 [CComControl Class](../VS_visualcpp/CComControl-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)