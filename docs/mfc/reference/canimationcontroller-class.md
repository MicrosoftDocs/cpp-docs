---
description: "Learn more about: CAnimationController Class"
title: "CAnimationController Class"
ms.date: "03/27/2019"
f1_keywords: ["CAnimationController", "AFXANIMATIONCONTROLLER/CAnimationController", "AFXANIMATIONCONTROLLER/CAnimationController::CAnimationController", "AFXANIMATIONCONTROLLER/CAnimationController::AddAnimationObject", "AFXANIMATIONCONTROLLER/CAnimationController::AddKeyframeToGroup", "AFXANIMATIONCONTROLLER/CAnimationController::AnimateGroup", "AFXANIMATIONCONTROLLER/CAnimationController::CleanUpGroup", "AFXANIMATIONCONTROLLER/CAnimationController::CreateKeyframe", "AFXANIMATIONCONTROLLER/CAnimationController::EnableAnimationManagerEvent", "AFXANIMATIONCONTROLLER/CAnimationController::EnableAnimationTimerEventHandler", "AFXANIMATIONCONTROLLER/CAnimationController::EnablePriorityComparisonHandler", "AFXANIMATIONCONTROLLER/CAnimationController::EnableStoryboardEventHandler", "AFXANIMATIONCONTROLLER/CAnimationController::FindAnimationGroup", "AFXANIMATIONCONTROLLER/CAnimationController::FindAnimationObject", "AFXANIMATIONCONTROLLER/CAnimationController::GetKeyframeStoryboardStart", "AFXANIMATIONCONTROLLER/CAnimationController::GetUIAnimationManager", "AFXANIMATIONCONTROLLER/CAnimationController::GetUIAnimationTimer", "AFXANIMATIONCONTROLLER/CAnimationController::GetUITransitionFactory", "AFXANIMATIONCONTROLLER/CAnimationController::GetUITransitionLibrary", "AFXANIMATIONCONTROLLER/CAnimationController::IsAnimationInProgress", "AFXANIMATIONCONTROLLER/CAnimationController::IsValid", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationIntegerValueChanged", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationManagerStatusChanged", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerPostUpdate", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerPreUpdate", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerRenderingTooSlow", "AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationValueChanged", "AFXANIMATIONCONTROLLER/CAnimationController::OnBeforeAnimationStart", "AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityCancel", "AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityCompress", "AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityConclude", "AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityTrim", "AFXANIMATIONCONTROLLER/CAnimationController::OnStoryboardStatusChanged", "AFXANIMATIONCONTROLLER/CAnimationController::OnStoryboardUpdated", "AFXANIMATIONCONTROLLER/CAnimationController::RemoveAllAnimationGroups", "AFXANIMATIONCONTROLLER/CAnimationController::RemoveAnimationGroup", "AFXANIMATIONCONTROLLER/CAnimationController::RemoveAnimationObject", "AFXANIMATIONCONTROLLER/CAnimationController::RemoveTransitions", "AFXANIMATIONCONTROLLER/CAnimationController::ScheduleGroup", "AFXANIMATIONCONTROLLER/CAnimationController::SetRelatedWnd", "AFXANIMATIONCONTROLLER/CAnimationController::UpdateAnimationManager", "AFXANIMATIONCONTROLLER/CAnimationController::OnAfterSchedule", "AFXANIMATIONCONTROLLER/CAnimationController::gkeyframeStoryboardStart", "AFXANIMATIONCONTROLLER/CAnimationController::m_bIsValid", "AFXANIMATIONCONTROLLER/CAnimationController::m_lstAnimationGroups", "AFXANIMATIONCONTROLLER/CAnimationController::m_pAnimationManager", "AFXANIMATIONCONTROLLER/CAnimationController::m_pAnimationTimer", "AFXANIMATIONCONTROLLER/CAnimationController::m_pRelatedWnd", "AFXANIMATIONCONTROLLER/CAnimationController::m_pTransitionFactory", "AFXANIMATIONCONTROLLER/CAnimationController::m_pTransitionLibrary"]
helpviewer_keywords: ["CAnimationController [MFC], CAnimationController", "CAnimationController [MFC], AddAnimationObject", "CAnimationController [MFC], AddKeyframeToGroup", "CAnimationController [MFC], AnimateGroup", "CAnimationController [MFC], CleanUpGroup", "CAnimationController [MFC], CreateKeyframe", "CAnimationController [MFC], EnableAnimationManagerEvent", "CAnimationController [MFC], EnableAnimationTimerEventHandler", "CAnimationController [MFC], EnablePriorityComparisonHandler", "CAnimationController [MFC], EnableStoryboardEventHandler", "CAnimationController [MFC], FindAnimationGroup", "CAnimationController [MFC], FindAnimationObject", "CAnimationController [MFC], GetKeyframeStoryboardStart", "CAnimationController [MFC], GetUIAnimationManager", "CAnimationController [MFC], GetUIAnimationTimer", "CAnimationController [MFC], GetUITransitionFactory", "CAnimationController [MFC], GetUITransitionLibrary", "CAnimationController [MFC], IsAnimationInProgress", "CAnimationController [MFC], IsValid", "CAnimationController [MFC], OnAnimationIntegerValueChanged", "CAnimationController [MFC], OnAnimationManagerStatusChanged", "CAnimationController [MFC], OnAnimationTimerPostUpdate", "CAnimationController [MFC], OnAnimationTimerPreUpdate", "CAnimationController [MFC], OnAnimationTimerRenderingTooSlow", "CAnimationController [MFC], OnAnimationValueChanged", "CAnimationController [MFC], OnBeforeAnimationStart", "CAnimationController [MFC], OnHasPriorityCancel", "CAnimationController [MFC], OnHasPriorityCompress", "CAnimationController [MFC], OnHasPriorityConclude", "CAnimationController [MFC], OnHasPriorityTrim", "CAnimationController [MFC], OnStoryboardStatusChanged", "CAnimationController [MFC], OnStoryboardUpdated", "CAnimationController [MFC], RemoveAllAnimationGroups", "CAnimationController [MFC], RemoveAnimationGroup", "CAnimationController [MFC], RemoveAnimationObject", "CAnimationController [MFC], RemoveTransitions", "CAnimationController [MFC], ScheduleGroup", "CAnimationController [MFC], SetRelatedWnd", "CAnimationController [MFC], UpdateAnimationManager", "CAnimationController [MFC], CleanUpGroup", "CAnimationController [MFC], OnAfterSchedule", "CAnimationController [MFC], gkeyframeStoryboardStart", "CAnimationController [MFC], m_bIsValid", "CAnimationController [MFC], m_lstAnimationGroups", "CAnimationController [MFC], m_pAnimationManager", "CAnimationController [MFC], m_pAnimationTimer", "CAnimationController [MFC], m_pRelatedWnd", "CAnimationController [MFC], m_pTransitionFactory", "CAnimationController [MFC], m_pTransitionLibrary"]
ms.assetid: ed294c98-695e-40a6-b940-33ef1d40aa6b
---
# CAnimationController Class

Implements the animation controller, which provides a central interface for creating and managing animations.

## Syntax

```
class CAnimationController : public CObject;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAnimationController::CAnimationController](#canimationcontroller)|Constructs an animation controller.|
|[CAnimationController::~CAnimationController](#_dtorcanimationcontroller)|The destructor. Called when animation controller object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAnimationController::AddAnimationObject](#addanimationobject)|Adds an animation object to a group that belongs to the animation controller.|
|[CAnimationController::AddKeyframeToGroup](#addkeyframetogroup)|Adds a keyframe to group.|
|[CAnimationController::AnimateGroup](#animategroup)|Prepares a group to run animation and optionally schedules it.|
|[CAnimationController::CleanUpGroup](#cleanupgroup)|Overloaded. Called by the framework to clean up the group when animation has been scheduled.|
|[CAnimationController::CreateKeyframe](#createkeyframe)|Overloaded. Creates a keyframe that depends on transition and adds it to the specified group.|
|[CAnimationController::EnableAnimationManagerEvent](#enableanimationmanagerevent)|Sets or releases a handler to call when animation manager's status changes.|
|[CAnimationController::EnableAnimationTimerEventHandler](#enableanimationtimereventhandler)|Sets or releases a handler for timing events and handler for timing updates.|
|[CAnimationController::EnablePriorityComparisonHandler](#enableprioritycomparisonhandler)|Sets or releases the priority comparison handler to call to determine whether a scheduled storyboard can be canceled, concluded, trimmed or compressed.|
|[CAnimationController::EnableStoryboardEventHandler](#enablestoryboardeventhandler)|Sets or releases a handler for storyboard status and update events.|
|[CAnimationController::FindAnimationGroup](#findanimationgroup)|Overloaded. Finds an animation group by its storyboard.|
|[CAnimationController::FindAnimationObject](#findanimationobject)|Finds animation object containing a specified animation variable.|
|[CAnimationController::GetKeyframeStoryboardStart](#getkeyframestoryboardstart)|Returns a keyframe that identifies start of storyboard.|
|[CAnimationController::GetUIAnimationManager](#getuianimationmanager)|Provides access to encapsulated IUIAnimationManager object.|
|[CAnimationController::GetUIAnimationTimer](#getuianimationtimer)|Provides access to encapsulated IUIAnimationTimer object.|
|[CAnimationController::GetUITransitionFactory](#getuitransitionfactory)|A pointer to IUIAnimationTransitionFactory interface or NULL, if creation of transition library failed.|
|[CAnimationController::GetUITransitionLibrary](#getuitransitionlibrary)|Provides access to encapsulated IUIAnimationTransitionLibrary object.|
|[CAnimationController::IsAnimationInProgress](#isanimationinprogress)|Tells whether at least one group is playing animation.|
|[CAnimationController::IsValid](#isvalid)|Tells whether animation controller is valid.|
|[CAnimationController::OnAnimationIntegerValueChanged](#onanimationintegervaluechanged)|Called by the framework when integer value of animation variable has changed.|
|[CAnimationController::OnAnimationManagerStatusChanged](#onanimationmanagerstatuschanged)|Called by the framework in response to StatusChanged event from animation manager.|
|[CAnimationController::OnAnimationTimerPostUpdate](#onanimationtimerpostupdate)|Called by the framework after an animation update is finished.|
|[CAnimationController::OnAnimationTimerPreUpdate](#onanimationtimerpreupdate)|Called by the framework before an animation update begins.|
|[CAnimationController::OnAnimationTimerRenderingTooSlow](#onanimationtimerrenderingtooslow)|Called by the framework when the rendering frame rate for an animation falls below a minimum desirable frame rate.|
|[CAnimationController::OnAnimationValueChanged](#onanimationvaluechanged)|Called by the framework when value of animation variable has changed.|
|[CAnimationController::OnBeforeAnimationStart](#onbeforeanimationstart)|Called by the framework right before the animation is scheduled.|
|[CAnimationController::OnHasPriorityCancel](#onhasprioritycancel)|Called by the framework to resolve scheduling conflicts.|
|[CAnimationController::OnHasPriorityCompress](#onhasprioritycompress)|Called by the framework to resolve scheduling conflicts.|
|[CAnimationController::OnHasPriorityConclude](#onhaspriorityconclude)|Called by the framework to resolve scheduling conflicts.|
|[CAnimationController::OnHasPriorityTrim](#onhasprioritytrim)|Called by the framework to resolve scheduling conflicts.|
|[CAnimationController::OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Called by the framework when storyboard status has changed.|
|[CAnimationController::OnStoryboardUpdated](#onstoryboardupdated)|Called by the framework when storyboard has been updated.|
|[CAnimationController::RemoveAllAnimationGroups](#removeallanimationgroups)|Removes all animation groups from animation controller.|
|[CAnimationController::RemoveAnimationGroup](#removeanimationgroup)|Removes an animation group with specified ID from animation controller.|
|[CAnimationController::RemoveAnimationObject](#removeanimationobject)|Remove an animation object from animation controller.|
|[CAnimationController::RemoveTransitions](#removetransitions)|Removes transitions from animation objects that belong to the specified group.|
|[CAnimationController::ScheduleGroup](#schedulegroup)|Schedules an animation.|
|[CAnimationController::SetRelatedWnd](#setrelatedwnd)|Establishes a relationship between animation controller and a window.|
|[CAnimationController::UpdateAnimationManager](#updateanimationmanager)|Directs the animation manager to update the values of all animation variables.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CAnimationController::CleanUpGroup](#cleanupgroup)|Overloaded. A helper that cleans up the group.|
|[CAnimationController::OnAfterSchedule](#onafterschedule)|Called by the framework when an animation for the specified group has just been scheduled.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CAnimationController::gkeyframeStoryboardStart](#g_keyframestoryboardstart)|A keyframe that represents start of storyboard.|
|[CAnimationController::m_bIsValid](#m_bisvalid)|Specifies whether an animation controller is valid or not. This member is set to FALSE if current OS does not support Windows Animation API.|
|[CAnimationController::m_lstAnimationGroups](#m_lstanimationgroups)|A list of animation groups that belong to this animation controller.|
|[CAnimationController::m_pAnimationManager](#m_panimationmanager)|Stores a pointer to Animation Manager COM object.|
|[CAnimationController::m_pAnimationTimer](#m_panimationtimer)|Stores a pointer to Animation Timer COM object.|
|[CAnimationController::m_pRelatedWnd](#m_prelatedwnd)|A pointer to a related CWnd object, which can be automatically redrawn when the status of animation manager has changed, or post update event has occurred. Can be NULL.|
|[CAnimationController::m_pTransitionFactory](#m_ptransitionfactory)|Stores a pointer to Transition Factory COM object.|
|[CAnimationController::m_pTransitionLibrary](#m_ptransitionlibrary)|Stores a pointer to Transition Library COM object.|

## Remarks

The CAnimationController class is the key class that manages animations. You may create one or more instances of animation controller in an application and, optionally, connect an instance of animation controller to a CWnd object using CAnimationController::SetRelatedWnd. This connection is required to send WM_PAINT messages to the related window automatically when animation manager status has changed or animation timer has been updated. If you do not enable this relation, you must redraw a window that displays an animation manually. For this purpose you can derive a class from CAnimationController and override OnAnimationManagerStatusChanged and/or OnAnimationTimerPostUpdate and invalidate one or more windows when necessary.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CAnimationController`

## Requirements

**Header:** afxanimationcontroller.h

## <a name="_dtorcanimationcontroller"></a> CAnimationController::~CAnimationController

The destructor. Called when animation controller object is being destroyed.

```
virtual ~CAnimationController(void);
```

## <a name="addanimationobject"></a> CAnimationController::AddAnimationObject

Adds an animation object to a group that belongs to the animation controller.

```
CAnimationGroup* AddAnimationObject(CAnimationBaseObject* pObject);
```

### Parameters

*pObject*<br/>
A pointer to an animation object.

### Return Value

A pointer to existing or new animation group where pObject has been added if function succeeds; NULL if pObject has already been added to a group that belongs to another animation controller.

### Remarks

Call this method to add an animation object to the animation controller. An object will be added to a group according to object's GroupID (see CAnimationBaseObject::SetID). The animation controller will create a new group if it's the first object being added with the specified GroupID. An animation object can be added to one animation controller only. If you need to add an object to another controller, call RemoveAnimationObject first. If you call SetID with new GroupID for an object that has been already added to a group, the object will be removed from the old group and added to another group with specified ID.

## <a name="addkeyframetogroup"></a> CAnimationController::AddKeyframeToGroup

Adds a keyframe to group.

```
BOOL AddKeyframeToGroup(
    UINT32 nGroupID,
    CBaseKeyFrame* pKeyframe);
```

### Parameters

*nGroupID*<br/>
Specifies Group ID.

*pKeyframe*<br/>
A pointer to a keyframe.

### Return Value

TRUE if the function succeeds; otherwise FALSE.

### Remarks

Usually you don't need to call this method, use CAnimationController::CreateKeyframe instead, which creates and adds the created keyframe to a group automatically.

## <a name="animategroup"></a> CAnimationController::AnimateGroup

Prepares a group to run animation and optionally schedules it.

```
BOOL AnimateGroup(
    UINT32 nGroupID,
    BOOL bScheduleNow = TRUE);
```

### Parameters

*nGroupID*<br/>
Specifies GroupID.

*bScheduleNow*<br/>
Specifies whether to run animation right away.

### Return Value

TRUE if animation was successfully scheduled and run.

### Remarks

This method does the actual work creating storyboard, adding animation variables, applying transitions and setting keyframes. It's possible to delay scheduling if you set bScheduleNow to FALSE. In this case the specified group will hold a storyboard that has been set up for animation. At that point you can setup events for the storyboard and animation variables. When you actually need to run the animation call CAnimationController::ScheduleGroup.

## <a name="canimationcontroller"></a> CAnimationController::CAnimationController

Constructs an animation controller.

```
CAnimationController(void);
```

## <a name="cleanupgroup"></a> CAnimationController::CleanUpGroup

Called by the framework to clean up the group when animation has been scheduled.

```cpp
void CleanUpGroup(UINT32 nGroupID);
void CleanUpGroup(CAnimationGroup* pGroup);
```

### Parameters

*nGroupID*<br/>
Specifies GroupID.

*pGroup*<br/>
A pointer to animation group to clean.

### Remarks

This method removes all transitions and keyframes from the specified group, because they are not relevant after an animation has been scheduled.

## <a name="createkeyframe"></a> CAnimationController::CreateKeyframe

Creates a keyframe that depends on transition and adds it to the specified group.

```
CKeyFrame* CreateKeyframe(
    UINT32 nGroupID,
    CBaseTransition* pTransition);

CKeyFrame* CreateKeyframe(
    UINT32 nGroupID,
    CBaseKeyFrame* pKeyframe,
    UI_ANIMATION_SECONDS offset = 0.0);
```

### Parameters

*nGroupID*<br/>
Specifies Group ID for which keyframe is created.

*pTransition*<br/>
A pointer to transition. Keyframe will be inserted to storyboard after this transition.

*pKeyframe*<br/>
A pointer to base keyframe for this keyframe.

*offset*<br/>
Offset in seconds from the base keyframe specified by pKeyframe.

### Return Value

A pointer to newly created keyframe if the function succeeds.

### Remarks

You can store the returned pointer and base other keyframes on the newly created keyframe (see the second overload). It's possible to begin transitions at keyframes - see CBaseTransition::SetKeyframes. You don't need to delete keyframes created in this way, because they are deleted automatically by animation groups. Be careful when creating keyframes based on other keyframes and transitions and avoid circular references.

## <a name="enableanimationmanagerevent"></a> CAnimationController::EnableAnimationManagerEvent

Sets or releases a handler to call when animation manager's status changes.

```
virtual BOOL EnableAnimationManagerEvent(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether to set or release a handler.

### Return Value

TRUE if the handler was successfully set or released.

### Remarks

When a handler is set (enabled) Windows Animation calls OnAnimationManagerStatusChanged when animation manager's status changes.

## <a name="enableanimationtimereventhandler"></a> CAnimationController::EnableAnimationTimerEventHandler

Sets or releases a handler for timing events and handler for timing updates.

```
virtual BOOL EnableAnimationTimerEventHandler(
    BOOL bEnable = TRUE,
    UI_ANIMATION_IDLE_BEHAVIOR idleBehavior = UI_ANIMATION_IDLE_BEHAVIOR_DISABLE);
```

### Parameters

*bEnable*<br/>
Specifies whether to set or release the handlers.

*idleBehavior*<br/>
Specifies idle behavior for timer update handler.

### Return Value

TRUE if handlers were successfully set or released; FALSE if this method is called for a second time without releasing the handlers first, or if any other error occurs.

### Remarks

When the handlers are set (enabled) Windows Animation API calls OnAnimationTimerPreUpdate, OnAnimationTimerPostUpdate, OnRenderingTooSlow methods. You need to enable animation timers to allow Windows Animation API update storyboards. Otherwise you'll need to call CAnimationController::UpdateAnimationManager in order to direct the animation manager to update the values of all animation variables.

## <a name="enableprioritycomparisonhandler"></a> CAnimationController::EnablePriorityComparisonHandler

Sets or releases the priority comparison handler to call to determine whether a scheduled storyboard can be canceled, concluded, trimmed or compressed.

```
virtual BOOL EnablePriorityComparisonHandler(DWORD dwHandlerType);
```

### Parameters

*dwHandlerType*<br/>
A combination of UI_ANIMATION_PHT_ flags (see remarks), which specifies what handlers to set or release.

### Return Value

TRUE if the handler was successfully set or released.

### Remarks

When a handler is set (enabled) Windows Animation calls the following virtual methods depending on dwHandlerType: OnHasPriorityCancel, OnHasPriorityConclude, OnHasPriorityTrim, OnHasPriorityCompress. dwHandler can be a combination of the following flags: UI_ANIMATION_PHT_NONE - release all handlers UI_ANIMATION_PHT_CANCEL - set Cancel comparison handler UI_ANIMATION_PHT_CONCLUDE - set Conclude comparison handler UI_ANIMATION_PHT_COMPRESS - set Compress comparison handler UI_ANIMATION_PHT_TRIM - set Trim comparison handler UI_ANIMATION_PHT_CANCEL_REMOVE - remove Cancel comparison handler UI_ANIMATION_PHT_CONCLUDE_REMOVE - remove Conclude comparison handler UI_ANIMATION_PHT_COMPRESS_REMOVE - remove Compress comparison handler UI_ANIMATION_PHT_TRIM_REMOVE - remove Trim comparison handler

## <a name="enablestoryboardeventhandler"></a> CAnimationController::EnableStoryboardEventHandler

Sets or releases a handler for storyboard status and update events.

```
virtual BOOL EnableStoryboardEventHandler(
    UINT32 nGroupID,
    BOOL bEnable = TRUE);
```

### Parameters

*nGroupID*<br/>
Specifies Group ID.

*bEnable*<br/>
Specifies whether to set or release a handler.

### Return Value

TRUE if the handler was successfully set or released; FALSE if the specified animation group is now found or animation for the specified group has not been initiated and its internal storyboard is NULL.

### Remarks

When a handler is set (enabled) Windows Animation API calls OnStoryboardStatusChanges and OnStoryboardUpdated virtual methods. A handler must be set after CAnimationController::Animate has been called for the specified animation group, because it creates encapsulated IUIAnimationStoryboard object.

## <a name="findanimationgroup"></a> CAnimationController::FindAnimationGroup

Finds an animation group by its Group ID.

```
CAnimationGroup* FindAnimationGroup(UINT32 nGroupID);
CAnimationGroup* FindAnimationGroup(IUIAnimationStoryboard* pStoryboard);
```

### Parameters

*nGroupID*<br/>
Specifies a GroupID.

*pStoryboard*<br/>
A pointer to a storyboard.

### Return Value

A pointer to animation group or NULL if the group with specified ID is not found.

### Remarks

Use this method to find an animation group at runtime. A group is created and added to the internal list of animation groups when a first animation object with particular GroupID is being added to animation controller.

## <a name="findanimationobject"></a> CAnimationController::FindAnimationObject

Finds animation object containing a specified animation variable.

```
BOOL FindAnimationObject(
    IUIAnimationVariable* pVariable,
    CAnimationBaseObject** ppObject,
    CAnimationGroup** ppGroup);
```

### Parameters

*pVariable*<br/>
A pointer to animation variable.

*ppObject*<br/>
Output. Contains a pointer to animation object or NULL.

*ppGroup*<br/>
Output. Contains a pointer to animation group that holds the animation object, or NULL.

### Return Value

TRUE if object was found; otherwise FALSE.

### Remarks

Called from event handlers when it's required to find an animation object from incoming animation variable.

## <a name="g_keyframestoryboardstart"></a> CAnimationController::gkeyframeStoryboardStart

A keyframe that represents start of storyboard.

```
static CBaseKeyFrame gkeyframeStoryboardStart;
```

## <a name="getkeyframestoryboardstart"></a> CAnimationController::GetKeyframeStoryboardStart

Returns a keyframe that identifies start of storyboard.

```
static CBaseKeyFrame* GetKeyframeStoryboardStart();
```

### Return Value

A pointer to base keyframe, which identifies start of storyboard.

### Remarks

Obtain this keyframe to base any other keyframes or transitions on the moment in time when a storyboard starts.

## <a name="getuianimationmanager"></a> CAnimationController::GetUIAnimationManager

Provides access to encapsulated IUIAnimationManager object.

```
IUIAnimationManager* GetUIAnimationManager();
```

### Return Value

A pointer to IUIAnimationManager interface or NULL, if creation of animation manager failed.

### Remarks

If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE. You may need to access IUIAnimationManager in order to call its interface methods, which are not wrapped by animation controller.

## <a name="getuianimationtimer"></a> CAnimationController::GetUIAnimationTimer

Provides access to encapsulated IUIAnimationTimer object.

```
IUIAnimationTimer* GetUIAnimationTimer();
```

### Return Value

A pointer to IUIAnimationTimer interface or NULL, if creation of animation timer failed.

### Remarks

If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.

## <a name="getuitransitionfactory"></a> CAnimationController::GetUITransitionFactory

A pointer to IUIAnimationTransitionFactory interface or NULL, if creation of transition library failed.

```
IUIAnimationTransitionFactory* GetUITransitionFactory();
```

### Return Value

A pointer to IUIAnimationTransitionFactory or NULL, if creation of transition factory failed.

### Remarks

If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.

## <a name="getuitransitionlibrary"></a> CAnimationController::GetUITransitionLibrary

Provides access to encapsulated IUIAnimationTransitionLibrary object.

```
IUIAnimationTransitionLibrary* GetUITransitionLibrary();
```

### Return Value

A pointer to IUIAnimationTransitionLibrary interface or NULL, if creation of transition library failed.

### Remarks

If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.

## <a name="isanimationinprogress"></a> CAnimationController::IsAnimationInProgress

Tells whether at least one group is playing animation.

```
virtual BOOL IsAnimationInProgress();
```

### Return Value

TRUE if there is an animation in progress for this animation controller; otherwise FALSE.

### Remarks

Checks status of animation manager and returns TRUE if the status is UI_ANIMATION_MANAGER_BUSY.

## <a name="isvalid"></a> CAnimationController::IsValid

Tells whether animation controller is valid.

```
BOOL IsValid() const;
```

### Return Value

TRUE if animation controller is valid; otherwise FALSE.

### Remarks

This method returns FALSE only if Windows Animation API is not supported on the current OS and creation of animation manager failed because it's not registered. You need to call GetUIAnimationManager at least once after initialization of COM libraries to cause setting of this flag.

## <a name="m_bisvalid"></a> CAnimationController::m_bIsValid

Specifies whether an animation controller is valid or not. This member is set to FALSE if current OS does not support Windows Animation API.

```
BOOL m_bIsValid;
```

## <a name="m_lstanimationgroups"></a> CAnimationController::m_lstAnimationGroups

A list of animation groups that belong to this animation controller.

```
CList<CAnimationGroup*, CAnimationGroup*> m_lstAnimationGroups;
```

## <a name="m_panimationmanager"></a> CAnimationController::m_pAnimationManager

Stores a pointer to Animation Manager COM object.

```
ATL::CComPtr<IUIAnimationManager> m_pAnimationManager;
```

## <a name="m_panimationtimer"></a> CAnimationController::m_pAnimationTimer

Stores a pointer to Animation Timer COM object.

```
ATL::CComPtr<IUIAnimationTimer> m_pAnimationTimer;
```

## <a name="m_prelatedwnd"></a> CAnimationController::m_pRelatedWnd

A pointer to a related CWnd object, which can be automatically redrawn when the status of animation manager has changed, or post update event has occurred. Can be NULL.

```
CWnd* m_pRelatedWnd;
```

## <a name="m_ptransitionfactory"></a> CAnimationController::m_pTransitionFactory

Stores a pointer to Transition Factory COM object.

```
ATL::CComPtr<IUIAnimationTransitionFactory> m_pTransitionFactory;
```

## <a name="m_ptransitionlibrary"></a> CAnimationController::m_pTransitionLibrary

Stores a pointer to Transition Library COM object.

```
ATL::CComPtr<IUIAnimationTransitionLibrary> m_pTransitionLibrary;
```

## <a name="onafterschedule"></a> CAnimationController::OnAfterSchedule

Called by the framework when an animation for the specified group has just been scheduled.

```
virtual void OnAfterSchedule(CAnimationGroup* pGroup);
```

### Parameters

*pGroup*<br/>
A pointer to an animation group, which has been scheduled.

### Remarks

The default implementation removes keyframes from the specified group and transitions from animation variables that belong to the specified group. Can be overridden in a derived class to take any additional actions upon animation schedule.

## <a name="onanimationintegervaluechanged"></a> CAnimationController::OnAnimationIntegerValueChanged

Called by the framework when integer value of animation variable has changed.

```
virtual void OnAnimationIntegerValueChanged(
    CAnimationGroup* pGroup,
    CAnimationBaseObject* pObject,
    IUIAnimationVariable* variable,
    INT32 newValue,
    INT32 prevValue);
```

### Parameters

*pGroup*<br/>
A pointer to an animation group that holds an animation object whose value has changed.

*pObject*<br/>
A pointer to an animation object that contains an animation variable whose value has changed.

*variable*<br/>
A pointer to an animation variable.

*newValue*<br/>
Specifies new value.

*prevValue*<br/>
Specifies previous value.

### Remarks

This method is called if you enable animation variable events with EnableIntegerValueChangedEvent called for a specific animation variable or animation object. It can be overridden in a derived class to take application-specific actions.

## <a name="onanimationmanagerstatuschanged"></a> CAnimationController::OnAnimationManagerStatusChanged

Called by the framework in response to StatusChanged event from animation manager.

```
virtual void OnAnimationManagerStatusChanged(
    UI_ANIMATION_MANAGER_STATUS newStatus,
    UI_ANIMATION_MANAGER_STATUS previousStatus);
```

### Parameters

*newStatus*<br/>
New animation manager status.

*previousStatus*<br/>
Previous animation manager status.

### Remarks

This method is called if you enable animation manager events with EnableAnimationManagerEvent. It can be overridden in a derived class to take application-specific actions. The default implementation updates a related window if it has been set with SetRelatedWnd.

## <a name="onanimationtimerpostupdate"></a> CAnimationController::OnAnimationTimerPostUpdate

Called by the framework after an animation update is finished.

```
virtual void OnAnimationTimerPostUpdate();
```

### Remarks

This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions.

## <a name="onanimationtimerpreupdate"></a> CAnimationController::OnAnimationTimerPreUpdate

Called by the framework before an animation update begins.

```
virtual void OnAnimationTimerPreUpdate();
```

### Remarks

This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions.

## <a name="onanimationtimerrenderingtooslow"></a> CAnimationController::OnAnimationTimerRenderingTooSlow

Called by the framework when the rendering frame rate for an animation falls below a minimum desirable frame rate.

```
virtual void OnAnimationTimerRenderingTooSlow(UINT32 fps);
```

### Parameters

*fps*<br/>
The current frame rate in frames per second.

### Remarks

This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions. The minimum desirable frame rate is specified by calling IUIAnimationTimer::SetFrameRateThreshold.

## <a name="onanimationvaluechanged"></a> CAnimationController::OnAnimationValueChanged

Called by the framework when value of animation variable has changed.

```
virtual void OnAnimationValueChanged(
    CAnimationGroup* pGroup,
    CAnimationBaseObject* pObject,
    IUIAnimationVariable* variable,
    DOUBLE newValue,
    DOUBLE prevValue);
```

### Parameters

*pGroup*<br/>
A pointer to an animation group that holds an animation object whose value has changed.

*pObject*<br/>
A pointer to an animation object that contains an animation variable whose value has changed.

*variable*<br/>
A pointer to an animation variable.

*newValue*<br/>
Specifies new value.

*prevValue*<br/>
Specifies previous value.

### Remarks

This method is called if you enable animation variable events with EnableValueChangedEvent called for a specific animation variable or animation object. It can be overridden in a derived class to take application-specific actions.

## <a name="onbeforeanimationstart"></a> CAnimationController::OnBeforeAnimationStart

Called by the framework right before the animation is scheduled.

```
virtual void OnBeforeAnimationStart(CAnimationGroup* pGroup);
```

### Parameters

*pGroup*<br/>
A pointer to an animation group whose animation is about to start.

### Remarks

This call is routed to related CWnd and can be overridden in a derived class to perform any additional actions before the animation starts for the specified group.

## <a name="onhasprioritycancel"></a> CAnimationController::OnHasPriorityCancel

Called by the framework to resolve scheduling conflicts.

```
virtual BOOL OnHasPriorityCancel(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### Parameters

*pGroupScheduled*<br/>
The group that owns the currently scheduled storyboard.

*pGroupNew*<br/>
The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.

*priorityEffect*<br/>
The potential effect on pGroupNew if pGroupScheduled has a higher priority.

### Return Value

Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.

### Remarks

This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_CANCEL. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about [Conflict Management](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority).

## <a name="onhasprioritycompress"></a> CAnimationController::OnHasPriorityCompress

Called by the framework to resolve scheduling conflicts.

```
virtual BOOL OnHasPriorityCompress(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### Parameters

*pGroupScheduled*<br/>
The group that owns the currently scheduled storyboard.

*pGroupNew*<br/>
The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.

*priorityEffect*<br/>
The potential effect on pGroupNew if pGroupScheduled has a higher priority.

### Return Value

Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.

### Remarks

This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_COMPRESS. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about [Conflict Management](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority).

## <a name="onhaspriorityconclude"></a> CAnimationController::OnHasPriorityConclude

Called by the framework to resolve scheduling conflicts.

```
virtual BOOL OnHasPriorityConclude(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### Parameters

*pGroupScheduled*<br/>
The group that owns the currently scheduled storyboard.

*pGroupNew*<br/>
The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.

*priorityEffect*<br/>
The potential effect on pGroupNew if pGroupScheduled has a higher priority.

### Return Value

Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.

### Remarks

This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_CONCLUDE. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about [Conflict Management](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority).

## <a name="onhasprioritytrim"></a> CAnimationController::OnHasPriorityTrim

Called by the framework to resolve scheduling conflicts.

```
virtual BOOL OnHasPriorityTrim(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### Parameters

*pGroupScheduled*<br/>
The group that owns the currently scheduled storyboard.

*pGroupNew*<br/>
The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.

*priorityEffect*<br/>
The potential effect on pGroupNew if pGroupScheduled has a higher priority.

### Return Value

Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.

### Remarks

This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_TRIM. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about [Conflict Management](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority).

## <a name="onstoryboardstatuschanged"></a> CAnimationController::OnStoryboardStatusChanged

Called by the framework when storyboard status has changed.

```
virtual void OnStoryboardStatusChanged(
    CAnimationGroup* pGroup,
    UI_ANIMATION_STORYBOARD_STATUS newStatus,
    UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```

### Parameters

*pGroup*<br/>
A pointer to an animation group that owns the storyboard whose status has changed.

*newStatus*<br/>
Specifies the new status.

*previousStatus*<br/>
Specifies the previous status.

### Remarks

This method is called if you enable storyboard events using CAnimationController::EnableStoryboardEventHandler. It can be overridden in a derived class to take application-specific actions.

## <a name="onstoryboardupdated"></a> CAnimationController::OnStoryboardUpdated

Called by the framework when storyboard has been updated.

```
virtual void OnStoryboardUpdated(CAnimationGroup* pGroup);
```

### Parameters

*pGroup*<br/>
A pointer to a group that owns the storyboard.

### Remarks

This method is called if you enable storyboard events using CAnimationController::EnableStoryboardEventHandler. It can be overridden in a derived class to take application-specific actions.

## <a name="removeallanimationgroups"></a> CAnimationController::RemoveAllAnimationGroups

Removes all animation groups from animation controller.

```cpp
void RemoveAllAnimationGroups();
```

### Remarks

All groups will be deleted, their pointer, if stored at the application level, must be invalidated. If CAnimationGroup::m_bAutodestroyAnimationObjects for a group being deleted is TRUE, all animation objects that belong to that group will be deleted; otherwise their references to parent animation controller will be set to NULL and they can be added to another controller.

## <a name="removeanimationgroup"></a> CAnimationController::RemoveAnimationGroup

Removes an animation group with specified ID from animation controller.

```cpp
void RemoveAnimationGroup(UINT32 nGroupID);
```

### Parameters

*nGroupID*<br/>
Specifies animation group ID.

### Remarks

This method removes an animation group from the internal list of groups and deletes it, therefore if you stored a pointer to that animation group, it must be invalidated. If CAnimationGroup::m_bAutodestroyAnimationObjects is TRUE, all animation objects that belong to that group will be deleted; otherwise their references to parent animation controller will be set to NULL and they can be added to another controller.

## <a name="removeanimationobject"></a> CAnimationController::RemoveAnimationObject

Remove an animation object from animation controller.

```cpp
void RemoveAnimationObject(
    CAnimationBaseObject* pObject,
    BOOL bNoDelete = FALSE);
```

### Parameters

*pObject*<br/>
A pointer to an animation object.

*bNoDelete*<br/>
If this parameter is TRUE the object will not be deleted upon remove.

### Remarks

Removes an animation object from animation controller and animation group. Call this function if a particular object should not be animated anymore, or if you need to move the object to another animation controller. In the last case bNoDelete must be TRUE.

## <a name="removetransitions"></a> CAnimationController::RemoveTransitions

Removes transitions from animation objects that belong to the specified group.

```cpp
void RemoveTransitions(UINT32 nGroupID);
```

### Parameters

*nGroupID*<br/>
Specifies Group ID.

### Remarks

The group loops over its animation objects and calls ClearTransitions(FALSE) for each animation object. This method is called by the framework after animation has been scheduled.

## <a name="schedulegroup"></a> CAnimationController::ScheduleGroup

Schedules an animation.

```
BOOL ScheduleGroup(
    UINT32 nGroupID,
    UI_ANIMATION_SECONDS time = 0.0);
```

### Parameters

*nGroupID*<br/>
Specifies animation Group ID to schedule.

*time*<br/>
Specifies time to schedule.

### Return Value

TRUE if animation was scheduled successfully. FALSE if storyboard has not been created, or other error occurs.

### Remarks

You must call AnimateGroup with parameter bScheduleNow set to FALSE prior ScheduleGroup. You can specify the desired animation time obtained from IUIAnimationTimer::GetTime. If the time parameter is 0.0, the animation is scheduled for the current time.

## <a name="setrelatedwnd"></a> CAnimationController::SetRelatedWnd

Establishes a relationship between animation controller and a window.

```cpp
void SetRelatedWnd(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
A pointer to window object to set.

### Remarks

If a related CWnd object is set, the animation controller can automatically update it (send WM_PAINT message) when the status of animation manager has changed or timer post update event has occurred.

## <a name="updateanimationmanager"></a> CAnimationController::UpdateAnimationManager

Directs the animation manager to update the values of all animation variables.

```
virtual void UpdateAnimationManager();
```

### Remarks

Calling this method advances the animation manager to current time, changing statuses of storyboards as necessary and updating any animation variables to appropriate interpolated values. Internally this method calls IUIAnimationTimer::GetTime(timeNow) and IUIAnimationManager::Update(timeNow). Override this method in a derived class to customize this behavior.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
