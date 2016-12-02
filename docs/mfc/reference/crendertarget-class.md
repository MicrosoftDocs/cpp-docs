---
title: "CRenderTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRenderTarget"
  - "afxrendertarget/CRenderTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRenderTarget class"
ms.assetid: 30d1607d-68d3-4d14-ac36-fdbd0ef903a1
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
# CRenderTarget Class
A wrapper for ID2D1RenderTarget.  
  
## Syntax  
  
```  
class CRenderTarget : public CObject;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRenderTarget::CRenderTarget](#crendertarget__crendertarget)|Constructs a CRenderTarget object.|  
|[CRenderTarget::~CRenderTarget](#crendertarget__~crendertarget)|The destructor. Called when a render target object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRenderTarget::Attach](#crendertarget__attach)|Attaches existing render target interface to the object|  
|[CRenderTarget::BeginDraw](#crendertarget__begindraw)|Initiates drawing on this render target.|  
|[CRenderTarget::Clear](#crendertarget__clear)|Clears the drawing area to the specified color.|  
|[CRenderTarget::COLORREF_TO_D2DCOLOR](#crendertarget__colorref_to_d2dcolor)|Converts GDI color and alpha values to the D2D1_COLOR_F object.|  
|[CRenderTarget::CreateCompatibleRenderTarget](#crendertarget__createcompatiblerendertarget)|Creates a new bitmap render target for use during intermediate offscreen drawing that is compatible with the current render target .|  
|[CRenderTarget::Destroy](#crendertarget__destroy)|Deletes one or more resources|  
|[CRenderTarget::Detach](#crendertarget__detach)|Detaches render target interface from the object|  
|[CRenderTarget::DrawBitmap](#crendertarget__drawbitmap)|Draws the formatted text described by the specified IDWriteTextLayout object.|  
|[CRenderTarget::DrawEllipse](#crendertarget__drawellipse)|Draws the outline of the specified ellipse using the specified stroke style.|  
|[CRenderTarget::DrawGeometry](#crendertarget__drawgeometry)|Draws the outline of the specified geometry using the specified stroke style.|  
|[CRenderTarget::DrawGlyphRun](#crendertarget__drawglyphrun)|Draws the specified glyphs.|  
|[CRenderTarget::DrawLine](#crendertarget__drawline)|Draws a line between the specified points using the specified stroke style.|  
|[CRenderTarget::DrawRectangle](#crendertarget__drawrectangle)|Draws the outline of a rectangle that has the specified dimensions and stroke style.|  
|[CRenderTarget::DrawRoundedRectangle](#crendertarget__drawroundedrectangle)|Draws the outline of the specified rounded rectangle using the specified stroke style.|  
|[CRenderTarget::DrawText](#crendertarget__drawtext)|Draws the specified text using the format information provided by an IDWriteTextFormat object.|  
|[CRenderTarget::DrawTextLayout](#crendertarget__drawtextlayout)|Draws the formatted text described by the specified IDWriteTextLayout object.|  
|[CRenderTarget::EndDraw](#crendertarget__enddraw)|Ends drawing operations on the render target and indicates the current error state and associated tags.|  
|[CRenderTarget::FillEllipse](#crendertarget__fillellipse)|Paints the interior of the specified ellipse.|  
|[CRenderTarget::FillGeometry](#crendertarget__fillgeometry)|Paints the interior of the specified geometry.|  
|[CRenderTarget::FillMesh](#crendertarget__fillmesh)|Paints the interior of the specified mesh.|  
|[CRenderTarget::FillOpacityMask](#crendertarget__fillopacitymask)|Applies the opacity mask described by the specified bitmap to a brush and uses that brush to paint a region of the render target.|  
|[CRenderTarget::FillRectangle](#crendertarget__fillrectangle)|Paints the interior of the specified rectangle.|  
|[CRenderTarget::FillRoundedRectangle](#crendertarget__fillroundedrectangle)|Paints the interior of the specified rounded rectangle.|  
|[CRenderTarget::Flush](#crendertarget__flush)|Executes all pending drawing commands.|  
|[CRenderTarget::GetAntialiasMode](#crendertarget__getantialiasmode)|Retrieves the current antialiasing mode for nontext drawing operations.|  
|[CRenderTarget::GetDpi](#crendertarget__getdpi)|Returns the render target's dots per inch (DPI)|  
|[CRenderTarget::GetMaximumBitmapSize](#crendertarget__getmaximumbitmapsize)|Gets the maximum size, in device-dependent units (pixels), of any one bitmap dimension supported by the render target|  
|[CRenderTarget::GetPixelFormat](#crendertarget__getpixelformat)|Retrieves the pixel format and alpha mode of the render target|  
|[CRenderTarget::GetPixelSize](#crendertarget__getpixelsize)|Returns the size of the render target in device pixels|  
|[CRenderTarget::GetRenderTarget](#crendertarget__getrendertarget)|Returns ID2D1RenderTarget interface|  
|[CRenderTarget::GetSize](#crendertarget__getsize)|Returns the size of the render target in device-independent pixels|  
|[CRenderTarget::GetTags](#crendertarget__gettags)|Gets the label for subsequent drawing operations.|  
|[CRenderTarget::GetTextAntialiasMode](#crendertarget__gettextantialiasmode)|Gets the current antialiasing mode for text and glyph drawing operations.|  
|[CRenderTarget::GetTextRenderingParams](#crendertarget__gettextrenderingparams)|Retrieves the render target's current text rendering options.|  
|[CRenderTarget::GetTransform](#crendertarget__gettransform)|Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.|  
|[CRenderTarget::IsSupported](#crendertarget__issupported)|Indicates whether the render target supports the specified properties|  
|[CRenderTarget::IsValid](#crendertarget__isvalid)|Checks resource validity|  
|[CRenderTarget::PopAxisAlignedClip](#crendertarget__popaxisalignedclip)|Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.|  
|[CRenderTarget::PopLayer](#crendertarget__poplayer)|Stops redirecting drawing operations to the layer that is specified by the last PushLayer call.|  
|[CRenderTarget::PushAxisAlignedClip](#crendertarget__pushaxisalignedclip)|Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.|  
|[CRenderTarget::PushLayer](#crendertarget__pushlayer)|Adds the specified layer to the render target so that it receives all subsequent drawing operations until PopLayer is called.|  
|[CRenderTarget::RestoreDrawingState](#crendertarget__restoredrawingstate)|Sets the render target's drawing state to that of the specified ID2D1DrawingStateBlock.|  
|[CRenderTarget::SaveDrawingState](#crendertarget__savedrawingstate)|Saves the current drawing state to the specified ID2D1DrawingStateBlock.|  
|[CRenderTarget::SetAntialiasMode](#crendertarget__setantialiasmode)|Sets the antialiasing mode of the render target. The antialiasing mode applies to all subsequent drawing operations, excluding text and glyph drawing operations.|  
|[CRenderTarget::SetDpi](#crendertarget__setdpi)|Sets the dots per inch (DPI) of the render target.|  
|[CRenderTarget::SetTags](#crendertarget__settags)|Specifies a label for subsequent drawing operations.|  
|[CRenderTarget::SetTextAntialiasMode](#crendertarget__settextantialiasmode)|Specifies the antialiasing mode to use for subsequent text and glyph drawing operations.|  
|[CRenderTarget::SetTextRenderingParams](#crendertarget__settextrenderingparams)|Specifies text rendering options to be applied to all subsequent text and glyph drawing operations.|  
|[CRenderTarget::SetTransform](#crendertarget__settransform)|Overloaded. Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRenderTarget::VerifyResource](#crendertarget__verifyresource)|Verifies CD2DResource object validity; creates the object if it didn't already exist.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CRenderTarget::operator ID2D1RenderTarget*](#crendertarget__operator_id2d1rendertarget_star)|Returns ID2D1RenderTarget interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CRenderTarget::m_lstResources](#crendertarget__m_lstresources)|A list of pointers to CD2DResource objects.|  
|[CRenderTarget::m_pRenderTarget](#crendertarget__m_prendertarget)|A pointer to an ID2D1RenderTarget object.|  
|[CRenderTarget::m_pTextFormatDefault](#crendertarget__m_ptextformatdefault)|A pointer to CD2DTextFormat object that contains a default text format.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CRenderTarget](../../mfc/reference/crendertarget-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="crendertarget___dtorcrendertarget"></a>  CRenderTarget::~CRenderTarget  
 The destructor. Called when a render target object is being destroyed.  
  
```  
virtual ~CRenderTarget();
```  
  
##  <a name="crendertarget__attach"></a>  CRenderTarget::Attach  
 Attaches existing render target interface to the object  
  
```  
void Attach(ID2D1RenderTarget* pRenderTarget);
```  
  
### Parameters  
 `pRenderTarget`  
 Existing render target interface. Cannot be NULL  
  
##  <a name="crendertarget__begindraw"></a>  CRenderTarget::BeginDraw  
 Initiates drawing on this render target.  
  
```  
void BeginDraw();
```  
  
##  <a name="crendertarget__clear"></a>  CRenderTarget::Clear  
 Clears the drawing area to the specified color.  
  
```  
void Clear(D2D1_COLOR_F color);
```  
  
### Parameters  
 `color`  
 The color to which the drawing area is cleared.  
  
##  <a name="crendertarget__colorref_to_d2dcolor"></a>  CRenderTarget::COLORREF_TO_D2DCOLOR  
 Converts GDI color and alpha values to the D2D1_COLOR_F object.  
  
```  
static D2D1_COLOR_F COLORREF_TO_D2DCOLOR(
    COLORREF color,  
    int nAlpha = 255);
