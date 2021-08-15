---
description: "Learn more about: CAnimationSize Class"
title: "CAnimationSize Class"
ms.date: "11/04/2016"
f1_keywords: ["CAnimationSize", "AFXANIMATIONCONTROLLER/CAnimationSize", "AFXANIMATIONCONTROLLER/CAnimationSize::CAnimationSize", "AFXANIMATIONCONTROLLER/CAnimationSize::AddTransition", "AFXANIMATIONCONTROLLER/CAnimationSize::GetCX", "AFXANIMATIONCONTROLLER/CAnimationSize::GetCY", "AFXANIMATIONCONTROLLER/CAnimationSize::GetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationSize::GetValue", "AFXANIMATIONCONTROLLER/CAnimationSize::SetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationSize::GetAnimationVariableList", "AFXANIMATIONCONTROLLER/CAnimationSize::m_cxValue", "AFXANIMATIONCONTROLLER/CAnimationSize::m_cyValue"]
helpviewer_keywords: ["CAnimationSize [MFC], CAnimationSize", "CAnimationSize [MFC], AddTransition", "CAnimationSize [MFC], GetCX", "CAnimationSize [MFC], GetCY", "CAnimationSize [MFC], GetDefaultValue", "CAnimationSize [MFC], GetValue", "CAnimationSize [MFC], SetDefaultValue", "CAnimationSize [MFC], GetAnimationVariableList", "CAnimationSize [MFC], m_cxValue", "CAnimationSize [MFC], m_cyValue"]
ms.assetid: ea06d1b5-502c-44a3-82ca-8bd6ba6a9364
---
# CAnimationSize Class

Implements the functionality of a size object whose dimensions can be animated.

## Syntax

```
class CAnimationSize : public CAnimationBaseObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationSize::CAnimationSize](#canimationsize)|Overloaded. Constructs an animation size object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationSize::AddTransition](#addtransition)|Adds transitions for Width and Height.|
|[CAnimationSize::GetCX](#getcx)|Provides access to CAnimationVariable representing Width.|
|[CAnimationSize::GetCY](#getcy)|Provides access to CAnimationVariable representing Height.|
|[CAnimationSize::GetDefaultValue](#getdefaultvalue)|Returns the default values for Width and Height.|
|[CAnimationSize::GetValue](#getvalue)|Returns current value.|
|[CAnimationSize::SetDefaultValue](#setdefaultvalue)|Sets default value.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationSize::GetAnimationVariableList](#getanimationvariablelist)|Puts the encapsulated animation variables into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAnimationSize::operator CSize](#operator_csize)|Converts a CAnimationSize to a CSize.|
|[CAnimationSize::operator=](#operator_eq)|Assigns szSrc to CAnimationSize.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationSize::m_cxValue](#m_cxvalue)|The encapsulated animation variable that represents width of animation size.|
|[CAnimationSize::m_cyValue](#m_cyvalue)|The encapsulated animation variable that represents height of animation size.|

## Remarks

The CAnimationSize class encapsulates two CAnimationVariable objects and can represent in applications a size. For example, you can use this class to animate a size of any two dimensional object on the screen (like rectangle, control etc). To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to Width and/or Height.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationSize`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="addtransition"></a> CAnimationSize::AddTransition

Adds transitions for Width and Height.

```cpp
void AddTransition(
    CBaseTransition* pCXTransition,
    CBaseTransition* pCYTransition);
```

### Parameters

*pCXTransition*<br/>
A pointer to transition for Width.

*pCYTransition*<br/>
A pointer to transition for Height.

### Remarks

Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables for Width and Height. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. If you don't need to apply a transition to one of dimensions, you can pass NULL.

## <a name="canimationsize"></a> CAnimationSize::CAnimationSize

Constructs an animation size object.

```
CAnimationSize();

CAnimationSize(
    const CSize& szDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### Parameters

*szDefault*<br/>
Specifies default size.

*nGroupID*<br/>
Specifies Group ID.

*nObjectID*<br/>
Specifies Object ID.

*dwUserData*<br/>
Specifies user-defined data.

### Remarks

The object is constructed with default values for width, height, Object ID and Group ID, which will be set to 0. They can be changed later at runtime using SetDefaultValue and SetID.

## <a name="getanimationvariablelist"></a> CAnimationSize::GetAnimationVariableList

Puts the encapsulated animation variables into a list.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### Parameters

*lst*<br/>
When the function returns, it contains pointers to two CAnimationVariable objects representing the width and height.

## <a name="getcx"></a> CAnimationSize::GetCX

Provides access to CAnimationVariable representing Width.

```
CAnimationVariable& GetCX();
```

### Return Value

A reference to encapsulated CAnimationVariable representing Width.

### Remarks

You can call this method to get direct access to underlying CAnimationVariable representing Width.

## <a name="getcy"></a> CAnimationSize::GetCY

Provides access to CAnimationVariable representing Height.

```
CAnimationVariable& GetCY();
```

### Return Value

A reference to encapsulated CAnimationVariable representing Height.

### Remarks

You can call this method to get direct access to underlying CAnimationVariable representing Height.

## <a name="getdefaultvalue"></a> CAnimationSize::GetDefaultValue

Returns the default values for Width and Height.

```
CSize GetDefaultValue();
```

### Return Value

A CSize object containing default values.

### Remarks

Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="getvalue"></a> CAnimationSize::GetValue

Returns current value.

```
BOOL GetValue(CSize& szValue);
```

### Parameters

*szValue*<br/>
Output. Contains the current value when this method returns.

### Return Value

TRUE, if the current value was successfully retrieved; otherwise FALSE.

### Remarks

Call this function to retrieve the current value of animation size. If this method fails or underlying COM objects for Width and Size have not been initialized, szValue contains default value, which was previously set in constructor or by SetDefaultValue.

## <a name="m_cxvalue"></a> CAnimationSize::m_cxValue

The encapsulated animation variable that represents width of animation size.

```
CAnimationVariable m_cxValue;
```

## <a name="m_cyvalue"></a> CAnimationSize::m_cyValue

The encapsulated animation variable that represents height of animation size.

```
CAnimationVariable m_cyValue;
```

## <a name="operator_csize"></a> CAnimationSize::operator CSize

Converts a CAnimationSize to a CSize.

```
operator CSize();
```

### Return Value

Current value of animation size as CSize.

### Remarks

This function internally calls GetValue. If GetValue for some reason fails, the returned size will contain default values for Width and Height.

## <a name="operator_eq"></a> CAnimationSize::operator=

Assigns szSrc to CAnimationSize.

```cpp
void operator=(const CSize& szSrc);
```

### Parameters

*szSrc*<br/>
Refers to CSize or SIZE.

### Remarks

Assigns szSrc to CAnimationSize. It's recommended to do that before animation start, because this operator calls SetDefaultValue, which recreates the underlying COM objects for Width and Height if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.

## <a name="setdefaultvalue"></a> CAnimationSize::SetDefaultValue

Sets default value.

```cpp
void SetDefaultValue(const CSize& szDefault);
```

### Parameters

*szDefault*<br/>
Specifies new default size.

### Remarks

Use this function to set a default value to animation object. This methods assigns default values to Width and Height of animation size. It also recreates underlying COM objects if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
