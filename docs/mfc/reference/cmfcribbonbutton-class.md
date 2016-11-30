---
title: "CMFCRibbonButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonButton class"
ms.assetid: 732e941c-9504-4b83-a691-d18075965d53
caps.latest.revision: 42
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
# CMFCRibbonButton Class
The `CMFCRibbonButton` class implements buttons that you can position on ribbon bar elements such as panels, Quick Access Toolbars, and pop-up menus.  
  
## Syntax  
  
```  
class CMFCRibbonButton : public CMFCRibbonBaseElement  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonButton::CMFCRibbonButton](#cmfcribbonbutton__cmfcribbonbutton)|Constructs a ribbon button object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonButton::AddSubItem](#cmfcribbonbutton__addsubitem)|Adds a menu item to the pop-up menu that is associated with the button.|  
|[CMFCRibbonButton::CanBeStretched](#cmfcribbonbutton__canbestretched)|(Overrides [CMFCRibbonBaseElement::CanBeStretched](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__canbestretched).)|  
|[CMFCRibbonButton::CleanUpSizes](#cmfcribbonbutton__cleanupsizes)|(Overrides [CMFCRibbonBaseElement::CleanUpSizes](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__cleanupsizes).)|  
|[CMFCRibbonButton::ClosePopupMenu](#cmfcribbonbutton__closepopupmenu)|(Overrides [CMFCRibbonBaseElement::ClosePopupMenu](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__closepopupmenu).)|  
|[CMFCRibbonButton::DrawBottomText](#cmfcribbonbutton__drawbottomtext)||  
|[CMFCRibbonButton::DrawImage](#cmfcribbonbutton__drawimage)|(Overrides [CMFCRibbonBaseElement::DrawImage](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__drawimage).)|  
|[CMFCRibbonButton::DrawRibbonText](#cmfcribbonbutton__drawribbontext)||  
|[CMFCRibbonButton::FindSubItemIndexByID](#cmfcribbonbutton__findsubitemindexbyid)|Returns the index of a pop-up menu item that is associated with the specified command ID.|  
|[CMFCRibbonButton::GetCommandRect](#cmfcribbonbutton__getcommandrect)||  
|[CMFCRibbonButton::GetCompactSize](#cmfcribbonbutton__getcompactsize)|Returns the compact size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetCompactSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getcompactsize).)|  
|[CMFCRibbonButton::GetIcon](#cmfcribbonbutton__geticon)||  
|[CMFCRibbonButton::GetImageIndex](#cmfcribbonbutton__getimageindex)|Returns the index of the image that is associated with the button.|  
|[CMFCRibbonButton::GetImageSize](#cmfcribbonbutton__getimagesize)|Returns the image size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetImageSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getimagesize).)|  
|[CMFCRibbonButton::GetIntermediateSize](#cmfcribbonbutton__getintermediatesize)|Returns the size of the ribbon element in its intermediate state. (Overrides [CMFCRibbonBaseElement::GetIntermediateSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getintermediatesize).)|  
|[CMFCRibbonButton::GetMenu](#cmfcribbonbutton__getmenu)|Returns a handle to a Windows menu that is assigned to the ribbon button.|  
|[CMFCRibbonButton::GetMenuRect](#cmfcribbonbutton__getmenurect)||  
|[CMFCRibbonButton::GetRegularSize](#cmfcribbonbutton__getregularsize)|Returns the regular size of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetRegularSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getregularsize).)|  
|[CMFCRibbonButton::GetSubItems](#cmfcribbonbutton__getsubitems)||  
|[CMFCRibbonButton::GetTextRowHeight](#cmfcribbonbutton__gettextrowheight)||  
|[CMFCRibbonButton::GetToolTipText](#cmfcribbonbutton__gettooltiptext)|Returns tooltip text of the ribbon element. (Overrides [CMFCRibbonBaseElement::GetToolTipText](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__gettooltiptext).)|  
|[CMFCRibbonButton::HasCompactMode](#cmfcribbonbutton__hascompactmode)|Specifies whether the ribbon element has a compact mode. (Overrides [CMFCRibbonBaseElement::HasCompactMode](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__hascompactmode).)|  
|[CMFCRibbonButton::HasIntermediateMode](#cmfcribbonbutton__hasintermediatemode)|Specifies whether the ribbon element has an intermediate mode. (Overrides [CMFCRibbonBaseElement::HasIntermediateMode](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__hasintermediatemode).)|  
|[CMFCRibbonButton::HasLargeMode](#cmfcribbonbutton__haslargemode)|Determines whether the ribbon element has a large mode. (Overrides [CMFCRibbonBaseElement::HasLargeMode](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__haslargemode).)|  
|[CMFCRibbonButton::HasMenu](#cmfcribbonbutton__hasmenu)|(Overrides [CMFCRibbonBaseElement::HasMenu](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__hasmenu).)|  
|[CMFCRibbonButton::IsAlwaysDrawBorder](#cmfcribbonbutton__isalwaysdrawborder)||  
|[CMFCRibbonButton::IsAlwaysLargeImage](#cmfcribbonbutton__isalwayslargeimage)|(Overrides [CMFCRibbonBaseElement::IsAlwaysLargeImage](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__isalwayslargeimage).)|  
|[CMFCRibbonButton::IsApplicationButton](#cmfcribbonbutton__isapplicationbutton)||  
|[CMFCRibbonButton::IsCommandAreaHighlighted](#cmfcribbonbutton__iscommandareahighlighted)||  
|[CMFCRibbonButton::IsDefaultCommand](#cmfcribbonbutton__isdefaultcommand)|Determines whether you have enabled the default command for a ribbon button.|  
|[CMFCRibbonButton::IsDefaultPanelButton](#cmfcribbonbutton__isdefaultpanelbutton)||  
|[CMFCRibbonButton::IsDrawTooltipImage](#cmfcribbonbutton__isdrawtooltipimage)||  
|[CMFCRibbonButton::IsLargeImage](#cmfcribbonbutton__islargeimage)||  
|[CMFCRibbonButton::IsMenuAreaHighlighted](#cmfcribbonbutton__ismenuareahighlighted)||  
|[CMFCRibbonButton::IsMenuOnBottom](#cmfcribbonbutton__ismenuonbottom)||  
|[CMFCRibbonButton::IsPopupDefaultMenuLook](#cmfcribbonbutton__ispopupdefaultmenulook)||  
|[CMFCRibbonButton::IsRightAlignMenu](#cmfcribbonbutton__isrightalignmenu)|Determines whether the menu is right-aligned.|  
|[CMFCRibbonButton::IsSingleLineText](#cmfcribbonbutton__issinglelinetext)||  
|[CMFCRibbonButton::OnCalcTextSize](#cmfcribbonbutton__oncalctextsize)|(Overrides [CMFCRibbonBaseElement::OnCalcTextSize](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__oncalctextsize).)|  
|[CMFCRibbonButton::OnDrawBorder](#cmfcribbonbutton__ondrawborder)||  
|[CMFCRibbonButton::OnDraw](#cmfcribbonbutton__ondraw)|Called by the framework to draw the ribbon element. (Overrides [CMFCRibbonBaseElement::OnDraw](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__ondraw).)|  
|[CMFCRibbonButton::OnFillBackground](#cmfcribbonbutton__onfillbackground)||  
|[CMFCRibbonButton::RemoveAllSubItems](#cmfcribbonbutton__removeallsubitems)|Removes all menu items from the pop-up menu.|  
|[CMFCRibbonButton::RemoveSubItem](#cmfcribbonbutton__removesubitem)|Removes a menu item from the pop-up menu.|  
|[CMFCRibbonButton::SetACCData](#cmfcribbonbutton__setaccdata)|(Overrides [CMFCRibbonBaseElement::SetACCData](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__setaccdata).)|  
|[CMFCRibbonButton::SetAlwaysLargeImage](#cmfcribbonbutton__setalwayslargeimage)|Specifies whether the button displays a large or a small image when the user collapses the button.|  
|[CMFCRibbonButton::SetDefaultCommand](#cmfcribbonbutton__setdefaultcommand)|Enables the default command for the ribbon button.|  
|[CMFCRibbonButton::SetDescription](#cmfcribbonbutton__setdescription)|Sets the description for the ribbon element. (Overrides [CMFCRibbonBaseElement::SetDescription](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__setdescription).)|  
|[CMFCRibbonButton::SetImageIndex](#cmfcribbonbutton__setimageindex)|Assigns an index to the image of the button.|  
|[CMFCRibbonButton::SetMenu](#cmfcribbonbutton__setmenu)|Assigns a pop-up menu to the ribbon button.|  
|[CMFCRibbonButton::SetParentCategory](#cmfcribbonbutton__setparentcategory)|(Overrides [CMFCRibbonBaseElement::SetParentCategory](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__setparentcategory).)|  
|[CMFCRibbonButton::SetRightAlignMenu](#cmfcribbonbutton__setrightalignmenu)|Aligns the pop-up menu to the right of the button.|  
|[CMFCRibbonButton::SetText](#cmfcribbonbutton__settext)|Sets the text for the ribbon element. (Overrides [CMFCRibbonBaseElement::SetText](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__settext).)|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonButton::OnClick](#cmfcribbonbutton__onclick)|Called by the framework when the user clicks the button.|  
  
## Example  
 The following example demonstrates how to use the various methods in the `CMFCRibbonButton` class. The example shows how to construct an object of the `CMFCRibbonButton` class, assign a pop-up menu to the ribbon button, set the description of the button, remove a menu item from the pop-up menu, and right align the pop-up menu to the edge of the button.  
  
 [!code-cpp[NVC_MFC_RibbonApp#7](../../mfc/reference/codesnippet/cpp/cmfcribbonbutton-class_1.cpp)]  
  
## Remarks  
 To use a ribbon button in an application, construct the button object and add it to the appropriate ribbon [panel](../../mfc/reference/cmfcribbonpanel-class.md).  
  
```  
CMFCRibbonPanel* pPanel = pCategory->AddPanel (
    _T("Clipboard"), // Panel name  
    m_PanelIcons.ExtractIcon (0));
