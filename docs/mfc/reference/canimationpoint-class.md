---
description: "Learn more about: CAnimationPoint class"
title: "CAnimationPoint class"
ms.date: 01/05/2022
f1_keywords: ["CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint::CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint::AddTransition", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetX", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetY", "AFXANIMATIONCONTROLLER/CAnimationPoint::SetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetAnimationVariableList", "AFXANIMATIONCONTROLLER/CAnimationPoint::m_xValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::m_yValue"]
helpviewer_keywords: ["CAnimationPoint [MFC], CAnimationPoint", "CAnimationPoint [MFC], AddTransition", "CAnimationPoint [MFC], GetDefaultValue", "CAnimationPoint [MFC], GetValue", "CAnimationPoint [MFC], GetX", "CAnimationPoint [MFC], GetY", "CAnimationPoint [MFC], SetDefaultValue", "CAnimationPoint [MFC], GetAnimationVariableList", "CAnimationPoint [MFC], m_xValue", "CAnimationPoint [MFC], m_yValue"]
---
# `CAnimationPoint` class

Implements the functionality of a point whose coordinates can be animated.

## Syntax

```cpp
class CAnimationPoint : public CAnimationBaseObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CAnimationPoint::CAnimationPoint`](#canimationpoint)|Overloaded. Constructs `CAnimationPoint` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[`CAnimationPoint::AddTransition`](#addtransition)|Adds transitions for X and Y coordinates.|
|[`CAnimationPoint::GetDefaultValue`](#getdefaultvalue)|Returns the default values for X and Y coordinates.|
|[`CAnimationPoint::GetValue`](#getvalue)|Returns current value.|
|[`CAnimationPoint::GetX`](#getx)|Provides access to the `CAnimationVariable` X coordinate.|
|[`CAnimationPoint::GetY`](#gety)|Provides access to the `CAnimationVariable` Y coordinate.|
|[`CAnimationPoint::SetDefaultValue`](#setdefaultvalue)|Sets the default value.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[`CAnimationPoint::GetAnimationVariableList`](#getanimationvariablelist)|Puts the encapsulated animation variables into a list. Overrides [`CAnimationBaseObject::GetAnimationVariableList`](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[`CAnimationPoint::operator CPoint`](#operator_cpoint)|Converts a `CAnimationPoint` to a `CPoint`.|
|[`CAnimationPoint::operator=`](#operator_eq)|Assigns `ptSrc` to `CAnimationPoint`.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[`CAnimationPoint::m_xValue`](#m_xvalue)|The encapsulated animation variable that represents the X coordinate of the animation point.|
|[`CAnimationPoint::m_yValue`](#m_yvalue)|The encapsulated animation variable that represents the Y coordinate of the animation point.|

## Remarks

The `CAnimationPoint` class encapsulates two `CAnimationVariable` objects and can represent in applications a point. For example, you can use this class to animate a position of any object on the screen such as a text string, circle, point, and so on. To use this class in an application, just instantiate an object of this class, add it to animation controller using `CAnimationController::AddAnimationObject`, and call `AddTransition` for each transition to be applied to X and/or Y coordinates.

## Inheritance Hierarchy

[`CObject`](../../mfc/reference/cobject-class.md)\
[`CAnimationBaseObject`](../../mfc/reference/canimationbaseobject-class.md)\
`CAnimationPoint`

## Requirements

**Header:** `afxanimationcontroller.h`

## <a name="addtransition"></a> `CAnimationPoint::AddTransition`

Adds transitions for X and Y coordinates.

```cpp
void AddTransition(
    CBaseTransition* pXTransition,
    CBaseTransition* pYTransition);
```

### Parameters

*`pXTransition`*\
A pointer to transition for X coordinates.

*`pYTransition`*\
A pointer to transition for Y coordinate.

### Remarks

Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables for X and Y coordinates. When you add transitions, they aren't applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call `CAnimationController::AnimateGroup`. If you don't need to apply a transition to one of coordinates, you can pass `NULL`.

## <a name="canimationpoint"></a> `CAnimationPoint::CAnimationPoint`

Constructs a `CAnimationPoint` object.

```cpp
CAnimationPoint();

CAnimationPoint(
    const CPoint& ptDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### Parameters

*`ptDefault`*\
Specifies default point coordinates.

*`nGroupID`*\
Specifies Group ID.

*`nObjectID`*\
Specifies Object ID.

*`dwUserData`*\
Specifies user-defined data.

### Remarks

Constructs a `CAnimationPoint` object with default properties. The default point coordinates, Group ID and Object ID, are set to zero.

## <a name="getanimationvariablelist"></a> `CAnimationPoint::GetAnimationVariableList`

Puts the encapsulated animation variables into a list.

```cpp
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```

### Parameters

*`lst`*\
When the function returns, it contains pointers to two `CAnimationVariable` objects representing the X and Y coordinates.

## <a name="getdefaultvalue"></a> `CAnimationPoint::GetDefaultValue`

Returns the default values for X and Y coordinates.

```cpp
CPoint GetDefaultValue();
```

### Return Value

A point containing default value.

### Remarks

Call this function to retrieve default value, which was previously set by constructor or `SetDefaultValue`.

## <a name="getvalue"></a> `CAnimationPoint::GetValue`

Returns current value.

```cpp
BOOL GetValue(CPoint& ptValue);
```

### Parameters

*`ptValue`*\
Output. Contains the current value when this method returns.

### Return Value

`TRUE`, if the current value was successfully retrieved; otherwise `FALSE`.

### Remarks

Call this function to retrieve the current value of the animation point. If this method fails or underlying COM objects for X and Y coordinates haven't been initialized, `ptValue` contains the default value previously set in the constructor or by `SetDefaultValue`.

## <a name="getx"></a> `CAnimationPoint::GetX`

Provides access to `CAnimationVariable` for the X coordinate.

```cpp
CAnimationVariable& GetX();
```

### Return Value

A reference to encapsulated `CAnimationVariable` representing X coordinate.

### Remarks

You can call this method to get direct access to underlying `CAnimationVariable` representing X coordinate.

## <a name="gety"></a> `CAnimationPoint::GetY`

Provides access to `CAnimationVariable` for the Y coordinate.

```cpp
CAnimationVariable& GetY();
```

### Return Value

A reference to the encapsulated `CAnimationVariable` representing the Y coordinate.

### Remarks

You can call this method to get direct access to the underlying `CAnimationVariable` representing the Y coordinate.

## <a name="m_xvalue"></a> CAnimationPoint::m_xValue

The encapsulated animation variable that represents the X coordinate of the animation point.

```cpp
CAnimationVariable m_xValue;
```

## <a name="m_yvalue"></a> `CAnimationPoint::m_yValue`

The encapsulated animation variable that represents the Y coordinate of the animation point.

```cpp
CAnimationVariable m_yValue;
```

## <a name="operator_cpoint"></a> `CAnimationPoint::operator CPoint`

Converts a `CAnimationPoint` to a `CPoint`.

```cpp
operator CPoint();
```

### Return Value

Current value of `CAnimationPoint` as `CPoint`.

### Remarks

This function internally calls `GetValue`. If `GetValue` fails, the returned point will contain default values for the X and Y coordinates.

## <a name="operator_eq"></a> `CAnimationPoint::operator=`

Assigns `ptSrc` to `CAnimationPoint`.

```cpp
void operator=(const CPoint& ptSrc);
```

### Parameters

*`ptSrc`*\
Refers to `CPoint` or `POINT`.

### Remarks

Assigns `ptSrc` to `CAnimationPoint`. It's recommended to do that before animation start, because this operator calls `SetDefaultValue`, which recreates the underlying COM objects for the X and Y coordinates if they've been created. If you subscribed this animation object to events (`ValueChanged` or `IntegerValueChanged`), re-enable these events.

## <a name="setdefaultvalue"></a> `CAnimationPoint::SetDefaultValue`

Sets the default value.

```cpp
void SetDefaultValue(const POINT& ptDefault);
```

### Parameters

*`ptDefault`*\
Specifies the default point value.

### Remarks

Use this function to set a default value to animation object. This method assigns default values to X and Y coordinates of animation point. It also recreates underlying COM objects if they've been created. If you subscribed this animation object to events (`ValueChanged` or `IntegerValueChanged`), re-enable these events.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
