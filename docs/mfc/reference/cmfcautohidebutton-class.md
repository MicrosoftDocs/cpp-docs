---
title: "CMFCAutoHideButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCAutoHideButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCAutoHideButton class"
ms.assetid: c80e6b8b-25ca-4d12-9d27-457731028ab0
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
# CMFCAutoHideButton Class
A button that displays or hides a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) that is configured to hide.  
  
## Syntax  
  
```  
class CMFCAutoHideButton : public CObject  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCAutoHideButton::BringToTop](#cmfcautohidebutton__bringtotop)||  
|[CMFCAutoHideButton::Create](#cmfcautohidebutton__create)|Creates and initializes the auto-hide button.|  
|[CMFCAutoHideButton::GetAlignment](#cmfcautohidebutton__getalignment)|Retrieves the alignment of the auto-hide button.|  
|[CMFCAutoHideButton::GetAutoHideWindow](#cmfcautohidebutton__getautohidewindow)|Returns the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object associated with the auto-hide button.|  
|[CMFCAutoHideButton::GetParentToolBar](#cmfcautohidebutton__getparenttoolbar)||  
|[CMFCAutoHideButton::GetRect](#cmfcautohidebutton__getrect)||  
|[CMFCAutoHideButton::GetSize](#cmfcautohidebutton__getsize)|Determines the size of the auto-hide button.|  
|[CMFCAutoHideButton::GetTextSize](#cmfcautohidebutton__gettextsize)|Returns the size of the text label for the auto-hide button.|  
|[CMFCAutoHideButton::HighlightButton](#cmfcautohidebutton__highlightbutton)|Highlights auto hide button.|  
|[CMFCAutoHideButton::IsActive](#cmfcautohidebutton__isactive)|Indicates whether the auto-hide button is active.|  
|[CMFCAutoHideButton::IsHighlighted](#cmfcautohidebutton__ishighlighted)|Returns highlight state of auto hide button.|  
|[CMFCAutoHideButton::IsHorizontal](#cmfcautohidebutton__ishorizontal)|Determines whether the auto-hide button is horizontal or vertical.|  
|[CMFCAutoHideButton::IsTop](#cmfcautohidebutton__istop)||  
|[CMFCAutoHideButton::IsVisible](#cmfcautohidebutton__isvisible)|Indicates whether the button is visible.|  
|[CMFCAutoHideButton::Move](#cmfcautohidebutton__move)||  
|[CMFCAutoHideButton::OnDraw](#cmfcautohidebutton__ondraw)|The framework calls this method when it draws the auto-hide button.|  
|[CMFCAutoHideButton::OnDrawBorder](#cmfcautohidebutton__ondrawborder)|The framework calls this method when it draws the border of an auto-hide button.|  
|[CMFCAutoHideButton::OnFillBackground](#cmfcautohidebutton__onfillbackground)|The framework calls this method when it fills the background of an auto-hide button.|  
|[CMFCAutoHideButton::ReplacePane](#cmfcautohidebutton__replacepane)||  
|[CMFCAutoHideButton::ShowAttachedWindow](#cmfcautohidebutton__showattachedwindow)|Shows or hides the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).|  
|[CMFCAutoHideButton::ShowButton](#cmfcautohidebutton__showbutton)|Shows or hides the auto-hide button.|  
|[CMFCAutoHideButton::UnSetAutoHideMode](#cmfcautohidebutton__unsetautohidemode)||  
  
## Remarks  
 On creation, the `CMFCAutoHideButton` object is attached to a [CDockablePane Class](../../mfc/reference/cdockablepane-class.md). The `CDockablePane` object is hidden or displayed as the user interacts with the `CMFCAutoHideButton` object.  
  
 By default, the framework automatically creates a `CMFCAutoHideButton` when the user turns on auto-hide. The framework can create an element of a custom UI class instead of the `CMFCAutoHideButton` class. To specify which custom UI class the framework should use, set the static member variable `CMFCAutoHideBar::m_pAutoHideButtonRTS` equal to the custom UI class. By default, this variable is set to `CMFCAutoHideButton`.  
  
## Example  
 The following example demonstrates how to construct a `CMFCAutoHideButton` object and use various methods in the `CMFCAutoHideButton` class. The example shows how to initialize a `CMFCAutoHideButton` object by using its `Create` method, show the associated `CDockablePane` class, and show the auto-hide button.  
  
 [!code-cpp[NVC_MFC_RibbonApp#32](../../mfc/reference/codesnippet/cpp/cmfcautohidebutton-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md)  
  
## Requirements  
 **Header:** afxautohidebutton.h  
  
##  <a name="cmfcautohidebutton__bringtotop"></a>  CMFCAutoHideButton::BringToTop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void BringToTop();
```  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__create"></a>  CMFCAutoHideButton::Create  
 Creates and initializes an auto-hide button.  
  
