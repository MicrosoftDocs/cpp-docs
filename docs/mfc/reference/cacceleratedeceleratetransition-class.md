---
description: "Learn more about: CAccelerateDecelerateTransition Class"
title: "CAccelerateDecelerateTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CAccelerateDecelerateTransition", "afxanimationcontroller/CAccelerateDecelerateTransition"]
helpviewer_keywords: ["CAccelerateDecelerateTransition class [MFC]"]
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
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
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition)|Constructs a transition object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAccelerateDecelerateTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAccelerateDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|The ratio of the time spent accelerating to the duration.|
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|The ratio of the time spent decelerating to the duration.|
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|The duration of the transition.|
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|The value of the animation variable at the end of the transition.|

## Remarks

During an accelerate-decelerate transition, the animation variable speeds up and then slows down over the duration of the transition, ending at a specified value. You can control how quickly the variable accelerates and decelerates independently, by specifying different acceleration and deceleration ratios. When the initial velocity is zero, the acceleration ratio is the fraction of the duration that the variable will spend accelerating; likewise with the deceleration ratio. If the initial velocity is non-zero, it is the fraction of the time between the velocity reaching zero and the end of transition. The acceleration ratio and the deceleration ratio should sum to a maximum of 1.0. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CAccelerateDecelerateTransition`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="cacceleratedeceleratetransition"></a> CAccelerateDecelerateTransition::CAccelerateDecelerateTransition

Constructs a transition object.

```
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue,
    DOUBLE accelerationRatio = 0.3,
    DOUBLE decelerationRatio = 0.3);
```

### Parameters

*duration*<br/>
The duration of the transition.

*finalValue*<br/>
The value of the animation variable at the end of the transition.

*accelerationRatio*<br/>
The ratio of the time spent accelerating to the duration.

*decelerationRatio*<br/>
The ratio of the time spent decelerating to the duration.

## <a name="create"></a> CAccelerateDecelerateTransition::Create

Calls the transition library to create encapsulated transition COM object.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* *\not used*\);
```

### Parameters

*pLibrary*<br/>
A pointer to an [IUIAnimationTransitionLibrary interface](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), which defines a library of standard transitions.

### Return Value

TRUE if transition is created successfully; otherwise FALSE.

## <a name="m_accelerationratio"></a> CAccelerateDecelerateTransition::m_accelerationRatio

The ratio of the time spent accelerating to the duration.

```
DOUBLE m_accelerationRatio;
```

## <a name="m_decelerationratio"></a> CAccelerateDecelerateTransition::m_decelerationRatio

The ratio of the time spent decelerating to the duration.

```
DOUBLE m_decelerationRatio;
```

## <a name="m_duration"></a> CAccelerateDecelerateTransition::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="m_finalvalue"></a> CAccelerateDecelerateTransition::m_finalValue

The value of the animation variable at the end of the transition.

```
DOUBLE m_finalValue;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
