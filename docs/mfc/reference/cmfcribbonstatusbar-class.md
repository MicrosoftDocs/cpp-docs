---
title: "CMFCRibbonStatusBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonStatusBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonStatusBar class"
ms.assetid: 921eb57f-3b40-49fa-a38c-3f2fb6dc2893
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
# CMFCRibbonStatusBar Class
The `CMFCRibbonStatusBar` class implements a status bar control that can display ribbon elements.  
  
## Syntax  
  
```  
class CMFCRibbonStatusBar : public CMFCRibbonBar  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::AddDynamicElement](#cmfcribbonstatusbar__adddynamicelement)|Adds a dynamic element to the ribbon status bar.|  
|[CMFCRibbonStatusBar::AddElement](#cmfcribbonstatusbar__addelement)|Adds a new ribbon element to the ribbon status bar.|  
|[CMFCRibbonStatusBar::AddExtendedElement](#cmfcribbonstatusbar__addextendedelement)|Adds a ribbon element to the extended area of the ribbon status bar.|  
|[CMFCRibbonStatusBar::AddSeparator](#cmfcribbonstatusbar__addseparator)|Adds a separator to the ribbon status bar.|  
|[CMFCRibbonStatusBar::Create](#cmfcribbonstatusbar__create)|Creates a ribbon status bar.|  
|[CMFCRibbonStatusBar::CreateEx](#cmfcribbonstatusbar__createex)|Creates a ribbon status bar with an extended style.|  
|[CMFCRibbonStatusBar::FindByID](#cmfcribbonstatusbar__findbyid)||  
|[CMFCRibbonStatusBar::FindElement](#cmfcribbonstatusbar__findelement)|Returns a pointer to the element that has the specified command ID.|  
|[CMFCRibbonStatusBar::GetCount](#cmfcribbonstatusbar__getcount)|Returns the number of elements that are located in the main area of the ribbon status bar.|  
|[CMFCRibbonStatusBar::GetElement](#cmfcribbonstatusbar__getelement)|Returns a pointer to the element that is located at a specified index.|  
|[CMFCRibbonStatusBar::GetExCount](#cmfcribbonstatusbar__getexcount)|Returns the number of elements that are located in the extended area of the ribbon status bar.|  
|[CMFCRibbonStatusBar::GetExElement](#cmfcribbonstatusbar__getexelement)|Returns a pointer to the element that is located at a specified index in the extended area of the ribbon status bar.|  
|[CMFCRibbonStatusBar::GetExtendedArea](#cmfcribbonstatusbar__getextendedarea)||  
|[CMFCRibbonStatusBar::GetSpace](#cmfcribbonstatusbar__getspace)||  
|[CMFCRibbonStatusBar::IsBottomFrame](#cmfcribbonstatusbar__isbottomframe)||  
|[CMFCRibbonStatusBar::IsExtendedElement](#cmfcribbonstatusbar__isextendedelement)||  
|[CMFCRibbonStatusBar::IsInformationMode](#cmfcribbonstatusbar__isinformationmode)|Determines whether information mode is enabled for the ribbon status bar.|  
|[CMFCRibbonStatusBar::RecalcLayout](#cmfcribbonstatusbar__recalclayout)|(Overrides [CMFCRibbonBar::RecalcLayout](../../mfc/reference/cmfcribbonbar-class.md#cmfcribbonbar__recalclayout).)|  
|[CMFCRibbonStatusBar::RemoveAll](#cmfcribbonstatusbar__removeall)|Removes all elements from the ribbon status bar.|  
|[CMFCRibbonStatusBar::RemoveElement](#cmfcribbonstatusbar__removeelement)|Removes the element that has a specified command ID from the ribbon status bar.|  
|[CMFCRibbonStatusBar::SetInformation](#cmfcribbonstatusbar__setinformation)|Enables or disables the information mode for the ribbon status bar.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonStatusBar::OnDrawInformation](#cmfcribbonstatusbar__ondrawinformation)|Displays the information string that appears on the ribbon status bar when the information mode is enabled.|  
  
## Remarks  
 Users can change the visibility of ribbon elements on a ribbon status bar by using the built-in context menu for the ribbon status bar. You can add or remove elements dynamically.  
  
 A ribbon status bar has two areas: a main area and an extended area. The extended area is displayed on the right side of the ribbon status bar and appears in a different color than the main area does.  
  
 Typically, the main area of the status bar displays status notifications, and the extended area displays view controls. The extended area remains visible as long as possible when the user resizes the ribbon status bar.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonStatusBar` class. The example shows how to add a new ribbon element to the ribbon status bar, add a ribbon element to the extended area of the ribbon status bar, add a separator, and enable the regular mode for the ribbon status bar.  
  
 [!code-cpp[NVC_MFC_RibbonApp#15](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_1.cpp)]  
[!code-cpp[NVC_MFC_RibbonApp#16](../../mfc/reference/codesnippet/cpp/cmfcribbonstatusbar-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCRibbonBar](../../mfc/reference/cmfcribbonbar-class.md)  
  
 [CMFCRibbonStatusBar](../../mfc/reference/cmfcribbonstatusbar-class.md)  
  
## Requirements  
 **Header:** afxribbonstatusbar.h  
  
##  <a name="cmfcribbonstatusbar__adddynamicelement"></a>  CMFCRibbonStatusBar::AddDynamicElement  
 Adds a dynamic element to the ribbon status bar.  
  
```  
void AddDynamicElement(CMFCRibbonBaseElement* pElement);
```  
  
### Parameters  
 [in] `pElement`  
 A pointer to a dynamic element.  
  
### Remarks  
 Unlike regular elements, dynamic elements are not customizable and the customize menu of the status bar does not display them.  
  
##  <a name="cmfcribbonstatusbar__addelement"></a>  CMFCRibbonStatusBar::AddElement  
 Adds a new ribbon element to the ribbon status bar.  
  
```  
void AddElement(
    CMFCRibbonBaseElement* pElement,  
    LPCTSTR lpszLabel,  
    BOOL bIsVisible=TRUE);
```  
  
### Parameters  
 [in] `pElement`  
 A pointer to the added element.  
  
 [in] `lpszLabel`  
 A text label of the element.  
  
 [in] `bIsVisible`  
 `TRUE` if you want to add the element as visible, `FALSE` if you want to add the element as hidden.  
  
##  <a name="cmfcribbonstatusbar__addextendedelement"></a>  CMFCRibbonStatusBar::AddExtendedElement  
 Adds a ribbon element to the extended area of the ribbon status bar.  
  
```  
void AddExtendedElement(
    CMFCRibbonBaseElement* pElement,  
    LPCTSTR lpszLabel,  
    BOOL bIsVisible=TRUE);
```  
  
### Parameters  
 [in] `pElement`  
 A pointer to the added element.  
  
 [in] `lpszLabel`  
 The text label of the element.  
  
 [in] `bIsVisible`  
 `TRUE` if you want to add the element as visible, `FALSE` if you want to add the element as hidden.  
  
### Remarks  
 The extended area is on the right side of the status bar control.  
  
##  <a name="cmfcribbonstatusbar__addseparator"></a>  CMFCRibbonStatusBar::AddSeparator  
 Adds a separator to the ribbon status bar.  
  
```  
void AddSeparator();
```  
  
### Remarks  
 The framework adds a separator after the method [CMFCRibbonStatusBar::AddElement](#cmfcribbonstatusbar__addelement). inserts the last element.  
  
##  <a name="cmfcribbonstatusbar__create"></a>  CMFCRibbonStatusBar::Create  
 Creates a ribbon status bar.  
  
```  
BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,  
    UINT nID=AFX_IDW_STATUS_BAR);
```  
  
### Parameters  
 [in] `pParentWnd`  
 A pointer to the parent window.  
  
 [in] `dwStyle`  
 A logical OR combination of control styles.  
  
 [in] `nID`  
 The control ID of the status bar.  
  
### Return Value  
 `TRUE` if the status bar is created successfully, `FALSE` otherwise.  
  
##  <a name="cmfcribbonstatusbar__createex"></a>  CMFCRibbonStatusBar::CreateEx  
 Creates a ribbon status bar that has an extended style.  
  
```  
BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle=0,  
    DWORD dwStyle=WS_CHILD|WS_VISIBLE|CBRS_BOTTOM,  
    UINT nID=AFX_IDW_STATUS_BAR);
```  
  
### Parameters  
 `pParentWnd`  
 A pointer to the parent window.  
  
 `dwCtrlStyle`  
 A logical OR combination of additional styles for creating the status bar object.  
  
 `dwStyle`  
 The control style of the status bar.  
  
 `nID`  
 The control ID of the status bar.  
  
### Return Value  
 `TRUE` if the status bar is created successfully, `FALSE` otherwise.  
  
##  <a name="cmfcribbonstatusbar__findbyid"></a>  CMFCRibbonStatusBar::FindByID  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID, BOOL = TRUE);
```  
  
### Parameters  
 [in] `uiCmdID`  
 [in] `BOOL`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__findelement"></a>  CMFCRibbonStatusBar::FindElement  
 Returns a pointer to the element that has the specified command ID.  
  
```  
CMFCRibbonBaseElement* FindElement(UINT uiID);
```  
  
### Parameters  
 [in] `uiID`  
 The ID of the element.  
  
### Return Value  
 A pointer to the element that has the specified command ID. `NULL` if there is no such element.  
  
##  <a name="cmfcribbonstatusbar__getcount"></a>  CMFCRibbonStatusBar::GetCount  
 Returns the number of elements that are located in the main area of the ribbon status bar.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of elements that are located in the main area of the ribbon status bar.  
  
##  <a name="cmfcribbonstatusbar__getelement"></a>  CMFCRibbonStatusBar::GetElement  
 Returns a pointer to the element that is located at a specified index.  
  
```  
CMFCRibbonBaseElement* GetElement(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies a zero-based index of an element that is located in the main area of the status bar control.  
  
### Return Value  
 A pointer to the element that is located at the specified index. `NULL` if the index is negative or exceeds the number of elements in the status bar.  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__getexcount"></a>  CMFCRibbonStatusBar::GetExCount  
 Returns the number of elements that are located in the extended area of the ribbon status bar.  
  
```  
int GetExCount() const;

 
```  
  
### Return Value  
 The number of elements that are located in the extended area of the ribbon status bar.  
  
##  <a name="cmfcribbonstatusbar__getexelement"></a>  CMFCRibbonStatusBar::GetExElement  
 Returns a pointer to the element that is located at a specified index in the extended area of the ribbon status bar. The extended area is on the right side of the status bar control.  
  
```  
CMFCRibbonBaseElement* GetExElement(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of an element that is located in the extended area of the status bar control.  
  
### Return Value  
 A pointer to the element that is located at a specified index in the extended area of the ribbon status bar. `NULL` if `nIndex` is negative or exceeds the number of elements in the extended area of the ribbon status bar.  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__getextendedarea"></a>  CMFCRibbonStatusBar::GetExtendedArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL GetExtendedArea(CRect& rect) const;

 
```  
  
### Parameters  
 [in] `rect`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__getspace"></a>  CMFCRibbonStatusBar::GetSpace  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetSpace() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__isbottomframe"></a>  CMFCRibbonStatusBar::IsBottomFrame  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsBottomFrame() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__isextendedelement"></a>  CMFCRibbonStatusBar::IsExtendedElement  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsExtendedElement(CMFCRibbonBaseElement* pElement) const;

 
```  
  
### Parameters  
 [in] `pElement`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__isinformationmode"></a>  CMFCRibbonStatusBar::IsInformationMode  
 Determines whether information mode is enabled for the ribbon status bar.  
  
```  
BOOL IsInformationMode() const;

 
```  
  
### Return Value  
 `TRUE` if the status bar can work in information mode; otherwise `FALSE`.  
  
### Remarks  
 In information mode, the status bar hides all regular panes and displays a message string.  
  
##  <a name="cmfcribbonstatusbar__ondrawinformation"></a>  CMFCRibbonStatusBar::OnDrawInformation  
 Displays the string that appears on the ribbon status bar when the information mode is enabled.  
  
```  
virtual void OnDrawInformation(
    CDC* pDC,  
    CString& strInfo,  
    CRect rectInfo);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `strInfo`  
 The information string.  
  
 [in] `rectInfo`  
 The bounding rectangle.  
  
### Remarks  
 Override this method in a derived class if you want to customize the appearance of the information string on the status bar. Use the [CMFCRibbonStatusBar::SetInformation](#cmfcribbonstatusbar__setinformation) method to put the status bar in information mode. In this mode, the status bar hides all panes and displays the information string specified by `strInfo`.  
  
##  <a name="cmfcribbonstatusbar__recalclayout"></a>  CMFCRibbonStatusBar::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RecalcLayout();
```  
  
### Remarks  
  
##  <a name="cmfcribbonstatusbar__removeall"></a>  CMFCRibbonStatusBar::RemoveAll  
 Removes all elements from the ribbon status bar.  
  
```  
void RemoveAll();
```  
  
##  <a name="cmfcribbonstatusbar__removeelement"></a>  CMFCRibbonStatusBar::RemoveElement  
 Removes the element that has a specified command ID from the ribbon status bar.  
  
```  
BOOL RemoveElement(UINT uiID);
```  
  
### Parameters  
 [in] `uiID`  
 The ID of the element to remove from the status bar.  
  
### Return Value  
 `TRUE` if an element with the specified `uiID` is removed. `FALSE` otherwise.  
  
##  <a name="cmfcribbonstatusbar__setinformation"></a>  CMFCRibbonStatusBar::SetInformation  
 Enables or disables the information mode for the ribbon status bar.  
  
```  
void SetInformation(LPCTSTR lpszInfo);
```  
  
### Parameters  
 [in] `lpszInfo`  
 The information string.  
  
### Remarks  
 Use this method to put the status bar in the information mode. In this mode, the status bar hides all panes and displays the information string specified by `lpszInfo`.  
  
 When lpszInfo is `NULL`, the status bar reverts to regular mode.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)