```  
virtual BOOL Create(
    CMFCAutoHideBar* pParentBar,  
    CDockablePane* pAutoHideWnd,  
    DWORD dwAlignment);
```  
  
### Parameters  
 [in] `pParentBar`  
 A pointer to the parent toolbar.  
  
 [in] `pAutoHideWnd`  
 A pointer to a [CDockablePane](../../mfc/reference/cdockablepane-class.md) object. This auto-hide button hides and shows that `CDockablePane`.  
  
 [in] `dwAlignment`  
 A value that specifies the alignment of the button with the main frame window.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 When you create a [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) object, you must associate the auto-hide button with a specific `CDockablePane`. The user can use the auto-hide button to hide and show the associated `CDockablePane`.  
  
 The `dwAlignment` parameter indicates where the auto-hide button resides in the application. The parameter can be any one of the following values:  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CBRS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
##  <a name="cmfcautohidebutton__getalignment"></a>  CMFCAutoHideButton::GetAlignment  
 Retrieves the alignment of the auto-hide button.  
  
```  
DWORD GetAlignment() const;

 
```  
  
### Return Value  
 A `DWORD` value that contains the current alignment of the auto-hide button.  
  
### Remarks  
 The alignment of the auto-hide button indicates where the button resides on the application. It can be any one of the following values:  
  
- `CBRS_ALIGN_LEFT`  
  
- `CBRS_ALIGN_RIGHT`  
  
- `CRBS_ALIGN_TOP`  
  
- `CBRS_ALIGN_BOTTOM`  
  
##  <a name="cmfcautohidebutton__getautohidewindow"></a>  CMFCAutoHideButton::GetAutoHideWindow  
 Returns the [CDockablePane](../../mfc/reference/cdockablepane-class.md) object associated with the auto-hide button.  
  
```  
CDockablePane* GetAutoHideWindow() const;

 
```  
  
### Return Value  
 A pointer to the associated `CDockablePane` object.  
  
### Remarks  
 To associate an auto-hide button with a `CDockablePane`, pass the `CDockablePane` as a parameter to the [CMFCAutoHideButton::Create](#cmfcautohidebutton__create) method.  
  
##  <a name="cmfcautohidebutton__getparenttoolbar"></a>  CMFCAutoHideButton::GetParentToolBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCAutoHideBar* GetParentToolBar();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__getrect"></a>  CMFCAutoHideButton::GetRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__getsize"></a>  CMFCAutoHideButton::GetSize  
 Determines the size of the auto-hide button.  
  
```  
CSize GetSize() const;

 
```  
  
### Return Value  
 A `CSize` object that contains the button size.  
  
### Remarks  
 The calculated size includes the size of the border of the auto-hide button.  
  
##  <a name="cmfcautohidebutton__gettextsize"></a>  CMFCAutoHideButton::GetTextSize  
 Returns the size of the text label for the auto-hide button.  
  
```  
virtual CSize GetTextSize() const;

 
```  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the size of the text for the auto-hide button.  
  
##  <a name="cmfcautohidebutton__isactive"></a>  CMFCAutoHideButton::IsActive  
 Indicates whether the auto-hide button is active.  
  
```  
BOOL IsActive() const;

 
```  
  
### Return Value  
 `TRUE` if the auto-hide button is active; `FALSE` otherwise.  
  
### Remarks  
 An auto-hide button is active when the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) window is shown.  
  
##  <a name="cmfcautohidebutton__ishorizontal"></a>  CMFCAutoHideButton::IsHorizontal  
 Determines whether the auto-hide button is horizontal or vertical.  
  
```  
BOOL IsHorizontal() const;

 
```  
  
