---
description: "Learn more about: CSize Class"
title: "CSize Class"
ms.date: "10/18/2018"
f1_keywords: ["CSize", "ATLTYPES/ATL::CSize", "ATLTYPES/ATL::CSize::CSize"]
helpviewer_keywords: ["SIZE", "dimensions, MFC", "dimensions", "CSize class"]
ms.assetid: fb2cf85a-0bc1-46f8-892b-309c108b52ae
---
# CSize Class

Similar to the Windows [SIZE](/windows/win32/api/windef/ns-windef-size) structure, which implements a relative coordinate or position.

## Syntax

```
class CSize : public tagSIZE
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSize::CSize](#csize)|Constructs a `CSize` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CSize::operator -](#operator_-)|Subtracts two sizes.|
|[CSize::operator !=](#operator_neq)|Checks for inequality between `CSize` and a size.|
|[CSize::operator +](#operator_add)|Adds two sizes.|
|[CSize::operator +=](#operator_add_eq)|Adds a size to `CSize`.|
|[CSize::operator -=](#operator_-_eq)|Subtracts a size from `CSize`.|
|[CSize::operator ==](#operator_eq_eq)|Checks for equality between `CSize` and a size.|

## Remarks

This class is derived from the `SIZE` structure. This means you can pass a `CSize` in a parameter that calls for a `SIZE` and that the data members of the `SIZE` structure are accessible data members of `CSize`.

The `cx` and `cy` members of `SIZE` (and `CSize`) are public. In addition, `CSize` implements member functions to manipulate the `SIZE` structure.

> [!NOTE]
> For more information on shared utility classes (like `CSize`), see [Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md).

## Inheritance Hierarchy

`tagSIZE`

`CSize`

## Requirements

**Header:** atltypes.h

## <a name="csize"></a> CSize::CSize

Constructs a `CSize` object.

```
CSize() throw();
CSize( int initCX, int initCY) throw();
CSize( SIZE initSize) throw();
CSize( POINT initPt) throw();
CSize( DWORD dwSize) throw();
```

### Parameters

*initCX*<br/>
Sets the `cx` member for the `CSize`.

*initCY*<br/>
Sets the `cy` member for the `CSize`.

*initSize*<br/>
[SIZE](/windows/win32/api/windef/ns-windef-size) structure or `CSize` object used to initialize `CSize`.

*initPt*<br/>
[POINT](/windows/win32/api/windef/ns-windef-point) structure or `CPoint` object used to initialize `CSize`.

*dwSize*<br/>
DWORD used to initialize `CSize`. The low-order word is the `cx` member and the high-order word is the `cy` member.

### Remarks

If no arguments are given, `cx` and `cy` are initialized to zero.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#97](../../atl-mfc-shared/codesnippet/cpp/csize-class_1.cpp)]

## <a name="operator_eq_eq"></a> CSize::operator ==

Checks for equality between two sizes.

```
BOOL operator==(SIZE size) const throw();
```

### Remarks

Returns nonzero if the sizes are equal, otherwize 0.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#98](../../atl-mfc-shared/codesnippet/cpp/csize-class_2.cpp)]

## <a name="operator_neq"></a> CSize::operator !=

Checks for inequality between two sizes.

```
BOOL operator!=(SIZE size) const throw();
```

### Remarks

Returns nonzero if the sizes are not equal, otherwise 0.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#99](../../atl-mfc-shared/codesnippet/cpp/csize-class_3.cpp)]

## <a name="operator_add_eq"></a> CSize::operator +=

Adds a size to this `CSize`.

```cpp
void operator+=(SIZE size) throw();
```

### Example

[!code-cpp[NVC_ATLMFC_Utilities#100](../../atl-mfc-shared/codesnippet/cpp/csize-class_4.cpp)]

## <a name="operator_-_eq"></a> CSize::operator -=

Subtracts a size from this `CSize`.

```cpp
void operator-=(SIZE size) throw();
```

### Example

[!code-cpp[NVC_ATLMFC_Utilities#101](../../atl-mfc-shared/codesnippet/cpp/csize-class_5.cpp)]

## <a name="operator_add"></a> CSize::operator +

These operators add this `CSize` value to the value of parameter.

```
CSize operator+(SIZE size) const throw();
CPoint operator+(POINT point) const throw();
CRect operator+(const RECT* lpRect) const throw();
```

### Remarks

See the following descriptions of the individual operators:

- **operator +(** *size* **)**

  This operation adds two `CSize` values.

- **operator +(** *point* **)**

  This operation offsets (moves) a [POINT](/windows/win32/api/windef/ns-windef-point) (or [CPoint](../../atl-mfc-shared/reference/cpoint-class.md)) value by this `CSize` value. The `cx` and `cy` members of this `CSize` value are added to the `x` and `y` data members of the `POINT` value. It is analogous to the version of [CPoint::operator +](../../atl-mfc-shared/reference/cpoint-class.md#operator_add) that takes a [SIZE](/windows/win32/api/windef/ns-windef-size) parameter.

- **operator +(** *lpRect* **)**

   This operation offsets (moves) a [RECT](/windows/win32/api/windef/ns-windef-rect) (or [CRect](../../atl-mfc-shared/reference/crect-class.md)) value by this `CSize` value. The `cx` and `cy` members of this `CSize` value are added to the `left`, `top`, `right`, and `bottom` data members of the `RECT` value. It is analogous to the version of [CRect::operator +](../../atl-mfc-shared/reference/crect-class.md#operator_add) that takes a [SIZE](/windows/win32/api/windef/ns-windef-size) parameter.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#102](../../atl-mfc-shared/codesnippet/cpp/csize-class_6.cpp)]

## <a name="operator_-"></a> CSize::operator -

The first three of these operators subtract this `CSize` value to the value of parameter.

```
CSize operator-(SIZE size) const throw();
CPoint operator-(POINT point) const throw();
CRect operator-(const RECT* lpRect) const throw();
CSize operator-() const throw();
```

### Remarks

The fourth operator, the unary minus, changes the sign of the `CSize` value. See the following descriptions of the individual operators:

- **operator -(** *size* **)**

  This operation subtracts two `CSize` values.

- **operator -(** *point* **)**

  This operation offsets (moves) a [POINT](/windows/win32/api/windef/ns-windef-point) or [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) value by the additive inverse of this `CSize` value. The `cx` and `cy` of this `CSize` value are subtracted from the `x` and `y` data members of the `POINT` value. It is analogous to the version of [CPoint::operator -](../../atl-mfc-shared/reference/cpoint-class.md#operator_-) that takes a [SIZE](/windows/win32/api/windef/ns-windef-size) parameter.

- **operator -(** *lpRect* **)**

  This operation offsets (moves) a [RECT](/windows/win32/api/windef/ns-windef-rect) or [CRect](../../atl-mfc-shared/reference/crect-class.md) value by the additive inverse of this `CSize` value. The `cx` and `cy` members of this `CSize` value are subtracted from the `left`, `top`, `right`, and `bottom` data members of the `RECT` value. It is analogous to the version of [CRect::operator -](../../atl-mfc-shared/reference/crect-class.md#operator_-) that takes a [SIZE](/windows/win32/api/windef/ns-windef-size) parameter.

- **operator -()**

  This operation returns the additive inverse of this `CSize` value.

### Example

[!code-cpp[NVC_ATLMFC_Utilities#103](../../atl-mfc-shared/codesnippet/cpp/csize-class_7.cpp)]

## See also

[MFC Sample MDI](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CRect Class](../../atl-mfc-shared/reference/crect-class.md)<br/>
[CPoint Class](../../atl-mfc-shared/reference/cpoint-class.md)
