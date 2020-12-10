---
description: "Learn more about: CRect Class"
title: "CRect Class"
ms.date: "11/06/2018"
f1_keywords: ["CRect", "ATLTYPES/ATL::CRect", "ATLTYPES/ATL::CRect::CRect", "ATLTYPES/ATL::CRect::BottomRight", "ATLTYPES/ATL::CRect::CenterPoint", "ATLTYPES/ATL::CRect::CopyRect", "ATLTYPES/ATL::CRect::DeflateRect", "ATLTYPES/ATL::CRect::EqualRect", "ATLTYPES/ATL::CRect::Height", "ATLTYPES/ATL::CRect::InflateRect", "ATLTYPES/ATL::CRect::IntersectRect", "ATLTYPES/ATL::CRect::IsRectEmpty", "ATLTYPES/ATL::CRect::IsRectNull", "ATLTYPES/ATL::CRect::MoveToX", "ATLTYPES/ATL::CRect::MoveToXY", "ATLTYPES/ATL::CRect::MoveToY", "ATLTYPES/ATL::CRect::NormalizeRect", "ATLTYPES/ATL::CRect::OffsetRect", "ATLTYPES/ATL::CRect::PtInRect", "ATLTYPES/ATL::CRect::SetRect", "ATLTYPES/ATL::CRect::SetRectEmpty", "ATLTYPES/ATL::CRect::Size", "ATLTYPES/ATL::CRect::SubtractRect", "ATLTYPES/ATL::CRect::TopLeft", "ATLTYPES/ATL::CRect::UnionRect", "ATLTYPES/ATL::CRect::Width"]
helpviewer_keywords: ["LPCRECT data type", "CRect class", "LPRECT operator", "RECT structure"]
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
---
# CRect Class

Similar to a Windows [RECT](/windows/win32/api/windef/ns-windef-rect) structure.

## Syntax

```
class CRect : public tagRECT
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRect::CRect](#crect)|Constructs a `CRect` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRect::BottomRight](#bottomright)|Returns the bottom-right point of `CRect`.|
|[CRect::CenterPoint](#centerpoint)|Returns the centerpoint of `CRect`.|
|[CRect::CopyRect](#copyrect)|Copies the dimensions of a source rectangle to `CRect`.|
|[CRect::DeflateRect](#deflaterect)|Decreases the width and height of `CRect`.|
|[CRect::EqualRect](#equalrect)|Determines whether `CRect` is equal to the given rectangle.|
|[CRect::Height](#height)|Calculates the height of `CRect`.|
|[CRect::InflateRect](#inflaterect)|Increases the width and height of `CRect`.|
|[CRect::IntersectRect](#intersectrect)|Sets `CRect` equal to the intersection of two rectangles.|
|[CRect::IsRectEmpty](#isrectempty)|Determines whether `CRect` is empty. `CRect` is empty if the width and/or height are 0.|
|[CRect::IsRectNull](#isrectnull)|Determines whether the `top`, `bottom`, `left`, and `right` member variables are all equal to 0.|
|[CRect::MoveToX](#movetox)|Moves `CRect` to the specified x-coordinate.|
|[CRect::MoveToXY](#movetoxy)|Moves `CRect` to the specified x- and y-coordinates.|
|[CRect::MoveToY](#movetoy)|Moves `CRect` to the specified y-coordinate.|
|[CRect::NormalizeRect](#normalizerect)|Standardizes the height and width of `CRect`.|
|[CRect::OffsetRect](#offsetrect)|Moves `CRect` by the specified offsets.|
|[CRect::PtInRect](#ptinrect)|Determines whether the specified point lies within `CRect`.|
|[CRect::SetRect](#setrect)|Sets the dimensions of `CRect`.|
|[CRect::SetRectEmpty](#setrectempty)|Sets `CRect` to an empty rectangle (all coordinates equal to 0).|
|[CRect::Size](#size)|Calculates the size of `CRect`.|
|[CRect::SubtractRect](#subtractrect)|Subtracts one rectangle from another.|
|[CRect::TopLeft](#topleft)|Returns the top-left point of `CRect`.|
|[CRect::UnionRect](#unionrect)|Sets `CRect` equal to the union of two rectangles.|
|[CRect::Width](#width)|Calculates the width of `CRect`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CRect::operator -](#operator_-)|Subtracts the given offsets from `CRect` or deflates `CRect` and returns the resulting `CRect`.|
|[CRect::operator LPCRECT](#operator_lpcrect)|Converts a `CRect` to an `LPCRECT`.|
|[CRect::operator LPRECT](#operator_lprect)|Converts a `CRect` to an `LPRECT`.|
|[CRect::operator !=](#operator_neq)|Determines whether `CRect` is not equal to a rectangle.|
|[CRect::operator &amp;](#operator_amp)|Creates the intersection of `CRect` and a rectangle and returns the resulting `CRect`.|
|[CRect::operator &amp;=](#operator_amp_eq)|Sets `CRect` equal to the intersection of `CRect` and a rectangle.|
|[CRect::operator &#124;](#operator_or)|Creates the union of `CRect` and a rectangle and returns the resulting `CRect`.|
|[CRect::operator &#124;=](#operator_or_eq)|Sets `CRect` equal to the union of `CRect` and a rectangle.|
|[CRect::operator +](#operator_add)|Adds the given offsets to `CRect` or inflates `CRect` and returns the resulting `CRect`.|
|[CRect::operator +=](#operator_add_eq)|Adds the specified offsets to `CRect` or inflates `CRect`.|
|[CRect::operator =](#operator_eq)|Copies the dimensions of a rectangle to `CRect`.|
|[CRect::operator -=](#operator_-_eq)|Subtracts the specified offsets from `CRect` or deflates `CRect`.|
|[CRect::operator ==](#operator_eq_eq)|Determines whether `CRect` is equal to a rectangle.|

## Remarks

`CRect` also includes member functions to manipulate `CRect` objects and Windows `RECT` structures.

A `CRect` object can be passed as a function parameter wherever a `RECT` structure, `LPCRECT`, or `LPRECT` can be passed.

> [!NOTE]
> This class is derived from the `tagRECT` structure. (The name `tagRECT` is a less-commonly-used name for the `RECT` structure.) This means that the data members (`left`, `top`, `right`, and `bottom`) of the `RECT` structure are accessible data members of `CRect`.

A `CRect` contains member variables that define the top-left and bottom-right points of a rectangle.

When specifying a `CRect`, you must be careful to construct it so that it is normalized — in other words, such that the value of the left coordinate is less than the right and the top is less than the bottom. For example, a top left of (10,10) and bottom right of (20,20) defines a normalized rectangle but a top left of (20,20) and bottom right of (10,10) defines a non-normalized rectangle. If the rectangle is not normalized, many `CRect` member functions may return incorrect results. (See [CRect::NormalizeRect](#normalizerect) for a list of these functions.) Before you call a function that requires normalized rectangles, you can normalize non-normalized rectangles by calling the `NormalizeRect` function.

Use caution when manipulating a `CRect` with the [CDC::DPtoLP](../../mfc/reference/cdc-class.md#dptolp) and [CDC::LPtoDP](../../mfc/reference/cdc-class.md#lptodp) member functions. If the mapping mode of a display context is such that the y-extent is negative, as in `MM_LOENGLISH`, then `CDC::DPtoLP` will transform the `CRect` so that its top is greater than the bottom. Functions such as `Height` and `Size` will then return negative values for the height of the transformed `CRect`, and the rectangle will be non-normalized.

When using overloaded `CRect` operators, the first operand must be a `CRect`; the second can be either a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or a `CRect` object.

## Inheritance Hierarchy

`tagRECT`

`CRect`

## Requirements

**Header:** atltypes.h

## <a name="bottomright"></a> CRect::BottomRight

The coordinates are returned as a reference to a [CPoint](cpoint-class.md) object that is contained in `CRect`.

```
CPoint& BottomRight() throw();
const CPoint& BottomRight() const throw();
```

### Return Value

The coordinates of the bottom-right corner of the rectangle.

### Remarks

You can use this function to either get or set the bottom-right corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.

### Example

```cpp
// use BottomRight() to retrieve the bottom
// right POINT
CRect rect(210, 150, 350, 900);
CPoint ptDown;

