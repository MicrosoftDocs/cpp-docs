---
description: "Learn more about: CFont Class"
title: "CFont Class"
ms.date: "11/04/2016"
f1_keywords: ["CFont", "AFXWIN/CFont", "AFXWIN/CFont::CFont", "AFXWIN/CFont::CreateFont", "AFXWIN/CFont::CreateFontIndirect", "AFXWIN/CFont::CreatePointFont", "AFXWIN/CFont::CreatePointFontIndirect", "AFXWIN/CFont::FromHandle", "AFXWIN/CFont::GetLogFont"]
helpviewer_keywords: ["CFont [MFC], CFont", "CFont [MFC], CreateFont", "CFont [MFC], CreateFontIndirect", "CFont [MFC], CreatePointFont", "CFont [MFC], CreatePointFontIndirect", "CFont [MFC], FromHandle", "CFont [MFC], GetLogFont"]
ms.assetid: 3fad6bfe-d6ce-4ab9-967a-5ce0aa102800
---
# CFont Class

Encapsulates a Windows graphics device interface (GDI) font and provides member functions for manipulating the font.

## Syntax

```
class CFont : public CGdiObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFont::CFont](#cfont)|Constructs a `CFont` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFont::CreateFont](#createfont)|Initializes a `CFont` with the specified characteristics.|
|[CFont::CreateFontIndirect](#createfontindirect)|Initializes a `CFont` object with the characteristics given in a `LOGFONT` structure.|
|[CFont::CreatePointFont](#createpointfont)|Initializes a `CFont` with the specified height, measured in tenths of a point, and typeface.|
|[CFont::CreatePointFontIndirect](#createpointfontindirect)|Same as `CreateFontIndirect` except that the font height is measured in tenths of a point rather than logical units.|
|[CFont::FromHandle](#fromhandle)|Returns a pointer to a `CFont` object when given a Windows HFONT.|
|[CFont::GetLogFont](#getlogfont)|Fills a `LOGFONT` with information about the logical font attached to the `CFont` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CFont::operator HFONT](#operator_hfont)|Returns the Windows GDI font handle attached to the `CFont` object.|

## Remarks

To use a `CFont` object, construct a `CFont` object and attach a Windows font to it with [CreateFont](#createfont), [CreateFontIndirect](#createfontindirect), [CreatePointFont](#createpointfont), or [CreatePointFontIndirect](#createpointfontindirect), and then use the object's member functions to manipulate the font.

The `CreatePointFont` and `CreatePointFontIndirect` functions are often easier to use than `CreateFont` or `CreateFontIndirect` since they do the conversion for the height of the font from a point size to logical units automatically.

For more information on `CFont`, see [Graphic Objects](../../mfc/graphic-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CGdiObject](../../mfc/reference/cgdiobject-class.md)

`CFont`

## Requirements

**Header:** afxwin.h

## <a name="cfont"></a> CFont::CFont

Constructs a `CFont` object.

```
CFont();
```

### Remarks

The resulting object must be initialized with `CreateFont`, `CreateFontIndirect`, `CreatePointFont`, or `CreatePointFontIndirect` before it can be used.

### Example

[!code-cpp[NVC_MFCDocView#70](../../mfc/codesnippet/cpp/cfont-class_1.cpp)]

## <a name="createfont"></a> CFont::CreateFont

Initializes a `CFont` object with the specified characteristics.

```
BOOL CreateFont(
    int nHeight,
    int nWidth,
    int nEscapement,
    int nOrientation,
    int nWeight,
    BYTE bItalic,
    BYTE bUnderline,
    BYTE cStrikeOut,
    BYTE nCharSet,
    BYTE nOutPrecision,
    BYTE nClipPrecision,
    BYTE nQuality,
    BYTE nPitchAndFamily,
    LPCTSTR lpszFacename);
