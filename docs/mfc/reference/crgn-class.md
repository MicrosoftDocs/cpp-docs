---
description: "Learn more about: CRgn Class"
title: "CRgn Class"
ms.date: "11/04/2016"
f1_keywords: ["CRgn", "AFXWIN/CRgn", "AFXWIN/CRgn::CRgn", "AFXWIN/CRgn::CombineRgn", "AFXWIN/CRgn::CopyRgn", "AFXWIN/CRgn::CreateEllipticRgn", "AFXWIN/CRgn::CreateEllipticRgnIndirect", "AFXWIN/CRgn::CreateFromData", "AFXWIN/CRgn::CreateFromPath", "AFXWIN/CRgn::CreatePolygonRgn", "AFXWIN/CRgn::CreatePolyPolygonRgn", "AFXWIN/CRgn::CreateRectRgn", "AFXWIN/CRgn::CreateRectRgnIndirect", "AFXWIN/CRgn::CreateRoundRectRgn", "AFXWIN/CRgn::EqualRgn", "AFXWIN/CRgn::FromHandle", "AFXWIN/CRgn::GetRegionData", "AFXWIN/CRgn::GetRgnBox", "AFXWIN/CRgn::OffsetRgn", "AFXWIN/CRgn::PtInRegion", "AFXWIN/CRgn::RectInRegion", "AFXWIN/CRgn::SetRectRgn"]
helpviewer_keywords: ["CRgn [MFC], CRgn", "CRgn [MFC], CombineRgn", "CRgn [MFC], CopyRgn", "CRgn [MFC], CreateEllipticRgn", "CRgn [MFC], CreateEllipticRgnIndirect", "CRgn [MFC], CreateFromData", "CRgn [MFC], CreateFromPath", "CRgn [MFC], CreatePolygonRgn", "CRgn [MFC], CreatePolyPolygonRgn", "CRgn [MFC], CreateRectRgn", "CRgn [MFC], CreateRectRgnIndirect", "CRgn [MFC], CreateRoundRectRgn", "CRgn [MFC], EqualRgn", "CRgn [MFC], FromHandle", "CRgn [MFC], GetRegionData", "CRgn [MFC], GetRgnBox", "CRgn [MFC], OffsetRgn", "CRgn [MFC], PtInRegion", "CRgn [MFC], RectInRegion", "CRgn [MFC], SetRectRgn"]
ms.assetid: d904da84-76aa-481e-8780-b09485f49e64
---
# CRgn Class

Encapsulates a Windows graphics device interface (GDI) region.

## Syntax

