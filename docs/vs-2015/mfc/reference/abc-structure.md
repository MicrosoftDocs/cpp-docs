---
title: "ABC Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ABC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ABC structure"
ms.assetid: 32663839-c3b7-4f47-896c-b15329c96bc8
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ABC Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ABC Structure](https://docs.microsoft.com/cpp/mfc/reference/abc-structure).  
  
  
The **ABC** structure contains the width of a character in a TrueType font.  
  
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
 [CDC::GetCharABCWidths](../../mfc/reference/cdc-class.md#cdc__getcharabcwidths)








