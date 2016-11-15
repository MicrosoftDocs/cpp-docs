---
title: "CSmoothStopTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSmoothStopTransition"
  - "afxanimationcontroller/CSmoothStopTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSmoothStopTransition class"
ms.assetid: e1a4b476-6f96-43dd-90db-870a64406b85
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
# CSmoothStopTransition Class
Encapsulates a smooth-stop transition.  
  
## Syntax  
  
```  
class CSmoothStopTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSmoothStopTransition::CSmoothStopTransition](#csmoothstoptransition__csmoothstoptransition)|Constructs a smooth-stop transition and initializes its maximum duration and final value.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSmoothStopTransition::Create](#csmoothstoptransition__create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#cbasetransition__create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CSmoothStopTransition::m_dblFinalValue](#csmoothstoptransition__m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CSmoothStopTransition::m_maximumDuration](#csmoothstoptransition__m_maximumduration)|The maximum duration of the transition.|  
  
## Remarks  
 A smooth-stop transition slows down as it approaches a given final value, and reaches it with a velocity of zero. The duration of the transition is determined by the initial velocity, the difference between the initial and final values, and the specified maximum duration. If there is no solution consisting of a single parabolic arc, this method creates a cubic transition. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CSmoothStopTransition](../../mfc/reference/csmoothstoptransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="csmoothstoptransition__create"></a>  CSmoothStopTransition::Create  
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
  
##  <a name="csmoothstoptransition__csmoothstoptransition"></a>  CSmoothStopTransition::CSmoothStopTransition  
 Constructs a smooth-stop transition and initializes its maximum duration and final value.  
  
```  
CSmoothStopTransition(
    UI_ANIMATION_SECONDS maximumDuration,  
    DOUBLE dblFinalValue);
```  
  
### Parameters  
 `maximumDuration`  
 The maximum duration of the transition.  
  
 `dblFinalValue`  
 The value of the animation variable at the end of the transition.  
  
##  <a name="csmoothstoptransition__m_dblfinalvalue"></a>  CSmoothStopTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="csmoothstoptransition__m_maximumduration"></a>  CSmoothStopTransition::m_maximumDuration  
 The maximum duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_maximumDuration;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
