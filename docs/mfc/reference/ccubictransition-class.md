---
title: "CCubicTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CCubicTransition', 'AFXANIMATIONCONTROLLER/CCubicTransition', 'AFXANIMATIONCONTROLLER/CCubicTransition::CCubicTransition', 'AFXANIMATIONCONTROLLER/CCubicTransition::Create', 'AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalValue', 'AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalVelocity', 'AFXANIMATIONCONTROLLER/CCubicTransition::m_duration']
dev_langs: ["C++"]
helpviewer_keywords: ["CCubicTransition [MFC], CCubicTransition", "CCubicTransition [MFC], Create", "CCubicTransition [MFC], m_dblFinalValue", "CCubicTransition [MFC], m_dblFinalVelocity", "CCubicTransition [MFC], m_duration"]
ms.assetid: 4fc30e9c-160c-45e1-bdbe-51adf8fee9c5
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CCubicTransition Class
Encapsulates a cubic transition.  
  
## Syntax  
  
```  
class CCubicTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::CCubicTransition](#ccubictransition)|Constructs a transition object and initializes its parameters.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CCubicTransition::m_dblFinalVelocity](#m_dblfinalvelocity)|The velocity of the variable at the end of the transition.|  
|[CCubicTransition::m_duration](#m_duration)|The duration of the transition.|  
  
## Remarks  
 During a cubic transition, the value of the animation variable changes from its initial value to a specified final value over the duration of the transition, ending at a specified velocity. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CCubicTransition`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="ccubictransition"></a>  CCubicTransition::CCubicTransition  
 Constructs a transition object and initializes its parameters.  
  
```  
CCubicTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE finalVelocity);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `finalValue`  
 The value of the animation variable at the end of the transition.  
  
 `finalVelocity`  
 The velocity of the variable at the end of the transition.  
  
##  <a name="create"></a>  CCubicTransition::Create  
 Calls the transition library to create encapsulated transition COM object.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### Parameters  
`pLibrary`  
 A pointer to an [IUIAnimationTransitionLibrary interface](https://msdn.microsoft.com/library/windows/desktop/dd371897), which defines a library of standard transitions.  

### Return Value  
 TRUE if transition is created successfully; otherwise FALSE.  
  
##  <a name="m_dblfinalvalue"></a>  CCubicTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_dblfinalvelocity"></a>  CCubicTransition::m_dblFinalVelocity  
 The velocity of the variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalVelocity;  
```  
  
##  <a name="m_duration"></a>  CCubicTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
