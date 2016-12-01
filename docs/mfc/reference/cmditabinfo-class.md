---
title: "CMDITabInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDITabInfo"
  - "CMDITabInfo.CMDITabInfo"
  - "CMDITabInfo::CMDITabInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDITabInfo class"
  - "CMDITabInfo class, constructor"
ms.assetid: 988ae1b7-4f7f-4239-b88f-7e28b3291c5e
caps.latest.revision: 37
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
# CMDITabInfo Class
The `CMDITabInfo` class is used to pass parameters to [CMDIFrameWndEx::EnableMDITabbedGroups](../../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__enablemditabbedgroups) method. Set members of this class to control the behavior of MDI tabbed groups.  
  
## Syntax  
  
```  
class CMDITabInfo   
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMDITabInfo::CMDITabInfo`|Default constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMDITabInfo::Serialize](#cmditabinfo__serialize)|Reads or writes this object from or to an archive.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMDITabInfo::m_bActiveTabCloseButton;](#cmditabinfo__m_bactivetabclosebutton_)|Specifies whether a **Close** button is displayed on the label of the active tab.|  
|[CMDITabInfo::m_bAutoColor](#cmditabinfo__m_bautocolor)|Specifies whether to color the MDI tabs.|  
|[CMDITabInfo::m_bDocumentMenu](#cmditabinfo__m_bdocumentmenu)|Specifies whether the tab group displays a popup menu that shows a list of opened documents or displays scroll buttons.|  
|[CMDITabInfo::m_bEnableTabSwap](#cmditabinfo__m_benabletabswap)|Specifies whether the user can swap the positions of tabs by dragging.|  
|[CMDITabInfo::m_bFlatFrame](#cmditabinfo__m_bflatframe)|Specifies whether tabs have a flat frame.|  
|[CMDITabInfo::m_bTabCloseButton](#cmditabinfo__m_btabclosebutton)|Specifies whether each tab label displays a **Close** button.|  
|[CMDITabInfo::m_bTabCustomTooltips](#cmditabinfo__m_btabcustomtooltips)|Specifies whether custom tooltips are enabled.|  
|[CMDITabInfo::m_bTabIcons](#cmditabinfo__m_btabicons)|Specifies whether to display icons on MDI tabs.|  
|[CMDITabInfo::m_nTabBorderSize](#cmditabinfo__m_ntabbordersize)|Specifies the border size of each tab window.|  
|[CMDITabInfo::m_style](#cmditabinfo__m_style)|Specifies the style of the tab labels.|  
|[CMDITabInfo::m_tabLocation](#cmditabinfo__m_tablocation)|Specifies whether the tabs labels are located at the top or the bottom of the page.|  
  
## Remarks  
 This class specifies the parameters of the MDI tab groups that the framework creates.  
  
## Example  
 The following example demonstrates how to set the values of the various member variables in `CMDITabInfo` class.  
  
 [!code-cpp[NVC_MFC_MDITab#1](../../mfc/reference/codesnippet/cpp/cmditabinfo-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CMDITabInfo](../../mfc/reference/cmditabinfo-class.md)  
  
## Requirements  
 **Header:** afxmdiclientareawnd.h  
  
##  <a name="cmditabinfo__m_bactivetabclosebutton_"></a>  CMDITabInfo::m_bActiveTabCloseButton;  
 Specifies whether a **Close** button is displayed on the label of the active tab.  
  
```  
BOOL m_bActiveTabCloseButton;  
```  
  
### Remarks  
 If `TRUE`, the label of the active tab will display a **Close** button. The **Close** button will be removed from the right top corner of the tab area. Otherwise, the label of the active tab will not display a **Close** button. The **Close** button will appear in the right top corner of the tab area.  
  
##  <a name="cmditabinfo__m_bautocolor"></a>  CMDITabInfo::m_bAutoColor  
 Specifies whether each MDI tab has its own color.  
  
```  
BOOL m_bAutoColor;  
```  
  
### Remarks  
 If `TRUE`, each tab will have its own color. The set of colors is managed by the MFC library. Otherwise, the tabs are displayed in white. The default value is `FALSE`.  
  
##  <a name="cmditabinfo__m_bdocumentmenu"></a>  CMDITabInfo::m_bDocumentMenu  
 Specifies whether each tab displays a popup menu that shows a list of  opened documents at the right edge of the tab area.  
  
```  
BOOL m_bDocumentMenu;  
```  
  
### Remarks  
 If `TRUE`, each tab windows displays a popup menu that shows a list of opened documents at the right edge of the tab area; Otherwise, the tab window displays scroll buttons at the right edge of the tab area. The default value is `FALSE`.  
  
##  <a name="cmditabinfo__m_benabletabswap"></a>  CMDITabInfo::m_bEnableTabSwap  
 Specifies whether the user can swap the positions of tabs by dragging.  
  
```  
BOOL m_bEnableTabSwap;  
```  
  
### Remarks  
 If `TRUE`, the user can change the tabs positions by dragging the tabs. Otherwise, the user cannot change the tabs positions. The default value is `TRUE`.  
  
##  <a name="cmditabinfo__m_bflatframe"></a>  CMDITabInfo::m_bFlatFrame  
 Specifies whether each tab window has a flat frame.  
  
```  
BOOL m_bFlatFrame;  
```  
  
##  <a name="cmditabinfo__m_btabclosebutton"></a>  CMDITabInfo::m_bTabCloseButton  
 Specifies whether each tab window displays a **Close** button.  
  
```  
BOOL m_bTabCloseButton;  
```  
  
### Remarks  
 If `TRUE`, each tab window displays the **Close** button on the right edge of the tab. Otherwise, the **Close** button is not displayed. The default value is `TRUE`.  
  
##  <a name="cmditabinfo__m_btabcustomtooltips"></a>  CMDITabInfo::m_bTabCustomTooltips  
 Specifies whether the tabs display tooltips.  
  
```  
BOOL m_bTabCustomTooltips;  
```  
  
### Remarks  
 If `TRUE`, the application sends an `AFX_WM_ON_GET_TAB_TOOLTIP` message to the main frame. You can handle this message by using the `ON_REGISTERED_MESSAGE` macro.  
  
##  <a name="cmditabinfo__m_btabicons"></a>  CMDITabInfo::m_bTabIcons  
 Specifies whether to display icons on MDI tabs.  
  
```  
BOOL m_bTabIcons;  
```  
  
### Remarks  
 If `TRUE`, icons are displayed on each MDI tab. Otherwise, icons are not displayed on tabs. The default value is `FALSE`.  
  
##  <a name="cmditabinfo__m_ntabbordersize"></a>  CMDITabInfo::m_nTabBorderSize  
 Specifies the border size, in pixels, of each tab window.  
  
```  
int m_nTabBorderSize;  
```  
  
### Remarks  
 [CMFCVisualManager::GetMDITabsBordersSize](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__getmditabsborderssize) returns the default value.  
  
##  <a name="cmditabinfo__m_style"></a>  CMDITabInfo::m_style  
 Specifies the style of the tab labels.  
  
```  
CMFCTabCtrl::Style m_style  
```  
  
### Remarks  
 Specify one of the following styles for the tab labels:  
  
 `STYLE_3D`  
 3D style.  
  
 `STYLE_3D_ONENOTE`  
 Microsoft OneNote style.  
  
 `STYLE_3D_VS2005`  
 Microsoft Visual Studio 2005 style.  
  
 `STYLE_3D_SCROLLED`  
 3D style with rectangle tab labels.  
  
 `STYLE_FLAT_SHARED_HORZ_SCROLL`  
 Flat style with shared horizontal scroll bar.  
  
 `STYLE_3D_ROUNDED_SCROLL`  
 3D style with round tab labels.  
  
##  <a name="cmditabinfo__m_tablocation"></a>  CMDITabInfo::m_tabLocation  
 Specifies whether the tabs labels are located at the top or the bottom of the page.  
  
```  
CMFCTabCtrl::Location m_tabLocation;  
```  
  
### Remarks  
 Apply to the tabs one of the following location flags:  
  
-   LOCATION_BOTTOM: the tabs labels are located at the bottom of the page.  
  
-   LOCATION_TOP: the tabs labels are located at the top of the page  
  
##  <a name="cmditabinfo__serialize"></a>  CMDITabInfo::Serialize  
 Reads or writes this object from an archive or to an archive.  
  
```  
void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
 A [CArchive Class](../../mfc/reference/carchive-class.md) object to serialize.  
  
## See Also  
 [CMDIFrameWndEx Class](../../mfc/reference/cmdiframewndex-class.md)   
 [MDI Tabbed Groups](../../mfc/mdi-tabbed-groups.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
