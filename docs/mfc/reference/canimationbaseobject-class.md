---
description: "Learn more about: CAnimationBaseObject Class"
title: "CAnimationBaseObject Class"
ms.date: "03/27/2019"
f1_keywords: ["CAnimationBaseObject", "AFXANIMATIONCONTROLLER/CAnimationBaseObject", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::CAnimationBaseObject", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::ApplyTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::ClearTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::ContainsVariable", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::CreateTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::DetachFromController", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::EnableIntegerValueChangedEvent", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::EnableValueChangedEvent", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetAutodestroyTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetGroupID", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetObjectID", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetUserData", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetAutodestroyTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetID", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetUserData", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetAnimationVariableList", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetParentAnimationObjects", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_bAutodestroyTransitions", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_dwUserData", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_nGroupID", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_nObjectID", "AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_pParentController"]
helpviewer_keywords: ["CAnimationBaseObject [MFC], CAnimationBaseObject", "CAnimationBaseObject [MFC], ApplyTransitions", "CAnimationBaseObject [MFC], ClearTransitions", "CAnimationBaseObject [MFC], ContainsVariable", "CAnimationBaseObject [MFC], CreateTransitions", "CAnimationBaseObject [MFC], DetachFromController", "CAnimationBaseObject [MFC], EnableIntegerValueChangedEvent", "CAnimationBaseObject [MFC], EnableValueChangedEvent", "CAnimationBaseObject [MFC], GetAutodestroyTransitions", "CAnimationBaseObject [MFC], GetGroupID", "CAnimationBaseObject [MFC], GetObjectID", "CAnimationBaseObject [MFC], GetUserData", "CAnimationBaseObject [MFC], SetAutodestroyTransitions", "CAnimationBaseObject [MFC], SetID", "CAnimationBaseObject [MFC], SetUserData", "CAnimationBaseObject [MFC], GetAnimationVariableList", "CAnimationBaseObject [MFC], SetParentAnimationObjects", "CAnimationBaseObject [MFC], m_bAutodestroyTransitions", "CAnimationBaseObject [MFC], m_dwUserData", "CAnimationBaseObject [MFC], m_nGroupID", "CAnimationBaseObject [MFC], m_nObjectID", "CAnimationBaseObject [MFC], m_pParentController"]
ms.assetid: 76b25917-940e-4eba-940f-31d270702603
---
# CAnimationBaseObject Class

The base class for all animation objects.

## Syntax

```
class CAnimationBaseObject : public CObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationBaseObject::CAnimationBaseObject](#canimationbaseobject)|Overloaded. Constructs an animation object.|
|[CAnimationBaseObject::~CAnimationBaseObject](#_dtorcanimationbaseobject)|The destructor. Called when an animation object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationBaseObject::ApplyTransitions](#applytransitions)|Adds transitions to storyboard with encapsulated animation variable.|
|[CAnimationBaseObject::ClearTransitions](#cleartransitions)|Removes all related transitions.|
|[CAnimationBaseObject::ContainsVariable](#containsvariable)|Determines whether an animation object contains a particular animation variable.|
|[CAnimationBaseObject::CreateTransitions](#createtransitions)|Creates transitions associated with an animation object.|
|[CAnimationBaseObject::DetachFromController](#detachfromcontroller)|Detaches an animation object from parent animation controller.|
|[CAnimationBaseObject::EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Sets up Integer Value Changed event handler.|
|[CAnimationBaseObject::EnableValueChangedEvent](#enablevaluechangedevent)|Sets up Value Changed event handler.|
|[CAnimationBaseObject::GetAutodestroyTransitions](#getautodestroytransitions)|Tells whether related transition are destroyed automatically.|
|[CAnimationBaseObject::GetGroupID](#getgroupid)|Returns current Group ID.|
|[CAnimationBaseObject::GetObjectID](#getobjectid)|Returns current Object ID.|
|[CAnimationBaseObject::GetUserData](#getuserdata)|Returns user-defined data.|
|[CAnimationBaseObject::SetAutodestroyTransitions](#setautodestroytransitions)|Sets a flag to automatically destroy transitions.|
|[CAnimationBaseObject::SetID](#setid)|Sets new IDs.|
|[CAnimationBaseObject::SetUserData](#setuserdata)|Sets user-defined data.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationBaseObject::GetAnimationVariableList](#getanimationvariablelist)|Collects pointers to contained animation variables.|
|[CAnimationBaseObject::SetParentAnimationObjects](#setparentanimationobjects)|Establishes relationship between animation variables, contained in an animation object, and their container.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationBaseObject::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifies whether related transitions should be automatically destroyed.|
|[CAnimationBaseObject::m_dwUserData](#m_dwuserdata)|Stores user-defined data.|
|[CAnimationBaseObject::m_nGroupID](#m_ngroupid)|Specifies the Group ID of the animation object.|
|[CAnimationBaseObject::m_nObjectID](#m_nobjectid)|Specifies the Object ID of the animation object.|
|[CAnimationBaseObject::m_pParentController](#m_pparentcontroller)|A pointer to the parent animation controller.|

## Remarks

This class implements basic methods for all animation objects. An animation object can represent a value, point, size, rectangle, or color in an application, as well as any custom entity. Animation objects are stored in animation groups (see CAnimationGroup). Each group can be animated separately and can be treated as an analog of storyboard. An animation object encapsulates one or more animation variables (see CAnimationVariable), depending on its logical representation. For example, CAnimationRect contains four animation variables - one variable for each side of rectangle. Each animation object class exposes overloaded AddTransition method, which should be used to apply transitions to encapsulated animation variables. An animation object can be identified by Object ID (optionally) and by Group ID. A Group ID is necessary in order to place an animation object to correct group, but if a Group ID is not specified, an object is placed in the default group with ID 0. If you call SetID with different GroupID, an animation object will be moved to another group (a new group is created if necessary).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CAnimationBaseObject`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="_dtorcanimationbaseobject"></a> CAnimationBaseObject::~CAnimationBaseObject

