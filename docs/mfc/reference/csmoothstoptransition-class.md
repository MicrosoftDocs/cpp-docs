---
description: "Learn more about: CSmoothStopTransition Class"
title: "CSmoothStopTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CSmoothStopTransition", "AFXANIMATIONCONTROLLER/CSmoothStopTransition", "AFXANIMATIONCONTROLLER/CSmoothStopTransition::CSmoothStopTransition", "AFXANIMATIONCONTROLLER/CSmoothStopTransition::Create", "AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_dblFinalValue", "AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_maximumDuration"]
helpviewer_keywords: ["CSmoothStopTransition [MFC], CSmoothStopTransition", "CSmoothStopTransition [MFC], Create", "CSmoothStopTransition [MFC], m_dblFinalValue", "CSmoothStopTransition [MFC], m_maximumDuration"]
ms.assetid: e1a4b476-6f96-43dd-90db-870a64406b85
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
|[CSmoothStopTransition::CSmoothStopTransition](#csmoothstoptransition)|Constructs a smooth-stop transition and initializes its maximum duration and final value.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSmoothStopTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CSmoothStopTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|
|[CSmoothStopTransition::m_maximumDuration](#m_maximumduration)|The maximum duration of the transition.|

## Remarks

A smooth-stop transition slows down as it approaches a given final value, and reaches it with a velocity of zero. The duration of the transition is determined by the initial velocity, the difference between the initial and final values, and the specified maximum duration. If there is no solution consisting of a single parabolic arc, this method creates a cubic transition. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSmoothStopTransition](../../mfc/reference/csmoothstoptransition-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="create"></a> CSmoothStopTransition::Create

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

## <a name="csmoothstoptransition"></a> CSmoothStopTransition::CSmoothStopTransition

Constructs a smooth-stop transition and initializes its maximum duration and final value.

```
CSmoothStopTransition(
    UI_ANIMATION_SECONDS maximumDuration,
    DOUBLE dblFinalValue);
```

### Parameters

*maximumDuration*<br/>
The maximum duration of the transition.

*dblFinalValue*<br/>
The value of the animation variable at the end of the transition.

## <a name="m_dblfinalvalue"></a> CSmoothStopTransition::m_dblFinalValue

The value of the animation variable at the end of the transition.

```
DOUBLE m_dblFinalValue;
```

## <a name="m_maximumduration"></a> CSmoothStopTransition::m_maximumDuration

The maximum duration of the transition.

```
UI_ANIMATION_SECONDS m_maximumDuration;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