```

### Parameters

*nHeight*<br/>
Specifies the desired height (in logical units) of the font. See the `lfHeight` member of the [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)structure in the Windows SDK for a description. The absolute value of *nHeight* must not exceed 16,384 device units after it is converted. For all height comparisons, the font mapper looks for the largest font that does not exceed the requested size or the smallest font if all the fonts exceed the requested size.

*nWidth*<br/>
Specifies the average width (in logical units) of characters in the font. If *nWidth* is 0, the aspect ratio of the device will be matched against the digitization aspect ratio of the available fonts to find the closest match, which is determined by the absolute value of the difference.

*nEscapement*<br/>
Specifies the angle (in 0.1-degree units) between the escapement vector and the x-axis of the display surface. The escapement vector is the line through the origins of the first and last characters on a line. The angle is measured counterclockwise from the x-axis. See the `lfEscapement` member in the `LOGFONT` structure in the Windows SDK for more information.

*nOrientation*<br/>
Specifies the angle (in 0.1-degree units) between the baseline of a character and the x-axis. The angle is measured counterclockwise from the x-axis for coordinate systems in which the y-direction is down and clockwise from the x-axis for coordinate systems in which the y-direction is up.

*nWeight*<br/>
Specifies the font weight (in inked pixels per 1000). See the *lfWeight* member in the `LOGFONT` structure in the Windows SDK for more information. The described values are approximate; the actual appearance depends on the typeface. Some fonts have only FW_NORMAL, FW_REGULAR, and FW_BOLD weights. If FW_DONTCARE is specified, a default weight is used.

*bItalic*<br/>
Specifies whether the font is italic.

*bUnderline*<br/>
Specifies whether the font is underlined.

*cStrikeOut*<br/>
Specifies whether characters in the font are struck out. Specifies a strikeout font if set to a nonzero value.

*nCharSet*<br/>
Specifies the font's character setSee the `lfCharSet` member in the `LOGFONT` structure in the Windows SDK for a list of values.

The OEM character set is system-dependent.

Fonts with other character sets may exist in the system. An application that uses a font with an unknown character set must not attempt to translate or interpret strings that are to be rendered with that font. Instead, the strings should be passed directly to the output device driver.

The font mapper does not use the DEFAULT_CHARSET value. An application can use this value to allow the name and size of a font to fully describe the logical font. If a font with the specified name does not exist, a font from any character set can be substituted for the specified font. To avoid unexpected results, applications should use the DEFAULT_CHARSET value sparingly.

*nOutPrecision*<br/>
Specifies the desired output precision. The output precision defines how closely the output must match the requested font's height, width, character orientation, escapement, and pitch. See the `lfOutPrecision` member in the `LOGFONT` structure in the Windows SDK for a list of values and more information.

*nClipPrecision*<br/>
Specifies the desired clipping precision. The clipping precision defines how to clip characters that are partially outside the clipping region. See the `lfClipPrecision` member in the `LOGFONT` structure in the Windows SDK for a list of values.

To use an embedded read-only font, an application must specify CLIP_ENCAPSULATE.

To achieve consistent rotation of device, TrueType, and vector fonts, an application can use the OR operator to combine the CLIP_LH_ANGLES value with any of the other *nClipPrecision* values. If the CLIP_LH_ANGLES bit is set, the rotation for all fonts depends on whether the orientation of the coordinate system is left-handed or right-handed. (For more information about the orientation of coordinate systems, see the description of the *nOrientation* parameter.) If CLIP_LH_ANGLES is not set, device fonts always rotate counterclockwise, but the rotation of other fonts is dependent on the orientation of the coordinate system.

*nQuality*<br/>
Specifies the font's output quality, which defines how carefully the GDI must attempt to match the logical-font attributes to those of an actual physical font. See the `lfQuality` member in the `LOGFONT` structure in the Windows SDK for a list of values.

*nPitchAndFamily*<br/>
Specifies the pitch and family of the font. See the `lfPitchAndFamily` member in the `LOGFONT` structure in the Windows SDK for a list of values and more information.

*lpszFacename*<br/>
A `CString` or pointer to a null-terminated string that specifies the typeface name of the font. The length of this string must not exceed 30 characters. The Windows [EnumFontFamilies](/windows/win32/api/wingdi/nf-wingdi-enumfontfamiliesw) function can be used to enumerate all currently available fonts. If *lpszFacename* is NULL, the GDI uses a device-independent typeface.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The font can subsequently be selected as the font for any device context.

The `CreateFont` function does not create a new Windows GDI font. It merely selects the closest match from the physical fonts available to the GDI.

Applications can use the default settings for most parameters when creating a logical font. The parameters that should always be given specific values are *nHeight* and *lpszFacename*. If *nHeight* and *lpszFacename* are not set by the application, the logical font that is created is device-dependent.

When you finish with the `CFont` object created by the `CreateFont` function, use `CDC::SelectObject` to select a different font into the device context, then delete the `CFont` object that is no longer needed.

### Example

[!code-cpp[NVC_MFCDocView#71](../../mfc/codesnippet/cpp/cfont-class_2.cpp)]

## <a name="createfontindirect"></a> CFont::CreateFontIndirect

Initializes a `CFont` object with the characteristics given in a [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw)structure.

```
BOOL CreateFontIndirect(const LOGFONT* lpLogFont);
```

### Parameters

*lpLogFont*<br/>
Points to a `LOGFONT` structure that defines the characteristics of the logical font.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The font can subsequently be selected as the current font for any device.

This font has the characteristics specified in the [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure. When the font is selected by using the [CDC::SelectObject](../../mfc/reference/cdc-class.md#selectobject) member function, the GDI font mapper attempts to match the logical font with an existing physical font. If the font mapper fails to find an exact match for the logical font, it provides an alternative font whose characteristics match as many of the requested characteristics as possible.

When you no longer need the `CFont` object created by the `CreateFontIndirect` function, use `CDC::SelectObject` to select a different font into the device context, then delete the `CFont` object that is no longer needed.

### Example

[!code-cpp[NVC_MFCDocView#72](../../mfc/codesnippet/cpp/cfont-class_3.cpp)]

## <a name="createpointfont"></a> CFont::CreatePointFont

This function provides a simple way to create a font of a specified typeface and point size.

```
BOOL CreatePointFont(
    int nPointSize,
    LPCTSTR lpszFaceName,
    CDC* pDC = NULL);