The destructor. Called when an animation object is being destroyed.

```
virtual ~CAnimationBaseObject();
```

## <a name="applytransitions"></a> CAnimationBaseObject::ApplyTransitions

Adds transitions to storyboard with encapsulated animation variable.

```
virtual BOOL ApplyTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### Parameters

*pStoryboard*<br/>
A pointer to a storyboard.

*bDependOnKeyframes*<br/>
When FALSE, this method adds only those transitions that do not depend on keyframes.

### Return Value

TRUE if transitions were added successfully.

### Remarks

Adds related transitions, that have been added with AddTransition (overloaded methods in derived classes), to storyboard.

## <a name="canimationbaseobject"></a> CAnimationBaseObject::CAnimationBaseObject

Constructs an animation object.

```
CAnimationBaseObject();

CAnimationBaseObject(
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### Parameters

*nGroupID*<br/>
Specifies Group ID.

*nObjectID*<br/>
Specifies Object ID.

*dwUserData*<br/>
User-defined data, which can be associated with animation object and retrieved later at runtime.

### Remarks

Constructs an animation objects and assigns default Object ID (0) and Group ID (0).

## <a name="cleartransitions"></a> CAnimationBaseObject::ClearTransitions

Removes all related transitions.

```
virtual void ClearTransitions(BOOL bAutodestroy);
```

### Parameters

*bAutodestroy*<br/>
Specifies whether to destroy transition objects automatically, or just remove them from the related list.

### Remarks

Removes all related transitions and destroys them if bAutodestroy or m_bAutodestroyTransitions flag is TRUE. Transitions should be destroyed automatically only if they are not allocated on the stack. If the above flags are FALSE, transitions are just removed from the internal list of related transitions.

## <a name="containsvariable"></a> CAnimationBaseObject::ContainsVariable

Determines whether an animation object contains a particular animation variable.

```
virtual BOOL ContainsVariable(IUIAnimationVariable* pVariable);
```

### Parameters

*pVariable*<br/>
A pointer to animation variable.

### Return Value

TRUE if the animation variable is contained in the animation object; otherwise FALSE.

### Remarks

This method can be used to determine whether an animation variable specified by pVariable is contained within an animation object. An animation object, depending on its type, may contain several animation variables. For example, CAnimationColor contains three variables, one for each color component (red, green, and blue). When a value of animation variable has changed, Windows Animation API sends ValueChanged or IntegerValueChanged events (if enabled), and the parameter of this event is a pointer to interface IUIAnimationVariable of animation variable. This method helps to obtain a pointer to animation from a pointer to contained COM object.

## <a name="createtransitions"></a> CAnimationBaseObject::CreateTransitions

Creates transitions associated with an animation object.

```
BOOL CreateTransitions();
```

### Return Value

TRUE if transitions were created successfully; otherwise FALSE.

### Remarks

Loops over list of animation variables encapsulated in a derived animation object and creates transitions associated with each animation variable.

## <a name="detachfromcontroller"></a> CAnimationBaseObject::DetachFromController

Detaches an animation object from parent animation controller.

```cpp
void DetachFromController();
```

### Remarks

This method is used internally.

## <a name="enableintegervaluechangedevent"></a> CAnimationBaseObject::EnableIntegerValueChangedEvent

Sets up Integer Value Changed event handler.

```
virtual void EnableIntegerValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### Parameters

*pController*<br/>
A pointer to a parent controller.

*bEnable*<br/>
Specifies whether to enable, or disable Integer Value Changed event.

### Remarks

If the Integer Value Changed event handler is enabled, you can handle this event in CAnimationController::OnAnimationIntegerValueChanged method, which should be overridden in a CAnimationController-derived class. This method is called every time the animation integer value has changed.

## <a name="enablevaluechangedevent"></a> CAnimationBaseObject::EnableValueChangedEvent

Sets up Value Changed event handler.

```
virtual void EnableValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### Parameters

*pController*<br/>
A pointer to a parent controller.

*bEnable*<br/>
Specifies whether to enable, or disable Value Changed event.

### Remarks

If the Value Changed event handler is enabled, you can handle this event in CAnimationController::OnAnimationValueChanged method, which should be overridden in a CAnimationController-derived class. This method is called every time the animation value has changed.

## <a name="getanimationvariablelist"></a> CAnimationBaseObject::GetAnimationVariableList

Collects pointers to contained animation variables.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& list) = 0;
```

### Parameters

*list*<br/>
A list that must be filled with animation variables contained in an animation object.

### Remarks

This pure virtual method must be overridden in a derived class. An animation object, depending on its type, contains one or more animation variables. For example, CAnimationPoint contains two variables, for X and Y coordinates respectively. The base class CAnimationBaseObject implements some generic methods, which act on a list of animation variables: ApplyTransitions, ClearTransitions, EnableValueChangedEvent, EnableIntegerValueChangedEvent. These methods call GetAnimationVariableList, which is filled in a derived class with actual animation variables contained in a particular animation object, then loop over the list and perform necessary actions. If you create a custom animation object, you must add to *list* all animation variables contained in that object.

## <a name="getautodestroytransitions"></a> CAnimationBaseObject::GetAutodestroyTransitions

Tells whether related transition are destroyed automatically.

```
BOOL GetAutodestroyTransitions() const;
```

### Return Value

If TRUE, related transitions are destroyed automatically; if FALSE, transition objects should be deallocated by calling application.

### Remarks

By default this flag is TRUE. Set this flag only if you allocated transition on the stack and/or transitions should be deallocated by the calling application.

## <a name="getgroupid"></a> CAnimationBaseObject::GetGroupID

Returns current Group ID.

```
UINT32 GetGroupID() const;
```

### Return Value

Current Group ID.

### Remarks

Use this method to retrieve Group ID. It's 0 if Group ID has not been set explicitly in constructor or with SetID.

## <a name="getobjectid"></a> CAnimationBaseObject::GetObjectID

Returns current Object ID.

```
UINT32 GetObjectID() const;
```

### Return Value

Current Object ID.

### Remarks

Use this method to retrieve Object ID. It's 0 if Object ID has not been set explicitly in constructor or with SetID.

## <a name="getuserdata"></a> CAnimationBaseObject::GetUserData

Returns user-defined data.

```
DWORD GetUserData() const;
```

### Return Value

A value of custom data.

### Remarks

Call this method to retrieve the custom data at runtime. The returned value will be 0 if it was not explicitly initialized in constructor or with SetUserData.

## <a name="m_bautodestroytransitions"></a> CAnimationBaseObject::m_bAutodestroyTransitions

Specifies whether related transitions should be automatically destroyed.

```
BOOL m_bAutodestroyTransitions;
```

## <a name="m_dwuserdata"></a> CAnimationBaseObject::m_dwUserData

Stores user-defined data.

```
DWORD m_dwUserData;
```

## <a name="m_ngroupid"></a> CAnimationBaseObject::m_nGroupID

Specifies the Group ID of the animation object.

```
UINT32 m_nGroupID;
```

## <a name="m_nobjectid"></a> CAnimationBaseObject::m_nObjectID

Specifies the Object ID of the animation object.

```
UINT32 m_nObjectID;
```

## <a name="m_pparentcontroller"></a> CAnimationBaseObject::m_pParentController

A pointer to the parent animation controller.

```
CAnimationController* m_pParentController;
```

## <a name="setautodestroytransitions"></a> CAnimationBaseObject::SetAutodestroyTransitions

Sets a flag to automatically destroy transitions.

```cpp
void SetAutodestroyTransitions(BOOL bValue);
```

### Parameters

*bValue*<br/>
Specifies the auto destroy flag.

### Remarks

Set this flag only if you allocated transition objects using operator new. If for some reason transition objects are allocated on the stack, the auto destroy flag should be FALSE. By default this flag is TRUE.

## <a name="setid"></a> CAnimationBaseObject::SetID

Sets new IDs.

```cpp
void SetID(
    UINT32 nObjectID,
    UINT32 nGroupID = 0);