ptDown = rect.BottomRight();

// ptDown is now set to (350, 900)
ASSERT(ptDown == CPoint(350, 900));

// or, use BottomRight() to set the bottom
// right POINT
CRect rect2(10, 10, 350, 350);
CPoint ptLow(180, 180);

CRect rect2(10, 10, 350, 350);
CPoint ptLow(180, 180);
rect2.BottomRight() = ptLow;

// rect2 is now (10, 10, 180, 180)
ASSERT(rect2 == CRect(10, 10, 180, 180));
```

## <a name="centerpoint"></a> CRect::CenterPoint

Calculates the centerpoint of `CRect` by adding the left and right values and dividing by two, and adding the top and bottom values and dividing by two.

```
CPoint CenterPoint() const throw();
```

### Return Value

A `CPoint` object that is the centerpoint of `CRect`.

### Example

```cpp
// Code from this OnPaint() implementation can be pasted into your own application
// to draw lines that would look like a letter "Y" within your dialog.
void CMyDlg::OnPaint()
{
    CPaintDC dc(this);

    // device context for painting

    // get the size and position of the client area of
    // your window

    CRect rect;
    GetClientRect(&rect);

    // Move the current pen to the top left of the window. We call the
    // TopLeft() member of CRect here and it returns a CPoint object we
    // pass to the override of CDC::MoveTo() that accepts a CPoint.

    dc.MoveTo(rect.TopLeft());

    // Draw a line from the top left to the center of the window.
    // CenterPoint() gives us the middle point of the window as a
    // CPoint, and since CDC::LineTo() has an override that accepts a
    // CPoint, we can just pass it along.

    dc.LineTo(rect.CenterPoint());

    // Now, draw a line to the top right of the window. There's no
    // CRect member which returns a CPoint for the top right of the
    // window, so we'll reference the CPoint members directly and call
    // the CDC::LineTo() override which takes two integers.

    dc.LineTo(rect.right, rect.top);

    // The top part of the "Y" is drawn. Now, we'll draw the stem. We
    // start from the center point.

    dc.MoveTo(rect.CenterPoint());

    // and then draw to the middle of the bottom edge of the window.
    // We'll get the x-coordinate from the x member of the CPOINT
    // returned by CenterPoint(), and the y value comes directly from
    // the rect.

    dc.LineTo(rect.CenterPoint().x, rect.bottom);
}
```

## <a name="copyrect"></a> CRect::CopyRect

Copies the `lpSrcRect` rectangle into `CRect`.

```cpp
void CopyRect(LPCRECT lpSrcRect) throw();
```

### Parameters

*lpSrcRect*<br/>
Points to the [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that is to be copied.

### Example

```cpp
CRect rectSource(35, 10, 125, 10);
CRect rectDest;

