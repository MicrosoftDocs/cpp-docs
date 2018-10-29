---
title: "BITMAPINFO Structure"
ms.date: "11/04/2016"
f1_keywords: ["BITMAPINFO"]
helpviewer_keywords: ["BITMAPINFO structure [MFC]"]
ms.assetid: a00caa49-e4df-419f-89a7-ab03c13a1b5b
---
# BITMAPINFO Structure

The `BITMAPINFO` structure defines the dimensions and color information for a Windows device-independent bitmap (DIB).

## Syntax

```
typedef struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
} BITMAPINFO;
```

#### Parameters

*bmiHeader*<br/>
Specifies a [BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376) structure that contains information about the dimensions and color format of a device-independent bitmap.

*bmiColors*<br/>
Specifies an array of [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) or DWORD data types that define the colors in the bitmap.

## Remarks

A device-independent bitmap consists of two distinct parts: a `BITMAPINFO` structure that describes the dimensions and colors of the bitmap, and an array of bytes that specify the pixels in the bitmap. The bits in the array are packed together, but each scan line must be padded with zeros to end on a **LONG** boundary. If the height is positive, the origin of the bitmap is the lower-left corner. If the height is negative, the origin is the upper-left corner.

A *packed bitmap* is a bitmap where the byte array immediately follows the `BITMAPINFO` structure. Packed bitmaps are referenced by a single pointer.

For more information about the `BITMAPINFO` structure and appropriate values for members of the `BITMAPINFOHEADER` and `RGBQUAD` structures, see the following topics in the Windows SDK documentation.

- [BITMAPINFO structure](/windows/desktop/api/wingdi/ns-wingdi-tagbitmapinfo)

- [BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376) structure

- [RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad) structure

## Requirements

**Header:** wingdi.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CBrush::CreateDIBPatternBrush](../../mfc/reference/cbrush-class.md#createdibpatternbrush)<br/>
[BITMAPINFOHEADER](https://msdn.microsoft.com/library/windows/desktop/dd183376)<br/>
[RGBQUAD](/windows/desktop/api/wingdi/ns-wingdi-tagrgbquad)

