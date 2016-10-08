---
title: "CD2DSolidColorBrush Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: d4506637-acce-4f74-8a9b-f0a45571a735
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CD2DSolidColorBrush Class
A wrapper for ID2D1SolidColorBrush.  
  
## Syntax  
  
```  
class CD2DSolidColorBrush : public CD2DBrush;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSolidColorBrush::CD2DSolidColorBrush](#cd2dsolidcolorbrush__cd2dsolidcolorbrush)|Overloaded. Constructs a CD2DSolidColorBrush object.|  
|[CD2DSolidColorBrush::~CD2DSolidColorBrush](#cd2dsolidcolorbrush__~cd2dsolidcolorbrush)|The destructor. Called when a D2D solid brush object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSolidColorBrush::Attach](#cd2dsolidcolorbrush__attach)|Attaches existing resource interface to the object|  
|[CD2DSolidColorBrush::Create](#cd2dsolidcolorbrush__create)|Creates a CD2DSolidColorBrush. (Overrides [CD2DResource::Create](../VS_visualcpp/CD2DResource-Class.md#cd2dresource__create).)|  
|[CD2DSolidColorBrush::Destroy](#cd2dsolidcolorbrush__destroy)|Destroys a CD2DSolidColorBrush object. (Overrides [CD2DBrush::Destroy](../VS_visualcpp/CD2DBrush-Class.md#cd2dbrush__destroy).)|  
|[CD2DSolidColorBrush::Detach](#cd2dsolidcolorbrush__detach)|Detaches resource interface from the object|  
|[CD2DSolidColorBrush::Get](#cd2dsolidcolorbrush__get)|Returns ID2D1SolidColorBrush interface|  
|[CD2DSolidColorBrush::GetColor](#cd2dsolidcolorbrush__getcolor)|Retrieves the color of the solid color brush|  
|[CD2DSolidColorBrush::SetColor](#cd2dsolidcolorbrush__setcolor)|Specifies the color of this solid color brush|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSolidColorBrush::operator ID2D1SolidColorBrush*](#cd2dsolidcolorbrush__operator_id2d1solidcolorbrush_star)|Returns ID2D1SolidColorBrush interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSolidColorBrush::m_colorSolid](#cd2dsolidcolorbrush__m_colorsolid)|Brush solid color.|  
|[CD2DSolidColorBrush::m_pSolidColorBrush](#cd2dsolidcolorbrush__m_psolidcolorbrush)|Stores a pointer to an ID2D1SolidColorBrush object.|  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CD2DResource](../VS_visualcpp/CD2DResource-Class.md)  
  
 [CD2DBrush](../VS_visualcpp/CD2DBrush-Class.md)  
  
 [CD2DSolidColorBrush](../VS_visualcpp/CD2DSolidColorBrush-Class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dsolidcolorbrush___dtorcd2dsolidcolorbrush"></a>  CD2DSolidColorBrush::~CD2DSolidColorBrush  
 The destructor. Called when a D2D solid brush object is being destroyed.  
  
```  
virtual ~CD2DSolidColorBrush();  
```  
  
##  <a name="cd2dsolidcolorbrush__attach"></a>  CD2DSolidColorBrush::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach( ID2D1SolidColorBrush* pResource );  
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dsolidcolorbrush__cd2dsolidcolorbrush"></a>  CD2DSolidColorBrush::CD2DSolidColorBrush  
 Constructs a CD2DSolidColorBrush object.  
  
```  
CD2DSolidColorBrush(  
    CRenderTarget* pParentTarget,  
    D2D1_COLOR_F color,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);  
  
CD2DSolidColorBrush(  
    CRenderTarget* pParentTarget,  
    COLORREF color,  
    int nAlpha = 255,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);  
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `color`  
 The red, green, blue, and alpha values of the brush's color.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
 `nAlpha`  
 The opacity of the brush's color.  
  
##  <a name="cd2dsolidcolorbrush__create"></a>  CD2DSolidColorBrush::Create  
 Creates a CD2DSolidColorBrush.  
  
```  
virtual HRESULT Create( CRenderTarget* pRenderTarget );  
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dsolidcolorbrush__destroy"></a>  CD2DSolidColorBrush::Destroy  
 Destroys a CD2DSolidColorBrush object.  
  
```  
virtual void Destroy();  
```  
  
##  <a name="cd2dsolidcolorbrush__detach"></a>  CD2DSolidColorBrush::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1SolidColorBrush* Detach();  
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dsolidcolorbrush__get"></a>  CD2DSolidColorBrush::Get  
 Returns ID2D1SolidColorBrush interface  
  
```  
ID2D1SolidColorBrush* Get();  
```  
  
### Return Value  
 Pointer to an ID2D1SolidColorBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dsolidcolorbrush__getcolor"></a>  CD2DSolidColorBrush::GetColor  
 Retrieves the color of the solid color brush  
  
```  
D2D1_COLOR_F GetColor() const;  
```  
  
### Return Value  
 The color of this solid color brush  
  
##  <a name="cd2dsolidcolorbrush__m_colorsolid"></a>  CD2DSolidColorBrush::m_colorSolid  
 Brush solid color.  
  
```  
D2D1_COLOR_F m_colorSolid;  
```  
  
##  <a name="cd2dsolidcolorbrush__m_psolidcolorbrush"></a>  CD2DSolidColorBrush::m_pSolidColorBrush  
 Stores a pointer to an ID2D1SolidColorBrush object.  
  
```  
ID2D1SolidColorBrush* m_pSolidColorBrush;  
```  
  
##  <a name="cd2dsolidcolorbrush__operator_id2d1solidcolorbrush_star"></a>  CD2DSolidColorBrush::operator ID2D1SolidColorBrush*  
 Returns ID2D1SolidColorBrush interface  
  
```  
operator ID2D1SolidColorBrush*();  
```  
  
### Return Value  
 Pointer to an ID2D1SolidColorBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dsolidcolorbrush__setcolor"></a>  CD2DSolidColorBrush::SetColor  
 Specifies the color of this solid color brush  
  
```  
void SetColor( D2D1_COLOR_F color );  
```  
  
### Parameters  
 `color`  
 The color of this solid color brush  
  
## See Also  
 [Classes](../VS_visualcpp/MFC-Classes.md)