rectDest.CopyRect(&rectSource);

// rectDest is now set to (35, 10, 125, 10)

RECT rectSource2;
rectSource2.left = 0;
rectSource2.top = 0;
rectSource2.bottom = 480;
rectSource2.right = 640;

rectDest.CopyRect(&rectSource2);

// works against RECT structures, too!
// rectDest is now set to (0, 0, 640, 480)
```

## <a name="crect"></a> CRect::CRect

Constructs a `CRect` object.

```
CRect() throw();
CRect(int l, int t, int r, int b) throw();
CRect(const RECT& srcRect) throw();
CRect(LPCRECT lpSrcRect) throw();
CRect(POINT point, SIZE size) throw();
CRect(POINT topLeft, POINT bottomRight) throw();
```

### Parameters

*l*<br/>
Specifies the left position of `CRect`.

*t*<br/>
Specifies the top of `CRect`.

*r*<br/>
Specifies the right position of `CRect`.

*b*<br/>
Specifies the bottom of `CRect`.

*srcRect*<br/>
Refers to the [RECT](/windows/win32/api/windef/ns-windef-rect) structure with the coordinates for `CRect`.

*lpSrcRect*<br/>
Points to the `RECT` structure with the coordinates for `CRect`.

*point*<br/>
Specifies the origin point for the rectangle to be constructed. Corresponds to the top-left corner.

*size*<br/>
Specifies the displacement from the top-left corner to the bottom-right corner of the rectangle to be constructed.

*topLeft*<br/>
Specifies the top-left position of `CRect`.

*bottomRight*<br/>
Specifies the bottom-right position of `CRect`.

### Remarks

If no arguments are given, `left`, `top`, `right`, and `bottom` members are set to 0.

The `CRect`(`const RECT&`) and `CRect`(`LPCRECT`) constructors perform a [CopyRect](#copyrect). The other constructors initialize the member variables of the object directly.

### Example

```cpp
// default constructor is equivalent to CRect(0, 0, 0, 0)
CRect emptyRect;

// four-integers are left, top, right, and bottom
CRect rect(0, 0, 100, 50);
ASSERT(rect.Width() == 100);
ASSERT(rect.Height() == 50);

// Initialize from RECT structure
RECT sdkRect;
sdkRect.left = 0;
sdkRect.top = 0;
sdkRect.right = 100;
sdkRect.bottom = 50;

CRect rect2(sdkRect);
// by reference
CRect rect3(&sdkRect);

// by address
ASSERT(rect2 == rect);
ASSERT(rect3 == rect);

// from a point and a size
CPoint pt(0, 0);
CSize sz(100, 50);
CRect rect4(pt, sz);
ASSERT(rect4 == rect2);

// from two points
CPoint ptBottomRight(100, 50);
CRect rect5(pt, ptBottomRight);
ASSERT(rect5 == rect4);
```

## <a name="deflaterect"></a> CRect::DeflateRect

`DeflateRect` deflates `CRect` by moving its sides toward its center.

```cpp
void DeflateRect(int x, int y) throw();
void DeflateRect(SIZE size) throw();
void DeflateRect(LPCRECT lpRect) throw();
void DeflateRect(int l, int t, int r, int b) throw();
```

### Parameters

*x*<br/>
Specifies the number of units to deflate the left and right sides of `CRect`.

*y*<br/>
Specifies the number of units to deflate the top and bottom of `CRect`.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) or [CSize](csize-class.md) that specifies the number of units to deflate `CRect`. The `cx` value specifies the number of units to deflate the left and right sides and the `cy` value specifies the number of units to deflate the top and bottom.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` that specifies the number of units to deflate each side.

*l*<br/>
Specifies the number of units to deflate the left side of `CRect`.

*t*<br/>
Specifies the number of units to deflate the top of `CRect`.

*r*<br/>
Specifies the number of units to deflate the right side of `CRect`.

*b*<br/>
Specifies the number of units to deflate the bottom of `CRect`.

### Remarks

To do this, `DeflateRect` adds units to the left and top and subtracts units from the right and bottom. The parameters of `DeflateRect` are signed values; positive values deflate `CRect` and negative values inflate it.

The first two overloads deflate both pairs of opposite sides of `CRect` so that its total width is decreased by two times *x* (or `cx`) and its total height is decreased by two times *y* (or `cy`). The other two overloads deflate each side of `CRect` independently of the others.

### Example

