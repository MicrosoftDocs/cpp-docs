---
title: "Pixel-HIMETRIC Conversion Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Pixel/HIMETRIC Conversion Global Functions
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Pixel-HIMETRIC Conversion Global Functions](https://docs.microsoft.com/cpp/atl/reference/pixel-himetric-conversion-global-functions).  
  
  
These functions provide support for converting to and from pixel and HIMETRIC units.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
|||  
|-|-|  
|[AtlHiMetricToPixel](#atlhimetrictopixel)|Converts HIMETRIC units (each unit is 0.01 millimeter) to pixels.|  
|[AtlPixelToHiMetric](#atlpixeltohimetric)|Converts pixels to HIMETRIC units (each unit is 0.01 millimeter).|  
  
##  <a name="atlhimetrictopixel"></a>  AtlHiMetricToPixel  
 Converts an object's size in HIMETRIC units (each unit is 0.01 millimeter) to a size in pixels on the screen device.  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
extern void AtlHiMetricToPixel(
  const SIZEL* lpSizeInHiMetric, 
  LPSIZEL lpSizeInPix);
```  
  
### Parameters  
 `lpSizeInHiMetric`  
 [in] Pointer to the size of the object in HIMETRIC units.  
  
 `lpSizeInPix`  
 [out] Pointer to where the object's size in pixels is to be returned.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#49](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MyControl.cpp#49)]  
  
##  <a name="atlpixeltohimetric"></a>  AtlPixelToHiMetric  
 Converts an object's size in pixels on the screen device to a size in HIMETRIC units (each unit is 0.01 millimeter).  
  
> [!IMPORTANT]
>  This function cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
```
extern void AtlPixelToHiMetric(
    const SIZEL* lpSizeInPix, 
    LPSIZEL lpSizeInHiMetric);
```  
  
### Parameters  
 `lpSizeInPix`  
 [in] Pointer to the object's size in pixels.  
  
 `lpSizeInHiMetric`  
 [out] Pointer to where the object's size in HIMETRIC units is to be returned.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#51](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MyControl.cpp#51)]  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)






