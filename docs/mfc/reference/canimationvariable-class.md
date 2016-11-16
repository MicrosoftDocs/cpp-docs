---
title: "CAnimationVariable Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationVariable"
  - "afxanimationcontroller/CAnimationVariable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationVariable class"
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
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
|[CAnimationVariable::CAnimationVariable](#canimationvariable__canimationvariable)|Constructs an animation variable object.|  
|[CAnimationVariable::~CAnimationVariable](#canimationvariable__~canimationvariable)|The destructor. Called when a CAnimationVariable object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::AddTransition](#canimationvariable__addtransition)|Adds a transition.|  
|[CAnimationVariable::ApplyTransitions](#canimationvariable__applytransitions)|Adds transitions from the internal list to storyboard.|  
|[CAnimationVariable::ClearTransitions](#canimationvariable__cleartransitions)|Clears transitions.|  
|[CAnimationVariable::Create](#canimationvariable__create)|Creates the underlying animation variable COM object.|  
|[CAnimationVariable::CreateTransitions](#canimationvariable__createtransitions)|Creates all transitions to be applied to this animation variable.|  
|[CAnimationVariable::EnableIntegerValueChangedEvent](#canimationvariable__enableintegervaluechangedevent)|Enables or disables the IntegerValueChanged event.|  
|[CAnimationVariable::EnableValueChangedEvent](#canimationvariable__enablevaluechangedevent)|Enables or disables the ValueChanged event.|  
|[CAnimationVariable::GetDefaultValue](#canimationvariable__getdefaultvalue)|Returns default value.|  
|[CAnimationVariable::GetParentAnimationObject](#canimationvariable__getparentanimationobject)|Returns the parent animation object.|  
|[CAnimationVariable::GetValue](#canimationvariable__getvalue)|Overloaded. Returns the current value of animation variable.|  
|[CAnimationVariable::GetVariable](#canimationvariable__getvariable)|Returns a pointer to IUIAnimationVariable COM object.|  
|[CAnimationVariable::SetDefaultValue](#canimationvariable__setdefaultvalue)|Sets default value and releases IUIAnimationVariable COM object.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::SetParentAnimationObject](#canimationvariable__setparentanimationobject)|Sets the relationship between an animation variable and an animation object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::m_bAutodestroyTransitions](#canimationvariable__m_bautodestroytransitions)|Specifies whether related transition objects should be deleted.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::m_dblDefaultValue](#canimationvariable__m_dbldefaultvalue)|Specifies the default value, which is propagated to IUIAnimationVariable.|  
|[CAnimationVariable::m_lstTransitions](#canimationvariable__m_lsttransitions)|Contains a list of transitions that animate this animation variable.|  
|[CAnimationVariable::m_pParentObject](#canimationvariable__m_pparentobject)|A pointer to an animation object that encapsulates this animation variable.|  
|[CAnimationVariable::m_variable](#canimationvariable__m_variable)|Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.|  
  
## Remarks  
 The CAnimationVariable class encapsulates IUIAnimationVariable COM object. It also holds a list of transitions to be applied to the animation variable in a storyboard. CAnimationVariable objects are embedded to animation objects, which can represent in an application an animated value, point, size, color and rectangle.  
  
## Inheritance Hierarchy  
 [CAnimationVariable](../../mfc/reference/canimationvariable-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationvariable___dtorcanimationvariable"></a>  CAnimationVariable::~CAnimationVariable  
 The destructor. Called when a CAnimationVariable object is being destroyed.  
  
```  
virtual ~CAnimationVariable();
```  
  
##  <a name="canimationvariable__addtransition"></a>  CAnimationVariable::AddTransition  
 Adds a transition.  
  
```  
void AddTransition(CBaseTransition* pTransition);
```  
  
### Parameters  
 `pTransition`  
 A pointer to a transition to add.  
  
### Remarks  
 This method is called to add a transition to the internal list of transitions to be applied to the animation variable. This list should be cleared when an animation has been scheduled.  
  
##  <a name="canimationvariable__applytransitions"></a>  CAnimationVariable::ApplyTransitions  
 Adds transitions from the internal list to storyboard.  
  
```  
void ApplyTransitions(
    CAnimationController* pController,  
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### Parameters  
 `pController`  
 A pointer to parent animation controller.  
  
 `pStoryboard`  
 A pointer to storyboard.  
  
 `bDependOnKeyframes`  
 TRUE, if this method should add transitions that depend on keyframes.  
  
### Remarks  
 This method adds transitions from the internal list to storyboard. It's called from the top level code several times to add transitions that do not depend on keyframes and add transitions that depend on keyframes. If the underlying animation variable COM object has not been created, this method creates it at this stage.  
  
##  <a name="canimationvariable__canimationvariable"></a>  CAnimationVariable::CAnimationVariable  
 Constructs an animation variable object.  
  
```  
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```  
  
### Parameters  
 `dblDefaultValue`  
 Specifies the default value.  
  
### Remarks  
 Constructs an animation variable object and sets its default value. A default value is used when a variable is not animated, or can't be animated.  
  
##  <a name="canimationvariable__cleartransitions"></a>  CAnimationVariable::ClearTransitions  
 Clears transitions.  
  
```  
void ClearTransitions(BOOL bAutodestroy);
```  
  
### Parameters  
 `bAutodestroy`  
 Specifies whether this method should delete transition objects.  
  
### Remarks  
 This method removes all transitions from the internal list of transitions. If bAutodestroy is TRUE, or m_bAutodestroyTransitions is TRUE, then transitions are deleted. Otherwise the caller should deallocate the transition objects.  
  
##  <a name="canimationvariable__create"></a>  CAnimationVariable::Create  
 Creates the underlying animation variable COM object.  
  
```  
virtual BOOL Create(IUIAnimationManager* pManager);
```  
  
### Parameters  
 `pManager`  
 A pointer to animation manager.  
  
### Return Value  
 TRUE if the animation variable was successfully created; otherwise FALSE.  
  
### Remarks  
 This method creates the underlying animation variable COM object and sets its default value.  
  
##  <a name="canimationvariable__createtransitions"></a>  CAnimationVariable::CreateTransitions  
 Creates all transitions to be applied to this animation variable.  
  
```  
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* pFactory);
```  
  
### Parameters  
 `pLibrary`  
 A pointer to transition library.  
  
 `pFactory`  
 A pointer to transition factory.  
  
### Return Value  
 TRUE if transitions were created successfully; otherwise FALSE.  
  
### Remarks  
 This method is called by the framework when it needs to create transitions that have been added to the variable's internal list of transitions.  
  
##  <a name="canimationvariable__enableintegervaluechangedevent"></a>  CAnimationVariable::EnableIntegerValueChangedEvent  
 Enables or disables the IntegerValueChanged event.  
  
```  
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### Parameters  
 `pController`  
 A pointer to parent controller.  
  
 `bEnable`  
 TRUE - enable event, FALSE - disable event.  
  
### Remarks  
 When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationIntegerValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the integer value of animation variable is changed.  
  
##  <a name="canimationvariable__enablevaluechangedevent"></a>  CAnimationVariable::EnableValueChangedEvent  
 Enables or disables the ValueChanged event.  
  
```  
void EnableValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### Parameters  
 `pController`  
 A pointer to parent controller.  
  
 `bEnable`  
 TRUE - enable event, FALSE - disable event.  
  
### Remarks  
 When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the value of animation variable is changed.  
  
##  <a name="canimationvariable__getdefaultvalue"></a>  CAnimationVariable::GetDefaultValue  
 Returns default value.  
  
```  
DOUBLE GetDefaultValue() const;

 
```  
  
### Return Value  
 The default value.  
  
### Remarks  
 Use this function to obtain default value of animation variable. The default value can be set in constructor or by SetDefaultValue method.  
  
##  <a name="canimationvariable__getparentanimationobject"></a>  CAnimationVariable::GetParentAnimationObject  
 Returns the parent animation object.  
  
```  
CAnimationBaseObject* GetParentAnimationObject();
```  
  
### Return Value  
 A pointer to parent animation object, if relationship was established, otherwise NULL.  
  
### Remarks  
 This method can be called to retrieve a pointer to a parent animation object (a container).  
  
##  <a name="canimationvariable__getvalue"></a>  CAnimationVariable::GetValue  
 Returns the current value of animation variable.  
  
```  
HRESULT GetValue(DOUBLE& dblValue);

 
HRESULT GetValue(INT32& nValue);
```  
  
### Parameters  
 `dblValue`  
 The current value of the animation variable.  
  
 `nValue`  
 The current value of the animation variable.  
  
### Return Value  
 S_OK if the value was obtained successfully, or underlying animation variable has not been created. Otherwise HRESULT error code.  
  
### Remarks  
 This method can be called to retrieve the current value of animation variable. If the underlying COM object has not been created, dblValue will contain a default value, when the function returns.  
  
##  <a name="canimationvariable__getvariable"></a>  CAnimationVariable::GetVariable  
 Returns a pointer to IUIAnimationVariable COM object.  
  
```  
IUIAnimationVariable* GetVariable();
```  
  
### Return Value  
 A valid pointer to IUIAnimationVariable COM object, or NULL if animation variable was not created, or can't be created.  
  
### Remarks  
 Use this function to access the underlying IUIAnimationVariable COM object and call its methods directly if needed.  
  
##  <a name="canimationvariable__m_bautodestroytransitions"></a>  CAnimationVariable::m_bAutodestroyTransitions  
 Specifies whether related transition objects should be deleted.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
### Remarks  
 Set this value to TRUE to force deletion of transition objects when they are being removed from the internal list of transitions. If this value is FALSE the transitions should be deleted by calling application. The list of transitions is always cleared after an animation has been scheduled. The default value is FALSE.  
  
##  <a name="canimationvariable__m_dbldefaultvalue"></a>  CAnimationVariable::m_dblDefaultValue  
 Specifies the default value, which is propagated to IUIAnimationVariable.  
  
```  
DOUBLE m_dblDefaultValue;  
```  
  
##  <a name="canimationvariable__m_lsttransitions"></a>  CAnimationVariable::m_lstTransitions  
 Contains a list of transitions that animate this animation variable.  
  
```  
CObList m_lstTransitions;  
```  
  
##  <a name="canimationvariable__m_pparentobject"></a>  CAnimationVariable::m_pParentObject  
 A pointer to an animation object that encapsulates this animation variable.  
  
```  
CAnimationBaseObject* m_pParentObject;  
```  
  
##  <a name="canimationvariable__m_variable"></a>  CAnimationVariable::m_variable  
 Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.  
  
```  
ATL::CComPtr<IUIAnimationVariable> m_variable;  
```  
  
##  <a name="canimationvariable__setdefaultvalue"></a>  CAnimationVariable::SetDefaultValue  
 Sets default value and releases IUIAnimationVariable COM object.  
  
```  
void SetDefaultValue(DOUBLE dblDefaultValue);
```  
  
### Parameters  
 `dblDefaultValue`  
 Specifies the new default value.  
  
### Remarks  
 Use this method to reset the default value. This method releases the internal IUIAnimationVariable COM object, therefore when animation variable is recreated, the underlying COM object gets the new default value. The default value is returned by GetValue if the COM object representing the animation variable is not created, or if the variable has not been animated.  
  
##  <a name="canimationvariable__setparentanimationobject"></a>  CAnimationVariable::SetParentAnimationObject  
 Sets the relationship between an animation variable and an animation object.  
  
```  
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```  
  
### Parameters  
 `pParentObject`  
 A pointer to an animation object that contains this variable.  
  
### Remarks  
 This method is called internally to establish one-to-one relationship between an animation variable and an animation object that encapsulates it.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
