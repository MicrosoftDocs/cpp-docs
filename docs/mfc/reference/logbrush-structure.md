---
title: "LOGBRUSH Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["LOGBRUSH"]
dev_langs: ["C++"]
helpviewer_keywords: ["LOGBRUSH structure [MFC]"]
ms.assetid: 1bf96768-52c5-4444-9bb8-d41ba2e27e68
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# LOGBRUSH Structure
The `LOGBRUSH` structure defines the style, color, and pattern of a physical brush. It is used by the Windows [CreateBrushIndirect](/windows/desktop/api/wingdi/nf-wingdi-createbrushindirect) and [ExtCreatePen](/windows/desktop/api/wingdi/nf-wingdi-extcreatepen) functions.  
  
## Syntax  
  
```  
typedef struct tag LOGBRUSH { /* lb */  
    UINT lbStyle;  
    COLORREF lbColor;  
    LONG lbHatch;  
} LOGBRUSH;  
```  
  
#### Parameters  
 *lbStyle*  
 Specifies the brush style. The `lbStyle` member must be one of the following styles:  
  
- BS_DIBPATTERN A pattern brush defined by a device-independent bitmap (DIB) specification. If *lbStyle* is BS_DIBPATTERN, the `lbHatch` member contains a handle to a packed DIB.  
  
- BS_DIBPATTERNPT A pattern brush defined by a device-independent bitmap (DIB) specification. If *lbStyle* is BS_DIBPATTERNPT, the `lbHatch` member contains a pointer to a packed DIB.  
  
- BS_HATCHED Hatched brush.  
  
- BS_HOLLOW Hollow brush.  
  
- BS_NULL Same as BS_HOLLOW.  
  
- BS_PATTERN Pattern brush defined by a memory bitmap.  
  
- BS_SOLID Solid brush.  
  
 *lbColor*  
 Specifies the color in which the brush is to be drawn. If *lbStyle* is the BS_HOLLOW or BS_PATTERN style, *lbColor* is ignored. If *lbStyle* is BS_DIBPATTERN or BS_DIBPATTERNBT, the low-order word of *lbColor* specifies whether the `bmiColors` members of the [BITMAPINFO](../../mfc/reference/bitmapinfo-structure.md) structure contain explicit red, green, blue (RGB) values or indices into the currently realized logical palette. The `lbColor` member must be one of the following values:  
  
- DIB_PAL_COLORS The color table consists of an array of 16-bit indices into the currently realized logical palette.  
  
- DIB_RGB_COLORS The color table contains literal RGB values.  
  
 *lbHatch*  
 Specifies a hatch style. The meaning depends on the brush style defined by *lbStyle*. If *lbStyle* is BS_DIBPATTERN, the `lbHatch` member contains a handle to a packed DIB. If *lbStyle* is BS_DIBPATTERNPT, the `lbHatch` member contains a pointer to a packed DIB. If *lbStyle* is BS_HATCHED, the `lbHatch` member specifies the orientation of the lines used to create the hatch. It can be one of the following values:  
  
- HS_BDIAGONAL A 45-degree upward, left-to-right hatch  
  
- HS_CROSS Horizontal and vertical crosshatch  
  
- HS_DIAGCROSS 45-degree crosshatch  
  
- HS_FDIAGONAL A 45-degree downward, left-to-right hatch  
  
- HS_HORIZONTAL Horizontal hatch  
  
- HS_VERTICAL Vertical hatch  
  
 If *lbStyle* is BS_PATTERN, *lbHatch* is a handle to the bitmap that defines the pattern. If *lbStyle* is BS_SOLID or BS_HOLLOW, *lbHatch* is ignored.  
  
## Remarks  
 Although *lbColor* controls the foreground color of a hatch brush, the [CDC::SetBkMode](../../mfc/reference/cdc-class.md#setbkmode) and [CDC::SetBkColor](../../mfc/reference/cdc-class.md#setbkcolor) functions control the background color.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