### Return Value  
 Nonzero if the button is horizontal; 0 otherwise.  
  
### Remarks  
 The framework sets the orientation of a [CMFCAutoHideButton](../../mfc/reference/cmfcautohidebutton-class.md) object when you create it.  You can control the orientation by using the `dwAlignment` parameter in the [CMFCAutoHideButton::Create](#cmfcautohidebutton__create) method.  
  
##  <a name="cmfcautohidebutton__istop"></a>  CMFCAutoHideButton::IsTop  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsTop() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__isvisible"></a>  CMFCAutoHideButton::IsVisible  
 Indicates whether the auto-hide button is visible.  
  
```  
virtual BOOL IsVisible() const;

 
```  
  
### Return Value  
 `TRUE` if the button is visible; `FALSE` otherwise.  
  
##  <a name="cmfcautohidebutton__ondraw"></a>  CMFCAutoHideButton::OnDraw  
 The framework calls this method when it draws the auto-hide button.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 If you want to customize the appearance of auto-hide buttons in your application, create a new class derived from the [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md). In your derived class, override this method.  
  
##  <a name="cmfcautohidebutton__ondrawborder"></a>  CMFCAutoHideButton::OnDrawBorder  
 The framework calls this method when it draws the border of an auto-hide button.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect rectBounds,  
    CRect rectBorderSize);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectBounds`  
 The bounding rectangle of the auto-hide button.  
  
 [in] `rectBorderSize`  
 The border thickness for each side of the auto-hide button.  
  
### Remarks  
 If you want to customize the border of each auto-hide button in your application, create a new class derived from the [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md). In your derived class, override this method.  
  
##  <a name="cmfcautohidebutton__onfillbackground"></a>  CMFCAutoHideButton::OnFillBackground  
 The framework calls this method when it fills the background of an auto-hide button.  
  
```  
virtual void OnFillBackground(
    CDC* pDC,  
    CRect rect);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the auto-hide button.  
  
### Remarks  
 If you want to customize the background for auto-hide buttons in your application, create a new class derived from the [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md). In your derived class, override this method.  
  
##  <a name="cmfcautohidebutton__showattachedwindow"></a>  CMFCAutoHideButton::ShowAttachedWindow  
 Shows or hides the associated [CDockablePane Class](../../mfc/reference/cdockablepane-class.md).  
  
```  
void ShowAttachedWindow(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 A Boolean that specifies whether this method shows the attached `CDockablePane`.  
  
##  <a name="cmfcautohidebutton__showbutton"></a>  CMFCAutoHideButton::ShowButton  
 Shows or hides the auto-hide button.  
  
```  
virtual void ShowButton(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 A Boolean that specifies whether to show the auto-hide button.  
  
##  <a name="cmfcautohidebutton__move"></a>  CMFCAutoHideButton::Move  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void Move(int nOffset);
```  
  
### Parameters  
 [in] `nOffset`  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__replacepane"></a>  CMFCAutoHideButton::ReplacePane  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void ReplacePane(CDockablePane* pNewBar);
```  
  
### Parameters  
 [in] `pNewBar`  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__unsetautohidemode"></a>  CMFCAutoHideButton::UnSetAutoHideMode  
 Disable auto-hide mode.  
  
```  
virtual void UnSetAutoHideMode(CDockablePane* pFirstBarInGroup);
```  
  
### Parameters  
 [in] `pFirstBarInGroup`  
 A pointer to the first bar in the group.  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__highlightbutton"></a>  CMFCAutoHideButton::HighlightButton  
 Highlights the auto hide button.  
  
```  
virtual void HighlightButton(BOOL bHighlight);
```  
  
### Parameters  
 `bHighlight`  
 Specifies the new auto hide button state. `TRUE` indicates the button is highlighted, `FALSE` indicates the button is not highlighted.  
  
### Remarks  
  
##  <a name="cmfcautohidebutton__ishighlighted"></a>  CMFCAutoHideButton::IsHighlighted  
 Returns the highlight state of the auto hide button.  
  
```  
virtual BOOL IsHighlighted() const;

 
```  
  
### Return Value  
 Returns `TRUE` if the auto hide button is highlighted; otherwise `FALSE`.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md)   
 [CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md)