```
class CRgn : public CGdiObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRgn::CRgn](#crgn)|Constructs a `CRgn` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRgn::CombineRgn](#combinergn)|Sets a `CRgn` object so that it is equivalent to the union of two specified `CRgn` objects.|
|[CRgn::CopyRgn](#copyrgn)|Sets a `CRgn` object so that it is a copy of a specified `CRgn` object.|
|[CRgn::CreateEllipticRgn](#createellipticrgn)|Initializes a `CRgn` object with an elliptical region.|
|[CRgn::CreateEllipticRgnIndirect](#createellipticrgnindirect)|Initializes a `CRgn` object with an elliptical region defined by a [RECT](/windows/win32/api/windef/ns-windef-rect) structure.|
|[CRgn::CreateFromData](#createfromdata)|Creates a region from the given region and transformation data.|
|[CRgn::CreateFromPath](#createfrompath)|Creates a region from the path that is selected into the given device context.|
|[CRgn::CreatePolygonRgn](#createpolygonrgn)|Initializes a `CRgn` object with a polygonal region. The system closes the polygon automatically, if necessary, by drawing a line from the last vertex to the first.|
|[CRgn::CreatePolyPolygonRgn](#createpolypolygonrgn)|Initializes a `CRgn` object with a region consisting of a series of closed polygons. The polygons may be disjoint, or they may overlap.|
|[CRgn::CreateRectRgn](#createrectrgn)|Initializes a `CRgn` object with a rectangular region.|
|[CRgn::CreateRectRgnIndirect](#createrectrgnindirect)|Initializes a `CRgn` object with a rectangular region defined by a [RECT](/windows/win32/api/windef/ns-windef-rect)tructure.|
|[CRgn::CreateRoundRectRgn](#createroundrectrgn)|Initializes a `CRgn` object with a rectangular region with rounded corners.|
|[CRgn::EqualRgn](#equalrgn)|Checks two `CRgn` objects to determine whether they are equivalent.|
|[CRgn::FromHandle](#fromhandle)|Returns a pointer to a `CRgn` object when given a handle to a Windows region.|
|[CRgn::GetRegionData](#getregiondata)|Fills the specified buffer with data describing the given region.|
|[CRgn::GetRgnBox](#getrgnbox)|Retrieves the coordinates of the bounding rectangle of a `CRgn` object.|
|[CRgn::OffsetRgn](#offsetrgn)|Moves a `CRgn` object by the specified offsets.|
|[CRgn::PtInRegion](#ptinregion)|Determines whether a specified point is in the region.|
|[CRgn::RectInRegion](#rectinregion)|Determines whether any part of a specified rectangle is within the boundaries of the region.|
|[CRgn::SetRectRgn](#setrectrgn)|Sets the `CRgn` object to the specified rectangular region.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CRgn::operator HRGN](#operator_hrgn)|Returns the Windows handle contained in the `CRgn` object.|

## Remarks

A region is an elliptical or polygonal area within a window. To use regions, you use the member functions of class `CRgn` with the clipping functions defined as members of class `CDC`.

The member functions of `CRgn` create, alter, and retrieve information about the region object for which they are called.

For more information on using `CRgn`, see [Graphic Objects](../../mfc/graphic-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CRgn`

## Requirements

**Header:** afxwin.h

## <a name="combinergn"></a> CRgn::CombineRgn

Creates a new GDI region by combining two existing regions.

```
int CombineRgn(
    CRgn* pRgn1,
    CRgn* pRgn2,
    int nCombineMode);
```

### Parameters

*pRgn1*<br/>
Identifies an existing region.

*pRgn2*<br/>
Identifies an existing region.

*nCombineMode*<br/>
Specifies the operation to be performed when combining the two source regions. It can be any one of the following values:

- RGN_AND Uses overlapping areas of both regions (intersection).

- RGN_COPY Creates a copy of region 1 (identified by *pRgn1*).

- RGN_DIFF Creates a region consisting of the areas of region 1 (identified by *pRgn1*) that are not part of region 2 (identified by *pRgn2*).

- RGN_OR Combines both regions in their entirety (union).

- RGN_XOR Combines both regions but removes overlapping areas.

### Return Value

Specifies the type of the resulting region. It can be one of the following values:

- COMPLEXREGION New region has overlapping borders.

- ERROR No new region created.

- NULLREGION New region is empty.

- SIMPLEREGION New region has no overlapping borders.

### Remarks

The regions are combined as specified by *nCombineMode*.

The two specified regions are combined, and the resulting region handle is stored in the `CRgn` object. Thus, whatever region is stored in the `CRgn` object is replaced by the combined region.

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

