---
title: "CD2DGeometry Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DGeometry"
  - "afxrendertarget/CD2DGeometry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DGeometry class"
ms.assetid: 3f95054b-fdb8-4e87-87f2-9fc3df7279ec
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
# CD2DGeometry Class
A wrapper for ID2D1Geometry.  
  
## Syntax  
  
```  
class CD2DGeometry : public CD2DResource;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometry::CD2DGeometry](#cd2dgeometry__cd2dgeometry)|Constructs a CD2DGeometry object.|  
|[CD2DGeometry::~CD2DGeometry](#cd2dgeometry___dtorcd2dgeometry)|The destructor. Called when a D2D geometry object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometry::Attach](#cd2dgeometry__attach)|Attaches existing resource interface to the object|  
|[CD2DGeometry::CombineWithGeometry](#cd2dgeometry__combinewithgeometry)|Combines this geometry with the specified geometry and stores the result in an ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::CompareWithGeometry](#cd2dgeometry__comparewithgeometry)|Describes the intersection between this geometry and the specified geometry. The comparison is performed using the specified flattening tolerance.|  
|[CD2DGeometry::ComputeArea](#cd2dgeometry__computearea)|Computes the area of the geometry after it has been transformed by the specified matrix and flattened using the specified tolerance.|  
|[CD2DGeometry::ComputeLength](#cd2dgeometry__computelength)|Calculates the length of the geometry as though each segment were unrolled into a line.|  
|[CD2DGeometry::ComputePointAtLength](#cd2dgeometry__computepointatlength)|Calculates the point and tangent vector at the specified distance along the geometry after it has been transformed by the specified matrix and flattened using the specified tolerance.|  
|[CD2DGeometry::Destroy](#cd2dgeometry__destroy)|Destroys a CD2DGeometry object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#cd2dresource__destroy).)|  
|[CD2DGeometry::Detach](#cd2dgeometry__detach)|Detaches resource interface from the object|  
|[CD2DGeometry::FillContainsPoint](#cd2dgeometry__fillcontainspoint)|Indicates whether the area filled by the geometry would contain the specified point given the specified flattening tolerance.|  
|[CD2DGeometry::Get](#cd2dgeometry__get)|Returns ID2D1Geometry interface|  
|[CD2DGeometry::GetBounds](#cd2dgeometry__getbounds)||  
|[CD2DGeometry::GetWidenedBounds](#cd2dgeometry__getwidenedbounds)|Gets the bounds of the geometry after it has been widened by the specified stroke width and style and transformed by the specified matrix.|  
|[CD2DGeometry::IsValid](#cd2dgeometry__isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#cd2dresource__isvalid).)|  
|[CD2DGeometry::Outline](#cd2dgeometry__outline)|Computes the outline of the geometry and writes the result to an ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::Simplify](#cd2dgeometry__simplify)|Creates a simplified version of the geometry that contains only lines and (optionally) cubic Bezier curves and writes the result to an ID2D1SimplifiedGeometrySink.|  
|[CD2DGeometry::StrokeContainsPoint](#cd2dgeometry__strokecontainspoint)|Determines whether the geometry's stroke contains the specified point given the specified stroke thickness, style, and transform.|  
|[CD2DGeometry::Tessellate](#cd2dgeometry__tessellate)|Creates a set of clockwise-wound triangles that cover the geometry after it has been transformed using the specified matrix and flattened using the specified tolerance.|  
|[CD2DGeometry::Widen](#cd2dgeometry__widen)|Widens the geometry by the specified stroke and writes the result to an ID2D1SimplifiedGeometrySink after it has been transformed by the specified matrix and flattened using the specified tolerance.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometry::operator ID2D1Geometry*](#cd2dgeometry__operator_id2d1geometry_star)|Returns ID2D1Geometry interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGeometry::m_pGeometry](#cd2dgeometry__m_pgeometry)|A pointer to an ID2D1Geometry.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DGeometry](../../mfc/reference/cd2dgeometry-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dgeometry___dtorcd2dgeometry"></a>  CD2DGeometry::~CD2DGeometry  
 The destructor. Called when a D2D geometry object is being destroyed.  
  
```  
virtual ~CD2DGeometry();
```  
  
##  <a name="cd2dgeometry__attach"></a>  CD2DGeometry::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1Geometry* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dgeometry__cd2dgeometry"></a>  CD2DGeometry::CD2DGeometry  
 Constructs a CD2DGeometry object.  
  
```  
CD2DGeometry(
    CRenderTarget* pParentTarget,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dgeometry__combinewithgeometry"></a>  CD2DGeometry::CombineWithGeometry  
 Combines this geometry with the specified geometry and stores the result in an ID2D1SimplifiedGeometrySink.  
  
```  
BOOL CombineWithGeometry(
    CD2DGeometry& inputGeometry,  
    D2D1_COMBINE_MODE combineMode,  
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `inputGeometry`  
 The geometry to combine with this instance.  
  
 `combineMode`  
 The type of combine operation to perform.  
  
 `inputGeometryTransform`  
 The transform to apply to inputGeometry before combining.  
  
 `geometrySink`  
 The result of the combine operation.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometries. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__comparewithgeometry"></a>  CD2DGeometry::CompareWithGeometry  
 Describes the intersection between this geometry and the specified geometry. The comparison is performed using the specified flattening tolerance.  
  
```  
D2D1_GEOMETRY_RELATION CompareWithGeometry(
    CD2DGeometry& inputGeometry,  
    const D2D1_MATRIX_3X2_F& inputGeometryTransform,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `inputGeometry`  
 The geometry to test.  
  
 `inputGeometryTransform`  
 The transform to apply to inputGeometry.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometries. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__computearea"></a>  CD2DGeometry::ComputeArea  
 Computes the area of the geometry after it has been transformed by the specified matrix and flattened using the specified tolerance.  
  
```  
BOOL ComputeArea(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    FLOAT& area,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `worldTransform`  
 The transform to apply to this geometry before computing its area.  
  
 `area`  
 When this method returns, contains a pointer to the area of the transformed, flattened version of this geometry. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__computelength"></a>  CD2DGeometry::ComputeLength  
 Calculates the length of the geometry as though each segment were unrolled into a line.  
  
```  
BOOL ComputeLength(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    FLOAT& length,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `worldTransform`  
 The transform to apply to the geometry before calculating its length.  
  
 `length`  
 When this method returns, contains a pointer to the length of the geometry. For closed geometries, the length includes an implicit closing segment. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__computepointatlength"></a>  CD2DGeometry::ComputePointAtLength  
 Calculates the point and tangent vector at the specified distance along the geometry after it has been transformed by the specified matrix and flattened using the specified tolerance.  
  
```  
BOOL ComputePointAtLength(
    FLOAT length,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    CD2DPointF& point,  
    CD2DPointF& unitTangentVector,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `length`  
 The distance along the geometry of the point and tangent to find. If this distance is less then 0, this method calculates the first point in the geometry. If this distance is greater than the length of the geometry, this method calculates the last point in the geometry.  
  
 `worldTransform`  
 The transform to apply to the geometry before calculating the specified point and tangent.  
  
 `point`  
 The location at the specified distance along the geometry. If the geometry is empty, this point contains NaN as its x and y values.  
  
 `unitTangentVector`  
 When this method returns, contains a pointer to the tangent vector at the specified distance along the geometry. If the geometry is empty, this vector contains NaN as its x and y values. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__destroy"></a>  CD2DGeometry::Destroy  
 Destroys a CD2DGeometry object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dgeometry__detach"></a>  CD2DGeometry::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1Geometry* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dgeometry__fillcontainspoint"></a>  CD2DGeometry::FillContainsPoint  
 Indicates whether the area filled by the geometry would contain the specified point given the specified flattening tolerance.  
  
```  
BOOL FillContainsPoint(
    CD2DPointF point,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    BOOL* contains,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `point`  
 The point to test.  
  
 `worldTransform`  
 The transform to apply to the geometry prior to testing for containment.  
  
 `contains`  
 When this method returns, contains a bool value that is TRUE if the area filled by the geometry contains point; otherwise, FALSE. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The numeric accuracy with which the precise geometric path and path intersection is calculated. Points missing the fill by less than the tolerance are still considered inside. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__get"></a>  CD2DGeometry::Get  
 Returns ID2D1Geometry interface  
  
```  
ID2D1Geometry* Get();
```  
  
### Return Value  
 Pointer to an ID2D1Geometry interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dgeometry__getbounds"></a>  CD2DGeometry::GetBounds  
  
```  
 
BOOL GetBounds(
const D2D1_MATRIX_3X2_F& worldTransform,  
CD2DRectF& bounds) const;

 
```  
  
### Parameters  
 `worldTransform`  
 `bounds`  
  
### Return Value  
  
##  <a name="cd2dgeometry__getwidenedbounds"></a>  CD2DGeometry::GetWidenedBounds  
 Gets the bounds of the geometry after it has been widened by the specified stroke width and style and transformed by the specified matrix.  
  
```  
BOOL GetWidenedBounds(
    FLOAT strokeWidth,  
    ID2D1StrokeStyle* strokeStyle,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    CD2DRectF& bounds,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `strokeWidth`  
 The amount by which to widen the geometry by stroking its outline.  
  
 `strokeStyle`  
 The style of the stroke that widens the geometry.  
  
 `worldTransform`  
 A transform to apply to the geometry after the geometry is transformed and after the geometry has been stroked.  
  
 `bounds`  
 When this method returns, contains the bounds of the widened geometry. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometries. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__isvalid"></a>  CD2DGeometry::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="cd2dgeometry__m_pgeometry"></a>  CD2DGeometry::m_pGeometry  
 A pointer to an ID2D1Geometry.  
  
```  
ID2D1Geometry* m_pGeometry;  
```  
  
##  <a name="cd2dgeometry__operator_id2d1geometry_star"></a>  CD2DGeometry::operator ID2D1Geometry*  
 Returns ID2D1Geometry interface  
  
```  
operator ID2D1Geometry*();
```   
  
### Return Value  
 Pointer to an ID2D1Geometry interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dgeometry__outline"></a>  CD2DGeometry::Outline  
 Computes the outline of the geometry and writes the result to an ID2D1SimplifiedGeometrySink.  
  
```  
BOOL Outline(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `worldTransform`  
 The transform to apply to the geometry outline.  
  
 `geometrySink`  
 The ID2D1SimplifiedGeometrySink to which the geometry transformed outline is appended.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__simplify"></a>  CD2DGeometry::Simplify  
 Creates a simplified version of the geometry that contains only lines and (optionally) cubic Bezier curves and writes the result to an ID2D1SimplifiedGeometrySink.  
  
```  
BOOL Simplify(
    D2D1_GEOMETRY_SIMPLIFICATION_OPTION simplificationOption,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `simplificationOption`  
 A value that specifies whether the simplified geometry should contain curves.  
  
 `worldTransform`  
 The transform to apply to the simplified geometry.  
  
 `geometrySink`  
 The ID2D1SimplifiedGeometrySink to which the simplified geometry is appended.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__strokecontainspoint"></a>  CD2DGeometry::StrokeContainsPoint  
 Determines whether the geometry's stroke contains the specified point given the specified stroke thickness, style, and transform.  
  
```  
BOOL StrokeContainsPoint(
    CD2DPointF point,  
    FLOAT strokeWidth,  
    ID2D1StrokeStyle* strokeStyle,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    BOOL* contains,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `point`  
 The point to test for containment.  
  
 `strokeWidth`  
 The thickness of the stroke to apply.  
  
 `strokeStyle`  
 The style of the stroke to apply.  
  
 `worldTransform`  
 The transform to apply to the stroked geometry.  
  
 `contains`  
 When this method returns, contains a boolean value set to TRUE if the geometry's stroke contains the specified point; otherwise, FALSE. You must allocate storage for this parameter.  
  
 `flatteningTolerance`  
 The numeric accuracy with which the precise geometric path and path intersection is calculated. Points missing the stroke by less than the tolerance are still considered inside. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__tessellate"></a>  CD2DGeometry::Tessellate  
 Creates a set of clockwise-wound triangles that cover the geometry after it has been transformed using the specified matrix and flattened using the specified tolerance.  
  
```  
BOOL Tessellate(
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1TessellationSink* tessellationSink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `worldTransform`  
 The transform to apply to this geometry, or NULL.  
  
 `tessellationSink`  
 The ID2D1TessellationSink to which the tessellated is appended.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="cd2dgeometry__widen"></a>  CD2DGeometry::Widen  
 Widens the geometry by the specified stroke and writes the result to an ID2D1SimplifiedGeometrySink after it has been transformed by the specified matrix and flattened using the specified tolerance.  
  
```  
BOOL Widen(
    FLOAT strokeWidth,  
    ID2D1StrokeStyle* strokeStyle,  
    const D2D1_MATRIX_3X2_F& worldTransform,  
    ID2D1SimplifiedGeometrySink* geometrySink,  
    FLOAT flatteningTolerance = D2D1_DEFAULT_FLATTENING_TOLERANCE) const;

 
```  
  
### Parameters  
 `strokeWidth`  
 The amount by which to widen the geometry.  
  
 `strokeStyle`  
 The style of stroke to apply to the geometry, or NULL.  
  
 `worldTransform`  
 The transform to apply to the geometry after widening it.  
  
 `geometrySink`  
 The ID2D1SimplifiedGeometrySink to which the widened geometry is appended.  
  
 `flatteningTolerance`  
 The maximum bounds on the distance between points in the polygonal approximation of the geometry. Smaller values produce more accurate results but cause slower execution.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
