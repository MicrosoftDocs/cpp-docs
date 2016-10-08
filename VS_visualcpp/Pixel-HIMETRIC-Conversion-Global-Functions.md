---
title: "Pixel-HIMETRIC Conversion Global Functions"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: Pixel/HIMETRIC Conversion Global Functions
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
caps.latest.revision: 14
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
# Pixel-HIMETRIC Conversion Global Functions
These functions provide support for converting to and from pixel and HIMETRIC units.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the                 Windows Runtime.  
  
|||  
|-|-|  
|[AtlHiMetricToPixel](../Topic/AtlHiMetricToPixel.md)|Converts HIMETRIC units (each unit is 0.01 millimeter) to pixels.|  
|[AtlPixelToHiMetric](../Topic/AtlPixelToHiMetric.md)|Converts pixels to HIMETRIC units (each unit is 0.01 millimeter).|  
  
##  <a name="atlhimetrictopixel"></a>  AtlHiMetricToPixel  
 Converts an object's size in HIMETRIC units (each unit is 0.01 millimeter) to a size in pixels on the screen device.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the                     Windows Runtime.  
  
```  
extern void           AtlHiMetricToPixel(  
        const SIZEL* lpSizeInHiMetric,  
    LPSIZEL lpSizeInPix );  
```  
  
### Parameters  
 `lpSizeInHiMetric`  
 [in] Pointer to the size of the object in HIMETRIC units.  
  
 `lpSizeInPix`  
 [out] Pointer to where the object's size in pixels is to be returned.  
  
### Example  
 [!CODE [NVC_ATL_COM#49](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#49)]  
  
##  <a name="atlpixeltohimetric"></a>  AtlPixelToHiMetric  
 Converts an object's size in pixels on the screen device to a size in HIMETRIC units (each unit is 0.01 millimeter).  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the                     Windows Runtime.  
  
```  
extern void           AtlPixelToHiMetric(  
        const SIZEL* lpSizeInPix,  
    LPSIZEL lpSizeInHiMetric );  
```  
  
### Parameters  
 `lpSizeInPix`  
 [in] Pointer to the object's size in pixels.  
  
 `lpSizeInHiMetric`  
 [out] Pointer to where the object's size in HIMETRIC units is to be returned.  
  
### Example  
 [!CODE [NVC_ATL_COM#51](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_COM#51)]  
  
## See Also  
 [Functions](../VS_visualcpp/ATL-Functions.md)