```cpp
CRect rect(10, 10, 50, 50);
rect.DeflateRect(1, 2);
ASSERT(rect.left == 11 && rect.right == 49);
ASSERT(rect.top == 12 && rect.bottom == 48);

CRect rect2(10, 10, 50, 50);
CRect rectDeflate(1, 2, 3, 4);
rect2.DeflateRect(&rectDeflate);
ASSERT(rect2.left == 11 && rect2.right == 47);
ASSERT(rect2.top == 12 && rect2.bottom == 46);
```

## <a name="equalrect"></a> CRect::EqualRect

Determines whether `CRect` is equal to the given rectangle.

```
BOOL EqualRect(LPCRECT lpRect) const throw();
```

### Parameters

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains the upper-left and lower-right corner coordinates of a rectangle.

### Return Value

Nonzero if the two rectangles have the same top, left, bottom, and right values; otherwise 0.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999, 6, 3);
ASSERT(rect1.EqualRect(rect2));
ASSERT(!rect1.EqualRect(rect3));
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect1.EqualRect(&test));
```

## <a name="height"></a> CRect::Height

Calculates the height of `CRect` by subtracting the top value from the bottom value.

```
int Height() const throw();
```

### Return Value

The height of `CRect`.

### Remarks

The resulting value can be negative.

> [!NOTE]
> The rectangle must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangle before calling this function.

### Example

```cpp
CRect rect(20, 30, 80, 70);
int nHt = rect.Height();

// nHt is now 40
ASSERT(nHt == 40);
```

## <a name="inflaterect"></a> CRect::InflateRect

`InflateRect` inflates `CRect` by moving its sides away from its center.

```cpp
void InflateRect(int x, int y) throw();
void InflateRect(SIZE size) throw();
void InflateRect(LPCRECT lpRect) throw();
void InflateRect(int l, int t, int r,  int b) throw();
```

### Parameters

*x*<br/>
Specifies the number of units to inflate the left and right sides of `CRect`.

*y*<br/>
Specifies the number of units to inflate the top and bottom of `CRect`.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) or [CSize](csize-class.md) that specifies the number of units to inflate `CRect`. The `cx` value specifies the number of units to inflate the left and right sides and the `cy` value specifies the number of units to inflate the top and bottom.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` that specifies the number of units to inflate each side.

*l*<br/>
Specifies the number of units to inflate the left side of `CRect`.

*t*<br/>
Specifies the number of units to inflate the top of `CRect`.

*r*<br/>
Specifies the number of units to inflate the right side of `CRect`.

*b*<br/>
Specifies the number of units to inflate the bottom of `CRect`.

### Remarks

To do this, `InflateRect` subtracts units from the left and top and adds units to the right and bottom. The parameters of `InflateRect` are signed values; positive values inflate `CRect` and negative values deflate it.

The first two overloads inflate both pairs of opposite sides of `CRect` so that its total width is increased by two times *x* (or `cx`) and its total height is increased by two times *y* (or `cy`). The other two overloads inflate each side of `CRect` independently of the others.

### Example

```cpp
CRect rect(0, 0, 300, 300);
rect.InflateRect(50, 200);

// rect is now (-50, -200, 350, 500)
ASSERT(rect == CRect(-50, -200, 350, 500));
```

## <a name="intersectrect"></a> CRect::IntersectRect

Makes a `CRect` equal to the intersection of two existing rectangles.

```
BOOL IntersectRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```

### Parameters

*lpRect1*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains a source rectangle.

*lpRect2*<br/>
Points to a `RECT` structure or `CRect` object that contains a source rectangle.

### Return Value

Nonzero if the intersection is not empty; 0 if the intersection is empty.

### Remarks

The intersection is the largest rectangle contained in both existing rectangles.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect rectOne(125,  0, 150, 200);
CRect rectTwo(0, 75, 350, 95);
CRect rectInter;

rectInter.IntersectRect(rectOne, rectTwo);
ASSERT(rectInter == CRect(125, 75, 150, 95));
// operator &= can do the same task:

CRect rectInter2 = rectOne;
rectInter2 &= rectTwo;
ASSERT(rectInter2 == CRect(125, 75, 150, 95));
```

## <a name="isrectempty"></a> CRect::IsRectEmpty

Determines whether `CRect` is empty.

```
BOOL IsRectEmpty() const throw();
```

### Return Value

Nonzero if `CRect` is empty; 0 if `CRect` is not empty.

### Remarks

A rectangle is empty if the width and/or height are 0 or negative. Differs from `IsRectNull`, which determines whether all coordinates of the rectangle are zero.

> [!NOTE]
> The rectangle must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangle before calling this function.

### Example

```cpp
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectEmpty());
ASSERT(!rectSome.IsRectEmpty());
CRect rectEmpty(35, 35, 35, 35);
ASSERT(rectEmpty.IsRectEmpty());
```

## <a name="isrectnull"></a> CRect::IsRectNull

Determines whether the top, left, bottom, and right values of `CRect` are all equal to 0.

```
BOOL IsRectNull() const throw();
```

### Return Value

Nonzero if `CRect`'s top, left, bottom, and right values are all equal to 0; otherwise 0.

### Remarks

Differs from `IsRectEmpty`, which determines whether the rectangle is empty.

### Example

```cpp
CRect rectNone(0, 0, 0, 0);
CRect rectSome(35, 50, 135, 150);
ASSERT(rectNone.IsRectNull());
ASSERT(!rectSome.IsRectNull());
// note that null means _all_ zeros