*// Panel icon  
// Create the first button ("Paste"):  
CMFCRibbonButton* pPasteButton = 
    new CMFCRibbonButton (ID_EDIT_PASTE,
    _T("Paste"), -1,
    0);

// The third parameter (-1) disables small images for button.  
// This button is always displayed with a large image  
// Associate a pop-up menu with the "Paste" button:  
pPasteButton->SetMenu (IDR_CONTEXT_MENU);

// Add buttons to the panel. These buttons have only small images.  
pPanel->Add (new CMFCRibbonButton (ID_EDIT_CUT,
    _T("Cut"),
    1));

pPanel->Add (new CMFCRibbonButton (ID_EDIT_COPY,
    _T("Copy"),
    2));

pPanel->Add (new CMFCRibbonButton (ID_EDIT_PAINT,
    _T("Paint"),
    9));
```  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
## Requirements  
 **Header:** afxribbonbutton.h  
  
##  <a name="cmfcribbonbutton__addsubitem"></a>  CMFCRibbonButton::AddSubItem  
 Adds a menu item to the pop-up menu that is associated with the button.  
  
```  
void AddSubItem(
    CMFCRibbonBaseElement* pSubItem,  
    int nIndex=-1);
```  
  
### Parameters  
 [in] `pSubItem`  
 Specifies a pointer to the new element to add.  
  
 [in] `nIndex`  
 Specifies the index at which to add the element to the array of menu items of the button; -1 to add the element at the end of the array of menu items.  
  
##  <a name="cmfcribbonbutton__canbestretched"></a>  CMFCRibbonButton::CanBeStretched  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CanBeStretched();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__cleanupsizes"></a>  CMFCRibbonButton::CleanUpSizes  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CleanUpSizes();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__closepopupmenu"></a>  CMFCRibbonButton::ClosePopupMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ClosePopupMenu();
```  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__cmfcribbonbutton"></a>  CMFCRibbonButton::CMFCRibbonButton  
 Constructs a ribbon button object.  
  
