---
description: "Learn more about: CMFCDisableMenuAnimation Class"
title: "CMFCDisableMenuAnimation Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCDisableMenuAnimation", "AFXPOPUPMENU/CMFCDisableMenuAnimation", "AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore"]
helpviewer_keywords: ["CMFCDisableMenuAnimation [MFC], Restore"]
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
---
# CMFCDisableMenuAnimation Class

Disables pop-up menu animation.

## Syntax

```
class CMFCDisableMenuAnimation
```

## Members

### Public Constructors

|Name|Description|
|-|-|
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Constructs a `CMFCDisableMenuAnimation` object.|
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Destructor.|

### Public Methods

|Name|Description|
|-|-|
|[CMFCDisableMenuAnimation::Restore](#restore)|Restores the previous animation that the framework used to display a pop-up menu.|

### Data Members

|Name|Description|
|-|-|
|`CMFCDisableMenuAnimation::m_animType`|Stores the previous pop-up menu animation type.|

### Remarks

Use this helper class to temporarily disable pop-up menu animation (for example, when you process mouse or keyboard commands).

A `CMFCDisableMenuAnimation` object disables pop-up menu animation during its lifetime. The constructor stores the current pop-up menu animation type in the `m_animType` field and sets the current animation type to `CMFCPopupMenu::NO_ANIMATION`. The destructor restores the previous animation type.

You can create a `CMFCDisableMenuAnimation` object on the stack to disable pop-up menu animation throughout a single function. If you want to disable popup menu animation between functions, create a `CMFCDisableMenuAnimation` object on the heap and then delete it when you want to restore pop-up menu animation.

## Example

The following example shows how to use the stack to temporarily disable menu animation.

[!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]

## Inheritance Hierarchy

[CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)

## Requirements

**Header:** afxpopupmenu.h

## <a name="restore"></a> CMFCDisableMenuAnimation::Restore

Restores the previous animation that the framework used to display a pop-up menu.

```cpp
void Restore ();
```

### Remarks

This method is called by the `CMFCDisableMenuAnimation` destructor to restore the previous animation that the framework used to display a pop-up menu.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)
