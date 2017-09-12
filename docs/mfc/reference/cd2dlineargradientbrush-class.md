---
title: "CD2DLinearGradientBrush Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CD2DLinearGradientBrush', 'AFXRENDERTARGET/CD2DLinearGradientBrush', 'AFXRENDERTARGET/CD2DLinearGradientBrush::CD2DLinearGradientBrush', 'AFXRENDERTARGET/CD2DLinearGradientBrush::Attach', 'AFXRENDERTARGET/CD2DLinearGradientBrush::Create', 'AFXRENDERTARGET/CD2DLinearGradientBrush::Destroy', 'AFXRENDERTARGET/CD2DLinearGradientBrush::Detach', 'AFXRENDERTARGET/CD2DLinearGradientBrush::Get', 'AFXRENDERTARGET/CD2DLinearGradientBrush::GetEndPoint', 'AFXRENDERTARGET/CD2DLinearGradientBrush::GetStartPoint', 'AFXRENDERTARGET/CD2DLinearGradientBrush::SetEndPoint', 'AFXRENDERTARGET/CD2DLinearGradientBrush::SetStartPoint', 'AFXRENDERTARGET/CD2DLinearGradientBrush::m_LinearGradientBrushProperties', 'AFXRENDERTARGET/CD2DLinearGradientBrush::m_pLinearGradientBrush']
dev_langs: ["C++"]
helpviewer_keywords: ["CD2DLinearGradientBrush [MFC], CD2DLinearGradientBrush", "CD2DLinearGradientBrush [MFC], Attach", "CD2DLinearGradientBrush [MFC], Create", "CD2DLinearGradientBrush [MFC], Destroy", "CD2DLinearGradientBrush [MFC], Detach", "CD2DLinearGradientBrush [MFC], Get", "CD2DLinearGradientBrush [MFC], GetEndPoint", "CD2DLinearGradientBrush [MFC], GetStartPoint", "CD2DLinearGradientBrush [MFC], SetEndPoint", "CD2DLinearGradientBrush [MFC], SetStartPoint", "CD2DLinearGradientBrush [MFC], m_LinearGradientBrushProperties", "CD2DLinearGradientBrush [MFC], m_pLinearGradientBrush"]
ms.assetid: d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: ["cs-cz", "de-de", "es-es", "fr-fr", "it-it", "ja-jp", "ko-kr", "pl-pl", "pt-br", "ru-ru", "tr-tr", "zh-cn", "zh-tw"]
---
# CD2DLinearGradientBrush Class
A wrapper for ID2D1LinearGradientBrush.  
  
## Syntax  
  
