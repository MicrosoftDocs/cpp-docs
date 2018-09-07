---
title: "LOGPEN Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["LOGPEN"]
dev_langs: ["C++"]
helpviewer_keywords: ["LOGPEN structure [MFC]"]
ms.assetid: a89e8690-6b61-4af5-990c-7c82da24f3b0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# LOGPEN Structure
The `LOGPEN` structure defines the style, width, and color of a pen, a drawing object used to draw lines and borders. The [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect) function uses the `LOGPEN` structure.  
  
## Syntax  
  
```  
typedef struct tagLOGPEN {  /* lgpn */  
    UINT lopnStyle;  
    POINT lopnWidth;  
    COLORREF lopnColor;  
} LOGPEN;  
```  
  
#### Parameters  
 *lopnStyle*  
 Specifies the pen type. This member can be one of the following values:  
  
- PS_SOLID Creates a solid pen.  
  
- PS_DASH Creates a dashed pen. (Valid only when the pen width is 1.)  
  
- PS_DOT Creates a dotted pen. (Valid only when the pen width is 1.)  
  
- PS_DASHDOT Creates a pen with alternating dashes and dots. (Valid only when the pen width is 1.)  
  
- PS_DASHDOTDOT Creates a pen with alternating dashes and double dots. (Valid only when the pen width is 1.)  
  
- PS_NULL Creates a null pen.  
  
- PS_INSIDEFRAME Creates a pen that draws a line inside the frame of closed shapes produced by GDI output functions that specify a bounding rectangle (for example, the `Ellipse`, `Rectangle`, `RoundRect`, `Pie`, and `Chord` member functions). When this style is used with GDI output functions that do not specify a bounding rectangle (for example, the `LineTo` member function), the drawing area of the pen is not limited by a frame.  
  
     If a pen has the PS_INSIDEFRAME style and a color that does not match a color in the logical color table, the pen is drawn with a dithered color. The PS_SOLID pen style cannot be used to create a pen with a dithered color. The PS_INSIDEFRAME style is identical to PS_SOLID if the pen width is less than or equal to 1.  
  
     When the PS_INSIDEFRAME style is used with GDI objects produced by functions other than `Ellipse`, `Rectangle`, and `RoundRect`, the line may not be completely inside the specified frame.  
  
 *lopnWidth*  
 Specifies the pen width, in logical units. If the `lopnWidth` member is 0, the pen is 1 pixel wide on raster devices regardless of the current mapping mode.  
  
 *lopnColor*  
 Specifies the pen color.  
  
## Remarks  
 The `y` value in the [POINT](../../mfc/reference/point-structure1.md) structure for the `lopnWidth` member is not used.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CPen::CreatePenIndirect](../../mfc/reference/cpen-class.md#createpenindirect)

