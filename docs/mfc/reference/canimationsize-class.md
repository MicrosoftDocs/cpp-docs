---
title: "CAnimationSize Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxanimationcontroller/CAnimationSize"
  - "CAnimationSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationSize class"
ms.assetid: ea06d1b5-502c-44a3-82ca-8bd6ba6a9364
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
|[CAnimationSize::CAnimationSize](#canimationsize__canimationsize)|Overloaded. Constructs an animation size object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationSize::AddTransition](#canimationsize__addtransition)|Adds transitions for Width and Height.|  
|[CAnimationSize::GetCX](#canimationsize__getcx)|Provides access to CAnimationVariable representing Width.|  
|[CAnimationSize::GetCY](#canimationsize__getcy)|Provides access to CAnimationVariable representing Height.|  
|[CAnimationSize::GetDefaultValue](#canimationsize__getdefaultvalue)|Returns the default values for Width and Height.|  
|[CAnimationSize::GetValue](#canimationsize__getvalue)|Returns current value.|  
|[CAnimationSize::SetDefaultValue](#canimationsize__setdefaultvalue)|Sets default value.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationSize::GetAnimationVariableList](#canimationsize__getanimationvariablelist)|Puts the encapsulated animation variables into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#canimationbaseobject__getanimationvariablelist).)|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationSize::operator CSize](#canimationsize__operator_csize)|Converts a CAnimationSize to a CSize.|  
|[CAnimationSize::operator=](#canimationsize__operator_eq)|Assigns szSrc to CAnimationSize.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationSize::m_cxValue](#canimationsize__m_cxvalue)|The encapsulated animation variable that represents width of animation size.|  
|[CAnimationSize::m_cyValue](#canimationsize__m_cyvalue)|The encapsulated animation variable that represents height of animation size.|  
  
## Remarks  
 The CAnimationSize class encapsulates two CAnimationVariable objects and can represent in applications a size. For example, you can use this class to animate a size of any two dimensional object on the screen (like rectangle, control etc). To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to Width and/or Height.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationSize](../../mfc/reference/canimationsize-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationsize__addtransition"></a>  CAnimationSize::AddTransition  
 Adds transitions for Width and Height.  
  
```  
void AddTransition(
    CBaseTransition* pCXTransition,  
    CBaseTransition* pCYTransition);
```  
  
### Parameters  
 `pCXTransition`  
 A pointer to transition for Width.  
  
 `pCYTransition`  
 A pointer to transition for Height.  
  
### Remarks  
 Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables for Width and Height. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. If you don't need to apply a transition to one of dimensions, you can pass NULL.  
  
##  <a name="canimationsize__canimationsize"></a>  CAnimationSize::CAnimationSize  
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
 `szDefault`  
 Specifies default size.  
  
 `nGroupID`  
 Specifies Group ID.  
  
 `nObjectID`  
 Specifies Object ID.  
  
 `dwUserData`  
 Specifies user-defined data.  
  
### Remarks  
 The object is constructed with default values for width, height, Object ID and Group ID, which will be set to 0. They can be changed later at runtime using SetDefaultValue and SetID.  
  
##  <a name="canimationsize__getanimationvariablelist"></a>  CAnimationSize::GetAnimationVariableList  
 Puts the encapsulated animation variables into a list.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### Parameters  
 `lst`  
 When the function returns, it contains pointers to two CAnimationVariable objects representing the width and height.  
  
##  <a name="canimationsize__getcx"></a>  CAnimationSize::GetCX  
 Provides access to CAnimationVariable representing Width.  
  
```  
CAnimationVariable& GetCX();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing Width.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing Width.  
  
##  <a name="canimationsize__getcy"></a>  CAnimationSize::GetCY  
 Provides access to CAnimationVariable representing Height.  
  
```  
CAnimationVariable& GetCY();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing Height.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing Height.  
  
##  <a name="canimationsize__getdefaultvalue"></a>  CAnimationSize::GetDefaultValue  
 Returns the default values for Width and Height.  
  
```  
CSize GetDefaultValue();
```  
  
### Return Value  
 A CSize object containing default values.  
  
### Remarks  
 Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.  
  
##  <a name="canimationsize__getvalue"></a>  CAnimationSize::GetValue  
 Returns current value.  
  
```  
BOOL GetValue(CSize& szValue);
```  
  
### Parameters  
 `szValue`  
 Output. Contains the current value when this method returns.  
  
### Return Value  
 TRUE, if the current value was successfully retrieved; otherwise FALSE.  
  
### Remarks  
 Call this function to retrieve the current value of animation size. If this method fails or underlying COM objects for Width and Size have not been initialized, szValue contains default value, which was previously set in constructor or by SetDefaultValue.  
  
##  <a name="canimationsize__m_cxvalue"></a>  CAnimationSize::m_cxValue  
 The encapsulated animation variable that represents width of animation size.  
  
```  
CAnimationVariable m_cxValue;  
```  
  
##  <a name="canimationsize__m_cyvalue"></a>  CAnimationSize::m_cyValue  
 The encapsulated animation variable that represents height of animation size.  
  
```  
CAnimationVariable m_cyValue;  
```  
  
##  <a name="canimationsize__operator_csize"></a>  CAnimationSize::operator CSize  
 Converts a CAnimationSize to a CSize.  
  
```  
operator CSize();
```   
  
### Return Value  
 Current value of animation size as CSize.  
  
### Remarks  
 This function internally calls GetValue. If GetValue for some reason fails, the returned size will contain default values for Width and Height.  
  
##  <a name="canimationsize__operator_eq"></a>  CAnimationSize::operator=  
 Assigns szSrc to CAnimationSize.  
  
```  
void operator=(const CSize& szSrc);
```  
  
### Parameters  
 `szSrc`  
 Refers to CSize or SIZE.  
  
### Remarks  
 Assigns szSrc to CAnimationSize. It's recommended to do that before animation start, because this operator calls SetDefaultValue, which recreates the underlying COM objects for Width and Height if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
##  <a name="canimationsize__setdefaultvalue"></a>  CAnimationSize::SetDefaultValue  
 Sets default value.  
  
```  
void SetDefaultValue(const CSize& szDefault);
```  
  
### Parameters  
 `szDefault`  
 Specifies new default size.  
  
### Remarks  
 Use this function to set a default value to animation object. This methods assigns default values to Width and Height of animation size. It also recreates underlying COM objects if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
