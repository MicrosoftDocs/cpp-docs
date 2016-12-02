---
title: "CD2DBrush Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DBrush"
  - "afxrendertarget/CD2DBrush"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DBrush class"
ms.assetid: 0d2c0857-2261-48a8-8ee0-a88cbf08499a
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
# CD2DBrush Class
A wrapper for ID2D1Brush.  
  
## Syntax  
  
```  
class CD2DBrush : public CD2DResource;  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrush::CD2DBrush](#cd2dbrush__cd2dbrush)|Constructs a CD2DBrush object.|  
|[CD2DBrush::~CD2DBrush](#cd2dbrush___dtorcd2dbrush)|The destructor. Called when a D2D brush object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrush::Attach](#cd2dbrush__attach)|Attaches existing resource interface to the object|  
|[CD2DBrush::Destroy](#cd2dbrush__destroy)|Destroys a CD2DBrush object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#cd2dresource__destroy).)|  
|[CD2DBrush::Detach](#cd2dbrush__detach)|Detaches resource interface from the object|  
|[CD2DBrush::Get](#cd2dbrush__get)|Returns ID2D1Brush interface|  
|[CD2DBrush::GetOpacity](#cd2dbrush__getopacity)|Gets the degree of opacity of this brush|  
|[CD2DBrush::GetTransform](#cd2dbrush__gettransform)|Gets the current transform of the render target|  
|[CD2DBrush::IsValid](#cd2dbrush__isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#cd2dresource__isvalid).)|  
|[CD2DBrush::SetOpacity](#cd2dbrush__setopacity)|Sets the degree of opacity of this brush|  
|[CD2DBrush::SetTransform](#cd2dbrush__settransform)|Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrush::operator ID2D1Brush*](#cd2dbrush__operator_id2d1brush_star)|Returns ID2D1Brush interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DBrush::m_pBrush](#cd2dbrush__m_pbrush)|Stores a pointer to an ID2D1Brush object.|  
|[CD2DBrush::m_pBrushProperties](#cd2dbrush__m_pbrushproperties)|Brush properties.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DBrush](../../mfc/reference/cd2dbrush-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dbrush___dtorcd2dbrush"></a>  CD2DBrush::~CD2DBrush  
 The destructor. Called when a D2D brush object is being destroyed.  
  
```  
virtual ~CD2DBrush();
```  
  
##  <a name="cd2dbrush__attach"></a>  CD2DBrush::Attach  
 Attaches existing resource interface to the object  
  
```  
void Attach(ID2D1Brush* pResource);
```  
  
### Parameters  
 `pResource`  
 Existing resource interface. Cannot be NULL  
  
##  <a name="cd2dbrush__cd2dbrush"></a>  CD2DBrush::CD2DBrush  
 Constructs a CD2DBrush object.  
  
```  
CD2DBrush(
    CRenderTarget* pParentTarget,  
    CD2DBrushProperties* pBrushProperties = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `pBrushProperties`  
 A pointer to the opacity and transformation of a brush.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dbrush__destroy"></a>  CD2DBrush::Destroy  
 Destroys a CD2DBrush object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dbrush__detach"></a>  CD2DBrush::Detach  
 Detaches resource interface from the object  
  
```  
ID2D1Brush* Detach();
```  
  
### Return Value  
 Pointer to detached resource interface.  
  
##  <a name="cd2dbrush__get"></a>  CD2DBrush::Get  
 Returns ID2D1Brush interface  
  
```  
ID2D1Brush* Get();
```  
  
### Return Value  
 Pointer to an ID2D1Brush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dbrush__getopacity"></a>  CD2DBrush::GetOpacity  
 Gets the degree of opacity of this brush  
  
```  
FLOAT GetOpacity() const;

 
```  
  
### Return Value  
 A value between zero and 1 that indicates the opacity of the brush. This value is a constant multiplier that linearly scales the alpha value of all pixels filled by the brush. The opacity values are clamped in the range 0 to 1 before they are multiplied together  
  
##  <a name="cd2dbrush__gettransform"></a>  CD2DBrush::GetTransform  
 Gets the current transform of the render target  
  
```  
void GetTransform(D2D1_MATRIX_3X2_F* transform) const;

 
```  
  
### Parameters  
 `transform`  
 When this returns, contains the current transform of the render target. This parameter is passed uninitialized  
  
##  <a name="cd2dbrush__isvalid"></a>  CD2DBrush::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="cd2dbrush__m_pbrush"></a>  CD2DBrush::m_pBrush  
 Stores a pointer to an ID2D1Brush object.  
  
```  
ID2D1Brush* m_pBrush;  
```  
  
##  <a name="cd2dbrush__m_pbrushproperties"></a>  CD2DBrush::m_pBrushProperties  
 Brush properties.  
  
```  
CD2DBrushProperties* m_pBrushProperties;  
```  
  
##  <a name="cd2dbrush__operator_id2d1brush_star"></a>  CD2DBrush::operator ID2D1Brush*  
 Returns ID2D1Brush interface  
  
```  
operator ID2D1Brush*();
```   
  
### Return Value  
 Pointer to an ID2D1Brush interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dbrush__setopacity"></a>  CD2DBrush::SetOpacity  
 Sets the degree of opacity of this brush  
  
```  
void SetOpacity(FLOAT opacity);
```  
  
### Parameters  
 `opacity`  
 A value between zero and 1 that indicates the opacity of the brush. This value is a constant multiplier that linearly scales the alpha value of all pixels filled by the brush. The opacity values are clamped in the range 0 to 1 before they are multiplied together  
  
##  <a name="cd2dbrush__settransform"></a>  CD2DBrush::SetTransform  
 Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space  
  
```  
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
```  
  
### Parameters  
 `transform`  
 The transform to apply to the render target  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
