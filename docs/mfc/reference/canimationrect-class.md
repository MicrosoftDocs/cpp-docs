---
title: "CAnimationRect Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationRect"
  - "afxanimationcontroller/CAnimationRect"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationRect class"
ms.assetid: 0294156d-241e-4a57-92b2-31234fe557d6
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
# CAnimationRect Class
Implements the functionality of a rectangle whose sides can be animated.  
  
## Syntax  
  
```  
class CAnimationRect : public CAnimationBaseObject;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::CAnimationRect](#canimationrect__canimationrect)|Overloaded. Constructs an animation rect object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::AddTransition](#canimationrect__addtransition)|Adds transitions for left, top, right and bottom coordinates.|  
|[CAnimationRect::GetBottom](#canimationrect__getbottom)|Provides access to CAnimationVariable representing bottom coordinate.|  
|[CAnimationRect::GetDefaultValue](#canimationrect__getdefaultvalue)|Returns the default values for rectangle's bounds.|  
|[CAnimationRect::GetLeft](#canimationrect__getleft)|Provides access to CAnimationVariable representing left coordinate.|  
|[CAnimationRect::GetRight](#canimationrect__getright)|Provides access to CAnimationVariable representing right coordinate.|  
|[CAnimationRect::GetTop](#canimationrect__gettop)|Provides access to CAnimationVariable representing top coordinate.|  
|[CAnimationRect::GetValue](#canimationrect__getvalue)|Returns current value.|  
|[CAnimationRect::SetDefaultValue](#canimationrect__setdefaultvalue)|Sets default value.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::GetAnimationVariableList](#canimationrect__getanimationvariablelist)|Puts the encapsulated animation variables into a list. (Overrides [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#canimationbaseobject__getanimationvariablelist).)|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::operator RECT](#canimationrect__operator_rect)|Converts a CAnimationRect to RECT.|  
|[CAnimationRect::operator=](#canimationrect__operator_eq)|Assigns rect to CAnimationRect.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::m_bFixedSize](#canimationrect__m_bfixedsize)|Specifies whether the rectangle has fixed size.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationRect::m_bottomValue](#canimationrect__m_bottomvalue)|The encapsulated animation variable that represents Bottom bound of animation rectangle.|  
|[CAnimationRect::m_leftValue](#canimationrect__m_leftvalue)|The encapsulated animation variable that represents Left bound of animation rectangle.|  
|[CAnimationRect::m_rightValue](#canimationrect__m_rightvalue)|The encapsulated animation variable that represents Right bound of animation rectangle.|  
|[CAnimationRect::m_szInitial](#canimationrect__m_szinitial)|Specifies initial size of animation rectangle.|  
|[CAnimationRect::m_topValue](#canimationrect__m_topvalue)|The encapsulated animation variable that represents Top bound of animation rectangle.|  
  
## Remarks  
 The CAnimationRect class encapsulates four CAnimationVariable objects and can represent in applications a rectangle. To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to left, right top and bottom coordinates.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)  
  
 [CAnimationRect](../../mfc/reference/canimationrect-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="canimationrect__addtransition"></a>  CAnimationRect::AddTransition  
 Adds transitions for left, top, right and bottom coordinates.  
  
```  
void AddTransition(
    CBaseTransition* pLeftTransition,  
    CBaseTransition* pTopTransition,  
    CBaseTransition* pRightTransition,  
    CBaseTransition* pBottomTransition);
```  
  
### Parameters  
 `pLeftTransition`  
 Specifies transition for the left side.  
  
 `pTopTransition`  
 Specifies transition for the top side.  
  
 `pRightTransition`  
 Specifies transition for the right side.  
  
 `pBottomTransition`  
 Specifies transition for the bottom side.  
  
### Remarks  
 Call this function to add the specified transitions to the internal list of transitions to be applied to animation variables for each rectangle sides. When you add transitions, they are not applied immediately and stored in an internal list. Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. If you don't need to apply a transition to one of the rectangle sides, you can pass NULL.  
  
##  <a name="canimationrect__canimationrect"></a>  CAnimationRect::CAnimationRect  
 Constructs a CAnimationRect object.  
  
```  
CAnimationRect();

 
CAnimationRect(
    const CRect& rect,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);

 
CAnimationRect(
    const CPoint& pt,  
    const CSize& sz,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);

 
CAnimationRect(
    int nLeft,  
    int nTop,  
    int nRight,  
    int nBottom,  
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### Parameters  
 `rect`  
 Specifies default rectangle.  
  
 `nGroupID`  
 Specifies Group ID.  
  
 `nObjectID`  
 Specifies Object ID.  
  
 `dwUserData`  
 Specifies user-defined data.  
  
 `pt`  
 Coordinate of top-left corner.  
  
 `sz`  
 Size of rectangle.  
  
 `nLeft`  
 Specifies coordinate of left bound.  
  
 `nTop`  
 Specifies coordinate of top bound.  
  
 `nRight`  
 Specifies coordinate of right bound.  
  
 `nBottom`  
 Specifies coordinate of bottom bound.  
  
### Remarks  
 The object is constructed with default values for left, top, right and bottom, Object ID and Group ID, which will be set to 0. They can be changed later at runtime using SetDefaultValue and SetID.  
  
##  <a name="canimationrect__getanimationvariablelist"></a>  CAnimationRect::GetAnimationVariableList  
 Puts the encapsulated animation variables into a list.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst);