```  
CMFCRibbonButton(
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex=-1,  
    int nLargeImageIndex=-1,  
    BOOL bAlwaysShowDescription=FALSE);

CMFCRibbonButton(
    UINT nID,  
    LPCTSTR lpszText,  
    HICON hIcon,  
    BOOL bAlwaysShowDescription=FALSE,  
    HICON hIconSmall=NULL,  
    BOOL bAutoDestroyIcon=FALSE,  
    BOOL bAlphaBlendIcon=FALSE);
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command ID of the button.  
  
 [in] `lpszText`  
 Specifies the text label of the button.  
  
 [in] `nSmallImageIndex`  
 Specifies a zero-based index of the button's small image in the image list of the parent category.  
  
 [in] `nLargeImageIndex`  
 Specifies a zero-based index of the button's large image in the image list of the parent category.  
  
 [in] `hIcon`  
 Specifies a handle to the icon that the application uses as the button's image.  
  
### Example  
 The following example demonstrates how to construct a `CMFCRibbonButton` object.  
  
 [!code-cpp[NVC_MFC_RibbonApp#6](../../mfc/reference/codesnippet/cpp/cmfcribbonbutton-class_2.cpp)]  
  
##  <a name="cmfcribbonbutton__drawbottomtext"></a>  CMFCRibbonButton::DrawBottomText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CSize DrawBottomText(
    CDC* pDC,  
    BOOL bCalcOnly);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `bCalcOnly`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__drawimage"></a>  CMFCRibbonButton::DrawImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void DrawImage(
    CDC* pDC,  
    RibbonImageType type,  
    CRect rectImage);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `type`  
 [in] `rectImage`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__drawribbontext"></a>  CMFCRibbonButton::DrawRibbonText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int DrawRibbonText(
    CDC* pDC,  
    const CString& strText,  
    CRect rectText,  
    UINT uiDTFlags,  
    COLORREF clrText = (COLORREF)-1);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `strText`  
 [in] `rectText`  
 [in] `uiDTFlags`  
 [in] `clrText`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__findsubitemindexbyid"></a>  CMFCRibbonButton::FindSubItemIndexByID  
 Returns the index of a pop-up menu item that is associated with the specified command ID.  
  
```  
int FindSubItemIndexByID(UINT uiID) const;

 
```  
  
### Parameters  
 [in] `uiID`  
 Specifies the command ID of the pop-up menu item.  
  
### Return Value  
 The zero-based index of the sub-item that is associated with the `uiID`. -1 if there is no such sub-item.  
  
##  <a name="cmfcribbonbutton__getcommandrect"></a>  CMFCRibbonButton::GetCommandRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetCommandRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getcompactsize"></a>  CMFCRibbonButton::GetCompactSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__geticon"></a>  CMFCRibbonButton::GetIcon  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
HICON GetIcon(BOOL bLargeIcon = TRUE) const;

 
```  
  
