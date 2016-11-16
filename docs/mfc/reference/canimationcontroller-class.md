---
title: "CAnimationController Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationController"
  - "afxanimationcontroller/CAnimationController"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationController class"
ms.assetid: ed294c98-695e-40a6-b940-33ef1d40aa6b
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CAnimationController::CAnimationController](#canimationcontroller__canimationcontroller)|Constructs an animation controller.|  
|[CAnimationController::~CAnimationController](#canimationcontroller__~canimationcontroller)|The destructor. Called when animation controller object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationController::AddAnimationObject](#canimationcontroller__addanimationobject)|Adds an animation object to a group that belongs to the animation controller.|  
|[CAnimationController::AddKeyframeToGroup](#canimationcontroller__addkeyframetogroup)|Adds a keyframe to group.|  
|[CAnimationController::AnimateGroup](#canimationcontroller__animategroup)|Prepares a group to run animation and optionally schedules it.|  
|[CAnimationController::CleanUpGroup](#canimationcontroller__cleanupgroup)|Overloaded. Called by the framework to clean up the group when animation has been scheduled.|  
|[CAnimationController::CreateKeyframe](#canimationcontroller__createkeyframe)|Overloaded. Creates a keyframe that depends on transition and adds it to the specified group.|  
|[CAnimationController::EnableAnimationManagerEvent](#canimationcontroller__enableanimationmanagerevent)|Sets or releases a handler to call when animation manager's status changes.|  
|[CAnimationController::EnableAnimationTimerEventHandler](#canimationcontroller__enableanimationtimereventhandler)|Sets or releases a handler for timing events and handler for timing updates.|  
|[CAnimationController::EnablePriorityComparisonHandler](#canimationcontroller__enableprioritycomparisonhandler)|Sets or releases the priority comparison handler to call to determine whether a scheduled storyboard can be cancelled, concluded, trimmed or compressed.|  
|[CAnimationController::EnableStoryboardEventHandler](#canimationcontroller__enablestoryboardeventhandler)|Sets or releases a handler for storyboard status and update events.|  
|[CAnimationController::FindAnimationGroup](#canimationcontroller__findanimationgroup)|Overloaded. Finds an animation group by its storyboard.|  
|[CAnimationController::FindAnimationObject](#canimationcontroller__findanimationobject)|Finds animation object containing a specified animation variable.|  
|[CAnimationController::GetKeyframeStoryboardStart](#canimationcontroller__getkeyframestoryboardstart)|Returns a keyframe that identifies start of storyboard.|  
|[CAnimationController::GetUIAnimationManager](#canimationcontroller__getuianimationmanager)|Provides access to encapsulated IUIAnimationManager object.|  
|[CAnimationController::GetUIAnimationTimer](#canimationcontroller__getuianimationtimer)|Provides access to encapsulated IUIAnimationTimer object.|  
|[CAnimationController::GetUITransitionFactory](#canimationcontroller__getuitransitionfactory)|A pointer to IUIAnimationTransitionFactory interface or NULL, if creation of transition library failed.|  
|[CAnimationController::GetUITransitionLibrary](#canimationcontroller__getuitransitionlibrary)|Provides access to encapsulated IUIAnimationTransitionLibrary object.|  
|[CAnimationController::IsAnimationInProgress](#canimationcontroller__isanimationinprogress)|Tells whether at least one group is playing animation.|  
|[CAnimationController::IsValid](#canimationcontroller__isvalid)|Tells whether animation controller is valid.|  
|[CAnimationController::OnAnimationIntegerValueChanged](#canimationcontroller__onanimationintegervaluechanged)|Called by the framework when integer value of animation variable has changed.|  
|[CAnimationController::OnAnimationManagerStatusChanged](#canimationcontroller__onanimationmanagerstatuschanged)|Called by the framework in response to StatusChanged event from animation manager.|  
|[CAnimationController::OnAnimationTimerPostUpdate](#canimationcontroller__onanimationtimerpostupdate)|Called by the framework after an animation update is finished.|  
|[CAnimationController::OnAnimationTimerPreUpdate](#canimationcontroller__onanimationtimerpreupdate)|Called by the framework before an animation update begins.|  
|[CAnimationController::OnAnimationTimerRenderingTooSlow](#canimationcontroller__onanimationtimerrenderingtooslow)|Called by the framework when the rendering frame rate for an animation falls below a minimum desirable frame rate.|  
|[CAnimationController::OnAnimationValueChanged](#canimationcontroller__onanimationvaluechanged)|Called by the framework when value of animation variable has changed.|  
|[CAnimationController::OnBeforeAnimationStart](#canimationcontroller__onbeforeanimationstart)|Called by the framework right before the animation is scheduled.|  
|[CAnimationController::OnHasPriorityCancel](#canimationcontroller__onhasprioritycancel)|Called by the framework to resolve scheduling conflicts.|  
|[CAnimationController::OnHasPriorityCompress](#canimationcontroller__onhasprioritycompress)|Called by the framework to resolve scheduling conflicts.|  
|[CAnimationController::OnHasPriorityConclude](#canimationcontroller__onhaspriorityconclude)|Called by the framework to resolve scheduling conflicts.|  
|[CAnimationController::OnHasPriorityTrim](#canimationcontroller__onhasprioritytrim)|Called by the framework to resolve scheduling conflicts.|  
|[CAnimationController::OnStoryboardStatusChanged](#canimationcontroller__onstoryboardstatuschanged)|Called by the framework when storyboard status has changed.|  
|[CAnimationController::OnStoryboardUpdated](#canimationcontroller__onstoryboardupdated)|Called by the framework when storyboard has been updated.|  
|[CAnimationController::RemoveAllAnimationGroups](#canimationcontroller__removeallanimationgroups)|Removes all animation groups from animation controller.|  
|[CAnimationController::RemoveAnimationGroup](#canimationcontroller__removeanimationgroup)|Removes an animation group with specified ID from animation controller.|  
|[CAnimationController::RemoveAnimationObject](#canimationcontroller__removeanimationobject)|Remove an animation object from animation controller.|  
|[CAnimationController::RemoveTransitions](#canimationcontroller__removetransitions)|Removes transitions from animation objects that belong to the specified group.|  
|[CAnimationController::ScheduleGroup](#canimationcontroller__schedulegroup)|Schedules an animation.|  
|[CAnimationController::SetRelatedWnd](#canimationcontroller__setrelatedwnd)|Establishes a relationship between animation controller and a window.|  
|[CAnimationController::UpdateAnimationManager](#canimationcontroller__updateanimationmanager)|Directs the animation manager to update the values of all animation variables.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationController::CleanUpGroup](#canimationcontroller__cleanupgroup)|Overloaded. A helper that cleans up the group.|  
|[CAnimationController::OnAfterSchedule](#canimationcontroller__onafterschedule)|Called by the framework when an animation for the specified group has just been scheduled.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationController::gkeyframeStoryboardStart](#canimationcontroller__g_keyframestoryboardstart)|A keyframe that represents start of storyboard.|  
|[CAnimationController::m_bIsValid](#canimationcontroller__m_bisvalid)|Specifies whether an animation controller is valid or not. This member is set to FALSE if current OS does not support Windows Animation API.|  
|[CAnimationController::m_lstAnimationGroups](#canimationcontroller__m_lstanimationgroups)|A list of animation groups that belong to this animation controller.|  
|[CAnimationController::m_pAnimationManager](#canimationcontroller__m_panimationmanager)|Stores a pointer to Animation Manager COM object.|  
|[CAnimationController::m_pAnimationTimer](#canimationcontroller__m_panimationtimer)|Stores a pointer to Animation Timer COM object.|  
|[CAnimationController::m_pRelatedWnd](#canimationcontroller__m_prelatedwnd)|A pointer to a related CWnd object, which can be automatically redrawn when the status of animation manager has changed, or post update event has occurred. Can be NULL.|  
|[CAnimationController::m_pTransitionFactory](#canimationcontroller__m_ptransitionfactory)|Stores a pointer to Transition Factory COM object.|  
|[CAnimationController::m_pTransitionLibrary](#canimationcontroller__m_ptransitionlibrary)|Stores a pointer to Transition Library COM object.|  
  
## Remarks  
 The CAnimationController class is the key class that manages animations. You may create one or more instances of animation controller in an application and, optionally, connect an instance of animation controller to a CWnd object using CAnimationController::SetRelatedWnd. This connection is required to send WM_PAINT messages to the related window automatically when animation manager status has changed or animation timer has been updated. If you do not enable this relation, you must redraw a window that displays an animation manually. For this purpose you can derive a class from CAnimationController and override OnAnimationManagerStatusChanged and/or OnAnimationTimerPostUpdate and invalidate one or more windows when necessary.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationController](../../mfc/reference/canimationcontroller-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationcontroller___dtorcanimationcontroller"></a>  CAnimationController::~CAnimationController  
 The destructor. Called when animation controller object is being destroyed.  
  
```  
virtual ~CAnimationController(void);
```   
  
##  <a name="canimationcontroller__addanimationobject"></a>  CAnimationController::AddAnimationObject  
 Adds an animation object to a group that belongs to the animation controller.  
  
```  
CAnimationGroup* AddAnimationObject(CAnimationBaseObject* pObject);
```  
  
### Parameters  
 `pObject`  
 A pointer to an animation object.  
  
### Return Value  
 A pointer to existing or new animation group where pObject has been added if function succeeds; NULL if pObject has already been added to a group that belongs to another animation controller.  
  
### Remarks  
 Call this method to add an animation object to the animation controller. An object will be added to a group according to object's GroupID (see CAnimationBaseObject::SetID). The animation controller will create a new group if it's the first object being added with the specified GroupID. An animation object can be added to one animation controller only. If you need to add an object to another controller, call RemoveAnimationObject first. If you call SetID with new GroupID for an object that has been already added to a group, the object will be removed from the old group and added to another group with specified ID.  
  
##  <a name="canimationcontroller__addkeyframetogroup"></a>  CAnimationController::AddKeyframeToGroup  
 Adds a keyframe to group.  
  
```  
BOOL AddKeyframeToGroup(
    UINT32 nGroupID,  
    CBaseKeyFrame* pKeyframe);
```  
  
### Parameters  
 `nGroupID`  
 Specifies Group ID.  
  
 `pKeyframe`  
 A pointer to a keyframe.  
  
### Return Value  
 TRUE if the function succeeds; otherwise FALSE.  
  
### Remarks  
 Usually you don't need to call this method, use CAnimationController::CreateKeyframe instead, which creates and adds the created keyframe to a group automatically.  
  
##  <a name="canimationcontroller__animategroup"></a>  CAnimationController::AnimateGroup  
 Prepares a group to run animation and optionally schedules it.  
  
```  
BOOL AnimateGroup(
    UINT32 nGroupID,  
    BOOL bScheduleNow = TRUE);
```  
  
### Parameters  
 `nGroupID`  
 Specifies GroupID.  
  
 `bScheduleNow`  
 Specifies whether to run animation right away.  
  
### Return Value  
 TRUE if animation was successfully scheduled and run.  
  
### Remarks  
 This method does the actual work creating storyboard, adding animation variables, applying transitions and setting keyframes. It's possible to delay scheduling if you set bScheduleNow to FALSE. In this case the specified group will hold a storyboard that has been set up for animation. At that point you can setup events for the storyboard and animation variables. When you actually need to run the animation call CAnimationController::ScheduleGroup.  
  
##  <a name="canimationcontroller__canimationcontroller"></a>  CAnimationController::CAnimationController  
 Constructs an animation controller.  
  
```  
CAnimationController(void);
```   
  
##  <a name="canimationcontroller__cleanupgroup"></a>  CAnimationController::CleanUpGroup  
 Called by the framework to clean up the group when animation has been scheduled.  
  
```  
void CleanUpGroup(UINT32 nGroupID);

 
void CleanUpGroup(CAnimationGroup* pGroup);
```  
  
### Parameters  
 `nGroupID`  
 Specifies GroupID.  
  
 `pGroup`  
 A pointer to animation group to clean.  
  
### Remarks  
 This method removes all transitions and keyframes from the specified group, because they are not relevant after an animation has been scheduled.  
  
##  <a name="canimationcontroller__createkeyframe"></a>  CAnimationController::CreateKeyframe  
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
 `nGroupID`  
 Specifies Group ID for which keyframe is created.  
  
 `pTransition`  
 A pointer to transition. Keyframe will be inserted to storyboard after this transition.  
  
 `pKeyframe`  
 A pointer to base keyframe for this keyframe.  
  
 `offset`  
 Offset in seconds from the base keyframe specified by pKeyframe.  
  
### Return Value  
 A pointer to newly created keyframe if the function succeeds.  
  
### Remarks  
 You can store the returned pointer and base other keyframes on the newly created keyframe (see the second overload). It's possible to begin transitions at keyframes - see CBaseTransition::SetKeyframes. You don't need to delete keyframes created in this way, because they are deleted automatically by animation groups. Be careful when creating keyframes based on other keyframes and transitions and avoid circular references.  
  
##  <a name="canimationcontroller__enableanimationmanagerevent"></a>  CAnimationController::EnableAnimationManagerEvent  
 Sets or releases a handler to call when animation manager's status changes.  
  
```  
virtual BOOL EnableAnimationManagerEvent(BOOL bEnable = TRUE);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether to set or release a handler.  
  
### Return Value  
 TRUE if the handler was successfully set or released.  
  
### Remarks  
 When a handler is set (enabled) Windows Animation calls OnAnimationManagerStatusChanged when animation manager's status changes.  
  
##  <a name="canimationcontroller__enableanimationtimereventhandler"></a>  CAnimationController::EnableAnimationTimerEventHandler  
 Sets or releases a handler for timing events and handler for timing updates.  
  
```  
virtual BOOL EnableAnimationTimerEventHandler(
    BOOL bEnable = TRUE,  
    UI_ANIMATION_IDLE_BEHAVIOR idleBehavior = UI_ANIMATION_IDLE_BEHAVIOR_DISABLE);
```  
  
### Parameters  
 `bEnable`  
 Specifies whether to set or release the handlers.  
  
 `idleBehavior`  
 Specifies idle behavior for timer update handler.  
  
### Return Value  
 TRUE if handlers were successfully set or released; FALSE if this method is called for a second time without releasing the handlers first, or if any other error occurs.  
  
### Remarks  
 When the handlers are set (enabled) Windows Animation API calls OnAnimationTimerPreUpdate, OnAnimationTimerPostUpdate, OnRenderingTooSlow methods. You need to enable animation timers to allow Windows Animation API update storyboards. Otherwise you'll need to call CAnimationController::UpdateAnimationManager in order to direct the animation manager to update the values of all animation variables.  
  
##  <a name="canimationcontroller__enableprioritycomparisonhandler"></a>  CAnimationController::EnablePriorityComparisonHandler  
 Sets or releases the priority comparison handler to call to determine whether a scheduled storyboard can be cancelled, concluded, trimmed or compressed.  
  
```  
virtual BOOL EnablePriorityComparisonHandler(DWORD dwHandlerType);
```  
  
### Parameters  
 `dwHandlerType`  
 A combination of UI_ANIMATION_PHT_ flags (see remarks), which specifies what handlers to set or release.  
  
### Return Value  
 TRUE if the handler was successfully set or released.  
  
### Remarks  
 When a handler is set (enabled) Windows Animation calls the following virtual methods depending on dwHandlerType: OnHasPriorityCancel, OnHasPriorityConclude, OnHasPriorityTrim, OnHasPriorityCompress. dwHandler can be a combination of the following flags: UI_ANIMATION_PHT_NONE - release all handlers UI_ANIMATION_PHT_CANCEL - set Cancel comparison handler UI_ANIMATION_PHT_CONCLUDE - set Conclude comparison handler UI_ANIMATION_PHT_COMPRESS - set Compress comparison handler UI_ANIMATION_PHT_TRIM - set Trim comparison handler UI_ANIMATION_PHT_CANCEL_REMOVE - remove Cancel comparison handler UI_ANIMATION_PHT_CONCLUDE_REMOVE - remove Conclude comparison handler UI_ANIMATION_PHT_COMPRESS_REMOVE - remove Compress comparison handler UI_ANIMATION_PHT_TRIM_REMOVE - remove Trim comparison handler  
  
##  <a name="canimationcontroller__enablestoryboardeventhandler"></a>  CAnimationController::EnableStoryboardEventHandler  
 Sets or releases a handler for storyboard status and update events.  
  
```  
virtual BOOL EnableStoryboardEventHandler(
    UINT32 nGroupID,  
    BOOL bEnable = TRUE);
```  
  
### Parameters  
 `nGroupID`  
 Specifies Group ID.  
  
 `bEnable`  
 Specifies whether to set or release a handler.  
  
### Return Value  
 TRUE if the handler was successfully set or released; FALSE if the specified animation group is now found or animation for the specified group has not been initiated and its internal storyboard is NULL.  
  
### Remarks  
 When a handler is set (enabled) Windows Animation API calls OnStoryboardStatusChanges and OnStoryboardUpdated virtual methods. A handler must be set after CAnimationController::Animate has been called for the specified animation group, because it creates encapsulated IUIAnimationStoryboard object.  
  
##  <a name="canimationcontroller__findanimationgroup"></a>  CAnimationController::FindAnimationGroup  
 Finds an animation group by its Group ID.  
  
```  
CAnimationGroup* FindAnimationGroup(UINT32 nGroupID);

 
CAnimationGroup* FindAnimationGroup(IUIAnimationStoryboard* pStoryboard);
```  
  
### Parameters  
 `nGroupID`  
 Specifies a GroupID.  
  
 `pStoryboard`  
 A pointer to a storyboard.  
  
### Return Value  
 A pointer to animation group or NULL if the group with specified ID is not found.  
  
### Remarks  
 Use this method to find an animation group at runtime. A group is created and added to the internal list of animation groups when a first animation object with particular GroupID is being added to animation controller.  
  
##  <a name="canimationcontroller__findanimationobject"></a>  CAnimationController::FindAnimationObject  
 Finds animation object containing a specified animation variable.  
  
```  
BOOL FindAnimationObject(
    IUIAnimationVariable* pVariable,  
    CAnimationBaseObject** ppObject,  
    CAnimationGroup** ppGroup);
```  
  
### Parameters  
 `pVariable`  
 A pointer to animation variable.  
  
 `ppObject`  
 Output. Contains a pointer to animation object or NULL.  
  
 `ppGroup`  
 Output. Contains a pointer to animation group that holds the animation object, or NULL.  
  
### Return Value  
 TRUE if object was found; otherwise FALSE.  
  
### Remarks  
 Called from event handlers when it's required to find an animation object from incoming animation variable.  
  
##  <a name="canimationcontroller__g_keyframestoryboardstart"></a>  CAnimationController::gkeyframeStoryboardStart  
 A keyframe that represents start of storyboard.  
  
```  
static CBaseKeyFrame gkeyframeStoryboardStart;  
```  
  
##  <a name="canimationcontroller__getkeyframestoryboardstart"></a>  CAnimationController::GetKeyframeStoryboardStart  
 Returns a keyframe that identifies start of storyboard.  
  
```  
static CBaseKeyFrame* GetKeyframeStoryboardStart();
```  
  
### Return Value  
 A pointer to base keyframe, which identifies start of storyboard.  
  
### Remarks  
 Obtain this keyframe to base any other keyframes or transitions on the moment in time when a storyboard starts.  
  
##  <a name="canimationcontroller__getuianimationmanager"></a>  CAnimationController::GetUIAnimationManager  
 Provides access to encapsulated IUIAnimationManager object.  
  
```  
IUIAnimationManager* GetUIAnimationManager();
```  
  
### Return Value  
 A pointer to IUIAnimationManager interface or NULL, if creation of animation manager failed.  
  
### Remarks  
 If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE. You may need to access IUIAnimationManager in order to call its interface methods, which are not wrapped by animation controller.  
  
##  <a name="canimationcontroller__getuianimationtimer"></a>  CAnimationController::GetUIAnimationTimer  
 Provides access to encapsulated IUIAnimationTimer object.  
  
```  
IUIAnimationTimer* GetUIAnimationTimer();
```  
  
### Return Value  
 A pointer to IUIAnimationTimer interface or NULL, if creation of animation timer failed.  
  
### Remarks  
 If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.  
  
##  <a name="canimationcontroller__getuitransitionfactory"></a>  CAnimationController::GetUITransitionFactory  
 A pointer to IUIAnimationTransitionFactory interface or NULL, if creation of transition library failed.  
  
```  
IUIAnimationTransitionFactory* GetUITransitionFactory();
```  
  
### Return Value  
 A pointer to IUIAnimationTransitionFactory or NULL, if creation of transition factory failed.  
  
### Remarks  
 If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.  
  
##  <a name="canimationcontroller__getuitransitionlibrary"></a>  CAnimationController::GetUITransitionLibrary  
 Provides access to encapsulated IUIAnimationTransitionLibrary object.  
  
```  
IUIAnimationTransitionLibrary* GetUITransitionLibrary();
```  
  
### Return Value  
 A pointer to IUIAnimationTransitionLibrary interface or NULL, if creation of transition library failed.  
  
### Remarks  
 If current OS does not support Windows Animation API, this method returns NULL and after that all subsequent calls on CAnimationController::IsValid return FALSE.  
  
##  <a name="canimationcontroller__isanimationinprogress"></a>  CAnimationController::IsAnimationInProgress  
 Tells whether at least one group is playing animation.  
  
```  
virtual BOOL IsAnimationInProgress();
```  
  
### Return Value  
 TRUE if there is an animation in progress for this animation controller; otherwise FALSE.  
  
### Remarks  
 Checks status of animation manager and returns TRUE if the status is UI_ANIMATION_MANAGER_BUSY.  
  
##  <a name="canimationcontroller__isvalid"></a>  CAnimationController::IsValid  
 Tells whether animation controller is valid.  
  
```  
BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if animation controller is valid; otherwise FALSE.  
  
### Remarks  
 This method returns FALSE only if Windows Animation API is not supported on the current OS and creation of animation manager failed because it's not registered. You need to call GetUIAnimationManager at least once after initialization of COM libraries to cause setting of this flag.  
  
##  <a name="canimationcontroller__m_bisvalid"></a>  CAnimationController::m_bIsValid  
 Specifies whether an animation controller is valid or not. This member is set to FALSE if current OS does not support Windows Animation API.  
  
```  
BOOL m_bIsValid;  
```  
  
##  <a name="canimationcontroller__m_lstanimationgroups"></a>  CAnimationController::m_lstAnimationGroups  
 A list of animation groups that belong to this animation controller.  
  
```  
CList<CAnimationGroup*, CAnimationGroup*> m_lstAnimationGroups;  
```  
  
##  <a name="canimationcontroller__m_panimationmanager"></a>  CAnimationController::m_pAnimationManager  
 Stores a pointer to Animation Manager COM object.  
  
```  
ATL::CComPtr<IUIAnimationManager> m_pAnimationManager;  
```  
  
##  <a name="canimationcontroller__m_panimationtimer"></a>  CAnimationController::m_pAnimationTimer  
 Stores a pointer to Animation Timer COM object.  
  
```  
ATL::CComPtr<IUIAnimationTimer> m_pAnimationTimer;  
```  
  
##  <a name="canimationcontroller__m_prelatedwnd"></a>  CAnimationController::m_pRelatedWnd  
 A pointer to a related CWnd object, which can be automatically redrawn when the status of animation manager has changed, or post update event has occurred. Can be NULL.  
  
```  
CWnd* m_pRelatedWnd;  
```  
  
##  <a name="canimationcontroller__m_ptransitionfactory"></a>  CAnimationController::m_pTransitionFactory  
 Stores a pointer to Transition Factory COM object.  
  
```  
ATL::CComPtr<IUIAnimationTransitionFactory> m_pTransitionFactory;  
```  
  
##  <a name="canimationcontroller__m_ptransitionlibrary"></a>  CAnimationController::m_pTransitionLibrary  
 Stores a pointer to Transition Library COM object.  
  
```  
ATL::CComPtr<IUIAnimationTransitionLibrary> m_pTransitionLibrary;  
```  
  
##  <a name="canimationcontroller__onafterschedule"></a>  CAnimationController::OnAfterSchedule  
 Called by the framework when an animation for the specified group has just been scheduled.  
  
```  
virtual void OnAfterSchedule(CAnimationGroup* pGroup);
```  
  
### Parameters  
 `pGroup`  
 A pointer to an animation group, which has been scheduled.  
  
### Remarks  
 The default implementation removes keyframes from the specified group and transitions from animation variables that belong to the specified group. Can be overridden in a derived class to take any additional actions upon animation schedule.  
  
##  <a name="canimationcontroller__onanimationintegervaluechanged"></a>  CAnimationController::OnAnimationIntegerValueChanged  
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
 `pGroup`  
 A pointer to an animation group that holds an animation object whose value has changed.  
  
 `pObject`  
 A pointer to an animation object that contains an animation variable whose value has changed.  
  
 `variable`  
 A pointer to an animation variable.  
  
 `newValue`  
 Specifies new value.  
  
 `prevValue`  
 Specifies previous value.  
  
### Remarks  
 This method is called if you enable animation variable events with EnableIntegerValueChangedEvent called for a specific animation variable or animation object. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__onanimationmanagerstatuschanged"></a>  CAnimationController::OnAnimationManagerStatusChanged  
 Called by the framework in response to StatusChanged event from animation manager.  
  
```  
virtual void OnAnimationManagerStatusChanged(
    UI_ANIMATION_MANAGER_STATUS newStatus,  
    UI_ANIMATION_MANAGER_STATUS previousStatus);
```  
  
### Parameters  
 `newStatus`  
 New animation manager status.  
  
 `previousStatus`  
 Previous animation manager status.  
  
### Remarks  
 This method is called if you enable animation manager events with EnableAnimationManagerEvent. It can be overridden in a derived class to take application-specific actions. The default implementation updates a related window if it has been set with SetRelatedWnd.  
  
##  <a name="canimationcontroller__onanimationtimerpostupdate"></a>  CAnimationController::OnAnimationTimerPostUpdate  
 Called by the framework after an animation update is finished.  
  
```  
virtual void OnAnimationTimerPostUpdate();
```  
  
### Remarks  
 This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__onanimationtimerpreupdate"></a>  CAnimationController::OnAnimationTimerPreUpdate  
 Called by the framework before an animation update begins.  
  
```  
virtual void OnAnimationTimerPreUpdate();
```  
  
### Remarks  
 This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__onanimationtimerrenderingtooslow"></a>  CAnimationController::OnAnimationTimerRenderingTooSlow  
 Called by the framework when the rendering frame rate for an animation falls below a minimum desirable frame rate.  
  
```  
virtual void OnAnimationTimerRenderingTooSlow(UINT32 fps);
```  
  
### Parameters  
 `fps`  
 The current frame rate in frames per second.  
  
### Remarks  
 This method is called if you enable timer event handlers using EnableAnimationTimerEventHandler. It can be overridden in a derived class to take application-specific actions. The minimum desirable frame rate is specified by calling IUIAnimationTimer::SetFrameRateThreshold.  
  
##  <a name="canimationcontroller__onanimationvaluechanged"></a>  CAnimationController::OnAnimationValueChanged  
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
 `pGroup`  
 A pointer to an animation group that holds an animation object whose value has changed.  
  
 `pObject`  
 A pointer to an animation object that contains an animation variable whose value has changed.  
  
 `variable`  
 A pointer to an animation variable.  
  
 `newValue`  
 Specifies new value.  
  
 `prevValue`  
 Specifies previous value.  
  
### Remarks  
 This method is called if you enable animation variable events with EnableValueChangedEvent called for a specific animation variable or animation object. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__onbeforeanimationstart"></a>  CAnimationController::OnBeforeAnimationStart  
 Called by the framework right before the animation is scheduled.  
  
```  
virtual void OnBeforeAnimationStart(CAnimationGroup* pGroup);
```  
  
### Parameters  
 `pGroup`  
 A pointer to an animation group whose animation is about to start.  
  
### Remarks  
 This call is routed to related CWnd and can be overridden in a derived class to perform any additional actions before the animation starts for the specified group.  
  
##  <a name="canimationcontroller__onhasprioritycancel"></a>  CAnimationController::OnHasPriorityCancel  
 Called by the framework to resolve scheduling conflicts.  
  
```  
virtual BOOL OnHasPriorityCancel(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### Parameters  
 `pGroupScheduled`  
 The group that owns the currently scheduled storyboard.  
  
 `pGroupNew`  
 The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.  
  
 `priorityEffect`  
 The potential effect on pGroupNew if pGroupScheduled has a higher priority.  
  
### Return Value  
 Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.  
  
### Remarks  
 This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_CANCEL. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about Conflict Management (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="canimationcontroller__onhasprioritycompress"></a>  CAnimationController::OnHasPriorityCompress  
 Called by the framework to resolve scheduling conflicts.  
  
```  
virtual BOOL OnHasPriorityCompress(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### Parameters  
 `pGroupScheduled`  
 The group that owns the currently scheduled storyboard.  
  
 `pGroupNew`  
 The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.  
  
 `priorityEffect`  
 The potential effect on pGroupNew if pGroupScheduled has a higher priority.  
  
### Return Value  
 Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.  
  
### Remarks  
 This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_COMPRESS. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about Conflict Management (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="canimationcontroller__onhaspriorityconclude"></a>  CAnimationController::OnHasPriorityConclude  
 Called by the framework to resolve scheduling conflicts.  
  
```  
virtual BOOL OnHasPriorityConclude(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### Parameters  
 `pGroupScheduled`  
 The group that owns the currently scheduled storyboard.  
  
 `pGroupNew`  
 The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.  
  
 `priorityEffect`  
 The potential effect on pGroupNew if pGroupScheduled has a higher priority.  
  
### Return Value  
 Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.  
  
### Remarks  
 This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_CONCLUDE. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about Conflict Management (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="canimationcontroller__onhasprioritytrim"></a>  CAnimationController::OnHasPriorityTrim  
 Called by the framework to resolve scheduling conflicts.  
  
```  
virtual BOOL OnHasPriorityTrim(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### Parameters  
 `pGroupScheduled`  
 The group that owns the currently scheduled storyboard.  
  
 `pGroupNew`  
 The group that owns the new storyboard that is in scheduling conflict with the scheduled storyboard owned by pGroupScheduled.  
  
 `priorityEffect`  
 The potential effect on pGroupNew if pGroupScheduled has a higher priority.  
  
### Return Value  
 Should return TRUE if storyboard owned by pGroupNew has priority. Should return FALSE if storyboard owned by pGroupScheduled has priority.  
  
### Remarks  
 This method is called if you enable priority comparison events using CAnimationController::EnablePriorityComparisonHandler and specify UI_ANIMATION_PHT_TRIM. It can be overridden in a derived class to take application-specific actions. Read Windows Animation API documentation for more information about Conflict Management (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="canimationcontroller__onstoryboardstatuschanged"></a>  CAnimationController::OnStoryboardStatusChanged  
 Called by the framework when storyboard status has changed.  
  
```  
virtual void OnStoryboardStatusChanged(
    CAnimationGroup* pGroup,  
    UI_ANIMATION_STORYBOARD_STATUS newStatus,  
    UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```  
  
### Parameters  
 `pGroup`  
 A pointer to an animation group that owns the storyboard whose status has changed.  
  
 `newStatus`  
 Specifies the new status.  
  
 `previousStatus`  
 Specifies the previous status.  
  
### Remarks  
 This method is called if you enable storyboard events using CAnimationController::EnableStoryboardEventHandler. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__onstoryboardupdated"></a>  CAnimationController::OnStoryboardUpdated  
 Called by the framework when storyboard has been updated.  
  
```  
virtual void OnStoryboardUpdated(CAnimationGroup* pGroup);
```  
  
### Parameters  
 `pGroup`  
 A pointer to a group that owns the storyboard.  
  
### Remarks  
 This method is called if you enable storyboard events using CAnimationController::EnableStoryboardEventHandler. It can be overridden in a derived class to take application-specific actions.  
  
##  <a name="canimationcontroller__removeallanimationgroups"></a>  CAnimationController::RemoveAllAnimationGroups  
 Removes all animation groups from animation controller.  
  
```  
void RemoveAllAnimationGroups();
```  
  
### Remarks  
 All groups will be deleted, their pointer, if stored at the application level, must be invalidated. If CAnimationGroup::m_bAutodestroyAnimationObjects for a group being deleted is TRUE, all animation objects that belong to that group will be deleted; otherwise their references to parent animation controller will be set to NULL and they can be added to another controller.  
  
##  <a name="canimationcontroller__removeanimationgroup"></a>  CAnimationController::RemoveAnimationGroup  
 Removes an animation group with specified ID from animation controller.  
  
```  
void RemoveAnimationGroup(UINT32 nGroupID);
```  
  
### Parameters  
 `nGroupID`  
 Specifies animation group ID.  
  
### Remarks  
 This method removes an animation group from the internal list of groups and deletes it, therefore if you stored a pointer to that animation group, it must be invalidated. If CAnimationGroup::m_bAutodestroyAnimationObjects is TRUE, all animation objects that belong to that group will be deleted; otherwise their references to parent animation controller will be set to NULL and they can be added to another controller.  
  
##  <a name="canimationcontroller__removeanimationobject"></a>  CAnimationController::RemoveAnimationObject  
 Remove an animation object from animation controller.  
  
```  
void RemoveAnimationObject(
    CAnimationBaseObject* pObject,  
    BOOL bNoDelete = FALSE);
```  
  
### Parameters  
 `pObject`  
 A pointer to an animation object.  
  
 `bNoDelete`  
 If this parameter is TRUE the object will not be deleted upon remove.  
  
### Remarks  
 Removes an animation object from animation controller and animation group. Call this function if a particular object should not be animated anymore, or if you need to move the object to another animation controller. In the last case bNoDelete must be TRUE.  
  
##  <a name="canimationcontroller__removetransitions"></a>  CAnimationController::RemoveTransitions  
 Removes transitions from animation objects that belong to the specified group.  
  
```  
void RemoveTransitions(UINT32 nGroupID);
```  
  
### Parameters  
 `nGroupID`  
 Specifies Group ID.  
  
### Remarks  
 The group loops over its animation objects and calls ClearTransitions(FALSE) for each animation object. This method is called by the framework after animation has been scheduled.  
  
##  <a name="canimationcontroller__schedulegroup"></a>  CAnimationController::ScheduleGroup  
 Schedules an animation.  
  
```  
BOOL ScheduleGroup(
    UINT32 nGroupID,  
    UI_ANIMATION_SECONDS time = 0.0);
```  
  
### Parameters  
 `nGroupID`  
 Specifies animation Group ID to schedule.  
  
 `time`  
 Specifies time to schedule.  
  
### Return Value  
 TRUE if animation was scheduled successfully. FALSE if storyboard has not been created, or other error occurs.  
  
### Remarks  
 You must call AnimateGroup with parameter bScheduleNow set to FALSE prior ScheduleGroup. You can specify the desired animation time obtained from IUIAnimationTimer::GetTime. If the time parameter is 0.0, the animation is scheduled for the current time.  
  
##  <a name="canimationcontroller__setrelatedwnd"></a>  CAnimationController::SetRelatedWnd  
 Establishes a relationship between animation controller and a window.  
  
```  
void SetRelatedWnd(CWnd* pWnd);
```  
  
### Parameters  
 `pWnd`  
 A pointer to window object to set.  
  
### Remarks  
 If a related CWnd object is set, the animation controller can automatically update it (send WM_PAINT message) when the status of animation manager has changed or timer post update event has occurred.  
  
##  <a name="canimationcontroller__updateanimationmanager"></a>  CAnimationController::UpdateAnimationManager  
 Directs the animation manager to update the values of all animation variables.  
  
```  
virtual void UpdateAnimationManager();
```  
  
### Remarks  
 Calling this method advances the animation manager to current time, changing statuses of storyboards as necessary and updating any animation variables to appropriate interpolated values. Internally this method calls IUIAnimationTimer::GetTime(timeNow) and IUIAnimationManager::Update(timeNow). Override this method in a derived class to customize this behavior.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
