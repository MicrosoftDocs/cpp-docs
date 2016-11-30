---
title: "CMFCPropertyGridToolTipCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertyGridToolTipCtrl::PreTranslateMessage"
  - "~CMFCPropertyGridToolTipCtrl"
  - "PreTranslateMessage"
  - "CMFCPropertyGridToolTipCtrl.~CMFCPropertyGridToolTipCtrl"
  - "CMFCPropertyGridToolTipCtrl"
  - "CMFCPropertyGridToolTipCtrl.PreTranslateMessage"
  - "CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertyGridToolTipCtrl class"
  - "CMFCPropertyGridToolTipCtrl class, destructor"
  - "PreTranslateMessage method"
  - "~CMFCPropertyGridToolTipCtrl destructor"
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
caps.latest.revision: 24
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
# CMFCPropertyGridToolTipCtrl Class
Implements a tooltip control that the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) uses to display tooltips.  
  
## Syntax  
  
```  
class CMFCPropertyGridToolTipCtrl : public CWnd  
```  
  
## Members  
  
### Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl__cmfcpropertygridtooltipctrl)|Constructs a `CMFCPropertyGridToolTipCtrl` object.|  
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Destructor.|  
  
### Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCPropertyGridToolTipCtrl::Create](#cmfcpropertygridtooltipctrl__create)|Creates a window for the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::Deactivate](#cmfcpropertygridtooltipctrl__deactivate)|Deactivates and hides the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#cmfcpropertygridtooltipctrl__getlastrect)|Returns the coordinates of the last position of the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::Hide](#cmfcpropertygridtooltipctrl__hide)|Hides the tooltip control.|  
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#cwnd__pretranslatemessage).)|  
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#cmfcpropertygridtooltipctrl__settextmargin)|Sets the spacing between the tooltip text and the border of the tooltip window.|  
|[CMFCPropertyGridToolTipCtrl::Track](#cmfcpropertygridtooltipctrl__track)|Displays the tooltip control.|  
  
## Remarks  
 Tooltips are displayed when the pointer rests on a property name. The [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) class displays a tooltip so that it is easily readable by the user. Usually, the position of a tooltip is determined by the position of the pointer. By using this class, the tooltip appears over the property name and resembles the natural property extension, so that the property name is fully visible.  
  
 MFC automatically creates this control and uses it in the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## Example  
 The following example demonstrates how to construct an object of the `CMFCPropertyGridToolTipCtrl` class, and how to display the tooltip control.  
  
 [!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)  
  
## Requirements  
 **Header:** afxpropertygridtooltipctrl.h  
  
##  <a name="cmfcpropertygridtooltipctrl__cmfcpropertygridtooltipctrl"></a>  CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl  
 Constructs a `CMFCPropertyGridToolTipCtrl` object.  
  
```  
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```  
  
##  <a name="cmfcpropertygridtooltipctrl__create"></a>  CMFCPropertyGridToolTipCtrl::Create  
 Creates a window for the tooltip control.  
  
```  
BOOL Create(CWnd* pWndParent);
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the parent window.  
  
### Return Value  
 TRUE if the window was successfully created; otherwise, FALSE.  
  
##  <a name="cmfcpropertygridtooltipctrl__deactivate"></a>  CMFCPropertyGridToolTipCtrl::Deactivate  
 Deactivates and hides the tooltip control.  
  
```  
void Deactivate();
```  
  
### Remarks  
 This method sets the last position and text to empty values, so that future calls to [CMFCPropertyGridToolTipCtrl::Track](#cmfcpropertygridtooltipctrl__track) display the tooltip.  
  
##  <a name="cmfcpropertygridtooltipctrl__getlastrect"></a>  CMFCPropertyGridToolTipCtrl::GetLastRect  
 Returns the coordinates of the last position of the tooltip control.  
  
```  
void GetLastRect(CRect& rect) const;

 
```  
  
### Parameters  
 [out] `rect`  
 Contains the last position of the tooltip control.  
  
##  <a name="cmfcpropertygridtooltipctrl__hide"></a>  CMFCPropertyGridToolTipCtrl::Hide  
 Hides the tooltip control.  
  
```  
void Hide();
```  
  
##  <a name="cmfcpropertygridtooltipctrl__settextmargin"></a>  CMFCPropertyGridToolTipCtrl::SetTextMargin  
 Sets the spacing between the tooltip text and the border of the tooltip window.  
  
```  
void SetTextMargin(int nTextMargin);
```  
  
### Parameters  
 [in] `nTextMargin`  
 Specifies the spacing between the tooltip control text and the border of the tooltip window. The default value is 10 pixels.  
  
##  <a name="cmfcpropertygridtooltipctrl__track"></a>  CMFCPropertyGridToolTipCtrl::Track  
 Displays the tooltip control.  
  
```  
void Track(
    CRect rect,  
    const CString& strText);
```  
  
### Parameters  
 [in] `rect`  
 Specifies the position and size of the tooltip control.  
  
 [in] `strText`  
 Specifies the text to be shown in the tooltip.  
  
### Remarks  
 This method displays the tooltip control at the position and size specified by `rect`. If the position, size, and text have not changed since the last time this method was called, this method has no effect.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
