---
description: "Learn more about: CImage Class"
title: "CImage Class"
ms.date: "08/19/2019"
f1_keywords: ["CImage", "ATLIMAGE/ATL::CImage", "ATLIMAGE/ATL::CImage::CImage", "ATLIMAGE/ATL::CImage::AlphaBlend", "ATLIMAGE/ATL::CImage::Attach", "ATLIMAGE/ATL::CImage::BitBlt", "ATLIMAGE/ATL::CImage::Create", "ATLIMAGE/ATL::CImage::CreateEx", "ATLIMAGE/ATL::CImage::Destroy", "ATLIMAGE/ATL::CImage::Detach", "ATLIMAGE/ATL::CImage::Draw", "ATLIMAGE/ATL::CImage::GetBits", "ATLIMAGE/ATL::CImage::GetBPP", "ATLIMAGE/ATL::CImage::GetColorTable", "ATLIMAGE/ATL::CImage::GetDC", "ATLIMAGE/ATL::CImage::GetExporterFilterString", "ATLIMAGE/ATL::CImage::GetHeight", "ATLIMAGE/ATL::CImage::GetImporterFilterString", "ATLIMAGE/ATL::CImage::GetMaxColorTableEntries", "ATLIMAGE/ATL::CImage::GetPitch", "ATLIMAGE/ATL::CImage::GetPixel", "ATLIMAGE/ATL::CImage::GetPixelAddress", "ATLIMAGE/ATL::CImage::GetTransparentColor", "ATLIMAGE/ATL::CImage::GetWidth", "ATLIMAGE/ATL::CImage::IsDIBSection", "ATLIMAGE/ATL::CImage::IsIndexed", "ATLIMAGE/ATL::CImage::IsNull", "ATLIMAGE/ATL::CImage::IsTransparencySupported", "ATLIMAGE/ATL::CImage::Load", "ATLIMAGE/ATL::CImage::LoadFromResource", "ATLIMAGE/ATL::CImage::MaskBlt", "ATLIMAGE/ATL::CImage::PlgBlt", "ATLIMAGE/ATL::CImage::ReleaseDC", "ATLIMAGE/ATL::CImage::ReleaseGDIPlus", "ATLIMAGE/ATL::CImage::Save", "ATLIMAGE/ATL::CImage::SetColorTable", "ATLIMAGE/ATL::CImage::SetPixel", "ATLIMAGE/ATL::CImage::SetPixelIndexed", "ATLIMAGE/ATL::CImage::SetPixelRGB", "ATLIMAGE/ATL::CImage::SetTransparentColor", "ATLIMAGE/ATL::CImage::StretchBlt", "ATLIMAGE/ATL::CImage::TransparentBlt"]
helpviewer_keywords: ["jpeg files", "bitmaps [C++], ATL and MFC support for", "images [C++], ATL and MFC support for", "gif files, ATL and MFC support", ".gif files, ATL and MFC support", "PNG files, ATL and MFC support", "CImage class", "transparent color"]
ms.assetid: 52861e3d-bf7e-481f-a240-90e88f76c490
---
# CImage Class