```

### Parameters

*nObjectID*<br/>
Specifies new Object ID.

*nGroupID*<br/>
Specifies new Group ID.

### Remarks

Allows you to change Object ID and Group ID. If the new Group ID differs from the current ID, an animation object is moved to another group (a new group will be created, if necessary).

## <a name="setparentanimationobjects"></a> CAnimationBaseObject::SetParentAnimationObjects

Establishes relationship between animation variables, contained in an animation object, and their container.

```
virtual void SetParentAnimationObjects();
```

### Remarks

This helper can be used to establish a relationship between animation variables contained in an animation object, and their container. It loops over animation variables and sets a back pointer to a parent animation object to each animation variable. In the current implementation, the actual relationship is established in CAnimationBaseObject::ApplyTransitions, therefore back pointers are not set until you call CAnimationGroup::Animate. Knowing the relationship may be helpful when you processing events and need to get a parent animation object from CAnimationVariable. Use CAnimationVariable::GetParentAnimationObject.

## <a name="setuserdata"></a> CAnimationBaseObject::SetUserData

Sets user-defined data.

```cpp
void SetUserData (DWORD dwUserData);
```

### Parameters

*dwUserData*<br/>
Specifies the custom data.

### Remarks

Use this method to associate a custom data with an animation object. This data may be retrieved later at runtime by GetUserData.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
