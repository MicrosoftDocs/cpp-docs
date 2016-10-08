---
title: "CMFCDynamicLayout::SizeSettings Structure"
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
ms.topic: reference
ms.assetid: a5ce1a7a-6802-49d7-90f9-7fc6046e5f1d
caps.latest.revision: 6
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
# CMFCDynamicLayout::SizeSettings Structure
Encapsulates size change data for controls in a dynamic layout.  
  
## Syntax  
  
```  
struct CMFCDynamicLayout::SizeSettings;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`SizeSettings`|Constructs the object with zero default values.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SizeSettings::IsHorizontal](../VS_visualcpp/SizeSettings--IsHorizontal.md)|Checks if the resize data specifies a nonzero horizontal resizing.|  
|[SizeSettings::IsNone](../VS_visualcpp/SizeSettings--IsNone.md)|Checks if the resize data specifies no resizing.|  
|[SizeSettings::IsVertical](../VS_visualcpp/SizeSettings--IsVertical.md)|Checks if the resize data specifies a nonzero vertical resizing.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_nXRatio`|The amount to resize horizontally, as a percentage.|  
|`m_nYRatio`|The amount to resize vertically, as a percentage.|  
  
## Remarks  
 This is a nested class inside `CMFCDynamicLayout`.  
  
## Requirements  
 **Header:** afxlayout.h  
  
## See Also  
 [CMFCDynamicLayout Class](../VS_visualcpp/CMFCDynamicLayout-Class.md)   
 [CMFCDynamicLayout::MoveSettings Structure](../VS_visualcpp/CMFCDynamicLayout--MoveSettings-Structure.md)