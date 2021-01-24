---
description: "Learn more about: CD2DSizeU Class"
title: "CD2DSizeU Class"
ms.date: "08/29/2019"
f1_keywords: ["CD2DSizeU", "AFXRENDERTARGET/CD2DSizeU", "AFXRENDERTARGET/CD2DSizeU::CD2DSizeU", "AFXRENDERTARGET/CD2DSizeU::IsNull"]
helpviewer_keywords: ["CD2DSizeU [MFC], CD2DSizeU", "CD2DSizeU [MFC], IsNull"]
ms.assetid: 6e679ba8-2112-43c3-8275-70b660856f02
---
# CD2DSizeU Class

A wrapper for D2D1_SIZE_U.

## Syntax

```
class CD2DSizeU : public D2D1_SIZE_U;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DSizeU::CD2DSizeU](#cd2dsizeu)|Overloaded. Constructs a `CD2DSizeU` object from `D2D1_SIZE_U` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DSizeU::IsNull](#isnull)|Returns a **boolean** value that indicates whether an expression contains no valid data (NULL).|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DSizeU::operator CSize](#operator_csize)|Converts `CD2DSizeU` to `CSize` object.|

## Inheritance Hierarchy

`D2D1_SIZE_U`

[CD2DSizeU](../../mfc/reference/cd2dsizeu-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="cd2dsizeu"></a> CD2DSizeU::CD2DSizeU

Constructs a CD2DSizeU object from CSize object.

```
CD2DSizeU(const CSize& size);
CD2DSizeU(const D2D1_SIZE_U& size);
CD2DSizeU(const D2D1_SIZE_U* size);

CD2DSizeU(
    UINT32 cx = 0,
    UINT32 cy = 0);
```

### Parameters

*size*<br/>
source size

*cx*<br/>
source width

*cy*<br/>
source height

## <a name="isnull"></a> CD2DSizeU::IsNull

Returns a Boolean value that indicates whether an expression contains no valid data (Null).

```
BOOL IsNull() const;
```

### Return Value

TRUE if width and height are empty; otherwise FALSE.

## <a name="operator_csize"></a> CD2DSizeU::operator CSize

Converts CD2DSizeU to CSize object.

```
operator CSize();
```

### Return Value

Current value of D2D size.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