```

### Parameters

*nPointSize*<br/>
Requested font height in tenths of a point. (For instance, pass 120 to request a 12-point font.)

*lpszFaceName*<br/>
A `CString` or pointer to a null-terminated string that specifies the typeface name of the font. The length of this string must not exceed 30 characters. The Windows `EnumFontFamilies function can be used to enumerate all currently available fonts. If *lpszFaceName* is NULL, the GDI uses a device-independent typeface.

*pDC*<br/>
Pointer to the [CDC](../../mfc/reference/cdc-class.md) object to be used to convert the height in *nPointSize* to logical units. If NULL, a screen device context is used for the conversion.

### Return Value

Nonzero if successful, otherwise 0.

### Remarks

It automatically converts the height in *nPointSize* to logical units using the CDC object pointed to by *pDC*.

When you finish with the `CFont` object created by the `CreatePointFont` function, first select the font out of the device context, then delete the `CFont` object.

### Example

[!code-cpp[NVC_MFCDocView#73](../../mfc/codesnippet/cpp/cfont-class_4.cpp)]

## <a name="createpointfontindirect"></a> CFont::CreatePointFontIndirect

This function is the same as [CreateFontIndirect](#createfontindirect) except that the `lfHeight` member of the `LOGFONT` is interpreted in tenths of a point rather than device units.

```
BOOL CreatePointFontIndirect(
    const LOGFONT* lpLogFont,
    CDC* pDC = NULL);
```

### Parameters

*lpLogFont*<br/>
Points to a [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure that defines the characteristics of the logical font. The `lfHeight` member of the `LOGFONT` structure is measured in tenths of a point rather than logical units. (For instance, set `lfHeight` to 120 to request a 12-point font.)

*pDC*<br/>
Pointer to the [CDC](../../mfc/reference/cdc-class.md) object to be used to convert the height in `lfHeight` to logical units. If NULL, a screen device context is used for the conversion.

### Return Value

Nonzero if successful, otherwise 0.

### Remarks

This function automatically converts the height in `lfHeight` to logical units using the CDC object pointed to by *pDC* before passing the `LOGFONT` structure on to Windows.

When you finish with the `CFont` object created by the `CreatePointFontIndirect` function, first select the font out of the device context, then delete the `CFont` object.

### Example

[!code-cpp[NVC_MFCDocView#74](../../mfc/codesnippet/cpp/cfont-class_5.cpp)]

## <a name="fromhandle"></a> CFont::FromHandle

Returns a pointer to a `CFont` object when given an HFONT handle to a Windows GDI font object.

```
static CFont* PASCAL FromHandle(HFONT hFont);
```

### Parameters

*hFont*<br/>
An HFONT handle to a Windows font.

### Return Value

A pointer to a `CFont` object if successful; otherwise NULL.

### Remarks

If a `CFont` object is not already attached to the handle, a temporary `CFont` object is created and attached. This temporary `CFont` object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is valid only during the processing of one window message.

### Example

[!code-cpp[NVC_MFCDocView#75](../../mfc/codesnippet/cpp/cfont-class_6.cpp)]

## <a name="getlogfont"></a> CFont::GetLogFont

Call this function to retrieve a copy of the `LOGFONT` structure for `CFont`.

```
int GetLogFont(LOGFONT* pLogFont);
```

### Parameters

*pLogFont*<br/>
Pointer to the [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure to receive the font information.

### Return Value

Nonzero if the function succeeds, otherwise 0.

### Example

[!code-cpp[NVC_MFCDocView#76](../../mfc/codesnippet/cpp/cfont-class_7.cpp)]

## <a name="operator_hfont"></a> CFont::operator HFONT

Use this operator to get the Windows GDI handle of the font attached to the `CFont` object.

```
operator HFONT() const;
```

### Return Value

The handle of the Windows GDI font object attached to `CFont` if successful; otherwise NULL.

### Remarks

Since this operator is automatically used for conversions from `CFont` to [Fonts and Text](/windows/win32/gdi/fonts-and-text), you can pass `CFont` objects to functions that expect HFONTs.

For more information about using graphic objects, see [Graphic Objects](/windows/win32/gdi/graphic-objects) in the Windows SDK.

### Example

[!code-cpp[NVC_MFCDocView#77](../../mfc/codesnippet/cpp/cfont-class_8.cpp)]

## See also

[MFC Sample HIERSVR](../../overview/visual-cpp-samples.md)<br/>
[CGdiObject Class](../../mfc/reference/cgdiobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
