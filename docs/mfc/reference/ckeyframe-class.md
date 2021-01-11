---
description: "Learn more about: CKeyFrame Class"
title: "CKeyFrame Class"
ms.date: "11/04/2016"
f1_keywords: ["CKeyFrame", "AFXANIMATIONCONTROLLER/CKeyFrame", "AFXANIMATIONCONTROLLER/CKeyFrame::CKeyFrame", "AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboard", "AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboardAfterTransition", "AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboardAtOffset", "AFXANIMATIONCONTROLLER/CKeyFrame::GetExistingKeyframe", "AFXANIMATIONCONTROLLER/CKeyFrame::GetOffset", "AFXANIMATIONCONTROLLER/CKeyFrame::GetTransition", "AFXANIMATIONCONTROLLER/CKeyFrame::m_offset", "AFXANIMATIONCONTROLLER/CKeyFrame::m_pExistingKeyFrame", "AFXANIMATIONCONTROLLER/CKeyFrame::m_pTransition"]
helpviewer_keywords: ["CKeyFrame [MFC], CKeyFrame", "CKeyFrame [MFC], AddToStoryboard", "CKeyFrame [MFC], AddToStoryboardAfterTransition", "CKeyFrame [MFC], AddToStoryboardAtOffset", "CKeyFrame [MFC], GetExistingKeyframe", "CKeyFrame [MFC], GetOffset", "CKeyFrame [MFC], GetTransition", "CKeyFrame [MFC], m_offset", "CKeyFrame [MFC], m_pExistingKeyFrame", "CKeyFrame [MFC], m_pTransition"]
ms.assetid: d050a562-20f6-4c65-8ce5-ccb3aef1a20e
---
# CKeyFrame Class

Represents an animation keyframe.

## Syntax

```
class CKeyFrame : public CBaseKeyFrame;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CKeyFrame::CKeyFrame](#ckeyframe)|Overloaded. Constructs a keyframe that depends on other keyframe.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CKeyFrame::AddToStoryboard](#addtostoryboard)|Adds a keyframe to a storyboard. (Overrides [CBaseKeyFrame::AddToStoryboard](../../mfc/reference/cbasekeyframe-class.md#addtostoryboard).)|
|[CKeyFrame::AddToStoryboardAfterTransition](#addtostoryboardaftertransition)|Adds a keyframe to storyboard after transition.|
|[CKeyFrame::AddToStoryboardAtOffset](#addtostoryboardatoffset)|Adds a keyframe to storyboard at offset.|
|[CKeyFrame::GetExistingKeyframe](#getexistingkeyframe)|Returns a pointer to a keyframe this keyframe depends on.|
|[CKeyFrame::GetOffset](#getoffset)|Returns an offset from other keyframe.|
|[CKeyFrame::GetTransition](#gettransition)|Returns a pointer to a transition this keyframe depends on.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CKeyFrame::m_offset](#m_offset)|Specifies offset of this keyframe from a keyframe stored in m_pExistingKeyFrame.|
|[CKeyFrame::m_pExistingKeyFrame](#m_pexistingkeyframe)|Stores a pointer to an existing keframe. This keyframe is added to storyboard with m_offset to the existing keyframe.|
|[CKeyFrame::m_pTransition](#m_ptransition)|Stores a pointer to transtion that begins at this keyframe.|

## Remarks

This class implements an animation keyframe. A keyframe represents a moment in time within a storyboard and can be used to specify the start and end times of transitions. A keyframe may be based on other keyframe and have an offset (in seconds) from it, or may be based on a transition and represent a moment in time when this transition ends.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)

[CKeyFrame](../../mfc/reference/ckeyframe-class.md)

## Requirements

**Header:** afxanimationcontroller.h

## <a name="addtostoryboard"></a> CKeyFrame::AddToStoryboard

Adds a keyframe to a storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### Parameters

*pStoryboard*<br/>
A pointer to a storyboard.

*bDeepAdd*<br/>
Specifies whether to add keyframe or transition recursively.

### Return Value

TRUE, if keyframe was added successfully.

### Remarks

This method adds a keyframe to storyboard. If it depends on other keyframe or transition and bDeepAdd is TRUE, this method tries to add them recursively.

## <a name="addtostoryboardaftertransition"></a> CKeyFrame::AddToStoryboardAfterTransition

Adds a keyframe to storyboard after transition.

```
BOOL AddToStoryboardAfterTransition(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### Parameters

*pStoryboard*<br/>
A pointer to a storyboard.

*bDeepAdd*<br/>
Specifies whether to add a transition recursively.

### Return Value

TRUE, if keyframe was added successfully.

### Remarks

This function is called by the framework to add a keyframe to storyboard after transition.

## <a name="addtostoryboardatoffset"></a> CKeyFrame::AddToStoryboardAtOffset

Adds a keyframe to storyboard at offset.

```
virtual BOOL AddToStoryboardAtOffset(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### Parameters

*pStoryboard*<br/>
A pointer to a storyboard.

*bDeepAdd*<br/>
Specifies whether to add a keyframe this keyframe depend on recursively.

### Return Value

TRUE, if keyframe was added successfully.

### Remarks

This function is called by the framework to add a keyframe to storyboard at offset.

## <a name="ckeyframe"></a> CKeyFrame::CKeyFrame

Constructs a keyframe that depends on a transition.

```
CKeyFrame(CBaseTransition* pTransition);

CKeyFrame(
    CBaseKeyFrame* pKeyframe,
    UI_ANIMATION_SECONDS offset = 0.0);
```

### Parameters

*pTransition*<br/>
A pointer to a transition.

*pKeyframe*<br/>
A pointer to keyframe.

*offset*<br/>
Offset, in seconds, from keyframe specified by pKeyframe.

### Remarks

The constructed keyframe will represent a moment in time within a storyboard when the specified transition ends.

## <a name="getexistingkeyframe"></a> CKeyFrame::GetExistingKeyframe

Returns a pointer to a keyframe this keyframe depends on.

```
CBaseKeyFrame* GetExistingKeyframe();
```

### Return Value

A valid pointer to keyframe, or NULL if this keyframe does not depend on other keyframe.

### Remarks

This is an accessor to a keyframe this keyframe depends on.

## <a name="getoffset"></a> CKeyFrame::GetOffset

Returns an offset from other keyframe.

```
UI_ANIMATION_SECONDS GetOffset();
```

### Return Value

An offset in seconds from other keyframe.

### Remarks

This method should be called to determine an offset in seconds from other keyframe.

## <a name="gettransition"></a> CKeyFrame::GetTransition

Returns a pointer to a transition this keyframe depends on.

```
CBaseTransition* GetTransition();
```

### Return Value

A valid pointer to transition, or NULL if this keyframe does not depend on transition.

### Remarks

This is an accessor to a transition this keyframe depends on.

## <a name="m_offset"></a> CKeyFrame::m_offset

Specifies offset of this keyframe from a keyframe stored in m_pExistingKeyFrame.

```
UI_ANIMATION_SECONDS m_offset;
```

## <a name="m_pexistingkeyframe"></a> CKeyFrame::m_pExistingKeyFrame

Stores a pointer to an existing keframe. This keyframe is added to storyboard with m_offset to the existing keyframe.

```
CBaseKeyFrame* m_pExistingKeyFrame;
```

## <a name="m_ptransition"></a> CKeyFrame::m_pTransition

Stores a pointer to transtion that begins at this keyframe.

```
CBaseTransition* m_pTransition;
```

## See also

[Classes](../../mfc/reference/mfc-classes.md)
