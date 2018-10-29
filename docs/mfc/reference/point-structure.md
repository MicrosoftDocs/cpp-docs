---
title: "POINT Structure"
ms.date: "10/12/2018"
f1_keywords: ["POINT", "LPPOINT"]
helpviewer_keywords: ["LPPOINT structure [MFC]", "POINT structure [MFC]"]
ms.assetid: 965736d8-4e53-41b6-9b8b-6961992dd21f
---
# POINT Structure

The `POINT` structure defines the x*-* and y-coordinates of a point.

## Syntax

```
typedef struct tagPOINT {
    LONG x;
    LONG y;
} POINT;
```

#### Parameters

*x*<br/>
Specifies the x-coordinate of a point.

*y*<br/>
Specifies the y-coordinate of a point.

## Example

[!code-cpp[NVC_MFC_Utilities#37](../../mfc/codesnippet/cpp/point-structure1_1.cpp)]

## Requirements

**Header:** windef.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CPoint Class](../../atl-mfc-shared/reference/cpoint-class.md)
