---
title: "ABC Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["ABC"]
dev_langs: ["C++"]
helpviewer_keywords: ["ABC structure [MFC]"]
ms.assetid: 32663839-c3b7-4f47-896c-b15329c96bc8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# ABC Structure
The `ABC` structure contains the width of a character in a TrueType font.  
  
## Syntax  
  
```  
typedef struct _ABC { /* abc */  
    int abcA;  
    UINT abcB;  
    int abcC;  
} ABC;  
```  
  
#### Parameters  
 *abcA*  
 Specifies the A spacing of the character. The A spacing is the distance to add to the current position before drawing the character glyph.  
  
 *abcB*  
 Specifies the B spacing of the character. The B spacing is the width of the drawn portion of the character glyph.  
  
 *abcC*  
 Specifies the C spacing of the character. The C spacing is the distance to add to the current position to provide white space to the right of the character glyph.  
  
## Remarks  
 The total width of a character is the summation of the A, B, and C spaces. Either the A or the C space can be negative to indicate underhangs or overhangs.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#getcharabcwidths)


