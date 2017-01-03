---
title: "CCustomInterpolator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CCustomInterpolator"
  - "CCustomInterpolator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCustomInterpolator class"
ms.assetid: 28d85595-989a-40a3-b003-e0e38437a94d
caps.latest.revision: 17
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
# CCustomInterpolator Class
Implements a basic interpolator.  
  
## Syntax  
  
```  
class CCustomInterpolator;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCustomInterpolator::CCustomInterpolator](#ccustominterpolator)|Overloaded. Constructs a custom interpolator object and initializes duration and velocity to specified values.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCustomInterpolator::GetDependencies](#getdependencies)|Gets the interpolator's dependencies.|  
|[CCustomInterpolator::GetDuration](#getduration)|Gets the interpolator's duration.|  
|[CCustomInterpolator::GetFinalValue](#getfinalvalue)|Gets the final value to which the interpolator leads.|  
|[CCustomInterpolator::Init](#init)|Initializes duration and final value.|  
|[CCustomInterpolator::InterpolateValue](#interpolatevalue)|Interpolates the value at a given offset.|  
|[CCustomInterpolator::InterpolateVelocity](#interpolatevelocity)|Interpolates the velocity at a given offset|  
|[CCustomInterpolator::SetDuration](#setduration)|Sets the interpolator's duration.|  
|[CCustomInterpolator::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Sets the interpolator's initial value and velocity.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCustomInterpolator::m_currentValue](#m_currentvalue)|The interpolated value.|  
|[CCustomInterpolator::m_currentVelocity](#m_currentvelocity)|The interpolated velocity.|  
|[CCustomInterpolator::m_duration](#m_duration)|The duration of the transition.|  
|[CCustomInterpolator::m_finalValue](#m_finalvalue)|The final value of a variable at the end of the transition.|  
|[CCustomInterpolator::m_initialValue](#m_initialvalue)|The value of the variable at the start of the transition.|  
|[CCustomInterpolator::m_initialVelocity](#m_initialvelocity)|The velocity of the variable at the start of the transition.|  
  
## Remarks  
 Derive a class from CCustomInterpolator and override all necessary methods in order to implement a custom interpolation algorithm. A pointer to this class should be passed as a parameter to CCustomTransition.  
  
## Inheritance Hierarchy  
 `CCustomInterpolator`  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="ccustominterpolator"></a>  CCustomInterpolator::CCustomInterpolator  
 Constructs a custom interpolator object and sets all values to default 0.  
  
```  
CCustomInterpolator();

 
CCustomInterpolator(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `finalValue`  
  
### Remarks  
 Use CCustomInterpolator::Init to initialize duration and final value later in the code.  
  
##  <a name="getdependencies"></a>  CCustomInterpolator::GetDependencies  
 Gets the interpolator's dependencies.  
  
```  
virtual BOOL GetDependencies(
    UI_ANIMATION_DEPENDENCIES* initialValueDependencies,  
    UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,  
    UI_ANIMATION_DEPENDENCIES* durationDependencies);
```  
  
### Parameters  
 `initialValueDependencies`  
 Output. Aspects of the interpolator that depend on the initial value passed to SetInitialValueAndVelocity.  
  
 `initialVelocityDependencies`  
 Output. Aspects of the interpolator that depend on the initial velocity passed to SetInitialValueAndVelocity.  
  
 `durationDependencies`  
 Output. Aspects of the interpolator that depend on the duration passed to SetDuration.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="getduration"></a>  CCustomInterpolator::GetDuration  
 Gets the interpolator's duration.  
  
```  
virtual BOOL GetDuration(UI_ANIMATION_SECONDS* duration);
```  
  
### Parameters  
 `duration`  
 Output. The duration of the transition, in seconds.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="getfinalvalue"></a>  CCustomInterpolator::GetFinalValue  
 Gets the final value to which the interpolator leads.  
  
```  
virtual BOOL GetFinalValue(DOUBLE* value);
```  
  
### Parameters  
 `value`  
 Output. The final value of a variable at the end of the transition.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="init"></a>  CCustomInterpolator::Init  
 Initializes duration and final value.  
  
```  
void Init(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
 `finalValue`  
 The final value of a variable at the end of the transition.  
  
##  <a name="interpolatevalue"></a>  CCustomInterpolator::InterpolateValue  
 Interpolates the value at a given offset.  
  
```  
virtual BOOL InterpolateValue(
    UI_ANIMATION_SECONDS */,  
    DOUBLE* value);
```  
  
### Parameters  
 `value`  
 Output. The interpolated value.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="interpolatevelocity"></a>  CCustomInterpolator::InterpolateVelocity  
 Interpolates the velocity at a given offset  
  
```  
virtual BOOL InterpolateVelocity(
    UI_ANIMATION_SECONDS */,  
    DOUBLE* velocity);
```  
  
### Parameters  
 `velocity`  
 Output. The velocity of the variable at the offset.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="m_currentvalue"></a>  CCustomInterpolator::m_currentValue  
 The interpolated value.  
  
```  
DOUBLE m_currentValue;  
```  
  
##  <a name="m_currentvelocity"></a>  CCustomInterpolator::m_currentVelocity  
 The interpolated velocity.  
  
```  
DOUBLE m_currentVelocity;  
```  
  
##  <a name="m_duration"></a>  CCustomInterpolator::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
##  <a name="m_finalvalue"></a>  CCustomInterpolator::m_finalValue  
 The final value of a variable at the end of the transition.  
  
```  
DOUBLE m_finalValue;  
```  
  
##  <a name="m_initialvalue"></a>  CCustomInterpolator::m_initialValue  
 The value of the variable at the start of the transition.  
  
```  
DOUBLE m_initialValue;  
```  
  
##  <a name="m_initialvelocity"></a>  CCustomInterpolator::m_initialVelocity  
 The velocity of the variable at the start of the transition.  
  
```  
DOUBLE m_initialVelocity;  
```  
  
##  <a name="setduration"></a>  CCustomInterpolator::SetDuration  
 Sets the interpolator's duration.  
  
```  
virtual BOOL SetDuration(UI_ANIMATION_SECONDS duration);
```  
  
### Parameters  
 `duration`  
 The duration of the transition.  
  
### Return Value  
 Basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
##  <a name="setinitialvalueandvelocity"></a>  CCustomInterpolator::SetInitialValueAndVelocity  
 Sets the interpolator's initial value and velocity.  
  
```  
virtual BOOL SetInitialValueAndVelocity(
    DOUBLE initialValue,  
    DOUBLE initialVelocity);
```  
  
### Parameters  
 `initialValue`  
 The value of the variable at the start of the transition.  
  
 `initialVelocity`  
 The velocity of the variable at the start of the transition.  
  
### Return Value  
 The basic implementation always returns TRUE. Return FALSE from overridden implementation if you wish to fail the event.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
