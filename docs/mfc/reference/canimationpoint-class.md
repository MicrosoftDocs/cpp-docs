---
description: "Learn more about: CAnimationPoint Class"
title: "CAnimationPoint Class"
ms.date: "11/04/2016"
f1_keywords: ["CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint::CAnimationPoint", "AFXANIMATIONCONTROLLER/CAnimationPoint::AddTransition", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetX", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetY", "AFXANIMATIONCONTROLLER/CAnimationPoint::SetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::GetAnimationVariableList", "AFXANIMATIONCONTROLLER/CAnimationPoint::m_xValue", "AFXANIMATIONCONTROLLER/CAnimationPoint::m_yValue"]
helpviewer_keywords: ["CAnimationPoint [MFC], CAnimationPoint", "CAnimationPoint [MFC], AddTransition", "CAnimationPoint [MFC], GetDefaultValue", "CAnimationPoint [MFC], GetValue", "CAnimationPoint [MFC], GetX", "CAnimationPoint [MFC], GetY", "CAnimationPoint [MFC], SetDefaultValue", "CAnimationPoint [MFC], GetAnimationVariableList", "CAnimationPoint [MFC], m_xValue", "CAnimationPoint [MFC], m_yValue"]
ms.assetid: 5dc4d46f-e695-4681-b15c-544b78b3e317
---
# CAnimationPoint Class

Implements the functionality of a point whose coordinates can be animated.

## Syntax

```
class CAnimationPoint : public CAnimationBaseObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationPoint::CAnimationPoint](#canimationpoint)|Overloaded. Constructs CAnimationPoint object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationPoint::AddTransition](#addtransition)|Adds transitions for X and Y coordinates.|
|[CAnimationPoint::GetDefaultValue](#getdefaultvalue)|Returns the default values for X and Y coordinates.|
|[CAnimationPoint::GetValue](#getvalue)|Returns current value.|
|[CAnimationPoint::GetX](#getx)|Provides access to CAnimationVariable for X coordinate.|
|[CAnimationPoint::GetY](#gety)|Provides access to CAnimationVariable for Y coordinate.|
|[CAnimationPoint::SetDefaultValue](#setdefaultvalue)|Sets default value.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationPoint::GetAnimationVariableList](#getanimationvariablelist)|Puts the encapsulated animation variables into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAnimationPoint::operator CPoint](#operator_cpoint)|Converts a CAnimationPoint to a CPoint.|
|[CAnimationPoint::operator=](#operator_eq)|Assigns ptSrc to CAnimationPoint.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationPoint::m_xValue](#m_xvalue)|The encapsulated animation variable that represents X coordinate of animation point.|
|[CAnimationPoint::m_yValue](#m_yvalue)|The encapsulated animation variable that represents Y coordinate of animation point.|

## Remarks

The CAnimationPoint class encapsulates two CAnimationVariable objects and can represent in applications a point. For example, you can use this class to animate a position of any object on the screen (like text string, circle, point etc). To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to X and/or Y coordinates.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationPoint`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="addtransition"></a> CAnimationPoint::AddTransition

Adds transitions for X and Y coordinates.

```cpp
void AddTransition(
    CBaseTransition* pXTransition,
    CBaseTransition* pYTransition);
```

### Parameters

*pXTransition*<br/>
A pointer to transition for X coordinates.

*pYTransition*<br/>
A pointer to transition for Y coordinate.

### Remarks

Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables for X and Y coordinates. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. If you don't need to apply a transition to one of coordinates, you can pass NULL.

## <a name="canimationpoint"></a> CAnimationPoint::CAnimationPoint

Constructs CAnimationPoint object.

```
CAnimationPoint();

CAnimationPoint(
    const CPoint& ptDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### Parameters

*ptDefault*<br/>
Specifies default point coordinates.

*nGroupID*<br/>
Specifies Group ID.

*nObjectID*<br/>
Specifies Object ID.

*dwUserData*<br/>
Specifies user-defined data.

### Remarks

Constructs CAnimationPoint object with default properties: default point coordinates, Group ID and Object ID are set to 0.

## <a name="getanimationvariablelist"></a> CAnimationPoint::GetAnimationVariableList

Puts the encapsulated animation variables into a list.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```

### Parameters

*lst*<br/>
When the function returns, it contains pointers to two CAnimationVariable objects representing the X and Y coordinates.

## <a name="getdefaultvalue"></a> CAnimationPoint::GetDefaultValue

Returns the default values for X and Y coordinates.

```
CPoint GetDefaultValue();
```

### Return Value

A point containing default value.

### Remarks

Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="getvalue"></a> CAnimationPoint::GetValue

Returns current value.

```
BOOL GetValue(CPoint& ptValue);
```

### Parameters

*ptValue*<br/>
Output. Contains the current value when this method returns.

### Return Value

TRUE, if the current value was successfully retrieved; otherwise FALSE.

### Remarks

Call this function to retrieve the current value of animation point. If this method fails or underlying COM objects for X and Y coordinates have not been initialized, ptValue contains default value, which was previously set in constructor or by SetDefaultValue.

## <a name="getx"></a> CAnimationPoint::GetX

Provides access to CAnimationVariable for X coordinate.

```
CAnimationVariable& GetX();
```

### Return Value

A reference to encapsulated CAnimationVariable representing X coordinate.

### Remarks

You can call this method to get direct access to underlying CAnimationVariable representing X coordinate.

## <a name="gety"></a> CAnimationPoint::GetY

Provides access to CAnimationVariable for Y coordinate.

```
CAnimationVariable& GetY();
```

### Return Value

A reference to encapsulated CAnimationVariable representing Y coordinate.

### Remarks

You can call this method to get direct access to underlying CAnimationVariable representing Y coordinate.

## <a name="m_xvalue"></a> CAnimationPoint::m_xValue

The encapsulated animation variable that represents X coordinate of animation point.

```
CAnimationVariable m_xValue;
```

## <a name="m_yvalue"></a> CAnimationPoint::m_yValue

The encapsulated animation variable that represents Y coordinate of animation point.

```
CAnimationVariable m_yValue;
```

## <a name="operator_cpoint"></a> CAnimationPoint::operator CPoint

Converts a CAnimationPoint to a CPoint.

```
operator CPoint();
```

### Return Value

Current value of CAnimationPoint as CPoint.

### Remarks

This function internally calls GetValue. If GetValue for some reason fails, the returned point will contain default values for X and Y coordinates.

## <a name="operator_eq"></a> CAnimationPoint::operator=

Assigns ptSrc to CAnimationPoint.

```cpp
void operator=(const CPoint& ptSrc);
```

### Parameters

*ptSrc*<br/>
Refers to CPoint or POINT.

### Remarks

Assigns ptSrc to CAnimationPoint. It's recommended to do that before animation start, because this operator calls SetDefaultValue, which recreates the underlying COM objects for X and Y coordinates if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.

## <a name="setdefaultvalue"></a> CAnimationPoint::SetDefaultValue

Sets default value.

```cpp
void SetDefaultValue(const POINT& ptDefault);
```

### Parameters

*ptDefault*<br/>
Specifies the default point value.

### Remarks

Use this function to set a default value to animation object. This methods assigns default values to X and Y coordinates of animation point. It also recreates underlying COM objects if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