### Parameters  
 [in] `bLargeIcon`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getimageindex"></a>  CMFCRibbonButton::GetImageIndex  
 Returns the index of the image that is associated with the button.  
  
```  
int GetImageIndex(BOOL bLargeImage) const;

 
```  
  
### Parameters  
 [in] `bLargeImage`  
 If `TRUE`, returns the image index in the image list that contains the large images; otherwise returns the image index in the image list that contains the small images.  
  
### Return Value  
 The index of the button's image in the associated image list.  
  
##  <a name="cmfcribbonbutton__getimagesize"></a>  CMFCRibbonButton::GetImageSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetImageSize(RibbonImageType type) const;

 
```  
  
### Parameters  
 [in] `type`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getintermediatesize"></a>  CMFCRibbonButton::GetIntermediateSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getmenu"></a>  CMFCRibbonButton::GetMenu  
 Returns a handle to a Windows menu that is assigned to the ribbon button.  
  
```  
HMENU GetMenu() const;

 
```  
  
### Return Value  
 A handle to a Windows menu assigned to the button; `NULL` if there is no menu assigned.  
  
##  <a name="cmfcribbonbutton__getmenurect"></a>  CMFCRibbonButton::GetMenuRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CRect GetMenuRect() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getregularsize"></a>  CMFCRibbonButton::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__getsubitems"></a>  CMFCRibbonButton::GetSubItems  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
const CArray<CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& GetSubItems() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__gettextrowheight"></a>  CMFCRibbonButton::GetTextRowHeight  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetTextRowHeight() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__gettooltiptext"></a>  CMFCRibbonButton::GetToolTipText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CString GetToolTipText() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__hascompactmode"></a>  CMFCRibbonButton::HasCompactMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasCompactMode() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__hasintermediatemode"></a>  CMFCRibbonButton::HasIntermediateMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasIntermediateMode() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__haslargemode"></a>  CMFCRibbonButton::HasLargeMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasLargeMode() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__hasmenu"></a>  CMFCRibbonButton::HasMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasMenu() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isalwaysdrawborder"></a>  CMFCRibbonButton::IsAlwaysDrawBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAlwaysDrawBorder() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isalwayslargeimage"></a>  CMFCRibbonButton::IsAlwaysLargeImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAlwaysLargeImage() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isapplicationbutton"></a>  CMFCRibbonButton::IsApplicationButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsApplicationButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__iscommandareahighlighted"></a>  CMFCRibbonButton::IsCommandAreaHighlighted  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsCommandAreaHighlighted() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isdefaultcommand"></a>  CMFCRibbonButton::IsDefaultCommand  
 Specifies whether the default command for a ribbon button is enabled.  
  
```  
BOOL IsDefaultCommand() const;

 
```  
  
### Return Value  
 `TRUE` if you have enabled the default command for a ribbon button; `FALSE` otherwise.  
  
##  <a name="cmfcribbonbutton__isdefaultpanelbutton"></a>  CMFCRibbonButton::IsDefaultPanelButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDefaultPanelButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isdrawtooltipimage"></a>  CMFCRibbonButton::IsDrawTooltipImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsDrawTooltipImage() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__islargeimage"></a>  CMFCRibbonButton::IsLargeImage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsLargeImage() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__ismenuareahighlighted"></a>  CMFCRibbonButton::IsMenuAreaHighlighted  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsMenuAreaHighlighted() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__ismenuonbottom"></a>  CMFCRibbonButton::IsMenuOnBottom  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsMenuOnBottom() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__ispopupdefaultmenulook"></a>  CMFCRibbonButton::IsPopupDefaultMenuLook  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsPopupDefaultMenuLook() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__isrightalignmenu"></a>  CMFCRibbonButton::IsRightAlignMenu  
 Specifies whether the menu is right-aligned.  
  
```  
BOOL IsRightAlignMenu() const;

 
```  
  
### Return Value  
 `TRUE` if menu is right-aligned; otherwise `FALSE`.  
  
##  <a name="cmfcribbonbutton__issinglelinetext"></a>  CMFCRibbonButton::IsSingleLineText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsSingleLineText() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__oncalctextsize"></a>  CMFCRibbonButton::OnCalcTextSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnCalcTextSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__onclick"></a>  CMFCRibbonButton::OnClick  
 Called by the framework when the user clicks the button.  
  
```  
virtual void OnClick(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 Specifies the position of the mouse click.  
  
### Remarks  
 Override this method in a derived class if you want to handle this event.  
  
##  <a name="cmfcribbonbutton__ondraw"></a>  CMFCRibbonButton::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__ondrawborder"></a>  CMFCRibbonButton::OnDrawBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDrawBorder(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__onfillbackground"></a>  CMFCRibbonButton::OnFillBackground  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual COLORREF OnFillBackground(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__removeallsubitems"></a>  CMFCRibbonButton::RemoveAllSubItems  
 Removes all menu items from the pop-up menu.  
  
```  
void RemoveAllSubItems();
```  
  
##  <a name="cmfcribbonbutton__removesubitem"></a>  CMFCRibbonButton::RemoveSubItem  
 Removes a menu item from the pop-up menu.  
  
```  
BOOL RemoveSubItem(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the menu item that you want to remove.  
  
### Return Value  
 `TRUE` if the specified item has been removed successfully; otherwise `FALSE` if `nIndex` is negative or exceeds the number of menu items in the pop-up menu.  
  
##  <a name="cmfcribbonbutton__setaccdata"></a>  CMFCRibbonButton::SetACCData  
 Sets the accessibility data for the ribbon button.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);

 
```  
  
### Parameters  
 `pParent`  
 The parent window for the ribbon element.  
  
 `data`  
 The accessibility data for the ribbon element.  
  
### Return Value  
 Returns `TRUE` if successful; otherwise FALSE.  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__setalwayslargeimage"></a>  CMFCRibbonButton::SetAlwaysLargeImage  
 Specifies whether the button displays a large or a small image when the user collapses the button.  
  
```  
void SetAlwaysLargeImage(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 If `TRUE`, the button displays a large image. Otherwise, the button displays a small image.  
  
##  <a name="cmfcribbonbutton__setdefaultcommand"></a>  CMFCRibbonButton::SetDefaultCommand  
 Enables the default command for the ribbon button.  
  
```  
void SetDefaultCommand(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 If `TRUE`, the button can execute its default command. If `FALSE`, the button cannot execute its default command.  
  
### Remarks  
 `bSet` is relevant only when the button has a menu. If `bSet` is `TRUE`, the button can execute its default command and the assigned pop-up menu appears only when a user clicks the arrow at the right edge of the button. Otherwise, the button cannot execute its default command, and the pop-up menu appears regardless of which area of the button the user clicks.  
  
##  <a name="cmfcribbonbutton__setdescription"></a>  CMFCRibbonButton::SetDescription  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetDescription(LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `lpszText`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__setimageindex"></a>  CMFCRibbonButton::SetImageIndex  
 Assigns an index to the image of the button.  
  
```  
void SetImageIndex(
    int nIndex,  
    BOOL bLargeImage);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the image index.  
  
 [in] `bLargeImage`  
 If `TRUE`, the specified index refers to the list of large images. Otherwise, the index refers to the list of the small images.  
  
##  <a name="cmfcribbonbutton__setmenu"></a>  CMFCRibbonButton::SetMenu  
 Assigns a pop-up menu to the ribbon button.  
  
```  
void SetMenu(
    HMENU hMenu,  
    BOOL bIsDefaultCommand=FALSE,  
    BOOL bRightAlign=FALSE);

void SetMenu(
    UINT uiMenuResID,  
    BOOL bIsDefaultCommand=FALSE,  
    BOOL bRightAlign=FALSE);
```  
  
### Parameters  
 `hMenu`  
 A handle to a Windows menu.  
  
 `bIsDefaultCommand`  
 If `TRUE`, the button can execute its default command; otherwise, the button displays a pop-up menu.  
  
 `bRightAlign`  
 If `TRUE`, the menu is right-aligned. Otherwise, the menu is left-aligned.  
  
 `uiMenuResID`  
 A menu resource ID.  
  
### Remarks  
 When the application assigns the menu to the button, the button displays an arrow on its right side. If `bIsDefaultCommand` is `TRUE`, the menu appears only when the user clicks the arrow. If the user clicks the button, its default command is executed. If `bIsDefaultCommand` is `FALSE`, the menu appears by clicking anywhere on the button.  
  
##  <a name="cmfcribbonbutton__setparentcategory"></a>  CMFCRibbonButton::SetParentCategory  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetParentCategory(CMFCRibbonCategory* pParent);
```  
  
### Parameters  
 [in] `pParent`  
  
### Remarks  
  
##  <a name="cmfcribbonbutton__setrightalignmenu"></a>  CMFCRibbonButton::SetRightAlignMenu  
 Aligns the pop-up menu to the edge of the button.  
  
```  
void SetRightAlignMenu(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 If `TRUE`, the menu is right-aligned. Otherwise, the menu is left-aligned  
  
##  <a name="cmfcribbonbutton__settext"></a>  CMFCRibbonButton::SetText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SetText(LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `lpszText`  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
