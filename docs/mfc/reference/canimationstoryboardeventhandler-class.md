---
title: "CAnimationStoryboardEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CAnimationStoryboardEventHandler", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::CreateInstance", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::OnStoryboardStatusChanged", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::OnStoryboardUpdated", "AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::SetAnimationController"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAnimationStoryboardEventHandler [MFC], CAnimationStoryboardEventHandler", "CAnimationStoryboardEventHandler [MFC], CreateInstance", "CAnimationStoryboardEventHandler [MFC], OnStoryboardStatusChanged", "CAnimationStoryboardEventHandler [MFC], OnStoryboardUpdated", "CAnimationStoryboardEventHandler [MFC], SetAnimationController"]
ms.assetid: 10a7e86b-c02d-4124-9a2e-61ecf8ac62fc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAnimationStoryboardEventHandler Class
Implements a callback, which is called by the Animation API when the status of a storyboard is changed or a storyboard is updated.  
  
## Syntax  
  
```  
class CAnimationStoryboardEventHandler : public CUIAnimationStoryboardEventHandlerBase<CAnimationStoryboardEventHandler>;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler](#canimationstoryboardeventhandler)|Constructs a `CAnimationStoryboardEventHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CreateInstance](#createinstance)|Creates an instance of `CAnimationStoryboardEventHandler` callback.|  
|[CAnimationStoryboardEventHandler::OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Handles `OnStoryboardStatusChanged` events, which occur when a storyboard's status changes (Overrides `CUIAnimationStoryboardEventHandlerBase::OnStoryboardStatusChanged`.)|  
|[CAnimationStoryboardEventHandler::OnStoryboardUpdated](#onstoryboardupdated)|Handles `OnStoryboardUpdated` events, which occur when a storyboard is updated (Overrides `CUIAnimationStoryboardEventHandlerBase::OnStoryboardUpdated`.)|  
|[CAnimationStoryboardEventHandler::SetAnimationController](#setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to `IUIAnimationStoryboard::SetStoryboardEventHandler` method, when you call `CAnimationController::EnableStoryboardEventHandler`.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationStoryboardEventHandlerBase`  
  
 `CAnimationStoryboardEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationstoryboardeventhandler"></a>  CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler  
 Constructs a CAnimationStoryboardEventHandler object.  
  
```  
CAnimationStoryboardEventHandler();
```  
  
##  <a name="createinstance"></a>  CAnimationStoryboardEventHandler::CreateInstance  
 Creates an instance of CAnimationStoryboardEventHandler callback.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationStoryboardEventHandler** ppHandler);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
 *ppHandler*  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="onstoryboardstatuschanged"></a>  CAnimationStoryboardEventHandler::OnStoryboardStatusChanged  
 Handles OnStoryboardStatusChanged events, which occur when a storyboard's status changes  
  
```  
IFACEMETHOD(OnStoryboardStatusChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in UI_ANIMATION_STORYBOARD_STATUS newStatus,
    __in UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```  
  
### Parameters  
 *storyboard*  
 A pointer to storyboard whose status has changed.  
  
 *newStatus*  
 Specifies new storyboard status.  
  
 *previousStatus*  
 Specifies previous storyboard status.  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="onstoryboardupdated"></a>  CAnimationStoryboardEventHandler::OnStoryboardUpdated  
 Handles OnStoryboardUpdated events, which occur when a storyboard is updated  
  
```  
IFACEMETHOD(OnStoryboardUpdated) (__in IUIAnimationStoryboard* storyboard);
```  
  
### Parameters  
 *storyboard*  
 A pointer to storyboard, which was updated.  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="setanimationcontroller"></a>  CAnimationStoryboardEventHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
