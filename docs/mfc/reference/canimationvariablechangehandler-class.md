---
title: "CAnimationVariableChangeHandler Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationVariableChangeHandler"
  - "CAnimationVariableChangeHandler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationVariableChangeHandler class"
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
caps.latest.revision: 19
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
# CAnimationVariableChangeHandler Class
Implements a callback, which is called by the Animation API when the value of an animation variable changes.  
  
## Syntax  
  
```  
class CAnimationVariableChangeHandler : public CUIAnimationVariableChangeHandlerBase<CAnimationVariableChangeHandler>;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CAnimationVariableChangeHandler`|Constructs a `CAnimationVariableChangeHandler` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CreateInstance`|Creates an instance of `CAnimationVariableChangeHandler` object.|  
|[CAnimationVariableChangeHandler::OnValueChanged](#canimationvariablechangehandler__onvaluechanged)|Called when a value of an animation variable has changed. (Overrides `CUIAnimationVariableChangeHandlerBase::OnValueChanged`.)|  
|[CAnimationVariableChangeHandler::SetAnimationController](#canimationvariablechangehandler__setanimationcontroller)|Stores a pointer to animation controller to route events.|  
  
## Remarks  
 This event handler is created and passed to `IUIAnimationVariable::SetVariableChangeHandler` method, when you call `CAnimationVariable::EnableValueChangedEvent` or `CAnimationBaseObject::EnableValueChangedEvent` (which enables this event for all animation variables encapsulated in an animation object).  
  
## Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableChangeHandlerBase`  
  
 `CAnimationVariableChangeHandler`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationvariablechangehandler__onvaluechanged"></a>  CAnimationVariableChangeHandler::OnValueChanged  
 Called when a value of an animation variable has changed.  
  
```  
IFACEMETHOD(
    OnValueChanged) (__in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in DOUBLE newValue,
    __in DOUBLE previousValue);
```  
  
### Parameters  
 `storyboard`  
 The storyboard that is animating the variable.  
  
 `variable`  
 The animation variable that was updated.  
  
 `newValue`  
 The new value.  
  
 `previousValue`  
 The previous value.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="canimationvariablechangehandler__setanimationcontroller"></a>  CAnimationVariableChangeHandler::SetAnimationController  
 Stores a pointer to animation controller to route events.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### Parameters  
 `pAnimationController`  
 A pointer to animation controller, which will receive events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
