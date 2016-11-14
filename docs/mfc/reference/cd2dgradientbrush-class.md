---
title: "CD2DGradientBrush Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DGradientBrush"
  - "afxrendertarget/CD2DGradientBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DGradientBrush class"
ms.assetid: 5bf133e6-16b7-4e3a-845d-0ce63fafe5ec
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
# CD2DGradientBrush Class
The base class of the CD2DLinearGradientBrush and the CD2DRadialGradientBrush classes.  
  
## Syntax  
  
```  
class CD2DGradientBrush : public CD2DBrush;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGradientBrush::CD2DGradientBrush](#cd2dgradientbrush__cd2dgradientbrush)|Constructs a CD2DGradientBrush object.|  
|[CD2DGradientBrush::~CD2DGradientBrush](#cd2dgradientbrush__~cd2dgradientbrush)|The destructor. Called when a D2D gradient brush object is being destroyed.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGradientBrush::Destroy](#cd2dgradientbrush__destroy)|Destroys a CD2DGradientBrush object. (Overrides [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#cd2dbrush__destroy).)|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DGradientBrush::m_arGradientStops](#cd2dgradientbrush__m_argradientstops)|Array of the D2D1_GRADIENT_STOP structures.|  
|[CD2DGradientBrush::m_colorInterpolationGamma](#cd2dgradientbrush__m_colorinterpolationgamma)|The space in which color interpolation between the gradient stops is performed.|  
|[CD2DGradientBrush::m_extendMode](#cd2dgradientbrush__m_extendmode)|The behavior of the gradient outside the [0,1] normalized range.|  
|[CD2DGradientBrush::m_pGradientStops](#cd2dgradientbrush__m_pgradientstops)|A pointer to an array of D2D1_GRADIENT_STOP structures.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dgradientbrush___dtorcd2dgradientbrush"></a>  CD2DGradientBrush::~CD2DGradientBrush  
 The destructor. Called when a D2D gradient brush object is being destroyed.  
  
```  
virtual ~CD2DGradientBrush();
```  
  
##  <a name="cd2dgradientbrush__cd2dgradientbrush"></a>  CD2DGradientBrush::CD2DGradientBrush  
 Constructs a CD2DGradientBrush object.  
  
```  
CD2DGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_GAMMA colorInterpolationGamma = D2D1_GAMMA_2_2,  
    D2D1_EXTEND_MODE extendMode = D2D1_EXTEND_MODE_CLAMP,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `gradientStops`  
 A pointer to an array of D2D1_GRADIENT_STOP structures.  
  
 `gradientStopsCount`  
 A value greater than or equal to 1 that specifies the number of gradient stops in the gradientStops array.  
  
 `colorInterpolationGamma`  
 The space in which color interpolation between the gradient stops is performed.  
  
 `extendMode`  
 The behavior of the gradient outside the [0,1] normalized range.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dgradientbrush__destroy"></a>  CD2DGradientBrush::Destroy  
 Destroys a CD2DGradientBrush object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dgradientbrush__m_argradientstops"></a>  CD2DGradientBrush::m_arGradientStops  
 Array of the D2D1_GRADIENT_STOP structures.  
  
```  
CArray<D2D1_GRADIENT_STOP, D2D1_GRADIENT_STOP> m_arGradientStops;  
```  
  
##  <a name="cd2dgradientbrush__m_colorinterpolationgamma"></a>  CD2DGradientBrush::m_colorInterpolationGamma  
 The space in which color interpolation between the gradient stops is performed.  
  
```  
D2D1_GAMMA m_colorInterpolationGamma;  
```  
  
##  <a name="cd2dgradientbrush__m_extendmode"></a>  CD2DGradientBrush::m_extendMode  
 The behavior of the gradient outside the [0,1] normalized range.  
  
```  
D2D1_EXTEND_MODE m_extendMode;  
```  
  
##  <a name="cd2dgradientbrush__m_pgradientstops"></a>  CD2DGradientBrush::m_pGradientStops  
 A pointer to an array of D2D1_GRADIENT_STOP structures.  
  
```  
ID2D1GradientStopCollection* m_pGradientStops;  
```  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
