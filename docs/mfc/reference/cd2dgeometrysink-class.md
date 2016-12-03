---
title: "CD2DGeometrySink Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DGeometrySink"
  - "CD2DGeometrySink"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DGeometrySink class"
ms.assetid: e5e07f41-0343-4ab1-9d6b-8c62ed33c04a
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CD2DGeometrySink::CD2DGeometrySink](#cd2dgeometrysink__cd2dgeometrysink)|Constructs a CD2DGeometrySink object from CD2DPathGeometry object.|  
|[CD2DGeometrySink::~CD2DGeometrySink](#cd2dgeometrysink___dtorcd2dgeometrysink)|The destructor. Called when a D2D geometry sink object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometrySink::AddArc](#cd2dgeometrysink__addarc)|Adds a single arc to the path geometry|  
|[CD2DGeometrySink::AddBezier](#cd2dgeometrysink__addbezier)|Creates a cubic Bezier curve between the current point and the specified end point.|  
|[CD2DGeometrySink::AddBeziers](#cd2dgeometrysink__addbeziers)|Creates a sequence of cubic Bezier curves and adds them to the geometry sink.|  
|[CD2DGeometrySink::AddLine](#cd2dgeometrysink__addline)|Creates a line segment between the current point and the specified end point and adds it to the geometry sink.|  
|[CD2DGeometrySink::AddLines](#cd2dgeometrysink__addlines)|Creates a sequence of lines using the specified points and adds them to the geometry sink.|  
|[CD2DGeometrySink::AddQuadraticBezier](#cd2dgeometrysink__addquadraticbezier)|Creates a quadratic Bezier curve between the current point and the specified end point.|  
|[CD2DGeometrySink::AddQuadraticBeziers](#cd2dgeometrysink__addquadraticbeziers)|Adds a sequence of quadratic Bezier segments as an array in a single call.|  
|[CD2DGeometrySink::BeginFigure](#cd2dgeometrysink__beginfigure)|Starts a new figure at the specified point.|  
|[CD2DGeometrySink::Close](#cd2dgeometrysink__close)|Closes the geometry sink|  
|[CD2DGeometrySink::EndFigure](#cd2dgeometrysink__endfigure)|Ends the current figure; optionally, closes it.|  
|[CD2DGeometrySink::Get](#cd2dgeometrysink__get)|Returns ID2D1GeometrySink interface|  
|[CD2DGeometrySink::IsValid](#cd2dgeometrysink__isvalid)|Checks geometry sink validity|  
|[CD2DGeometrySink::SetFillMode](#cd2dgeometrysink__setfillmode)|Specifies the method used to determine which points are inside the geometry described by this geometry sink and which points are outside.|  
|[CD2DGeometrySink::SetSegmentFlags](#cd2dgeometrysink__setsegmentflags)|Specifies stroke and join options to be applied to new segments added to the geometry sink.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometrySink::operator ID2D1GeometrySink*](#cd2dgeometrysink__operator_id2d1geometrysink_star)|Returns ID2D1GeometrySink interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometrySink::m_pSink](#cd2dgeometrysink__m_psink)|A pointer to an ID2D1GeometrySink.|  
  
## Inheritance Hierarchy  
 [CD2DGeometrySink](../../mfc/reference/cd2dgeometrysink-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dgeometrysink___dtorcd2dgeometrysink"></a>  CD2DGeometrySink::~CD2DGeometrySink  
 The destructor. Called when a D2D geometry sink object is being destroyed.  
  
```  
virtual ~CD2DGeometrySink();
```  
  
##  <a name="cd2dgeometrysink__addarc"></a>  CD2DGeometrySink::AddArc  
 Adds a single arc to the path geometry  
  
```  
void AddArc(const D2D1_ARC_SEGMENT& arc);
```  
  
### Parameters  
 `arc`  
 The arc segment to add to the figure  
  
##  <a name="cd2dgeometrysink__addbezier"></a>  CD2DGeometrySink::AddBezier  
 Creates a cubic Bezier curve between the current point and the specified end point.  
  
```  
void AddBezier(const D2D1_BEZIER_SEGMENT& bezier);
```  
  
### Parameters  
 `bezier`  
 A structure that describes the control points and end point of the Bezier curve to add.  
  
##  <a name="cd2dgeometrysink__addbeziers"></a>  CD2DGeometrySink::AddBeziers  
 Creates a sequence of cubic Bezier curves and adds them to the geometry sink.  
  
```  
void AddBeziers(
    const CArray<D2D1_BEZIER_SEGMENT,  
    D2D1_BEZIER_SEGMENT>& beziers);
```  
  
### Parameters  
 `beziers`  
 An array of Bezier segments that describes the Bezier curves to create. A curve is drawn from the geometry sink's current point (the end point of the last segment drawn or the location specified by BeginFigure) to the end point of the first Bezier segment in the array. if the array contains additional Bezier segments, each subsequent Bezier segment uses the end point of the preceding Bezier segment as its start point.  
  
##  <a name="cd2dgeometrysink__addline"></a>  CD2DGeometrySink::AddLine  
 Creates a line segment between the current point and the specified end point and adds it to the geometry sink.  
  
```  
void AddLine(CD2DPointF point);
```  
  
### Parameters  
 `point`  
 The end point of the line to draw.  
  
##  <a name="cd2dgeometrysink__addlines"></a>  CD2DGeometrySink::AddLines  
 Creates a sequence of lines using the specified points and adds them to the geometry sink.  
  
```  
void AddLines(
    const CArray<CD2DPointF,  
    CD2DPointF>& points);
```  
  
### Parameters  
 `points`  
 An array of one or more points that describe the lines to draw. A line is drawn from the geometry sink's current point (the end point of the last segment drawn or the location specified by BeginFigure) to the first point in the array. if the array contains additional points, a line is drawn from the first point to the second point in the array, from the second point to the third point, and so on. An array of a sequence of the end points of the lines to draw.  
  
##  <a name="cd2dgeometrysink__addquadraticbezier"></a>  CD2DGeometrySink::AddQuadraticBezier  
 Creates a quadratic Bezier curve between the current point and the specified end point.  
  
```  
void AddQuadraticBezier(const D2D1_QUADRATIC_BEZIER_SEGMENT& bezier);
```  
  
### Parameters  
 `bezier`  
 A structure that describes the control point and the end point of the quadratic Bezier curve to add.  
  
##  <a name="cd2dgeometrysink__addquadraticbeziers"></a>  CD2DGeometrySink::AddQuadraticBeziers  
 Adds a sequence of quadratic Bezier segments as an array in a single call.  
  
```  
void AddQuadraticBeziers(
    const CArray<D2D1_QUADRATIC_BEZIER_SEGMENT,  
    D2D1_QUADRATIC_BEZIER_SEGMENT>& beziers);
```  
  
### Parameters  
 `beziers`  
 An array of a sequence of quadratic Bezier segments.  
  
##  <a name="cd2dgeometrysink__beginfigure"></a>  CD2DGeometrySink::BeginFigure  
 Starts a new figure at the specified point.  
  
```  
void BeginFigure(
    CD2DPointF startPoint,  
    D2D1_FIGURE_BEGIN figureBegin);
```  
  
### Parameters  
 `startPoint`  
 The point at which to begin the new figure.  
  
 `figureBegin`  
 Whether the new figure should be hollow or filled.  
  
##  <a name="cd2dgeometrysink__cd2dgeometrysink"></a>  CD2DGeometrySink::CD2DGeometrySink  
 Constructs a CD2DGeometrySink object from CD2DPathGeometry object.  
  
```  
CD2DGeometrySink(CD2DPathGeometry& pathGeometry);
```  
  
### Parameters  
 `pathGeometry`  
 An existing CD2DPathGeometry object.  
  
##  <a name="cd2dgeometrysink__close"></a>  CD2DGeometrySink::Close  
 Closes the geometry sink  
  
```  
BOOL Close();
```  
  
### Return Value  
 Nonzero if successful; otherwise FALSE.  
  
##  <a name="cd2dgeometrysink__endfigure"></a>  CD2DGeometrySink::EndFigure  
 Ends the current figure; optionally, closes it.  
  
```  
void EndFigure(D2D1_FIGURE_END figureEnd);
```  
  
### Parameters  
 `figureEnd`  
 A value that indicates whether the current figure is closed. If the figure is closed, a line is drawn between the current point and the start point specified by BeginFigure.  
  
##  <a name="cd2dgeometrysink__get"></a>  CD2DGeometrySink::Get  
 Returns ID2D1GeometrySink interface  
  
```  
ID2D1GeometrySink* Get();
```  
  
### Return Value  
 Pointer to an ID2D1GeometrySink interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dgeometrysink__isvalid"></a>  CD2DGeometrySink::IsValid  
 Checks geometry sink validity  
  
```  
BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if geometry sink is valid; otherwise FALSE.  
  
##  <a name="cd2dgeometrysink__m_psink"></a>  CD2DGeometrySink::m_pSink  
 A pointer to an ID2D1GeometrySink.  
  
```  
ID2D1GeometrySink* m_pSink;  
```  
  
##  <a name="cd2dgeometrysink__operator_id2d1geometrysink_star"></a>  CD2DGeometrySink::operator ID2D1GeometrySink*  
 Returns ID2D1GeometrySink interface  
  
```  
operator ID2D1GeometrySink*();
```   
  
### Return Value  
 Pointer to an ID2D1GeometrySink interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dgeometrysink__setfillmode"></a>  CD2DGeometrySink::SetFillMode  
 Specifies the method used to determine which points are inside the geometry described by this geometry sink and which points are outside.  
  
```  
void SetFillMode(D2D1_FILL_MODE fillMode);
```  
  
### Parameters  
 `fillMode`  
 The method used to determine whether a given point is part of the geometry.  
  
##  <a name="cd2dgeometrysink__setsegmentflags"></a>  CD2DGeometrySink::SetSegmentFlags  
 Specifies stroke and join options to be applied to new segments added to the geometry sink.  
  
```  
void SetSegmentFlags(D2D1_PATH_SEGMENT vertexFlags);
```  
  
### Parameters  
 `vertexFlags`  
 Stroke and join options to be applied to new segments added to the geometry sink.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
