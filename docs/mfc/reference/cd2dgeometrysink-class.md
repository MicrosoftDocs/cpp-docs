---
description: "Learn more about: CD2DGeometrySink Class"
title: "CD2DGeometrySink Class"
ms.date: "11/04/2016"
f1_keywords: ["CD2DGeometrySink", "AFXRENDERTARGET/CD2DGeometrySink", "AFXRENDERTARGET/CD2DGeometrySink::CD2DGeometrySink", "AFXRENDERTARGET/CD2DGeometrySink::AddArc", "AFXRENDERTARGET/CD2DGeometrySink::AddBezier", "AFXRENDERTARGET/CD2DGeometrySink::AddBeziers", "AFXRENDERTARGET/CD2DGeometrySink::AddLine", "AFXRENDERTARGET/CD2DGeometrySink::AddLines", "AFXRENDERTARGET/CD2DGeometrySink::AddQuadraticBezier", "AFXRENDERTARGET/CD2DGeometrySink::AddQuadraticBeziers", "AFXRENDERTARGET/CD2DGeometrySink::BeginFigure", "AFXRENDERTARGET/CD2DGeometrySink::Close", "AFXRENDERTARGET/CD2DGeometrySink::EndFigure", "AFXRENDERTARGET/CD2DGeometrySink::Get", "AFXRENDERTARGET/CD2DGeometrySink::IsValid", "AFXRENDERTARGET/CD2DGeometrySink::SetFillMode", "AFXRENDERTARGET/CD2DGeometrySink::SetSegmentFlags", "AFXRENDERTARGET/CD2DGeometrySink::m_pSink"]
helpviewer_keywords: ["CD2DGeometrySink [MFC], CD2DGeometrySink", "CD2DGeometrySink [MFC], AddArc", "CD2DGeometrySink [MFC], AddBezier", "CD2DGeometrySink [MFC], AddBeziers", "CD2DGeometrySink [MFC], AddLine", "CD2DGeometrySink [MFC], AddLines", "CD2DGeometrySink [MFC], AddQuadraticBezier", "CD2DGeometrySink [MFC], AddQuadraticBeziers", "CD2DGeometrySink [MFC], BeginFigure", "CD2DGeometrySink [MFC], Close", "CD2DGeometrySink [MFC], EndFigure", "CD2DGeometrySink [MFC], Get", "CD2DGeometrySink [MFC], IsValid", "CD2DGeometrySink [MFC], SetFillMode", "CD2DGeometrySink [MFC], SetSegmentFlags", "CD2DGeometrySink [MFC], m_pSink"]
ms.assetid: e5e07f41-0343-4ab1-9d6b-8c62ed33c04a
---
# CD2DGeometrySink Class

A wrapper for ID2D1GeometrySink.

## Syntax

```
class CD2DGeometrySink;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CD2DGeometrySink::CD2DGeometrySink](#cd2dgeometrysink)|Constructs a CD2DGeometrySink object from CD2DPathGeometry object.|
|[CD2DGeometrySink::~CD2DGeometrySink](#_dtorcd2dgeometrysink)|The destructor. Called when a D2D geometry sink object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CD2DGeometrySink::AddArc](#addarc)|Adds a single arc to the path geometry|
|[CD2DGeometrySink::AddBezier](#addbezier)|Creates a cubic Bezier curve between the current point and the specified end point.|
|[CD2DGeometrySink::AddBeziers](#addbeziers)|Creates a sequence of cubic Bezier curves and adds them to the geometry sink.|
|[CD2DGeometrySink::AddLine](#addline)|Creates a line segment between the current point and the specified end point and adds it to the geometry sink.|
|[CD2DGeometrySink::AddLines](#addlines)|Creates a sequence of lines using the specified points and adds them to the geometry sink.|
|[CD2DGeometrySink::AddQuadraticBezier](#addquadraticbezier)|Creates a quadratic Bezier curve between the current point and the specified end point.|
|[CD2DGeometrySink::AddQuadraticBeziers](#addquadraticbeziers)|Adds a sequence of quadratic Bezier segments as an array in a single call.|
|[CD2DGeometrySink::BeginFigure](#beginfigure)|Starts a new figure at the specified point.|
|[CD2DGeometrySink::Close](#close)|Closes the geometry sink|
|[CD2DGeometrySink::EndFigure](#endfigure)|Ends the current figure; optionally, closes it.|
|[CD2DGeometrySink::Get](#get)|Returns ID2D1GeometrySink interface|
|[CD2DGeometrySink::IsValid](#isvalid)|Checks geometry sink validity|
|[CD2DGeometrySink::SetFillMode](#setfillmode)|Specifies the method used to determine which points are inside the geometry described by this geometry sink and which points are outside.|
|[CD2DGeometrySink::SetSegmentFlags](#setsegmentflags)|Specifies stroke and join options to be applied to new segments added to the geometry sink.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CD2DGeometrySink::operator ID2D1GeometrySink*](#operator_id2d1geometrysink_star)|Returns ID2D1GeometrySink interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CD2DGeometrySink::m_pSink](#m_psink)|A pointer to an ID2D1GeometrySink.|

## Inheritance Hierarchy

`CD2DGeometrySink`

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcd2dgeometrysink"></a> CD2DGeometrySink::~CD2DGeometrySink

The destructor. Called when a D2D geometry sink object is being destroyed.

```
virtual ~CD2DGeometrySink();
```

## <a name="addarc"></a> CD2DGeometrySink::AddArc

Adds a single arc to the path geometry

```cpp
void AddArc(const D2D1_ARC_SEGMENT& arc);
```

### Parameters

*arc*<br/>
The arc segment to add to the figure

## <a name="addbezier"></a> CD2DGeometrySink::AddBezier

Creates a cubic Bezier curve between the current point and the specified end point.

```cpp
void AddBezier(const D2D1_BEZIER_SEGMENT& bezier);
```

### Parameters

*bezier*<br/>
A structure that describes the control points and end point of the Bezier curve to add.

## <a name="addbeziers"></a> CD2DGeometrySink::AddBeziers

Creates a sequence of cubic Bezier curves and adds them to the geometry sink.

```cpp
void AddBeziers(
    const CArray<D2D1_BEZIER_SEGMENT,
    D2D1_BEZIER_SEGMENT>& beziers);