CRect rectNotNull(0, 0, 35, 50);
ASSERT(!rectNotNull.IsRectNull());
```

## <a name="movetox"></a> CRect::MoveToX

Call this function to move the rectangle to the absolute x-coordinate specified by *x*.

```cpp
void MoveToX(int x) throw();
```

### Parameters

*x*<br/>
The absolute x-coordinate for the upper-left corner of the rectangle.

### Example

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToX(10);

// rect is now (10, 0, 110, 100);
ASSERT(rect == CRect(10, 0, 110, 100));
```

## <a name="movetoxy"></a> CRect::MoveToXY

Call this function to move the rectangle to the absolute x- and y-coordinates specified.

```cpp
void MoveToXY(int x, int y) throw();
void MoveToXY(POINT point) throw();
```

### Parameters

*x*<br/>
The absolute x-coordinate for the upper-left corner of the rectangle.

*y*<br/>
The absolute y-coordinate for the upper-left corner of the rectangle.

*point*<br/>
A `POINT` structure specifying the absolute upper-left corner of the rectangle.

### Example

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToXY(10, 10);
// rect is now (10, 10, 110, 110);
ASSERT(rect == CRect(10, 10, 110, 110));
```

## <a name="movetoy"></a> CRect::MoveToY

Call this function to move the rectangle to the absolute y-coordinate specified by *y*.

```cpp
void MoveToY(int y) throw();
```

### Parameters

*y*<br/>
The absolute y-coordinate for the upper-left corner of the rectangle.

### Example

```cpp
CRect rect(0, 0, 100, 100);
rect.MoveToY(10);
// rect is now (0, 10, 100, 110);
ASSERT(rect == CRect(0, 10, 100, 110));
```

## <a name="normalizerect"></a> CRect::NormalizeRect

Normalizes `CRect` so that both the height and width are positive.

```cpp
void NormalizeRect() throw();
```

### Remarks

The rectangle is normalized for fourth-quadrant positioning, which Windows typically uses for coordinates. `NormalizeRect` compares the top and bottom values, and swaps them if the top is greater than the bottom. Similarly, it swaps the left and right values if the left is greater than the right. This function is useful when dealing with different mapping modes and inverted rectangles.

> [!NOTE]
> The following `CRect` member functions require normalized rectangles in order to work properly: [Height](#height), [Width](#width), [Size](#size), [IsRectEmpty](#isrectempty), [PtInRect](#ptinrect), [EqualRect](#equalrect), [UnionRect](#unionrect), [IntersectRect](#intersectrect), [SubtractRect](#subtractrect), [operator ==](#operator_eq_eq), [operator !=](#operator_neq), [operator &#124;](#operator_or), [operator &#124;=](#operator_or_eq), [operator &](#operator_amp), and [operator &=](#operator_amp_eq).

### Example

```cpp
CRect rect1(110, 100, 250, 310);
CRect rect2(250, 310, 110, 100);
rect1.NormalizeRect();
rect2.NormalizeRect();
ASSERT(rect1 == rect2);
```

## <a name="offsetrect"></a> CRect::OffsetRect

Moves `CRect` by the specified offsets.

```cpp
void OffsetRect(int x, int y) throw();
void OffsetRect(POINT point) throw();
void OffsetRect(SIZE size) throw();
```

### Parameters

*x*<br/>
Specifies the amount to move left or right. It must be negative to move left.

*y*<br/>
Specifies the amount to move up or down. It must be negative to move up.

*point*<br/>
Contains a [POINT](/windows/win32/api/windef/ns-windef-point) structure or [CPoint](cpoint-class.md) object specifying both dimensions by which to move.

*size*<br/>
Contains a [SIZE](/windows/win32/api/windef/ns-windef-size) structure or [CSize](csize-class.md) object specifying both dimensions by which to move.

### Remarks

Moves `CRect`*x* units along the x-axis and *y* units along the y-axis. The *x* and *y* parameters are signed values, so `CRect` can be moved left or right and up or down.

### Example

```cpp
CRect rect(0, 0, 35, 35);
rect.OffsetRect(230, 230);

// rect is now (230, 230, 265, 265)
ASSERT(rect == CRect(230, 230, 265, 265));
```

## <a name="operator_lpcrect"></a> CRect::operator LPCRECT Converts a `CRect` to an [LPCRECT](../../mfc/reference/data-types-mfc.md).

```
operator LPCRECT() const throw();
```

### Remarks

When you use this function, you don't need the address-of (**&**) operator. This operator will be automatically used when you pass a `CRect` object to a function that expects an `LPCRECT`.

## <a name="operator_lprect"></a> CRect::operator LPRECT

Converts a `CRect` to an [LPRECT](../../mfc/reference/data-types-mfc.md).

```
operator LPRECT() throw();
```

### Remarks

When you use this function, you don't need the address-of (**&**) operator. This operator will be automatically used when you pass a `CRect` object to a function that expects an `LPRECT`.

### Example

See the example for [CRect::operator LPCRECT](#operator_lpcrect).

## <a name="operator_eq"></a> CRect::operator =

Assigns *srcRect* to `CRect`.

```cpp
void operator=(const RECT& srcRect) throw();
```

### Parameters

*srcRect*<br/>
Refers to a source rectangle. Can be a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Example

```cpp
CRect rect(0, 0, 127, 168);
CRect rect2;

