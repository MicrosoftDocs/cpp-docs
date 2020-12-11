---
description: "Learn more about: CDrawingManager Class"
title: "CDrawingManager Class"
ms.date: "11/04/2016"
f1_keywords: ["CDrawingManager", "AFXDRAWMANAGER/CDrawingManager", "AFXDRAWMANAGER/CDrawingManager::CDrawingManager", "AFXDRAWMANAGER/CDrawingManager::CreateBitmap_32", "AFXDRAWMANAGER/CDrawingManager::DrawAlpha", "AFXDRAWMANAGER/CDrawingManager::DrawRotated", "AFXDRAWMANAGER/CDrawingManager::DrawEllipse", "AFXDRAWMANAGER/CDrawingManager::DrawGradientRing", "AFXDRAWMANAGER/CDrawingManager::DrawRect", "AFXDRAWMANAGER/CDrawingManager::DrawShadow", "AFXDRAWMANAGER/CDrawingManager::Fill4ColorsGradient", "AFXDRAWMANAGER/CDrawingManager::FillGradient", "AFXDRAWMANAGER/CDrawingManager::FillGradient2", "AFXDRAWMANAGER/CDrawingManager::GrayRect", "AFXDRAWMANAGER/CDrawingManager::HighlightRect", "AFXDRAWMANAGER/CDrawingManager::HLStoRGB_ONE", "AFXDRAWMANAGER/CDrawingManager::HLStoRGB_TWO", "AFXDRAWMANAGER/CDrawingManager::HSVtoRGB", "AFXDRAWMANAGER/CDrawingManager::HuetoRGB", "AFXDRAWMANAGER/CDrawingManager::MirrorRect", "AFXDRAWMANAGER/CDrawingManager::PixelAlpha", "AFXDRAWMANAGER/CDrawingManager::PrepareShadowMask", "AFXDRAWMANAGER/CDrawingManager::RGBtoHSL", "AFXDRAWMANAGER/CDrawingManager::RGBtoHSV", "AFXDRAWMANAGER/CDrawingManager::SetAlphaPixel", "AFXDRAWMANAGER/CDrawingManager::SetPixel", "AFXDRAWMANAGER/CDrawingManager::SmartMixColors"]
helpviewer_keywords: ["CDrawingManager [MFC], CDrawingManager", "CDrawingManager [MFC], CreateBitmap_32", "CDrawingManager [MFC], DrawAlpha", "CDrawingManager [MFC], DrawRotated", "CDrawingManager [MFC], DrawEllipse", "CDrawingManager [MFC], DrawGradientRing", "CDrawingManager [MFC], DrawRect", "CDrawingManager [MFC], DrawShadow", "CDrawingManager [MFC], Fill4ColorsGradient", "CDrawingManager [MFC], FillGradient", "CDrawingManager [MFC], FillGradient2", "CDrawingManager [MFC], GrayRect", "CDrawingManager [MFC], HighlightRect", "CDrawingManager [MFC], HLStoRGB_ONE", "CDrawingManager [MFC], HLStoRGB_TWO", "CDrawingManager [MFC], HSVtoRGB", "CDrawingManager [MFC], HuetoRGB", "CDrawingManager [MFC], MirrorRect", "CDrawingManager [MFC], PixelAlpha", "CDrawingManager [MFC], PrepareShadowMask", "CDrawingManager [MFC], RGBtoHSL", "CDrawingManager [MFC], RGBtoHSV", "CDrawingManager [MFC], SetAlphaPixel", "CDrawingManager [MFC], SetPixel", "CDrawingManager [MFC], SmartMixColors"]
ms.assetid: 9e4775ca-101b-4aa9-a85a-4d047c701215
---
# CDrawingManager Class

The `CDrawingManager` class implements complex drawing algorithms.

## Syntax

