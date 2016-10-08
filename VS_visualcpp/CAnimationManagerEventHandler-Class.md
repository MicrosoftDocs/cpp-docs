---
title: "CAnimationManagerEventHandler Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
caps.latest.revision: 15
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
# CAnimationManagerEventHandler Class
Implements a callback, which is called by the Animation API when a status of an animation manager is changed.  
  
## Syntax  
  
```  
class CAnimationManagerEventHandler : public CUIAnimationManagerEventHandlerBase<CAnimationManagerEventHandler>;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationManagerEventHandler::CAnimationManagerEventHandler](#canimationmanagereventhandler__canimationmanagereventhandler)|Constructs a `CAnimationManagerEventHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationManagerEventHandler::CreateInstance](#canimationmanagereventhandler__createinstance)|Creates an instance of `CAnimationManagerEventHandler` object.|  
|[CAnimationManagerEventHandler::OnManagerStatusChanged](#canimationmanagereventhandler__onmanagerstatuschanged)|Called when a status of animation manager has changed. (Overrides `CUIAnimationManagerEventHandlerBase::OnManagerStatusChanged`.)|  
|[CAnimationManagerEventHandler::SetAnimationController](#canimationmanagereventhandler__setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to IUIAnimationManager::SetManagerEventHandler method, when you call CAnimationController::EnableAnimationManagerEvent.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationManagerEventHandlerBase`  
  
 `CAnimationManagerEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationmanagereventhandler__canimationmanagereventhandler"></a>  CAnimationManagerEventHandler::CAnimationManagerEventHandler  
 Visual Studio 2010 SP1 is required.  
  
 Constructs a CAnimationManagerEventHandler object.  
  
```  
CAnimationManagerEventHandler();  
```  
  
##  <a name="canimationmanagereventhandler__createinstance"></a>  CAnimationManagerEventHandler::CreateInstance  
 Visual Studio 2010 SP1 is required.  
  
 Creates an instance of CAnimationManagerEventHandler object.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(  
    CAnimationController* pAnimationController,  
    IUIAnimationManagerEventHandler ** ppManagerEventHandler );  
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
 `ppManagerEventHandler`  
 Output. If the method succeeds it contains a pointer to COM object that will handle status updates to an animation manager.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="canimationmanagereventhandler__onmanagerstatuschanged"></a>  CAnimationManagerEventHandler::OnManagerStatusChanged  
 Visual Studio 2010 SP1 is required.  
  
 Called when a status of animation manager has changed.  
  
```  
IFACEMETHOD(  
    OnManagerStatusChanged  
)(UI_ANIMATION_MANAGER_STATUS newStatus,UI_ANIMATION_MANAGER_STATUS previousStatus);  
```  
  
### Parameters  
 `newStatus`  
 New status.  
  
 `previousStatus`  
 Previous status.  
  
### Return Value  
 Current implementation always returns S_OK;  
  
##  <a name="canimationmanagereventhandler__setanimationcontroller"></a>  CAnimationManagerEventHandler::SetAnimationController  
 Visual Studio 2010 SP1 is required.  
  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController( CAnimationController* pAnimationController );  
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../VS_visualcpp/MFC-Classes.md)