---
title: "ABCFLOAT Structure"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 338e7e15-9d2c-42d0-aa80-273acfde5cc5
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
 *abcfA*  
 Specifies the A spacing of the character. The A spacing is the distance to add to the current position before drawing the character glyph.  
  
 *abcfB*  
 Specifies the B spacing of the character. The B spacing is the width of the drawn portion of the character glyph.  
  
 *abcfC*  
 Specifies the C spacing of the character. The C spacing is the distance to add to the current position to provide white space to the right of the character glyph.  
  
## Remarks  
 The A, B, and C widths are measured along the base line of the font. The character increment (total width) of a character is the sum of the A, B, and C spaces. Either the A or the C space can be negative to indicate underhangs or overhangs.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../VS_visualcpp/Structures--Styles--Callbacks--and-Message-Maps.md)   
 [CDC::GetCharABCWidths](../Topic/CDC::GetCharABCWidths.md)