rect2 = rect;
ASSERT(rect2 == CRect(0, 0, 127, 168));
```

## <a name="operator_eq_eq"></a> CRect::operator ==

Determines whether `rect` is equal to `CRect` by comparing the coordinates of their upper-left and lower-right corners.

```
BOOL operator==(const RECT& rect) const throw();
```

### Parameters

*rect*<br/>
Refers to a source rectangle. Can be a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Return Value

Nonzero if equal; otherwise 0.

### Remarks

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999, 6, 3);
ASSERT(rect1 == rect2);
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect1 == test);
```

## <a name="operator_neq"></a> CRect::operator !=

Determines whether *rect* is not equal to `CRect` by comparing the coordinates of their upper-left and lower-right corners.

```
BOOL operator!=(const RECT& rect) const throw();
```

### Parameters

*rect*<br/>
Refers to a source rectangle. Can be a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Return Value

Nonzero if not equal; otherwise 0.

### Remarks

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect rect1(35, 150, 10, 25);
CRect rect2(35, 150, 10, 25);
CRect rect3(98, 999,  6,  3);
ASSERT(rect1 != rect3);
// works just fine against RECTs, as well

RECT test;
test.left = 35;
test.top = 150;
test.right = 10;
test.bottom = 25;

ASSERT(rect3 != test);
```

## <a name="operator_add_eq"></a> CRect::operator +=

The first two overloads move `CRect` by the specified offsets.

```cpp
void operator+=(POINT point) throw();
void operator+=(SIZE size) throw();
void operator+=(LPCRECT lpRect) throw();
```

### Parameters

*point*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure or [CPoint](cpoint-class.md) object that specifies the number of units to move the rectangle.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) structure or [CSize](csize-class.md) object that specifies the number of units to move the rectangle.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains the number of units to inflate each side of `CRect`.

### Remarks

The parameter's *x* and *y* (or `cx` and `cy`) values are added to `CRect`.

The third overload inflates `CRect` by the number of units specified in each member of the parameter.

### Example

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint  pt(35, 65);
CRect   rect2(135, 300, 235, 400);

rect1 += pt;
ASSERT(rect1 == rect2);
```

## <a name="operator_-_eq"></a> CRect::operator -=

The first two overloads move `CRect` by the specified offsets.

```cpp
void operator-=(POINT point) throw();
void operator-=(SIZE size) throw();
void operator-=(LPCRECT lpRect) throw();
```

### Parameters

*point*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure or [CPoint](cpoint-class.md) object that specifies the number of units to move the rectangle.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) structure or [CSize](csize-class.md) object that specifies the number of units to move the rectangle.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains the number of units to deflate each side of `CRect`.

### Remarks

The parameter's *x* and *y* (or `cx` and `cy`) values are subtracted from `CRect`.

The third overload deflates `CRect` by the number of units specified in each member of the parameter. Note that this overload functions like [DeflateRect](#deflaterect).

### Example

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);

rect1 -= pt;
CRect   rectResult(65, 170, 165, 270);
ASSERT(rect1 == rectResult);
```

## <a name="operator_amp_eq"></a> CRect::operator &amp;=

Sets `CRect` equal to the intersection of `CRect` and `rect`.

```cpp
void operator&=(const RECT& rect) throw();
```

### Parameters

*rect*<br/>
Contains a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Remarks

The intersection is the largest rectangle that is contained in both rectangles.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

See the example for [CRect::IntersectRect](#intersectrect).

## <a name="operator_or_eq"></a> CRect::operator &#124;=

Sets `CRect` equal to the union of `CRect` and `rect`.

```cpp
void operator|=(const RECT& rect) throw();
```

### Parameters

*rect*<br/>
Contains a `CRect` or [RECT](/windows/win32/api/windef/ns-windef-rect).

### Remarks

The union is the smallest rectangle that contains both source rectangles.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);

rect1 |= rect2;
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect1);
```

## <a name="operator_add"></a> CRect::operator +

The first two overloads return a `CRect` object that is equal to `CRect` displaced by the specified offsets.

```
CRect operator+(POINT point) const throw();
CRect operator+(LPCRECT lpRect) const throw();
CRect operator+(SIZE size) const throw();
```

### Parameters

*point*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure or [CPoint](cpoint-class.md) object that specifies the number of units to move the return value.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) structure or [CSize](csize-class.md) object that specifies the number of units to move the return value.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains the number of units to inflate each side of the return value.

### Return Value

The `CRect` resulting from moving or inflating `CRect` by the number of units specified in the parameter.

### Remarks

