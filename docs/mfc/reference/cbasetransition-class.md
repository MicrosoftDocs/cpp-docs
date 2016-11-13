---
title: "CBaseTransition Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBaseTransition"
  - "afxanimationcontroller/CBaseTransition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBaseTransition class"
ms.assetid: dfe84007-bbc5-43b7-b5b8-fae9145573bf
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
# CBaseTransition Class
Represents a basic transition.  
  
## Syntax  
  
```  
class CBaseTransition : public CObject;  
```  
  
## Members  
  
### Public Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseTransition::TRANSITION_TYPE Enumeration](#cbasetransition__transition_type_enumeration)|Defines the transition types currently supported by the MFC implementation of Windows Animation API.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseTransition::CBaseTransition](#cbasetransition__cbasetransition)|Constructs a base transtion object.|  
|[CBaseTransition::~CBaseTransition](#cbasetransition__~cbasetransition)|The destructor. Called when a transition object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseTransition::AddToStoryboard](#cbasetransition__addtostoryboard)|Adds a transition to a storyboard.|  
|[CBaseTransition::AddToStoryboardAtKeyframes](#cbasetransition__addtostoryboardatkeyframes)|Adds a transition to a storyboard.|  
|[CBaseTransition::Clear](#cbasetransition__clear)|Releases encapsulated IUIAnimationTransition COM object.|  
|[CBaseTransition::Create](#cbasetransition__create)|Creates a COM transition.|  
|[CBaseTransition::GetEndKeyframe](#cbasetransition__getendkeyframe)|Returns start keyframe.|  
|[CBaseTransition::GetRelatedVariable](#cbasetransition__getrelatedvariable)|Returns a pointer to related variable.|  
|[CBaseTransition::GetStartKeyframe](#cbasetransition__getstartkeyframe)|Returns start keyframe.|  
|[CBaseTransition::GetTransition](#cbasetransition__gettransition)|Overloaded. Returns a pointer to underlying COM transition object.|  
|[CBaseTransition::GetType](#cbasetransition__gettype)|Returns transition type.|  
|[CBaseTransition::IsAdded](#cbasetransition__isadded)|Tells whether a transition has been added to a storyboard.|  
|[CBaseTransition::SetKeyframes](#cbasetransition__setkeyframes)|Sets keyframes for a transition.|  
|[CBaseTransition::SetRelatedVariable](#cbasetransition__setrelatedvariable)|Establishes a relationship between animation variable and transition.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseTransition::m_bAdded](#cbasetransition__m_badded)|Specifies whether a transition has been added to a storyboard.|  
|[CBaseTransition::m_pEndKeyframe](#cbasetransition__m_pendkeyframe)|Stores a pointer to the keyframe that specifies the end of the transition.|  
|[CBaseTransition::m_pRelatedVariable](#cbasetransition__m_prelatedvariable)|A pointer to an animation variable, which is animated with the transition stored in m_transition.|  
|[CBaseTransition::m_pStartKeyframe](#cbasetransition__m_pstartkeyframe)|Stores a pointer to the keyframe that specifies the beginning of the transition.|  
|[CBaseTransition::m_transition](#cbasetransition__m_transition)|Stores a pointer to IUIAnimationTransition. NULL if a COM transition object has not been created.|  
|[CBaseTransition::m_type](#cbasetransition__m_type)|Stores the transition type.|  
  
## Remarks  
 This class encapsulates IUIAnimationTransition interface and serves as a base class for all transitions.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cbasetransition___dtorcbasetransition"></a>  CBaseTransition::~CBaseTransition  
 The destructor. Called when a transition object is being destroyed.  
  
```  
virtual ~CBaseTransition();
```  
  
##  <a name="cbasetransition__addtostoryboard"></a>  CBaseTransition::AddToStoryboard  
 Adds a transition to a storyboard.  
  
```  
BOOL AddToStoryboard(IUIAnimationStoryboard* pStoryboard);
```  
  
### Parameters  
 `pStoryboard`  
 A pointer to storyboard, which will animate the related variable.  
  
### Return Value  
 TRUE, if transition was successfully added to a storyboard.  
  
### Remarks  
 Applies the transition to the related variable in the storyboard. If this is the first transition applied to this variable in this storyboard, the transition begins at the start of the storyboard. Otherwise, the transition is appended to the transition added most recently to the variable.  
  
##  <a name="cbasetransition__addtostoryboardatkeyframes"></a>  CBaseTransition::AddToStoryboardAtKeyframes  
 Adds a transition to a storyboard.  
  
```  
BOOL AddToStoryboardAtKeyframes(IUIAnimationStoryboard* pStoryboard);
```  
  
### Parameters  
 `pStoryboard`  
 A pointer to storyboard, which will animate the related variable.  
  
### Return Value  
 TRUE, if transition was successfully added to a storyboard.  
  
### Remarks  
 Applies the transition to the related variable in the storyboard. If the start keyframe was specified, the transition begins at that keyframe. If the end keyframe was specified, the transition begins at the start keyframe and and stops at the end keyframe. If the transition was created with a duration parameter specified, that duration is overwritten with the duration of time between the start and end keyframes. If no keyframe was specified, the transition is appended to the transition added most recently to the variable.  
  
##  <a name="cbasetransition__cbasetransition"></a>  CBaseTransition::CBaseTransition  
 Constructs a base transtion object.  
  
```  
CBaseTransition();
```  
  
##  <a name="cbasetransition__clear"></a>  CBaseTransition::Clear  
 Releases encapsulated IUIAnimationTransition COM object.  
  
```  
void Clear();
```  
  
### Remarks  
 This method should be called from a derived class's Create method in order to prevent IUITransition interface leak.  
  
##  <a name="cbasetransition__create"></a>  CBaseTransition::Create  
 Creates a COM transition.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* pFactory) = 0;  
```  
  
### Parameters  
 `pLibrary`  
 A pointer to transition library, which creates standard transitions. It can be NULL for custom transitions.  
  
 `pFactory`  
 A pointer to transition factory, which creates custom transitions. It can be NULL for standard transitions.  
  
### Return Value  
 TRUE if a transition COM object was created successfully; otherwise FALSE.  
  
### Remarks  
 This is a pure virtual function that must be overridden in a derived class. It's called by the framework to instantiate the underlying COM transition object.  
  
##  <a name="cbasetransition__getendkeyframe"></a>  CBaseTransition::GetEndKeyframe  
 Returns start keyframe.  
  
```  
CBaseKeyFrame* GetEndKeyframe();
```  
  
### Return Value  
 A valid pointer to a keyframe, or NULL if a transition should not be inserted between keyframes.  
  
### Remarks  
 This method can be used to access a keyframe object that was previously set by SetKeyframes. It's called by top level code when transitions are being added to storyboard.  
  
##  <a name="cbasetransition__getrelatedvariable"></a>  CBaseTransition::GetRelatedVariable  
 Returns a pointer to related variable.  
  
```  
CAnimationVariable* GetRelatedVariable();
```  
  
### Return Value  
 A valid pointer to animation variable, or NULL if an animation variable has not been set by SetRelatedVariable.  
  
### Remarks  
 This is an accessor to related animation variable.  
  
##  <a name="cbasetransition__getstartkeyframe"></a>  CBaseTransition::GetStartKeyframe  
 Returns start keyframe.  
  
```  
CBaseKeyFrame* GetStartKeyframe();
```  
  
### Return Value  
 A valid pointer to a keyframe, or NULL if a transition should not start after a keyframe.  
  
### Remarks  
 This method can be used to access a keyframe object that was previously set by SetKeyframes. It's called by top level code when transitions are being added to storyboard.  
  
##  <a name="cbasetransition__gettransition"></a>  CBaseTransition::GetTransition  
 Returns a pointer to underlying COM transition object.  
  
```  
IUIAnimationTransition* GetTransition(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* pFactory);

 
IUIAnimationTransition* GetTransition();
```  
  
### Parameters  
 `pLibrary`  
 A pointer to transition library, which creates standard transitions. It can be NULL for custom transitions.  
  
 `pFactory`  
 A pointer to transition factory, which creates custom transitions. It can be NULL for standard transitions.  
  
### Return Value  
 A valid pointer to IUIAnimationTransition or NULL if underlying transition can't be created.  
  
### Remarks  
 This method returns a pointer to underlying COM transition object and creates it if necessary.  
  
##  <a name="cbasetransition__gettype"></a>  CBaseTransition::GetType  
 Returns transition type.  
  
```  
TRANSITION_TYPE GetType() const;

 
```  
  
### Return Value  
 One of TRANSITION_TYPE enumerated values.  
  
### Remarks  
 This method can be used to identify a transition object by its type. The type is set in a constructor in a derived class.  
  
##  <a name="cbasetransition__isadded"></a>  CBaseTransition::IsAdded  
 Tells whether a transition has been added to a storyboard.  
  
```  
BOOL IsAdded();
```  
  
### Return Value  
 Returns TRUE if a transition has been added to a storyboard, otherwise FALSE.  
  
### Remarks  
 This flag is set internally when the top level code adds transitions to storyboard.  
  
##  <a name="cbasetransition__m_badded"></a>  CBaseTransition::m_bAdded  
 Specifies whether a transition has been added to a storyboard.  
  
```  
BOOL m_bAdded;  
```  
  
##  <a name="cbasetransition__m_pendkeyframe"></a>  CBaseTransition::m_pEndKeyframe  
 Stores a pointer to the keyframe that specifies the end of the transition.  
  
```  
CBaseKeyFrame* m_pEndKeyframe;  
```  
  
##  <a name="cbasetransition__m_prelatedvariable"></a>  CBaseTransition::m_pRelatedVariable  
 A pointer to an animation variable, which is animated with the transition stored in m_transition.  
  
```  
CAnimationVariable* m_pRelatedVariable;  
```  
  
##  <a name="cbasetransition__m_pstartkeyframe"></a>  CBaseTransition::m_pStartKeyframe  
 Stores a pointer to the keyframe that specifies the beginning of the transition.  
  
```  
CBaseKeyFrame* m_pStartKeyframe;  
```  
  
##  <a name="cbasetransition__m_transition"></a>  CBaseTransition::m_transition  
 Stores a pointer to IUIAnimationTransition. NULL if a COM transition object has not been created.  
  
```  
ATL::CComPtr<IUIAnimationTransition> m_transition;  
```  
  
##  <a name="cbasetransition__m_type"></a>  CBaseTransition::m_type  
 Stores the transition type.  
  
```  
TRANSITION_TYPE m_type;  
```  
  
##  <a name="cbasetransition__setkeyframes"></a>  CBaseTransition::SetKeyframes  
 Sets keyframes for a transition.  
  
```  
void SetKeyframes(
    CBaseKeyFrame* pStart = NULL,  
    CBaseKeyFrame* pEnd = NULL);
```  
  
### Parameters  
 `pStart`  
 A keyframe that specifies the beginning of the transition.  
  
 `pEnd`  
 A keyframe that specifies the end of the transition.  
  
### Remarks  
 This method tells the transition to start after specified keyframe and, optionally, if pEnd is not NULL, end before the specified keyframe. If the transition was created with a duration parameter specified, that duration is overwritten with the duration of time between the start and end keyframes.  
  
##  <a name="cbasetransition__setrelatedvariable"></a>  CBaseTransition::SetRelatedVariable  
 Establishes a relationship between animation variable and transition.  
  
```  
void SetRelatedVariable(CAnimationVariable* pVariable);
```  
  
### Parameters  
 `pVariable`  
 A pointer to related animation variable.  
  
### Remarks  
 Establishes a relationship between animation variable and transition. A transition can be applied only to one variable.  
  
##  <a name="cbasetransition__transition_type_enumeration"></a>  CBaseTransition::TRANSITION_TYPE Enumeration  
 Defines the transition types currently supported by the MFC implementation of Windows Animation API.  
  
```  
enum TRANSITION_TYPE;  
```  
  
### Remarks  
 A transition type is set in the constructor of specific transition. For example, CSinusoidalTransitionFromRange sets its type to SINUSOIDAL_FROM_RANGE.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
