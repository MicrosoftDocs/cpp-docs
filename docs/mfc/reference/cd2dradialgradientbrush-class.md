---
title: "CD2DRadialGradientBrush Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DRadialGradientBrush"
  - "afxrendertarget/CD2DRadialGradientBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DRadialGradientBrush class"
ms.assetid: 6c76d84a-d831-4ee2-96f1-82c1f5b0d6a9
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
# CD2DRadialGradientBrush Class
A wrapper for ID2D1RadialGradientBrush.  
  
## Syntax  
  
```  
class CD2DRadialGradientBrush : public CD2DGradientBrush;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::CD2DRadialGradientBrush](#cd2dradialgradientbrush__cd2dradialgradientbrush)|Constructs a CD2DLinearGradientBrush object.|  
|[CD2DRadialGradientBrush::~CD2DRadialGradientBrush](#cd2dradialgradientbrush___dtorcd2dradialgradientbrush)|The destructor. Called when a D2D radial gradient brush object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::Attach](#cd2dradialgradientbrush__attach)|Attaches existing resource interface to the object|  
|[CD2DRadialGradientBrush::Create](#cd2dradialgradientbrush__create)|Creates a CD2DRadialGradientBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#cd2dresource__create).)|  
|[CD2DRadialGradientBrush::Destroy](#cd2dradialgradientbrush__destroy)|Destroys a CD2DRadialGradientBrush object. (Overrides [CD2DGradientBrush::Destroy](../../mfc/reference/cd2dgradientbrush-class.md#cd2dgradientbrush__destroy).)|  
|[CD2DRadialGradientBrush::Detach](#cd2dradialgradientbrush__detach)|Detaches resource interface from the object|  
|[CD2DRadialGradientBrush::Get](#cd2dradialgradientbrush__get)|Returns ID2D1RadialGradientBrush interface|  
|[CD2DRadialGradientBrush::GetCenter](#cd2dradialgradientbrush__getcenter)|Retrieves the center of the gradient ellipse|  
|[CD2DRadialGradientBrush::GetGradientOriginOffset](#cd2dradialgradientbrush__getgradientoriginoffset)|Retrieves the offset of the gradient origin relative to the gradient ellipse's center|  
|[CD2DRadialGradientBrush::GetRadiusX](#cd2dradialgradientbrush__getradiusx)|Retrieves the x-radius of the gradient ellipse|  
|[CD2DRadialGradientBrush::GetRadiusY](#cd2dradialgradientbrush__getradiusy)|Retrieves the y-radius of the gradient ellipse|  
|[CD2DRadialGradientBrush::SetCenter](#cd2dradialgradientbrush__setcenter)|Specifies the center of the gradient ellipse in the brush's coordinate space|  
|[CD2DRadialGradientBrush::SetGradientOriginOffset](#cd2dradialgradientbrush__setgradientoriginoffset)|Specifies the offset of the gradient origin relative to the gradient ellipse's center|  
|[CD2DRadialGradientBrush::SetRadiusX](#cd2dradialgradientbrush__setradiusx)|Specifies the x-radius of the gradient ellipse, in the brush's coordinate space|  
|[CD2DRadialGradientBrush::SetRadiusY](#cd2dradialgradientbrush__setradiusy)|Specifies the y-radius of the gradient ellipse, in the brush's coordinate space|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush*](#cd2dradialgradientbrush__operator_id2d1radialgradientbrush_star)|Returns ID2D1RadialGradientBrush interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DRadialGradientBrush::m_pRadialGradientBrush](#cd2dradialgradientbrush__m_pradialgradientbrush)|A pointer to an ID2D1RadialGradientBrush.|  
|[CD2DRadialGradientBrush::m_RadialGradientBrushProperties](#cd2dradialgradientbrush__m_radialgradientbrushproperties)|The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
 [CD2DRadialGradientBrush](../../mfc/reference/cd2dradialgradientbrush-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dradialgradientbrush___dtorcd2dradialgradientbrush"></a>  CD2DRadialGradientBrush::~CD2DRadialGradientBrush  
 The destructor. Called when a D2D radial gradient brush object is being destroyed.  
  
```  
virtual ~CD2DRadialGradientBrush();
```  
  
##  <a name="cd2dradialgradientbrush__attach"></a>  CD2DRadialGradientBrush::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1RadialGradientBrush* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dradialgradientbrush__cd2dradialgradientbrush"></a>  CD2DRadialGradientBrush::CD2DRadialGradientBrush  
 Constructs a CD2DLinearGradientBrush object.  
  
```  
CD2DRadialGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES RadialGradientBrushProperties,  
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
  
 `RadialGradientBrushProperties`  
 The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.  
  
 `colorInterpolationGamma`  
 The space in which color interpolation between the gradient stops is performed.  
  
 `extendMode`  
 The behavior of the gradient outside the [0,1] normalized range.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dradialgradientbrush__create"></a>  CD2DRadialGradientBrush::Create  
 Creates a CD2DRadialGradientBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dradialgradientbrush__destroy"></a>  CD2DRadialGradientBrush::Destroy  
 Destroys a CD2DRadialGradientBrush object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dradialgradientbrush__detach"></a>  CD2DRadialGradientBrush::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1RadialGradientBrush* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dradialgradientbrush__get"></a>  CD2DRadialGradientBrush::Get  
 Returns ID2D1RadialGradientBrush interface  
  
