---
description: "Learn more about: CRenderTarget Class"
title: "CRenderTarget Class"
ms.date: "03/27/2019"
f1_keywords: ["CRenderTarget", "AFXRENDERTARGET/CRenderTarget", "AFXRENDERTARGET/CRenderTarget::CRenderTarget", "AFXRENDERTARGET/CRenderTarget::Attach", "AFXRENDERTARGET/CRenderTarget::BeginDraw", "AFXRENDERTARGET/CRenderTarget::Clear", "AFXRENDERTARGET/CRenderTarget::COLORREF_TO_D2DCOLOR", "AFXRENDERTARGET/CRenderTarget::CreateCompatibleRenderTarget", "AFXRENDERTARGET/CRenderTarget::Destroy", "AFXRENDERTARGET/CRenderTarget::Detach", "AFXRENDERTARGET/CRenderTarget::DrawBitmap", "AFXRENDERTARGET/CRenderTarget::DrawEllipse", "AFXRENDERTARGET/CRenderTarget::DrawGeometry", "AFXRENDERTARGET/CRenderTarget::DrawGlyphRun", "AFXRENDERTARGET/CRenderTarget::DrawLine", "AFXRENDERTARGET/CRenderTarget::DrawRectangle", "AFXRENDERTARGET/CRenderTarget::DrawRoundedRectangle", "AFXRENDERTARGET/CRenderTarget::DrawText", "AFXRENDERTARGET/CRenderTarget::DrawTextLayout", "AFXRENDERTARGET/CRenderTarget::EndDraw", "AFXRENDERTARGET/CRenderTarget::FillEllipse", "AFXRENDERTARGET/CRenderTarget::FillGeometry", "AFXRENDERTARGET/CRenderTarget::FillMesh", "AFXRENDERTARGET/CRenderTarget::FillOpacityMask", "AFXRENDERTARGET/CRenderTarget::FillRectangle", "AFXRENDERTARGET/CRenderTarget::FillRoundedRectangle", "AFXRENDERTARGET/CRenderTarget::Flush", "AFXRENDERTARGET/CRenderTarget::GetAntialiasMode", "AFXRENDERTARGET/CRenderTarget::GetDpi", "AFXRENDERTARGET/CRenderTarget::GetMaximumBitmapSize", "AFXRENDERTARGET/CRenderTarget::GetPixelFormat", "AFXRENDERTARGET/CRenderTarget::GetPixelSize", "AFXRENDERTARGET/CRenderTarget::GetRenderTarget", "AFXRENDERTARGET/CRenderTarget::GetSize", "AFXRENDERTARGET/CRenderTarget::GetTags", "AFXRENDERTARGET/CRenderTarget::GetTextAntialiasMode", "AFXRENDERTARGET/CRenderTarget::GetTextRenderingParams", "AFXRENDERTARGET/CRenderTarget::GetTransform", "AFXRENDERTARGET/CRenderTarget::IsSupported", "AFXRENDERTARGET/CRenderTarget::IsValid", "AFXRENDERTARGET/CRenderTarget::PopAxisAlignedClip", "AFXRENDERTARGET/CRenderTarget::PopLayer", "AFXRENDERTARGET/CRenderTarget::PushAxisAlignedClip", "AFXRENDERTARGET/CRenderTarget::PushLayer", "AFXRENDERTARGET/CRenderTarget::RestoreDrawingState", "AFXRENDERTARGET/CRenderTarget::SaveDrawingState", "AFXRENDERTARGET/CRenderTarget::SetAntialiasMode", "AFXRENDERTARGET/CRenderTarget::SetDpi", "AFXRENDERTARGET/CRenderTarget::SetTags", "AFXRENDERTARGET/CRenderTarget::SetTextAntialiasMode", "AFXRENDERTARGET/CRenderTarget::SetTextRenderingParams", "AFXRENDERTARGET/CRenderTarget::SetTransform", "AFXRENDERTARGET/CRenderTarget::VerifyResource", "AFXRENDERTARGET/CRenderTarget::m_lstResources", "AFXRENDERTARGET/CRenderTarget::m_pRenderTarget", "AFXRENDERTARGET/CRenderTarget::m_pTextFormatDefault"]
helpviewer_keywords: ["CRenderTarget [MFC], CRenderTarget", "CRenderTarget [MFC], Attach", "CRenderTarget [MFC], BeginDraw", "CRenderTarget [MFC], Clear", "CRenderTarget [MFC], COLORREF_TO_D2DCOLOR", "CRenderTarget [MFC], CreateCompatibleRenderTarget", "CRenderTarget [MFC], Destroy", "CRenderTarget [MFC], Detach", "CRenderTarget [MFC], DrawBitmap", "CRenderTarget [MFC], DrawEllipse", "CRenderTarget [MFC], DrawGeometry", "CRenderTarget [MFC], DrawGlyphRun", "CRenderTarget [MFC], DrawLine", "CRenderTarget [MFC], DrawRectangle", "CRenderTarget [MFC], DrawRoundedRectangle", "CRenderTarget [MFC], DrawText", "CRenderTarget [MFC], DrawTextLayout", "CRenderTarget [MFC], EndDraw", "CRenderTarget [MFC], FillEllipse", "CRenderTarget [MFC], FillGeometry", "CRenderTarget [MFC], FillMesh", "CRenderTarget [MFC], FillOpacityMask", "CRenderTarget [MFC], FillRectangle", "CRenderTarget [MFC], FillRoundedRectangle", "CRenderTarget [MFC], Flush", "CRenderTarget [MFC], GetAntialiasMode", "CRenderTarget [MFC], GetDpi", "CRenderTarget [MFC], GetMaximumBitmapSize", "CRenderTarget [MFC], GetPixelFormat", "CRenderTarget [MFC], GetPixelSize", "CRenderTarget [MFC], GetRenderTarget", "CRenderTarget [MFC], GetSize", "CRenderTarget [MFC], GetTags", "CRenderTarget [MFC], GetTextAntialiasMode", "CRenderTarget [MFC], GetTextRenderingParams", "CRenderTarget [MFC], GetTransform", "CRenderTarget [MFC], IsSupported", "CRenderTarget [MFC], IsValid", "CRenderTarget [MFC], PopAxisAlignedClip", "CRenderTarget [MFC], PopLayer", "CRenderTarget [MFC], PushAxisAlignedClip", "CRenderTarget [MFC], PushLayer", "CRenderTarget [MFC], RestoreDrawingState", "CRenderTarget [MFC], SaveDrawingState", "CRenderTarget [MFC], SetAntialiasMode", "CRenderTarget [MFC], SetDpi", "CRenderTarget [MFC], SetTags", "CRenderTarget [MFC], SetTextAntialiasMode", "CRenderTarget [MFC], SetTextRenderingParams", "CRenderTarget [MFC], SetTransform", "CRenderTarget [MFC], VerifyResource", "CRenderTarget [MFC], m_lstResources", "CRenderTarget [MFC], m_pRenderTarget", "CRenderTarget [MFC], m_pTextFormatDefault"]
ms.assetid: 30d1607d-68d3-4d14-ac36-fdbd0ef903a1
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
|[CRenderTarget::CRenderTarget](#crendertarget)|Constructs a CRenderTarget object.|
|[CRenderTarget::~CRenderTarget](#_dtorcrendertarget)|The destructor. Called when a render target object is being destroyed.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRenderTarget::Attach](#attach)|Attaches existing render target interface to the object|
|[CRenderTarget::BeginDraw](#begindraw)|Initiates drawing on this render target.|
|[CRenderTarget::Clear](#clear)|Clears the drawing area to the specified color.|
|[CRenderTarget::COLORREF_TO_D2DCOLOR](#colorref_to_d2dcolor)|Converts GDI color and alpha values to the D2D1_COLOR_F object.|
|[CRenderTarget::CreateCompatibleRenderTarget](#createcompatiblerendertarget)|Creates a new bitmap render target for use during intermediate offscreen drawing that is compatible with the current render target .|
|[CRenderTarget::Destroy](#destroy)|Deletes one or more resources|
|[CRenderTarget::Detach](#detach)|Detaches render target interface from the object|
|[CRenderTarget::DrawBitmap](#drawbitmap)|Draws the formatted text described by the specified IDWriteTextLayout object.|
|[CRenderTarget::DrawEllipse](#drawellipse)|Draws the outline of the specified ellipse using the specified stroke style.|
|[CRenderTarget::DrawGeometry](#drawgeometry)|Draws the outline of the specified geometry using the specified stroke style.|
|[CRenderTarget::DrawGlyphRun](#drawglyphrun)|Draws the specified glyphs.|
|[CRenderTarget::DrawLine](#drawline)|Draws a line between the specified points using the specified stroke style.|
|[CRenderTarget::DrawRectangle](#drawrectangle)|Draws the outline of a rectangle that has the specified dimensions and stroke style.|
|[CRenderTarget::DrawRoundedRectangle](#drawroundedrectangle)|Draws the outline of the specified rounded rectangle using the specified stroke style.|
|[CRenderTarget::DrawText](#drawtext)|Draws the specified text using the format information provided by an IDWriteTextFormat object.|
|[CRenderTarget::DrawTextLayout](#drawtextlayout)|Draws the formatted text described by the specified IDWriteTextLayout object.|
|[CRenderTarget::EndDraw](#enddraw)|Ends drawing operations on the render target and indicates the current error state and associated tags.|
|[CRenderTarget::FillEllipse](#fillellipse)|Paints the interior of the specified ellipse.|
|[CRenderTarget::FillGeometry](#fillgeometry)|Paints the interior of the specified geometry.|
|[CRenderTarget::FillMesh](#fillmesh)|Paints the interior of the specified mesh.|
|[CRenderTarget::FillOpacityMask](#fillopacitymask)|Applies the opacity mask described by the specified bitmap to a brush and uses that brush to paint a region of the render target.|
|[CRenderTarget::FillRectangle](#fillrectangle)|Paints the interior of the specified rectangle.|
|[CRenderTarget::FillRoundedRectangle](#fillroundedrectangle)|Paints the interior of the specified rounded rectangle.|
|[CRenderTarget::Flush](#flush)|Executes all pending drawing commands.|
|[CRenderTarget::GetAntialiasMode](#getantialiasmode)|Retrieves the current antialiasing mode for nontext drawing operations.|
|[CRenderTarget::GetDpi](#getdpi)|Returns the render target's dots per inch (DPI)|
|[CRenderTarget::GetMaximumBitmapSize](#getmaximumbitmapsize)|Gets the maximum size, in device-dependent units (pixels), of any one bitmap dimension supported by the render target|
|[CRenderTarget::GetPixelFormat](#getpixelformat)|Retrieves the pixel format and alpha mode of the render target|
|[CRenderTarget::GetPixelSize](#getpixelsize)|Returns the size of the render target in device pixels|
|[CRenderTarget::GetRenderTarget](#getrendertarget)|Returns ID2D1RenderTarget interface|
|[CRenderTarget::GetSize](#getsize)|Returns the size of the render target in device-independent pixels|
|[CRenderTarget::GetTags](#gettags)|Gets the label for subsequent drawing operations.|
|[CRenderTarget::GetTextAntialiasMode](#gettextantialiasmode)|Gets the current antialiasing mode for text and glyph drawing operations.|
|[CRenderTarget::GetTextRenderingParams](#gettextrenderingparams)|Retrieves the render target's current text rendering options.|
|[CRenderTarget::GetTransform](#gettransform)|Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.|
|[CRenderTarget::IsSupported](#issupported)|Indicates whether the render target supports the specified properties|
|[CRenderTarget::IsValid](#isvalid)|Checks resource validity|
|[CRenderTarget::PopAxisAlignedClip](#popaxisalignedclip)|Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.|
|[CRenderTarget::PopLayer](#poplayer)|Stops redirecting drawing operations to the layer that is specified by the last PushLayer call.|
|[CRenderTarget::PushAxisAlignedClip](#pushaxisalignedclip)|Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.|
|[CRenderTarget::PushLayer](#pushlayer)|Adds the specified layer to the render target so that it receives all subsequent drawing operations until PopLayer is called.|
|[CRenderTarget::RestoreDrawingState](#restoredrawingstate)|Sets the render target's drawing state to that of the specified ID2D1DrawingStateBlock.|
|[CRenderTarget::SaveDrawingState](#savedrawingstate)|Saves the current drawing state to the specified ID2D1DrawingStateBlock.|
|[CRenderTarget::SetAntialiasMode](#setantialiasmode)|Sets the antialiasing mode of the render target. The antialiasing mode applies to all subsequent drawing operations, excluding text and glyph drawing operations.|
|[CRenderTarget::SetDpi](#setdpi)|Sets the dots per inch (DPI) of the render target.|
|[CRenderTarget::SetTags](#settags)|Specifies a label for subsequent drawing operations.|
|[CRenderTarget::SetTextAntialiasMode](#settextantialiasmode)|Specifies the antialiasing mode to use for subsequent text and glyph drawing operations.|
|[CRenderTarget::SetTextRenderingParams](#settextrenderingparams)|Specifies text rendering options to be applied to all subsequent text and glyph drawing operations.|
|[CRenderTarget::SetTransform](#settransform)|Overloaded. Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CRenderTarget::VerifyResource](#verifyresource)|Verifies CD2DResource object validity; creates the object if it didn't already exist.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CRenderTarget::operator ID2D1RenderTarget*](#operator_id2d1rendertarget_star)|Returns ID2D1RenderTarget interface|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CRenderTarget::m_lstResources](#m_lstresources)|A list of pointers to CD2DResource objects.|
|[CRenderTarget::m_pRenderTarget](#m_prendertarget)|A pointer to an ID2D1RenderTarget object.|
|[CRenderTarget::m_pTextFormatDefault](#m_ptextformatdefault)|A pointer to CD2DTextFormat object that contains a default text format.|

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CRenderTarget](../../mfc/reference/crendertarget-class.md)

## Requirements

**Header:** afxrendertarget.h

## <a name="_dtorcrendertarget"></a> CRenderTarget::~CRenderTarget

The destructor. Called when a render target object is being destroyed.

```
virtual ~CRenderTarget();
```

## <a name="attach"></a> CRenderTarget::Attach

Attaches existing render target interface to the object

```cpp
void Attach(ID2D1RenderTarget* pRenderTarget);
```

### Parameters

*pRenderTarget*<br/>
Existing render target interface. Cannot be NULL

## <a name="begindraw"></a> CRenderTarget::BeginDraw

Initiates drawing on this render target.

```cpp
void BeginDraw();
```

## <a name="clear"></a> CRenderTarget::Clear

Clears the drawing area to the specified color.

```cpp
void Clear(D2D1_COLOR_F color);
```

### Parameters

*color*<br/>
The color to which the drawing area is cleared.

## <a name="colorref_to_d2dcolor"></a> CRenderTarget::COLORREF_TO_D2DCOLOR

Converts GDI color and alpha values to the D2D1_COLOR_F object.

```
static D2D1_COLOR_F COLORREF_TO_D2DCOLOR(
    COLORREF color,
    int nAlpha = 255);
```

### Parameters

*color*<br/>
RGB value.

*nAlpha*

### Return Value

D2D1_COLOR_F value.

## <a name="createcompatiblerendertarget"></a> CRenderTarget::CreateCompatibleRenderTarget

Creates a new bitmap render target for use during intermediate offscreen drawing that is compatible with the current render target .

```
BOOL CreateCompatibleRenderTarget(
    CBitmapRenderTarget& bitmapTarget,
    CD2DSizeF sizeDesired = CD2DSizeF(0., 0.),
    CD2DSizeU sizePixelDesired = CD2DSizeU(0, 0),
    D2D1_PIXEL_FORMAT* desiredFormat = NULL,
    D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS options = D2D1_COMPATIBLE_RENDER_TARGET_OPTIONS_NONE);
```

### Parameters

*bitmapTarget*<br/>
When this method returns, contains the address of a pointer to a new bitmap render target. This parameter is passed uninitialized.

*sizeDesired*<br/>
The desired size of the new render target in device-independent pixels if it should be different from the original render target, or NULL. For more information, see the Remarks section.

*sizePixelDesired*<br/>
The desired size of the new render target in pixels if it should be different from the original render target, or NULL. For more information, see the Remarks section.

*desiredFormat*<br/>
The desired pixel format and alpha mode of the new render target, or NULL. If the pixel format is set to DXGI_FORMAT_UNKNOWN or if this parameter is null, the new render target uses the same pixel format as the original render target. If the alpha mode is D2D1_ALPHA_MODE_UNKNOWN or this parameter is NULL, the alpha mode of the new render target defaults to D2D1_ALPHA_MODE_PREMULTIPLIED. For information about supported pixel formats, see Supported Pixel Formats and Alpha Modes.

*options*<br/>
A value that specifies whether the new render target must be compatible with GDI.

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE.

## <a name="crendertarget"></a> CRenderTarget::CRenderTarget

Constructs a CRenderTarget object.

```
CRenderTarget();
```

## <a name="destroy"></a> CRenderTarget::Destroy

Deletes one or more resources

```
BOOL Destroy(BOOL bDeleteResources = TRUE);
```

### Parameters

*bDeleteResources*<br/>
If bDeleteResources is TRUE, all resources located in m_lstResources will be automatically destroyed.

### Return Value

If the method succeeds, it returns TRUE. Otherwise, it returns FALSE

## <a name="detach"></a> CRenderTarget::Detach

Detaches render target interface from the object

```
ID2D1RenderTarget* Detach ();
```

### Return Value

Pointer to detached render target interface.

## <a name="drawbitmap"></a> CRenderTarget::DrawBitmap

Draws the formatted text described by the specified IDWriteTextLayout object.

```cpp
void DrawBitmap(
    CD2DBitmap* pBitmap,
    const CD2DRectF& rectDest,
    float fOpacity = 1.0,
    D2D1_BITMAP_INTERPOLATION_MODE interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR,
    const CD2DRectF* pRectSrc = NULL);
```

### Parameters

*pBitmap*<br/>
The bitmap to render.

*rectDest*<br/>
The size and position, in device-independent pixels in the render target's coordinate space, of the area to which the bitmap is drawn. If the rectangle is not well-ordered, nothing is drawn, but the render target does not enter an error state.

*fOpacity*<br/>
A value between 0.0f and 1.0f, inclusive, that specifies an opacity value to apply to the bitmap; this value is multiplied against the alpha values of the bitmap's contents.

*interpolationMode*<br/>
The interpolation mode to use if the bitmap is scaled or rotated by the drawing operation.

*pRectSrc*<br/>
The size and position, in device-independent pixels in the bitmap's coordinate space, of the area within the bitmap to draw.

## <a name="drawellipse"></a> CRenderTarget::DrawEllipse

Draws the outline of the specified ellipse using the specified stroke style.

```cpp
void DrawEllipse(
    const CD2DEllipse& ellipse,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### Parameters

*ellipse*<br/>
The position and radius of the ellipse to draw, in device-independent pixels.

*pBrush*<br/>
The brush used to paint the ellipse's outline.

*fStrokeWidth*<br/>
The thickness of the ellipse's stroke. The stroke is centered on the ellipse's outline.

*strokeStyle*<br/>
The style of stroke to apply to the ellipse's outline, or NULL to paint a solid stroke.

## <a name="drawgeometry"></a> CRenderTarget::DrawGeometry

Draws the outline of the specified geometry using the specified stroke style.

```cpp
void DrawGeometry(
    CD2DGeometry* pGeometry,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### Parameters

*pGeometry*<br/>
The geometry to draw.

*pBrush*<br/>
The brush used to paint the geometry's stroke.

*fStrokeWidth*<br/>
The thickness of the geometry's stroke. The stroke is centered on the geometry's outline.

*strokeStyle*<br/>
The style of stroke to apply to the geometry's outline, or NULL to paint a solid stroke.

## <a name="drawglyphrun"></a> CRenderTarget::DrawGlyphRun

Draws the specified glyphs.

```cpp
void DrawGlyphRun(
    const CD2DPointF& ptBaseLineOrigin,
    const DWRITE_GLYPH_RUN& glyphRun,
    CD2DBrush* pForegroundBrush,
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```

### Parameters

*ptBaseLineOrigin*<br/>
The origin, in device-independent pixels, of the glyphs' baseline.

*glyphRun*<br/>
The glyphs to render.

*pForegroundBrush*<br/>
The brush used to paint the specified glyphs.

*measuringMode*<br/>
A value that indicates how glyph metrics are used to measure text when it is formatted. The default value is DWRITE_MEASURING_MODE_NATURAL.

## <a name="drawline"></a> CRenderTarget::DrawLine

Draws a line between the specified points using the specified stroke style.

```cpp
void DrawLine(
    const CD2DPointF& ptFrom,
    const CD2DPointF& ptTo,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### Parameters

*ptFrom*<br/>
The start point of the line, in device-independent pixels.

*ptTo*<br/>
The end point of the line, in device-independent pixels.

*pBrush*<br/>
The brush used to paint the line's stroke.

*fStrokeWidth*<br/>
A value greater than or equal to 0.0f that specifies the width of the stroke. If this parameter isn't specified, it defaults to 1.0f. The stroke is centered on the line.

*strokeStyle*<br/>
The style of stroke to paint, or NULL to paint a solid line.

## <a name="drawrectangle"></a> CRenderTarget::DrawRectangle

Draws the outline of a rectangle that has the specified dimensions and stroke style.

```cpp
void DrawRectangle(
    const CD2DRectF& rectangle,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### Parameters

*rectangle*<br/>
The dimensions of the rectangle to draw, in device-independent pixels

*pBrush*<br/>
The brush used to paint the rectangle's stroke

*fStrokeWidth*<br/>
A value greater than or equal to 0.0f that specifies the width of the rectangle's stroke. The stroke is centered on the rectangle's outline.

*strokeStyle*<br/>
The style of stroke to paint, or NULL to paint a solid stroke.

## <a name="drawroundedrectangle"></a> CRenderTarget::DrawRoundedRectangle

Draws the outline of the specified rounded rectangle using the specified stroke style.

```cpp
void DrawRoundedRectangle(
    const CD2DRoundedRect& rectRounded,
    CD2DBrush* pBrush,
    FLOAT fStrokeWidth = 1.0,
    ID2D1StrokeStyle* strokeStyle = NULL);
```

### Parameters

*rectRounded*<br/>
The dimensions of the rounded rectangle to draw, in device-independent pixels.

*pBrush*<br/>
The brush used to paint the rounded rectangle's outline.

*fStrokeWidth*<br/>
The width of the rounded rectangle's stroke. The stroke is centered on the rounded rectangle's outline. The default value is 1.0f.

*strokeStyle*<br/>
The style of the rounded rectangle's stroke, or NULL to paint a solid stroke. The default value is NULL.

## <a name="drawtext"></a> CRenderTarget::DrawText

Draws the specified text using the format information provided by an IDWriteTextFormat object.

```cpp
void DrawText(
    const CString& strText,
    const CD2DRectF& rectangle,
    CD2DBrush* pForegroundBrush,
    CD2DTextFormat* textFormat = NULL,
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE,
    DWRITE_MEASURING_MODE measuringMode = DWRITE_MEASURING_MODE_NATURAL);
```

### Parameters

*strText*<br/>
A pointer to an array of Unicode characters to draw.

*rectangle*<br/>
The size and position of the area in which the text is drawn.

*pForegroundBrush*<br/>
The brush used to paint the text.

*textFormat*<br/>
An object that describes formatting details of the text to draw, such as the font, the font size, and flow direction.

*options*<br/>
A value that indicates whether the text should be snapped to pixel boundaries and whether the text should be clipped to the layout rectangle. The default value is D2D1_DRAW_TEXT_OPTIONS_NONE, which indicates that text should be snapped to pixel boundaries and it should not be clipped to the layout rectangle.

*measuringMode*<br/>
A value that indicates how glyph metrics are used to measure text when it is formatted. The default value is DWRITE_MEASURING_MODE_NATURAL.

## <a name="drawtextlayout"></a> CRenderTarget::DrawTextLayout

Draws the formatted text described by the specified IDWriteTextLayout object.

```cpp
void DrawTextLayout(
    const CD2DPointF& ptOrigin,
    CD2DTextLayout* textLayout,
    CD2DBrush* pBrushForeground,
    D2D1_DRAW_TEXT_OPTIONS options = D2D1_DRAW_TEXT_OPTIONS_NONE);
```

### Parameters

*ptOrigin*<br/>
The point, described in device-independent pixels, at which the upper-left corner of the text described by textLayout is drawn.

*textLayout*<br/>
The formatted text to draw. Any drawing effects that do not inherit from ID2D1Resource are ignored. If there are drawing effects that inherit from ID2D1Resource that are not brushes, this method fails and the render target is put in an error state.

*pBrushForeground*<br/>
The brush used to paint any text in textLayout that does not already have a brush associated with it as a drawing effect (specified by the IDWriteTextLayout::SetDrawingEffect method).

*options*<br/>
A value that indicates whether the text should be snapped to pixel boundaries and whether the text should be clipped to the layout rectangle. The default value is D2D1_DRAW_TEXT_OPTIONS_NONE, which indicates that text should be snapped to pixel boundaries and it should not be clipped to the layout rectangle.

## <a name="enddraw"></a> CRenderTarget::EndDraw

Ends drawing operations on the render target and indicates the current error state and associated tags.

```
HRESULT EndDraw();
```

### Return Value

If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.

## <a name="fillellipse"></a> CRenderTarget::FillEllipse

Paints the interior of the specified ellipse.

```cpp
void FillEllipse(
    const CD2DEllipse& ellipse,
    CD2DBrush* pBrush);
```

### Parameters

*ellipse*<br/>
The position and radius, in device-independent pixels, of the ellipse to paint.

*pBrush*<br/>
The brush used to paint the interior of the ellipse.

## <a name="fillgeometry"></a> CRenderTarget::FillGeometry

Paints the interior of the specified geometry.

```cpp
void FillGeometry(
    CD2DGeometry* pGeometry,
    CD2DBrush* pBrush,
    CD2DBrush* pOpacityBrush = NULL);
```

### Parameters

*pGeometry*<br/>
The geometry to paint.

*pBrush*<br/>
The brush used to paint the geometry's interior.

*pOpacityBrush*<br/>
The opacity mask to apply to the geometry;NULL for no opacity mask. If an opacity mask (the opacityBrush parameter) is specified, brush must be an ID2D1BitmapBrush that has its x- and y-extend modes set to D2D1_EXTEND_MODE_CLAMP. For more information, see the Remarks section.

## <a name="fillmesh"></a> CRenderTarget::FillMesh

Paints the interior of the specified mesh.

```cpp
void FillMesh(
    CD2DMesh* pMesh,
    CD2DBrush* pBrush);
```

### Parameters

*pMesh*<br/>
The mesh to paint.

*pBrush*<br/>
The brush used to paint the mesh.

## <a name="fillopacitymask"></a> CRenderTarget::FillOpacityMask

Applies the opacity mask described by the specified bitmap to a brush and uses that brush to paint a region of the render target.

```cpp
void FillOpacityMask(
    CD2DBitmap* pOpacityMask,
    CD2DBrush* pBrush,
    D2D1_OPACITY_MASK_CONTENT content,
    const CD2DRectF& rectDest,
    const CD2DRectF& rectSrc);
```

### Parameters

*pOpacityMask*<br/>
The position and radius, in device-independent pixels, of the ellipse to paint.

*pBrush*<br/>
The brush used to paint the region of the render target specified by destinationRectangle.

*content*<br/>
The type of content the opacity mask contains. The value is used to determine the color space in which the opacity mask is blended.

*rectDest*<br/>
The region of the render target to paint, in device-independent pixels.

*rectSrc*<br/>
The region of the bitmap to use as the opacity mask, in device-independent pixels.

## <a name="fillrectangle"></a> CRenderTarget::FillRectangle

Paints the interior of the specified rectangle.

```cpp
void FillRectangle(
    const CD2DRectF& rectangle,
    CD2DBrush* pBrush);
```

### Parameters

*rectangle*<br/>
The dimension of the rectangle to paint, in device-independent pixels.

*pBrush*<br/>
The brush used to paint the rectangle's interior.

## <a name="fillroundedrectangle"></a> CRenderTarget::FillRoundedRectangle

Paints the interior of the specified rounded rectangle.

```cpp
void FillRoundedRectangle(
    const CD2DRoundedRect& rectRounded,
    CD2DBrush* pBrush);
```

### Parameters

*rectRounded*<br/>
The dimensions of the rounded rectangle to paint, in device independent pixels.

*pBrush*<br/>
The brush used to paint the interior of the rounded rectangle.

## <a name="flush"></a> CRenderTarget::Flush

Executes all pending drawing commands.

```cpp
void Flush(
    D2D1_TAG* tag1 = NULL,
    D2D1_TAG* tag2 = NULL);
```

### Parameters

*tag1*<br/>
Contains the tag for drawing operations that caused errors or 0 if there were no errors. This parameter is passed uninitialized.

*tag2*<br/>
Contains the tag for drawing operations that caused errors or 0 if there were no errors. This parameter is passed uninitialized.

## <a name="getantialiasmode"></a> CRenderTarget::GetAntialiasMode

Retrieves the current antialiasing mode for nontext drawing operations.

```
D2D1_ANTIALIAS_MODE GetAntialiasMode() const;
```

### Return Value

Current antialiasing mode for nontext drawing operations.

## <a name="getdpi"></a> CRenderTarget::GetDpi

Returns the render target's dots per inch (DPI)

```
CD2DSizeF GetDpi() const;
```

### Return Value

The render target's dots per inch (DPI).

## <a name="getmaximumbitmapsize"></a> CRenderTarget::GetMaximumBitmapSize

Gets the maximum size, in device-dependent units (pixels), of any one bitmap dimension supported by the render target

```
UINT32 GetMaximumBitmapSize() const;
```

### Return Value

The maximum size, in pixels, of any one bitmap dimension supported by the render target

## <a name="getpixelformat"></a> CRenderTarget::GetPixelFormat

Retrieves the pixel format and alpha mode of the render target

```
D2D1_PIXEL_FORMAT GetPixelFormat() const;
```

### Return Value

The pixel format and alpha mode of the render target

## <a name="getpixelsize"></a> CRenderTarget::GetPixelSize

Returns the size of the render target in device pixels

```
CD2DSizeU GetPixelSize() const;
```

### Return Value

The size of the render target in device pixels

## <a name="getrendertarget"></a> CRenderTarget::GetRenderTarget

Returns ID2D1RenderTarget interface

```
ID2D1RenderTarget* GetRenderTarget();
```

### Return Value

Pointer to an ID2D1RenderTarget interface or NULL if object is not initialized yet.

## <a name="getsize"></a> CRenderTarget::GetSize

Returns the size of the render target in device-independent pixels

```
CD2DSizeF GetSize() const;
```

### Return Value

The current size of the render target in device-independent pixels

## <a name="gettags"></a> CRenderTarget::GetTags

Gets the label for subsequent drawing operations.

```cpp
void GetTags(
    D2D1_TAG* tag1 = NULL,
    D2D1_TAG* tag2 = NULL) const;
```

### Parameters

*tag1*<br/>
Contains the first label for subsequent drawing operations. This parameter is passed uninitialized. If NULL is specified, no value is retrieved for this parameter.

*tag2*<br/>
Contains the second label for subsequent drawing operations. This parameter is passed uninitialized. If NULL is specified, no value is retrieved for this parameter.

## <a name="gettextantialiasmode"></a> CRenderTarget::GetTextAntialiasMode

Gets the current antialiasing mode for text and glyph drawing operations.

```
D2D1_TEXT_ANTIALIAS_MODE GetTextAntialiasMode() const;
```

### Return Value

Current antialiasing mode for text and glyph drawing operations.

## <a name="gettextrenderingparams"></a> CRenderTarget::GetTextRenderingParams

Retrieves the render target's current text rendering options.

```cpp
void GetTextRenderingParams(IDWriteRenderingParams** textRenderingParams);
```

### Parameters

*textRenderingParams*<br/>
When this method returns, textRenderingParamscontains the address of a pointer to the render target's current text rendering options.

## <a name="gettransform"></a> CRenderTarget::GetTransform

Gets the current transform of the render target.

```cpp
void GetTransform(D2D1_MATRIX_3X2_F* transform);
```

### Parameters

*transform*<br/>
When this returns, contains the current transform of the render target. This parameter is passed uninitialized.

## <a name="issupported"></a> CRenderTarget::IsSupported

Indicates whether the render target supports the specified properties

```
BOOL IsSupported(const D2D1_RENDER_TARGET_PROPERTIES& renderTargetProperties) const;
```

### Parameters

*renderTargetProperties*<br/>
The render target properties to test

### Return Value

TRUE if the specified render target properties are supported by this render target; otherwise, FALSE

## <a name="isvalid"></a> CRenderTarget::IsValid

Checks resource validity

```
BOOL IsValid() const;
```

### Return Value

TRUE if resource is valid; otherwise FALSE.

## <a name="m_lstresources"></a> CRenderTarget::m_lstResources

A list of pointers to CD2DResource objects.

```
CObList m_lstResources;
```

## <a name="m_prendertarget"></a> CRenderTarget::m_pRenderTarget

A pointer to an ID2D1RenderTarget object.

```
ID2D1RenderTarget* m_pRenderTarget;
```

## <a name="m_ptextformatdefault"></a> CRenderTarget::m_pTextFormatDefault

A pointer to CD2DTextFormat object that contains a default text format.

```
CD2DTextFormat* m_pTextFormatDefault;
```

## <a name="operator_id2d1rendertarget_star"></a> CRenderTarget::operator ID2D1RenderTarget*

Returns ID2D1RenderTarget interface

```
operator ID2D1RenderTarget*();
```

### Return Value

Pointer to an ID2D1RenderTarget interface or NULL if object is not initialized yet.

## <a name="popaxisalignedclip"></a> CRenderTarget::PopAxisAlignedClip

Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.

```cpp
void PopAxisAlignedClip();
```

## <a name="poplayer"></a> CRenderTarget::PopLayer

Stops redirecting drawing operations to the layer that is specified by the last PushLayer call.

```cpp
void PopLayer();
```

## <a name="pushaxisalignedclip"></a> CRenderTarget::PushAxisAlignedClip

Removes the last axis-aligned clip from the render target. After this method is called, the clip is no longer applied to subsequent drawing operations.

```cpp
void PushAxisAlignedClip(
    const CD2DRectF& rectClip,
    D2D1_ANTIALIAS_MODE mode = D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
```

### Parameters

*rectClip*<br/>
The size and position of the clipping area, in device-independent pixels.

*mode*<br/>
The antialiasing mode that is used to draw the edges of clip rectangles that have subpixel boundaries, and to blend the clip with the scene contents. The blending is performed once when the PopAxisAlignedClip method is called, and does not apply to each primitive within the layer.

## <a name="pushlayer"></a> CRenderTarget::PushLayer

Adds the specified layer to the render target so that it receives all subsequent drawing operations until PopLayer is called.

```cpp
void PushLayer(
    const D2D1_LAYER_PARAMETERS& layerParameters,
    CD2DLayer& layer);
```

### Parameters

*layerParameters*<br/>
The content bounds, geometric mask, opacity, opacity mask, and antialiasing options for the layer.

*layer*<br/>
The layer that receives subsequent drawing operations.

## <a name="restoredrawingstate"></a> CRenderTarget::RestoreDrawingState

Sets the render target's drawing state to that of the specified ID2D1DrawingStateBlock.

```cpp
void RestoreDrawingState(ID2D1DrawingStateBlock& drawingStateBlock);
```

### Parameters

*drawingStateBlock*<br/>
The new drawing state of the render target.

## <a name="savedrawingstate"></a> CRenderTarget::SaveDrawingState

Saves the current drawing state to the specified ID2D1DrawingStateBlock.

```cpp
void SaveDrawingState(ID2D1DrawingStateBlock& drawingStateBlock) const;
```

### Parameters

*drawingStateBlock*<br/>
When this method returns, contains the current drawing state of the render target. This parameter must be initialized before passing it to the method.

## <a name="setantialiasmode"></a> CRenderTarget::SetAntialiasMode

Sets the antialiasing mode of the render target. The antialiasing mode applies to all subsequent drawing operations, excluding text and glyph drawing operations.

```cpp
void SetAntialiasMode(D2D1_ANTIALIAS_MODE antialiasMode);
```

### Parameters

*antialiasMode*<br/>
The antialiasing mode for future drawing operations.

## <a name="setdpi"></a> CRenderTarget::SetDpi

Sets the dots per inch (DPI) of the render target.

```cpp
void SetDpi(const CD2DSizeF& sizeDPI);
```

### Parameters

*sizeDPI*<br/>
A value greater than or equal to zero that specifies the horizontal/verticalDPI of the render target.

## <a name="settags"></a> CRenderTarget::SetTags

Specifies a label for subsequent drawing operations.

```cpp
void SetTags(
    D2D1_TAG tag1,
    D2D1_TAG tag2);
```

### Parameters

*tag1*<br/>
A label to apply to subsequent drawing operations.

*tag2*<br/>
A label to apply to subsequent drawing operations.

## <a name="settextantialiasmode"></a> CRenderTarget::SetTextAntialiasMode

Specifies the antialiasing mode to use for subsequent text and glyph drawing operations.

```cpp
void SetTextAntialiasMode(D2D1_TEXT_ANTIALIAS_MODE textAntialiasMode);
```

### Parameters

*textAntialiasMode*<br/>
The antialiasing mode to use for subsequent text and glyph drawing operations.

## <a name="settextrenderingparams"></a> CRenderTarget::SetTextRenderingParams

Specifies text rendering options to be applied to all subsequent text and glyph drawing operations.

```cpp
void SetTextRenderingParams(IDWriteRenderingParams* textRenderingParams = NULL);
```

### Parameters

*textRenderingParams*<br/>
The text rendering options to be applied to all subsequent text and glyph drawing operations; NULL to clear current text rendering options.

## <a name="settransform"></a> CRenderTarget::SetTransform

Applies the specified transform to the render target, replacing the existing transformation. All subsequent drawing operations occur in the transformed space.

```cpp
void SetTransform(const D2D1_MATRIX_3X2_F* transform);
void SetTransform(const D2D1_MATRIX_3X2_F& transform);
```

### Parameters

*transform*<br/>
The transform to apply to the render target.

## <a name="verifyresource"></a> CRenderTarget::VerifyResource

Verifies CD2DResource object validity; creates the object if it didn't already exist.

```
BOOL VerifyResource(CD2DResource* pResource);
```

### Parameters

*pResource*<br/>
Pointer to CD2DResource object.

### Return Value

TRUE is object if valid; otherwise FALSE.

## See also

[Classes](../../mfc/reference/mfc-classes.md)
