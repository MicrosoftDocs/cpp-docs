---
title: "CMFCDynamicLayout::MoveSettings Structure"
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
ms.assetid: 48a9bd38-5067-4407-8751-eafb01b150a8
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
# CMFCDynamicLayout::MoveSettings Structure
Encapsulates move data for controls in a dynamic layout.  
  
## Syntax  
  
```  
struct CMFCDynamicLayout::MoveSettings;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`MoveSettings`|Constructs the object with zero default values.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[MoveSettings::IsHorizontal](../VS_visualcpp/MoveSettings--IsHorizontal.md)|Checks if the move data specifies a nonzero horizontal movement.|  
|[MoveSettings::IsNone](../VS_visualcpp/MoveSettings--IsNone.md)|Checks if the move data specifies no movement.|  
|[MoveSettings::IsVertical](../VS_visualcpp/MoveSettings--IsVertical.md)|Checks if the move data specifies a nonzero vertical movement.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_nXRatio`|The amount to move horizontally, as a percentage.|  
|`m_nYRatio`|The amount to move vertically, as a percentage.|  
  
## Remarks  
 This is a nested class inside `CMFCDynamicLayout`.  
  
## Requirements  
 **Header:** afxlayout.h  
  
## See Also  
 [CMFCDynamicLayout Class](../VS_visualcpp/CMFCDynamicLayout-Class.md)   
 [CMFCDynamicLayout::SizeSettings Structure](../VS_visualcpp/CMFCDynamicLayout--SizeSettings-Structure.md)