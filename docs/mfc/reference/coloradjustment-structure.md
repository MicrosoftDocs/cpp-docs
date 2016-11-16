---
title: "COLORADJUSTMENT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLORADJUSTMENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLORADJUSTMENT structure"
ms.assetid: 67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# COLORADJUSTMENT Structure
The `COLORADJUSTMENT` structure defines the color adjustment values used by the Windows `StretchBlt` and **StretchDIBits** functions when the `StretchBlt` mode is **HALFTONE**.  
  
## Syntax  
  
```  
typedef struct  tagCOLORADJUSTMENT {    /* ca */  
    WORD caSize;  
    WORD caFlags;  
    WORD caIlluminantIndex;  
    WORD caRedGamma;  
    WORD caGreenGamma;  
    WORD caBlueGamma;  
    WORD caReferenceBlack;  
    WORD caReferenceWhite;  
    SHORT caContrast;  
    SHORT caBrightness;  
    SHORT caColorfulness;  
    SHORT caRedGreenTint;  
} COLORADJUSTMENT;  
```  
  
#### Parameters  
 *caSize*  
 Specifies the size of the structure in bytes.  
  
 *caFlags*  
 Specifies how the output image should be prepared. This member can be set to **NULL** or any combination of the following values:  
  
- **CA_NEGATIVE** Specifies that the negative of the original image should be displayed.  
  
- **CA_LOG_FILTER** Specifies that a logarithmic function should be applied to the final density of the output colors. This will increase the color contrast when the luminance is low.  
  
 *caIlluminantIndex*  
 Specifies the luminance of the light source under which the image object is viewed. This member can be set to one of the following values:  
  
- **ILLUMINANT_EQUAL_ENERGY**  
  
- **ILLUMINANT_A**  
  
- **ILLUMINANT_B**  
  
- **ILLUMINANT_C**  
  
- **ILLUMINANT_D50**  
  
- **ILLUMINANT_D55**  
  
- **ILLUMINANT_D65**  
  
- **ILLUMINANT_D75**  
  
- **ILLUMINANT_F2**  
  
- **ILLUMINANT_TURNGSTEN**  
  
- **ILLUMINANT_DAYLIGHT**  
  
- **ILLUMINANT_FLUORESCENT**  
  
- **ILLUMINANT_NTSC**  
  
 *caRedGamma*  
 Specifies the nth power gamma-correction value for the red primary of the source colors. The value must be in the range from 2,500 to 65,000. A value of 10,000 means no gamma-correction.  
  
 *caGreenGamma*  
 Specifies the nth power gamma-correction value for the green primary of the source colors. The value must be in the range from 2,500 to 65,000. A value of 10,000 means no gamma-correction.  
  
 *caBlueGamma*  
 Specifies the nth power gamma-correction value for the blue primary of the source colors. The value must be in the range from 2,500 to 65,000. A value of 10,000 means no gamma-correction.  
  
 *caReferenceBlack*  
 Specifies the black reference for the source colors. Any colors that are darker than this are treated as black. The value must be in the range from 0 to 4,000.  
  
 *caReferenceWhite*  
 Specifies the white reference for the source colors. Any colors that are lighter than this are treated as white. The value must be in the range from 6,000 to 10,000.  
  
 *caContrast*  
 Specifies the amount of contrast to be applied to the source object. The value must be in the range from -100 to 100. A value of 0 means no contrast adjustment.  
  
 *caBrightness*  
 Specifies the amount of brightness to be applied to the source object. The value must be in the range from -100 to 100. A value of 0 means no brightness adjustment.  
  
 *caColorfulness*  
 Specifies the amount of colorfulness to be applied to the source object. The value must be in the range from -100 to 100. A value of 0 means no colorfulness adjustment.  
  
 *caRedGreenTint*  
 Specifies the amount of red or green tint adjustment to be applied to the source object. The value must be in the range from -100 to 100. Positive numbers would adjust towards red and negative numbers adjust towards green. A 0 means no tint adjustment.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDC::GetColorAdjustment](../../mfc/reference/cdc-class.md#cdc__getcoloradjustment)


