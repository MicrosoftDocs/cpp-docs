---
title: "RGNDATA Structure"
ms.date: "11/04/2016"
f1_keywords: ["RGNDATA"]
helpviewer_keywords: ["RGNDATA structure [MFC]"]
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
---
# RGNDATA Structure

The `RGNDATA` structure contains a header and an array of rectangles that compose a region. These rectangles, sorted top to bottom left to right, do not overlap.

## Syntax

```
typedef struct _RGNDATA { /* rgnd */
    RGNDATAHEADER rdh;
    char Buffer[1];
} RGNDATA;
```

#### Parameters

*rdh*<br/>
Specifies a [RGNDATAHEADER](/windows/desktop/api/wingdi/ns-wingdi-_rgndataheader) structure. (For more information on this structure, see the Windows SDK.) The members of this structure specify the type of region (whether it is rectangular or trapezoidal), the number of rectangles that make up the region, the size of the buffer that contains the rectangle structures, and so on.

*Buffer*<br/>
Specifies an arbitrary-size buffer that contains the [RECT](../../mfc/reference/rect-structure1.md) structures that make up the region.

## Requirements

**Header:** wingdi.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRgn::CreateFromData](../../mfc/reference/crgn-class.md#createfromdata)<br/>
[CRgn::GetRegionData](../../mfc/reference/crgn-class.md#getregiondata)

