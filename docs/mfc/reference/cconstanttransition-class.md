---
description: "Learn more about: CConstantTransition Class"
title: "CConstantTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CConstantTransition", "AFXANIMATIONCONTROLLER/CConstantTransition", "AFXANIMATIONCONTROLLER/CConstantTransition::CConstantTransition", "AFXANIMATIONCONTROLLER/CConstantTransition::Create", "AFXANIMATIONCONTROLLER/CConstantTransition::m_duration"]
helpviewer_keywords: ["CConstantTransition [MFC], CConstantTransition", "CConstantTransition [MFC], Create", "CConstantTransition [MFC], m_duration"]
ms.assetid: f6fa4780-a71b-4cd6-80aa-d4792ace36c2
---
# CConstantTransition Class

Encapsulates a constant transition.

## Syntax

```
class CConstantTransition : public CBaseTransition;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CConstantTransition::CConstantTransition](#cconstanttransition)|Constructs a transition object and initializes its duration.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CConstantTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CConstantTransition::m_duration](#m_duration)|The duration of the transition.|

## Remarks

During a constant transition, the value of an animation variable remains at the initial value over the duration of the transition. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CConstantTransition`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="cconstanttransition"></a> CConstantTransition::CConstantTransition

Constructs a transition object and initializes its duration.

```
CConstantTransition (UI_ANIMATION_SECONDS duration);
```

### Parameters

*duration*<br/>
The duration of the transition.

## <a name="create"></a> CConstantTransition::Create

Calls the transition library to create encapsulated transition COM object.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### Parameters

*pLibrary*<br/>
A pointer to an [IUIAnimationTransitionLibrary interface](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), which defines a library of standard transitions.

### Return Value

TRUE if transition is created successfully; otherwise FALSE.

## <a name="m_duration"></a> CConstantTransition::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
