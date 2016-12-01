---
title: "CMFCToolTipCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolTipCtrl class"
ms.assetid: 9fbfcfb1-a8ab-417f-ae29-9a9ca85ee58f
caps.latest.revision: 33
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
# CMFCToolTipCtrl Class
An extended tooltip implementation based on the [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md). A tooltip based on the `CMFCToolTipCtrl` class can display an icon, a label, and a description. You can customize its visual appearance by using a gradient fill, custom text and border colors, bold text, rounded corners, or a balloon style.  
  
## Syntax  
  
```  
class CMFCToolTipCtrl : public CToolTipCtrl  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCToolTipCtrl::CMFCToolTipCtrl`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolTipCtrl::GetIconSize](#cmfctooltipctrl__geticonsize)|Returns the size of an icon in a tooltip.|  
|[CMFCToolTipCtrl::GetParams](#cmfctooltipctrl__getparams)|Returns the display settings of a tooltip.|  
|[CMFCToolTipCtrl::OnDrawBorder](#cmfctooltipctrl__ondrawborder)|Draws the border of a tooltip.|  
|[CMFCToolTipCtrl::OnDrawDescription](#cmfctooltipctrl__ondrawdescription)||  
|[CMFCToolTipCtrl::OnDrawIcon](#cmfctooltipctrl__ondrawicon)|Displays an icon in a tooltip.|  
|[CMFCToolTipCtrl::OnDrawLabel](#cmfctooltipctrl__ondrawlabel)|Draws the label of a tooltip, or calculates the size of the label.|  
|[CMFCToolTipCtrl::OnDrawSeparator](#cmfctooltipctrl__ondrawseparator)|Draws the separator between the label and the description in a tooltip.|  
|[CMFCToolTipCtrl::OnFillBackground](#cmfctooltipctrl__onfillbackground)|Fills the tooltip background.|  
|[CMFCToolTipCtrl::SetDescription](#cmfctooltipctrl__setdescription)|Sets the description to be displayed by the tooltip.|  
|[CMFCToolTipCtrl::SetFixedWidth](#cmfctooltipctrl__setfixedwidth)||  
|[CMFCToolTipCtrl::SetHotRibbonButton](#cmfctooltipctrl__sethotribbonbutton)||  
|[CMFCToolTipCtrl::SetLocation](#cmfctooltipctrl__setlocation)||  
|[CMFCToolTipCtrl::SetParams](#cmfctooltipctrl__setparams)|Specifies the visual appearance of a tooltip by using a `CMFCToolTipInfo` object.|  
  
## Remarks  
 Use `CMFCToolTipCtrl`, `CMFCToolTipInfo`, and [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md) objects together to implement customized tooltips in your application.  
  
 For example, to use balloon-style tooltips, follow these steps:  
  
 1. Use the [CWinAppEx Class](../../mfc/reference/cwinappex-class.md) method to initialize the tooltip manager in your application.  
  
 2. Create a `CMFCToolTipInfo` structure to specify the visual style that you want:  
  
```  
CMFCToolTipInfo params;  
    params.m_bBoldLabel = FALSE;  
    params.m_bDrawDescription = FALSE;  
    params.m_bDrawIcon = FALSE;  
    params.m_bRoundedCorners = TRUE;  
    params.m_bDrawSeparator = FALSE;  
    if (m_bCustomColors)  
 {  
    params.m_clrFill = RGB (255,
    255,
    255);

    params.m_clrFillGradient = RGB (228,
    228,
    240);

    params.m_clrText = RGB (61,
    83,
    80);

    params.m_clrBorder = RGB (144,
    149,
    168);

 }  
```  
  
 3. Use the [CTooltipManager::SetTooltipParams](../../mfc/reference/ctooltipmanager-class.md#ctooltipmanager__settooltipparams) method to set the visual style for all tooltips in the application by using the styles defined in the `CMFCToolTipInfo` object:  
  
```  
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMFCToolTipCtrl), &params);
```  
  
 You can also derive a new class from `CMFCToolTipCtrl` to control tooltip behavior and rendering. To specify a new tooltip control class, use the `CTooltipManager::SetTooltipParams` method:  
  
```  
myApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    RUNTIME_CLASS (CMyToolTipCtrl))  
```  
  
 To restore the default tooltip control class and reset the tooltip appearance to its default state, specify NULL in the runtime class and tooltip info parameters of `SetTooltipParams`:  
  
```  
theApp.GetTooltipManager ()->SetTooltipParams (AFX_TOOLTIP_TYPE_ALL,  
    NULL,
    NULL);
```  
  
## Example  
 The following example demonstrates how to construct a `CMFCToolTipCtrl` object, set the description that the tooltip displays, and set the width of the tooltip control.  
  
 [!code-cpp[NVC_MFC_RibbonApp#41](../../mfc/reference/codesnippet/cpp/cmfctooltipctrl-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CToolTipCtrl](../../mfc/reference/ctooltipctrl-class.md)  
  
 [CMFCToolTipCtrl](../../mfc/reference/cmfctooltipctrl-class.md)  
  
## Requirements  
 **Header:** afxtooltipctrl.h  
  
##  <a name="cmfctooltipctrl__cmfctooltipctrl"></a>  CMFCToolTipCtrl::CMFCToolTipCtrl  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCToolTipCtrl(CMFCToolTipInfo* pParams = NULL);
```  
  
### Parameters  
 [in] `pParams`  
  
### Remarks  
  
##  <a name="cmfctooltipctrl__geticonsize"></a>  CMFCToolTipCtrl::GetIconSize  
 Returns the size of an icon in a tooltip.  
  
```  
virtual CSize GetIconSize();
```  
  
### Return Value  
 The size of the icon, in pixels.  
  
##  <a name="cmfctooltipctrl__getparams"></a>  CMFCToolTipCtrl::GetParams  
 Returns the display settings of a tooltip.  
  
```  
const CMFCToolTipInfo& GetParams() const;

 
```  
  
### Return Value  
 The current tooltip display settings , which are stored in a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object.  
  
##  <a name="cmfctooltipctrl__ondrawborder"></a>  CMFCToolTipCtrl::OnDrawBorder  
 Draws the border of a tooltip.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rect,  
    COLORREF clrLine);
```  
  
### Parameters  
 `[in] pDC`  
 Pointer to a device context.  
  
 `[in] rect`  
 The bounding rectangle of the tooltip.  
  
 `[in] clrLine`  
 Border color.  
  
### Remarks  
 Override this method in a derived class to customize the appearance of the tooltip border.  
  
##  <a name="cmfctooltipctrl__ondrawdescription"></a>  CMFCToolTipCtrl::OnDrawDescription  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize OnDrawDescription(
    CDC* pDC,  
    CRect rect,  
    BOOL bCalcOnly);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `bCalcOnly`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctooltipctrl__ondrawicon"></a>  CMFCToolTipCtrl::OnDrawIcon  
 Displays an icon in a tooltip.  
  
```  
virtual BOOL OnDrawIcon(
    CDC* pDC,  
    CRect rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectImage`  
 Coordinates of the icon.  
  
### Return Value  
 `TRUE` if the icon was drawn. Otherwise `FALSE`.  
  
### Remarks  
 Override this method in a derived class to display a custom icon. You must also override [CMFCToolTipCtrl::GetIconSize](#cmfctooltipctrl__geticonsize) to enable the tooltip to correctly calculate the layout of text and description.  
  
##  <a name="cmfctooltipctrl__ondrawlabel"></a>  CMFCToolTipCtrl::OnDrawLabel  
 Draws the label of a tooltip, or calculates the size of the label.  
  
```  
virtual CSize OnDrawLabel(
    CDC* pDC,  
    CRect rect,  
    BOOL bCalcOnly);
```  
  
### Parameters  
 `[in] pDC`  
 A pointer to a device context.  
  
 `[in] rect`  
 Bounding rectangle of the label area.  
  
 `[in] bCalcOnly`  
 If `TRUE`, the label will not be drawn.  
  
### Return Value  
 Size of the label, in pixels.  
  
### Remarks  
 Override this method in a derived class if you want to customize the appearance of the tooltip label.  
  
##  <a name="cmfctooltipctrl__ondrawseparator"></a>  CMFCToolTipCtrl::OnDrawSeparator  
 Draws the separator between the label and the description in a tooltip.  
  
```  
virtual void OnDrawSeparator(
    CDC* pDC,  
    int x1,  
    int x2,  
    int y);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `x1`  
 Horizontal coordinate of the left end of the separator.  
  
 [in] `x2`  
 Horizontal coordinate of the right end of the separator.  
  
 [in] `Y`  
 Vertical coordinate of the separator.  
  
### Remarks  
 The default implementation draws a line from the point (x1, y) to the point (x2, y).  
  
 Override this method in a derived class to customize the appearance of the separator.  
  
##  <a name="cmfctooltipctrl__onfillbackground"></a>  CMFCToolTipCtrl::OnFillBackground  
 Fills the tooltip background.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    CRect rect,  
    COLORREF& clrText,  
    COLORREF& clrLine);
```  
  
### Parameters  
 `[in] pDC`  
 A pointer to a device context.  
  
 `[in] rect`  
 Specifies the bounding rectangle of the area to fill.  
  
 `[in] clrText`  
 Tooltip foreground color.  
  
 `[in] clrLine`  
 Color of borders and the delimiter line between label and description.  
  
### Remarks  
 The default implementation fills the rectangle that is specified by `rect` with the color or pattern specified by the most recent call to [CMFCToolTipCtrl::SetParams](#cmfctooltipctrl__setparams).  
  
 Override this method in a derived class if you want to customize the appearance of the tooltip.  
  
##  <a name="cmfctooltipctrl__setdescription"></a>  CMFCToolTipCtrl::SetDescription  
 Sets the description to be displayed by the tooltip.  
  
```  
virtual void SetDescription(const CString strDesrciption);
```  
  
### Parameters  
 `[in] strDesrciption`  
 Description text.  
  
### Remarks  
 The description text is displayed on the tooltip under the separator.  
  
##  <a name="cmfctooltipctrl__setfixedwidth"></a>  CMFCToolTipCtrl::SetFixedWidth  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetFixedWidth(
    int nWidthRegular,  
    int nWidthLargeImage);
```  
  
### Parameters  
 [in] `nWidthRegular`  
 [in] `nWidthLargeImage`  
  
### Remarks  
  
##  <a name="cmfctooltipctrl__sethotribbonbutton"></a>  CMFCToolTipCtrl::SetHotRibbonButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetHotRibbonButton(CMFCRibbonButton* pRibbonButton);
```  
  
### Parameters  
 [in] `pRibbonButton`  
  
### Remarks  
  
##  <a name="cmfctooltipctrl__setlocation"></a>  CMFCToolTipCtrl::SetLocation  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetLocation(CPoint pt);
```  
  
### Parameters  
 [in] `pt`  
  
### Remarks  
  
##  <a name="cmfctooltipctrl__setparams"></a>  CMFCToolTipCtrl::SetParams  
 Specifies the visual appearance of a tooltip by using a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object.  
  
```  
void SetParams(CMFCToolTipInfo* pParams);
```  
  
### Parameters  
 `[in] pParams`  
 Pointer to a [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md) object that contains  the display parameters.  
  
### Remarks  
 Whenever the tooltip is displayed, it is drawn by using the colors and visual styles that `pParams` specifies. The value of `pParams` is stored in the protected member `m_Params`, which can be accessed by a derived class that overrides [CMFCToolTipCtrl::OnDrawBorder](#cmfctooltipctrl__ondrawborder), [CMFCToolTipCtrl::OnDrawIcon](#cmfctooltipctrl__ondrawicon), [CMFCToolTipCtrl::OnDrawLabel](#cmfctooltipctrl__ondrawlabel), [CMFCToolTipCtrl::OnDrawSeparator](#cmfctooltipctrl__ondrawseparator), or [CMFCToolTipCtrl::OnFillBackground](#cmfctooltipctrl__onfillbackground) to maintain the specified appearance.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CToolTipCtrl Class](../../mfc/reference/ctooltipctrl-class.md)   
 [CTooltipManager Class](../../mfc/reference/ctooltipmanager-class.md)   
 [CMFCToolTipInfo Class](../../mfc/reference/cmfctooltipinfo-class.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)
