---
title: "RGNDATA Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "RGNDATA"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RGNDATA structure"
ms.assetid: 72257c00-f440-4dca-979e-9b6b5b2d5f2f
caps.latest.revision: 14
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
 *rdh*  
 Specifies a [RGNDATAHEADER](http://msdn.microsoft.com/library/windows/desktop/dd162941) structure. (For more information on this structure, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].) The members of this structure specify the type of region (whether it is rectangular or trapezoidal), the number of rectangles that make up the region, the size of the buffer that contains the rectangle structures, and so on.  
  
 `Buffer`  
 Specifies an arbitrary-size buffer that contains the [RECT](../../mfc/reference/rect-structure1.md) structures that make up the region.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CRgn::CreateFromData](../../mfc/reference/crgn-class.md#crgn__createfromdata)   
 [CRgn::GetRegionData](../../mfc/reference/crgn-class.md#crgn__getregiondata)