```  
class CD2DLinearGradientBrush : public CD2DGradientBrush;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::CD2DLinearGradientBrush](#cd2dlineargradientbrush)|Constructs a CD2DLinearGradientBrush object.|  
|[CD2DLinearGradientBrush::~CD2DLinearGradientBrush](#_dtorcd2dlineargradientbrush)|The destructor. Called when a D2D linear gradient brush object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::Attach](#attach)|Attaches existing resource interface to the object|  
|[CD2DLinearGradientBrush::Create](#create)|Creates a CD2DLinearGradientBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#create).)|  
|[CD2DLinearGradientBrush::Destroy](#destroy)|Destroys a CD2DLinearGradientBrush object. (Overrides [CD2DGradientBrush::Destroy](../../mfc/reference/cd2dgradientbrush-class.md#destroy).)|  
|[CD2DLinearGradientBrush::Detach](#detach)|Detaches resource interface from the object|  
|[CD2DLinearGradientBrush::Get](#get)|Returns ID2D1LinearGradientBrush interface|  
|[CD2DLinearGradientBrush::GetEndPoint](#getendpoint)|Retrieves the ending coordinates of the linear gradient|  
|[CD2DLinearGradientBrush::GetStartPoint](#getstartpoint)|Retrieves the starting coordinates of the linear gradient|  
|[CD2DLinearGradientBrush::SetEndPoint](#setendpoint)|Sets the ending coordinates of the linear gradient in the brush's coordinate space|  
|[CD2DLinearGradientBrush::SetStartPoint](#setstartpoint)|Sets the starting coordinates of the linear gradient in the brush's coordinate space|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush*](#operator_id2d1lineargradientbrush_star)|Returns ID2D1LinearGradientBrush interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DLinearGradientBrush::m_LinearGradientBrushProperties](#m_lineargradientbrushproperties)|The start and end points of the gradient.|  
|[CD2DLinearGradientBrush::m_pLinearGradientBrush](#m_plineargradientbrush)|A pointer to an ID2D1LinearGradientBrush.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DGradientBrush](../../mfc/reference/cd2dgradientbrush-class.md)  
  
 `CD2DLinearGradientBrush`  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="_dtorcd2dlineargradientbrush"></a>  CD2DLinearGradientBrush::~CD2DLinearGradientBrush  
 The destructor. Called when a D2D linear gradient brush object is being destroyed.  
  
```  
virtual ~CD2DLinearGradientBrush();
```  
  
##  <a name="attach"></a>  CD2DLinearGradientBrush::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1LinearGradientBrush* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dlineargradientbrush"></a>  CD2DLinearGradientBrush::CD2DLinearGradientBrush  
 Constructs a CD2DLinearGradientBrush object.  
  
```  
CD2DLinearGradientBrush(
    CRenderTarget* pParentTarget,  
    const D2D1_GRADIENT_STOP* gradientStops,  
    UINT gradientStopsCount,  
    D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES LinearGradientBrushProperties,  
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
  
 `LinearGradientBrushProperties`  
 The start and end points of the gradient.  
  
 `colorInterpolationGamma`  
 The space in which color interpolation between the gradient stops is performed.  
  
 `extendMode`  
 The behavior of the gradient outside the [0,1] normalized range.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="create"></a>  CD2DLinearGradientBrush::Create  
 Creates a CD2DLinearGradientBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="destroy"></a>  CD2DLinearGradientBrush::Destroy  
 Destroys a CD2DLinearGradientBrush object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="detach"></a>  CD2DLinearGradientBrush::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1LinearGradientBrush* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="get"></a>  CD2DLinearGradientBrush::Get  
 Returns ID2D1LinearGradientBrush interface  
  
```  
ID2D1LinearGradientBrush* Get();
```  
  
### Return Value  
 Pointer to an ID2D1LinearGradientBrush interface or NULL if object is not initialized yet.  
  
##  <a name="getendpoint"></a>  CD2DLinearGradientBrush::GetEndPoint  
 Retrieves the ending coordinates of the linear gradient  
  
```  
CD2DPointF GetEndPoint() const;  
```  
  
### Return Value  
 The ending two-dimensional coordinates of the linear gradient, in the brush's coordinate space  
  
##  <a name="getstartpoint"></a>  CD2DLinearGradientBrush::GetStartPoint  
 Retrieves the starting coordinates of the linear gradient  
  
```  
CD2DPointF GetStartPoint() const;  
```  
  
### Return Value  
 The starting two-dimensional coordinates of the linear gradient, in the brush's coordinate space  
  
##  <a name="m_lineargradientbrushproperties"></a>  CD2DLinearGradientBrush::m_LinearGradientBrushProperties  
 The start and end points of the gradient.  
  
```  
D2D1_LINEAR_GRADIENT_BRUSH_PROPERTIES m_LinearGradientBrushProperties;  
```  
  
##  <a name="m_plineargradientbrush"></a>  CD2DLinearGradientBrush::m_pLinearGradientBrush  
 A pointer to an ID2D1LinearGradientBrush.  
  
```  
ID2D1LinearGradientBrush* m_pLinearGradientBrush;  
```  
  
##  <a name="operator_id2d1lineargradientbrush_star"></a>  CD2DLinearGradientBrush::operator ID2D1LinearGradientBrush*  
 Returns ID2D1LinearGradientBrush interface  
  
```  
operator ID2D1LinearGradientBrush*();
```   
  
### Return Value  
 Pointer to an ID2D1LinearGradientBrush interface or NULL if object is not initialized yet.  
  
##  <a name="setendpoint"></a>  CD2DLinearGradientBrush::SetEndPoint  
 Sets the ending coordinates of the linear gradient in the brush's coordinate space  
  
```  
void SetEndPoint(CD2DPointF point);
```  
  
### Parameters  
 `point`  
 The ending two-dimensional coordinates of the linear gradient, in the brush's coordinate space  
  
##  <a name="setstartpoint"></a>  CD2DLinearGradientBrush::SetStartPoint  
 Sets the starting coordinates of the linear gradient in the brush's coordinate space  
  
```  
void SetStartPoint(CD2DPointF point);
```  
  
### Parameters  
 `point`  
 The starting two-dimensional coordinates of the linear gradient, in the brush's coordinate space  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
