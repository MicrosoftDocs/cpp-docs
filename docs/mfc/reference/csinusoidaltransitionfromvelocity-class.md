---
description: "Learn more about: CSinusoidalTransitionFromVelocity Class"
title: "CSinusoidalTransitionFromVelocity Class"
ms.date: "11/04/2016"
f1_keywords: ["CSinusoidalTransitionFromVelocity", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::Create", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::m_duration", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::m_period"]
helpviewer_keywords: ["CSinusoidalTransitionFromVelocity [MFC], CSinusoidalTransitionFromVelocity", "CSinusoidalTransitionFromVelocity [MFC], Create", "CSinusoidalTransitionFromVelocity [MFC], m_duration", "CSinusoidalTransitionFromVelocity [MFC], m_period"]
ms.assetid: cc885f17-b84b-45ee-8f1f-36a8bbb7adad
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
|[CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity](#csinusoidaltransitionfromvelocity)|Constructs a transition object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity::m_duration](#m_duration)|The duration of the transition.|
|[CSinusoidalTransitionFromVelocity::m_period](#m_period)|The period of oscillation of the sinusoidal wave in seconds.|

## Remarks

The value of the animation variable oscillates around the initial value over the entire duration of a sinusoidal-range transition. The amplitude of the oscillation is determined by the animation variable's velocity when the transition begins. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSinusoidalTransitionFromVelocity](../../mfc/reference/csinusoidaltransitionfromvelocity-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="create"></a> CSinusoidalTransitionFromVelocity::Create

Calls the transition library to create encapsulated transition COM object.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### Parameters

*pLibrary*<br/>
A pointer to transition library, which is responsible for creation of standard transitions.

### Return Value

TRUE if transition is created successfully; otherwise FALSE.

## <a name="csinusoidaltransitionfromvelocity"></a> CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity

Constructs a transition object.

```
CSinusoidalTransitionFromVelocity(
    UI_ANIMATION_SECONDS duration,
    UI_ANIMATION_SECONDS period);
```

### Parameters

*duration*<br/>
The duration of the transition.

*period*<br/>
The period of oscillation of the sinusoidal wave in seconds.

## <a name="m_duration"></a> CSinusoidalTransitionFromVelocity::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="m_period"></a> CSinusoidalTransitionFromVelocity::m_period

The period of oscillation of the sinusoidal wave in seconds.

```
UI_ANIMATION_SECONDS m_period;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