The parameter's *x* and *y* (or `cx` and `cy`) parameters are added to `CRect`'s position.

The third overload returns a new `CRect` that is equal to `CRect` inflated by the number of units specified in each member of the parameter.

### Example

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);
CRect   rect2;

rect2 = rect1 + pt;
CRect   rectResult(135, 300, 235, 400);
ASSERT(rectResult == rect2);
```

## <a name="operator_-"></a> CRect::operator -

The first two overloads return a `CRect` object that is equal to `CRect` displaced by the specified offsets.

```
CRect operator-(POINT point) const throw();
CRect operator-(SIZE size) const throw();
CRect operator-(LPCRECT lpRect) const throw();
```

### Parameters

*point*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure or `CPoint` object that specifies the number of units to move the return value.

*size*<br/>
A [SIZE](/windows/win32/api/windef/ns-windef-size) structure or `CSize` object that specifies the number of units to move the return value.

*lpRect*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object that contains the number of units to deflate each side of the return value.

### Return Value

The `CRect` resulting from moving or deflating `CRect` by the number of units specified in the parameter.

### Remarks

The parameter's *x* and *y* (or `cx` and `cy`) parameters are subtracted from `CRect`'s position.

The third overload returns a new `CRect` that is equal to `CRect` deflated by the number of units specified in each member of the parameter. Note that this overload functions like [DeflateRect](#deflaterect), not [SubtractRect](#subtractrect).

### Example

```cpp
CRect   rect1(100, 235, 200, 335);
CPoint pt(35, 65);
CRect   rect2;

rect2 = rect1 - pt;
CRect   rectResult(65, 170, 165, 270);
ASSERT(rect2 == rectResult);
```

## <a name="operator_amp"></a> CRect::operator &amp;

Returns a `CRect` that is the intersection of `CRect` and *rect2*.

```
CRect operator&(const RECT& rect2) const throw();
```

### Parameters

*rect2*<br/>
Contains a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Return Value

A `CRect` that is the intersection of `CRect` and *rect2*.

### Remarks

The intersection is the largest rectangle that is contained in both rectangles.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3 = rect1 & rect2;
CRect   rectResult(100, 100, 200, 200);
ASSERT(rectResult == rect3);
```

## <a name="operator_or"></a> CRect::operator &#124;

Returns a `CRect` that is the union of `CRect` and *rect2*.

```
CRect operator|(const RECT&
rect2) const throw();
```

### Parameters

*rect2*<br/>
Contains a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect`.

### Return Value

A `CRect` that is the union of `CRect` and *rect2*.

### Remarks

The union is the smallest rectangle that contains both rectangles.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3 = rect1 | rect2;
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect3);
```

## <a name="ptinrect"></a> CRect::PtInRect

Determines whether the specified point lies within `CRect`.

```
BOOL PtInRect(POINT point) const throw();
```

### Parameters

*point*<br/>
Contains a [POINT](/windows/win32/api/windef/ns-windef-point) structure or [CPoint](cpoint-class.md) object.

### Return Value

Nonzero if the point lies within `CRect`; otherwise 0.

### Remarks

A point is within `CRect` if it lies on the left or top side or is within all four sides. A point on the right or bottom side is outside `CRect`.

> [!NOTE]
> The rectangle must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangle before calling this function.

### Example

```cpp
CRect rect(5, 5, 100, 100);
CPoint pt1(35, 50);
CPoint pt2(125, 298);

// this is true, because pt1 is inside the rectangle
ASSERT(rect.PtInRect(pt1));

// this is NOT true, because pt2 is outside the rectangle
ASSERT(!rect.PtInRect(pt2));

// note that the right and the bottom aren't inside
ASSERT(!rect.PtInRect(CPoint(35, 100)));
ASSERT(!rect.PtInRect(CPoint(100, 98)));

// but the top and the left are inside
ASSERT(rect.PtInRect(CPoint(5, 65)));
ASSERT(rect.PtInRect(CPoint(88, 5)));

// and that PtInRect() works against a POINT, too
POINT pt;
pt.x = 35;
pt.y = 50;
ASSERT(rect.PtInRect(pt));
```

## <a name="setrect"></a> CRect::SetRect

Sets the dimensions of `CRect` to the specified coordinates.

```cpp
void SetRect(int x1, int y1, int x2, int y2) throw();
```

### Parameters

*x1*<br/>
Specifies the x-coordinate of the upper-left corner.

*y1*<br/>
Specifies the y-coordinate of the upper-left corner.

*x2*<br/>
Specifies the x-coordinate of the lower-right corner.

*y2*<br/>
Specifies the y-coordinate of the lower-right corner.

### Example

```cpp
CRect rect;
rect.SetRect(256, 256, 512, 512);
ASSERT(rect == CRect(256, 256, 512, 512));
```

## <a name="setrectempty"></a> CRect::SetRectEmpty

Makes `CRect` a null rectangle by setting all coordinates to zero.

```cpp
void SetRectEmpty() throw();
```

### Example

```cpp
CRect rect;
rect.SetRectEmpty();

// rect is now (0, 0, 0, 0)
ASSERT(rect.IsRectEmpty());
```

## <a name="size"></a> CRect::SIZE

