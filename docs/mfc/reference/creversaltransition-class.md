---
description: "Learn more about: CReversalTransition Class"
title: "CReversalTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CReversalTransition", "AFXANIMATIONCONTROLLER/CReversalTransition", "AFXANIMATIONCONTROLLER/CReversalTransition::CReversalTransition", "AFXANIMATIONCONTROLLER/CReversalTransition::Create", "AFXANIMATIONCONTROLLER/CReversalTransition::m_duration"]
helpviewer_keywords: ["CReversalTransition [MFC], CReversalTransition", "CReversalTransition [MFC], Create", "CReversalTransition [MFC], m_duration"]
ms.assetid: e89516be-2d07-4885-95a8-fc278f46e3ad
---
# CReversalTransition Class

Encapsulates a reversal transition.

## Syntax

```
class CReversalTransition : public CBaseTransition;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CReversalTransition::CReversalTransition](#creversaltransition)|Constructs a reversal transition object and initializes its duration.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CReversalTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CReversalTransition::m_duration](#m_duration)|The duration of the transition.|

## Remarks

A reversal transition smoothly changes direction over a given duration. The final value will be the same as the initial value and the final velocity will be the negative of the initial velocity. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CReversalTransition](../../mfc/reference/creversaltransition-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="create"></a> CReversalTransition::Create

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

## <a name="creversaltransition"></a> CReversalTransition::CReversalTransition

Constructs a reversal transition object and initializes its duration.

```
CReversalTransition(UI_ANIMATION_SECONDS duration);
```

### Parameters

*duration*<br/>
The duration of the transition.

## <a name="m_duration"></a> CReversalTransition::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
