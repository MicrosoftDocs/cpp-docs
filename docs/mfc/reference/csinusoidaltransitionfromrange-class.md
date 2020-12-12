---
description: "Learn more about: CSinusoidalTransitionFromRange Class"
title: "CSinusoidalTransitionFromRange Class"
ms.date: "11/04/2016"
f1_keywords: ["CSinusoidalTransitionFromRange", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::CSinusoidalTransitionFromRange", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::Create", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_dblMaximumValue", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_dblMinimumValue", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_duration", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_period", "AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_slope"]
helpviewer_keywords: ["CSinusoidalTransitionFromRange [MFC], CSinusoidalTransitionFromRange", "CSinusoidalTransitionFromRange [MFC], Create", "CSinusoidalTransitionFromRange [MFC], m_dblMaximumValue", "CSinusoidalTransitionFromRange [MFC], m_dblMinimumValue", "CSinusoidalTransitionFromRange [MFC], m_duration", "CSinusoidalTransitionFromRange [MFC], m_period", "CSinusoidalTransitionFromRange [MFC], m_slope"]
ms.assetid: 8b66a729-5f10-431a-b055-e3600d0065da
---
# CSinusoidalTransitionFromRange Class

Encapsulates a sinusoidal-range transition that has a given range of oscillation.

## Syntax

```
class CSinusoidalTransitionFromRange : public CBaseTransition;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange::CSinusoidalTransitionFromRange](#csinusoidaltransitionfromrange)|Constructs a transition object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange::m_dblMaximumValue](#m_dblmaximumvalue)|The value of the animation variable at a peak of the sinusoidal wave.|
|[CSinusoidalTransitionFromRange::m_dblMinimumValue](#m_dblminimumvalue)|The value of the animation variable at a trough of the sinusoidal wave.|
|[CSinusoidalTransitionFromRange::m_duration](#m_duration)|The duration of the transition.|
|[CSinusoidalTransitionFromRange::m_period](#m_period)|The period of oscillation of the sinusoidal wave in seconds.|
|[CSinusoidalTransitionFromRange::m_slope](#m_slope)|The slope at the start of the transition.|

## Remarks

The value of the animation variable fluctuates between the specified minimum and maximum values over the entire duration of a sinusoidal-range transition. The slope parameter is used to disambiguate between the two possible sine waves specified by the other parameters. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSinusoidalTransitionFromRange](../../mfc/reference/csinusoidaltransitionfromrange-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="create"></a> CSinusoidalTransitionFromRange::Create

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

## <a name="csinusoidaltransitionfromrange"></a> CSinusoidalTransitionFromRange::CSinusoidalTransitionFromRange

Constructs a transition object.

```
CSinusoidalTransitionFromRange(
    UI_ANIMATION_SECONDS duration,
    DOUBLE dblMinimumValue,
    DOUBLE dblMaximumValue,
    UI_ANIMATION_SECONDS period,
    UI_ANIMATION_SLOPE slope);
```

### Parameters

*duration*<br/>
The duration of the transition.

*dblMinimumValue*<br/>
The value of the animation variable at a trough of the sinusoidal wave.

*dblMaximumValue*<br/>
The value of the animation variable at a peak of the sinusoidal wave.

*period*<br/>
The period of oscillation of the sinusoidal wave in seconds.

*slope*<br/>
The slope at the start of the transition.

## <a name="m_dblmaximumvalue"></a> CSinusoidalTransitionFromRange::m_dblMaximumValue

The value of the animation variable at a peak of the sinusoidal wave.

```
DOUBLE m_dblMaximumValue;
```

## <a name="m_dblminimumvalue"></a> CSinusoidalTransitionFromRange::m_dblMinimumValue

The value of the animation variable at a trough of the sinusoidal wave.

```
DOUBLE m_dblMinimumValue;
```

## <a name="m_duration"></a> CSinusoidalTransitionFromRange::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="m_period"></a> CSinusoidalTransitionFromRange::m_period

The period of oscillation of the sinusoidal wave in seconds.

```
UI_ANIMATION_SECONDS m_period;
```

## <a name="m_slope"></a> CSinusoidalTransitionFromRange::m_slope

The slope at the start of the transition.

```
UI_ANIMATION_SLOPE m_slope;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
