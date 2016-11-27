---
title: "CMFCRibbonEdit Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonEdit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonEdit class"
ms.assetid: 9b85f1f2-446b-454e-9af9-104fdad8a897
caps.latest.revision: 25
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
# CMFCRibbonEdit Class
Implements an edit control that is located on a ribbon bar.  
  
## Syntax  
  
```  
class CMFCRibbonEdit : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit__cmfcribbonedit)|Constructs a `CMFCRibbonEdit` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonEdit::CanBeStretched](#cmfcribbonedit__canbestretched)|Indicates whether the height of the `CMFCRibbonEdit` control can increase vertically to the height of a ribbon row.|  
|[CMFCRibbonEdit::CMFCRibbonEdit](#cmfcribbonedit__cmfcribbonedit)|Constructs a `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::CopyFrom](#cmfcribbonedit__copyfrom)|Copies the state of the specified `CMFCRibbonEdit` object to the current `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::CreateEdit](#cmfcribbonedit__createedit)|Creates a new text box for the `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::DestroyCtrl](#cmfcribbonedit__destroyctrl)|Destroys the `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::DropDownList](#cmfcribbonedit__dropdownlist)|Drops down a list box.|  
|[CMFCRibbonEdit::EnableSpinButtons](#cmfcribbonedit__enablespinbuttons)|Enables and sets the range of the spin button for the text box.|  
|[CMFCRibbonEdit::GetCompactSize](#cmfcribbonedit__getcompactsize)|Retrieves the compact size of the `CFMCRibbonEdit` object.|  
|[CMFCRibbonEdit::GetEditText](#cmfcribbonedit__getedittext)|Retrieves the text in the text box.|  
|[CMFCRibbonEdit::GetIntermediateSize](#cmfcribbonedit__getintermediatesize)|Retrieves the intermediate size of the `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::GetTextAlign](#cmfcribbonedit__gettextalign)|Retrieves the alignment of the text in the text box.|  
|[CMFCRibbonEdit::GetWidth](#cmfcribbonedit__getwidth)|Retrieves the width, in pixels, of the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::HasCompactMode](#cmfcribbonedit__hascompactmode)|Indicates whether the display size for the `CMFCRibbonEdit` control can be compact.|  
|[CMFCRibbonEdit::HasFocus](#cmfcribbonedit__hasfocus)|Indicates whether the `CMFCRIbbonEdit` control has the focus.|  
|[CMFCRibbonEdit::HasLargeMode](#cmfcribbonedit__haslargemode)|Indicates whether the display size for the `CMFCRibbonEdit` control can be large.|  
|[CMFCRibbonEdit::HasSpinButtons](#cmfcribbonedit__hasspinbuttons)|Indicates whether the text box has a spin button.|  
|[CMFCRibbonEdit::IsHighlighted](#cmfcribbonedit__ishighlighted)|Indicates whether the `CMFCRibbonEdit` control is highlighted.|  
|[CMFCRibbonEdit::OnAfterChangeRect](#cmfcribbonedit__onafterchangerect)|Called by the framework when the dimensions of the display rectangle for the `CMFCRibbonEdit` control changes.|  
|[CMFCRibbonEdit::OnDraw](#cmfcribbonedit__ondraw)|Called by the framework to draw the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::OnDrawLabelAndImage](#cmfcribbonedit__ondrawlabelandimage)|Called by the framework to draw the label and image for the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::OnDrawOnList](#cmfcribbonedit__ondrawonlist)|Called by the framework to draw the `CMFCRibbonEdit` control in a commands list box.|  
|[CMFCRibbonEdit::OnEnable](#cmfcribbonedit__onenable)|Called by the framework to enable or disable the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::OnHighlight](#cmfcribbonedit__onhighlight)|Called by the framework when the pointer enters or leaves the bounds of the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::OnKey](#cmfcribbonedit__onkey)|Called by the framework when the user presses a keytip and the `CMFCRibbonEdit` control has the focus.|  
|[CMFCRibbonEdit::OnLButtonDown](#cmfcribbonedit__onlbuttondown)|Called by the framework to update the `CMFCRibbonEdit` control when the user presses the left mouse button on the control.|  
|[CMFCRibbonEdit::OnLButtonUp](#cmfcribbonedit__onlbuttonup)|Called by the framework when the user releases the left mouse button.|  
|[CMFCRibbonEdit::OnRTLChanged](#cmfcribbonedit__onrtlchanged)|Called by the framework to update the `CMFCRibbonEdit` control when the layout changes direction.|  
|[CMFCRibbonEdit::OnShow](#cmfcribbonedit__onshow)|Called by the framework to show or hide the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::Redraw](#cmfcribbonedit__redraw)|Updates the display of the `CMFCRibbonEdit` control.|  
|[CMFCRibbonEdit::SetACCData](#cmfcribbonedit__setaccdata)|Sets the accessibility data for the `CMFCRibbonEdit` object.|  
|[CMFCRibbonEdit::SetEditText](#cmfcribbonedit__setedittext)|Sets the text in the text box.|  
|[CMFCRibbonEdit::SetTextAlign](#cmfcribbonedit__settextalign)|Sets the text alignment of the text box.|  
|[CMFCRibbonEdit::SetWidth](#cmfcribbonedit__setwidth)|Sets the width of the text box for the `CMFCRibbonEdit` control.|  
  
## Remarks  
  
## Example  
 The following example demonstrates how to construct a `CMFCRibbonEdit` object, show spin buttons next to the edit control, and set the text of the edit control. This code snippet is part of the [MS Office 2007 Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#7](../../mfc/reference/codesnippet/cpp/cmfcribbonedit-class_1.cpp)]  
  
## Requirements  
 **Header:** afxRibbonEdit.h  
  
##  <a name="cmfcribbonedit__canbestretched"></a>  CMFCRibbonEdit::CanBeStretched  
 Indicates whether the height of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can increase vertically to the height of a ribbon row.  
  
```  
virtual BOOL CanBeStretched();
```  
  
### Return Value  
 Always returns `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__cmfcribbonedit"></a>  CMFCRibbonEdit::CMFCRibbonEdit  
 Constructs a [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
CMFCRibbonEdit(
    UINT nID,  
    int nWidth,  
    LPCTSTR lpszLabel = NULL,  
    int nImage = -1);

CMFCRibbonEdit();
```  
  
### Parameters  
 [in] `nID`  
 Command ID for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
 [in] `nWidth`  
 The width, in pixels, of the text box for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
 [in] `lpszLabel`  
 The label for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
 [in] `nImage`  
 Index of the small image to use for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control. The collection of small images is maintained by the parent ribbon category.  
  
### Remarks  
 The [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control does not use a large image.  
  
##  <a name="cmfcribbonedit__copyfrom"></a>  CMFCRibbonEdit::CopyFrom  
 Copies the state of the specified [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object to the current [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual void CopyFrom(const CMFCRibbonBaseElement& src);
```  
  
### Parameters  
 [in] `src`  
 The source [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Remarks  
 The `src` parameter must be of type [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md).  
  
##  <a name="cmfcribbonedit__createedit"></a>  CMFCRibbonEdit::CreateEdit  
 Creates a new text box for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual CMFCRibbonRichEditCtrl* CreateEdit(
    CWnd* pWndParent,  
    DWORD dwEditStyle);
```  
  
### Parameters  
 [in] `pWndParent`  
 A pointer to the parent window of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
 [in] `dwEditStyle`  
 Specifies the style of the text box. You can combine the window styles listed in the Remarks section with the [edit control styles](http://msdn.microsoft.com/library/windows/desktop/bb775464) that are described in the Windows SDK.  
  
### Return Value  
 A pointer to the new text box if the method was successful; otherwise, `NULL`.  
  
### Remarks  
 Override this method in a derived class to create a custom text box.  
  
 You can apply the following [Window Styles](../../mfc/reference/window-styles.md) to a text box:  
  
- **WS_CHILD**  
  
- **WS_VISIBLE**  
  
- **WS_DISABLED**  
  
- **WS_GROUP**  
  
- **WS_TABSTOP**  
  
##  <a name="cmfcribbonedit__destroyctrl"></a>  CMFCRibbonEdit::DestroyCtrl  
 Destroys the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual void DestroyCtrl();
```  
  
### Remarks  
  
##  <a name="cmfcribbonedit__dropdownlist"></a>  CMFCRibbonEdit::DropDownList  
 Drops down a list box.  
  
```  
virtual void DropDownList();
```  
  
### Remarks  
 By default this method does nothing. Override this method to drop down a list box.  
  
##  <a name="cmfcribbonedit__enablespinbuttons"></a>  CMFCRibbonEdit::EnableSpinButtons  
 Enables and sets the range of the spin button for the text box.  
  
```  
void EnableSpinButtons(
    int nMin,  
    int nMax);
```  
  
### Parameters  
 [in] `nMin`  
 The minimum value of the spin button.  
  
 [in] `nMax`  
 The maximum value of the spin button.  
  
### Remarks  
 Spin buttons display an up and down arrow and enable users to move through a fixed set of values.  
  
##  <a name="cmfcribbonedit__getcompactsize"></a>  CMFCRibbonEdit::GetCompactSize  
 Retrieves the compact size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Return Value  
 The compact size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__getedittext"></a>  CMFCRibbonEdit::GetEditText  
 Retrieves the text in the text box.  
  
```  
CString GetEditText() const;

 
```  
  
### Return Value  
 The text in the text box.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__getintermediatesize"></a>  CMFCRibbonEdit::GetIntermediateSize  
 Retrieves the intermediate size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Return Value  
 The intermediate size of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__gettextalign"></a>  CMFCRibbonEdit::GetTextAlign  
 Retrieves the alignment of the text in the text box.  
  
```  
int GetTextAlign() const;

 
```  
  
### Return Value  
 A text alignment enumerated value. See the Remarks section for possible values.  
  
### Remarks  
 The returned value is one of the following edit control styles:  
  
- **ES_LEFT** for left alignment  
  
- **ES_CENTER** for center alignment  
  
- **ES_RIGHT** for right alignment  
  
 For more information about these styles, see [Edit Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775464).  
  
##  <a name="cmfcribbonedit__getwidth"></a>  CMFCRibbonEdit::GetWidth  
 Retrieves the width, in pixels, of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
int GetWidth(BOOL bInFloatyMode = FALSE) const;

 
```  
  
### Parameters  
 [in] `bInFloatyMode`  
 `TRUE` if the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control is in floating mode; otherwise, `FALSE`.  
  
### Return Value  
 The width, in pixels, of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__hascompactmode"></a>  CMFCRibbonEdit::HasCompactMode  
 Indicates whether the display size for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can be compact.  
  
```  
virtual BOOL HasCompactMode() const;

 
```  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
 By default this method always returns `TRUE`. Override this method to indicate whether the display size can be compact.  
  
##  <a name="cmfcribbonedit__hasfocus"></a>  CMFCRibbonEdit::HasFocus  
 Indicates whether the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has the focus.  
  
```  
virtual BOOL HasFocus() const;

 
```  
  
### Return Value  
 `TRUE` if the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has the focus; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__haslargemode"></a>  CMFCRibbonEdit::HasLargeMode  
 Indicates whether the display size for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control can be large.  
  
```  
virtual BOOL HasLargeMode() const;

 
```  
  
### Return Value  
 Always returns `FALSE`.  
  
### Remarks  
 By default this method always returns `FALSE`. Override this method to indicate whether the display size can be large.  
  
##  <a name="cmfcribbonedit__hasspinbuttons"></a>  CMFCRibbonEdit::HasSpinButtons  
 Indicates whether the text box has a spin button.  
  
```  
virtual BOOL HasSpinButtons() const;

 
```  
  
### Return Value  
 `TRUE` if the text box has a spin button; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__ishighlighted"></a>  CMFCRibbonEdit::IsHighlighted  
 Indicates whether the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control is highlighted.  
  
```  
virtual BOOL IsHighlighted() const;

 
```  
  
### Return Value  
 `TRUE` if the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control is highlighted; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onafterchangerect"></a>  CMFCRibbonEdit::OnAfterChangeRect  
 Called by the framework when the dimensions of the display rectangle for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control change.  
  
```  
virtual void OnAfterChangeRect(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__ondraw"></a>  CMFCRibbonEdit::OnDraw  
 Called by the framework to draw the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__ondrawlabelandimage"></a>  CMFCRibbonEdit::OnDrawLabelAndImage  
 Called by the framework to draw the label and image for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void OnDrawLabelAndImage(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__ondrawonlist"></a>  CMFCRibbonEdit::OnDrawOnList  
 Called by the framework to draw the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control in a commands list box.  
  
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
 Pointer to a device context for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
 [in] `strText`  
 The display text [](../../mfc/reference/cmfcribbonedit-class.md "cmfcribbonedit class").  
  
 [in] `nTextOffset`  
 Distance, in pixels, from the left side of the list box to the display text.  
  
 [in] `rect`  
 The display rectangle for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
 [in] `bIsSelected`  
 This parameter is not used.  
  
 [in] `bHighlighted`  
 This parameter is not used.  
  
### Remarks  
 The commands list box displays ribbon controls to enable users to customize the quick access toolbar.  
  
##  <a name="cmfcribbonedit__onenable"></a>  CMFCRibbonEdit::OnEnable  
 Called by the framework to enable or disable the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void OnEnable(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable the control; `FALSE` to disable the control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onhighlight"></a>  CMFCRibbonEdit::OnHighlight  
 Called by the framework when the pointer enters or leaves the bounds of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void OnHighlight(BOOL bHighlight);
```  
  
### Parameters  
 [in] `bHighlight`  
 `TRUE` if the pointer is in the bounds of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onkey"></a>  CMFCRibbonEdit::OnKey  
 Called by the framework when the user presses a keytip and the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has the focus.  
  
```  
virtual BOOL OnKey(BOOL bIsMenuKey);
```  
  
### Parameters  
 [in] `bIsMenuKey`  
 `TRUE` if the keytip displays a pop-up menu; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the event was handled; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onlbuttondown"></a>  CMFCRibbonEdit::OnLButtonDown  
 Called by the framework to update the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control when the user presses the left mouse button on the control.  
  
```  
virtual void OnLButtonDown(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 This parameter is not used.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onlbuttonup"></a>  CMFCRibbonEdit::OnLButtonUp  
 Called by the framework when the user releases the left mouse button.  
  
```  
virtual void OnLButtonUp(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 This parameter is not used.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onrtlchanged"></a>  CMFCRibbonEdit::OnRTLChanged  
 Called by the framework to update the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control when the layout changes direction.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### Parameters  
 [in] `bIsRTL`  
 `TRUE` if the layout is right-to-left; `FALSE` if the layout is left-to-right.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__onshow"></a>  CMFCRibbonEdit::OnShow  
 Called by the framework to show or hide the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` to show the control; `FALSE` to hide the control.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__redraw"></a>  CMFCRibbonEdit::Redraw  
 Updates the display of the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
virtual void Redraw();
```  
  
### Remarks  
 This method redraws the display rectangle for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object by indirectly calling [CWnd::RedrawWindow](http://msdn.microsoft.com/library/windows/desktop/dd162911) with the `RDW_INVALIDATE`, `RDW_ERASE`, and `RDW_UPDATENOW` flags set.  
  
##  <a name="cmfcribbonedit__setaccdata"></a>  CMFCRibbonEdit::SetACCData  
 Sets the accessibility data for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### Parameters  
 `pParent`  
 Pointer to the parent window for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
 `data`  
 The accessibility data for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) object.  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
  
##  <a name="cmfcribbonedit__setedittext"></a>  CMFCRibbonEdit::SetEditText  
 Sets the text in the text box.  
  
```  
void SetEditText(CString strText);
```  
  
### Parameters  
 [in] `strText`  
 The text for the text box.  
  
##  <a name="cmfcribbonedit__settextalign"></a>  CMFCRibbonEdit::SetTextAlign  
 Sets the text alignment of the text box.  
  
```  
void SetTextAlign(int nAlign);
```  
  
### Parameters  
 [in] `nAlign`  
 A text alignment enumerated value. See the Remarks section for possible values.  
  
### Remarks  
 The parameter `nAlign` is one of the following edit control styles:  
  
- **ES_LEFT** for left alignment  
  
- **ES_CENTER** for center alignment  
  
- **ES_RIGHT** for right alignment  
  
 For more information about these styles, see [Edit Control Styles](http://msdn.microsoft.com/library/windows/desktop/bb775464).  
  
##  <a name="cmfcribbonedit__setwidth"></a>  CMFCRibbonEdit::SetWidth  
 Sets the width of the text box for the [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control.  
  
```  
void SetWidth(
    int nWidth,  
    BOOL bInFloatyMode = FALSE);
```  
  
### Parameters  
 [in] `nWidth`  
 The width, in pixels, of the text box.  
  
 `bInFloatyMode`  
 `TRUE` to set the width for floating mode; `FALSE` to set the width for regular mode.  
  
### Remarks  
 The [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md) control has two widths depending on its display mode: floating mode and regular mode.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)