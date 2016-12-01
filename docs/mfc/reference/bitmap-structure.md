---
title: "BITMAP Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BITMAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BITMAP structure"
ms.assetid: 05d33b4d-7232-4643-a108-87dda8ff5f22
caps.latest.revision: 12
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
# BITMAP Structure
The **BITMAP** structure defines the height, width, color format, and bit values of a logical bitmap**.**  
  
## Syntax  
  
```  
typedef struct tagBITMAP {  /* bm */  
    int bmType;  
    int bmWidth;  
    int bmHeight;  
    int bmWidthBytes;  
    BYTE bmPlanes;  
    BYTE bmBitsPixel;  
    LPVOID bmBits;  
} BITMAP;  
```  
  
#### Parameters  
 *bmType*  
 Specifies the bitmap type. For logical bitmaps, this member must be 0.  
  
 *bmWidth*  
 Specifies the width of the bitmap in pixels. The width must be greater than 0.  
  
 *bmHeight*  
 Specifies the height of the bitmap in raster lines. The height must be greater than 0.  
  
 *bmWidthBytes*  
 Specifies the number of bytes in each raster line. This value must be an even number since the graphics device interface (GDI) assumes that the bit values of a bitmap form an array of integer (2-byte) values. In other words, **bmWidthBytes** \* 8 must be the next multiple of 16 greater than or equal to the value obtained when the **bmWidth** member is multiplied by the **bmBitsPixel** member.  
  
 *bmPlanes*  
 Specifies the number of color planes in the bitmap.  
  
 *bmBitsPixel*  
 Specifies the number of adjacent color bits on each plane needed to define a pixel.  
  
 *bmBits*  
 Points to the location of the bit values for the bitmap. The **bmBits** member must be a long pointer to an array of 1-byte values.  
  
## Remarks  
 The currently used bitmap formats are monochrome and color. The monochrome bitmap uses a 1-bit, 1-plane format. Each scan is a multiple of 16 bits.  
  
 Scans are organized as follows for a monochrome bitmap of height *n*:  
  
 `Scan 0`  
  
 `Scan 1`  
  
 `.`  
  
 `.`  
  
 `.`  
  
 `Scan n-2`  
  
 `Scan n-1`  
  
 The pixels on a monochrome device are either black or white. If the corresponding bit in the bitmap is 1, the pixel is turned on (white). If the corresponding bit in the bitmap is 0, the pixel is turned off (black).  
  
 All devices support bitmaps that have the **RC_BITBLT** bit set in the **RASTERCAPS** index of the [CDC::GetDeviceCaps](../../mfc/reference/cdc-class.md#cdc__getdevicecaps) member function.  
  
 Each device has its own unique color format. In order to transfer a bitmap from one device to another, use the [GetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd144879) and [SetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd162973) Windows functions.  
  
## Requirements  
 **Header:** wingdi.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CBitmap::CreateBitmapIndirect](../../mfc/reference/cbitmap-class.md#cbitmap__createbitmapindirect)
