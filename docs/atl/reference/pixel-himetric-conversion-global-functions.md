---
title: "Pixel-HIMETRIC Conversion Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/02/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ecb1b1b2-7e9d-4fbc-a855-16252d2d794c
caps.latest.revision: 18
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
# Pixel/HIMETRIC Conversion Global Functions
These functions provide support for converting to and from pixel and HIMETRIC units.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
|||  
|-|-|  
|[AtlHiMetricToPixel](../Topic/AtlHiMetricToPixel.md)|Converts HIMETRIC units (each unit is 0.01 millimeter) to pixels.|  
|[AtlPixelToHiMetric](../Topic/AtlPixelToHiMetric.md)|Converts pixels to HIMETRIC units (each unit is 0.01 millimeter).|  
  
##  <a name="atlhimetrictopixel"></a>  AtlHiMetricToPixel  
 Converts an object's size in HIMETRIC units (each unit is 0.01 millimeter) to a size in pixels on the screen device.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
extern void           AtlHiMetricToPixel(
    const SIZEL* lpSizeInHiMetric,  LPSIZEL lpSizeInPix);
```  
  
### Parameters  
 `lpSizeInHiMetric`  
 [in] Pointer to the size of the object in HIMETRIC units.  
  
 `lpSizeInPix`  
 [out] Pointer to where the object's size in pixels is to be returned.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#49](../../atl/codesnippet/CPP/pixel-himetric-conversion-global-functions_1.cpp)]  
  
##  <a name="atlpixeltohimetric"></a>  AtlPixelToHiMetric  
 Converts an object's size in pixels on the screen device to a size in HIMETRIC units (each unit is 0.01 millimeter).  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
extern void           AtlPixelToHiMetric(
    const SIZEL* lpSizeInPix,  LPSIZEL lpSizeInHiMetric);
```  
  
### Parameters  
 `lpSizeInPix`  
 [in] Pointer to the object's size in pixels.  
  
 `lpSizeInHiMetric`  
 [out] Pointer to where the object's size in HIMETRIC units is to be returned.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#51](../../atl/codesnippet/CPP/pixel-himetric-conversion-global-functions_2.cpp)]  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)





