---
title: "AFX_GLOBAL_DATA::DrawTextOnGlass"
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
ms.assetid: c4054a35-d9db-424a-8606-3c658230576e
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# AFX_GLOBAL_DATA::DrawTextOnGlass
Draws the specified text in the visual style of the specified theme.  
  
## Syntax  
  
```  
BOOL DrawTextOnGlass(  
   HTHEME hTheme,   
   CDC* pDC,   
   int iPartId,   
   int iStateId,   
   CString strText,   
   CRect rect,   
   DWORD dwFlags,   
   int nGlowSize = 0,   
   COLORREF clrText = (COLORREF)-1  
);  
```  
  
#### Parameters  
 [in] `hTheme`  
 Handle to the theme data of a window, or `NULL`. The framework uses the specified theme to draw the text if this parameter is not `NULL` and themes are supported. Otherwise, the framework does not use a theme to draw the text.  
  
 Use the [OpenThemeData](http://msdn.microsoft.com/library/windows/desktop/bb759821) method to create an `HTHEME`.  
  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `iPartId`  
 The control part that has the desired text appearance. For more information, see the Parts column of the table in [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210). If this value is 0, the text is drawn in the default font, or a font selected into the device context.  
  
 [in] `iStateId`  
 The control state that has the desired text appearance. For more information, see the States column of the table in [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210).  
  
 [in] `strText`  
 The text to draw.  
  
 [in] `rect`  
 The boundary of the area in which the specified text is drawn.  
  
 [in] `dwFlags`  
 A bitwise combination (OR) of flags that specify how the specified text is drawn.  
  
 If the `hTheme` parameter is `NULL` or if themes are not supported and enabled, the `nFormat` parameter of the [CDC::DrawText](../Topic/CDC::DrawText.md) method describes the valid flags. If themes are supported, the `dwFlags` parameter of the [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) method describes the valid flags.  
  
 [in] `nGlowSize`  
 The size of a glow effect that is drawn on the background before drawing the specified text. The default value is 0.  
  
 [in] `clrText`  
 The color in which the specified text is drawn. The default value is the default color.  
  
## Return Value  
 `TRUE` if a theme is used to draw the specified text; otherwise, `FALSE`.  
  
## Remarks  
 A theme defines the visual style of an application. For more information, see [Themes and Visual Styles](_inet_themes_visualstyles_overview). A theme is not used to draw the text if the `hTheme` parameter is `NULL`, or if the [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317) method is not supported, or if [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540) (DWM) composition is disabled.  
  
## Requirements  
 **Header:** afxglobals.h  
  
## See Also  
 [AFX_GLOBAL_DATA Structure](../VS_visualcpp/AFX_GLOBAL_DATA-Structure.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Themes and Visual Styles](_inet_themes_visualstyles_overview)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [Parts and States](http://msdn.microsoft.com/library/windows/desktop/bb773210)   
 [CDC::DrawText](../Topic/CDC::DrawText.md)   
 [DrawThemeTextEx](http://msdn.microsoft.com/library/windows/desktop/bb773317)   
 [Desktop Window Manager](http://msdn.microsoft.com/library/windows/desktop/aa969540)   
 [Enable and Control DWM Composition](http://msdn.microsoft.com/library/windows/desktop/aa969538)