---
title: "CAnimationVariableIntegerChangeHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CAnimationVariableIntegerChangeHandler", "AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler", "AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler", "AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CreateInstance", "AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged", "AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::SetAnimationController"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAnimationVariableIntegerChangeHandler [MFC], CAnimationVariableIntegerChangeHandler", "CAnimationVariableIntegerChangeHandler [MFC], CreateInstance", "CAnimationVariableIntegerChangeHandler [MFC], OnIntegerValueChanged", "CAnimationVariableIntegerChangeHandler [MFC], SetAnimationController"]
ms.assetid: 6ac8e91b-e514-4ff6-babd-33f77c4b2b61
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAnimationVariableIntegerChangeHandler Class
Implements a callback, which is called by the Animation API when the value of an animation variable changes.  
  
## Syntax  
  
```  
class CAnimationVariableIntegerChangeHandler : public CUIAnimationVariableIntegerChangeHandlerBase<CAnimationVariableIntegerChangeHandler>;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler](#canimationvariableintegerchangehandler)|Constructs a `CAnimationVariableIntegerChangeHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariableIntegerChangeHandler::CreateInstance](#createinstance)|Creates an instance of `CAnimationVariableIntegerChangeHandler` callback.|  
|[CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged](#onintegervaluechanged)|Called when a value of an animation variable has changed. (Overrides `CUIAnimationVariableIntegerChangeHandlerBase::OnIntegerValueChanged`.)|  
|[CAnimationVariableIntegerChangeHandler::SetAnimationController](#setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to IUIAnimationVariable::SetVariableIntegerChangeHandler method, when you call CAnimationVariable::EnableIntegerValueChangedEvent or CAnimationBaseObject::EnableIntegerValueChangedEvent (which enables this event for all animation variables encapsulated in an animation object).  
  
## Inheritance Hierarchy  
 [MFC Classes](../../mfc/reference/mfc-classes.md)  
  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableIntegerChangeHandlerBase`  
  
 `CAnimationVariableIntegerChangeHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationvariableintegerchangehandler"></a>  CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler  
 Constructs a CAnimationVariableIntegerChangeHandler object.  
  
```  
CAnimationVariableIntegerChangeHandler ();
```  
  
##  <a name="createinstance"></a>  CAnimationVariableIntegerChangeHandler::CreateInstance  
 Creates an instance of CAnimationVariableIntegerChangeHandler callback.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationVariableIntegerChangeHandler** ppHandler);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
 *ppHandler*  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="onintegervaluechanged"></a>  CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged  
 Called when a value of an animation variable has changed.  
  
```  
IFACEMETHOD(OnIntegerValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in INT32 newValue,
    __in INT32 previousValue);
```  
  
### Parameters  
 *storyboard*  
 The storyboard that is animating the variable.  
  
 *variable*  
 The animation variable that was updated.  
  
 *newValue*  
 The new rounded value.  
  
 *previousValue*  
 The previous rounded value.  
  
### Return Value  
 S_OK if the method succeeds; otherwise E_FAIL.  
  
##  <a name="setanimationcontroller"></a>  CAnimationVariableIntegerChangeHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 *pAnimationController*  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
