---
title: "CDiscreteTransition Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CDiscreteTransition"
  - "afxanimationcontroller/CDiscreteTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDiscreteTransition class"
ms.assetid: b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8
caps.latest.revision: 14
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
|[CDiscreteTransition::CDiscreteTransition](#cdiscretetransition__cdiscretetransition)|Constructs a discrete transition object and initializes its parameters.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CDiscreteTransition::Create](#cdiscretetransition__create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../mfcref/cbasetransition-class.md#cbasetransition__create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CDiscreteTransition::m_dblFinalValue](#cdiscretetransition__m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CDiscreteTransition::m_delay](#cdiscretetransition__m_delay)|The amount of time by which to delay the instantaneous switch to the final value.|  
|[CDiscreteTransition::m_hold](#cdiscretetransition__m_hold)|The amount of time by which to hold the variable at its final value.|  
  
## Remarks  
 During a discrete transition, the animation variable remains at the initial value for a specified delay time, then switches instantaneously to a specified final value and remains at that value for a given hold time. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 [CBaseTransition](../mfcref/cbasetransition-class.md)  
  
 [CDiscreteTransition](../mfcref/cdiscretetransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cdiscretetransition__cdiscretetransition"></a>  CDiscreteTransition::CDiscreteTransition  
 Constructs a discrete transition object and initializes its parameters.  
  
```  
CDiscreteTransition(  
    UI_ANIMATION_SECONDS delay,  
    DOUBLE dblFinalValue,  
    UI_ANIMATION_SECONDS hold );  
```  
  
### Parameters  
 `delay`  
 The amount of time by which to delay the instantaneous switch to the final value.  
  
 `dblFinalValue`  
 The value of the animation variable at the end of the transition.  
  
 `hold`  
 The amount of time by which to hold the variable at its final value.  
  
##  <a name="cdiscretetransition__create"></a>  CDiscreteTransition::Create  
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
  
##  <a name="cdiscretetransition__m_dblfinalvalue"></a>  CDiscreteTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="cdiscretetransition__m_delay"></a>  CDiscreteTransition::m_delay  
 The amount of time by which to delay the instantaneous switch to the final value.  
  
```  
UI_ANIMATION_SECONDS m_delay;  
```  
  
##  <a name="cdiscretetransition__m_hold"></a>  CDiscreteTransition::m_hold  
 The amount of time by which to hold the variable at its final value.  
  
```  
UI_ANIMATION_SECONDS m_hold;  
```  
  
## See Also  
 [Classes](../mfcref/mfc-classes.md)