```

### Parameters

*beziers*<br/>
An array of Bezier segments that describes the Bezier curves to create. A curve is drawn from the geometry sink's current point (the end point of the last segment drawn or the location specified by BeginFigure) to the end point of the first Bezier segment in the array. if the array contains additional Bezier segments, each subsequent Bezier segment uses the end point of the preceding Bezier segment as its start point.

## <a name="addline"></a> CD2DGeometrySink::AddLine

Creates a line segment between the current point and the specified end point and adds it to the geometry sink.

```cpp
void AddLine(CD2DPointF point);
```

### Parameters

*point*<br/>
The end point of the line to draw.

## <a name="addlines"></a> CD2DGeometrySink::AddLines

Creates a sequence of lines using the specified points and adds them to the geometry sink.

```cpp
void AddLines(
    const CArray<CD2DPointF,
    CD2DPointF>& points);
```

### Parameters

*points*<br/>
An array of one or more points that describe the lines to draw. A line is drawn from the geometry sink's current point (the end point of the last segment drawn or the location specified by BeginFigure) to the first point in the array. if the array contains additional points, a line is drawn from the first point to the second point in the array, from the second point to the third point, and so on. An array of a sequence of the end points of the lines to draw.

## <a name="addquadraticbezier"></a> CD2DGeometrySink::AddQuadraticBezier

Creates a quadratic Bezier curve between the current point and the specified end point.

```cpp
void AddQuadraticBezier(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier);
```

### Parameters

*bezier*<br/>
A structure that describes the control point and the end point of the quadratic Bezier curve to add.

## <a name="addquadraticbeziers"></a> CD2DGeometrySink::AddQuadraticBeziers

Adds a sequence of quadratic Bezier segments as an array in a single call.

```cpp
void AddQuadraticBeziers(
    const CArray<D2D1_QUADRATIC_BEZIER_SEGMENT,
    D2D1_QUADRATIC_BEZIER_SEGMENT>& beziers);
```

### Parameters

*beziers*<br/>
An array of a sequence of quadratic Bezier segments.

## <a name="beginfigure"></a> CD2DGeometrySink::BeginFigure

Starts a new figure at the specified point.

```cpp
void BeginFigure(
    CD2DPointF startPoint,
    D2D1_FIGURE_BEGIN figureBegin);
```

### Parameters

*startPoint*<br/>
The point at which to begin the new figure.

*figureBegin*<br/>
Whether the new figure should be hollow or filled.

## <a name="cd2dgeometrysink"></a> CD2DGeometrySink::CD2DGeometrySink

Constructs a CD2DGeometrySink object from CD2DPathGeometry object.

```
CD2DGeometrySink(CD2DPathGeometry& pathGeometry);
```

### Parameters

*pathGeometry*<br/>
An existing CD2DPathGeometry object.

## <a name="close"></a> CD2DGeometrySink::Close

Closes the geometry sink

```
BOOL Close();
```

### Return Value

Nonzero if successful; otherwise FALSE.

## <a name="endfigure"></a> CD2DGeometrySink::EndFigure

Ends the current figure; optionally, closes it.

```cpp
void EndFigure(D2D1_FIGURE_END figureEnd);
```

### Parameters

*figureEnd*<br/>
A value that indicates whether the current figure is closed. If the figure is closed, a line is drawn between the current point and the start point specified by BeginFigure.

## <a name="get"></a> CD2DGeometrySink::Get

Returns ID2D1GeometrySink interface

```
ID2D1GeometrySink* Get();
```

### Return Value

Pointer to an ID2D1GeometrySink interface or NULL if object is not initialized yet.

## <a name="isvalid"></a> CD2DGeometrySink::IsValid

Checks geometry sink validity

```
BOOL IsValid() const;
```

### Return Value

TRUE if geometry sink is valid; otherwise FALSE.

## <a name="m_psink"></a> CD2DGeometrySink::m_pSink

A pointer to an ID2D1GeometrySink.

```
ID2D1GeometrySink* m_pSink;
```

## <a name="operator_id2d1geometrysink_star"></a> CD2DGeometrySink::operator ID2D1GeometrySink*

Returns ID2D1GeometrySink interface

```
operator ID2D1GeometrySink*();
```

### Return Value

Pointer to an ID2D1GeometrySink interface or NULL if object is not initialized yet.

## <a name="setfillmode"></a> CD2DGeometrySink::SetFillMode

Specifies the method used to determine which points are inside the geometry described by this geometry sink and which points are outside.

```cpp
void SetFillMode(D2D1_FILL_MODE fillMode);
```

### Parameters

*fillMode*<br/>
The method used to determine whether a given point is part of the geometry.

## <a name="setsegmentflags"></a> CD2DGeometrySink::SetSegmentFlags

Specifies stroke and join options to be applied to new segments added to the geometry sink.

```cpp
void SetSegmentFlags(D2D1_PATH_SEGMENT vertexFlags);
```

### Parameters

*vertexFlags*<br/>
Stroke and join options to be applied to new segments added to the geometry sink.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
