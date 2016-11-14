---
title: "CSinusoidalTransitionFromVelocity Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSinusoidalTransitionFromVelocity"
  - "afxanimationcontroller/CSinusoidalTransitionFromVelocity"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSinusoidalTransitionFromVelocity class"
ms.assetid: cc885f17-b84b-45ee-8f1f-36a8bbb7adad
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
# CSinusoidalTransitionFromVelocity Class
Encapsulates a sinusoidal-velocity transition that has an amplitude that is determined by the initial velocity of the animation variable.  
  
## Syntax  
  
```  
class CSinusoidalTransitionFromVelocity : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity](#csinusoidaltransitionfromvelocity__csinusoidaltransitionfromvelocity)|Constructs a transition object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::Create](#csinusoidaltransitionfromvelocity__create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#cbasetransition__create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CSinusoidalTransitionFromVelocity::m_duration](#csinusoidaltransitionfromvelocity__m_duration)|The duration of the transition.|  
|[CSinusoidalTransitionFromVelocity::m_period](#csinusoidaltransitionfromvelocity__m_period)|The period of oscillation of the sinusoidal wave in seconds.|  
  
## Remarks  
 The value of the animation variable oscillates around the initial value over the entire duration of a sinusoidal-range transition. The amplitude of the oscillation is determined by the animation variable's velocity when the transition begins. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CSinusoidalTransitionFromVelocity](../../mfc/reference/csinusoidaltransitionfromvelocity-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="csinusoidaltransitionfromvelocity__create"></a>  CSinusoidalTransitionFromVelocity::Create  
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
  
##  <a name="csinusoidaltransitionfromvelocity__csinusoidaltransitionfromvelocity"></a>  CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity  
 Constructs a transition object.  
  
```  
CSinusoidalTransitionFromVelocity(
    UI_ANIMATION_SECONDS duration,  
    UI_ANIMATION_SECONDS period);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `period`  
 The period of oscillation of the sinusoidal wave in seconds.  
  
##  <a name="csinusoidaltransitionfromvelocity__m_duration"></a>  CSinusoidalTransitionFromVelocity::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="csinusoidaltransitionfromvelocity__m_period"></a>  CSinusoidalTransitionFromVelocity::m_period  
 The period of oscillation of the sinusoidal wave in seconds.  
  
```  
UI_ANIMATION_SECONDS m_period;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
