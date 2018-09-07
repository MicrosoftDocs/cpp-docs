---
title: "CInstantaneousTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CInstantaneousTransition", "AFXANIMATIONCONTROLLER/CInstantaneousTransition", "AFXANIMATIONCONTROLLER/CInstantaneousTransition::CInstantaneousTransition", "AFXANIMATIONCONTROLLER/CInstantaneousTransition::Create", "AFXANIMATIONCONTROLLER/CInstantaneousTransition::m_dblFinalValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["CInstantaneousTransition [MFC], CInstantaneousTransition", "CInstantaneousTransition [MFC], Create", "CInstantaneousTransition [MFC], m_dblFinalValue"]
ms.assetid: c3d5121f-2c6b-4221-9e57-10e082a31120
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CInstantaneousTransition Class
Encapsulates an instantaneous transition.  
  
## Syntax  
  
```  
class CInstantaneousTransition : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInstantaneousTransition::CInstantaneousTransition](#cinstantaneoustransition)|Constructs a transition object and initializes its final value.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CInstantaneousTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CInstantaneousTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
  
## Remarks  
 During an instantaneous transition, the value of the animation variable changes instantly from its current value to a specified final value. The duration of this transition is always zero. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CInstantaneousTransition](../../mfc/reference/cinstantaneoustransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cinstantaneoustransition"></a>  CInstantaneousTransition::CInstantaneousTransition  
 Constructs a transition object and initializes its final value.  
  
```  
CInstantaneousTransition(DOUBLE dblFinalValue);
```  
  
### Parameters  
 *dblFinalValue*  
 The value of the animation variable at the end of the transition.  
  
##  <a name="create"></a>  CInstantaneousTransition::Create  
 Calls the transition library to create encapsulated transition COM object.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### Parameters  
*pLibrary*  
 A pointer to an [IUIAnimationTransitionLibrary interface](/windows/desktop/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), which defines a library of standard transitions.  

  
### Return Value  
 TRUE if transition is created successfully; otherwise FALSE.  
  
##  <a name="m_dblfinalvalue"></a>  CInstantaneousTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
