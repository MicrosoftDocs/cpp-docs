---
title: "CAnimationTimerEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationTimerEventHandler"
  - "CAnimationTimerEventHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationTimerEventHandler class"
ms.assetid: 188dea3b-4b5e-4f6b-8df9-09d993a21619
caps.latest.revision: 18
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
# CAnimationTimerEventHandler Class
Implements a callback, which is called by the Animation API when timing events occur.  
  
## Syntax  
  
```  
class CAnimationTimerEventHandler : public CUIAnimationTimerEventHandlerBase<CAnimationTimerEventHandler>;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationTimerEventHandler::CreateInstance](#canimationtimereventhandler__createinstance)|Creates an instance of `CAnimationTimerEventHandler` callback.|  
|[CAnimationTimerEventHandler::OnPostUpdate](#canimationtimereventhandler__onpostupdate)|Handles events that occur after an animation update is finished. (Overrides `CUIAnimationTimerEventHandlerBase::OnPostUpdate`.)|  
|[CAnimationTimerEventHandler::OnPreUpdate](#canimationtimereventhandler__onpreupdate)|Handles events that occur before an animation update begins. (Overrides `CUIAnimationTimerEventHandlerBase::OnPreUpdate`.)|  
|[CAnimationTimerEventHandler::OnRenderingTooSlow](#canimationtimereventhandler__onrenderingtooslow)|Handles events that occur when the rendering frame rate for an animation falls below the minimum desirable frame rate. (Overrides `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.)|  
|[CAnimationTimerEventHandler::SetAnimationController](#canimationtimereventhandler__setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to IUIAnimationTimer::SetTimerEventHandler when you call CAnimationController::EnableAnimationTimerEventHandler.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationTimerEventHandlerBase`  
  
 `CAnimationTimerEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationtimereventhandler__createinstance"></a>  CAnimationTimerEventHandler::CreateInstance  
 Creates an instance of CAnimationTimerEventHandler callback.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationTimerEventHandler** ppTimerEventHandler);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
 `ppTimerEventHandler`  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="canimationtimereventhandler__onpostupdate"></a>  CAnimationTimerEventHandler::OnPostUpdate  
 Handles events that occur after an animation update is finished.  
  
```  
IFACEMETHOD(OnPostUpdate)();
```  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="canimationtimereventhandler__onpreupdate"></a>  CAnimationTimerEventHandler::OnPreUpdate  
 Handles events that occur before an animation update begins.  
  
```  
IFACEMETHOD(OnPreUpdate)();
```  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="canimationtimereventhandler__onrenderingtooslow"></a>  CAnimationTimerEventHandler::OnRenderingTooSlow  
 Handles events that occur when the rendering frame rate for an animation falls below the minimum desirable frame rate.  
  
```  
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```  
  
### Parameters  
 `fps`  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="canimationtimereventhandler__setanimationcontroller"></a>  CAnimationTimerEventHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
