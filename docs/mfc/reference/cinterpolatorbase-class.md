---
description: "Learn more about: CInterpolatorBase Class"
title: "CInterpolatorBase Class"
ms.date: "11/04/2016"
f1_keywords: ["CInterpolatorBase", "AFXANIMATIONCONTROLLER/CInterpolatorBase", "AFXANIMATIONCONTROLLER/CInterpolatorBase::CInterpolatorBase", "AFXANIMATIONCONTROLLER/CInterpolatorBase::CreateInstance", "AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDependencies", "AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDuration", "AFXANIMATIONCONTROLLER/CInterpolatorBase::GetFinalValue", "AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateValue", "AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateVelocity", "AFXANIMATIONCONTROLLER/CInterpolatorBase::SetCustomInterpolator", "AFXANIMATIONCONTROLLER/CInterpolatorBase::SetDuration", "AFXANIMATIONCONTROLLER/CInterpolatorBase::SetInitialValueAndVelocity"]
helpviewer_keywords: ["CInterpolatorBase [MFC], CInterpolatorBase", "CInterpolatorBase [MFC], CreateInstance", "CInterpolatorBase [MFC], GetDependencies", "CInterpolatorBase [MFC], GetDuration", "CInterpolatorBase [MFC], GetFinalValue", "CInterpolatorBase [MFC], InterpolateValue", "CInterpolatorBase [MFC], InterpolateVelocity", "CInterpolatorBase [MFC], SetCustomInterpolator", "CInterpolatorBase [MFC], SetDuration", "CInterpolatorBase [MFC], SetInitialValueAndVelocity"]
ms.assetid: bbc3dce7-8398-47f9-b97e-e4fd2d737232
---
# CInterpolatorBase Class

Implements a callback, which is called by the Animation API when it has to calculate a new value of an animation variable.

## Syntax

```
class CInterpolatorBase : public CUIAnimationInterpolatorBase<CInterpolatorBase>;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CInterpolatorBase::CInterpolatorBase](#cinterpolatorbase)|Constructs the `CInterpolatorBase` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CInterpolatorBase::CreateInstance](#createinstance)|Creates an instance of `CInterpolatorBase` and stores a pointer to custom interpolator, which will be handling events.|
|[CInterpolatorBase::GetDependencies](#getdependencies)|Gets the interpolator's dependencies. (Overrides `CUIAnimationInterpolatorBase::GetDependencies`.)|
|[CInterpolatorBase::GetDuration](#getduration)|Gets the interpolator's duration. (Overrides `CUIAnimationInterpolatorBase::GetDuration`.)|
|[CInterpolatorBase::GetFinalValue](#getfinalvalue)|Gets the final value to which the interpolator leads. (Overrides `CUIAnimationInterpolatorBase::GetFinalValue`.)|
|[CInterpolatorBase::InterpolateValue](#interpolatevalue)|Interpolates the value at a given offset (Overrides `CUIAnimationInterpolatorBase::InterpolateValue`.)|
|[CInterpolatorBase::InterpolateVelocity](#interpolatevelocity)|Interpolates the velocity at a given offset (Overrides `CUIAnimationInterpolatorBase::InterpolateVelocity`.)|
|[CInterpolatorBase::SetCustomInterpolator](#setcustominterpolator)|Stores a pointer to custom interpolator, which will be handling events.|
|[CInterpolatorBase::SetDuration](#setduration)|Sets the interpolator's duration (Overrides `CUIAnimationInterpolatorBase::SetDuration`.)|
|[CInterpolatorBase::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Sets the interpolator's initial value and velocity. (Overrides `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`.)|

## Remarks

This handler is created and passed to `IUIAnimationTransitionFactory::CreateTransition` when a `CCustomTransition` object is being created as a part of animation initialization process (started by `CAnimationController::AnimateGroup`). Usually you don't need to use this class directly, it just routs all events to a `CCustomInterpolator`-derived class, whose pointer is passed to constructor of `CCustomTransition`.

## Inheritance Hierarchy

`CUIAnimationCallbackBase`

`CUIAnimationInterpolatorBase`

`CInterpolatorBase`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="cinterpolatorbase"></a> CInterpolatorBase::CInterpolatorBase

Constructs the CInterpolatorBase object.

```
CInterpolatorBase();
```

## <a name="createinstance"></a> CInterpolatorBase::CreateInstance

Creates an instance of CInterpolatorBase and stores a pointer to custom interpolator, which will be handling events.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CCustomInterpolator* pInterpolator,
    IUIAnimationInterpolator** ppHandler);
```

