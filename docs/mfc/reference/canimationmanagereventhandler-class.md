---
title: "CAnimationManagerEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CAnimationManagerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CAnimationManagerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CreateInstance", "AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::OnManagerStatusChanged", "AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::SetAnimationController"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAnimationManagerEventHandler [MFC], CAnimationManagerEventHandler", "CAnimationManagerEventHandler [MFC], CreateInstance", "CAnimationManagerEventHandler [MFC], OnManagerStatusChanged", "CAnimationManagerEventHandler [MFC], SetAnimationController"]
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CAnimationManagerEventHandler::CAnimationManagerEventHandler](#canimationmanagereventhandler)|Constructs a `CAnimationManagerEventHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationManagerEventHandler::CreateInstance](#createinstance)|Creates an instance of `CAnimationManagerEventHandler` object.|  
|[CAnimationManagerEventHandler::OnManagerStatusChanged](#onmanagerstatuschanged)|Called when a status of animation manager has changed. (Overrides `CUIAnimationManagerEventHandlerBase::OnManagerStatusChanged`.)|  
|[CAnimationManagerEventHandler::SetAnimationController](#setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to IUIAnimationManager::SetManagerEventHandler method, when you call CAnimationController::EnableAnimationManagerEvent.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationManagerEventHandlerBase`  
  
 `CAnimationManagerEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationmanagereventhandler"></a>  CAnimationManagerEventHandler::CAnimationManagerEventHandler  
 Visual Studio 2010 SP1 is required.  
  
 Constructs a CAnimationManagerEventHandler object.  
  
```  
CAnimationManagerEventHandler();
```  
  
##  <a name="createinstance"></a>  CAnimationManagerEventHandler::CreateInstance  
 Visual Studio 2010 SP1 is required.  
  
 Creates an instance of CAnimationManagerEventHandler object.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationManagerEventHandler** ppManagerEventHandler);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
 *ppManagerEventHandler*  
 Output. If the method succeeds it contains a pointer to COM object that will handle status updates to an animation manager.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="onmanagerstatuschanged"></a>  CAnimationManagerEventHandler::OnManagerStatusChanged  
 Visual Studio 2010 SP1 is required.  
  
 Called when a status of animation manager has changed.  
  
```  
IFACEMETHOD(OnManagerStatusChanged)(
  UI_ANIMATION_MANAGER_STATUS newStatus,
  UI_ANIMATION_MANAGER_STATUS previousStatus);
```  
  
### Parameters  
 *newStatus*  
 New status.  
  
 *previousStatus*  
 Previous status.  
  
### Return Value  
 Current implementation always returns S_OK;  
  
##  <a name="setanimationcontroller"></a>  CAnimationManagerEventHandler::SetAnimationController  
 Visual Studio 2010 SP1 is required.  
  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
