---
title: "CMFCToolTipInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolTipInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolTipInfo class"
ms.assetid: f9d3d7f8-1f08-4342-a7b2-683860e5d2a5
caps.latest.revision: 27
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
# CMFCToolTipInfo Class
Stores information about the visual appearance of tooltips.  
  
## Syntax  
  
```  
class CMFCToolTipInfo  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolTipInfo::operator=](#cmfctooltipinfo__operator_eq)||  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolTipInfo::m_bBalloonTooltip](#cmfctooltipinfo__m_bballoontooltip)|A Boolean variable that indicates whether the tooltip has a balloon appearance.|  
|[CMFCToolTipInfo::m_bBoldLabel](#cmfctooltipinfo__m_bboldlabel)|A Boolean variable that indicates whether tooltip labels are displayed in a bold font.|  
|[CMFCToolTipInfo::m_bDrawDescription](#cmfctooltipinfo__m_bdrawdescription)|A Boolean variable that indicates whether the tooltip contains a description.|  
|[CMFCToolTipInfo::m_bDrawIcon](#cmfctooltipinfo__m_bdrawicon)|A Boolean variable that indicates whether the tooltip contains an icon.|  
|[CMFCToolTipInfo::m_bDrawSeparator](#cmfctooltipinfo__m_bdrawseparator)|A Boolean variable that indicates whether a separator is displayed between the tooltip label and the tooltip description.|  
|[CMFCToolTipInfo::m_bRoundedCorners](#cmfctooltipinfo__m_broundedcorners)|A Boolean variable that indicates whether the tooltip has rounded corners.|  
|[CMFCToolTipInfo::m_bVislManagerTheme](#cmfctooltipinfo__m_bvislmanagertheme)|A Boolean variable that indicates whether the appearance of the tooltip should be controlled by a visual manager (see [CMFCVisualManager Class](../../mfc/reference/cmfcvisualmanager-class.md)).|  
|[CMFCToolTipInfo::m_clrBorder](#cmfctooltipinfo__m_clrborder)|The color of the tooltip border.|  
|[CMFCToolTipInfo::m_clrFill](#cmfctooltipinfo__m_clrfill)|The color of the tooltip background.|  
|[CMFCToolTipInfo::m_clrFillGradient](#cmfctooltipinfo__m_clrfillgradient)|The color of the gradient fill in the tooltip.|  
|[CMFCToolTipInfo::m_clrText](#cmfctooltipinfo__m_clrtext)|The text color in the tooltip.|  
|[CMFCToolTipInfo::m_nGradientAngle](#cmfctooltipinfo__m_ngradientangle)|The angle of the gradient fill in the tooltip.|  
|[CMFCToolTipInfo::m_nMaxDescrWidth](#cmfctooltipinfo__m_nmaxdescrwidth)|The maximum possible width, in pixels, of the description in the tooltip.|  
  
## Remarks  
 Use [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md), `CMFCToolTipInfo`, and [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) together to implement customized tooltips in your application. For an example of how to use these tooltip classes, see the [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md) topic.  
  
## Example  
 The following example demonstrates how to set the values of the various member variables in the `CMFCToolTipInfo` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#42](../../mfc/reference/codesnippet/cpp/cmfctooltipinfo-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md)  
  
## Requirements  
 **Header:** afxtooltipctrl.h  
  
##  <a name="cmfctooltipinfo__m_bballoontooltip"></a>  CMFCToolTipInfo::m_bBalloonTooltip  
 Specifies the display style of all tooltips.  
  
```  
BOOL m_bBalloonTooltip;  
```  
  
### Remarks  
 `TRUE` indicates that tooltips use the balloon style, `FALSE` indicates that tooltips use the rectangular style.  
  
##  <a name="cmfctooltipinfo__m_bboldlabel"></a>  CMFCToolTipInfo::m_bBoldLabel  
 Specifies whether the font of the tooltip text is bold.  
  
```  
BOOL m_bBoldLabel;  
```  
  
### Remarks  
 Set this member to `TRUE` to display tooltip text with bold font, or `FALSE` to display tooltip labels with non-bold font.  
  
##  <a name="cmfctooltipinfo__m_bdrawdescription"></a>  CMFCToolTipInfo::m_bDrawDescription  
 Specifies whether each tooltip displays description text.  
  
```  
BOOL m_bDrawDescription;  
```  
  
### Remarks  
 Set this member to `TRUE` to display the description, or `FALSE` to hide the description. You can specify the description on a tooltip by calling [CMFCToolTipCtrl::SetDescription](../../mfc/reference/cmfctooltipctrl-class.md#cmfctooltipctrl__setdescription)  
  
##  <a name="cmfctooltipinfo__m_bdrawicon"></a>  CMFCToolTipInfo::m_bDrawIcon  
 Specifies whether all tooltips display icons.  
  
```  
BOOL m_bDrawIcon;  
```  
  
### Remarks  
 Set this member to `TRUE` to display an icon on each tooltip, or `FALSE` to display tooltips without icons.  
  
##  <a name="cmfctooltipinfo__m_bdrawseparator"></a>  CMFCToolTipInfo::m_bDrawSeparator  
 Specifies whether each tooltip has a separator between its label and its description.  
  
```  
BOOL m_bDrawSeparator;  
```  
  
### Remarks  
 Set this member to `TRUE` to display separator between tooltip label and description, or `FALSE` to display tooltips with no separator.  
  
##  <a name="cmfctooltipinfo__m_broundedcorners"></a>  CMFCToolTipInfo::m_bRoundedCorners  
 Specifies whether all tooltips have rounded corners.  
  
```  
BOOL m_bRoundedCorners;  
```  
  
### Remarks  
 Set this member to `TRUE` to display rounded corners on tooltips, or `FALSE` to display rectangular corners on tooltips.  
  
##  <a name="cmfctooltipinfo__m_clrborder"></a>  CMFCToolTipInfo::m_clrBorder  
 Specifies the color of the borders on all tooltips.  
  
```  
COLORREF m_clrBorder;  
```  
  
##  <a name="cmfctooltipinfo__m_clrfill"></a>  CMFCToolTipInfo::m_clrFill  
 Specifies the color of tooltip backgrounds.  
  
```  
COLORREF m_clrFill;  
```  
  
### Remarks  
 If [CMFCToolTipInfo::m_clrFillGradient](#cmfctooltipinfo__m_clrfillgradient) is -1, the tooltip background color is `m_clrFill`. Otherwise, `m_clrFill` specifies the color of the beginning of the gradient and `m_clrFillGradient` specifies the color of the end of the gradient. [CMFCToolTipInfo::m_nGradientAngle](#cmfctooltipinfo__m_ngradientangle) determines the direction of the gradient.  
  
##  <a name="cmfctooltipinfo__m_clrfillgradient"></a>  CMFCToolTipInfo::m_clrFillGradient  
 Specifies the end color for a gradient background for tooltips.  
  
```  
COLORREF m_clrFillGradient;  
```  
  
### Remarks  
 If `m_clrFillGradient` is -1, there is no gradient. Otherwise, the gradient initial color is specified by [CMFCToolTipInfo::m_clrFill](#cmfctooltipinfo__m_clrfill) and the gradient finish color is specified by `m_clrFillGradient`. [CMFCToolTipInfo::m_nGradientAngle](#cmfctooltipinfo__m_ngradientangle) determines the direction of the gradient.  
  
##  <a name="cmfctooltipinfo__m_clrtext"></a>  CMFCToolTipInfo::m_clrText  
 Specifies text color of all tooltips.  
  
```  
COLORREF m_clrText;  
```  
  
##  <a name="cmfctooltipinfo__m_ngradientangle"></a>  CMFCToolTipInfo::m_nGradientAngle  
 Specifies the angle at which a gradient is drawn on the background of tooltips.  
  
```  
int m_nGradientAngle;  
```  
  
### Remarks  
 `m_nGradientAngle` specifies the angle, in degrees, that the gradient on the background of tooltips is offset from horizontal. If `m_nGradientAngle` is 0, the gradient is drawn from left to right. If `m_nGradientAngle` is between 1 and 360, the gradient is rotating clockwise by that number of degrees. If `m_nGradientAngle` is -1, which is the default value, the gradient is drawn from top to bottom. This is the same as setting `m_nGradientAngle` to 90.  
  
 [CMFCToolTipInfo::m_clrFill](#cmfctooltipinfo__m_clrfill) `clrFill` specifies the color of the beginning of the gradient and [CMFCToolTipInfo::m_clrFillGradient](#cmfctooltipinfo__m_clrfillgradient) `clrFillGradient` specifies the color of the end of the gradient. If `m_clrFillGradient` is -1, there is no gradient.  
  
##  <a name="cmfctooltipinfo__m_nmaxdescrwidth"></a>  CMFCToolTipInfo::m_nMaxDescrWidth  
 Specifies the maximum width of the description that it displayed in each tooltip. If the description width exceeds the specified value, the text is wrapped.  
  
```  
int m_nMaxDescrWidth;  
```  
  
##  <a name="cmfctooltipinfo__m_bvislmanagertheme"></a>  CMFCToolTipInfo::m_bVislManagerTheme  
 Specifies whether the visual manager of the application controls the appearance of all tooltips.  
  
```  
BOOL m_bVislManagerTheme;  
```  
  
### Remarks  
 If `m_bVislManagerTheme` is `TRUE`, every tooltip requests a new [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) from the visual manager of the application before they appear on the screen, and uses the values in that object to determine their appearance. The other members of your [CMFCToolTipInfo](../../mfc/reference/cmfctooltipinfo-class.md) are ignored.  
  
##  <a name="cmfctooltipinfo__operator_eq"></a>  CMFCToolTipInfo::operator=  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCToolTipInfo& operator=(CMFCToolTipInfo& src);
```  
  
### Parameters  
 [in] `src`  
  
### Return Value  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md)   
 [CMFCToolTipCtrl Class](../../mfc/reference/cmfctooltipctrl-class.md)
