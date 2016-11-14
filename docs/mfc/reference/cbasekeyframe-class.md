---
title: "CBaseKeyFrame Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBaseKeyFrame"
  - "afxanimationcontroller/CBaseKeyFrame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBaseKeyFrame class"
ms.assetid: 285a2eff-e7c4-43be-b5aa-737727e6866d
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
# CBaseKeyFrame Class
Implements the basic functionality of a keyframe.  
  
## Syntax  
  
```  
class CBaseKeyFrame : public CObject;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::CBaseKeyFrame](#cbasekeyframe__cbasekeyframe)|Constructs a keyframe object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::AddToStoryboard](#cbasekeyframe__addtostoryboard)|Adds a keyframe to storyboard.|  
|[CBaseKeyFrame::GetAnimationKeyframe](#cbasekeyframe__getanimationkeyframe)|Returns the underlying keyframe value.|  
|[CBaseKeyFrame::IsAdded](#cbasekeyframe__isadded)|Tells whether a keyframe has been added to storyboard.|  
|[CBaseKeyFrame::IsKeyframeAtOffset](#cbasekeyframe__iskeyframeatoffset)|Specifies whether the keyframe should be added to storyboard at offset, or after transition.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::m_bAdded](#cbasekeyframe__m_badded)|Specifies whether this keyframe has been added to a storyboard.|  
|[CBaseKeyFrame::m_bIsKeyframeAtOffset](#cbasekeyframe__m_biskeyframeatoffset)|Specifies whether this keyframe should be added to storyboard at an offset from another existing keyframe, or at the end of some transition.|  
|[CBaseKeyFrame::m_keyframe](#cbasekeyframe__m_keyframe)|Represents a Windows Animation API keyframe. When a keyframe is not initialized it is set to the predefined value UI_ANIMATION_KEYFRAME_STORYBOARD_START.|  
  
## Remarks  
 Encapsulates UI_ANIMATION_KEYFRAME variable. Serves as a base class for any keyframe implementation. A keyframe represents a moment in time within a storyboard and can be used to specify the start and end times of transitions. There are two types of keyframes - keyframes added to storyboard at the specified offset (in time), or keyframes added after specified transition. Because durations of some transitions can't be known before animation starts, the actual values of some keyframes are determined at runtime only. Because keyframes may depend on transitions, which in their turn depend on keyframes, it's important to prevent infinite recursions when building keyframe chains.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)  
  
## Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cbasekeyframe__addtostoryboard"></a>  CBaseKeyFrame::AddToStoryboard  
 Adds a keyframe to storyboard.  
  
```  
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDeepAdd);
```  
  
### Parameters  
 `pStoryboard`  
 A pointer to a storyboard.  
  
 `bDeepAdd`  
 If this parameter is TRUE and the keyframe being added depends on some other keyframe or transition, this method tries to add this keyframe or transition to storyboard first.  
  
### Return Value  
 TRUE if keyframe was added to storyboard successfully; otherwise FALSE.  
  
### Remarks  
 This method is called to add a keyframe to storyboard.  
  
##  <a name="cbasekeyframe__cbasekeyframe"></a>  CBaseKeyFrame::CBaseKeyFrame  
 Constructs a keyframe object.  
  
```  
CBaseKeyFrame();
```  
  
##  <a name="cbasekeyframe__getanimationkeyframe"></a>  CBaseKeyFrame::GetAnimationKeyframe  
 Returns the underlying keyframe value.  
  
```  
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;

 
```  
  
### Return Value  
 A current keyframe. The default value is UI_ANIMATION_KEYFRAME_STORYBOARD_START.  
  
### Remarks  
 This is an accessor to the underlying keyframe value.  
  
##  <a name="cbasekeyframe__isadded"></a>  CBaseKeyFrame::IsAdded  
 Tells whether a keyframe has been added to storyboard.  
  
```  
BOOL IsAdded() const;

 
```  
  
### Return Value  
 TRUE if a keyframe is added to a storyboard; otehrwise FALSE.  
  
### Remarks  
 In the base class IsAdded always returns TRUE, but it's overridden in derived classes.  
  
##  <a name="cbasekeyframe__iskeyframeatoffset"></a>  CBaseKeyFrame::IsKeyframeAtOffset  
 Specifies whether the keyframe should be added to storyboard at offset, or after transition.  
  
```  
BOOL IsKeyframeAtOffset() const;

 
```  
  
### Return Value  
 TRUE if the keyframe should be added to storyboard at some specified offset. FALSE if the keyframe should be added to storyboard after some transition.  
  
### Remarks  
 Specifies whether the keyframe should be added to storyboard at offset. The offset or transition must be specified in a derived class.  
  
##  <a name="cbasekeyframe__m_badded"></a>  CBaseKeyFrame::m_bAdded  
 Specifies whether this keyframe has been added to a storyboard.  
  
```  
BOOL m_bAdded;  
```  
  
##  <a name="cbasekeyframe__m_biskeyframeatoffset"></a>  CBaseKeyFrame::m_bIsKeyframeAtOffset  
 Specifies whether this keyframe should be added to storyboard at an offset from another existing keyframe, or at the end of some transition.  
  
```  
BOOL m_bIsKeyframeAtOffset;  
```  
  
##  <a name="cbasekeyframe__m_keyframe"></a>  CBaseKeyFrame::m_keyframe  
 Represents a Windows Animation API keyframe. When a keyframe is not initialized it is set to the predefined value UI_ANIMATION_KEYFRAME_STORYBOARD_START.  
  
```  
UI_ANIMATION_KEYFRAME m_keyframe;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
