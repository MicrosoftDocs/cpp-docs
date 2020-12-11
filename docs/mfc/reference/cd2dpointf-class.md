---
description: "Learn more about: CD2DPointF Class"
title: "CD2DPointF Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DPointF", "AFXRENDERTARGET/CD2DPointF", "AFXRENDERTARGET/CD2DPointF::CD2DPointF"]
helpviewer_keywords: ["CD2DPointF [MFC], CD2DPointF"]
ms.assetid: 30f72083-1c8a-4f50-adb2-72dbbe3522d4
---
# CD2DPointF Class

A wrapper for `D2D1_POINT_2F`.

## Syntax

```
class CD2DPointF : public D2D1_POINT_2F;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DPointF::CD2DPointF](#cd2dpointf)|Overloaded. Constructs a `CD2DPointF` object from `D2D1_POINT_2F` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DPointF::operator CPoint](#operator_cpoint)|Converts `CD2DPointF` to `CPoint` object.|

## Inheritance Hierarchy

`D2D1_POINT_2F`

`CD2DPointF`

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2dpointf"></a> CD2DPointF::CD2DPointF

Constructs a CD2DPointF object from CPoint object.

```
CD2DPointF(const CPoint& pt);
CD2DPointF(const D2D1_POINT_2F& pt);
CD2DPointF(const D2D1_POINT_2F* pt);
CD2DPointF(FLOAT fX = 0., FLOAT fY = 0.);
```

### Parameters

*pt*<br/>
source point

*fX*<br/>
source X

*fY*<br/>
source Y

## <a name="operator_cpoint"></a> CD2DPointF::operator CPoint

Converts CD2DPointF to CPoint object.

```
operator CPoint();
```

### Return Value

Current value of D2D point.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
