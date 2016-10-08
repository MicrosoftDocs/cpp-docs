---
title: "CMFCRibbonLinkCtrl Class"
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
ms.assetid: 77ae1941-e0ab-4a9d-911e-1752d34c079b
caps.latest.revision: 18
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
# CMFCRibbonLinkCtrl Class
Implements a hyperlink that is positioned on a ribbon. The hyperlink opens a Web page when you click it.  
  
## Syntax  
  
```  
class CMFCRibbonLinkCtrl : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl](#cmfcribbonlinkctrl__cmfcribbonlinkctrl)|Constructs and initializes a `CMFCRibbonLinkCtrl` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonLinkCtrl::CopyFrom](#cmfcribbonlinkctrl__copyfrom)|(Overrides `CMFCRibbonButton::CopyFrom`.)|  
|[CMFCRibbonLinkCtrl::GetCompactSize](#cmfcribbonlinkctrl__getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../VS_visualcpp/CMFCRibbonButton-Class.md#cmfcribbonbutton__getcompactsize).)|  
|[CMFCRibbonLinkCtrl::GetLink](#cmfcribbonlinkctrl__getlink)|Returns the value of the hyperlink.|  
|[CMFCRibbonLinkCtrl::GetRegularSize](#cmfcribbonlinkctrl__getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../VS_visualcpp/CMFCRibbonButton-Class.md#cmfcribbonbutton__getregularsize).)|  
|[CMFCRibbonLinkCtrl::GetToolTipText](#cmfcribbonlinkctrl__gettooltiptext)|(Overrides [CMFCRibbonButton::GetToolTipText](../VS_visualcpp/CMFCRibbonButton-Class.md#cmfcribbonbutton__gettooltiptext).)|  
|[CMFCRibbonLinkCtrl::IsDrawTooltipImage](#cmfcribbonlinkctrl__isdrawtooltipimage)|(Overrides `CMFCRibbonButton::IsDrawTooltipImage`.)|  
|[CMFCRibbonLinkCtrl::OnDraw](#cmfcribbonlinkctrl__ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../VS_visualcpp/CMFCRibbonButton-Class.md#cmfcribbonbutton__ondraw).)|  
|[CMFCRibbonLinkCtrl::OnDrawMenuImage](#cmfcribbonlinkctrl__ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../VS_visualcpp/CMFCRibbonBaseElement-Class.md#cmfcribbonbaseelement__ondrawmenuimage).)|  
|[CMFCRibbonLinkCtrl::OnMouseMove](#cmfcribbonlinkctrl__onmousemove)|(Overrides `CMFCRibbonButton::OnMouseMove`.)|  
|[CMFCRibbonLinkCtrl::OnSetIcon](#cmfcribbonlinkctrl__onseticon)||  
|[CMFCRibbonLinkCtrl::OpenLink](#cmfcribbonlinkctrl__openlink)|Opens the Web page specified in the hyperlink.|  
|[CMFCRibbonLinkCtrl::SetLink](#cmfcribbonlinkctrl__setlink)|Sets the value of the hyperlink.|  
  
## Remarks  
 After you create a hyperlink, add it to a panel by calling [CMFCRibbonPanel::Add](../VS_visualcpp/CMFCRibbonPanel-Class.md#cmfcribbonpanel__add).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md) [CMFCRibbonBaseElement](../VS_visualcpp/CMFCRibbonBaseElement-Class.md)  
  
 [CMFCRibbonButton](../VS_visualcpp/CMFCRibbonButton-Class.md) [CMFCRibbonLinkCtrl](../VS_visualcpp/CMFCRibbonLinkCtrl-Class.md)  
  
## Requirements  
 **Header:** afxRibbonLinkCtrl.h  
  
##  <a name="cmfcribbonlinkctrl__cmfcribbonlinkctrl"></a>  CMFCRibbonLinkCtrl::CMFCRibbonLinkCtrl  
 Constructs and initializes a [CMFCRibbonLinkCtrl](../VS_visualcpp/CMFCRibbonLinkCtrl-Class.md) object.  
  
```  
CMFCRibbonLinkCtrl(  
    UINT nID,  
    LPCTSTR lpszText,  
    LPCTSTR lpszLink   
);  
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command ID of the command that executes when the link control is clicked.  
  
 [in] `lpszText`  
 Specifies the label to display on the link control.  
  
 [in] `lpszLink`  
 Specifies the hyperlink associated with the link control.  
  
### Example  
 The following example demonstrates how to use the constructor of the `CMFCRibbonLinkCtrl` class. This code snippet is part of the [Ribbon Gadgets sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_RibbonGadgets#1](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_RibbonGadgets#1)]  
  
##  <a name="cmfcribbonlinkctrl__copyfrom"></a>  CMFCRibbonLinkCtrl::CopyFrom  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void CopyFrom(  
   const CMFCRibbonBaseElement& src  
);  
```  
  
### Parameters  
 [in] `src`  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__getcompactsize"></a>  CMFCRibbonLinkCtrl::GetCompactSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetCompactSize(  
   CDC* pDC  
);  
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__getlink"></a>  CMFCRibbonLinkCtrl::GetLink  
 Returns the value of the hyperlink.  
  
```  
LPCTSTR GetLink() const;  
```  
  
### Return Value  
 The current value of the hyperlink.  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__getregularsize"></a>  CMFCRibbonLinkCtrl::GetRegularSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize GetRegularSize(  
   CDC* pDC  
);  
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__gettooltiptext"></a>  CMFCRibbonLinkCtrl::GetToolTipText  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CString GetToolTipText() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__ondrawmenuimage"></a>  CMFCRibbonLinkCtrl::OnDrawMenuImage  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnDrawMenuImage( CDC*, CRect  
);  
```  
  
### Parameters  
 [in] `CDC*`  
  [in] `CRect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__isdrawtooltipimage"></a>  CMFCRibbonLinkCtrl::IsDrawTooltipImage  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsDrawTooltipImage() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__ondraw"></a>  CMFCRibbonLinkCtrl::OnDraw  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnDraw(  
   CDC* pDC  
);  
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__onmousemove"></a>  CMFCRibbonLinkCtrl::OnMouseMove  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnMouseMove(  
   CPoint point  
);  
```  
  
### Parameters  
 [in] `point`  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__onseticon"></a>  CMFCRibbonLinkCtrl::OnSetIcon  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnSetIcon();  
```  
  
### Remarks  
  
##  <a name="cmfcribbonlinkctrl__openlink"></a>  CMFCRibbonLinkCtrl::OpenLink  
 Opens the Web page specified in the hyperlink.  
  
```  
BOOL OpenLink();  
```  
  
### Return Value  
 `TRUE` if the associated Web page was opened successfully; otherwise, `FALSE`.  
  
### Remarks  
 Opens a web page using the hyperlink associated with the `CMFCRibbonLinkCtrl` object.  
  
##  <a name="cmfcribbonlinkctrl__setlink"></a>  CMFCRibbonLinkCtrl::SetLink  
 Sets the value of the hyperlink.  
  
```  
void SetLink(  
    LPCTSTR lpszLink   
);  
```  
  
### Parameters  
 [in] `lpszLink`  
 Specifies the hyperlink text.  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCRibbonButton Class](../VS_visualcpp/CMFCRibbonButton-Class.md)