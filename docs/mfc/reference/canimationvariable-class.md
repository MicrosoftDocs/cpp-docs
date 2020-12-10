---
description: "Learn more about: CAnimationVariable Class"
title: "CAnimationVariable Class"
ms.date: "03/27/2019"
f1_keywords: ["CAnimationVariable", "AFXANIMATIONCONTROLLER/CAnimationVariable", "AFXANIMATIONCONTROLLER/CAnimationVariable::CAnimationVariable", "AFXANIMATIONCONTROLLER/CAnimationVariable::AddTransition", "AFXANIMATIONCONTROLLER/CAnimationVariable::ApplyTransitions", "AFXANIMATIONCONTROLLER/CAnimationVariable::ClearTransitions", "AFXANIMATIONCONTROLLER/CAnimationVariable::Create", "AFXANIMATIONCONTROLLER/CAnimationVariable::CreateTransitions", "AFXANIMATIONCONTROLLER/CAnimationVariable::EnableIntegerValueChangedEvent", "AFXANIMATIONCONTROLLER/CAnimationVariable::EnableValueChangedEvent", "AFXANIMATIONCONTROLLER/CAnimationVariable::GetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationVariable::GetParentAnimationObject", "AFXANIMATIONCONTROLLER/CAnimationVariable::GetValue", "AFXANIMATIONCONTROLLER/CAnimationVariable::GetVariable", "AFXANIMATIONCONTROLLER/CAnimationVariable::SetDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationVariable::SetParentAnimationObject", "AFXANIMATIONCONTROLLER/CAnimationVariable::m_bAutodestroyTransitions", "AFXANIMATIONCONTROLLER/CAnimationVariable::m_dblDefaultValue", "AFXANIMATIONCONTROLLER/CAnimationVariable::m_lstTransitions", "AFXANIMATIONCONTROLLER/CAnimationVariable::m_pParentObject", "AFXANIMATIONCONTROLLER/CAnimationVariable::m_variable"]
helpviewer_keywords: ["CAnimationVariable [MFC], CAnimationVariable", "CAnimationVariable [MFC], AddTransition", "CAnimationVariable [MFC], ApplyTransitions", "CAnimationVariable [MFC], ClearTransitions", "CAnimationVariable [MFC], Create", "CAnimationVariable [MFC], CreateTransitions", "CAnimationVariable [MFC], EnableIntegerValueChangedEvent", "CAnimationVariable [MFC], EnableValueChangedEvent", "CAnimationVariable [MFC], GetDefaultValue", "CAnimationVariable [MFC], GetParentAnimationObject", "CAnimationVariable [MFC], GetValue", "CAnimationVariable [MFC], GetVariable", "CAnimationVariable [MFC], SetDefaultValue", "CAnimationVariable [MFC], SetParentAnimationObject", "CAnimationVariable [MFC], m_bAutodestroyTransitions", "CAnimationVariable [MFC], m_dblDefaultValue", "CAnimationVariable [MFC], m_lstTransitions", "CAnimationVariable [MFC], m_pParentObject", "CAnimationVariable [MFC], m_variable"]
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
---
# CAnimationVariable Class

Represents an animation variable.

## Syntax