```  
  
### Parameters  
 `color`  
 RGB value.  
  
 `nAlpha`  
  
### Return Value  
 D2D1_COLOR_F value.  
  
##  <a name="crendertarget__createcompatiblerendertarget"></a>  CRenderTarget::CreateCompatibleRenderTarget  
 Creates a new bitmap render target for use during intermediate offscreen drawing that is compatible with the current render target .  
  
```  
BOOL CreateCompatibleRenderTarget(
    CBitmapRenderTarget& bitmapTarget,  
    CD2DSizeF sizeDesired = CD2DSizeF(0.,  
    0.), 
    CD2DSizeU sizePixelDesired = CD2DSizeU(0,  
    0), 
    D2D1_PIXEL_FORMAT* desiredFormat = NULL,  
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS options = D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE);
```  
  
### Parameters  
 `bitmapTarget`  
 When this method returns, contains the address of a pointer to a new bitmap render target. This parameter is passed uninitialized.  
  
 `sizeDesired`  
 The desired size of the new render target in device-independent pixels if it should be different from the original render target, or NULL. For more information, see the Remarks section.  
  
 `sizePixelDesired`  
 The desired size of the new render target in pixels if it should be different from the original render target, or NULL. For more information, see the Remarks section.  
  
 `desiredFormat`  
 The desired pixel format and alpha mode of the new render target, or NULL. If the pixel format is set to DXGI_FORMAT_UNKNOWN or if this parameter is null, the new render target uses the same pixel format as the original render target. If the alpha mode is D2D1_ALPHA_MODE_UNKNOWN or this parameter is NULL, the alpha mode of the new render target defaults to D2D1_ALPHA_MODE_PREMULTIPLIED. For information about supported pixel formats, see Supported Pixel Formats and Alpha Modes.  
  
 `options`  
 A value that specifies whether the new render target must be compatible with GDI.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.  
  
##  <a name="crendertarget__crendertarget"></a>  CRenderTarget::CRenderTarget  
 Constructs a CRenderTarget object.  
  
```  
CRenderTarget();
```  
  
##  <a name="crendertarget__destroy"></a>  CRenderTarget::Destroy  
 Deletes one or more resources  
  
```  
BOOL Destroy(BOOL bDeleteResources = TRUE);
```  
  
### Parameters  
 `bDeleteResources`  
 If bDeleteResources is TRUE, all resources located in m_lstResources will be automatically destroyed.  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE  
  
##  <a name="crendertarget__detach"></a>  CRenderTarget::Detach  
 Detaches render target interface from the object  
  
```  
ID2D1RenderTarget* Detach ();
```  
  
### Return Value  
 Pointer to detached render target interface.  
  
##  <a name="crendertarget__drawbitmap"></a>  CRenderTarget::DrawBitmap  
 Draws the formatted text described by the specified IDWriteTextLayout object.  
  
```  
void DrawBitmap(
    CD2DBitmap* pBitmap,  
    const CD2DRectF& rectDest,  
    float fOpacity = 1.0,  
    D2D1_BITMAP_INTERPOLATION_MODE interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR,  
    const CD2DRectF* pRectSrc = NULL);
