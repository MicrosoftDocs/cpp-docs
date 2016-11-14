---
title: "IOleInPlaceActiveObjectImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IOleInPlaceActiveObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IOleInPlaceActiveObjectImpl class"
  - "ActiveX controls [C++], communication between container and control"
  - "IOleInPlaceActiveObject, ATL implementation"
ms.assetid: 44e6cc6d-a2dc-4187-98e3-73cf0320dea9
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
# IOleInPlaceActiveObjectImpl Class
This class provides methods for assisting communication between an in-place control and its container.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template<class  T>
class IOleInPlaceActiveObjectImpl
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IOleInPlaceActiveObjectImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IOleInPlaceActiveObjectImpl::ContextSensitiveHelp](#ioleinplaceactiveobjectimpl__contextsensitivehelp)|Enables context-sensitive help. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleInPlaceActiveObjectImpl::EnableModeless](#ioleinplaceactiveobjectimpl__enablemodeless)|Enables modeless dialog boxes. The ATL implementation returns `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::GetWindow](#ioleinplaceactiveobjectimpl__getwindow)|Gets a window handle.|  
|[IOleInPlaceActiveObjectImpl::OnDocWindowActivate](#ioleinplaceactiveobjectimpl__ondocwindowactivate)|Notifies the control when the container's document window is activated or deactivated. The ATL implementation returns `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::OnFrameWindowActivate](#ioleinplaceactiveobjectimpl__onframewindowactivate)|Notifies the control when the container's top-level frame window is activated or deactivated. The ATL implementation returns|  
|[IOleInPlaceActiveObjectImpl::ResizeBorder](#ioleinplaceactiveobjectimpl__resizeborder)|Informs the control it needs to resize its borders. The ATL implementation returns `S_OK`.|  
|[IOleInPlaceActiveObjectImpl::TranslateAccelerator](#ioleinplaceactiveobjectimpl__translateaccelerator)|Processes menu accelerator-key messages from the container. The ATL implementation returns **E_NOTIMPL**.|  
  
  
## Remarks  
 The [IOleInPlaceActiveObject](http://msdn.microsoft.com/library/windows/desktop/ms691299) interface assists communication between an in-place control and its container; for example, communicating the active state of the control and container, and informing the control it needs to resize itself. Class `IOleInPlaceActiveObjectImpl` provides a default implementation of `IOleInPlaceActiveObject` and supports **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IOleInPlaceActiveObject`  
  
 `IOleInPlaceActiveObjectImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ioleinplaceactiveobjectimpl__contextsensitivehelp"></a>  IOleInPlaceActiveObjectImpl::ContextSensitiveHelp  
 Enables context-sensitive help.  
  
```
HRESULT ContextSensitiveHelp(BOOL   fEnterMode);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleWindow::ContextSensitiveHelp](http://msdn.microsoft.com/library/windows/desktop/ms680059) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__enablemodeless"></a>  IOleInPlaceActiveObjectImpl::EnableModeless  
 Enables modeless dialog boxes.  
  
```
HRESULT EnableModeless(BOOL   fEnable);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__getwindow"></a>  IOleInPlaceActiveObjectImpl::GetWindow  
 The container calls this function to get the window handle of the control.  
  
```
HRESULT GetWindow(HWND* phwnd);
```  
  
### Remarks  
 Some containers will not work with a control that has been windowless, even if it is currently windowed. In ATL's implementation, if the **CComControl::m_bWasOnceWindowless** data member is **TRUE**, the function returns **E_FAIL**. Otherwise, if \* *phwnd* is not **NULL**, `GetWindow` assigns *phwnd* to the control class's data member `m_hWnd` and returns `S_OK`.  
  
 See [IOleWindow::GetWindow](http://msdn.microsoft.com/library/windows/desktop/ms687282) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__ondocwindowactivate"></a>  IOleInPlaceActiveObjectImpl::OnDocWindowActivate  
 Notifies the control when the container's document window is activated or deactivated.  
  
```
HRESULT OnDocWindowActivate(BOOL   fActivate);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__onframewindowactivate"></a>  IOleInPlaceActiveObjectImpl::OnFrameWindowActivate  
 Notifies the control when the container's top-level frame window is activated or deactivated.  
  
```
HRESULT OnFrameWindowActivate(BOOL   fActivate);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__resizeborder"></a>  IOleInPlaceActiveObjectImpl::ResizeBorder  
 Informs the control it needs to resize its borders.  
  
```
HRESULT ResizeBorder(
    LPRECT prcBorder,
    IOleInPlaceUIWindow* pUIWindow,
    BOOL fFrameWindow);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ioleinplaceactiveobjectimpl__translateaccelerator"></a>  IOleInPlaceActiveObjectImpl::TranslateAccelerator  
 Processes menu accelerator-key messages from the container.  
  
```
HRESULT TranslateAccelerator(LPMSG   lpmsg);
```  
  
### Return Value  
 This method supports the following return values:  
  
 `S_OK` if the message was translated successfully.  
  
 **S_FALSE** if the message was not translated.  
  
### Remarks  
 See [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../../atl/atl-class-overview.md)
