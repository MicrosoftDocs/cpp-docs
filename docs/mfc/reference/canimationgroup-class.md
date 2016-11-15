---
title: "CAnimationGroup Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationGroup"
  - "CAnimationGroup"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationGroup class"
ms.assetid: 8bc18ceb-33a2-41d0-9731-71811adacab7
caps.latest.revision: 17
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
# CAnimationGroup Class
Implements an animation group, which combines an animation storyboard, animation objects, and transitions to define an animation.  
  
## Syntax  
  
```  
class CAnimationGroup;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationGroup::CAnimationGroup](#canimationgroup__canimationgroup)|Constructs an animation group.|  
|[CAnimationGroup::~CAnimationGroup](#canimationgroup__~canimationgroup)|The destructor. Called when an animation group is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationGroup::Animate](#canimationgroup__animate)|Animates a group.|  
|[CAnimationGroup::ApplyTransitions](#canimationgroup__applytransitions)|Applies transitions to animation objects.|  
|[CAnimationGroup::FindAnimationObject](#canimationgroup__findanimationobject)|Finds an animation object that contains the specified animation variable.|  
|[CAnimationGroup::GetGroupID](#canimationgroup__getgroupid)|Returns GroupID.|  
|[CAnimationGroup::RemoveKeyframes](#canimationgroup__removekeyframes)|Removes and optionally destroys all keyframes that belong to an animation group.|  
|[CAnimationGroup::RemoveTransitions](#canimationgroup__removetransitions)|Removes transitions from animation objects that belong to an animation group.|  
|[CAnimationGroup::Schedule](#canimationgroup__schedule)|Schedules an animation at the specified time.|  
|[CAnimationGroup::SetAutodestroyTransitions](#canimationgroup__setautodestroytransitions)|Directs all animation objects that belong to group automatically destroy transitions.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationGroup::AddKeyframes](#canimationgroup__addkeyframes)|A helper that adds keyframes to a storyboard.|  
|[CAnimationGroup::AddTransitions](#canimationgroup__addtransitions)|A helper that adds transitions to a storyboard.|  
|[CAnimationGroup::CreateTransitions](#canimationgroup__createtransitions)|A helper that creates COM transition objects.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationGroup::m_bAutoclearTransitions](#canimationgroup__m_bautocleartransitions)|Specifies how to clear transitions from animation objects that belong to group. If this member is TRUE, transitions are removed automatically when an animation has been scheduled. Otherwise you need to remove transitions manually.|  
|[CAnimationGroup::m_bAutodestroyAnimationObjects](#canimationgroup__m_bautodestroyanimationobjects)|Specifies how to destroy animation objects. If this parameter is TRUE, animation objects will be destroyed automatically when the group is destroyed. Otherwise animation objects must be destroyed manually. The default value is FALSE. Set this value to TRUE only if all animation objects that belong to group are allocated dynamically with operator new.|  
|[CAnimationGroup::m_bAutodestroyKeyframes](#canimationgroup__m_bautodestroykeyframes)|Specifies how to destroy keyframes. If this value is TRUE, all keyframes are removed and destroyed; otherwise they are removed from the list only. The default value is TRUE.|  
|[CAnimationGroup::m_lstAnimationObjects](#canimationgroup__m_lstanimationobjects)|Contains a list of animation objects.|  
|[CAnimationGroup::m_lstKeyFrames](#canimationgroup__m_lstkeyframes)|Contains a list of keyframes.|  
|[CAnimationGroup::m_pStoryboard](#canimationgroup__m_pstoryboard)|Points to animation storyboard. This pointer is valid only after call on Animate.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationGroup::m_nGroupID](#canimationgroup__m_ngroupid)|A unique identifier of animation group.|  
|[CAnimationGroup::m_pParentController](#canimationgroup__m_pparentcontroller)|A pointer to animation controller this group belongs to.|  
  
## Remarks  
 Animation groups are created automatically by animation controller (CAnimationController) when you add animation objects using CAnimationController::AddAnimationObject. An animation group is identified by GroupID, which is usually taken as a parameter to manipulate animation groups. The GroupID is taken from the first animation object being added to a new animation group. An encapsulated animation storyboard is created after you call CAnimationController::AnimateGroup and can be accessed via public member m_pStoryboard.  
  
## Inheritance Hierarchy  
 [CAnimationGroup](../../mfc/reference/canimationgroup-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationgroup___dtorcanimationgroup"></a>  CAnimationGroup::~CAnimationGroup  
 The destructor. Called when an animation group is being destroyed.  
  
```  
~CAnimationGroup();
```  
  
##  <a name="canimationgroup__addkeyframes"></a>  CAnimationGroup::AddKeyframes  
 A helper that adds keyframes to a storyboard.  
  
```  
void AddKeyframes(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bAddDeep);
```  
  
### Parameters  
 `pStoryboard`  
 A pointer to a storyboard COM object.  
  
 `bAddDeep`  
 Specifies whether this method should add to the storyboard keyframes that depend on other keyframes.  
  
##  <a name="canimationgroup__addtransitions"></a>  CAnimationGroup::AddTransitions  
 A helper that adds transitions to a storyboard.  
  
```  
void AddTransitions(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### Parameters  
 `pStoryboard`  
 A pointer to a storyboard COM object.  
  
 `bDependOnKeyframes`  
  
##  <a name="canimationgroup__animate"></a>  CAnimationGroup::Animate  
 Animates a group.  
  
```  
BOOL Animate(
    IUIAnimationManager* pManager,  
    IUIAnimationTimer* pTimer,  
    BOOL bScheduleNow);
```  
  
### Parameters  
 `pManager`  
 `pTimer`  
 `bScheduleNow`  
  
### Return Value  
 TRUE if the method succeeds; otherwise FALSE.  
  
### Remarks  
 This method creates an internal storyboard, creates and applies transitions and schedules an animation if bScheduleNow is TRUE. If bScheduleNow is FALSE, you need to call Schedule to start animation at the specified time.  
  
##  <a name="canimationgroup__applytransitions"></a>  CAnimationGroup::ApplyTransitions  
 Applies transitions to animation objects.  
  
```  
void ApplyTransitions();
```  
  
### Remarks  
 This method ASSERTS in debug mode if storyboard has not been created. It creates all transitions first, then adds "static" keyframes (keyframes that depend on offsets), adds transitions that do not depend on keyframes, adds keyframes depending on transitions and other keyframes, and at last adds transitions that depend on keyframes.  
  
##  <a name="canimationgroup__canimationgroup"></a>  CAnimationGroup::CAnimationGroup  
 Constructs an animation group.  
  
```  
CAnimationGroup(
    CAnimationController* pParentController,  
    UINT32 nGroupID);
```  
  
### Parameters  
 `pParentController`  
 A pointer to animation controller that creates a group.  
  
 `nGroupID`  
 Specifies GroupID.  
  
##  <a name="canimationgroup__createtransitions"></a>  CAnimationGroup::CreateTransitions  
 A helper that creates COM transition objects.  
  
```  
BOOL CreateTransitions();
```  
  
### Return Value  
 TRUE is the method succeeds, otherwise FALSE.  
  
##  <a name="canimationgroup__findanimationobject"></a>  CAnimationGroup::FindAnimationObject  
 Finds an animation object that contains the specified animation variable.  
  
```  
CAnimationBaseObject* FindAnimationObject(IUIAnimationVariable* pVariable);
```  
  
### Parameters  
 `pVariable`  
 A pointer to animation variable.  
  
### Return Value  
 A pointer to animation object, or NULL if animation object is not found.  
  
##  <a name="canimationgroup__getgroupid"></a>  CAnimationGroup::GetGroupID  
 Returns GroupID.  
  
```  
UINT32 GetGroupID() const;

 
```  
  
### Return Value  
 A group identifier.  
  
##  <a name="canimationgroup__m_bautocleartransitions"></a>  CAnimationGroup::m_bAutoclearTransitions  
 Specifies how to clear transitions from animation objects that belong to group. If this member is TRUE, transitions are removed automatically when an animation has been scheduled. Otherwise you need to remove transitions manually.  
  
```  
BOOL m_bAutoclearTransitions;  
```  
  
##  <a name="canimationgroup__m_bautodestroyanimationobjects"></a>  CAnimationGroup::m_bAutodestroyAnimationObjects  
 Specifies how to destroy animation objects. If this parameter is TRUE, animation objects will be destroyed automatically when the group is destroyed. Otherwise animation objects must be destroyed manually. The default value is FALSE. Set this value to TRUE only if all animation objects that belong to group are allocated dynamically with operator new.  
  
```  
BOOL m_bAutodestroyAnimationObjects;  
```  
  
##  <a name="canimationgroup__m_bautodestroykeyframes"></a>  CAnimationGroup::m_bAutodestroyKeyframes  
 Specifies how to destroy keyframes. If this value is TRUE, all keyframes are removed and destroyed; otherwise they are removed from the list only. The default value is TRUE.  
  
```  
BOOL m_bAutodestroyKeyframes;  
```  
  
##  <a name="canimationgroup__m_lstanimationobjects"></a>  CAnimationGroup::m_lstAnimationObjects  
 Contains a list of animation objects.  
  
```  
CObList m_lstAnimationObjects;  
```  
  
##  <a name="canimationgroup__m_lstkeyframes"></a>  CAnimationGroup::m_lstKeyFrames  
 Contains a list of keyframes.  
  
```  
CObList m_lstKeyFrames;  
```  
  
##  <a name="canimationgroup__m_ngroupid"></a>  CAnimationGroup::m_nGroupID  
 A unique identifier of animation group.  
  
```  
UINT32 m_nGroupID;  
```  
  
##  <a name="canimationgroup__m_pparentcontroller"></a>  CAnimationGroup::m_pParentController  
 A pointer to animation controller this group belongs to.  
  
```  
CAnimationController* m_pParentController;  
```  
  
##  <a name="canimationgroup__m_pstoryboard"></a>  CAnimationGroup::m_pStoryboard  
 Points to animation storyboard. This pointer is valid only after call on Animate.  
  
```  
ATL::CComPtr<IUIAnimationStoryboard> m_pStoryboard;  
```  
  
##  <a name="canimationgroup__removekeyframes"></a>  CAnimationGroup::RemoveKeyframes  
 Removes and optionally destroys all keyframes that belong to an animation group.  
  
```  
void RemoveKeyframes();
```  
  
### Remarks  
 If m_bAutodestroyKeyframes member is TRUE then keyframes are removed and destroyed, otherwise keyframes are just removed from the internal list of keyframes.  
  
##  <a name="canimationgroup__removetransitions"></a>  CAnimationGroup::RemoveTransitions  
 Removes transitions from animation objects that belong to an animation group.  
  
```  
void RemoveTransitions();
```  
  
### Remarks  
 If m_bAutoclearTransitions flag is set to TRUE, this method loops over all animation objects that belong to the group and calls CAnimationObject::ClearTransitions(FALSE).  
  
##  <a name="canimationgroup__schedule"></a>  CAnimationGroup::Schedule  
 Schedules an animation at the specified time.  
  
```  
BOOL Schedule(
    IUIAnimationTimer* pTimer,  
    UI_ANIMATION_SECONDS time);
```  
  
### Parameters  
 `pTimer`  
 A pointer to animation timer.  
  
 `time`  
 Specifies time to schedule the animation.  
  
### Return Value  
 TRUE if the method succeeds; FALSE if the method fails or if Animate has not been called with bScheduleNow set to FALSE.  
  
### Remarks  
 Call this function to schedule an animation at the specified time. You must call Animate with bScheduleNow set to FALSE first.  
  
##  <a name="canimationgroup__setautodestroytransitions"></a>  CAnimationGroup::SetAutodestroyTransitions  
 Directs all animation objects that belong to group automatically destroy transitions.  
  
```  
void SetAutodestroyTransitions(BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `bAutoDestroy`  
 Specifies how to destroy transitions.  
  
### Remarks  
 Set this value to FALSE only if you allocate transitions on the stack. The default value is TRUE, therefore it's highly recommended to allocate transition objects using operator new.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