```  
  
### Parameters  
 `pBitmap`  
 The bitmap to render.  
  
 `rectDest`  
 The size and position, in device-independent pixels in the render target's coordinate space, of the area to which the bitmap is drawn. If the rectangle is not well-ordered, nothing is drawn, but the render target does not enter an error state.  
  
 `fOpacity`  
 A value between 0.0f and 1.0f, inclusive, that specifies an opacity value to apply to the bitmap; this value is multiplied against the alpha values of the bitmap's contents.  
  
 `interpolationMode`  
 The interpolation mode to use if the bitmap is scaled or rotated by the drawing operation.  
  
 `pRectSrc`  
 The size and position, in device-independent pixels in the bitmap's coordinate space, of the area within the bitmap to draw.  
  
##  <a name="crendertarget__drawellipse"></a>  CRenderTarget::DrawEllipse  
 Draws the outline of the specified ellipse using the specified stroke style.  
  
```  
void DrawEllipse(
    const CD2DEllipse& ellipse,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### Parameters  
 `ellipse`  
 The position and radius of the ellipse to draw, in device-independent pixels.  
  
 `pBrush`  
 The brush used to paint the ellipse's outline.  
  
 `fStrokeWidth`  
 The thickness of the ellipse's stroke. The stroke is centered on the ellipse's outline.  
  
 `strokeStyle`  
 The style of stroke to apply to the ellipse's outline, or NULL to paint a solid stroke.  
  
##  <a name="crendertarget__drawgeometry"></a>  CRenderTarget::DrawGeometry  
 Draws the outline of the specified geometry using the specified stroke style.  
  
```  
void DrawGeometry(
    CD2DGeometry* pGeometry,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### Parameters  
 `pGeometry`  
 The geometry to draw.  
  
 `pBrush`  
 The brush used to paint the geometry's stroke.  
  
 `fStrokeWidth`  
 The thickness of the geometry's stroke. The stroke is centered on the geometry's outline.  
  
 `strokeStyle`  
 The style of stroke to apply to the geometry's outline, or NULL to paint a solid stroke.  
  
##  <a name="crendertarget__drawglyphrun"></a>  CRenderTarget::DrawGlyphRun  
 Draws the specified glyphs.  
  
```  
void DrawGlyphRun(
    const CD2DPointF& ptBaseLineOrigin,  
    const DWRITE_GLYPH_RUN& glyphRun,  
    CD2DBrush* pForegroundBrush,  
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```  
  
### Parameters  
 `ptBaseLineOrigin`  
 The origin, in device-independent pixels, of the glyphs' baseline.  
  
 `glyphRun`  
 The glyphs to render.  
  
 `pForegroundBrush`  
 The brush used to paint the specified glyphs.  
  
 `measuringMode`  
 A value that indicates how glyph metrics are used to measure text when it is formatted. The default value is DWRITE_MEASURING_MODE_NATURAL.  
  
##  <a name="crendertarget__drawline"></a>  CRenderTarget::DrawLine  
 Draws a line between the specified points using the specified stroke style.  
  
```  
void DrawLine(
    const CD2DPointF& ptFrom,  
    const CD2DPointF& ptTo,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### Parameters  
 `ptFrom`  
 The start point of the line, in device-independent pixels.  
  
 `ptTo`  
 The end point of the line, in device-independent pixels.  
  
 `pBrush`  
 The brush used to paint the line's stroke.  
  
 `fStrokeWidth`  
 A value greater than or equal to 0.0f that specifies the width of the stroke. If this parameter isn't specified, it defaults to 1.0f. The stroke is centered on the line.  
  
 `strokeStyle`  
 The style of stroke to paint, or NULL to paint a solid line.  
  
##  <a name="crendertarget__drawrectangle"></a>  CRenderTarget::DrawRectangle  
 Draws the outline of a rectangle that has the specified dimensions and stroke style.  
  
```  
void DrawRectangle(
    const CD2DRectF& rect,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### Parameters  
 `rect`  
 The dimensions of the rectangle to draw, in device-independent pixels  
  
 `pBrush`  
 The brush used to paint the rectangle's stroke  
  
 `fStrokeWidth`  
 A value greater than or equal to 0.0f that specifies the width of the rectangle's stroke. The stroke is centered on the rectangle's outline.  
  
 `strokeStyle`  
 The style of stroke to paint, or NULL to paint a solid stroke.  
  
##  <a name="crendertarget__drawroundedrectangle"></a>  CRenderTarget::DrawRoundedRectangle  
 Draws the outline of the specified rounded rectangle using the specified stroke style.  
  
```  
void DrawRoundedRectangle(
    const CD2DRoundedRect& rectRounded,  
    CD2DBrush* pBrush,  
    FLOAT fStrokeWidth = 1.0,  
    ID2D1StrokeStyle* strokeStyle = NULL);
```  
  
### Parameters  
 `rectRounded`  
 The dimensions of the rounded rectangle to draw, in device-independent pixels.  
  
 `pBrush`  
 The brush used to paint the rounded rectangle's outline.  
  
 `fStrokeWidth`  
 The width of the rounded rectangle's stroke. The stroke is centered on the rounded rectangle's outline. The default value is 1.0f.  
  
 `strokeStyle`  
 The style of the rounded rectangle's stroke, or NULL to paint a solid stroke. The default value is NULL.  
  
##  <a name="crendertarget__drawtext"></a>  CRenderTarget::DrawText  
 Draws the specified text using the format information provided by an IDWriteTextFormat object.  
  
```  
void DrawText(
    const CString& strText,  
    const CD2DRectF& rect,  
    CD2DBrush* pForegroundBrush,  
    CD2DTextFormat* textFormat = NULL,  
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE,  
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```  
  
### Parameters  
 `strText`  
 A pointer to an array of Unicode characters to draw.  
  
 `rect`  
 The size and position of the area in which the text is drawn.  
  
 `pForegroundBrush`  
 The brush used to paint the text.  
  
 `textFormat`  
 An object that describes formatting details of the text to draw, such as the font, the font size, and flow direction.  
  
 `options`  
 A value that indicates whether the text should be snapped to pixel boundaries and whether the text should be clipped to the layout rectangle. The default value is D2D1_DRAW_TEXT_OPTIONS_NONE, which indicates that text should be snapped to pixel boundaries and it should not be clipped to the layout rectangle.  
  
 `measuringMode`  
 A value that indicates how glyph metrics are used to measure text when it is formatted. The default value is DWRITE_MEASURING_MODE_NATURAL.  
  
##  <a name="crendertarget__drawtextlayout"></a>  CRenderTarget::DrawTextLayout  
 Draws the formatted text described by the specified IDWriteTextLayout object.  
  
```  
void DrawTextLayout(
    const CD2DPointF& ptOrigin,  
    CD2DTextLayout* textLayout,  
    CD2DBrush* pBrushForeground,  
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE);
```  
  
### Parameters  
 `ptOrigin`  
 The point, described in device-independent pixels, at which the upper-left corner of the text described by textLayout is drawn.  
  
 `textLayout`  
 The formatted text to draw. Any drawing effects that do not inherit from ID2D1Resource are ignored. If there are drawing effects that inherit from ID2D1Resource that are not brushes, this method fails and the render target is put in an error state.  
  
 `pBrushForeground`  
 The brush used to paint any text in textLayout that does not already have a brush associated with it as a drawing effect (specified by the IDWriteTextLayout::SetDrawingEffect method).  
  
 `options`  
 A value that indicates whether the text should be snapped to pixel boundaries and whether the text should be clipped to the layout rectangle. The default value is D2D1_DRAW_TEXT_OPTIONS_NONE, which indicates that text should be snapped to pixel boundaries and it should not be clipped to the layout rectangle.  
  
##  <a name="crendertarget__enddraw"></a>  CRenderTarget::EndDraw  
 Ends drawing operations on the render target and indicates the current error state and associated tags.  
  
```  
HRESULT EndDraw();
```  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="crendertarget__fillellipse"></a>  CRenderTarget::FillEllipse  
 Paints the interior of the specified ellipse.  
  
```  
void FillEllipse(
    const CD2DEllipse& ellipse,  
    CD2DBrush* pBrush);
```  
  
### Parameters  
 `ellipse`  
 The position and radius, in device-independent pixels, of the ellipse to paint.  
  
 `pBrush`  
 The brush used to paint the interior of the ellipse.  
  
##  <a name="crendertarget__fillgeometry"></a>  CRenderTarget::FillGeometry  
 Paints the interior of the specified geometry.  
  
```  
void FillGeometry(
    CD2DGeometry* pGeometry,  
    CD2DBrush* pBrush,  
    CD2DBrush* pOpacityBrush = NULL);
```  
  
### Parameters  
 `pGeometry`  
 The geometry to paint.  
  
 `pBrush`  
 The brush used to paint the geometry's interior.  
  
 `pOpacityBrush`  
 The opacity mask to apply to the geometry;NULL for no opacity mask. If an opacity mask (the opacityBrush parameter) is specified, brush must be an ID2D1BitmapBrush that has its x- and y-extend modes set to D2D1_EXTEND_MODE_CLAMP. For more information, see the Remarks section.  
  
##  <a name="crendertarget__fillmesh"></a>  CRenderTarget::FillMesh  
 Paints the interior of the specified mesh.  
  
```  
void FillMesh(
    CD2DMesh* pMesh,  
    CD2DBrush* pBrush);
```  
  
### Parameters  
 `pMesh`  
 The mesh to paint.  
  
 `pBrush`  
 The brush used to paint the mesh.  
  
##  <a name="crendertarget__fillopacitymask"></a>  CRenderTarget::FillOpacityMask  
 Applies the opacity mask described by the specified bitmap to a brush and uses that brush to paint a region of the render target.  
  
```  
void FillOpacityMask(
    CD2DBitmap* pOpacityMask,  
    CD2DBrush* pBrush,  
    D2D1_OPACITY_MASK_CONTENT content,  
    const CD2DRectF& rectDest,  
    const CD2DRectF& rectSrc);
```  
  
### Parameters  
 `pOpacityMask`  
 The position and radius, in device-independent pixels, of the ellipse to paint.  
  
 `pBrush`  
 The brush used to paint the region of the render target specified by destinationRectangle.  
  
 `content`  
 The type of content the opacity mask contains. The value is used to determine the color space in which the opacity mask is blended.  
  
 `rectDest`  
 The region of the render target to paint, in device-independent pixels.  
  
 `rectSrc`  
 The region of the bitmap to use as the opacity mask, in device-independent pixels.  
  
##  <a name="crendertarget__fillrectangle"></a>  CRenderTarget::FillRectangle  
 Paints the interior of the specified rectangle.  
  
```  
void FillRectangle(
    const CD2DRectF& rect,  
    CD2DBrush* pBrush);
```  
  
### Parameters  
 `rect`  
 The dimension of the rectangle to paint, in device-independent pixels.  
  
 `pBrush`  
 The brush used to paint the rectangle's interior.  
  
##  <a name="crendertarget__fillroundedrectangle"></a>  CRenderTarget::FillRoundedRectangle  
 Paints the interior of the specified rounded rectangle.  
  
```  
void FillRoundedRectangle(
    const CD2DRoundedRect& rectRounded,  
    CD2DBrush* pBrush);
```  
  
### Parameters  
 `rectRounded`  
 The dimensions of the rounded rectangle to paint, in device independent pixels.  
  
 `pBrush`  
 The brush used to paint the interior of the rounded rectangle.  
  
##  <a name="crendertarget__flush"></a>  CRenderTarget::Flush  
 Executes all pending drawing commands.  
  
```  
void Flush(
    D2D1_TAG* tag1 = NULL,  
    D2D1_TAG* tag2 = NULL);
```  
  
### Parameters  
 `tag1`  
 Contains the tag for drawing operations that caused errors or 0 if there were no errors. This parameter is passed uninitialized.  
  
 `tag2`  
 Contains the tag for drawing operations that caused errors or 0 if there were no errors. This parameter is passed uninitialized.  
  
##  <a name="crendertarget__getantialiasmode"></a>  CRenderTarget::GetAntialiasMode  
 Retrieves the current antialiasing mode for nontext drawing operations.  
  
```  
D2D1_ANTIALIAS_MODE GetAntialiasMode() const;

 
```  
  
### Return Value  
 Current antialiasing mode for nontext drawing operations.  
  
##  <a name="crendertarget__getdpi"></a>  CRenderTarget::GetDpi  
 Returns the render target's dots per inch (DPI)  
  
```  
CD2DSizeF GetDpi() const;

 
```  
  
### Return Value  
 The render target's dots per inch (DPI).  
  
##  <a name="crendertarget__getmaximumbitmapsize"></a>  CRenderTarget::GetMaximumBitmapSize  
 Gets the maximum size, in device-dependent units (pixels), of any one bitmap dimension supported by the render target  
  
```  
UINT32 GetMaximumBitmapSize() const;

 
```  
  
### Return Value  
 The maximum size, in pixels, of any one bitmap dimension supported by the render target  
  
##  <a name="crendertarget__getpixelformat"></a>  CRenderTarget::GetPixelFormat  
 Retrieves the pixel format and alpha mode of the render target  
  
```  
D2D1_PIXEL_FORMAT GetPixelFormat() const;

 
```  
  
### Return Value  
 The pixel format and alpha mode of the render target  
  
##  <a name="crendertarget__getpixelsize"></a>  CRenderTarget::GetPixelSize  
 Returns the size of the render target in device pixels  
  
```  
CD2DSizeU GetPixelSize() const;

 
```  
  
### Return Value  
 The size of the render target in device pixels  
  
##  <a name="crendertarget__getrendertarget"></a>  CRenderTarget::GetRenderTarget  
 Returns ID2D1RenderTarget interface  
  
```  
ID2D1RenderTarget* GetRenderTarget();
```  
  
### Return Value  
 Pointer to an ID2D1RenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="crendertarget__getsize"></a>  CRenderTarget::GetSize  
 Returns the size of the render target in device-independent pixels  
  
```  
CD2DSizeF GetSize() const;

 
```  
  
### Return Value  
 The current size of the render target in device-independent pixels  
  
##  <a name="crendertarget__gettags"></a>  CRenderTarget::GetTags  
 Gets the label for subsequent drawing operations.  
  
```  
void GetTags(
    D2D1_TAG* tag1 = NULL,  
    D2D1_TAG* tag2 = NULL) const;

 
```  
  
### Parameters  
 `tag1`  
 Contains the first label for subsequent drawing operations. This parameter is passed uninitialized. If NULL is specified, no value is retrieved for this parameter.  
  
 `tag2`  
 Contains the second label for subsequent drawing operations. This parameter is passed uninitialized. If NULL is specified, no value is retrieved for this parameter.  
  
##  <a name="crendertarget__gettextantialiasmode"></a>  CRenderTarget::GetTextAntialiasMode  
 Gets the current antialiasing mode for text and glyph drawing operations.  
  
```  
D2D1_TEXT_ANTIALIAS_MODE GetTextAntialiasMode() const;

 
```  
  
### Return Value  
 Current antialiasing mode for text and glyph drawing operations.  
  
##  <a name="crendertarget__gettextrenderingparams"></a>  CRenderTarget::GetTextRenderingParams  
 Retrieves the render target's current text rendering options.  
  
```  
void GetTextRenderingParams(IDWriteRenderingParams** textRenderingParams);
```  
  
### Parameters  
 `textRenderingParams`  
 When this method returns, textRenderingParamscontains the address of a pointer to the render target's current text rendering options.  
  
##  <a name="crendertarget__gettransform"></a>  CRenderTarget::GetTransform  
 Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.  
  
```  
void GetTransform(D2D1_MATRIX_3X2_F* transform);
```  
  
### Parameters  
 `transform`  
 The transform to apply to the render target.  
  
##  <a name="crendertarget__issupported"></a>  CRenderTarget::IsSupported  
 Indicates whether the render target supports the specified properties  
  
```  
BOOL IsSupported(const D2D1_RENDER_TARGET_PROPERTIES& renderTargetProperties) const;

 
```  
  
### Parameters  
 `renderTargetProperties`  
 The render target properties to test  
  
### Return Value  
 TRUE if the specified render target properties are supported by this render target; otherwise, FALSE  
  
##  <a name="crendertarget__isvalid"></a>  CRenderTarget::IsValid  
 Checks resource validity  
  
```  
BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="crendertarget__m_lstresources"></a>  CRenderTarget::m_lstResources  
 A list of pointers to CD2DResource objects.  
  
```  
CObList m_lstResources;  
```  
  
##  <a name="crendertarget__m_prendertarget"></a>  CRenderTarget::m_pRenderTarget  
 A pointer to an ID2D1RenderTarget object.  
  
```  
ID2D1RenderTarget* m_pRenderTarget;  
```  
  
##  <a name="crendertarget__m_ptextformatdefault"></a>  CRenderTarget::m_pTextFormatDefault  
 A pointer to CD2DTextFormat object that contains a default text format.  
  
```  
CD2DTextFormat* m_pTextFormatDefault;  
```  
  
##  <a name="crendertarget__operator_id2d1rendertarget_star"></a>  CRenderTarget::operator ID2D1RenderTarget*  
 Returns ID2D1RenderTarget interface  
  
```  
operator ID2D1RenderTarget*();
```   
  
### Return Value  
 Pointer to an ID2D1RenderTarget interface or NULL if object is not initialized yet.  
  
##  <a name="crendertarget__popaxisalignedclip"></a>  CRenderTarget::PopAxisAlignedClip  
 Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.  
  
```  
void PopAxisAlignedClip();
```  
  
##  <a name="crendertarget__poplayer"></a>  CRenderTarget::PopLayer  
 Stops redirecting drawing operations to the layer that is specified by the last PushLayer call.  
  
```  
void PopLayer();
```  
  
##  <a name="crendertarget__pushaxisalignedclip"></a>  CRenderTarget::PushAxisAlignedClip  
 Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.  
  
```  
void PushAxisAlignedClip(
    const CD2DRectF& rectClip,  
    D2D1_ANTIALIAS_MODE mode = D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
```  
  
### Parameters  
 `rectClip`  
 The size and position of the clipping area, in device-independent pixels.  
  
 `mode`  
 The antialiasing mode that is used to draw the edges of clip rects that have subpixel boundaries, and to blend the clip with the scene contents. The blending is performed once when the PopAxisAlignedClip method is called, and does not apply to each primitive within the layer.  
  
##  <a name="crendertarget__pushlayer"></a>  CRenderTarget::PushLayer  
 Adds the specified layer to the render target so that it receives all subsequent drawing operations until PopLayer is called.  
  
```  
void PushLayer(
    const D2D1_LAYER_PARAMETERS& layerParameters,  
    CD2DLayer& layer);
```  
  
### Parameters  
 `layerParameters`  
 The content bounds, geometric mask, opacity, opacity mask, and antialiasing options for the layer.  
  
 `layer`  
 The layer that receives subsequent drawing operations.  
  
##  <a name="crendertarget__restoredrawingstate"></a>  CRenderTarget::RestoreDrawingState  
 Sets the render target's drawing state to that of the specified ID2D1DrawingStateBlock.  
  
```  
void RestoreDrawingState(ID2D1DrawingStateBlock& drawingStateBlock);
```  
  
### Parameters  
 `drawingStateBlock`  
 The new drawing state of the render target.  
  
##  <a name="crendertarget__savedrawingstate"></a>  CRenderTarget::SaveDrawingState  
 Saves the current drawing state to the specified ID2D1DrawingStateBlock.  
  
```  
void SaveDrawingState(ID2D1DrawingStateBlock& drawingStateBlock) const;

 
```  
  
### Parameters  
 `drawingStateBlock`  
 When this method returns, contains the current drawing state of the render target. This parameter must be initialized before passing it to the method.  
  
##  <a name="crendertarget__setantialiasmode"></a>  CRenderTarget::SetAntialiasMode  
 Sets the antialiasing mode of the render target. The antialiasing mode applies to all subsequent drawing operations, excluding text and glyph drawing operations.  
  
```  
void SetAntialiasMode(D2D1_ANTIALIAS_MODE antialiasMode);
```  
  
### Parameters  
 `antialiasMode`  
 The antialiasing mode for future drawing operations.  
  
##  <a name="crendertarget__setdpi"></a>  CRenderTarget::SetDpi  
 Sets the dots per inch (DPI) of the render target.  
  
```  
void SetDpi(const CD2DSizeF& sizeDPI);
```  
  
### Parameters  
 `sizeDPI`  
 A value greater than or equal to zero that specifies the horizontal/verticalDPI of the render target.  
  
##  <a name="crendertarget__settags"></a>  CRenderTarget::SetTags  
 Specifies a label for subsequent drawing operations.  
  
```  
void SetTags(
    D2D1_TAG tag1,  
    D2D1_TAG tag2);
```  
  
### Parameters  
 `tag1`  
 A label to apply to subsequent drawing operations.  
  
 `tag2`  
 A label to apply to subsequent drawing operations.  
  
##  <a name="crendertarget__settextantialiasmode"></a>  CRenderTarget::SetTextAntialiasMode  
 Specifies the antialiasing mode to use for subsequent text and glyph drawing operations.  
  
```  
void SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode);
```  
  
### Parameters  
 `textAntialiasMode`  
 The antialiasing mode to use for subsequent text and glyph drawing operations.  
  
##  <a name="crendertarget__settextrenderingparams"></a>  CRenderTarget::SetTextRenderingParams  
 Specifies text rendering options to be applied to all subsequent text and glyph drawing operations.  
  
```  
void SetTextRenderingParams(IDWriteRenderingParams* textRenderingParams = NULL);
```  
  
### Parameters  
 `textRenderingParams`  
 The text rendering options to be applied to all subsequent text and glyph drawing operations; NULL to clear current text rendering options.  
  
##  <a name="crendertarget__settransform"></a>  CRenderTarget::SetTransform  
 Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.  
  
```  
void SetTransform(const D2D1_MATRIX_3X2_F* transform);

 
void SetTransform(const D2D1_MATRIX_3X2_F& transform);
```  
  
### Parameters  
 `transform`  
 The transform to apply to the render target.  
  
##  <a name="crendertarget__verifyresource"></a>  CRenderTarget::VerifyResource  
 Verifies CD2DResource object validity; creates the object if it didn't already exist.  
  
```  
BOOL VerifyResource(CD2DResource* pResource);
```  
  
### Parameters  
 `pResource`  
 Pointer to CD2DResource object.  
  
### Return Value  
 TRUE is object if valid; otherwise FALSE.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