```
class CDrawingManager : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDrawingManager::CDrawingManager](#cdrawingmanager)|Constructs a `CDrawingManager` object.|
|`CDrawingManager::~CDrawingManager`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDrawingManager::CreateBitmap_32](#createbitmap_32)|Creates a 32-bit device-independent bitmap (DIB) that applications can write to directly.|
|[CDrawingManager::DrawAlpha](#drawalpha)|Displays bitmaps that have transparent or semitransparent pixels.|
|[CDrawingManager::DrawRotated](#drawrotated)|Rotates a source DC content inside the given rectangle by +/- 90 degrees|
|[CDrawingManager::DrawEllipse](#drawellipse)|Draws an ellipse with the supplied fill and border colors.|
|[CDrawingManager::DrawGradientRing](#drawgradientring)|Draws a ring and fills it with a color gradient.|
|[CDrawingManager::DrawLine, CDrawingManager::DrawLineA](#drawline_cdrawingmanager__drawlinea)|Draws a line.|
|[CDrawingManager::DrawRect](#drawrect)|Draws a rectangle with the supplied fill and border colors.|
|[CDrawingManager::DrawShadow](#drawshadow)|Draws a shadow for a rectangular area.|
|[CDrawingManager::Fill4ColorsGradient](#fill4colorsgradient)|Fills a rectangular area with two color gradients.|
|[CDrawingManager::FillGradient](#fillgradient)|Fills a rectangular area with a specified color gradient.|
|[CDrawingManager::FillGradient2](#fillgradient2)|Fills a rectangular area with a specified color gradient. The direction of the gradient's color change is also specified.|
|[CDrawingManager::GrayRect](#grayrect)|Fills a rectangle with a specified gray color.|
|[CDrawingManager::HighlightRect](#highlightrect)|Highlights a rectangular area.|
|[CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)|Converts a color from a HLS representation to a RGB representation.|
|[CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)|Converts a color from a HLS representation to a RGB representation.|
|[CDrawingManager::HSVtoRGB](#hsvtorgb)|Converts a color from a HSV representation to a RGB representation.|
|[CDrawingManager::HuetoRGB](#huetorgb)|Helper method that converts a hue value to a red, green, or blue component.|
|[CDrawingManager::MirrorRect](#mirrorrect)|Flips a rectangular area.|
|[CDrawingManager::PixelAlpha](#pixelalpha)|Helper method that determines the final color for a semitransparent pixel.|
|[CDrawingManager::PrepareShadowMask](#prepareshadowmask)|Creates a bitmap that can be used as a shadow.|
|[CDrawingManager::RGBtoHSL](#rgbtohsl)|Converts a color from a RGB representation to a HSL representation.|
|[CDrawingManager::RGBtoHSV](#rgbtohsv)|Converts a color from a RGB representation to a HSV representation.|
|[CDrawingManager::SetAlphaPixel](#setalphapixel)|Helper method that colors a partially transparent pixel in a bitmap.|
|[CDrawingManager::SetPixel](#setpixel)|Helper method that changes a single pixel in a bitmap to the specified color.|
|[CDrawingManager::SmartMixColors](#smartmixcolors)|Combines two colors based on a weighted ratio.|

## Remarks

The `CDrawingManager` class provides functions for drawing shadows, color gradients, and highlighted rectangles. It also performs alpha-blending. You can use this class to directly change your application's UI.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)<br/>
`CDrawingManager`

## Requirements

**Header:** afxdrawmanager.h

## <a name="cdrawingmanager"></a> CDrawingManager::CDrawingManager

Constructs a [CDrawingManager](../../mfc/reference/cdrawingmanager-class.md) object.

```
CDrawingManager(CDC& dc);
```

### Parameters

*dc*<br/>
[in] A reference to a device context. The `CDrawingManager` uses this context for drawing.

## <a name="createbitmap_32"></a> CDrawingManager::CreateBitmap_32

Creates a 32-bit device-independent bitmap (DIB) that applications can write to directly.

```
static HBITMAP __stdcall CreateBitmap_32(
    const CSize& size,
    void** pBits);

static HBITMAP __stdcall CreateBitmap_32(
    HBITMAP bitmap,
    COLORREF clrTransparent = -1);