The `cx` and `cy` members of the return value contain the height and width of `CRect`.

```
CSize Size() const throw();
```

### Return Value

A [CSize](csize-class.md) object that contains the size of `CRect`.

### Remarks

Either the height or width can be negative.

> [!NOTE]
> The rectangle must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangle before calling this function.

### Example

```cpp
CRect rect(10, 10, 50, 50);
CSize sz = rect.Size();
ASSERT(sz.cx == 40 && sz.cy == 40);
```

## <a name="subtractrect"></a> CRect::SubtractRect

Makes the dimensions of the `CRect` equal to the subtraction of `lpRectSrc2` from `lpRectSrc1`.

```
BOOL SubtractRect(LPCRECT lpRectSrc1, LPCRECT lpRectSrc2) throw();
```

### Parameters

*lpRectSrc1*<br/>
Points to the [RECT](/windows/win32/api/windef/ns-windef-rect) structure or `CRect` object from which a rectangle is to be subtracted.

*lpRectSrc2*<br/>
Points to the `RECT` structure or `CRect` object that is to be subtracted from the rectangle pointed to by the *lpRectSrc1* parameter.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The subtraction is the smallest rectangle that contains all of the points in *lpRectScr1* that are not in the intersection of *lpRectScr1* and *lpRectScr2*.

The rectangle specified by *lpRectSrc1* will be unchanged if the rectangle specified by *lpRectSrc2* doesn't completely overlap the rectangle specified by *lpRectSrc1* in at least one of the x- or y-directions.

For example, if *lpRectSrc1* were (10,10, 100,100) and *lpRectSrc2* were (50,50, 150,150), the rectangle pointed to by *lpRectSrc1* would be unchanged when the function returned. If *lpRectSrc1* were (10,10, 100,100) and *lpRectSrc2* were (50,10, 150,150), however, the rectangle pointed to by *lpRectSrc1* would contain the coordinates (10,10, 50,100) when the function returned.

`SubtractRect` is not the same as [operator -](#operator_-) nor [operator -=](#operator_-_eq). Neither of these operators ever calls `SubtractRect`.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
RECT   rectOne;
RECT   rectTwo;

rectOne.left = 10;
rectOne.top = 10;
rectOne.bottom = 100;
rectOne.right = 100;

rectTwo.left = 50;
rectTwo.top = 10;
rectTwo.bottom = 150;
rectTwo.right = 150;

CRect   rectDiff;

rectDiff.SubtractRect(&rectOne, &rectTwo);
CRect   rectResult(10, 10, 50, 100);

ASSERT(rectDiff == rectResult);

// works for CRect, too, since there is
// implicit CRect -> LPCRECT conversion

CRect rect1(10, 10, 100, 100);
CRect rect2(50, 10, 150, 150);
CRect rectOut;

rectOut.SubtractRect(rect1, rect2);
ASSERT(rectResult == rectOut);
```

## <a name="topleft"></a> CRect::TopLeft

The coordinates are returned as a reference to a [CPoint](cpoint-class.md) object that is contained in `CRect`.

```
CPoint& TopLeft() throw();
const CPoint& TopLeft() const throw();
```

### Return Value

The coordinates of the top-left corner of the rectangle.

### Remarks

You can use this function to either get or set the top-left corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.

### Example

See the example for [CRect::CenterPoint](#centerpoint).

## <a name="unionrect"></a> CRect::UnionRect

Makes the dimensions of `CRect` equal to the union of the two source rectangles.

```
BOOL UnionRect(LPCRECT lpRect1, LPCRECT lpRect2) throw();
```

### Parameters

*lpRect1*<br/>
Points to a [RECT](/windows/win32/api/windef/ns-windef-rect) or `CRect` that contains a source rectangle.

*lpRect2*<br/>
Points to a `RECT` or `CRect` that contains a source rectangle.

### Return Value

Nonzero if the union is not empty; 0 if the union is empty.

### Remarks

The union is the smallest rectangle that contains both source rectangles.

Windows ignores the dimensions of an empty rectangle; that is, a rectangle that has no height or has no width.

> [!NOTE]
> Both of the rectangles must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangles before calling this function.

### Example

```cpp
CRect   rect1(100,  0, 200, 300);
CRect   rect2(0, 100, 300, 200);
CRect   rect3;

rect3.UnionRect(&rect1, &rect2);
CRect   rectResult(0, 0, 300, 300);
ASSERT(rectResult == rect3);
```

## <a name="width"></a> CRect::Width

Calculates the width of `CRect` by subtracting the left value from the right value.

```
int Width() const throw();
```

### Return Value

The width of `CRect`.

### Remarks

The width can be negative.

> [!NOTE]
> The rectangle must be normalized or this function may fail. You can call [NormalizeRect](#normalizerect) to normalize the rectangle before calling this function.

### Example

```cpp
CRect rect(20, 30, 80, 70);
int nWid = rect.Width();
// nWid is now 60
ASSERT(nWid == 60);
```

## See also

[CPoint Class](cpoint-class.md)<br/>
[CSize Class](csize-class.md)<br/>
[RECT](/windows/win32/api/windef/ns-windef-rect)
