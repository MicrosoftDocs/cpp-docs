---
description: "Learn more about: CD2DRectF Class"
title: "CD2DRectF Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DRectF", "AFXRENDERTARGET/CD2DRectF", "AFXRENDERTARGET/CD2DRectF::CD2DRectF", "AFXRENDERTARGET/CD2DRectF::IsNull"]
helpviewer_keywords: ["CD2DRectF [MFC], CD2DRectF", "CD2DRectF [MFC], IsNull"]
ms.assetid: 87c12d87-9d18-4a19-ba14-0f51d6b6835a
---
# CD2DRectF Class

A wrapper for `D2D1_RECT_F`.

## Syntax

```
class CD2DRectF : public D2D1_RECT_F;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DRectF::CD2DRectF](#cd2drectf)|Overloaded. Constructs a `CD2DRectF` object from `D2D1_RECT_F` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DRectF::IsNull](#isnull)|Returns a **boolean** value that indicates whether an expression contains no valid data (NULL).|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DRectF::operator CRect](#operator_crect)|Converts `CD2DRectF` to `CRect` object.|

## Inheritance Hierarchy

`D2D1_RECT_F`

`CD2DRectF`

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2drectf"></a> CD2DRectF::CD2DRectF

Constructs a CD2DRectF object from CRect object.

```
CD2DRectF(const CRect& rect);
CD2DRectF(const D2D1_RECT_F& rect);
CD2DRectF(const D2D1_RECT_F* rect);

CD2DRectF(
    FLOAT fLeft = 0.,
    FLOAT fTop = 0.,
    FLOAT fRight = 0.,
    FLOAT fBottom = 0.);
```

### Parameters

*rect*<br/>
source rectangle

*fLeft*<br/>
source left coordinate

*fTop*<br/>
source top coordinate

*fRight*<br/>
source right coordinate

*fBottom*<br/>
source bottom coordinate

## <a name="isnull"></a> CD2DRectF::IsNull

Returns a Boolean value that indicates whether an expression contains no valid data (Null).

```
BOOL IsNull() const;
```

### Return Value

TRUE if rectangle's top, left, bottom, and right values are all equal to 0; otherwise FALSE.

## <a name="operator_crect"></a> CD2DRectF::operator CRect

Converts CD2DRectF to CRect object.

```
operator CRect();
```

### Return Value

Current value of D2D rectangle.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