```  
ID2D1RadialGradientBrush* Get();
```  
  
### Return Value  
 Pointer to an ID2D1RadialGradientBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dradialgradientbrush__getcenter"></a>  CD2DRadialGradientBrush::GetCenter  
 Retrieves the center of the gradient ellipse  
  
```  
CD2DPointF GetCenter() const;

 
```  
  
### Return Value  
 The center of the gradient ellipse. This value is expressed in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__getgradientoriginoffset"></a>  CD2DRadialGradientBrush::GetGradientOriginOffset  
 Retrieves the offset of the gradient origin relative to the gradient ellipse's center  
  
```  
CD2DPointF GetGradientOriginOffset() const;

 
```  
  
### Return Value  
 The offset of the gradient origin from the center of the gradient ellipse. This value is expressed in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__getradiusx"></a>  CD2DRadialGradientBrush::GetRadiusX  
 Retrieves the x-radius of the gradient ellipse  
  
```  
FLOAT GetRadiusX() const;

 
```  
  
### Return Value  
 The x-radius of the gradient ellipse. This value is expressed in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__getradiusy"></a>  CD2DRadialGradientBrush::GetRadiusY  
 Retrieves the y-radius of the gradient ellipse  
  
```  
FLOAT GetRadiusY() const;

 
```  
  
### Return Value  
 The y-radius of the gradient ellipse. This value is expressed in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__m_pradialgradientbrush"></a>  CD2DRadialGradientBrush::m_pRadialGradientBrush  
 A pointer to an ID2D1RadialGradientBrush.  
  
```  
ID2D1RadialGradientBrush* m_pRadialGradientBrush;  
```  
  
##  <a name="cd2dradialgradientbrush__m_radialgradientbrushproperties"></a>  CD2DRadialGradientBrush::m_RadialGradientBrushProperties  
 The center, gradient origin offset, and x-radius and y-radius of the brush's gradient.  
  
```  
D2D1_RADIAL_GRADIENT_BRUSH_PROPERTIES m_RadialGradientBrushProperties;  
```  
  
##  <a name="cd2dradialgradientbrush__operator_id2d1radialgradientbrush_star"></a>  CD2DRadialGradientBrush::operator ID2D1RadialGradientBrush*  
 Returns ID2D1RadialGradientBrush interface  
  
```  
operator ID2D1RadialGradientBrush*();
```   
  
### Return Value  
 Pointer to an ID2D1RadialGradientBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dradialgradientbrush__setcenter"></a>  CD2DRadialGradientBrush::SetCenter  
 Specifies the center of the gradient ellipse in the brush's coordinate space  
  
```  
void SetCenter(CD2DPointF point);
```  
  
### Parameters  
 `point`  
 The center of the gradient ellipse, in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__setgradientoriginoffset"></a>  CD2DRadialGradientBrush::SetGradientOriginOffset  
 Specifies the offset of the gradient origin relative to the gradient ellipse's center  
  
```  
void SetGradientOriginOffset(CD2DPointF gradientOriginOffset);
```  
  
### Parameters  
 `gradientOriginOffset`  
 The offset of the gradient origin from the center of the gradient ellipse  
  
##  <a name="cd2dradialgradientbrush__setradiusx"></a>  CD2DRadialGradientBrush::SetRadiusX  
 Specifies the x-radius of the gradient ellipse, in the brush's coordinate space  
  
```  
void SetRadiusX(FLOAT radiusX);
```  
  
### Parameters  
 `radiusX`  
 The x-radius of the gradient ellipse. This value is in the brush's coordinate space  
  
##  <a name="cd2dradialgradientbrush__setradiusy"></a>  CD2DRadialGradientBrush::SetRadiusY  
 Specifies the y-radius of the gradient ellipse, in the brush's coordinate space  
  
```  
void SetRadiusY(FLOAT radiusY);
```  
  
### Parameters  
 `radiusY`  
 The y-radius of the gradient ellipse. This value is in the brush's coordinate space  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
