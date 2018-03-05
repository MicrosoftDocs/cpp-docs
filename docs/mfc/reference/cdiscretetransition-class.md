---
title: "CDiscreteTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CDiscreteTransition", "AFXANIMATIONCONTROLLER/CDiscreteTransition", "AFXANIMATIONCONTROLLER/CDiscreteTransition::CDiscreteTransition", "AFXANIMATIONCONTROLLER/CDiscreteTransition::Create", "AFXANIMATIONCONTROLLER/CDiscreteTransition::m_dblFinalValue", "AFXANIMATIONCONTROLLER/CDiscreteTransition::m_delay", "AFXANIMATIONCONTROLLER/CDiscreteTransition::m_hold"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDiscreteTransition [MFC], CDiscreteTransition", "CDiscreteTransition [MFC], Create", "CDiscreteTransition [MFC], m_dblFinalValue", "CDiscreteTransition [MFC], m_delay", "CDiscreteTransition [MFC], m_hold"]
ms.assetid: b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# CDiscreteTransition Class
Encapsulates a discrete transition.  
  
## Syntax  
  
```  
class CDiscreteTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CDiscreteTransition::CDiscreteTransition](#cdiscretetransition)|Constructs a discrete transition object and initializes its parameters.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDiscreteTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CDiscreteTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CDiscreteTransition::m_delay](#m_delay)|The amount of time by which to delay the instantaneous switch to the final value.|  
|[CDiscreteTransition::m_hold](#m_hold)|The amount of time by which to hold the variable at its final value.|  
  
## Remarks  
 During a discrete transition, the animation variable remains at the initial value for a specified delay time, then switches instantaneously to a specified final value and remains at that value for a given hold time. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CDiscreteTransition](../../mfc/reference/cdiscretetransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cdiscretetransition"></a>  CDiscreteTransition::CDiscreteTransition  
 Constructs a discrete transition object and initializes its parameters.  
  
```  
CDiscreteTransition(
    UI_ANIMATION_SECONDS delay,  
    DOUBLE dblFinalValue,  
    UI_ANIMATION_SECONDS hold);
```  
  
### Parameters  
 `delay`  
 The amount of time by which to delay the instantaneous switch to the final value.  
  
 `dblFinalValue`  
 The value of the animation variable at the end of the transition.  
  
 `hold`  
 The amount of time by which to hold the variable at its final value.  
  
##  <a name="create"></a>  CDiscreteTransition::Create  
 Calls the transition library to create encapsulated transition COM object.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
`pLibrary`  
 A pointer to an [IUIAnimationTransitionLibrary interface](https://msdn.microsoft.com/library/windows/desktop/dd371897), which defines a library of standard transitions.  

  
### Return Value  
 TRUE if transition is created successfully; otherwise FALSE.  
  
##  <a name="m_dblfinalvalue"></a>  CDiscreteTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_delay"></a>  CDiscreteTransition::m_delay  
 The amount of time by which to delay the instantaneous switch to the final value.  
  
```  
UI_ANIMATION_SECONDS m_delay;  
```  
  
##  <a name="m_hold"></a>  CDiscreteTransition::m_hold  
 The amount of time by which to hold the variable at its final value.  
  
```  
UI_ANIMATION_SECONDS m_hold;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