```

### Parameters

*size*\
[in] A [CSize](../../atl-mfc-shared/reference/csize-class.md) parameter that indicates the size of the bitmap.

*pBits*\
[out] A pointer to a data pointer that receives the location of the DIB's bit values.

*bitmap*\
A handle to the original bitmap

*clrTransparent*\
An RGB value specifying transparent color of the original bitmap.

### Return Value

A handle to the newly created DIB bitmap if this method is successful; otherwise NULL.

### Remarks

For more information about how to create a DIB bitmap, see [CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibitmap).

## <a name="drawalpha"></a> CDrawingManager::DrawAlpha

Displays bitmaps that have transparent or semitransparent pixels.

```cpp
void DrawAlpha(
    CDC* pDstDC,
    const CRect& rectDst,
    CDC* pSrcDC,
    const CRect& rectSrc);
```

### Parameters

*pDstDC*<br/>
[in] A pointer to the device context for the destination.

*rectDst*<br/>
[in] The destination rectangle.

*pSrcDC*<br/>
[in] A pointer to the device context for the source.

*rectSrc*<br/>
[in] The source rectangle.

### Remarks

This method performs alpha-blending for two bitmaps. For more information about alpha-blending, see [AlphaBlend](/windows/win32/api/wingdi/nf-wingdi-alphablend) in the Windows SDK.

## <a name="drawellipse"></a> CDrawingManager::DrawEllipse

Draws an ellipse with the supplied fill and border colors.

```cpp
void DrawEllipse(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### Parameters

*rect*<br/>
[in] The bounding rectangle for the ellipse.

*clrFill*<br/>
[in] The color this method uses to fill the ellipse.

*clrLine*<br/>
[in] The color this method uses as the border of the ellipse.

### Remarks

This method returns without drawing an ellipse if either color is set to -1. It also returns without drawing an ellipse if either dimension of the bounding rectangle is 0.

## <a name="drawgradientring"></a> CDrawingManager::DrawGradientRing

Draws a ring and fills it with a color gradient.

```
BOOL DrawGradientRing(
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    COLORREF colorBorder,
    int nAngle,
    int nWidth,
    COLORREF clrFace = (COLORREF)-1);
```

### Parameters

*rect*<br/>
[in] A [CRect](../../atl-mfc-shared/reference/crect-class.md) parameter that specifies the boundary for the gradient ring.

*colorStart*<br/>
[in] The first color for the gradient.

*colorFinish*<br/>
[in] The last color for the gradient.

*colorBorder*<br/>
[in] The color of the border.

*nAngle*<br/>
[in] A parameter that specifies the initial gradient drawing angle. This value should be between 0 and 360.

*nWidth*<br/>
[in] The width of the border for the ring.

*clrFace*<br/>
[in] The color of the interior of the ring.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The rectangle defined by *rect* must be at least 5 pixels wide and 5 pixels high.

## <a name="drawline_cdrawingmanager__drawlinea"></a> CDrawingManager::DrawLine, CDrawingManager::DrawLineA

Draws a line.

```cpp
void DrawLine(
    int x1,
    int y1,
    int x2,
    int y2,
    COLORREF clrLine);

void DrawLineA(
    double x1,
    double y1,
    double x2,
    double y2,
    COLORREF clrLine);
```

### Parameters

*x1*\
[in] The x coordinate where the line starts.

*y1*\
[in] The y coordinate where the line starts.

*x2*\
[in] The x coordinate where the line ends.

*y2*\
[in] The y coordinate where the line ends.

*clrLine*\
[in] The color of the line.

### Remarks

This method fails if *clrLine* equals -1.

## <a name="drawrect"></a> CDrawingManager::DrawRect

Draws a rectangle with the supplied fill and border colors.

```cpp
void DrawRect(
    const CRect& rect,
    COLORREF clrFill,
    COLORREF clrLine);
```

### Parameters

*rect*<br/>
[in] The boundaries for the rectangle.

*clrFill*<br/>
[in] The color this method uses to fill the rectangle.

*clrLine*<br/>
[in] The color this method uses for the border of the rectangle.

### Remarks

This method returns without drawing a rectangle if either color is set to -1. It also returns if either dimension of the rectangle is 0.

## <a name="drawshadow"></a> CDrawingManager::DrawShadow

Draws a shadow for a rectangular area.

```
BOOL DrawShadow(
    CRect rect,
    int nDepth,
    int iMinBrightness = 100,
    int iMaxBrightness = 50,
    CBitmap* pBmpSaveBottom = NULL,
    CBitmap* pBmpSaveRight = NULL,
    COLORREF clrBase = (COLORREF)-1,
    BOOL bRightShadow = TRUE);
```

### Parameters

*rect*<br/>
[in] A rectangular area in your application. The drawing manager will draw a shadow underneath this area.

*nDepth*<br/>
[in] The width and height of the shadow.

*iMinBrightness*<br/>
[in] The minimum brightness of the shadow.

*iMaxBrightness*<br/>
[in] The maximum brightness of the shadow.

*pBmpSaveBottom*<br/>
[in] A pointer to a bitmap that contains the image for the bottom part of the shadow.

*pBmpSaveRight*<br/>
[in] A pointer to a bitmap that contains the image for the shadow that is drawn on the right side of the rectangle.

*clrBase*<br/>
[in] The color of the shadow.

*bRightShadow*<br/>
[in] A Boolean parameter that indicates how the shadow is drawn. If *bRightShadow* is `TRUE`, `DrawShadow` draws a shadow on the right side of the rectangle.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

You can provide two valid bitmaps for the bottom and right shadows by using the parameters *pBmpSaveBottom* and *pBmpSaveRight*. If these [CBitmap](../../mfc/reference/cbitmap-class.md) objects have an attached GDI object, `DrawShadow` will use those bitmaps as the shadows. If the `CBitmap` parameters do not have an attached GDI object, `DrawShadow` draws the shadow and attaches the bitmaps to the parameters. In future calls to `DrawShadow`, you can provide these bitmaps to speed up the drawing process. For more information about the `CBitmap` class and GDI objects, see [Graphic Objects](../../mfc/graphic-objects.md).

If either of these parameters is `NULL`, `DrawShadow` will automatically draw the shadow.

If you set *bRightShadow* to FALSE, the shadow will be drawn underneath and to the left of the rectangular area.

### Example

The following example demonstrates how to use the `DrawShadow` method of the `CDrawingManager` class. This code snippet is part of the [Prop Sheet Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_PropSheetDemo#1](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_1.cpp)]

## <a name="fill4colorsgradient"></a> CDrawingManager::Fill4ColorsGradient

Fills a rectangular area with two color gradients.

```cpp
void Fill4ColorsGradient(
    CRect rect,
    COLORREF colorStart1,
    COLORREF colorFinish1,
    COLORREF colorStart2,
    COLORREF colorFinish2,
    BOOL bHorz = TRUE,
    int nPercentage = 50);
```

### Parameters

*rect*<br/>
[in] The rectangle to fill.

*colorStart1*<br/>
[in] The initial color for the first color gradient.

*colorFinish1*<br/>
[in] The final color for the first color gradient.

*colorStart2*<br/>
[in] The initial color for the second color gradient.

*colorFinish2*<br/>
[in] The final color for the second color gradient.

*bHorz*<br/>
[in] A Boolean parameter that indicates whether `Fill4ColorsGradient` colors a horizontal or vertical gradient. TRUE indicates a horizontal gradient.

*nPercentage*<br/>
[in] An integer from 0-100. This value indicates the percentage of the rectangle to fill with the first color gradient.

### Remarks

When a rectangle is filled with two color gradients, they are either located above each other or next to each other, depending on the value of *bHorz*. Each color gradient is calculated independently with the method [CDrawingManager::FillGradient](#fillgradient).

This method generates an assertion failure if *nPercentage* is less than 0 or more than 100.

## <a name="fillgradient"></a> CDrawingManager::FillGradient

Fills a rectangular area with the specified color gradient.

```cpp
void FillGradient(
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    BOOL bHorz = TRUE,
    int nStartFlatPercentage = 0,
    int nEndFlatPercentage = 0);
```

### Parameters

*rect*<br/>
[in] The rectangular area to fill.

*colorStart*<br/>
[in] The first color for the gradient.

*colorFinish*<br/>
[in] The final color for the gradient.

*bHorz*<br/>
[in] A Boolean parameter that specifies whether `FillGradient` should draw a horizontal or vertical gradient.

*nStartFlatPercentage*<br/>
[in] The percentage of the rectangle that `FillGradient` fills with *colorStart* before it starts the gradient.

*nEndFlatPercentage*<br/>
[in] The percentage of the rectangle that `FillGradient` fills with *colorFinish* after it finishes the gradient.

### Example

The following example demonstrates how to use the `FillGradient` method of the `CDrawingManager` class. This code snippet is part of the [MS Office 2007 Demo sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_MSOffice2007Demo#12](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_2.cpp)]

## <a name="fillgradient2"></a> CDrawingManager::FillGradient2

Fills a rectangular area with a specified color gradient.

```cpp
void FillGradient2 (
    CRect rect,
    COLORREF colorStart,
    COLORREF colorFinish,
    int nAngle = 0);
```

### Parameters

*rect*<br/>
[in] The rectangular area to fill.

*colorStart*<br/>
[in] The first color of the gradient.

*colorFinish*<br/>
[in] The last color of the gradient.

*nAngle*<br/>
[in] An integer between 0 and 360. This parameter specifies the direction of the color gradient.

### Remarks

Use *nAngle* to specify the direction of the color gradient. When you specify the direction of the color gradient, you also specify where the color gradient starts. A value of 0 for *nAngle* indicates the gradient starts from the top of the rectangle. As *nAngle* increases, the starting location for the gradient moves in a counter-clockwise direction based on the angle.

### Example

The following example demonstrates how to use the `FillGradient2` method of the `CDrawingManager` class. This code snippet is part of the [New Controls sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#37](../../mfc/reference/codesnippet/cpp/cdrawingmanager-class_3.cpp)]

## <a name="grayrect"></a> CDrawingManager::GrayRect

Fills a rectangle with a specified gray color.

```
BOOL GrayRect(
    CRect rect,
    int nPercentage = -1,
    COLORREF clrTransparent = (COLORREF)-1,
    COLORREF clrDisabled = (COLORREF)-1);
```

### Parameters

*rect*<br/>
[in] The rectangular area to fill.

*nPercentage*<br/>
[in] The percentage of gray you want in the rectangle.

*clrTransparent*<br/>
[in] The transparent color.

*clrDisabled*<br/>
[in] The color that this method uses for de-saturation if *nPercentage* is set to -1.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

For the parameter *nPercentage*, a lower value indicates a darker color.

The maximum value for *nPercentage* is 200. A value larger than 200 does not change the appearance of the rectangle. If the value is -1, this method uses *clrDisabled* to limit the saturation of the rectangle.

## <a name="highlightrect"></a> CDrawingManager::HighlightRect

Highlights a rectangular area.

```
BOOL HighlightRect(
    CRect rect,
    int nPercentage = -1,
    COLORREF clrTransparent = (COLORREF)-1,
    int nTolerance = 0,
    COLORREF clrBlend = (COLORREF)-1);
```

### Parameters

*rect*<br/>
[in] A rectangular area to highlight.

*nPercentage*<br/>
[in] A percentage that indicates how transparent the highlight should be.

*clrTransparent*<br/>
[in] The transparent color.

*nTolerance*<br/>
[in] An integer between 0 and 255 that indicates the color tolerance.

*clrBlend*<br/>
[in] The base color for blending.

### Return Value

TRUE if the method is successful; otherwise FALSE.

### Remarks

If *nPercentage* is between 0 and 99, `HighlightRect` uses the alpha blending algorithm. For more information about alpha blending, see [Alpha Blending Lines and Fills](/dotnet/framework/winforms/advanced/alpha-blending-lines-and-fills). If *nPercentage* is -1, this method uses the default highlight level. If *nPercentage* is 100, this method does nothing and returns TRUE.

The method uses the parameter *nTolerance* to determine whether to highlight the rectangular area. To highlight the rectangle, the difference between the background color of your application and *clrTransparent* must be less than *nTolerance* in each color component (red, green, and blue).

## <a name="hlstorgb_one"></a> CDrawingManager::HLStoRGB_ONE

Converts a color from a HLS representation to a RGB representation.

```
static COLORREF __stdcall HLStoRGB_ONE(
    double H,
    double L,
    double S);
```

### Parameters

*H*<br/>
[in] A number between 0 and 1 that represents the hue for the color.

*L*<br/>
[in] A number between 0 and 1 that indicates the luminosity for the color.

*S*<br/>
[in] A number between 0 and 1 that indicates the saturation for the color.

### Return Value

The RGB representation of the HLS color provided.

### Remarks

A color can be represented as HSV (hue, saturation, and value), HSL (hue, saturation, and luminosity), or RGB (red, green, and blue). For more information about the different representations of color, see [Color](/windows/win32/uxguide/vis-color).

This method and the `CDrawingManager::HLStoRGB_TWO` method perform the same operation, but require different values for the *H* parameter. In this method, *H* is a percentage of the circle. In the `CDrawingManager::HLStoRGB_TWO` method, *H* is a degree value between 0 and 360, which both represent red. For example, with `HLStoRGB_ONE`, a value of 0.25 for *H* is equivalent to a value of 90 with `HLStoRGB_TWO`.

## <a name="hlstorgb_two"></a> CDrawingManager::HLStoRGB_TWO

Converts a color from a HLS representation to a RGB representation.

```
static COLORREF __stdcall HLStoRGB_TWO(
    double H,
    double L,
    double S);
```

### Parameters

*H*<br/>
[in] A number between 0 and 360 that represents the hue for the color.

*L*<br/>
[in] A number between 0 and 1 that indicates the luminosity for the color.

*S*<br/>
[in] A number between 0 and 1 that indicates the saturation for the color.

### Return Value

The RGB representation of the HLS color provided.

### Remarks

A color can be represented as HSV (hue, saturation, and value), HSL (hue, saturation, and luminosity), or RGB (red, green, and blue). For more information about the different representations of color, see [Color](/windows/win32/uxguide/vis-color).

This method and the [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) method perform the same operation, but require different values for the *H* parameter. In this method, *H* is a degree value between 0 and 360, which both represent red. In the [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one) method, *H* is a percentage of the circle. For example, with `HLStoRGB_ONE`, a value of 0.25 for *H* is equivalent to a value of 90 with `HLStoRGB_TWO`.

## <a name="hsvtorgb"></a> CDrawingManager::HSVtoRGB

Converts a color from a HSV representation to a RGB representation.

```
static COLORREF __stdcall HSVtoRGB(
    double H,
    double S,
    double V);
```

### Parameters

*H*\
[in] A number between 0 and 360 that indicates the hue for the color.

*S*\
[in] A number between 0 and 1 that indicates the saturation for the color.

*V*\
[in] A number between 0 and 1 that indicates the value for the color.

### Return Value

The RGB representation of the HSV color provided.

### Remarks

A color can be represented as HSV (hue, saturation, and value), HSL (hue, saturation, and luminosity), or RGB (red, green, and blue). For more information about the different representations of color, see [Color](/windows/win32/uxguide/vis-color).

## <a name="huetorgb"></a> CDrawingManager::HuetoRGB

Converts a hue value to a red, green, or blue component.

```
static double __stdcall HuetoRGB(
    double m1,
    double m2,
    double h);

static BYTE __stdcall HueToRGB(
    float rm1,
    float rm2,
    float rh);
```

### Parameters

*m1*<br/>
[in] See Remarks.

*m2*<br/>
[in] See Remarks.

*h*<br/>
[in] See Remarks.

*rm1*<br/>
[in] See Remarks.

*rm2*<br/>
[in] See Remarks.

*rh*<br/>
[in] See Remarks.

### Return Value

The individual red, green, or blue component for the provided hue.

### Remarks

This method is a helper method that the `CDrawingManager` class uses to compute the individual red, green, and blue components of a color in a HSV or HSL representation. This method is not designed to be called directly by the programmer. The input parameters are values that depend on the conversion algorithm.

To convert a HSV or HSL color to a RGB representation, call one of the following methods:

- [CDrawingManager::HSVtoRGB](#hsvtorgb)

- [CDrawingManager::HLStoRGB_ONE](#hlstorgb_one)

- [CDrawingManager::HLStoRGB_TWO](#hlstorgb_two)

## <a name="mirrorrect"></a> CDrawingManager::MirrorRect

Flips a rectangular area.

```cpp
void MirrorRect(
    CRect rect,
    BOOL bHorz = TRUE);
```

### Parameters

*rect*<br/>
[in] The bounding rectangle of the area to flip.

*bHorz*<br/>
[in] A Boolean parameter that indicates whether the rectangle flips horizontally or vertically.

### Remarks

This method can flip any area of the device context owned by the `CDrawingManager` class. If *bHorz* is set to TRUE, this method flips the area horizontally. Otherwise, it flips the area vertically.

## <a name="pixelalpha"></a> CDrawingManager::PixelAlpha

Calculates the final color for a semitransparent pixel.

```
static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    int percent);

static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    double percentR,
    double percentG,
    double percentB);

static COLORREF __stdcall PixelAlpha(
    COLORREF srcPixel,
    COLORREF dstPixel,
    int percent);
```

### Parameters

*srcPixel*<br/>
[in] The initial color for the pixel.

*percent*<br/>
[in] A number between 0 and 100 that represents the percentage of transparency. A value of 100 indicates that the initial color is completely transparent.

*percentR*<br/>
[in] A number between 0 and 100 that represents the percentage of transparency for the red component.

*percentG*<br/>
[in] A number between 0 and 100 that represents the percentage of transparency for the green component.

*percentB*<br/>
[in] A number between 0 and 100 that represents the percentage of transparency for the blue component.

*dstPixel*<br/>
[in] The base color for the pixel.

### Return Value

The final color for the semitransparent pixel.

### Remarks

This is a helper class for coloring semitransparent bitmaps and is not designed to be called directly by the programmer.

When you use the version of the method that has *dstPixel*, the final color is a combination of *dstPixel* and *srcPixel*. The *srcPixel* color is the partially transparent color over the base color of *dstPixel*.

## <a name="prepareshadowmask"></a> CDrawingManager::PrepareShadowMask

Creates a bitmap that can be used as a shadow.

```
static HBITMAP __stdcall PrepareShadowMask (
    int nDepth,
    COLORREF clrBase,
    int iMinBrightness = 0,
    int iMaxBrightness = 100);
```

### Parameters

*nDepth*<br/>
[in] The width and height of the shadow.

*clrBase*<br/>
[in] The color of the shadow.

*iMinBrightness*<br/>
[in] The minimum brightness of the shadow.

*iMaxBrightness*<br/>
[in] The maximum brightness of the shadow.

### Return Value

A handle to the created bitmap if this method is successful; otherwise NULL.

### Remarks

If *nDepth* is set to 0, this method exits and returns NULL. If *nDepth* is less than 3, the width and height of the shadow are set to 3 pixels.

## <a name="rgbtohsl"></a> CDrawingManager::RGBtoHSL

Converts a color from a red, green, and blue (RGB) representation to a hue, saturation, and lightness (HSL) representation.

```
static void __stdcall RGBtoHSL(
    COLORREF rgb,
    double* H,
    double* S,
    double* L);
```

### Parameters

*rgb*\
[in] The color in RGB values.

*H*\
[out] A pointer to a double where the method stores the hue for the color.

*S*\
[out] A pointer to a double where the method stores the saturation for the color.

*L*\
[out] A pointer to a double where the method stores the lightness for the color.

### Remarks

A color can be represented as HSV (hue, saturation, and value), HSL (hue, saturation, and luminosity), or RGB (red, green, and blue). For more information about the different representations of color, see [Color](/windows/win32/uxguide/vis-color).

The returned value for *H* is represented as a fraction between 0 and 1 where both 0 and 1 represent red. The returned values for *S* and *L* are numbers between 0 and 1.

## <a name="rgbtohsv"></a> CDrawingManager::RGBtoHSV

Converts a color from a RGB representation to a HSV representation.

```
static void __stdcall RGBtoHSV(
    COLORREF rgb,
    double* H,
    double* S,
    double* V);
```

### Parameters

*rgb*<br/>
[in] The color to convert in a RGB representation.

*H*<br/>
[out] A pointer to a double where this method stores the resulting hue for the color.

*S*<br/>
[out] A pointer to a double where this method stores the resulting saturation for the color.

*V*<br/>
[out] A pointer to a double where this method stores the resulting value for the color.

### Remarks

A color can be represented as HSV (hue, saturation, and value), HSL (hue, saturation, and luminosity), or RGB (red, green, and blue). For more information about the different representations of color, see [Color](/windows/win32/uxguide/vis-color).

The returned value for *H* is a number between 0 and 360 where both 0 and 360 indicate red. The return values for *S* and *V* are numbers between 0 and 1.

## <a name="setalphapixel"></a> CDrawingManager::SetAlphaPixel

Colors a transparent pixel in a bitmap.

```
static void __stdcall SetAlphaPixel(
    COLORREF* pBits,
    CRect rect,
    int x,
    int y,
    int percent,
    int iShadowSize,
    COLORREF clrBase = (COLORREF)-1,
    BOOL bIsRight = TRUE);
```

### Parameters

*pBits*<br/>
[in] A pointer to the bit values for the bitmap.

*rect*<br/>
[in] A rectangular area in your application. The drawing manager draws a shadow underneath and to the right of this area.

*x*<br/>
[in] The horizontal coordinate of the pixel to color.

*y*<br/>
[in] The vertical coordinate of the pixel to color.

*percent*<br/>
[in] The percentage of transparency.

*iShadowSize*<br/>
[in] The width and height of the shadow.

*clrBase*<br/>
[in] The color of the shadow.

*bIsRight*<br/>
[in] A Boolean parameter that indicates which pixel to color. See the Remarks section for more information.

### Remarks

This method is a helper method that is used by the [CDrawingManager::DrawShadow](#drawshadow) method. We recommend that if you want to draw a shadow, call `CDrawingManager::DrawShadow` instead.

If *bIsRight* is set to TRUE, the pixel to color is measured *x* pixels from the right edge of *rect*. If it is FALSE, the pixel to color is measured *x* pixels from the left edge of *rect*.

## <a name="setpixel"></a> CDrawingManager::SetPixel

Changes a single pixel in a bitmap to the specified color.

```
static void __stdcall SetPixel(
    COLORREF* pBits,
    int cx,
    int cy,
    int x,
    int y,
    COLORREF color);
```

### Parameters

*pBits*\
[in] A pointer to the bit values of the bitmap.

*cx*\
[in] The total width of the bitmap.

*cy*\
[in] The total height of the bitmap.

*x*\
[in] The x-coordinate of the pixel in the bitmap to change.

*y*\
[in] The y-coordinate of the pixel in the bitmap to change.

*color*\
[in] The new color for the pixel identified by the supplied coordinates.

## <a name="smartmixcolors"></a> CDrawingManager::SmartMixColors

Combines two colors based on a weighted ratio.

```
static COLORREF __stdcall SmartMixColors(
    COLORREF color1,
    COLORREF color2,
    double dblLumRatio = 1.,
    int k1 = 1,
    int k2 = 1);
```

### Parameters

*color1*\
[in] The first color to mix.

*color2*\
[in] The second color to mix.

*dblLumRatio*\
[in] The ratio for the new color's luminosity. `SmartMixColors` multiplies the luminosity of the mixed color by this ratio before determining a final color.

*k1*\
[in] The weighted ratio for the first color.

*k2*\
[in] The weighted ratio for the second color.

### Return Value

A color that represents a weighted mixture of the supplied colors.

### Remarks

This method fails with an error if either *k1* or *k2* is less than zero. If both of these parameters are set to 0, the method returns `RGB(0, 0, 0)`.

The weighted ratio is calculated with the following formula:                         (color1 \* k1 + color2 \* k2)/(k1 + k2). After the weighted ratio is determined, the method calculates the luminosity for the mixed color. It then multiplies the luminosity by *dblLumRatio*. If the value is larger than 1.0, the method sets the luminosity for the mixed color to the new value. Otherwise, the luminosity is set to 1.0.

## <a name="drawrotated"></a> CDrawingManager::DrawRotated

Rotates a source DC content inside the given rectangle by 90 degrees.

```cpp
void DrawRotated(
    CRect rectDest,
    CDC& dcSrc,
    BOOL bClockWise);
```

### Parameters

*rectDest*<br/>
Destination rectangle.

*dcSrc*<br/>
The source device context.

*bClockWise*<br/>
TRUE indicates rotate +90 degrees; FALSE indicates rotate -90 degrees.

### Remarks

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)
