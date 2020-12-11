---
description: "Learn more about: CBrush Class"
title: "CBrush Class"
ms.date: "11/04/2016"
f1_keywords: ["CBrush", "AFXWIN/CBrush", "AFXWIN/CBrush::CBrush", "AFXWIN/CBrush::CreateBrushIndirect", "AFXWIN/CBrush::CreateDIBPatternBrush", "AFXWIN/CBrush::CreateHatchBrush", "AFXWIN/CBrush::CreatePatternBrush", "AFXWIN/CBrush::CreateSolidBrush", "AFXWIN/CBrush::CreateSysColorBrush", "AFXWIN/CBrush::FromHandle", "AFXWIN/CBrush::GetLogBrush"]
helpviewer_keywords: ["CBrush [MFC], CBrush", "CBrush [MFC], CreateBrushIndirect", "CBrush [MFC], CreateDIBPatternBrush", "CBrush [MFC], CreateHatchBrush", "CBrush [MFC], CreatePatternBrush", "CBrush [MFC], CreateSolidBrush", "CBrush [MFC], CreateSysColorBrush", "CBrush [MFC], FromHandle", "CBrush [MFC], GetLogBrush"]
ms.assetid: e5ef2c62-dd95-4973-9090-f52f605900e1
---
# CBrush Class

Encapsulates a Windows graphics device interface (GDI) brush.

## Syntax

```
class CBrush : public CGdiObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CBrush::CBrush](#cbrush)|Constructs a `CBrush` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CBrush::CreateBrushIndirect](#createbrushindirect)|Initializes a brush with the style, color, and pattern specified in a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure.|
|[CBrush::CreateDIBPatternBrush](#createdibpatternbrush)|Initializes a brush with a pattern specified by a device-independent bitmap (DIB).|
|[CBrush::CreateHatchBrush](#createhatchbrush)|Initializes a brush with the specified hatched pattern and color.|
|[CBrush::CreatePatternBrush](#createpatternbrush)|Initializes a brush with a pattern specified by a bitmap.|
|[CBrush::CreateSolidBrush](#createsolidbrush)|Initializes a brush with the specified solid color.|
|[CBrush::CreateSysColorBrush](#createsyscolorbrush)|Creates a brush that is the default system color.|
|[CBrush::FromHandle](#fromhandle)|Returns a pointer to a `CBrush` object when given a handle to a Windows `HBRUSH` object.|
|[CBrush::GetLogBrush](#getlogbrush)|Gets a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CBrush::operator HBRUSH](#operator_hbrush)|Returns the Windows handle attached to the `CBrush` object.|

## Remarks

To use a `CBrush` object, construct a `CBrush` object and pass it to any `CDC` member function that requires a brush.

Brushes can be solid, hatched, or patterned.

For more information on `CBrush`, see [Graphic Objects](../../mfc/graphic-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CBrush`

## Requirements

**Header:** afxwin.h

## <a name="cbrush"></a> CBrush::CBrush

Constructs a `CBrush` object.

```
CBrush();
CBrush(COLORREF crColor);
CBrush(int nIndex, COLORREF crColor);
explicit CBrush(CBitmap* pBitmap);
```

### Parameters

*crColor*<br/>
Specifies the foreground color of the brush as an RGB color. If the brush is hatched, this parameter specifies the color of the hatching.

*nIndex*<br/>
Specifies the hatch style of the brush. It can be any one of the following values:

- HS_BDIAGONAL Downward hatch (left to right) at 45 degrees

- HS_CROSS Horizontal and vertical crosshatch

- HS_DIAGCROSS Crosshatch at 45 degrees

- HS_FDIAGONAL Upward hatch (left to right) at 45 degrees

- HS_HORIZONTAL Horizontal hatch

- HS_VERTICAL Vertical hatch

*pBitmap*<br/>
Points to a `CBitmap` object that specifies a bitmap with which the brush paints.

### Remarks

`CBrush` has four overloaded constructors.The constructor with no arguments constructs an uninitialized `CBrush` object that must be initialized before it can be used.

