---
title: "CLinearTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CLinearTransition"
  - "afxanimationcontroller/CLinearTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLinearTransition class"
ms.assetid: 7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0
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
# CLinearTransition Class
Encapsulates a linear transition.  
  
## Syntax  
  
```  
class CLinearTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::CLinearTransition](#clineartransition__clineartransition)|Constructs a linear transition object and initializes it with duration and final value.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::Create](#clineartransition__create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#cbasetransition__create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::m_dblFinalValue](#clineartransition__m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CLinearTransition::m_duration](#clineartransition__m_duration)|The duration of the transition.|  
  
## Remarks  
 During a linear transition, the value of the animation variable transitions linearly from its initial value to a specified final value. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CLinearTransition](../../mfc/reference/clineartransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="clineartransition__clineartransition"></a>  CLinearTransition::CLinearTransition  
 Constructs a linear transition object and initializes it with duration and final value.  
  
```  
CLinearTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE dblFinalValue);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `dblFinalValue`  
 The value of the animation variable at the end of the transition.  
  
##  <a name="clineartransition__create"></a>  CLinearTransition::Create  
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
  
##  <a name="clineartransition__m_dblfinalvalue"></a>  CLinearTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="clineartransition__m_duration"></a>  CLinearTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