### Parameters

*pInterpolator*<br/>
A pointer to custom interpolator.

*ppHandler*<br/>
Output. Contains a pointer to instance of CInterpolatorBase when the function returns.

### Return Value

## <a name="getdependencies"></a> CInterpolatorBase::GetDependencies

Gets the interpolator's dependencies.

```
IFACEMETHOD(GetDependencies)(
    __out UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    __out UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    __out UI_ANIMATION_DEPENDENCIES* durationDependencies);
```

### Parameters

*initialValueDependencies*<br/>
Output. Aspects of the interpolator that depend on the initial value passed to SetInitialValueAndVelocity.

*initialVelocityDependencies*<br/>
Output. Aspects of the interpolator that depend on the initial velocity passed to SetInitialValueAndVelocity.

*durationDependencies*<br/>
Output. Aspects of the interpolator that depend on the duration passed to SetDuration.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetDependencies method.

## <a name="getduration"></a> CInterpolatorBase::GetDuration

Gets the interpolator's duration.

```
IFACEMETHOD(GetDuration)(__out UI_ANIMATION_SECONDS* duration);
```

### Parameters

*duration*<br/>
Output. The duration of the transition, in seconds.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetDuration method.

## <a name="getfinalvalue"></a> CInterpolatorBase::GetFinalValue

Gets the final value to which the interpolator leads.

```
IFACEMETHOD(GetFinalValue)(__out DOUBLE* value);
```

### Parameters

*value*<br/>
Output. The final value of a variable at the end of the transition.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetFinalValue method.

## <a name="interpolatevalue"></a> CInterpolatorBase::InterpolateValue

Interpolates the value at a given offset

```
IFACEMETHOD(InterpolateValue)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* value);
```

### Parameters

*offset*<br/>
The offset from the start of the transition. The offset is always greater than or equal to zero and less than the duration of the transition. This method is not called if the duration of the transition is zero.

*value*<br/>
Output. The interpolated value.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the InterpolateValue method.

## <a name="interpolatevelocity"></a> CInterpolatorBase::InterpolateVelocity

Interpolates the velocity at a given offset

```
IFACEMETHOD(InterpolateVelocity)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* velocity);
```

### Parameters

*offset*<br/>
The offset from the start of the transition. The offset is always greater than or equal to zero and less than or equal to the duration of the transition. This method is not called if the duration of the transition is zero.

*velocity*<br/>
Output. The velocity of the variable at the offset.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the InterpolateVelocity method.

## <a name="setcustominterpolator"></a> CInterpolatorBase::SetCustomInterpolator

Stores a pointer to custom interpolator, which will be handling events.

```cpp
void SetCustomInterpolator(CCustomInterpolator* pInterpolator);
```

### Parameters

*pInterpolator*<br/>
A pointer to custom interpolator.

## <a name="setduration"></a> CInterpolatorBase::SetDuration

Sets the interpolator's duration

```
IFACEMETHOD(SetDuration)(__in UI_ANIMATION_SECONDS duration);
```

### Parameters

*duration*<br/>
The duration of the transition.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the SetDuration method.

## <a name="setinitialvalueandvelocity"></a> CInterpolatorBase::SetInitialValueAndVelocity

Sets the interpolator's initial value and velocity.

```
IFACEMETHOD(SetInitialValueAndVelocity)(
    __in DOUBLE initialValue,
    __in DOUBLE initialVelocity);
```

### Parameters

*initialValue*<br/>
The value of the variable at the start of the transition.

*initialVelocity*<br/>
The velocity of the variable at the start of the transition.

### Return Value

If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the SetInitialValueAndVelocity method.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
