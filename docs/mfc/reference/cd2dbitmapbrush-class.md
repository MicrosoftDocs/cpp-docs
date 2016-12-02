---
title: "CD2DBitmapBrush Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DBitmapBrush"
  - "afxrendertarget/CD2DBitmapBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBitmapBrush class"
ms.assetid: 46ebbe34-66e0-44c8-af1d-d129e851de5e
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
# CD2DBitmapBrush Class
A wrapper for ID2D1BitmapBrush.  
  
## Syntax  
  
```  
class CD2DBitmapBrush : public CD2DBrush;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBitmapBrush::CD2DBitmapBrush](#cd2dbitmapbrush__cd2dbitmapbrush)|Overloaded. Constructs a CD2DBitmapBrush object from file.|  
|[CD2DBitmapBrush::~CD2DBitmapBrush](#cd2dbitmapbrush__dtor)|The destructor. Called when a D2D bitmap brush object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBitmapBrush::Attach](#cd2dbitmapbrush__attach)|Attaches existing resource interface to the object|  
|[CD2DBitmapBrush::Create](#cd2dbitmapbrush__create)|Creates a CD2DBitmapBrush. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#cd2dresource__create).)|  
|[CD2DBitmapBrush::Destroy](#cd2dbitmapbrush__destroy)|Destroys a CD2DBitmapBrush object. (Overrides [CD2DBrush::Destroy](../../mfc/reference/cd2dbrush-class.md#cd2dbrush__destroy).)|  
|[CD2DBitmapBrush::Detach](#cd2dbitmapbrush__detach)|Detaches resource interface from the object|  
|[CD2DBitmapBrush::Get](#cd2dbitmapbrush__get)|Returns ID2D1BitmapBrush interface|  
|[CD2DBitmapBrush::GetBitmap](#cd2dbitmapbrush__getbitmap)|Gets the bitmap source that this brush uses to paint|  
|[CD2DBitmapBrush::GetExtendModeX](#cd2dbitmapbrush__getextendmodex)|Gets the method by which the brush horizontally tiles those areas that extend past its bitmap|  
|[CD2DBitmapBrush::GetExtendModeY](#cd2dbitmapbrush__getextendmodey)|Gets the method by which the brush vertically tiles those areas that extend past its bitmap|  
|[CD2DBitmapBrush::GetInterpolationMode](#cd2dbitmapbrush__getinterpolationmode)|Gets the interpolation method used when the brush bitmap is scaled or rotated|  
|[CD2DBitmapBrush::SetBitmap](#cd2dbitmapbrush__setbitmap)|Specifies the bitmap source that this brush uses to paint|  
|[CD2DBitmapBrush::SetExtendModeX](#cd2dbitmapbrush__setextendmodex)|Specifies how the brush horizontally tiles those areas that extend past its bitmap|  
|[CD2DBitmapBrush::SetExtendModeY](#cd2dbitmapbrush__setextendmodey)|Specifies how the brush vertically tiles those areas that extend past its bitmap|  
|[CD2DBitmapBrush::SetInterpolationMode](#cd2dbitmapbrush__setinterpolationmode)|Specifies the interpolation mode used when the brush bitmap is scaled or rotated|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBitmapBrush::CommonInit](#cd2dbitmapbrush__commoninit)|Initializes the object|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBitmapBrush::operator ID2D1BitmapBrush*](#cd2dbitmapbrush__operator_id2d1bitmapbrush_star)|Returns ID2D1BitmapBrush interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBitmapBrush::m_pBitmap](#cd2dbitmapbrush__m_pbitmap)|Stores a pointer to a CD2DBitmap object.|  
|[CD2DBitmapBrush::m_pBitmapBrush](#cd2dbitmapbrush__m_pbitmapbrush)|Stores a pointer to an ID2D1BitmapBrush object.|  
|[CD2DBitmapBrush::m_pBitmapBrushProperties](#cd2dbitmapbrush__m_pbitmapbrushproperties)|Bitmap brush properties.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
 [CD2DBitmapBrush](../../mfc/reference/cd2dbitmapbrush-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dbitmapbrush__dtor"></a>  CD2DBitmapBrush::~CD2DBitmapBrush  
 The destructor. Called when a D2D bitmap brush object is being destroyed.  
  
```  
virtual ~CD2DBitmapBrush();
```  
  
##  <a name="cd2dbitmapbrush__attach"></a>  CD2DBitmapBrush::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1BitmapBrush* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dbitmapbrush__cd2dbitmapbrush"></a>  CD2DBitmapBrush::CD2DBitmapBrush  
 Constructs a CD2DBitmapBrush object.  
  
```  
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);

 
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    UINT uiResID,  
    LPCTSTR lpszType = NULL,  
    CD2DSizeU sizeDest = CD2DSizeU(0,  
    0), 
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);

 
CD2DBitmapBrush(
    CRenderTarget* pParentTarget,  
    LPCTSTR lpszImagePath,  
    CD2DSizeU sizeDest = CD2DSizeU(0,  
    0), 
    D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties = NULL,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `pBitmapBrushProperties`  
 A pointer to the extend modes and the interpolation mode of a bitmap brush.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
 `uiResID`  
 The resource ID number of the resource.  
  
 `lpszType`  
 Pointer to a null-terminated string that contains the resource type.  
  
 `sizeDest`  
 Destination size of the bitmap.  
  
 `lpszImagePath`  
 Pointer to a null-terminated string that contains the name of file.  
  
##  <a name="cd2dbitmapbrush__commoninit"></a>  CD2DBitmapBrush::CommonInit  
 Initializes the object  
  
```  
void CommonInit(D2D1_BITMAP_BRUSH_PROPERTIES* pBitmapBrushProperties);
```  
  
### Parameters  
 `pBitmapBrushProperties`  
 A pointer to the bitmap brush properties.  
  
##  <a name="cd2dbitmapbrush__create"></a>  CD2DBitmapBrush::Create  
 Creates a CD2DBitmapBrush.  
  
```  
virtual HRESULT Create(CRenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 A pointer to the render target.  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dbitmapbrush__destroy"></a>  CD2DBitmapBrush::Destroy  
 Destroys a CD2DBitmapBrush object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dbitmapbrush__detach"></a>  CD2DBitmapBrush::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1BitmapBrush* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dbitmapbrush__get"></a>  CD2DBitmapBrush::Get  
 Returns ID2D1BitmapBrush interface  
  
```  
ID2D1BitmapBrush* Get();
```  
  
### Return Value  
 Pointer to an ID2D1BitmapBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dbitmapbrush__getbitmap"></a>  CD2DBitmapBrush::GetBitmap  
 Gets the bitmap source that this brush uses to paint  
  
```  
CD2DBitmap* GetBitmap();
```  
  
### Return Value  
 Pointer to an CD2DBitmap object or NULL if object is not initialized yet.  
  
##  <a name="cd2dbitmapbrush__getextendmodex"></a>  CD2DBitmapBrush::GetExtendModeX  
 Gets the method by which the brush horizontally tiles those areas that extend past its bitmap  
  
```  
D2D1_EXTEND_MODE GetExtendModeX() const;

 
```  
  
### Return Value  
 A value that specifies how the brush horizontally tiles those areas that extend past its bitmap  
  
##  <a name="cd2dbitmapbrush__getextendmodey"></a>  CD2DBitmapBrush::GetExtendModeY  
 Gets the method by which the brush vertically tiles those areas that extend past its bitmap  
  
```  
D2D1_EXTEND_MODE GetExtendModeY() const;

 
```  
  
### Return Value  
 A value that specifies how the brush vertically tiles those areas that extend past its bitmap  
  
##  <a name="cd2dbitmapbrush__getinterpolationmode"></a>  CD2DBitmapBrush::GetInterpolationMode  
 Gets the interpolation method used when the brush bitmap is scaled or rotated  
  
```  
D2D1_BITMAP_INTERPOLATION_MODE GetInterpolationMode() const;

 
```  
  
### Return Value  
 The interpolation method used when the brush bitmap is scaled or rotated  
  
##  <a name="cd2dbitmapbrush__m_pbitmap"></a>  CD2DBitmapBrush::m_pBitmap  
 Stores a pointer to a CD2DBitmap object.  
  
```  
CD2DBitmap* m_pBitmap;  
```  
  
##  <a name="cd2dbitmapbrush__m_pbitmapbrush"></a>  CD2DBitmapBrush::m_pBitmapBrush  
 Stores a pointer to an ID2D1BitmapBrush object.  
  
```  
ID2D1BitmapBrush* m_pBitmapBrush;  
```  
  
##  <a name="cd2dbitmapbrush__m_pbitmapbrushproperties"></a>  CD2DBitmapBrush::m_pBitmapBrushProperties  
 Bitmap brush properties.  
  
```  
D2D1_BITMAP_BRUSH_PROPERTIES* m_pBitmapBrushProperties;  
```  
  
##  <a name="cd2dbitmapbrush__operator_id2d1bitmapbrush_star"></a>  CD2DBitmapBrush::operator ID2D1BitmapBrush*  
 Returns ID2D1BitmapBrush interface  
  
```  
operator ID2D1BitmapBrush*();
```   
  
### Return Value  
 Pointer to an ID2D1BitmapBrush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dbitmapbrush__setbitmap"></a>  CD2DBitmapBrush::SetBitmap  
 Specifies the bitmap source that this brush uses to paint  
  
```  
void SetBitmap(CD2DBitmap* pBitmap);
```  
  
### Parameters  
 `pBitmap`  
 The bitmap source used by the brush  
  
##  <a name="cd2dbitmapbrush__setextendmodex"></a>  CD2DBitmapBrush::SetExtendModeX  
 Specifies how the brush horizontally tiles those areas that extend past its bitmap  
  
```  
void SetExtendModeX(D2D1_EXTEND_MODE extendModeX);
```  
  
### Parameters  
 `extendModeX`  
 A value that specifies how the brush horizontally tiles those areas that extend past its bitmap  
  
##  <a name="cd2dbitmapbrush__setextendmodey"></a>  CD2DBitmapBrush::SetExtendModeY  
 Specifies how the brush vertically tiles those areas that extend past its bitmap  
  
```  
void SetExtendModeY(D2D1_EXTEND_MODE extendModeY);
```  
  
### Parameters  
 `extendModeY`  
 A value that specifies how the brush vertically tiles those areas that extend past its bitmap  
  
##  <a name="cd2dbitmapbrush__setinterpolationmode"></a>  CD2DBitmapBrush::SetInterpolationMode  
 Specifies the interpolation mode used when the brush bitmap is scaled or rotated  
  
```  
void SetInterpolationMode(D2D1_BITMAP_INTERPOLATION_MODE interpolationMode);
```  
  
### Parameters  
 `interpolationMode`  
 The interpolation mode used when the brush bitmap is scaled or rotated  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
