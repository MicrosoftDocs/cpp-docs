---
description: "Learn more about: CAnimationValue Class"
title: "CAnimationValue Class"
ms.date: "11/04/2016"
f1_keywords: ["CAnimationValue", "AFXANIMATIONCONTROLLER/CAnimationValue", "AFXANIMATIONCONTROLLER/CAnimationValue::CAnimationValue", "AFXANIMATIONCONTROLLER/CAnimationValue::AddTransition", "AFXANIMATIONCONTROLLER/CAnimationValue::GetValue", "AFXANIMATIONCONTROLLER/CAnimationValue::GetVariable", "AFXANIMATIONCONTROLLER/CAnimationValue::SetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationValue::GetAnimationVariableList", "AFXANIMATIONCONTROLLER/CAnimationValue::m_value"]
helpviewer_keywords: ["CAnimationValue [MFC], CAnimationValue", "CAnimationValue [MFC], AddTransition", "CAnimationValue [MFC], GetValue", "CAnimationValue [MFC], GetVariable", "CAnimationValue [MFC], SetDefaultValue", "CAnimationValue [MFC], GetAnimationVariableList", "CAnimationValue [MFC], m_value"]
ms.assetid: 78c5ae19-ede5-4f20-bfbe-68b467b603c2
---
# CAnimationValue Class

Implements the functionality of animation object that has one value.

## Syntax

```
class CAnimationValue : public CAnimationBaseObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationValue::CAnimationValue](#canimationvalue)|Overloaded. Constructs a CAnimationValue object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationValue::AddTransition](#addtransition)|Adds a transition to be applied to a value.|
|[CAnimationValue::GetValue](#getvalue)|Overloaded. Retrieves the current value.|
|[CAnimationValue::GetVariable](#getvariable)|Provides access to encapsulated animation variable.|
|[CAnimationValue::SetDefaultValue](#setdefaultvalue)|Sets default value.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationValue::GetAnimationVariableList](#getanimationvariablelist)|Puts the encapsulated animation variable into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAnimationValue::operator DOUBLE](#operator_double)|Provides conversion between CAnimationValue and DOUBLE.|
|[CAnimationValue::operator INT32](#operator_int32)|Provides conversion between CAnimationValue and INT32.|
|[CAnimationValue::operator=](#operator_eq)|Overloaded. Assigns an INT32 value to CAnimationValue.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationValue::m_value](#m_value)|The encapsulated animation variable that represents animation value.|

## Remarks

The CAnimationValue class encapsulates a single CAnimationVariable object and can represent in applications a single animated value. For example, you can use this class for animated transparency (fade effect), angle (to rotate objects), or for any other case when you need to create an animation depending on a single animated value. To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to the value.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationValue`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="addtransition"></a> CAnimationValue::AddTransition

Adds a transition to be applied to a value.

```cpp
void AddTransition(CBaseTransition* pTransition);
```

### Parameters

*pTransition*<br/>
A pointer to transition object.

### Remarks

Call this function to add a transition to internal list of transitions to be applied to an animation variable. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup.

## <a name="canimationvalue"></a> CAnimationValue::CAnimationValue

Constructs a CAnimationValue object.

```
CAnimationValue();

CAnimationValue(
    DOUBLE dblDefaultValue,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### Parameters

*dblDefaultValue*<br/>
Specifies default value.

*nGroupID*<br/>
Specifies Group ID.

*nObjectID*<br/>
Specifies Object ID.

*dwUserData*<br/>
specifies user-defined data.

### Remarks

Constructs CAnimationValue object with default properties: default value, Group ID and Object ID are set to 0.

## <a name="getanimationvariablelist"></a> CAnimationValue::GetAnimationVariableList

Puts the encapsulated animation variable into a list.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### Parameters

*lst*<br/>
When the function returns, it contains a pointer to CAnimationVariable representing the animated value.

## <a name="getvalue"></a> CAnimationValue::GetValue

Retrieves the current value.

```
BOOL GetValue(DOUBLE& dblValue);
BOOL GetValue(INT32& nValue);
```

### Parameters

*dblValue*<br/>
Output. When the function returns it contains a current value of animation variable.

*nValue*<br/>
Output. When the function returns it contains a current value of animation variable.

### Return Value

TRUE if the current value was retrieved successfully; otherwise FALSE.

### Remarks

Call this function to retrieve the current value. This implementation calls the encapsulated COM object, and if the call fails, this method returns the default value that was previously set in constructor or with SetDefaultValue.

## <a name="getvariable"></a> CAnimationValue::GetVariable

Provides access to encapsulated animation variable.

```
CAnimationVariable& GetVariable();
```

### Return Value

A reference to encapsulated animation variable.

### Remarks

Use this method to access the encapsulated animation variable. From CAnimationVariable you get access to underlying IUIAnimationVariable object, whose pointer can be NULL if animation variable has not been created.

## <a name="m_value"></a> CAnimationValue::m_value

The encapsulated animation variable that represents animation value.

```
CAnimationVariable m_value;
```

## <a name="operator_double"></a> CAnimationValue::operator DOUBLE

Provides conversion between CAnimationValue and DOUBLE.

```
operator DOUBLE();
```

### Return Value

Current value of Animation Value.

### Remarks

Provides conversion between CAnimationValue and DOUBLE. This method internally calls GetValue and doesn't check for errors. If GetValue fails, the returned value will contain a default value previously set in constructor or with SetDefaultValue.

## <a name="operator_int32"></a> CAnimationValue::operator INT32

Provides conversion between CAnimationValue and INT32.

```
operator INT32();
```

### Return Value

Current value of Animation Value as integer.

### Remarks

Provides conversion between CAnimationValue and INT32. This method internally calls GetValue and doesn't check for errors. If GetValue fails, the returned value will contain a default value previously set in constructor or with SetDefaultValue.

## <a name="operator_eq"></a> CAnimationValue::operator=

Assigns a DOUBLE value to CAnimationValue.

```cpp
void operator=(DOUBLE dblVal);
void operator=(INT32 nVal);
```

### Parameters

*dblVal*<br/>
Specifies the value to be assigned to Animation Value.

*nVal*<br/>
Specifies the value to be assigned to Animation Value.

### Remarks

Assigns a DOUBLE value to CAnimationValue. This value is set as a default value for encapsulated animation variable. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.

## <a name="setdefaultvalue"></a> CAnimationValue::SetDefaultValue

Sets default value.

```cpp
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### Parameters

*dblDefaultValue*<br/>
Specifies the default value.

### Remarks

Use this method to set a default value. A default value is returned to application when animation has not been started and/or underlying COM object has not been created. If the underlying COM object encapsulated in CAnimationVarible was already created, this method recreates it, therefore you might need to call EnableValueChanged/EnableIntegerValueChanged methods again.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
