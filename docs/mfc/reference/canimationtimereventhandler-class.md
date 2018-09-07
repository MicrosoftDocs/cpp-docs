---
title: "CAnimationTimerEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CAnimationTimerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::CreateInstance", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPostUpdate", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPreUpdate", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnRenderingTooSlow", "AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::SetAnimationController"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAnimationTimerEventHandler [MFC], CreateInstance", "CAnimationTimerEventHandler [MFC], OnPostUpdate", "CAnimationTimerEventHandler [MFC], OnPreUpdate", "CAnimationTimerEventHandler [MFC], OnRenderingTooSlow", "CAnimationTimerEventHandler [MFC], SetAnimationController"]
ms.assetid: 188dea3b-4b5e-4f6b-8df9-09d993a21619
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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
|[CAnimationTimerEventHandler::CreateInstance](#createinstance)|Creates an instance of `CAnimationTimerEventHandler` callback.|  
|[CAnimationTimerEventHandler::OnPostUpdate](#onpostupdate)|Handles events that occur after an animation update is finished. (Overrides `CUIAnimationTimerEventHandlerBase::OnPostUpdate`.)|  
|[CAnimationTimerEventHandler::OnPreUpdate](#onpreupdate)|Handles events that occur before an animation update begins. (Overrides `CUIAnimationTimerEventHandlerBase::OnPreUpdate`.)|  
|[CAnimationTimerEventHandler::OnRenderingTooSlow](#onrenderingtooslow)|Handles events that occur when the rendering frame rate for an animation falls below the minimum desirable frame rate. (Overrides `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.)|  
|[CAnimationTimerEventHandler::SetAnimationController](#setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to IUIAnimationTimer::SetTimerEventHandler when you call CAnimationController::EnableAnimationTimerEventHandler.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationTimerEventHandlerBase`  
  
 `CAnimationTimerEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="createinstance"></a>  CAnimationTimerEventHandler::CreateInstance  
 Creates an instance of CAnimationTimerEventHandler callback.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationTimerEventHandler** ppTimerEventHandler);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
 *ppTimerEventHandler*  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="onpostupdate"></a>  CAnimationTimerEventHandler::OnPostUpdate  
 Handles events that occur after an animation update is finished.  
  
```  
IFACEMETHOD(OnPostUpdate)();
```  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="onpreupdate"></a>  CAnimationTimerEventHandler::OnPreUpdate  
 Handles events that occur before an animation update begins.  
  
```  
IFACEMETHOD(OnPreUpdate)();
```  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="onrenderingtooslow"></a>  CAnimationTimerEventHandler::OnRenderingTooSlow  
 Handles events that occur when the rendering frame rate for an animation falls below the minimum desirable frame rate.  
  
```  
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```  
  
### Parameters  
 *fps*  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="setanimationcontroller"></a>  CAnimationTimerEventHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