```
class CAnimationVariable;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationVariable::CAnimationVariable](#canimationvariable)|Constructs an animation variable object.|
|[CAnimationVariable::~CAnimationVariable](#_dtorcanimationvariable)|The destructor. Called when a CAnimationVariable object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationVariable::AddTransition](#addtransition)|Adds a transition.|
|[CAnimationVariable::ApplyTransitions](#applytransitions)|Adds transitions from the internal list to storyboard.|
|[CAnimationVariable::ClearTransitions](#cleartransitions)|Clears transitions.|
|[CAnimationVariable::Create](#create)|Creates the underlying animation variable COM object.|
|[CAnimationVariable::CreateTransitions](#createtransitions)|Creates all transitions to be applied to this animation variable.|
|[CAnimationVariable::EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Enables or disables the IntegerValueChanged event.|
|[CAnimationVariable::EnableValueChangedEvent](#enablevaluechangedevent)|Enables or disables the ValueChanged event.|
|[CAnimationVariable::GetDefaultValue](#getdefaultvalue)|Returns default value.|
|[CAnimationVariable::GetParentAnimationObject](#getparentanimationobject)|Returns the parent animation object.|
|[CAnimationVariable::GetValue](#getvalue)|Overloaded. Returns the current value of animation variable.|
|[CAnimationVariable::GetVariable](#getvariable)|Returns a pointer to IUIAnimationVariable COM object.|
|[CAnimationVariable::SetDefaultValue](#setdefaultvalue)|Sets default value and releases IUIAnimationVariable COM object.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationVariable::SetParentAnimationObject](#setparentanimationobject)|Sets the relationship between an animation variable and an animation object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationVariable::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifies whether related transition objects should be deleted.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifies the default value, which is propagated to IUIAnimationVariable.|
|[CAnimationVariable::m_lstTransitions](#m_lsttransitions)|Contains a list of transitions that animate this animation variable.|
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|A pointer to an animation object that encapsulates this animation variable.|
|[CAnimationVariable::m_variable](#m_variable)|Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.|

## Remarks

The CAnimationVariable class encapsulates IUIAnimationVariable COM object. It also holds a list of transitions to be applied to the animation variable in a storyboard. CAnimationVariable objects are embedded to animation objects, which can represent in an application an animated value, point, size, color and rectangle.

## Inheritance Hierarchy

`CAnimationVariable`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="_dtorcanimationvariable"></a> CAnimationVariable::~CAnimationVariable

The destructor. Called when a CAnimationVariable object is being destroyed.

```
virtual ~CAnimationVariable();
```

## <a name="addtransition"></a> CAnimationVariable::AddTransition

Adds a transition.

```cpp
void AddTransition(CBaseTransition* pTransition);
```

### Parameters

*pTransition*<br/>
A pointer to a transition to add.

### Remarks

This method is called to add a transition to the internal list of transitions to be applied to the animation variable. This list should be cleared when an animation has been scheduled.

## <a name="applytransitions"></a> CAnimationVariable::ApplyTransitions

Adds transitions from the internal list to storyboard.

```cpp
void ApplyTransitions(
    CAnimationController* pController,
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### Parameters

*pController*<br/>
A pointer to parent animation controller.

*pStoryboard*<br/>
A pointer to storyboard.

*bDependOnKeyframes*<br/>
TRUE, if this method should add transitions that depend on keyframes.

### Remarks

This method adds transitions from the internal list to storyboard. It's called from the top level code several times to add transitions that do not depend on keyframes and add transitions that depend on keyframes. If the underlying animation variable COM object has not been created, this method creates it at this stage.

## <a name="canimationvariable"></a> CAnimationVariable::CAnimationVariable

Constructs an animation variable object.

```
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```

### Parameters

*dblDefaultValue*<br/>
Specifies the default value.

### Remarks

Constructs an animation variable object and sets its default value. A default value is used when a variable is not animated, or can't be animated.

## <a name="cleartransitions"></a> CAnimationVariable::ClearTransitions

Clears transitions.

```cpp
void ClearTransitions(BOOL bAutodestroy);
```

### Parameters

*bAutodestroy*<br/>
Specifies whether this method should delete transition objects.

### Remarks

This method removes all transitions from the internal list of transitions. If bAutodestroy is TRUE, or m_bAutodestroyTransitions is TRUE, then transitions are deleted. Otherwise the caller should deallocate the transition objects.

## <a name="create"></a> CAnimationVariable::Create

Creates the underlying animation variable COM object.

```
virtual BOOL Create(IUIAnimationManager* pManager);
```

### Parameters

*pManager*<br/>
A pointer to animation manager.

### Return Value

TRUE if the animation variable was successfully created; otherwise FALSE.

### Remarks

This method creates the underlying animation variable COM object and sets its default value.

## <a name="createtransitions"></a> CAnimationVariable::CreateTransitions

Creates all transitions to be applied to this animation variable.

```
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### Parameters

*pLibrary*<br/>
A pointer to an [IUIAnimationTransitionLibrary interface](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), which defines a library of standard transitions.

### Return Value

TRUE if transitions were created successfully; otherwise FALSE.

### Remarks

This method is called by the framework when it needs to create transitions that have been added to the variable's internal list of transitions.

## <a name="enableintegervaluechangedevent"></a> CAnimationVariable::EnableIntegerValueChangedEvent

Enables or disables the IntegerValueChanged event.

```cpp
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,
    BOOL bEnable);
