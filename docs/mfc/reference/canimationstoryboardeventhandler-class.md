---
title: "CAnimationStoryboardEventHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationStoryboardEventHandler"
  - "CAnimationStoryboardEventHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationStoryboardEventHandler class"
ms.assetid: 10a7e86b-c02d-4124-9a2e-61ecf8ac62fc
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
|[CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler](#canimationstoryboardeventhandler__canimationstoryboardeventhandler)|Constructs a `CAnimationStoryboardEventHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CreateInstance](#canimationstoryboardeventhandler__createinstance)|Creates an instance of `CAnimationStoryboardEventHandler` callback.|  
|[CAnimationStoryboardEventHandler::OnStoryboardStatusChanged](#canimationstoryboardeventhandler__onstoryboardstatuschanged)|Handles `OnStoryboardStatusChanged` events, which occur when a storyboard's status changes (Overrides `CUIAnimationStoryboardEventHandlerBase::OnStoryboardStatusChanged`.)|  
|[CAnimationStoryboardEventHandler::OnStoryboardUpdated](#canimationstoryboardeventhandler__onstoryboardupdated)|Handles `OnStoryboardUpdated` events, which occur when a storyboard is updated (Overrides `CUIAnimationStoryboardEventHandlerBase::OnStoryboardUpdated`.)|  
|[CAnimationStoryboardEventHandler::SetAnimationController](#canimationstoryboardeventhandler__setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to `IUIAnimationStoryboard::SetStoryboardEventHandler` method, when you call `CAnimationController::EnableStoryboardEventHandler`.  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationStoryboardEventHandlerBase`  
  
 `CAnimationStoryboardEventHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationstoryboardeventhandler__canimationstoryboardeventhandler"></a>  CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler  
 Constructs a CAnimationStoryboardEventHandler object.  
  
```  
CAnimationStoryboardEventHandler();
```  
  
##  <a name="canimationstoryboardeventhandler__createinstance"></a>  CAnimationStoryboardEventHandler::CreateInstance  
 Creates an instance of CAnimationStoryboardEventHandler callback.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationStoryboardEventHandler** ppHandler);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
 `ppHandler`  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="canimationstoryboardeventhandler__onstoryboardstatuschanged"></a>  CAnimationStoryboardEventHandler::OnStoryboardStatusChanged  
 Handles OnStoryboardStatusChanged events, which occur when a storyboard's status changes  
  
```  
IFACEMETHOD(
    OnStoryboardStatusChanged) (__in IUIAnimationStoryboard* storyboard,
    __in UI_ANIMATION_STORYBOARD_STATUS newStatus,
    __in UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```  
  
### Parameters  
 `storyboard`  
 A pointer to storyboard whose status has changed.  
  
 `newStatus`  
 Specifies new storyboard status.  
  
 `previousStatus`  
 Specifies previous storyboard status.  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="canimationstoryboardeventhandler__onstoryboardupdated"></a>  CAnimationStoryboardEventHandler::OnStoryboardUpdated  
 Handles OnStoryboardUpdated events, which occur when a storyboard is updated  
  
```  
IFACEMETHOD(OnStoryboardUpdated) (__in IUIAnimationStoryboard* storyboard);
```  
  
### Parameters  
 `storyboard`  
 A pointer to storyboard, which was updated.  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="canimationstoryboardeventhandler__setanimationcontroller"></a>  CAnimationStoryboardEventHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