If you use the constructor with no arguments, you must initialize the resulting `CBrush` object with [CreateSolidBrush](#createsolidbrush), [CreateHatchBrush](#createhatchbrush), [CreateBrushIndirect](#createbrushindirect), [CreatePatternBrush](#createpatternbrush), or [CreateDIBPatternBrush](#createdibpatternbrush). If you use one of the constructors that takes arguments, then no further initialization is necessary. The constructors with arguments can throw an exception if errors are encountered, while the constructor with no arguments will always succeed.

The constructor with a single [COLORREF](/windows/win32/gdi/colorref) parameter constructs a solid brush with the specified color. The color specifies an RGB value and can be constructed with the RGB macro in WINDOWS.H.

The constructor with two parameters constructs a hatch brush. The *nIndex* parameter specifies the index of a hatched pattern. The *crColor* parameter specifies the color.

The constructor with a `CBitmap` parameter constructs a patterned brush. The parameter identifies a bitmap. The bitmap is assumed to have been created by using [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap::CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap::LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap), or [CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap). The minimum size for a bitmap to be used in a fill pattern is 8 pixels by 8 pixels.

### Example

[!code-cpp[NVC_MFCDocView#21](../../mfc/codesnippet/cpp/cbrush-class_1.cpp)]

## <a name="createbrushindirect"></a> CBrush::CreateBrushIndirect

Initializes a brush with a style, color, and pattern specified in a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure.

```
BOOL CreateBrushIndirect(const LOGBRUSH* lpLogBrush);
```

### Parameters

*lpLogBrush*<br/>
Points to a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure that contains information about the brush.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The brush can subsequently be selected as the current brush for any device context.

A brush created using a monochrome (1 plane, 1 bit per pixel) bitmap is drawn using the current text and background colors. Pixels represented by a bit set to 0 will be drawn with the current text color. Pixels represented by a bit set to 1 will be drawn with the current background color.

### Example

[!code-cpp[NVC_MFCDocView#22](../../mfc/codesnippet/cpp/cbrush-class_2.cpp)]

## <a name="createdibpatternbrush"></a> CBrush::CreateDIBPatternBrush

Initializes a brush with the pattern specified by a device-independent bitmap (DIB).

```
BOOL CreateDIBPatternBrush(
    HGLOBAL hPackedDIB,
    UINT nUsage);

BOOL CreateDIBPatternBrush(
    const void* lpPackedDIB,
    UINT nUsage);
```

### Parameters

*hPackedDIB*<br/>
Identifies a global-memory object containing a packed device-independent bitmap (DIB).

*nUsage*<br/>
Specifies whether the `bmiColors[]` fields of the [BITMAPINFO](/windows/win32/api/wingdi/ns-wingdi-bitmapinfo) data structure (a part of the "packed DIB") contain explicit RGB values or indices into the currently realized logical palette. The parameter must be one of the following values:

- DIB_PAL_COLORS The color table consists of an array of 16-bit indexes.

- DIB_RGB_COLORS The color table contains literal RGB values.

*lpPackedDIB*<br/>
Points to a packed DIB consisting of a `BITMAPINFO` structure immediately followed by an array of bytes defining the pixels of the bitmap.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The brush can subsequently be selected for any device context that supports raster operations.

The two versions differ in the way you handle the DIB:

- In the first version, to obtain a handle to the DIB you call the Windows `GlobalAlloc` function to allocate a block of global memory and then fill the memory with the packed DIB.

- In the second version, it is not necessary to call `GlobalAlloc` to allocate memory for the packed DIB.

A packed DIB consists of a `BITMAPINFO` data structure immediately followed by the array of bytes that defines the pixels of the bitmap. Bitmaps used as fill patterns should be 8 pixels by 8 pixels. If the bitmap is larger, Windows creates a fill pattern using only the bits corresponding to the first 8 rows and 8 columns of pixels in the upper-left corner of the bitmap.

When an application selects a two-color DIB pattern brush into a monochrome device context, Windows ignores the colors specified in the DIB and instead displays the pattern brush using the current text and background colors of the device context. Pixels mapped to the first color (at offset 0 in the DIB color table) of the DIB are displayed using the text color. Pixels mapped to the second color (at offset 1 in the color table) are displayed using the background color.

For information about using the following Windows functions, see the Windows SDK:

- [CreateDIBPatternBrush](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrush) (This function is provided only for compatibility with applications written for versions of Windows earlier than 3.0; use the `CreateDIBPatternBrushPt` function.)

- [CreateDIBPatternBrushPt](/windows/win32/api/wingdi/nf-wingdi-createdibpatternbrushpt) (This function should be used for Win32-based applications.)

- [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc)

### Example

[!code-cpp[NVC_MFCDocView#23](../../mfc/codesnippet/cpp/cbrush-class_3.cpp)]

## <a name="createhatchbrush"></a> CBrush::CreateHatchBrush

Initializes a brush with the specified hatched pattern and color.

```
BOOL CreateHatchBrush(
    int nIndex,
    COLORREF crColor);
```

### Parameters

*nIndex*<br/>
Specifies the hatch style of the brush. It can be any one of the following values:

- HS_BDIAGONAL Downward hatch (left to right) at 45 degrees

- HS_CROSS Horizontal and vertical crosshatch

- HS_DIAGCROSS Crosshatch at 45 degrees

- HS_FDIAGONAL Upward hatch (left to right) at 45 degrees

- HS_HORIZONTAL Horizontal hatch

- HS_VERTICAL Vertical hatch

*crColor*<br/>
Specifies the foreground color of the brush as an RGB color (the color of the hatches). See [COLORREF](/windows/win32/gdi/colorref) in the Windows SDK for more information.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The brush can subsequently be selected as the current brush for any device context.

### Example

[!code-cpp[NVC_MFCDocView#24](../../mfc/codesnippet/cpp/cbrush-class_4.cpp)]

## <a name="createpatternbrush"></a> CBrush::CreatePatternBrush

Initializes a brush with a pattern specified by a bitmap.

```
BOOL CreatePatternBrush(CBitmap* pBitmap);
```

### Parameters

*pBitmap*<br/>
Identifies a bitmap.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The brush can subsequently be selected for any device context that supports raster operations. The bitmap identified by *pBitmap* is typically initialized by using the [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap), [CBitmap::CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#createbitmapindirect), [CBitmap::LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap), or [CBitmap::CreateCompatibleBitmap](../../mfc/reference/cbitmap-class.md#createcompatiblebitmap) function.

Bitmaps used as fill patterns should be 8 pixels by 8 pixels. If the bitmap is larger, Windows will only use the bits corresponding to the first 8 rows and columns of pixels in the upper-left corner of the bitmap.

A pattern brush can be deleted without affecting the associated bitmap. This means the bitmap can be used to create any number of pattern brushes.

A brush created using a monochrome bitmap (1 color plane, 1 bit per pixel) is drawn using the current text and background colors. Pixels represented by a bit set to 0 are drawn with the current text color. Pixels represented by a bit set to 1 are drawn with the current background color.

For information about using [CreatePatternBrush](/windows/win32/api/wingdi/nf-wingdi-createpatternbrush), a Windows function, see the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#25](../../mfc/codesnippet/cpp/cbrush-class_5.cpp)]

## <a name="createsolidbrush"></a> CBrush::CreateSolidBrush

Initializes a brush with a specified solid color.

```
BOOL CreateSolidBrush(COLORREF crColor);
```

### Parameters

*crColor*<br/>
A [COLORREF](/windows/win32/gdi/colorref) structure that specifies the color of the brush. The color specifies an RGB value and can be constructed with the RGB macro in WINDOWS.H.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The brush can subsequently be selected as the current brush for any device context.

When an application has finished using the brush created by `CreateSolidBrush`, it should select the brush out of the device context.

### Example

  See the example for [CBrush::CBrush](#cbrush).

## <a name="createsyscolorbrush"></a> CBrush::CreateSysColorBrush

Initializes a brush color.

```
BOOL CreateSysColorBrush(int nIndex);
```

### Parameters

*nIndex*<br/>
Specifies a color index. This value corresponds to the color used to paint one of the 21 window elements. See [GetSysColor](/windows/win32/api/winuser/nf-winuser-getsyscolor) in the Windows SDK for a list of values.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The brush can subsequently be selected as the current brush for any device context.

When an application has finished using the brush created by `CreateSysColorBrush`, it should select the brush out of the device context.

### Example

[!code-cpp[NVC_MFCDocView#26](../../mfc/codesnippet/cpp/cbrush-class_6.cpp)]

## <a name="fromhandle"></a> CBrush::FromHandle

Returns a pointer to a `CBrush` object when given a handle to a Windows [HBRUSH](#operator_hbrush) object.

```
static CBrush* PASCAL FromHandle(HBRUSH hBrush);
```

### Parameters

*hBrush*<br/>
HANDLE to a Windows GDI brush.

### Return Value

A pointer to a `CBrush` object if successful; otherwise NULL.

### Remarks

If a `CBrush` object is not already attached to the handle, a temporary `CBrush` object is created and attached. This temporary `CBrush` object is valid only until the next time the application has idle time in its event loop. At this time, all temporary graphic objects are deleted. In other words, the temporary object is valid only during the processing of one window message.

For more information about using graphic objects, see [Graphic Objects](/windows/win32/gdi/graphic-objects) in the Windows SDK.

### Example

  See the example for [CBrush::CBrush](#cbrush).

## <a name="getlogbrush"></a> CBrush::GetLogBrush

Call this member function to retrieve the `LOGBRUSH` structure.

```
int GetLogBrush(LOGBRUSH* pLogBrush);
```

### Parameters

*pLogBrush*<br/>
Points to a [LOGBRUSH](/windows/win32/api/wingdi/ns-wingdi-logbrush) structure that contains information about the brush.

### Return Value

If the function succeeds, and *pLogBrush* is a valid pointer, the return value is the number of bytes stored into the buffer.

If the function succeeds, and *pLogBrush* is NULL, the return value is the number of bytes required to hold the information the function would store into the buffer.

If the function fails, the return value is 0.

### Remarks

The `LOGBRUSH` structure defines the style, color, and pattern of a brush.

For example, call `GetLogBrush` to match the particular color or pattern of a bitmap.

### Example

[!code-cpp[NVC_MFCDocView#27](../../mfc/codesnippet/cpp/cbrush-class_7.cpp)]

## <a name="operator_hbrush"></a> CBrush::operator HBRUSH

Use this operator to get the attached Windows GDI handle of the `CBrush` object.

```
operator HBRUSH() const;
```

### Return Value

If successful, a handle to the Windows GDI object represented by the `CBrush` object; otherwise NULL.

### Remarks

This operator is a casting operator, which supports direct use of an HBRUSH object.

For more information about using graphic objects, see [Graphic Objects](/windows/win32/gdi/graphic-objects) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#28](../../mfc/codesnippet/cpp/cbrush-class_8.cpp)]

## See also

[MFC Sample PROPDLG](../../overview/visual-cpp-samples.md)<br/>
[CGdiObject Class](../../mfc/reference/cgdiobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CBitmap Class](../../mfc/reference/cbitmap-class.md)<br/>
[CDC Class](../../mfc/reference/cdc-class.md)
