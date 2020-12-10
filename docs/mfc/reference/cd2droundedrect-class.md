---
description: "Learn more about: CD2DRoundedRect Class"
title: "CD2DRoundedRect Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DRoundedRect", "AFXRENDERTARGET/CD2DRoundedRect", "AFXRENDERTARGET/CD2DRoundedRect::CD2DRoundedRect"]
helpviewer_keywords: ["CD2DRoundedRect [MFC], CD2DRoundedRect"]
ms.assetid: 06207fb5-e92b-41c0-bceb-b45d8f466531
---
# CD2DRoundedRect Class

A wrapper for `D2D1_ROUNDED_RECT`.

## Syntax

```
class CD2DRoundedRect : public D2D1_ROUNDED_RECT;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DRoundedRect::CD2DRoundedRect](#cd2droundedrect)|Overloaded. Constructs a `CD2DRoundedRect` object from `D2D1_ROUNDED_RECT` object.|

## Inheritance Hierarchy

`D2D1_ROUNDED_RECT`

[CD2DRoundedRect](../../mfc/reference/cd2droundedrect-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2droundedrect"></a> CD2DRoundedRect::CD2DRoundedRect

Constructs a CD2DRoundedRect object from CD2DRectF object.

```
CD2DRoundedRect(
    const CD2DRectF& rectIn,
    const CD2DSizeF& sizeRadius);

CD2DRoundedRect(const D2D1_ROUNDED_RECT& rectIn);
CD2DRoundedRect(const D2D1_ROUNDED_RECT* rectIn);
```

### Parameters

*rectIn*<br/>
source rectangle

*sizeRadius*<br/>
radius size

## See also

[Classes](../../mfc/reference/mfc-classes.md)
