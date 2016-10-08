---
title: "AFX_GLOBAL_DATA::SetMenuFont"
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
ms.assetid: e121e599-715f-4ed3-8ca9-d4fc603447b5
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
# AFX_GLOBAL_DATA::SetMenuFont
Creates the specified logical font.  
  
## Syntax  
  
```  
BOOL SetMenuFont(  
   LPLOGFONT lpLogFont,  
   BOOL bHorz  
);  
```  
  
#### Parameters  
 [in] `lpLogFont`  
 Pointer to a structure that contains the attributes of a font.  
  
 [in] `bHorz`  
 `TRUE` to specify that the text runs horizontally; `FALSE` to specify that the text runs vertically.  
  
## Return Value  
 `TRUE` if this method succeeds; otherwise, `FALSE`. In debug mode, this method asserts if this method is unsuccessful.  
  
## Remarks  
 This method creates a horizontal regular font, an underlined font, and a bold font that is used in default menu items. This method optionally creates a regular vertical font. For more information about logical fonts, see [CFont::CreateFontIndirect](../Topic/CFont::CreateFontIndirect.md).  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/bb773327)   
 [CFont::CreateFontIndirect](../Topic/CFont::CreateFontIndirect.md)