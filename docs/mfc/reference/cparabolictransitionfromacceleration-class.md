---
description: "Learn more about: CParabolicTransitionFromAcceleration Class"
title: "CParabolicTransitionFromAcceleration Class"
ms.date: "11/04/2016"
f1_keywords: ["CParabolicTransitionFromAcceleration", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::Create", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblAcceleration", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalValue", "AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalVelocity"]
helpviewer_keywords: ["CParabolicTransitionFromAcceleration [MFC], CParabolicTransitionFromAcceleration", "CParabolicTransitionFromAcceleration [MFC], Create", "CParabolicTransitionFromAcceleration [MFC], m_dblAcceleration", "CParabolicTransitionFromAcceleration [MFC], m_dblFinalValue", "CParabolicTransitionFromAcceleration [MFC], m_dblFinalVelocity"]
ms.assetid: 1e59b86f-358b-4da0-a4fd-8eaf5e85e00f
---
# CParabolicTransitionFromAcceleration Class

Encapsulates a parabolic-acceleration transition.

## Syntax

```
class CParabolicTransitionFromAcceleration : public CBaseTransition;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration](#cparabolictransitionfromacceleration)|Constructs a parabolic-acceleration transition and initializes it with specified parameters.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::m_dblAcceleration](#m_dblacceleration)|The acceleration of the animation variable during the transition.|
|[CParabolicTransitionFromAcceleration::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|
|[CParabolicTransitionFromAcceleration::m_dblFinalVelocity](#m_dblfinalvelocity)|The velocity of the animation variable at the end of the transition.|

## Remarks

During a parabolic-acceleration transition, the value of the animation variable changes from the initial value to the final value ending at a specified velocity. You can control how quickly the variable reaches the final value by specifying the rate of acceleration. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CParabolicTransitionFromAcceleration](../../mfc/reference/cparabolictransitionfromacceleration-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="cparabolictransitionfromacceleration"></a> CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration

Constructs a parabolic-acceleration transition and initializes it with specified parameters.

```
CParabolicTransitionFromAcceleration(
    DOUBLE dblFinalValue,
    DOUBLE dblFinalVelocity,
    DOUBLE dblAcceleration);
```

### Parameters

*dblFinalValue*<br/>
The value of the animation variable at the end of the transition.

*dblFinalVelocity*<br/>
The velocity of the animation variable at the end of the transition.

*dblAcceleration*<br/>
The acceleration of the animation variable during the transition.

## <a name="create"></a> CParabolicTransitionFromAcceleration::Create

Calls the transition library to create encapsulated transition COM object.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* /* not used */);
```

### Parameters

*pLibrary*<br/>
A pointer to transition library, which is responsible for creation of standard transitions.

### Return Value

TRUE if transition is created successfully; otherwise FALSE.

## <a name="m_dblacceleration"></a> CParabolicTransitionFromAcceleration::m_dblAcceleration

The acceleration of the animation variable during the transition.

```
DOUBLE m_dblAcceleration;
```

## <a name="m_dblfinalvalue"></a> CParabolicTransitionFromAcceleration::m_dblFinalValue

The value of the animation variable at the end of the transition.

```
DOUBLE m_dblFinalValue;
```

## <a name="m_dblfinalvelocity"></a> CParabolicTransitionFromAcceleration::m_dblFinalVelocity

The velocity of the animation variable at the end of the transition.

```
DOUBLE m_dblFinalVelocity;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
