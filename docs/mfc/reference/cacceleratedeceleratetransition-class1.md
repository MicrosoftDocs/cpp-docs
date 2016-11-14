---
title: "CAccelerateDecelerateTransition Class1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAccelerateDecelerateTransition"
  - "afxanimationcontroller/CAccelerateDecelerateTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccelerateDecelerateTransition class"
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
caps.latest.revision: 16
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
# CAccelerateDecelerateTransition Class
Implements an accelerate-decelerate transition.  
  
## Syntax  
  
```  
class CAccelerateDecelerateTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition__cacceleratedeceleratetransition)|Constructs a transition object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::Create](#cacceleratedeceleratetransition__create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#cbasetransition__create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAccelerateDecelerateTransition::m_accelerationRatio](#cacceleratedeceleratetransition__m_accelerationratio)|The ratio of the time spent accelerating to the duration.|  
|[CAccelerateDecelerateTransition::m_decelerationRatio](#cacceleratedeceleratetransition__m_decelerationratio)|The ratio of the time spent decelerating to the duration.|  
|[CAccelerateDecelerateTransition::m_duration](#cacceleratedeceleratetransition__m_duration)|The duration of the transition.|  
|[CAccelerateDecelerateTransition::m_finalValue](#cacceleratedeceleratetransition__m_finalvalue)|The value of the animation variable at the end of the transition.|  
  
## Remarks  
 During an accelerate-decelerate transition, the animation variable speeds up and then slows down over the duration of the transition, ending at a specified value. You can control how quickly the variable accelerates and decelerates independently, by specifying different acceleration and deceleration ratios. When the initial velocity is zero, the acceleration ratio is the fraction of the duration that the variable will spend accelerating; likewise with the deceleration ratio. If the initial velocity is non-zero, it is the fraction of the time between the velocity reaching zero and the end of transition. The acceleration ratio and the deceleration ratio should sum to a maximum of 1.0. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CAccelerateDecelerateTransition](../../mfc/reference/cacceleratedeceleratetransition-class1.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cacceleratedeceleratetransition__cacceleratedeceleratetransition"></a>  CAccelerateDecelerateTransition::CAccelerateDecelerateTransition  
 Constructs a transition object.  
  
```  
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE accelerationRatio = 0.3,  
    DOUBLE decelerationRatio = 0.3);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `finalValue`  
 The value of the animation variable at the end of the transition.  
  
 `accelerationRatio`  
 The ratio of the time spent accelerating to the duration.  
  
 `decelerationRatio`  
 The ratio of the time spent decelerating to the duration.  
  
##  <a name="cacceleratedeceleratetransition__create"></a>  CAccelerateDecelerateTransition::Create  
 Calls the transition library to create encapsulated transition COM object.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* */);
```  
  
### Parameters  
 `pLibrary`  
 A pointer to transition library, which is responsible for creation of standard transitions.  
  
### Return Value  
 TRUE if transition is created successfully; otherwise FALSE.  
  
##  <a name="cacceleratedeceleratetransition__m_accelerationratio"></a>  CAccelerateDecelerateTransition::m_accelerationRatio  
 The ratio of the time spent accelerating to the duration.  
  
```  
DOUBLE m_accelerationRatio;  
```  
  
##  <a name="cacceleratedeceleratetransition__m_decelerationratio"></a>  CAccelerateDecelerateTransition::m_decelerationRatio  
 The ratio of the time spent decelerating to the duration.  
  
```  
DOUBLE m_decelerationRatio;  
```  
  
##  <a name="cacceleratedeceleratetransition__m_duration"></a>  CAccelerateDecelerateTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="cacceleratedeceleratetransition__m_finalvalue"></a>  CAccelerateDecelerateTransition::m_finalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_finalValue;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
