---
title: "CAnimationManagerEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationManagerEventHandler"
  - "CAnimationManagerEventHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationManagerEventHandler class"
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAnimationManagerEventHandler Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAnimationManagerEventHandler Class](https://docs.microsoft.com/cpp/mfc/reference/canimationmanagereventhandler-class).  
  
  
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
 [!INCLUDE[dev10_sp1required](../../includes/dev10-sp1required-md.md)]  
  
 Constructs a CAnimationManagerEventHandler object.  
  
```  
CAnimationManagerEventHandler();
```  
  
##  <a name="canimationmanagereventhandler__createinstance"></a>  CAnimationManagerEventHandler::CreateInstance  
 [!INCLUDE[dev10_sp1required](../../includes/dev10-sp1required-md.md)]  
  
 Creates an instance of CAnimationManagerEventHandler object.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationManagerEventHandler** ppManagerEventHandler);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
 `ppManagerEventHandler`  
 Output. If the method succeeds it contains a pointer to COM object that will handle status updates to an animation manager.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="canimationmanagereventhandler__onmanagerstatuschanged"></a>  CAnimationManagerEventHandler::OnManagerStatusChanged  
 [!INCLUDE[dev10_sp1required](../../includes/dev10-sp1required-md.md)]  
  
 Called when a status of animation manager has changed.  
  
```  
IFACEMETHOD(OnManagerStatusChanged)(
  UI_ANIMATION_MANAGER_STATUS newStatus,
  UI_ANIMATION_MANAGER_STATUS previousStatus);
```  
  
### Parameters  
 `newStatus`  
 New status.  
  
 `previousStatus`  
 Previous status.  
  
### Return Value  
 Current implementation always returns S_OK;  
  
##  <a name="canimationmanagereventhandler__setanimationcontroller"></a>  CAnimationManagerEventHandler::SetAnimationController  
 [!INCLUDE[dev10_sp1required](../../includes/dev10-sp1required-md.md)]  
  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)






