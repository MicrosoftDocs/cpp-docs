---
description: "Learn more about: CLinearTransition Class"
title: "CLinearTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CLinearTransition", "AFXANIMATIONCONTROLLER/CLinearTransition", "AFXANIMATIONCONTROLLER/CLinearTransition::CLinearTransition", "AFXANIMATIONCONTROLLER/CLinearTransition::Create", "AFXANIMATIONCONTROLLER/CLinearTransition::m_dblFinalValue", "AFXANIMATIONCONTROLLER/CLinearTransition::m_duration"]
helpviewer_keywords: ["CLinearTransition [MFC], CLinearTransition", "CLinearTransition [MFC], Create", "CLinearTransition [MFC], m_dblFinalValue", "CLinearTransition [MFC], m_duration"]
ms.assetid: 7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0
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
|[CLinearTransition::CLinearTransition](#clineartransition)|Constructs a linear transition object and initializes it with duration and final value.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CLinearTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CLinearTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|
|[CLinearTransition::m_duration](#m_duration)|The duration of the transition.|

## Remarks

During a linear transition, the value of the animation variable transitions linearly from its initial value to a specified final value. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CLinearTransition](../../mfc/reference/clineartransition-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="clineartransition"></a> CLinearTransition::CLinearTransition

Constructs a linear transition object and initializes it with duration and final value.

```
CLinearTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE dblFinalValue);
```

### Parameters

*duration*<br/>
The duration of the transition.

*dblFinalValue*<br/>
The value of the animation variable at the end of the transition.

## <a name="create"></a> CLinearTransition::Create

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

## <a name="m_dblfinalvalue"></a> CLinearTransition::m_dblFinalValue

The value of the animation variable at the end of the transition.

```
DOUBLE m_dblFinalValue;
```

## <a name="m_duration"></a> CLinearTransition::m_duration

The duration of the transition.

```
UI_ANIMATION_SECONDS m_duration;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
