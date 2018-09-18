---
title: "ABCFLOAT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["ABCFLOAT"]
dev_langs: ["C++"]
helpviewer_keywords: ["ABCFLOAT structure [MFC]"]
ms.assetid: 338e7e15-9d2c-42d0-aa80-273acfde5cc5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ABCFLOAT Structure

The `ABCFLOAT` structure contains the A, B, and C widths of a font character.

## Syntax

```
typedef struct _ABCFLOAT { /* abcf */
    FLOAT abcfA;
    FLOAT abcfB;
    FLOAT abcfC;
} ABCFLOAT;
```

#### Parameters

*abcfA*<br/>
Specifies the A spacing of the character. The A spacing is the distance to add to the current position before drawing the character glyph.

*abcfB*<br/>
Specifies the B spacing of the character. The B spacing is the width of the drawn portion of the character glyph.

*abcfC*<br/>
Specifies the C spacing of the character. The C spacing is the distance to add to the current position to provide white space to the right of the character glyph.

## Remarks

The A, B, and C widths are measured along the base line of the font. The character increment (total width) of a character is the sum of the A, B, and C spaces. Either the A or the C space can be negative to indicate underhangs or overhangs.

## Requirements

**Header:** wingdi.h

## See Also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)

