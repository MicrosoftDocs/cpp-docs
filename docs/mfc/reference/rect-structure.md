---
title: "RECT Structure"
ms.date: "11/04/2016"
f1_keywords: ["LPRECT", "RECT"]
helpviewer_keywords: ["RECT structure [MFC]", "LPRECT structure [MFC]"]
ms.assetid: 1b3160de-64e9-40d1-89eb-af3e0fd6acf0
---
# RECT Structure

The `RECT` structure defines the coordinates of the upper-left and lower-right corners of a rectangle.

## Syntax

```
typedef struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} RECT;
```

## Members

`left`<br/>
Specifies the x-coordinate of the upper-left corner of a rectangle.

`top`<br/>
Specifies the y-coordinate of the upper-left corner of a rectangle.

`right`<br/>
Specifies the x-coordinate of the lower-right corner of a rectangle.

`bottom`<br/>
Specifies the y-coordinate of the lower-right corner of a rectangle.

## Example

[!code-cpp[NVC_MFC_Utilities#38](../../mfc/codesnippet/cpp/rect-structure1_1.cpp)]

## Requirements

**Header:** windef.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CRect Class](../../atl-mfc-shared/reference/crect-class.md)