```

### Parameters

*pController*<br/>
A pointer to parent controller.

*bEnable*<br/>
TRUE - enable event, FALSE - disable event.

### Remarks

When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationIntegerValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the integer value of animation variable is changed.

## <a name="enablevaluechangedevent"></a> CAnimationVariable::EnableValueChangedEvent

Enables or disables the ValueChanged event.

```cpp
void EnableValueChangedEvent (
    CAnimationController* pController,
    BOOL bEnable);
```

### Parameters

*pController*<br/>
A pointer to parent controller.

*bEnable*<br/>
TRUE - enable event, FALSE - disable event.

### Remarks

When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the value of animation variable is changed.

## <a name="getdefaultvalue"></a> CAnimationVariable::GetDefaultValue

Returns default value.

```
DOUBLE GetDefaultValue() const;
```

### Return Value

The default value.

### Remarks

Use this function to obtain default value of animation variable. The default value can be set in constructor or by SetDefaultValue method.

## <a name="getparentanimationobject"></a> CAnimationVariable::GetParentAnimationObject

Returns the parent animation object.

```
CAnimationBaseObject* GetParentAnimationObject();
```

### Return Value

A pointer to parent animation object, if relationship was established, otherwise NULL.

### Remarks

This method can be called to retrieve a pointer to a parent animation object (a container).

## <a name="getvalue"></a> CAnimationVariable::GetValue

Returns the current value of animation variable.

```
HRESULT GetValue(DOUBLE& dblValue);
HRESULT GetValue(INT32& nValue);
```

### Parameters

*dblValue*<br/>
The current value of the animation variable.

*nValue*<br/>
The current value of the animation variable.

### Return Value

S_OK if the value was obtained successfully, or underlying animation variable has not been created. Otherwise HRESULT error code.

### Remarks

This method can be called to retrieve the current value of animation variable. If the underlying COM object has not been created, dblValue will contain a default value, when the function returns.

## <a name="getvariable"></a> CAnimationVariable::GetVariable

Returns a pointer to IUIAnimationVariable COM object.

```
IUIAnimationVariable* GetVariable();
```

### Return Value

A valid pointer to IUIAnimationVariable COM object, or NULL if animation variable was not created, or can't be created.

### Remarks

Use this function to access the underlying IUIAnimationVariable COM object and call its methods directly if needed.

## <a name="m_bautodestroytransitions"></a> CAnimationVariable::m_bAutodestroyTransitions

Specifies whether related transition objects should be deleted.

```
BOOL m_bAutodestroyTransitions;
```

### Remarks

Set this value to TRUE to force deletion of transition objects when they are being removed from the internal list of transitions. If this value is FALSE the transitions should be deleted by calling application. The list of transitions is always cleared after an animation has been scheduled. The default value is FALSE.

## <a name="m_dbldefaultvalue"></a> CAnimationVariable::m_dblDefaultValue

Specifies the default value, which is propagated to IUIAnimationVariable.

```
DOUBLE m_dblDefaultValue;
```

## <a name="m_lsttransitions"></a> CAnimationVariable::m_lstTransitions

Contains a list of transitions that animate this animation variable.

```
CObList m_lstTransitions;
```

## <a name="m_pparentobject"></a> CAnimationVariable::m_pParentObject

A pointer to an animation object that encapsulates this animation variable.

```
CAnimationBaseObject* m_pParentObject;
```

## <a name="m_variable"></a> CAnimationVariable::m_variable

Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.

```
ATL::CComPtr<IUIAnimationVariable> m_variable;
```

## <a name="setdefaultvalue"></a> CAnimationVariable::SetDefaultValue

Sets default value and releases IUIAnimationVariable COM object.

```cpp
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### Parameters

*dblDefaultValue*<br/>
Specifies the new default value.

### Remarks

Use this method to reset the default value. This method releases the internal IUIAnimationVariable COM object, therefore when animation variable is recreated, the underlying COM object gets the new default value. The default value is returned by GetValue if the COM object representing the animation variable is not created, or if the variable has not been animated.

## <a name="setparentanimationobject"></a> CAnimationVariable::SetParentAnimationObject

Sets the relationship between an animation variable and an animation object.

```cpp
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```

### Parameters

*pParentObject*<br/>
A pointer to an animation object that contains this variable.

### Remarks

This method is called internally to establish one-to-one relationship between an animation variable and an animation object that encapsulates it.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
