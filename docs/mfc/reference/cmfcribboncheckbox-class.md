---
title: "CMFCRibbonCheckBox Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonCheckBox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonCheckBox class"
ms.assetid: 3a6c3891-c8d1-4af0-b954-7b9ab048782a
caps.latest.revision: 30
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
# CMFCRibbonCheckBox Class
The `CMFCRibbonCheckBox` class implements a check box that you can add to a ribbon panel, Quick Access Toolbar, or popup menu.  
  
## Syntax  
  
```  
class CMFCRibbonCheckBox : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCheckBox::CMFCRibbonCheckBox](#cmfcribboncheckbox__cmfcribboncheckbox)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCheckBox::GetCompactSize](#cmfcribboncheckbox__getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__getcompactsize).)|  
|[CMFCRibbonCheckBox::GetIntermediateSize](#cmfcribboncheckbox__getintermediatesize)|(Overrides [CMFCRibbonButton::GetIntermediateSize](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__getintermediatesize).)|  
|[CMFCRibbonCheckBox::GetRegularSize](#cmfcribboncheckbox__getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__getregularsize).)|  
|[CMFCRibbonCheckBox::IsDrawTooltipImage](#cmfcribboncheckbox__isdrawtooltipimage)|(Overrides `CMFCRibbonButton::IsDrawTooltipImage`.)|  
|[CMFCRibbonCheckBox::OnDraw](#cmfcribboncheckbox__ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__ondraw).)|  
|[CMFCRibbonCheckBox::OnDrawMenuImage](#cmfcribboncheckbox__ondrawmenuimage)|(Overrides [CMFCRibbonBaseElement::OnDrawMenuImage](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__ondrawmenuimage).)|  
|[CMFCRibbonCheckBox::OnDrawOnList](#cmfcribboncheckbox__ondrawonlist)|(Overrides `CMFCRibbonButton::OnDrawOnList`.)|  
|[CMFCRibbonCheckBox::SetACCData](#cmfcribboncheckbox__setaccdata)|(Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__setaccdata).)|  
  
## Remarks  
 To use a `CMFCRibbonCheckBox` in your application, add the following constructor to your code:  
  
```  
CMFCRibbonCheckBox (UINT nID, LPCTSTR lpszText)  
```  
  
 where `nID` is the check box command ID and `lpszText` is the text label of the check box.  
  
 You can add a check box to a ribbon panel by using [CMFCRibbonPanel::Add](../../mfc/reference/cmfcribbonpanel-class.md#cmfcribbonpanel__add).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonCheckBox](../../mfc/reference/cmfcribboncheckbox-class.md)  
  
## Requirements  
 **Header:** afxribboncheckbox.h  
  
##  <a name="cmfcribboncheckbox__cmfcribboncheckbox"></a>  CMFCRibbonCheckBox::CMFCRibbonCheckBox  
 Constructor of a ribbon check box object  
  
```  
CMFCRibbonCheckBox(
    UINT nID,  
    LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `nID`  
 Specifies command ID.  
  
 [in] `lpszText`  
 Specifies text label.  
  
### Return Value  
 Constructs a ribbon check box object.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonCheckBox` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#17](../../mfc/reference/codesnippet/cpp/cmfcribboncheckbox-class_1.cpp)]  
  
##  <a name="cmfcribboncheckbox__getcompactsize"></a>  CMFCRibbonCheckBox::GetCompactSize  
 When overridden, gets the compact size of the checkbox.  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the `CDC` associated with the checkbox.  
  
### Return Value  
 Returns a `CSize` object that contains the compact size of the checkbox.  
  
### Remarks  
 If not overridden, returns the intermediate size of the checkbox.  
  
##  <a name="cmfcribboncheckbox__getintermediatesize"></a>  CMFCRibbonCheckBox::GetIntermediateSize  
 Gets the intermediate size of the checkbox.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the `CDC` associated with this checkbox.  
  
### Return Value  
 A `CSize` object containing the intermediate size of the checkbox.  
  
### Remarks  
 If not overridden, calculates the intermediate size as the default checkbox size ( `AFX_CHECK_BOX_DEFAULT_SIZE`) plus the text size, plus margins.  
  
##  <a name="cmfcribboncheckbox__getregularsize"></a>  CMFCRibbonCheckBox::GetRegularSize  
 Gets the regular size of the checkbox.  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the `CDC` object associated with this checkbox.  
  
### Return Value  
 Returns a `CSize` object that contains the regular size of the checkbox.  
  
### Remarks  
 If not overridden, returns the intermediate size of the checkbox.  
  
##  <a name="cmfcribboncheckbox__isdrawtooltipimage"></a>  CMFCRibbonCheckBox::IsDrawTooltipImage  
 Indicates whether there is a tooltip image associated with the checkbox.  
  
```  
virtual BOOL IsDrawTooltipImage() const;

 
```  
  
### Return Value  
 Returns `TRUE` if there is a tooltip image associated with the checkbox, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcribboncheckbox__ondraw"></a>  CMFCRibbonCheckBox::OnDraw  
 Called by the framework to draw the checkbox using a specified device context.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the `CDC` in which to draw the checkbox.  
  
### Remarks  
  
##  <a name="cmfcribboncheckbox__ondrawmenuimage"></a>  CMFCRibbonCheckBox::OnDrawMenuImage  
 Called by the framework to draw a menu image for the checkbox.  
  
```  
virtual BOOL OnDrawMenuImage(
    CDC*, CRect);
```  
  
### Parameters  
 [in] `CDC*`  
 Pointer to the `CDC` associated with the checkbox.  
  
 [in] `CRect`  
 A `CRect` object specifying the rectangle in which to draw the menu image.  
  
### Return Value  
 Returns `TRUE` if the image was drawn, or `FALSE` if not.  
  
### Remarks  
 If not overridden, returns `FALSE`.  
  
##  <a name="cmfcribboncheckbox__ondrawonlist"></a>  CMFCRibbonCheckBox::OnDrawOnList  
 Called by the framework to draw the checkbox in a commands list box.  
  
```  
virtual void OnDrawOnList(
    CDC* pDC,  
    CString strText,  
    int nTextOffset,  
    CRect rect,  
    BOOL bIsSelected,  
    BOOL bHighlighted);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to the device context in which to draw the checkbox.  
  
 [in] `strText`  
 The display text.  
  
 [in] `nTextOffset`  
 The distance, in pixels, from the left side of the list box to the display text.  
  
 [in] `rect`  
 The display rectangle for the checkbox.  
  
 [in] `bIsSelected`  
 `TRUE` if the checkbox is selected, or `FALSE` if not.  
  
 [in] `bHighlighted`  
 `TRUE` if the checkbox is highlighted, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcribboncheckbox__setaccdata"></a>  CMFCRibbonCheckBox::SetACCData  
 Sets the accessibility data for the checkbox.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### Parameters  
 `pParent`  
 The parent window of the checkbox.  
  
 `data`  
 The accessibility data for the checkbox.  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
 By default this method sets the accessibility data for the checkbox and always returns `TRUE`. Override this method to set the accessibility data and return a value that indicates success or failure.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonPanel Class](../../mfc/reference/cmfcribbonpanel-class.md)
