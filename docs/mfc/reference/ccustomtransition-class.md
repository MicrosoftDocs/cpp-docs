---
description: "Learn more about: CCustomTransition Class"
title: "CCustomTransition Class"
ms.date: "11/04/2016"
f1_keywords: ["CCustomTransition", "AFXANIMATIONCONTROLLER/CCustomTransition", "AFXANIMATIONCONTROLLER/CCustomTransition::CCustomTransition", "AFXANIMATIONCONTROLLER/CCustomTransition::Create", "AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialValue", "AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialVelocity", "AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialValueSpecified", "AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialVelocitySpecified", "AFXANIMATIONCONTROLLER/CCustomTransition::m_initialValue", "AFXANIMATIONCONTROLLER/CCustomTransition::m_initialVelocity", "AFXANIMATIONCONTROLLER/CCustomTransition::m_pInterpolator"]
helpviewer_keywords: ["CCustomTransition [MFC], CCustomTransition", "CCustomTransition [MFC], Create", "CCustomTransition [MFC], SetInitialValue", "CCustomTransition [MFC], SetInitialVelocity", "CCustomTransition [MFC], m_bInitialValueSpecified", "CCustomTransition [MFC], m_bInitialVelocitySpecified", "CCustomTransition [MFC], m_initialValue", "CCustomTransition [MFC], m_initialVelocity", "CCustomTransition [MFC], m_pInterpolator"]
ms.assetid: 5bd3f492-940f-4290-a38b-fa68eb8f8401
---
# CCustomTransition Class

Implements a custom transition.

## Syntax

```
class CCustomTransition : public CBaseTransition;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CCustomTransition::CCustomTransition](#ccustomtransition)|Constructs a custom transition object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CCustomTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|
|[CCustomTransition::SetInitialValue](#setinitialvalue)|Sets an initial value, which will be applied to an animation variable associated with this transition.|
|[CCustomTransition::SetInitialVelocity](#setinitialvelocity)|Sets an initial velocity, which will be applied to an animation variable associated with this transition.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CCustomTransition::m_bInitialValueSpecified](#m_binitialvaluespecified)|Specifies whether the initial value was specified with SetInitialValue.|
|[CCustomTransition::m_bInitialVelocitySpecified](#m_binitialvelocityspecified)|Specifies whether the initial velocity was specified with SetInitialVelocity.|
|[CCustomTransition::m_initialValue](#m_initialvalue)|Stores the initial value.|
|[CCustomTransition::m_initialVelocity](#m_initialvelocity)|Stores the initial velocity.|
|[CCustomTransition::m_pInterpolator](#m_pinterpolator)|Stores a pointer to a custom interpolator.|

## Remarks

The CCustomTransitions class allows developers to implement custom transitions. It's created and used as a standard transition, but its constructor accepts as parameter a pointer to a custom interpolator. Perform the following steps to use custom transitions: 1. Derive a class from CCustomInterpolator and implement at least InterpolateValue method. 2. Ensure that the lifetime of custom interpolator object must be longer than duration of animation where it's used. 3. Instantiate (using operator new) a CCustomTransition object and pass a pointer to custom interpolator in the constructor. 4. Call CCustomTransition::SetInitialValue and CCustomTransition::SetInitialVelocity if these parameters are required for custom interpolation. 5. Pass the pointer to custom transition to AddTransition method of animation object, whose value should be animated with the custom algorithm. 6. When the value of animation object should change Windows Animation API will call InterpolateValue (and other relevant methods) in CCustomInterpolator.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CCustomTransition`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="ccustomtransition"></a> CCustomTransition::CCustomTransition

Constructs a custom transition object.

```
CCustomTransition(CCustomInterpolator* pInterpolator);
```

### Parameters

*pInterpolator*<br/>
A pointer to custom interpolator.

## <a name="create"></a> CCustomTransition::Create

Calls the transition library to create encapsulated transition COM object.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* */,
    IUIAnimationTransitionFactory* pFactory);
```

### Parameters

*pFactory*<br/>
A pointer to transition factory, which is responsible for creation of custom transitions.

### Return Value

### Remarks

This method also can set initial value and initial velocity to be applied to an animation variable, which is associated with this transition. For this purpose you have to call SetInitialValue and SetInitialVelocity before the framework creates the encapsulated transition COM object (it happens when you call CAnimationController::AnimateGroup).

## <a name="m_binitialvaluespecified"></a> CCustomTransition::m_bInitialValueSpecified

Specifies whether the initial value was specified with SetInitialValue.

```
BOOL m_bInitialValueSpecified;
```

## <a name="m_binitialvelocityspecified"></a> CCustomTransition::m_bInitialVelocitySpecified

Specifies whether the initial velocity was specified with SetInitialVelocity.

```
BOOL m_bInitialVelocitySpecified;
```

## <a name="m_initialvalue"></a> CCustomTransition::m_initialValue

Stores the initial value.

```
DOUBLE m_initialValue;
```

## <a name="m_initialvelocity"></a> CCustomTransition::m_initialVelocity

Stores the initial velocity.

```
DOUBLE m_initialVelocity;
```

## <a name="m_pinterpolator"></a> CCustomTransition::m_pInterpolator

Stores a pointer to a custom interpolator.

```
CCustomInterpolator* m_pInterpolator;
```

## <a name="setinitialvalue"></a> CCustomTransition::SetInitialValue

Sets an initial value, which will be applied to an animation variable associated with this transition.

```cpp
void SetInitialValue(DOUBLE initialValue);
```

### Parameters

*initialValue*

## <a name="setinitialvelocity"></a> CCustomTransition::SetInitialVelocity

Sets an initial velocity, which will be applied to an animation variable associated with this transition.

```cpp
void SetInitialVelocity(DOUBLE initialVelocity);
```

### Parameters

*initialVelocity*

## See also

[Classes](../../mfc/reference/mfc-classes.md)