`CImage` provides enhanced bitmap support, including the ability to load and save images in JPEG, GIF, BMP, and Portable Network Graphics (PNG) formats.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class CImage
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CImage::CImage](#cimage)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CImage::AlphaBlend](#alphablend)|Displays bitmaps that have transparent or semitransparent pixels.|
|[CImage::Attach](#attach)|Attaches an HBITMAP to a `CImage` object. Can be used with either non-DIB section bitmaps or DIB section bitmaps.|
|[CImage::BitBlt](#bitblt)|Copies a bitmap from the source device context to this current device context.|
|[CImage::Create](#create)|Creates a DIB section bitmap and attaches it to the previously constructed `CImage` object.|
|[CImage::CreateEx](#createex)|Creates a DIB section bitmap (with additional parameters) and attaches it to the previously constructed `CImage` object.|
|[CImage::Destroy](#destroy)|Detaches the bitmap from the `CImage` object and destroys the bitmap.|
|[CImage::Detach](#detach)|Detaches the bitmap from a `CImage` object.|
|[CImage::Draw](#draw)|Copies a bitmap from a source rectangle into a destination rectangle. `Draw` stretches or compresses the bitmap to fit the dimensions of the destination rectangle, if necessary, and handles alpha blending and transparent colors.|
|[CImage::GetBits](#getbits)|Retrieves a pointer to the actual pixel values of the bitmap.|
|[CImage::GetBPP](#getbpp)|Retrieves the bits per pixel.|
|[CImage::GetColorTable](#getcolortable)|Retrieves red, green, blue (RGB) color values from a range of entries in the color table.|
|[CImage::GetDC](#getdc)|Retrieves the device context into which the current bitmap is selected.|
|[CImage::GetExporterFilterString](#getexporterfilterstring)|Finds the available image formats and their descriptions.|
|[CImage::GetHeight](#getheight)|Retrieves the height of the current image in pixels.|
|[CImage::GetImporterFilterString](#getimporterfilterstring)|Finds the available image formats and their descriptions.|
|[CImage::GetMaxColorTableEntries](#getmaxcolortableentries)|Retrieves the maximum number of entries in the color table.|
|[CImage::GetPitch](#getpitch)|Retrieves the pitch of the current image, in bytes.|
|[CImage::GetPixel](#getpixel)|Retrieves the color of the pixel specified by *x* and *y*.|
|[CImage::GetPixelAddress](#getpixeladdress)|Retrieves the address of a given pixel.|
|[CImage::GetTransparentColor](#gettransparentcolor)|Retrieves the position of the transparent color in the color table.|
|[CImage::GetWidth](#getwidth)|Retrieves the width of the current image in pixels.|
|[CImage::IsDIBSection](#isdibsection)|Determines if the attached bitmap is a DIB section.|
|[CImage::IsIndexed](#isindexed)|Indicates that a bitmap's colors are mapped to an indexed palette.|
|[CImage::IsNull](#isnull)|Indicates if a source bitmap is currently loaded.|
|[CImage::IsTransparencySupported](#istransparencysupported)|Indicates whether the application supports transparent bitmaps.|
|[CImage::Load](#load)|Loads an image from the specified file.|
|[CImage::LoadFromResource](#loadfromresource)|Loads an image from the specified resource.|
|[CImage::MaskBlt](#maskblt)|Combines the color data for the source and destination bitmaps using the specified mask and raster operation.|
|[CImage::PlgBlt](#plgblt)|Performs a bit-block transfer from a rectangle in a source device context into a parallelogram in a destination device context.|
|[CImage::ReleaseDC](#releasedc)|Releases the device context that was retrieved with [CImage::GetDC](#getdc).|
|[CImage::ReleaseGDIPlus](#releasegdiplus)|Releases resources used by GDI+. Must be called to free resources created by a global `CImage` object.|
|[CImage::Save](#save)|Saves an image as the specified type. `Save` cannot specify image options.|
|[CImage::SetColorTable](#setcolortable)|Sets red, green, blue RGB) color values in a range of entries in the color table of the DIB section.|
|[CImage::SetPixel](#setpixel)|Sets the pixel at the specified coordinates to the specified color.|
|[CImage::SetPixelIndexed](#setpixelindexed)|Sets the pixel at the specified coordinates to the color at the specified index of the palette.|
|[CImage::SetPixelRGB](#setpixelrgb)|Sets the pixel at the specified coordinates to the specified red, green, blue (RGB) value.|
|[CImage::SetTransparentColor](#settransparentcolor)|Sets the index of the color to be treated as transparent. Only one color in a palette can be transparent.|
|[CImage::StretchBlt](#stretchblt)|Copies a bitmap from a source rectangle into a destination rectangle, stretching or compressing the bitmap to fit the dimensions of the destination rectangle, if necessary.|
|[CImage::TransparentBlt](#transparentblt)|Copies a bitmap with transparent color from the source device context to this current device context.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CImage::operator HBITMAP](#operator_hbitmap)|Returns the Windows handle attached to the `CImage` object.|

## Remarks

`CImage` takes bitmaps that are either device-independent bitmap (DIB) sections or not; however, you can use [Create](#create) or [CImage::Load](#load) with only DIB sections. You can attach a non-DIB section bitmap to a `CImage` object using [Attach](#attach), but then you cannot use the following `CImage` methods, which support only DIB section bitmaps:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

To determine if an attached bitmap is a DIB section, call [IsDibSection](#isdibsection).

> [!NOTE]
> In Visual Studio .NET 2003, this class keeps a count of the number of `CImage` objects created. Whenever the count goes to 0, the function `GdiplusShutdown` is automatically called to release resources used by GDI+. This ensures that any `CImage` objects created directly or indirectly by DLLs are always destroyed properly and that `GdiplusShutdown` is not called from `DllMain`.

> [!NOTE]
> Using global `CImage` objects in a DLL is not recommended. If you need to use a global `CImage` object in a DLL, call [CImage::ReleaseGDIPlus](#releasegdiplus) to explicitly release resources used by GDI+.

`CImage` cannot be selected into a new [CDC](../../mfc/reference/cdc-class.md). `CImage` creates its own HDC for the image. Because an HBITMAP can only be selected into one HDC at a time, the HBITMAP associated with the `CImage` cannot be selected into another HDC. If you need a CDC, retrieve the HDC from the `CImage` and give it to [CDC::FromHandle](../../mfc/reference/cdc-class.md#fromhandle).

## Examples

```cpp
// Get a CDC for the image
CDC* pDC = CDC::FromHandle(m_myImage.GetDC());

// Use pDC here
pDC->Rectangle(0, 40, 100, 50);
m_myImage.ReleaseDC();
```

When you use `CImage` in an MFC project, note which member functions in your project expect a pointer to a [CBitmap](../../mfc/reference/cbitmap-class.md) object. If you want to use `CImage` with such a function, like [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), use [CBitmap::FromHandle](../../mfc/reference/cbitmap-class.md#fromhandle), pass it your `CImage` HBITMAP, and use the returned `CBitmap*`.

```cpp
void CMyDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
    UNREFERENCED_PARAMETER(nFlags);

    CBitmap* pBitmap = CBitmap::FromHandle(m_myImage);
    m_pmenuPop->AppendMenu(0, ID_BMPCOMMAND, pBitmap);
    ClientToScreen(&point);
    m_pmenuPop->TrackPopupMenu(TPM_RIGHTBUTTON | TPM_LEFTALIGN, point.x,
    point.y, this);
}
```

Through `CImage`, you have access to the actual bits of a DIB section. You can use a `CImage` object anywhere you previously used a Win32 HBITMAP or DIB section.

You can use `CImage` from either MFC or ATL.

> [!NOTE]
> When you create a project using `CImage`, you must define `CString` before you include *atlimage.h*. If your project uses ATL without MFC, include *atlstr.h* before you include *atlimage.h*. If your project uses MFC (or if it is an ATL project with MFC support), include *afxstr.h* before you include *atlimage.h*.
>
> Likewise, you must include *atlimage.h* before you include *atlimpl.cpp*. To accomplish this easily, include *atlimage.h* in your *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier).

## Requirements

**Header:** atlimage.h

## <a name="alphablend"></a> CImage::AlphaBlend

Displays bitmaps that have transparent or semitransparent pixels.

```
BOOL AlphaBlend(
    HDC hDestDC,
    int xDest,
    int yDest,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER) const throw();

BOOL AlphaBlend(
    HDC hDestDC,
    const POINT& pointDest,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER) const throw();

BOOL AlphaBlend(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER);

BOOL AlphaBlend(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    BYTE bSrcAlpha = 0xff,
    BYTE bBlendOp = AC_SRC_OVER);
```

### Parameters

*hDestDC*<br/>
Handle to the destination device context.

*xDest*<br/>
The x-coordinate, in logical units, of the upper left corner of the destination rectangle.

*yDest*<br/>
The y-coordinate, in logical units, of the upper left corner of the destination rectangle.

*bSrcAlpha*<br/>
An alpha transparency value to be used on the entire source bitmap. The default 0xff (255) assumes that your image is opaque, and that you want to use per-pixel alpha values only.

*bBlendOp*<br/>
The alpha-blending function for source and destination bitmaps, a global alpha value to be applied to the entire source bitmap, and format information for the source bitmap. The source and destination blend functions are currently limited to AC_SRC_OVER.

*pointDest*<br/>
A reference to a [POINT](/windows/win32/api/windef/ns-windef-point) structure that identifies the upper left corner of the destination rectangle, in logical units.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle.

*xSrc*<br/>
The logical x-coordinate of the upper left corner of the source rectangle.

*ySrc*<br/>
The logical y-coordinate of the upper left corner of the source rectangle.

*nSrcWidth*<br/>
The width, in logical units, of the source rectangle.

*nSrcHeight*<br/>
The height, in logical units, of the source rectangle.

*rectDest*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure, identifying the destination.

*rectSrc*<br/>
A reference to a `RECT` structure, identifying the source.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Alpha-blend bitmaps support color blending on a per-pixel basis.

When *bBlendOp* is set to the default of AC_SRC_OVER, the source bitmap is placed over the destination bitmap based on the alpha values of the source pixels.

## <a name="attach"></a> CImage::Attach

Attaches *hBitmap* to a `CImage` object.

```cpp
void Attach(HBITMAP hBitmap, DIBOrientation eOrientation = DIBOR_DEFAULT) throw();
```

### Parameters

*hBitmap*<br/>
A handle to an HBITMAP.

*eOrientation*<br/>
Specifies the orientation of the bitmap. Can be one of the following:

- DIBOR_DEFAULT The orientation of the bitmap is determined by the operating system.

- DIBOR_BOTTOMUP The lines of the bitmap are in reverse order. This causes [CImage::GetBits](#getbits) to return a pointer near the end of the bitmap buffer and [CImage::GetPitch](#getpitch) to return a negative number.

- DIBOR_TOPDOWN  The lines of the bitmap are in top to bottom order. This causes [CImage::GetBits](#getbits) to return a pointer to the first byte of the bitmap buffer and [CImage::GetPitch](#getpitch) to return a positive number.

### Remarks

The bitmap can be either a non-DIB section bitmap or a DIB section bitmap. See [IsDIBSection](#isdibsection) for a list of methods that you can use only with DIB section bitmaps.

## <a name="bitblt"></a> CImage::BitBlt

Copies a bitmap from the source device context to this current device context.

```
BOOL BitBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    const POINT& pointDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    DWORD dwROP = SRCCOPY) const throw();

BOOL BitBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const POINT& pointSrc,
    DWORD dwROP = SRCCOPY) const throw();
```

### Parameters

*hDestDC*<br/>
The destination HDC.

*xDest*<br/>
The logical x-coordinate of the upper left corner of the destination rectangle.

*yDest*<br/>
The logical y-coordinate of the upper left corner of the destination rectangle.

*dwROP*<br/>
The raster operation to be performed. Raster-operation codes define exactly how to combine the bits of the source, the destination, and the pattern (as defined by the currently selected brush) to form the destination. See [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in the Windows SDK for a list of other raster-operation codes and their descriptions.

*pointDest*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure indicating the upper left corner of the destination rectangle.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle.

*xSrc*<br/>
The logical x-coordinate of the upper left corner of the source rectangle.

*ySrc*<br/>
The logical y-coordinate of the upper left corner of the source rectangle.

*rectDest*<br/>
A [RECT](/windows/win32/api/windef/ns-windef-rect) structure indicating the destination rectangle.

*pointSrc*<br/>
A `POINT` structure indicating the upper left corner of the source rectangle.

### Return Value

Nonzero if successful; otherwise zero.

### Remarks

For more information, see [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in the Windows SDK.

## <a name="cimage"></a> CImage::CImage

Constructs a `CImage` object.

```
CImage() throw();
```

### Remarks

Once you have constructed the object, call [Create](#create), [Load](#load), [LoadFromResource](#loadfromresource), or [Attach](#attach) to attach a bitmap to the object.

**Note** In Visual Studio, this class keeps a count of the number of `CImage` objects created. Whenever the count goes to 0, the function `GdiplusShutdown` is automatically called to release resources used by GDI+. This ensures that any `CImage` objects created directly or indirectly by DLLs are always destroyed properly and that `GdiplusShutdown` is not called from DllMain.

Using global `CImage` objects in a DLL is not recommended. If you need to use a global `CImage` object in a DLL, call [CImage::ReleaseGDIPlus](#releasegdiplus) to explicitly release resources used by GDI+.

## <a name="create"></a> CImage::Create

Creates a `CImage` bitmap and attach it to the previously constructed `CImage` object.

```
BOOL Create(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD dwFlags = 0) throw();
```

### Parameters

*nWidth*<br/>
The width of the `CImage` bitmap, in pixels.

*nHeight*<br/>
The height of the `CImage` bitmap, in pixels. If *nHeight* is positive, the bitmap is a bottom-up DIB and its origin is the lower left corner. If *nHeight* is negative, the bitmap is a top-down DIB and its origin is the upper left corner.

*nBPP*<br/>
The numbers of bits per pixel in the bitmap. Usually 4, 8, 16, 24, or 32. Can be 1 for monochrome bitmaps or masks.

*dwFlags*<br/>
Specifies if the bitmap object has an alpha channel. Can be a combination of zero or more of the following values:

- *createAlphaChannel* Can only be used if *nBPP* is 32, and *eCompression* is BI_RGB. If specified, the created image has an alpha (transparency) value for each pixel, stored in the 4th byte of each pixel (unused in a non-alpha 32-bit image). This alpha channel is automatically used when calling [CImage::AlphaBlend](#alphablend).

> [!NOTE]
> In calls to [CImage::Draw](#draw), images with an alpha channel are automatically alpha blended to the destination.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="createex"></a> CImage::CreateEx

Creates a `CImage` bitmap and attach it to the previously constructed `CImage` object.

```
BOOL CreateEx(
    int nWidth,
    int nHeight,
    int nBPP,
    DWORD eCompression,
    const DWORD* pdwBitmasks = NULL,
    DWORD dwFlags = 0) throw();
```

### Parameters

*nWidth*<br/>
The width of the `CImage` bitmap, in pixels.

*nHeight*<br/>
The height of the `CImage` bitmap, in pixels. If *nHeight* is positive, the bitmap is a bottom-up DIB and its origin is the lower left corner. If *nHeight* is negative, the bitmap is a top-down DIB and its origin is the upper left corner.

*nBPP*<br/>
The numbers of bits per pixel in the bitmap. Usually 4, 8, 16, 24, or 32. Can be 1 for monochrome bitmaps or masks.

*eCompression*<br/>
Specifies the type of compression for a compressed bottom-up bitmap (top-down DIBs cannot be compressed). Can be one of the following values:

- BI_RGB The format is uncompressed. Specifying this value when calling `CImage::CreateEx` is equivalent to calling `CImage::Create`.

- BI_BITFIELDS The format is uncompressed and the color table consists of three DWORD color masks that specify the red, green, and blue components, respectively, of each pixel. This is valid when used with 16- and 32-bpp bitmaps.

*pdwBitfields*<br/>
Only used if *eCompression* is set to BI_BITFIELDS, otherwise it must be NULL. A pointer to an array of three DWORD bitmasks, specifying which bits of each pixel are used for the red, green, and blue components of the color, respectively. For information on restrictions for the bitfields, see [BITMAPINFOHEADER](/windows/win32/api/wingdi/ns-wingdi-bitmapinfoheader) in the Windows SDK.

*dwFlags*<br/>
Specifies if the bitmap object has an alpha channel. Can be a combination of zero or more of the following values:

- *createAlphaChannel* Can only be used if *nBPP* is 32, and *eCompression* is BI_RGB. If specified, the created image has an alpha (transparency) value for each pixel, stored in the 4th byte of each pixel (unused in a non-alpha 32-bit image). This alpha channel is automatically used when calling [CImage::AlphaBlend](#alphablend).

   > [!NOTE]
   > In calls to [CImage::Draw](#draw), images with an alpha channel are automatically alpha blended to the destination.

### Return Value

TRUE if successful. Otherwise FALSE.

### Example

The following example creates a 100x100 pixel bitmap, using 16 bits to encode each pixel. In a given 16-bit pixel, bits 0-3 encode the red component, bits 4-7 encode green, and bits 8-11 encode blue. The remaining 4 bits are unused.

```cpp
DWORD adwBitmasks[3] = { 0x0000000f, 0x000000f0, 0x00000f00 };
m_myImage.CreateEx(100, 100, 16, BI_BITFIELDS, adwBitmasks, 0);
```

## <a name="destroy"></a> CImage::Destroy

Detaches the bitmap from the `CImage` object and destroys the bitmap.

```cpp
void Destroy() throw();
```

## <a name="detach"></a> CImage::Detach

Detaches a bitmap from a `CImage` object.

```
HBITMAP Detach() throw();
```

### Return Value

A handle to the bitmap detached, or NULL if no bitmap is attached.

## <a name="draw"></a> CImage::Draw

Copies a bitmap from the source device context to the current device context.

```
BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight) const throw();

BOOL Draw(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc) const throw();

BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest) const throw();

BOOL Draw(
    HDC hDestDC,
    const POINT& pointDest) const throw();

BOOL Draw(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight) const throw();

BOOL Draw(
    HDC hDestDC,
    const RECT& rectDest) const throw();
```

### Parameters

*hDestDC*<br/>
A handle to the destination device context.

*xDest*<br/>
The x-coordinate, in logical units, of the upper left corner of the destination rectangle.

*yDest*<br/>
The y-coordinate, in logical units, of the upper left corner of the destination rectangle.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle.

*xSrc*<br/>
The x-coordinate, in logical units, of the upper left corner of the source rectangle.

*ySrc*<br/>
The y-coordinate, in logical units, of the upper left corner of the source rectangle.

*nSrcWidth*<br/>
The width, in logical units, of the source rectangle.

*nSrcHeight*<br/>
The height, in logical units, of the source rectangle.

*rectDest*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure, identifying the destination.

*rectSrc*<br/>
A reference to a `RECT` structure, identifying the source.

*pointDest*<br/>
A reference to a [POINT](/windows/win32/api/windef/ns-windef-point) structure that identifies the upper left corner of the destination rectangle, in logical units.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

`Draw` performs the same operation as [StretchBlt](#stretchblt), unless the image contains a transparent color or alpha channel. In that case, `Draw` performs the same operation as either [TransparentBlt](#transparentblt) or [AlphaBlend](#alphablend) as required.

For versions of `Draw` that do not specify a source rectangle, the entire source image is the default. For the version of `Draw` that does not specify a size for the destination rectangle, the size of the source image is the default and no stretching or shrinking occurs.

## <a name="getbits"></a> CImage::GetBits

Retrieves a pointer to the actual bit values of a given pixel in a bitmap.

```cpp
void* GetBits() throw();
```

### Return Value

A pointer to the bitmap buffer. If the bitmap is a bottom-up DIB, the pointer points near the end of the buffer. If the bitmap is a top-down DIB, the pointer points to the first byte of the buffer.

### Remarks

Using this pointer, along with the value returned by [GetPitch](#getpitch), you can locate and change individual pixels in an image.

> [!NOTE]
> This method supports only DIB section bitmaps; consequently, you access the pixels of a `CImage` object the same way you would the pixels of a DIB section. The returned pointer points to the pixel at the location (0, 0).

## <a name="getbpp"></a> CImage::GetBPP

Retrieves the bits-per-pixel value.

```
int GetBPP() const throw();
```

### Return Value

The number of bits per pixel.

### Remarks

This value determines the number of bits that define each pixel and the maximum number of colors in the bitmap.

The bits per pixel is usually 1, 4, 8, 16, 24, or 32. See the `biBitCount` member of [BITMAPINFOHEADER](/windows/win32/api/wingdi/ns-wingdi-bitmapinfoheader) in the Windows SDK for more information about this value.

## <a name="getcolortable"></a> CImage::GetColorTable

Retrieves red, green, blue (RGB) color values from a range of entries in the palette of the DIB section.

```cpp
void GetColorTable(
    UINT iFirstColor,
    UINT nColors,
    RGBQUAD* prgbColors) const throw();
```

### Parameters

*iFirstColor*<br/>
The color table index of the first entry to retrieve.

*nColors*<br/>
The number of color table entries to retrieve.

*prgbColors*<br/>
A pointer to the array of [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) structures to retrieve the color table entries.

## <a name="getdc"></a> CImage::GetDC

Retrieves the device context that currently has the image selected into it.

```
HDC GetDC() const throw();
```

### Return Value

A handle to a device context.

### Remarks

For each call to `GetDC`, you must have a subsequent call to [ReleaseDC](#releasedc).

## <a name="getexporterfilterstring"></a> CImage::GetExporterFilterString

Finds image formats available for saving images.

```
static HRESULT GetExporterFilterString(
    CSimpleString& strExporters,
    CSimpleArray<GUID>& aguidFileTypes,
    LPCTSTR pszAllFilesDescription = NULL,
    DWORD dwExclude = excludeDefaultSave,
    TCHAR chSeparator = _T('|'));
```

### Parameters

*strExporters*<br/>
A reference to a `CSimpleString` object. See **Remarks** for more information.

*aguidFileTypes*<br/>
An array of GUIDs, with each element corresponding to one of the file types in the string. In the example in *pszAllFilesDescription* below, *aguidFileTypes*[0] is GUID_NULL and the remaining array values are the image file formats supported by the current operating system.

> [!NOTE]
> For a complete list of constants, see **Image File Format Constants** in the Windows SDK.

*pszAllFilesDescription*<br/>
If this parameter is not NULL, the filter string will have one additional filter at the beginning of the list. This filter will have the current value of *pszAllFilesDescription* for its description, and accepts files of any extension supported by any other exporter in the list.

For example:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any exporter.
CImage::GetExporterFilterString(
    strExporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set of bit flags specifying which file types to exclude from the list. Allowable flags are:

- `excludeGIF` = 0x01   Excludes GIF files.

- `excludeBMP` = 0x02   Excludes BMP (Windows Bitmap) files.

- `excludeEMF` = 0x04   Excludes EMF (Enhanced Metafile) files.

- `excludeWMF` = 0x08   Excludes WMF (Windows Metafile) files.

- `excludeJPEG` = 0x10   Excludes JPEG files.

- `excludePNG` = 0x20   Excludes PNG files.

- `excludeTIFF` = 0x40   Excludes TIFF files.

- `excludeIcon` = 0x80   Excludes ICO (Windows Icon) files.

- `excludeOther` = 0x80000000   Excludes any other file type not listed above.

- `excludeDefaultLoad` = 0   For load, all file types are included by default

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF` For saving, these files are excluded by default because they usually have special requirements.

*chSeparator*<br/>
The separator used between the image formats. See **Remarks** for more information.

### Return Value

A standard HRESULT.

### Remarks

You can pass the resulting format string to your MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) object to expose the file extensions of the available image formats in the File Save As dialog box.

The parameter *strExporter* has the format:

file description0&#124;\*.ext0&#124;filedescription1&#124;\*.ext1&#124;...file description *n*&#124;\*.ext *n*&#124;&#124;

where '&#124;' is the separator character specified by `chSeparator`. For example:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Use the default separator '&#124;' if you pass this string to an MFC `CFileDialog` object. Use the null separator '\0' if you pass this string to a common File Save dialog box.

## <a name="getheight"></a> CImage::GetHeight

Retrieves the height, in pixels, of an image.

```
int GetHeight() const throw();
```

### Return Value

The height, in pixels, of an image.

## <a name="getimporterfilterstring"></a> CImage::GetImporterFilterString

Finds image formats available for loading images.

```
static HRESULT GetImporterFilterString(
    CSimpleString& strImporters,
    CSimpleArray<GUID>& aguidFileTypes,
    LPCTSTR pszAllFilesDescription = NULL,
    DWORD dwExclude = excludeDefaultLoad,
    TCHAR chSeparator = _T('|'));
```

### Parameters

*strImporters*<br/>
A reference to a `CSimpleString` object. See **Remarks** for more information.

*aguidFileTypes*<br/>
An array of GUIDs, with each element corresponding to one of the file types in the string. In the example in *pszAllFilesDescription* below, *aguidFileTypes*[0] is GUID_NULL with the remaining array values are the image file formats supported by the current operating system.

> [!NOTE]
> For a complete list of constants, see **Image File Format Constants** in the Windows SDK.

*pszAllFilesDescription*<br/>
If this parameter is not NULL, the filter string will have one additional filter at the beginning of the list. This filter will have the current value of *pszAllFilesDescription* for its description, and accepts files of any extension supported by any other exporter in the list.

For example:

```cpp
//First filter in the list will be titled "All Image Files", and
//will accept files with any extension supported by any importer.
CImage::GetImporterFilterString(
    strImporters, aguidFileTypes,
_T("All Image Files"));
```

*dwExclude*<br/>
Set of bit flags specifying which file types to exclude from the list. Allowable flags are:

- `excludeGIF` = 0x01   Excludes GIF files.

- `excludeBMP` = 0x02   Excludes BMP (Windows Bitmap) files.

- `excludeEMF` = 0x04   Excludes EMF (Enhanced Metafile) files.

- `excludeWMF` = 0x08   Excludes WMF (Windows Metafile) files.

- `excludeJPEG` = 0x10   Excludes JPEG files.

- `excludePNG` = 0x20   Excludes PNG files.

- `excludeTIFF` = 0x40   Excludes TIFF files.

- `excludeIcon` = 0x80   Excludes ICO (Windows Icon) files.

- `excludeOther` = 0x80000000   Excludes any other file type not listed above.

- `excludeDefaultLoad` = 0   For load, all file types are included by default

- `excludeDefaultSave` = `excludeIcon &#124; excludeEMF &#124; excludeWMF` For saving, these files are excluded by default because they usually have special requirements.

*chSeparator*<br/>
The separator used between the image formats. See **Remarks** for more information.

### Remarks

You can pass the resulting format string to your MFC [CFileDialog](../../mfc/reference/cfiledialog-class.md) object to expose the file extensions of the available image formats in the **File Open** dialog box.

The parameter *strImporter* has the format:

file description0&#124;\*.ext0&#124;filedescription1&#124;\*.ext1&#124;...file description *n*&#124;\*.ext *n*&#124;&#124;

where '&#124;' is the separator character specified by *chSeparator*. For example:

`"Bitmap format|*.bmp|JPEG format|*.jpg|GIF format|*.gif|PNG format|*.png||"`

Use the default separator '&#124;' if you pass this string to an MFC `CFileDialog` object. Use the null separator '\0' if you pass this string to a common **File Open** dialog box.

## <a name="getmaxcolortableentries"></a> CImage::GetMaxColorTableEntries

Retrieves the maximum number of entries in the color table.

```
int GetMaxColorTableEntries() const throw();
```

### Return Value

The number of entries in the color table.

### Remarks

This method supports only DIB section bitmaps.

## <a name="getpitch"></a> CImage::GetPitch

Retrieves the pitch of an image.

```
int GetPitch() const throw();
```

### Return Value

The pitch of the image. If the return value is negative, the bitmap is a bottom-up DIB and its origin is the lower left corner. If the return value is positive, the bitmap is a top-down DIB and its origin is the upper left corner.

### Remarks

The pitch is the distance, in bytes, between two memory addresses that represent the beginning of one bitmap line and the beginning of the next bitmap line. Because pitch is measured in bytes, the pitch of an image helps you to determine the pixel format. The pitch can also include additional memory, reserved for the bitmap.

Use `GetPitch` with [GetBits](#getbits) to find individual pixels of an image.

> [!NOTE]
> This method supports only DIB section bitmaps.

## <a name="getpixel"></a> CImage::GetPixel

Retrieves the color of the pixel at the location specified by *x* and *y*.

```
COLORREF GetPixel(int x, int y) const throw();
```

### Parameters

*x*<br/>
The x-coordinate of the pixel.

*y*<br/>
The y-coordinate of the pixel.

### Return Value

The red, green, blue (RGB) value of the pixel. If the pixel is outside of the current clipping region, the return value is CLR_INVALID.

## <a name="getpixeladdress"></a> CImage::GetPixelAddress

Retrieves the exact address of a pixel.

```cpp
void* GetPixelAddress(int x, int y) throw();
```

### Parameters

*x*<br/>
The x-coordinate of the pixel.

*y*<br/>
The y-coordinate of the pixel.

### Remarks

The address is determined according to the coordinates of a pixel, the pitch of the bitmap, and the bits per pixel.

For formats that have less than 8 bits per pixel, this method returns the address of the byte containing the pixel. For example, if your image format has 4 bits per pixel, `GetPixelAddress` returns the address of the first pixel in the byte, and you must calculate for 2 pixels per byte.

> [!NOTE]
> This method supports only DIB section bitmaps.

## <a name="gettransparentcolor"></a> CImage::GetTransparentColor

Retrieves the indexed location of the transparent color in the color palette.

```
LONG GetTransparentColor() const throw();
```

### Return Value

The index of the transparent color.

## <a name="getwidth"></a> CImage::GetWidth

Retrieves the width, in pixels, of an image.

```
int GetWidth() const throw();
```

### Return Value

The width of the bitmap, in pixels.

## <a name="isdibsection"></a> CImage::IsDIBSection

Determines if the attached bitmap is a DIB section.

```
bool IsDIBSection() const throw();
```

### Return Value

TRUE if the attached bitmap is a DIB section. Otherwise FALSE.

### Remarks

If the bitmap is not a DIB section, you cannot use the following `CImage` methods, which support only DIB section bitmaps:

- [GetBits](#getbits)

- [GetColorTable](#getcolortable)

- [GetMaxColorTableEntries](#getmaxcolortableentries)

- [GetPitch](#getpitch)

- [GetPixelAddress](#getpixeladdress)

- [IsIndexed](#isindexed)

- [SetColorTable](#setcolortable)

## <a name="isindexed"></a> CImage::IsIndexed

Determines whether a bitmap's pixels are mapped to a color palette.

```
bool IsIndexed() const throw();
```

### Return Value

TRUE if indexed; otherwise FALSE.

### Remarks

This method returns TRUE only if the bitmap is 8-bit (256 colors) or less.

> [!NOTE]
> This method supports only DIB section bitmaps.

## <a name="isnull"></a> CImage::IsNull

Determines if a bitmap is currently loaded.

```
bool IsNull() const throw();
```

### Remarks

This method returns TRUE if a bitmap is not currently loaded; otherwise FALSE.

## <a name="istransparencysupported"></a> CImage::IsTransparencySupported

Indicates whether the application supports transparent bitmaps.

```
static BOOL IsTransparencySupported() throw();
```

### Return Value

Nonzero if the current platform supports transparency. Otherwise 0.

### Remarks

If the return value is nonzero, and transparency is supported, a call to [AlphaBlend](#alphablend), [TransparentBlt](#transparentblt), or [Draw](#draw) will handle transparent colors.

## <a name="load"></a> CImage::Load

Loads an image.

```
HRESULT Load(LPCTSTR pszFileName) throw();
HRESULT Load(IStream* pStream) throw();
```

### Parameters

*pszFileName*<br/>
A pointer to a string containing the name of the image file to load.

*pStream*<br/>
A pointer to a stream containing the name of the image file to load.

### Return Value

A standard HRESULT.

### Remarks

Loads the image specified by *pszFileName* or *pStream*.

Valid image types are BMP, GIF, JPEG, PNG, and TIFF.

## <a name="loadfromresource"></a> CImage::LoadFromResource

Loads an image from a BITMAP resource.

```cpp
void LoadFromResource(
    HINSTANCE hInstance,
    LPCTSTR pszResourceName) throw();

void LoadFromResource(
    HINSTANCE hInstance,
    UINT nIDResource) throw();
```

### Parameters

*hInstance*<br/>
Handle to an instance of the module that contains the image to be loaded.

*pszResourceName*<br/>
A pointer to the string containing the name of the resource containing the image to load.

*nIDResource*<br/>
The ID of the resource to load.

### Remarks

The resource must be of type BITMAP.

## <a name="maskblt"></a> CImage::MaskBlt

Combines the color data for the source and destination bitmaps using the specified mask and raster operation.

```
BOOL MaskBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    HBITMAP hbmMask,
    int xMask,
    int yMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const POINT& pointSrc,
    HBITMAP hbmMask,
    const POINT& pointMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    HBITMAP hbmMask,
    DWORD dwROP = SRCCOPY) const throw();

BOOL MaskBlt(
    HDC hDestDC,
    const POINT& pointDest,
    HBITMAP hbmMask,
    DWORD dwROP = SRCCOPY) const throw();
```

### Parameters

*hDestDC*<br/>
The handle to the module whose executable contains the resource.

*xDest*<br/>
The x-coordinate, in logical units, of the upper left corner of the destination rectangle.

*yDest*<br/>
The y-coordinate, in logical units, of the upper left corner of the destination rectangle.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle and source bitmap.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle and source bitmap.

*xSrc*<br/>
The logical x-coordinate of the upper left corner of the source bitmap.

*ySrc*<br/>
The logical y-coordinate of the upper left corner of the source bitmap.

*hbmMask*<br/>
Handle to the monochrome mask bitmap combined with the color bitmap in the source device context.

*xMask*<br/>
The horizontal pixel offset for the mask bitmap specified by the *hbmMask* parameter.

*yMask*<br/>
The vertical pixel offset for the mask bitmap specified by the *hbmMask* parameter.

*dwROP*<br/>
Specifies both foreground and background ternary raster operation codes that the method uses to control the combination of source and destination data. The background raster operation code is stored in the high-order byte of the high-order word of this value; the foreground raster operation code is stored in the low-order byte of the high-order word of this value; the low-order word of this value is ignored, and should be zero. For a discussion of foreground and background in the context of this method, see `MaskBlt` in the Windows SDK. For a list of common raster operation codes, see `BitBlt` in the Windows SDK.

*rectDest*<br/>
A reference to a `RECT` structure, identifying the destination.

*pointSrc*<br/>
A `POINT` structure indicating the upper left corner of the source rectangle.

*pointMask*<br/>
A `POINT` structure indicating the upper left corner of the mask bitmap.

*pointDest*<br/>
A reference to a `POINT` structure that identifies the upper left corner of the destination rectangle, in logical units.

### Return Value

Nonzero if successful, otherwise 0.

### Remarks

This method applies to Windows NT, versions 4.0 and later only.

## <a name="operator_hbitmap"></a> CImage::operator HBITMAP

Use this operator to get the attached Windows GDI handle of the `CImage` object. This operator is a casting operator, which supports direct use of an HBITMAP object.

## <a name="plgblt"></a> CImage::PlgBlt

Performs a bit-block transfer from a rectangle in a source device context into a parallelogram in a destination device context.

```
BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    HBITMAP hbmMask = NULL) const throw();

BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    HBITMAP hbmMask = NULL,
    int xMask = 0,
    int yMask = 0) const throw();

BOOL PlgBlt(
    HDC hDestDC,
    const POINT* pPoints,
    const RECT& rectSrc,
    HBITMAP hbmMask = NULL,
    const POINT& pointMask = CPoint(0, 0)) const throw();
```

### Parameters

*hDestDC*<br/>
A handle to the destination device context.

*pPoints*<br/>
A pointer to an array of three points in logical space that identify three corners of the destination parallelogram. The upper left corner of the source rectangle is mapped to the first point in this array, the upper-right corner to the second point in this array, and the lower left corner to the third point. The lower-right corner of the source rectangle is mapped to the implicit fourth point in the parallelogram.

*hbmMask*<br/>
A handle to an optional monochrome bitmap that is used to mask the colors of the source rectangle.

*xSrc*<br/>
The x-coordinate, in logical units, of the upper left corner of the source rectangle.

*ySrc*<br/>
The y-coordinate, in logical units, of the upper left corner of the source rectangle.

*nSrcWidth*<br/>
The width, in logical units, of the source rectangle.

*nSrcHeight*<br/>
The height, in logical units, of the source rectangle.

*xMask*<br/>
The x-coordinate of the upper left corner of the monochrome bitmap.

*yMask*<br/>
The y-coordinate of the upper left corner of the monochrome bitmap.

*rectSrc*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the coordinates of the source rectangle.

*pointMask*<br/>
A [POINT](/windows/win32/api/windef/ns-windef-point) structure indicating the upper left corner of the mask bitmap.

### Return Value

Nonzero if successful, otherwise 0.

### Remarks

If *hbmMask* identifies a valid monochrome bitmap, `PlgBit` uses this bitmap to mask the bits of color data from the source rectangle.

This method applies to Windows NT, versions 4.0 and later only. See [PlgBlt](/windows/win32/api/wingdi/nf-wingdi-plgblt) in the Windows SDK for more detailed information.

## <a name="releasedc"></a> CImage::ReleaseDC

Releases the device context.

```cpp
void ReleaseDC() const throw();
```

### Remarks

Because only one bitmap can be selected into a device context at a time, you must call `ReleaseDC` for each call to [GetDC](#getdc).

## <a name="releasegdiplus"></a> CImage::ReleaseGDIPlus

Releases resources used by GDI+.

```cpp
void ReleaseGDIPlus() throw();
```

### Remarks

This method must be called to free resources allocated by a global `CImage` object. See [CImage::CImage](#cimage).

## <a name="save"></a> CImage::Save

Saves an image to the specified stream or file on disk.

```
HRESULT Save(
    IStream* pStream,
    REFGUID guidFileType) const throw();

HRESULT Save(
    LPCTSTR pszFileName,
    REFGUID guidFileType = GUID_NULL) const throw();
```

### Parameters

*pStream*<br/>
A pointer to a COM IStream object containing the file image data.

*pszFileName*<br/>
A pointer to the file name for the image.

*guidFileType*<br/>
The file type to save the image as. Can be one of the following:

- `ImageFormatBMP` An uncompressed bitmap image.

- `ImageFormatPNG` A Portable Network Graphic (PNG) compressed image.

- `ImageFormatJPEG` A JPEG compressed image.

- `ImageFormatGIF` A GIF compressed image.

> [!NOTE]
> For a complete list of constants, see **Image File Format Constants** in the Windows SDK.

### Return Value

A standard HRESULT.

### Remarks

Call this function to save the image using a specified name and type. If the *guidFileType* parameter is not included, the file name's file extension will be used to determine the image format. If no extension is provided, the image will be saved in BMP format.

## <a name="setcolortable"></a> CImage::SetColorTable

Sets the red, green, blue (RGB) color values for a range of entries in the palette of the DIB section.

```cpp
void SetColorTable(
    UINT iFirstColor,
    UINT nColors,
    const RGBQUAD* prgbColors) throw();
```

### Parameters

*iFirstColor*<br/>
The color table index of the first entry to set.

*nColors*<br/>
The number of color table entries to set.

*prgbColors*<br/>
A pointer to the array of [RGBQUAD](/windows/win32/api/wingdi/ns-wingdi-rgbquad) structures to set the color table entries.

### Remarks

This method supports only DIB section bitmaps.

## <a name="setpixel"></a> CImage::SetPixel

Sets the color of a pixel at a given location in the bitmap.

```cpp
void SetPixel(int x, int y, COLORREF color) throw();
```

### Parameters

*x*<br/>
The horizontal location of the pixel to set.

*y*<br/>
The vertical location of the pixel to set.

*color*<br/>
The color to which you set the pixel.

### Remarks

This method fails if the pixel coordinates lie outside of the selected clipping region.

## <a name="setpixelindexed"></a> CImage::SetPixelIndexed

Sets the pixel color to the color located at *iIndex* in the color palette.

```cpp
void SetPixelIndexed(int x, int y, int iIndex) throw();
```

### Parameters

*x*<br/>
The horizontal location of the pixel to set.

*y*<br/>
The vertical location of the pixel to set.

*iIndex*<br/>
The index of a color in the color palette.

## <a name="setpixelrgb"></a> CImage::SetPixelRGB

Sets the pixel at the locations specified by *x* and *y* to the colors indicated by *r*, *g*, and *b*, in a red, green, blue (RGB) image.

```cpp
void SetPixelRGB(
    int x,
    int y,
    BYTE r,
    BYTE g,
    BYTE b) throw();
```

### Parameters

*x*<br/>
The horizontal location of the pixel to set.

*y*<br/>
The vertical location of the pixel to set.

*r*<br/>
The intensity of the red color.

*g*<br/>
The intensity of the green color.

*b*<br/>
The intensity of the blue color.

### Remarks

The red, green, and blue parameters are each represented by a number between 0 and 255. If you set all three parameters to zero, the combined resulting color is black. If you set all three parameters to 255, the combined resulting color is white.

## <a name="settransparentcolor"></a> CImage::SetTransparentColor

Sets a color at a given indexed location as transparent.

```
LONG SetTransparentColor(LONG iTransparentColor) throw();
```

### Parameters

*iTransparentColor*<br/>
The index, in a color palette, of the color to set to transparent. If -1, no color is set to transparent.

### Return Value

The index of the color previously set as transparent.

## <a name="stretchblt"></a> CImage::StretchBlt

Copies a bitmap from the source device context to this current device context.

```
BOOL StretchBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    const RECT& rectDest,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    DWORD dwROP = SRCCOPY) const throw();

BOOL StretchBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    DWORD dwROP = SRCCOPY) const throw();
```

### Parameters

*hDestDC*<br/>
A handle to the destination device context.

*xDest*<br/>
The x-coordinate, in logical units, of the upper left corner of the destination rectangle.

*yDest*<br/>
The y-coordinate, in logical units, of the upper left corner of the destination rectangle.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle.

*dwROP*<br/>
The raster operation to be performed. Raster-operation codes define exactly how to combine the bits of the source, the destination, and the pattern (as defined by the currently selected brush) to form the destination. See [BitBlt](/windows/win32/api/wingdi/nf-wingdi-bitblt) in the Windows SDK for a list of other raster-operation codes and their descriptions.

*rectDest*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure, identifying the destination.

*xSrc*<br/>
The x-coordinate, in logical units, of the upper left corner of the source rectangle.

*ySrc*<br/>
The y-coordinate, in logical units, of the upper left corner of the source rectangle.

*nSrcWidth*<br/>
The width, in logical units, of the source rectangle.

*nSrcHeight*<br/>
The height, in logical units, of the source rectangle.

*rectSrc*<br/>
A reference to a `RECT` structure, identifying the source.

### Return Value

Nonzero if successful, otherwise 0.

### Remarks

For more information, see [StretchBlt](/windows/win32/api/wingdi/nf-wingdi-stretchblt) in the Windows SDK.

## <a name="transparentblt"></a> CImage::TransparentBlt

Copies a bitmap from the source device context to this current device context.

```
BOOL TransparentBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    const RECT& rectDest,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    UINT crTransparent = CLR_INVALID) const throw();

BOOL TransparentBlt(
    HDC hDestDC,
    const RECT& rectDest,
    const RECT& rectSrc,
    UINT crTransparent = CLR_INVALID) const throw();
```

### Parameters

*hDestDC*<br/>
A handle to the destination device context.

*xDest*<br/>
The x-coordinate, in logical units, of the upper left corner of the destination rectangle.

*yDest*<br/>
The y-coordinate, in logical units, of the upper left corner of the destination rectangle.

*nDestWidth*<br/>
The width, in logical units, of the destination rectangle.

*nDestHeight*<br/>
The height, in logical units, of the destination rectangle.

*crTransparent*<br/>
The color in the source bitmap to treat as transparent. By default, CLR_INVALID, indicating that the color currently set as the transparent color of the image should be used.

*rectDest*<br/>
A reference to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure, identifying the destination.

*xSrc*<br/>
The x-coordinate, in logical units, of the upper left corner of the source rectangle.

*ySrc*<br/>
The y-coordinate, in logical units, of the upper left corner of the source rectangle.

*nSrcWidth*<br/>
The width, in logical units, of the source rectangle.

*nSrcHeight*<br/>
The height, in logical units, of the source rectangle.

*rectSrc*<br/>
A reference to a `RECT` structure, identifying the source.

### Return Value

TRUE if successful, otherwise FALSE.

### Remarks

`TransparentBlt` is supported for source bitmaps of 4 bits per pixel and 8 bits per pixel. Use [CImage::AlphaBlend](#alphablend) to specify 32 bits-per-pixel bitmaps with transparency.

### Example

```cpp
// Performs a transparent blit from the source image to the destination
// image using the images' current transparency settings
BOOL TransparentBlt(CImage* pSrcImage, CImage* pDstImage,
       int xDest, int yDest, int nDestWidth, int nDestHeight)
{
    HDC hDstDC = NULL;
    BOOL bResult;

    if(pSrcImage == NULL || pDstImage == NULL)
    {
        // Invalid parameter
        return FALSE;
    }

    // Obtain a DC to the destination image
    hDstDC = pDstImage->GetDC();
    // Perform the blit
    bResult = pSrcImage->TransparentBlt(hDstDC, xDest, yDest, nDestWidth, nDestHeight);

    // Release the destination DC
    pDstImage->ReleaseDC();

    return bResult;
}
```

## See also

[MMXSwarm Sample](../../overview/visual-cpp-samples.md)<br/>
[SimpleImage Sample](../../overview/visual-cpp-samples.md)<br/>
[Device-Independent Bitmaps](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)<br/>
[ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)<br/>
[Device-Independent Bitmaps](/windows/win32/gdi/device-independent-bitmaps)<br/>
[CreateDIBSection](/windows/win32/api/wingdi/nf-wingdi-createdibsection)