```  
  
### Parameters  
 `lst`  
 When the function returns, it contains pointers to four CAnimationVariable objects representing coordinates of rectangle.  
  
##  <a name="canimationrect__getbottom"></a>  CAnimationRect::GetBottom  
 Provides access to CAnimationVariable representing bottom coordinate.  
  
```  
CAnimationVariable& GetBottom();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing bottom coordinate.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing the bottom coordinate.  
  
##  <a name="canimationrect__getdefaultvalue"></a>  CAnimationRect::GetDefaultValue  
 Returns the default values for rectangle's bounds.  
  
```  
CRect GetDefaultValue();
```  
  
### Return Value  
 A CRect value containing defaults for left, right, top and bottom.  
  
### Remarks  
 Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.  
  
##  <a name="canimationrect__getleft"></a>  CAnimationRect::GetLeft  
 Provides access to CAnimationVariable representing left coordinate.  
  
```  
CAnimationVariable& GetLeft();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing left coordinate.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing the left coordinate.  
  
##  <a name="canimationrect__getright"></a>  CAnimationRect::GetRight  
 Provides access to CAnimationVariable representing right coordinate.  
  
```  
CAnimationVariable& GetRight();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing right coordinate.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing the right coordinate.  
  
##  <a name="canimationrect__gettop"></a>  CAnimationRect::GetTop  
 Provides access to CAnimationVariable representing top coordinate.  
  
```  
CAnimationVariable& GetTop();
```  
  
### Return Value  
 A reference to encapsulated CAnimationVariable representing top coordinate.  
  
### Remarks  
 You can call this method to get direct access to underlying CAnimationVariable representing the top coordinate.  
  
##  <a name="canimationrect__getvalue"></a>  CAnimationRect::GetValue  
 Returns current value.  
  
```  
BOOL GetValue(CRect& rect);
```  
  
### Parameters  
 `rect`  
 Output. Contains the current value when this method returns.  
  
### Return Value  
 TRUE, if the current value was successfully retrieved; otherwise FALSE.  
  
### Remarks  
 Call this function to retrieve the current value of animation rectangle. If this method fails or underlying COM objects for left, top, right and bottom have not been initialized, rect contains default value, which was previously set in constructor or by SetDefaultValue.  
  
##  <a name="canimationrect__m_bfixedsize"></a>  CAnimationRect::m_bFixedSize  
 Specifies whether the rectangle has fixed size.  
  
```  
BOOL m_bFixedSize;  
```  
  
### Remarks  
 If this member is true, then the size of rectangle is fixed and right and bottom values are recalculated each time the top-left corner is moved according to the fixed size. Set this value to TRUE to easily move the rectangle around the screen. In this case transitions applied to right and bottom coordinates are ignored. The size is stored internally when you construct the object and/or call SetDefaultValue. By default this member is set to FALSE.  
  
##  <a name="canimationrect__m_bottomvalue"></a>  CAnimationRect::m_bottomValue  
 The encapsulated animation variable that represents Bottom bound of animation rectangle.  
  
```  
CAnimationVariable m_bottomValue;  
```  
  
##  <a name="canimationrect__m_leftvalue"></a>  CAnimationRect::m_leftValue  
 The encapsulated animation variable that represents Left bound of animation rectangle.  
  
```  
CAnimationVariable m_leftValue;  
```  
  
##  <a name="canimationrect__m_rightvalue"></a>  CAnimationRect::m_rightValue  
 The encapsulated animation variable that represents Right bound of animation rectangle.  
  
```  
CAnimationVariable m_rightValue;  
```  
  
##  <a name="canimationrect__m_szinitial"></a>  CAnimationRect::m_szInitial  
 Specifies initial size of animation rectangle.  
  
```  
CSize m_szInitial;  
```  
  
##  <a name="canimationrect__m_topvalue"></a>  CAnimationRect::m_topValue  
 The encapsulated animation variable that represents Top bound of animation rectangle.  
  
```  
CAnimationVariable m_topValue;  
```  
  
##  <a name="canimationrect__operator_rect"></a>  CAnimationRect::operator RECT  
 Converts a CAnimationRect to RECT.  
  
```  
operator RECT();
```   
  
### Return Value  
 Current value of animation rectangle as RECT.  
  
### Remarks  
 This function internally calls GetValue. If GetValue for some reason fails, the returned RECT will contain default values for all rectangle coordinates.  
  
##  <a name="canimationrect__operator_eq"></a>  CAnimationRect::operator=  
 Assigns rect to CAnimationRect.  
  
```  
void operator=(const RECT& rect);
```  
  
### Parameters  
 `rect`  
 The new value of animation rectangle.  
  
### Remarks  
 It's recommended to do that before animation start, because this operator calls SetDefaultValue, which recreates the underlying COM objects for color components if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
##  <a name="canimationrect__setdefaultvalue"></a>  CAnimationRect::SetDefaultValue  
 Sets default value.  
  
```  
void SetDefaultValue(const CRect& rect);
```  
  
### Parameters  
 `rect`  
 Specifies new default values for left, top, right and bottom.  
  
### Remarks  
 Use this function to set a default value to animation object. This methods assigns default values to rectangle's bounds. It also recreates underlying COM objects if they have been created. If you subscribed this animation object to events (ValueChanged or IntegerValueChanged), you need to re-enable these events.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
