---
title: "CLinearTransitionFromSpeed Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CLinearTransitionFromSpeed", "AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed", "AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::CLinearTransitionFromSpeed", "AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::Create", "AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::m_dblFinalValue", "AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::m_dblSpeed"]
dev_langs: ["C++"]
helpviewer_keywords: ["CLinearTransitionFromSpeed [MFC], CLinearTransitionFromSpeed", "CLinearTransitionFromSpeed [MFC], Create", "CLinearTransitionFromSpeed [MFC], m_dblFinalValue", "CLinearTransitionFromSpeed [MFC], m_dblSpeed"]
ms.assetid: 8f159a1c-8893-4017-951e-09e5758aba7d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CLinearTransitionFromSpeed Class
Encapsulates a linear-speed transition.  
  
## Syntax  
  
```  
class CLinearTransitionFromSpeed : public CBaseTransition;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::CLinearTransitionFromSpeed](#clineartransitionfromspeed)|Constructs a linear-speed transition object and initializes it with speed and final value.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransitionFromSpeed::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CLinearTransitionFromSpeed::m_dblSpeed](#m_dblspeed)|The absolute value of the variable's velocity.|  
  
## Remarks  
 During a linear-speed transition, the value of the animation variable changes at a specified rate. The duration of the transition is determined by the difference between the initial value and the specified final value. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CLinearTransitionFromSpeed](../../mfc/reference/clineartransitionfromspeed-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="clineartransitionfromspeed"></a>  CLinearTransitionFromSpeed::CLinearTransitionFromSpeed  
 Constructs a linear-speed transition object and initializes it with speed and final value.  
  
```  
CLinearTransitionFromSpeed(
    DOUBLE dblSpeed,  
    DOUBLE dblFinalValue);
```  
  
### Parameters  
 *dblSpeed*  
 The absolute value of the variable's velocity.  
  
 *dblFinalValue*  
 The value of the animation variable at the end of the transition.  
  
##  <a name="create"></a>  CLinearTransitionFromSpeed::Create  
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
  
##  <a name="m_dblfinalvalue"></a>  CLinearTransitionFromSpeed::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_dblspeed"></a>  CLinearTransitionFromSpeed::m_dblSpeed  
 The absolute value of the variable's velocity.  
  
```  
DOUBLE m_dblSpeed;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