Use [CopyRgn](#copyrgn) to simply copy one region into another region.

### Example

[!code-cpp[NVC_MFCDocView#144](../../mfc/codesnippet/cpp/crgn-class_1.cpp)]

## <a name="copyrgn"></a> CRgn::CopyRgn

Copies the region defined by *pRgnSrc* into the `CRgn` object.

```
int CopyRgn(CRgn* pRgnSrc);
```

### Parameters

*pRgnSrc*<br/>
Identifies an existing region.

### Return Value

Specifies the type of the resulting region. It can be one of the following values:

- COMPLEXREGION New region has overlapping borders.

- ERROR No new region created.

- NULLREGION New region is empty.

- SIMPLEREGION New region has no overlapping borders.

### Remarks

The new region replaces the region formerly stored in the `CRgn` object. This function is a special case of the [CombineRgn](#combinergn) member function.

### Example

  See the example for [CRgn::CreateEllipticRgn](#createellipticrgn).

## <a name="createellipticrgn"></a> CRgn::CreateEllipticRgn

Creates an elliptical region.

```
BOOL CreateEllipticRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### Parameters

*x1*<br/>
Specifies the logical x-coordinate of the upper-left corner of the bounding rectangle of the ellipse.

*y1*<br/>
Specifies the logical y-coordinate of the upper-left corner of the bounding rectangle of the ellipse.

*x2*<br/>
Specifies the logical x-coordinate of the lower-right corner of the bounding rectangle of the ellipse.

*y2*<br/>
Specifies the logical y-coordinate of the lower-right corner of the bounding rectangle of the ellipse.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The region is defined by the bounding rectangle specified by *x1*, *y1*, *x2*, and *y2*. The region is stored in the `CRgn` object.

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When it has finished using a region created with the `CreateEllipticRgn` function, an application should select the region out of the device context and use the `DeleteObject` function to remove it.

### Example

[!code-cpp[NVC_MFCDocView#145](../../mfc/codesnippet/cpp/crgn-class_2.cpp)]

## <a name="createellipticrgnindirect"></a> CRgn::CreateEllipticRgnIndirect

Creates an elliptical region.

```
BOOL CreateEllipticRgnIndirect(LPCRECT lpRect);
```

### Parameters

*lpRect*<br/>
Points to a `RECT` structure or a `CRect` object that contains the logical coordinates of the upper-left and lower-right corners of the bounding rectangle of the ellipse.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The region is defined by the structure or object pointed to by *lpRect* and is stored in the `CRgn` object.

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When it has finished using a region created with the `CreateEllipticRgnIndirect` function, an application should select the region out of the device context and use the `DeleteObject` function to remove it.

### Example

  See the example for [CRgn::CreateRectRgnIndirect](#createrectrgnindirect).

## <a name="createfromdata"></a> CRgn::CreateFromData

Creates a region from the given region and transformation data.

```
BOOL CreateFromData(
    const XFORM* lpXForm,
    int nCount,
    const RGNDATA* pRgnData);
```

### Parameters

*lpXForm*<br/>
Points to an [XFORM](/windows/win32/api/wingdi/ns-wingdi-xform)ata structure that defines the transformation to be performed on the region. If this pointer is NULL, the identity transformation is used.

*nCount*<br/>
Specifies the number of bytes pointed to by *pRgnData*.

*pRgnData*<br/>
Points to a [RGNDATA](/windows/win32/api/wingdi/ns-wingdi-rgndata) data structure that contains the region data.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

An application can retrieve data for a region by calling the `CRgn::GetRegionData` function.

## <a name="createfrompath"></a> CRgn::CreateFromPath

Creates a region from the path that is selected into the given device context.

```
BOOL CreateFromPath(CDC* pDC);
```

### Parameters

*pDC*<br/>
Identifies a device context that contains a closed path.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The device context identified by the *pDC* parameter must contain a closed path. After `CreateFromPath` converts a path into a region, Windows discards the closed path from the device context.

## <a name="createpolygonrgn"></a> CRgn::CreatePolygonRgn

Creates a polygonal region.

```
BOOL CreatePolygonRgn(
    LPPOINT lpPoints,
    int nCount,
    int nMode);
```

### Parameters

*lpPoints*<br/>
Points to an array of `POINT` structures or an array of `CPoint` objects. Each structure specifies the x-coordinate and y-coordinate of one vertex of the polygon. The `POINT` structure has the following form:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*nCount*<br/>
Specifies the number of `POINT` structures or `CPoint` objects in the array pointed to by *lpPoints*.

*nMode*<br/>
Specifies the filling mode for the region. This parameter may be either ALTERNATE or WINDING.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The system closes the polygon automatically, if necessary, by drawing a line from the last vertex to the first. The resulting region is stored in the `CRgn` object.

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When the polygon-filling mode is ALTERNATE, the system fills the area between odd-numbered and even-numbered polygon sides on each scan line. That is, the system fills the area between the first and second side, between the third and fourth side, and so on.

When the polygon-filling mode is WINDING, the system uses the direction in which a figure was drawn to determine whether to fill an area. Each line segment in a polygon is drawn in either a clockwise or a counterclockwise direction. Whenever an imaginary line drawn from an enclosed area to the outside of a figure passes through a clockwise line segment, a count is incremented. When the line passes through a counterclockwise line segment, the count is decremented. The area is filled if the count is nonzero when the line reaches the outside of the figure.

When an application has finished using a region created with the `CreatePolygonRgn` function, it should select the region out of the device context and use the `DeleteObject` function to remove it.

### Example

[!code-cpp[NVC_MFCDocView#146](../../mfc/codesnippet/cpp/crgn-class_3.cpp)]

## <a name="createpolypolygonrgn"></a> CRgn::CreatePolyPolygonRgn

Creates a region consisting of a series of closed polygons.

```
BOOL CreatePolyPolygonRgn(
    LPPOINT lpPoints,
    LPINT lpPolyCounts,
    int nCount,
    int nPolyFillMode);
```

### Parameters

*lpPoints*<br/>
Points to an array of `POINT` structures or an array of `CPoint` objects that defines the vertices of the polygons. Each polygon must be explicitly closed because the system does not close them automatically. The polygons are specified consecutively. The `POINT` structure has the following form:

```cpp
typedef struct tagPOINT {
    int x;
    int y;
} POINT;
```

*lpPolyCounts*<br/>
Points to an array of integers. The first integer specifies the number of vertices in the first polygon in the *lpPoints* array, the second integer specifies the number of vertices in the second polygon, and so on.

*nCount*<br/>
Specifies the total number of integers in the *lpPolyCounts* array.

*nPolyFillMode*<br/>
Specifies the polygon-filling mode. This value may be either ALTERNATE or WINDING.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The resulting region is stored in the `CRgn` object.

The polygons may be disjoint, or they may overlap.

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When the polygon-filling mode is ALTERNATE, the system fills the area between odd-numbered and even-numbered polygon sides on each scan line. That is, the system fills the area between the first and second side, between the third and fourth side, and so on.

When the polygon-filling mode is WINDING, the system uses the direction in which a figure was drawn to determine whether to fill an area. Each line segment in a polygon is drawn in either a clockwise or a counterclockwise direction. Whenever an imaginary line drawn from an enclosed area to the outside of a figure passes through a clockwise line segment, a count is incremented. When the line passes through a counterclockwise line segment, the count is decremented. The area is filled if the count is nonzero when the line reaches the outside of the figure.

When an application has finished using a region created with the `CreatePolyPolygonRgn` function, it should select the region out of the device context and use the [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) member function to remove it.

## <a name="createrectrgn"></a> CRgn::CreateRectRgn

Creates a rectangular region that is stored in the `CRgn` object.

```
BOOL CreateRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);
```

### Parameters

*x1*<br/>
Specifies the logical x-coordinate of the upper-left corner of the region.

*y1*<br/>
Specifies the logical y-coordinate of the upper-left corner of the region.

*x2*<br/>
Specifies the logical x-coordinate of the lower-right corner of the region.

*y2*<br/>
Specifies the logical y-coordinate of the lower-right corner of the region.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When it has finished using a region created by `CreateRectRgn`, an application should use the [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) member function to remove the region.

### Example

[!code-cpp[NVC_MFCDocView#147](../../mfc/codesnippet/cpp/crgn-class_4.cpp)]

For an additional example, see [CRgn::CombineRgn](#combinergn).

## <a name="createrectrgnindirect"></a> CRgn::CreateRectRgnIndirect

Creates a rectangular region that is stored in the `CRgn` object.

```
BOOL CreateRectRgnIndirect(LPCRECT lpRect);
```

### Parameters

*lpRect*<br/>
Points to a `RECT` structure or `CRect` object that contains the logical coordinates of the upper-left and lower-right corners of the region. The `RECT` structure has the following form:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When it has finished using a region created by `CreateRectRgnIndirect`, an application should use the [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) member function to remove the region.

### Example

[!code-cpp[NVC_MFCDocView#148](../../mfc/codesnippet/cpp/crgn-class_5.cpp)]

## <a name="createroundrectrgn"></a> CRgn::CreateRoundRectRgn

Creates a rectangular region with rounded corners that is stored in the `CRgn` object.

```
BOOL CreateRoundRectRgn(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3);
```

### Parameters

*x1*<br/>
Specifies the logical x-coordinate of the upper-left corner of the region.

*y1*<br/>
Specifies the logical y-coordinate of the upper-left corner of the region.

*x2*<br/>
Specifies the logical x-coordinate of the lower-right corner of the region.

*y2*<br/>
Specifies the logical y-coordinate of the lower-right corner of the region.

*x3*<br/>
Specifies the width of the ellipse used to create the rounded corners.

*y3*<br/>
Specifies the height of the ellipse used to create the rounded corners.

### Return Value

Nonzero if the operation succeeded; otherwise 0.

### Remarks

The size of a region is limited to 32,767 by 32,767 logical units or 64K of memory, whichever is smaller.

When an application has finished using a region created with the `CreateRoundRectRgn` function, it should select the region out of the device context and use the [CGDIObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#deleteobject) member function to remove it.

### Example

[!code-cpp[NVC_MFCDocView#149](../../mfc/codesnippet/cpp/crgn-class_6.cpp)]

## <a name="crgn"></a> CRgn::CRgn

Constructs a `CRgn` object.

```
CRgn();
```

### Remarks

The `m_hObject` data member does not contain a valid Windows GDI region until the object is initialized with one or more of the other `CRgn` member functions.

### Example

  See the example for [CRgn::CreateRoundRectRgn](#createroundrectrgn).

## <a name="equalrgn"></a> CRgn::EqualRgn

Determines whether the given region is equivalent to the region stored in the `CRgn` object.

```
BOOL EqualRgn(CRgn* pRgn) const;
```

### Parameters

*pRgn*<br/>
Identifies a region.

### Return Value

Nonzero if the two regions are equivalent; otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#150](../../mfc/codesnippet/cpp/crgn-class_7.cpp)]

## <a name="fromhandle"></a> CRgn::FromHandle

Returns a pointer to a `CRgn` object when given a handle to a Windows region.

```
static CRgn* PASCAL FromHandle(HRGN hRgn);
```

### Parameters

*hRgn*<br/>
Specifies a handle to a Windows region.

### Return Value

A pointer to a `CRgn` object. If the function was not successful, the return value is NULL.

### Remarks

If a `CRgn` object is not already attached to the handle, a temporary `CRgn` object is created and attached. This temporary `CRgn` object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is only valid during the processing of one window message.

## <a name="getregiondata"></a> CRgn::GetRegionData

Fills the specified buffer with data describing the region.

```
int GetRegionData(
    LPRGNDATA lpRgnData,
    int nCount) const;
```

### Parameters

*lpRgnData*<br/>
Points to a [RGNDATA](/windows/win32/api/wingdi/ns-wingdi-rgndata) data structure that receives the information. If this parameter is NULL, the return value contains the number of bytes needed for the region data.

*nCount*<br/>
Specifies the size, in bytes, of the *lpRgnData* buffer.

### Return Value

If the function succeeds and *nCount* specifies an adequate number of bytes, the return value is always *nCount*. If the function fails, or if *nCount* specifies less than adequate number of bytes, the return value is 0 (error).

### Remarks

This data includes the dimensions of the rectangles that make up the region. This function is used in conjunction with the `CRgn::CreateFromData` function.

## <a name="getrgnbox"></a> CRgn::GetRgnBox

Retrieves the coordinates of the bounding rectangle of the `CRgn` object.

```
int GetRgnBox(LPRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a `RECT` structure or `CRect` object to receive the coordinates of the bounding rectangle. The `RECT` structure has the following form:

`typedef struct tagRECT {`

`int left;`

`int top;`

`int right;`

`int bottom;`

`} RECT;`

### Return Value

Specifies the region's type. It can be any of the following values:

- COMPLEXREGION Region has overlapping borders.

- NULLREGION Region is empty.

- ERROR `CRgn` object does not specify a valid region.

- SIMPLEREGION Region has no overlapping borders.

### Example

  See the example for [CRgn::CreatePolygonRgn](#createpolygonrgn).

## <a name="offsetrgn"></a> CRgn::OffsetRgn

Moves the region stored in the `CRgn` object by the specified offsets.

```
int OffsetRgn(
    int x,
    int y);

int OffsetRgn(POINT point);
```

### Parameters

*x*<br/>
Specifies the number of units to move left or right.

*y*<br/>
Specifies the number of units to move up or down.

*point*<br/>
The x-coordinate of *point* specifies the number of units to move left or right. The y-coordinate of *point* specifies the number of units to move up or down. The *point* parameter may be either a `POINT` structure or a `CPoint` object.

### Return Value

The new region's type. It can be any one of the following values:

- COMPLEXREGION Region has overlapping borders.

- ERROR Region handle is not valid.

- NULLREGION Region is empty.

- SIMPLEREGION Region has no overlapping borders.

### Remarks

The function moves the region *x* units along the x-axis and *y* units along the y-axis.

The coordinate values of a region must be less than or equal to 32,767 and greater than or equal to -32,768. The *x* and *y* parameters must be carefully chosen to prevent invalid region coordinates.

### Example

  See the example for [CRgn::CreateEllipticRgn](#createellipticrgn).

## <a name="operator_hrgn"></a> CRgn::operator HRGN

Use this operator to get the attached Windows GDI handle of the `CRgn` object.

```
operator HRGN() const;
```

### Return Value

If successful, a handle to the Windows GDI object represented by the `CRgn` object; otherwise NULL.

### Remarks

This operator is a casting operator, which supports direct use of an HRGN object.

For more information about using graphic objects, see the article [Graphic Objects](/windows/win32/gdi/graphic-objects) in the Windows SDK.

## <a name="ptinregion"></a> CRgn::PtInRegion

Checks whether the point given by *x* and *y* is in the region stored in the `CRgn` object.

```
BOOL PtInRegion(
    int x,
    int y) const;

BOOL PtInRegion(POINT point) const;
```

### Parameters

*x*<br/>
Specifies the logical x-coordinate of the point to test.

*y*<br/>
Specifies the logical y-coordinate of the point to test.

*point*<br/>
The x- and y-coordinates of *point* specify the x- and y-coordinates of the point to test the value of. The *point* parameter can either be a `POINT` structure or a `CPoint` object.

### Return Value

Nonzero if the point is in the region; otherwise 0.

## <a name="rectinregion"></a> CRgn::RectInRegion

Determines whether any part of the rectangle specified by *lpRect* is within the boundaries of the region stored in the `CRgn` object.

```
BOOL RectInRegion(LPCRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a `RECT` structure or `CRect` object. The `RECT` structure has the following form:

```cpp
typedef struct tagRECT {
    int left;
    int top;
    int right;
    int bottom;
} RECT;
```

### Return Value

Nonzero if any part of the specified rectangle lies within the boundaries of the region; otherwise 0.

## <a name="setrectrgn"></a> CRgn::SetRectRgn

Creates a rectangular region.

```cpp
void SetRectRgn(
    int x1,
    int y1,
    int x2,
    int y2);

void SetRectRgn(LPCRECT lpRect);
```

### Parameters

*x1*<br/>
Specifies the x-coordinate of the upper-left corner of the rectangular region.

*y1*<br/>
Specifies the y-coordinate of the upper-left corner of the rectangular region.

*x2*<br/>
Specifies the x-coordinate of the lower-right corner of the rectangular region.

*y2*<br/>
Specifies the y-coordinate of the lower-right corner of the rectangular region.

*lpRect*<br/>
Specifies the rectangular region. Can be either a pointer to a `RECT` structure or a `CRect` object.

### Remarks

Unlike [CreateRectRgn](#createrectrgn), however, it does not allocate any additional memory from the local Windows application heap. Instead, it uses the space allocated for the region stored in the `CRgn` object. This means that the `CRgn` object must already have been initialized with a valid Windows region before calling `SetRectRgn`. The points given by *x1*, *y1*, *x2*, and *y2* specify the minimum size of the allocated space.

Use this function instead of the `CreateRectRgn` member function to avoid calls to the local memory manager.

## See also

[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
