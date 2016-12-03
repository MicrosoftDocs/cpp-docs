---
title: "CAnimationColor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationColor"
  - "afxanimationcontroller/CAnimationColor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationColor class"
ms.assetid: 88bfabd4-efeb-4652-87e8-304253d8e48c
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
# CAnimationColor Class
Implements the functionality of a color whose red, green, and blue components can be animated.  
  
## Syntax  
  
```  
class CAnimationColor : public CAnimationBaseObject;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationColor::CAnimationColor](#canimationcolor__canimationcolor)|Overloaded. Constructs an animation color object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationColor::AddTransition](#canimationcolor__addtransition)|Adds transitions for Red, Green and Blue components.|  
|[CAnimationColor::GetB](#canimationcolor__getb)|Provides access to CAnimationVariable representing Blue component.|  
|[CAnimationColor::GetDefaultValue](#canimationcolor__getdefaultvalue)|Returns the default values for color components.|  
|[CAnimationColor::GetG](#canimationcolor__getg)|Provides access to CAnimationVariable representing Green component.|  
|[CAnimationColor::GetR](#canimationcolor__getr)|Provides access to CAnimationVariable representing Red component.|  
|[CAnimationColor::GetValue](#canimationcolor__getvalue)|Returns current value.|  
|[CAnimationColor::SetDefaultValue](#canimationcolor__setdefaultvalue)|Sets default value.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationColor::GetAnimationVariableList](#canimationcolor__getanimationvariablelist)|Puts the encapsulated animation variables into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#canimationbaseobject__getanimationvariablelist).)|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationColor::operator COLORREF](#canimationcolor__operator_colorref)||  
|[CAnimationColor::operator=](#canimationcolor__operator_eq)|Assigns color to CAnimationColor.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationColor::m_bValue](#canimationcolor__m_bvalue)|The encapsulated animation variable that represents Blue component of animation color.|  
|[CAnimationColor::m_gValue](#canimationcolor__m_gvalue)|The encapsulated animation variable that represents Green component of animation color.|  
|[CAnimationColor::m_rValue](#canimationcolor__m_rvalue)|The encapsulated animation variable that represents Red component of animation color.|  
  
## Remarks  
 The CAnimationColor class encapsulates three CAnimationVariable objects and can represent in applications a color. For example, you can use this class to animate colors of any object on the screen (like text color, background color etc). To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to Red, Green and Blue components.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationColor](../../mfc/reference/canimationcolor-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationcolor__addtransition"></a>  CAnimationColor::AddTransition  
 Adds transitions for Red, Green and Blue components.  
  
```  
void AddTransition(
    CBaseTransition* pRTransition,  
    CBaseTransition* pGTransition,  
    CBaseTransition* pBTransition);
```  
  
### Parameters  
 `pRTransition`  
 Transition for Red component.  
  
 `pGTransition`  
 Transition for Green component.  
  
 `pBTransition`  
 Transition for Blue component.  
  
### Remarks  
 Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables representing color components. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. If you don't need to apply a transition to one of the color components, you can pass NULL.  
  
##  <a name="canimationcolor__canimationcolor"></a>  CAnimationColor::CAnimationColor  
 Constructs a CAnimationColor object.  
  
```  
CAnimationColor();

 
CAnimationColor(
    COLORREF color,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### Parameters  
 `color`  
 Specifies default color.  
  
 `nGroupID`  
 Specifies Group ID.  
  
 `nObjectID`  
 Specifies Object ID.  
  
 `dwUserData`  
 Specifies user-defined data.  
  
### Remarks  
 The object is constructed with default values for red, green, blue, Object ID and Group ID, which will be set to 0. They can be changed later at runtime using SetDefaultValue and SetID.  
  
##  <a name="canimationcolor__getanimationvariablelist"></a>  CAnimationColor::GetAnimationVariableList  
 Puts the encapsulated animation variables into a list.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### Parameters  
 `lst`  
 When the function returns, it contains pointers to three CAnimationVariable objects representing red, green and blue components.  
  
##  <a name="canimationcolor__getb"></a>  CAnimationColor::GetB  
 Provides access to CAnimationVariable representing Blue component.  
  
```  
CAnimationVariable& GetB();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing Blue component.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing Blue component.  
  
##  <a name="canimationcolor__getdefaultvalue"></a>  CAnimationColor::GetDefaultValue  
 Returns the default values for color components.  
  
```  
COLORREF GetDefaultValue();
```  
  
### Return Value  
 A COLORREF value containing defaults for RGB components.  
  
### Remarks  
 Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.  
  
##  <a name="canimationcolor__getg"></a>  CAnimationColor::GetG  
 Provides access to CAnimationVariable representing Green component.  
  
```  
CAnimationVariable& GetG();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing Green component.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing Green component.  
  
##  <a name="canimationcolor__getr"></a>  CAnimationColor::GetR  
 Provides access to CAnimationVariable representing Red component.  
  
```  
CAnimationVariable& GetR();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing Red component.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing Red component.  
  
##  <a name="canimationcolor__getvalue"></a>  CAnimationColor::GetValue  
 Returns current value.  
  
```  
BOOL GetValue(COLORREF& color);
```  
  
### Parameters  
 `color`  
 Output. Contains the current value when this method returns.  
  
### Return Value  
 TRUE, if the current value was successfully retrieved; otherwise FALSE.  
  
### Remarks  
 Call this function to retrieve the current value of animation color. If this method fails or underlying COM objects for color components have not been initialized, color contains default value, which was previously set in constructor or by SetDefaultValue.  
  
##  <a name="canimationcolor__m_bvalue"></a>  CAnimationColor::m_bValue  
 The encapsulated animation variable that represents Blue component of animation color.  
  
```  
CAnimationVariable m_bValue;  
```  
  
##  <a name="canimationcolor__m_gvalue"></a>  CAnimationColor::m_gValue  
 The encapsulated animation variable that represents Green component of animation color.  
  
```  
CAnimationVariable m_gValue;  
```  
  
##  <a name="canimationcolor__m_rvalue"></a>  CAnimationColor::m_rValue  
 The encapsulated animation variable that represents Red component of animation color.  
  
```  
CAnimationVariable m_rValue;  
```  
  
##  <a name="canimationcolor__operator_colorref"></a>  CAnimationColor::operator COLORREF  
  
```  
operator COLORREF();
```   
  
### Return Value  
  
##  <a name="canimationcolor__operator_eq"></a>  CAnimationColor::operator=  
 Assigns color to CAnimationColor.  
  
```  
void operator=(COLORREF color);
```  
  
### Parameters  
 `color`  
 Specifies new value Animation Color.  
  
### Remarks  
 It's recommended to do that before animation start, because this operator calls SetDefaultValue, which recreates the underlying COM objects for color components if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
##  <a name="canimationcolor__setdefaultvalue"></a>  CAnimationColor::SetDefaultValue  
 Sets default value.  
  
```  
void SetDefaultValue(COLORREF color);
```  
  
### Parameters  
 `color`  
 Specifies new default values for red, green and blue components.  
  
### Remarks  
 Use this function to set a default value to animation object. This methods assigns default values to color components of animation color. It also recreates underlying COM objects if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
