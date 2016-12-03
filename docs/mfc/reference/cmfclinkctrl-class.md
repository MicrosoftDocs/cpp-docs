---
title: "CMFCLinkCtrl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCLinkCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCLinkCtrl class"
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
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
# CMFCLinkCtrl Class
The `CMFCLinkCtrl` class displays a button as a hyperlink and invokes the link's target when the button is clicked.  
  
## Syntax  
  
```  
class CMFCLinkCtrl : public CMFCButton  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCLinkCtrl::SetURL](#cmfclinkctrl__seturl)|Displays a specified URL as the button text.|  
|[CMFCLinkCtrl::SetURLPrefix](#cmfclinkctrl__seturlprefix)|Sets the implicit protocol (for example, "http:") of the URL.|  
|[CMFCLinkCtrl::SizeToContent](#cmfclinkctrl__sizetocontent)|Resizes the button to contain the button text or bitmap.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCLinkCtrl::OnDrawFocusRect](#cmfclinkctrl__ondrawfocusrect)|Called by the framework before the focus rectangle of the button is drawn.|  
  
## Remarks  
 When you click a button that is derived from the `CMFCLinkCtrl` class, the framework passes the URL of the button as a parameter to the `ShellExecute` method. Then the `ShellExecute` method opens the target of the URL.  
  
## Example  
 The following example demonstrates how to set the size of a `CMFCLinkCtrl` object, and how to set a url and a tooltip in a `CMFCLinkCtrl` object. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#9](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#10](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)  
  
## Requirements  
 **Header:** afxlinkctrl.h  
  
##  <a name="cmfclinkctrl__ondrawfocusrect"></a>  CMFCLinkCtrl::OnDrawFocusRect  
 Called by the framework before the focus rectangle of the button is drawn.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A rectangle that bounds the link control.  
  
### Remarks  
 Override this method when you want to use your own code to draw the button's focus rectangle.  
  
##  <a name="cmfclinkctrl__seturl"></a>  CMFCLinkCtrl::SetURL  
 Displays a specified URL as the button text.  
  
```  
void SetURL(LPCTSTR lpszURL);
```  
  
### Parameters  
 [in] `lpszURL`  
 The button text to display.  
  
### Remarks  
  
##  <a name="cmfclinkctrl__seturlprefix"></a>  CMFCLinkCtrl::SetURLPrefix  
 Sets the implicit protocol (for example, "http:") of the URL.  
  
```  
void SetURLPrefix(LPCTSTR lpszPrefix);
```  
  
### Parameters  
 [in] `lpszPrefix`  
 The prefix of the URL protocol.  
  
### Remarks  
 Use this method to set the URL prefix. The prefix is not displayed on the button's face, but you can use it to help browse to the URL's target.  
  
##  <a name="cmfclinkctrl__sizetocontent"></a>  CMFCLinkCtrl::SizeToContent  
 Resizes the button to contain the button text or bitmap.  
  
```  
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,  
    BOOL bHCenter=FALSE);
```  
  
### Parameters  
 [in] `bVCenter`  
 `TRUE` to center the button text and bitmap vertically between the top and bottom of the link control; otherwise, `FALSE`. The default value is `FALSE`.  
  
 [in] `bHCenter`  
 `TRUE` to center the button text and bitmap horizontally between the left and right sides of the link control; otherwise, `FALSE`. The default value is `FALSE`.  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the new size of the link control.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CLinkCtrl Class](../../mfc/reference/clinkctrl-class.md)   
 [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)
