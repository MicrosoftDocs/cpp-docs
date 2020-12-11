---
description: "Learn more about: CD2DRectU Class"
title: "CD2DRectU Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DRectU", "AFXRENDERTARGET/CD2DRectU", "AFXRENDERTARGET/CD2DRectU::CD2DRectU", "AFXRENDERTARGET/CD2DRectU::IsNull"]
helpviewer_keywords: ["CD2DRectU [MFC], CD2DRectU", "CD2DRectU [MFC], IsNull"]
ms.assetid: a62f17d1-011d-4867-8f51-fd7e7c00561d
---
# CD2DRectU Class

A wrapper for `D2D1_RECT_U`.

## Syntax

```
class CD2DRectU : public D2D1_RECT_U;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DRectU::CD2DRectU](#cd2drectu)|Overloaded. Constructs a `CD2DRectU` object from `D2D1_RECT_U` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DRectU::IsNull](#isnull)|Returns a **boolean** value that indicates whether an expression contains no valid data (NULL).|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DRectU::operator CRect](#operator_crect)|Converts `CD2DRectU` to `CRect` object.|

## Inheritance Hierarchy

`D2D1_RECT_U`

`CD2DRectU`

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2drectu"></a> CD2DRectU::CD2DRectU

Constructs a CD2DRectU object from CRect object.

```
CD2DRectU(const CRect& rect);
CD2DRectU(const D2D1_RECT_U& rect);
CD2DRectU(const D2D1_RECT_U* rect);

CD2DRectU(
    UINT32 uLeft = 0,
    UINT32 uTop = 0,
    UINT32 uRight = 0,
    UINT32 uBottom = 0);
```

### Parameters

*rect*<br/>
source rectangle

*uLeft*<br/>
source left coordinate

*uTop*<br/>
source top coordinate

*uRight*<br/>
source right coordinate

*uBottom*<br/>
source bottom coordinate

## <a name="isnull"></a> CD2DRectU::IsNull

Returns a Boolean value that indicates whether an expression contains no valid data (Null).

```
BOOL IsNull() const;
```

### Return Value

TRUE if rectangle's top, left, bottom, and right values are all equal to 0; otherwise FALSE.

## <a name="operator_crect"></a> CD2DRectU::operator CRect

Converts CD2DRectU to CRect object.

```
operator CRect();
```

### Return Value

Current value of D2D rectangle.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
