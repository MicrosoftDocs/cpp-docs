---
title: "CMFCRibbonPanel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonPanel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonPanel class"
ms.assetid: 51d70749-1140-4386-b103-f14082049ba6
caps.latest.revision: 34
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
# CMFCRibbonPanel Class
Implements a panel that contains a set of ribbon elements. When the panel is drawn, it displays as many elements as possible, given the size of the panel.  
  
## Syntax  
  
```  
class CMFCRibbonPanel : public CObject  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonPanel::CMFCRibbonPanel](#cmfcribbonpanel__cmfcribbonpanel)|Constructs and initializes a `CMFCRibbonPanel` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonPanel::Add](#cmfcribbonpanel__add)|Adds a ribbon element to the panel.|  
|[CMFCRibbonPanel::AddSeparator](#cmfcribbonpanel__addseparator)|Adds a separator to the ribbon panel.|  
|[CMFCRibbonPanel::AddToolBar](#cmfcribbonpanel__addtoolbar)|Adds a toolbar to the ribbon panel.|  
|[CMFCRibbonPanel::FindByData](#cmfcribbonpanel__findbydata)||  
|[CMFCRibbonPanel::FindByID](#cmfcribbonpanel__findbyid)|Returns an element identified by a specified command ID.|  
|[CMFCRibbonPanel::GetCaptionHeight](#cmfcribbonpanel__getcaptionheight)||  
|[CMFCRibbonPanel::GetCount](#cmfcribbonpanel__getcount)|Returns the number of elements in the ribbon panel.|  
|[CMFCRibbonPanel::GetData](#cmfcribbonpanel__getdata)|Returns the user-defined data associated with the panel.|  
|[CMFCRibbonPanel::GetDefaultButton](#cmfcribbonpanel__getdefaultbutton)||  
|[CMFCRibbonPanel::GetDroppedDown](#cmfcribbonpanel__getdroppeddown)||  
|[CMFCRibbonPanel::GetElement](#cmfcribbonpanel__getelement)|Returns the ribbon element located at a specified index.|  
|[CMFCRibbonPanel::GetElements](#cmfcribbonpanel__getelements)|Retrieves all elements that are contained in the ribbon panel.|  
|[CMFCRibbonPanel::GetElementsByID](#cmfcribbonpanel__getelementsbyid)||  
|[CMFCRibbonPanel::GetFocused](#cmfcribbonpanel__getfocused)|Returns a focused element.|  
|[CMFCRibbonPanel::GetGalleryRect](#cmfcribbonpanel__getgalleryrect)|Returns a bounding rectangle of Gallery element.|  
|[CMFCRibbonPanel::GetHighlighted](#cmfcribbonpanel__gethighlighted)||  
|[CMFCRibbonPanel::GetIndex](#cmfcribbonpanel__getindex)||  
|[CMFCRibbonPanel::GetItemIDsList](#cmfcribbonpanel__getitemidslist)||  
|[CMFCRibbonPanel::GetName](#cmfcribbonpanel__getname)||  
|[CMFCRibbonPanel::GetParentButton](#cmfcribbonpanel__getparentbutton)||  
|[CMFCRibbonPanel::GetParentCategory](#cmfcribbonpanel__getparentcategory)|Returns the parent category of the ribbon panel.|  
|[CMFCRibbonPanel::GetParentMenuBar](#cmfcribbonpanel__getparentmenubar)||  
|[CMFCRibbonPanel::GetPreferedMenuLocation](#cmfcribbonpanel__getpreferedmenulocation)||  
|[CMFCRibbonPanel::GetPressed](#cmfcribbonpanel__getpressed)||  
|[CMFCRibbonPanel::GetRect](#cmfcribbonpanel__getrect)||  
|[CMFCRibbonPanel::GetVisibleElements](#cmfcribbonpanel__getvisibleelements)|Obtains an array of visible elements.|  
|[CMFCRibbonPanel::HasElement](#cmfcribbonpanel__haselement)||  
|[CMFCRibbonPanel::HitTest](#cmfcribbonpanel__hittest)||  
|[CMFCRibbonPanel::HitTestEx](#cmfcribbonpanel__hittestex)||  
|[CMFCRibbonPanel::Insert](#cmfcribbonpanel__insert)|Inserts a ribbon element at the given position.|  
|[CMFCRibbonPanel::InsertSeparator](#cmfcribbonpanel__insertseparator)|Inserts a separator at the given position.|  
|[CMFCRibbonPanel::IsCenterColumnVert](#cmfcribbonpanel__iscentercolumnvert)|Specifies whether all panel elements should be centered (aligned) vertically, by column.|  
|[CMFCRibbonPanel::IsCollapsed](#cmfcribbonpanel__iscollapsed)||  
|[CMFCRibbonPanel::IsHighlighted](#cmfcribbonpanel__ishighlighted)||  
|[CMFCRibbonPanel::IsJustifyColumns](#cmfcribbonpanel__isjustifycolumns)|Specifies whether all panel columns have the same width.|  
|[CMFCRibbonPanel::IsMainPanel](#cmfcribbonpanel__ismainpanel)||  
|[CMFCRibbonPanel::IsMenuMode](#cmfcribbonpanel__ismenumode)||  
|[CMFCRibbonPanel::MakeGalleryItemVisible](#cmfcribbonpanel__makegalleryitemvisible)|Scrolls the gallery to make the specified Ribbon element visible.|  
|[CMFCRibbonPanel::OnKey](#cmfcribbonpanel__onkey)||  
|[CMFCRibbonPanel::RecalcWidths](#cmfcribbonpanel__recalcwidths)||  
|[CMFCRibbonPanel::Remove](#cmfcribbonpanel__remove)|Removes and optionally deletes an element located at the specified index.|  
|[CMFCRibbonPanel::RemoveAll](#cmfcribbonpanel__removeall)|Removes all elements from the ribbon panel.|  
|[CMFCRibbonPanel::Replace](#cmfcribbonpanel__replace)|Replaces one element with another based on their respective index values.|  
|[CMFCRibbonPanel::ReplaceByID](#cmfcribbonpanel__replacebyid)|Replaces one element with another based on a specified command ID.|  
|[CMFCRibbonPanel::SetCenterColumnVert](#cmfcribbonpanel__setcentercolumnvert)|Orders the panel to align elements vertically, by column.|  
|[CMFCRibbonPanel::SetData](#cmfcribbonpanel__setdata)|Associates user-defined data with the ribbon panel.|  
|[CMFCRibbonPanel::SetElementMenu](#cmfcribbonpanel__setelementmenu)|Assigns a popup menu to the element that has the given command ID.|  
|[CMFCRibbonPanel::SetElementRTC](#cmfcribbonpanel__setelementrtc)|Adds a ribbon element specified by the provided runtime class information to the ribbon panel.|  
|[CMFCRibbonPanel::SetElementRTCByID](#cmfcribbonpanel__setelementrtcbyid)|Adds a ribbon element specified by the provided runtime class information to the ribbon panel.|  
|[CMFCRibbonPanel::SetFocused](#cmfcribbonpanel__setfocused)|Sets focus to the specified Ribbon element.|  
|[CMFCRibbonPanel::SetJustifyColumns](#cmfcribbonpanel__setjustifycolumns)|Enables or disables column justification.|  
|[CMFCRibbonPanel::SetKeys](#cmfcribbonpanel__setkeys)|Sets the keyboard shortcut that displays the ribbon panel.|  
|[CMFCRibbonPanel::ShowPopup](#cmfcribbonpanel__showpopup)||  
  
## Remarks  
 Ribbon panels are logical groupings of related tasks that you create within ribbon categories. As the size of the ribbon changes, the panel layout automatically adjusts to display as many elements as possible.  
  
 You can get a ribbon panels that is contained in a ribbon category by calling the [CMFCRibbonCategory::GetPanel](../../mfc/reference/cmfcribboncategory-class.md#cmfcribboncategory__getpanel) method.  
  
## Example  
 The following example demonstrates how to configure a `CMFCRibbonPanel` object by using various methods in the `CMFCRibbonPanel` class. The example shows how to set the keyboard shortcut that displays the ribbon panel, align elements in the panel vertically by column, and enable column justification. This code snippet is part of the [MS Office 2007 Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_MSOffice2007Demo#10](../../mfc/reference/codesnippet/cpp/cmfcribbonpanel-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md)  
  
## Requirements  
 **Header:** afxRibbonPanel.h  
  
##  <a name="cmfcribbonpanel__add"></a>  CMFCRibbonPanel::Add  
 Appends the specified ribbon element to the array of ribbon elements that is contained in the ribbon panel.  
  
```  
 
virtual void Add(
CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in, out] `pElem`  
 Pointer to a ribbon element.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__addseparator"></a>  CMFCRibbonPanel::AddSeparator  
 Adds a separator to the ribbon panel.  
  
```  
virtual void AddSeparator();
```  
  
### Remarks  
 Call this method to add a separator to the ribbon panel. The separator will be added next to the ribbon element that was added by the previous call to [CMFCRibbonPanel::Add](#cmfcribbonpanel__add). To insert a separator at a given position, call [CMFCRibbonPanel::InsertSeparator](#cmfcribbonpanel__insertseparator).  
  
##  <a name="cmfcribbonpanel__addtoolbar"></a>  CMFCRibbonPanel::AddToolBar  
 Adds a toolbar to the ribbon panel.  
  
```  
 
CMFCRibbonButtonsGroup* AddToolBar(
UINT uiToolbarResID,  
UINT uiColdResID = 0,  
UINT uiHotResID = 0,  
UINT uiDisabledResID = 0);
```  
  
### Parameters  
 [in] `uiToolbarResID`  
 Specifies the resource ID of the toolbar to add.  
  
 [in] `uiColdResID`  
 Specifies the resource ID of the toolbar's cold images.  
  
 [in] `uiHotResID`  
 Specifies the resource ID of the toolbar's hot images.  
  
 [in] `uiDisabledResID`  
 Specifies the resource ID of the toolbar's disabled images.  
  
### Return Value  
 Call this method to add a toolbar to the ribbon panel. The toolbar will be added next to the ribbon element added by the previous call to [CMFCRibbonPanel::Add](#cmfcribbonpanel__add).  
  
### Remarks  
 For more information about toolbars, hot images, cold images, and disabled images, see [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md).  
  
##  <a name="cmfcribbonpanel__cmfcribbonpanel"></a>  CMFCRibbonPanel::CMFCRibbonPanel  
 Constructs and initializes a [CMFCRibbonPanel](../../mfc/reference/cmfcribbonpanel-class.md) object.  
  
```  
 
CMFCRibbonPanel(
LPCTSTR lpszName = NULL,  
HICON hIcon = NULL);

 
CMFCRibbonPanel(
CMFCRibbonGallery* pPaletteButton);
```  
  
### Parameters  
 [in] `lpszName`  
 The name of the ribbon panel.  
  
 [in] `hIcon`  
 Handle to the icon of the default button for the ribbon panel.  
  
 [in] `pPaletteButton`  
 Pointer to a ribbon gallery for the ribbon panel.  
  
##  <a name="cmfcribbonpanel__findbydata"></a>  CMFCRibbonPanel::FindByData  
 Retrieves the ribbon element that is associated with the specified data.  
  
```  
 
CMFCRibbonBaseElement* FindByData(
DWORD_PTR dwData) const;

 
```  
  
### Parameters  
 [in] `dwData`  
 The data associated with a ribbon element.  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__findbyid"></a>  CMFCRibbonPanel::FindByID  
 Retrieves the ribbon element that is identified by the specified command ID.  
  
```  
 
CMFCRibbonBaseElement* FindByID(
UINT uiCmdID) const;

 
```  
  
### Parameters  
 [in] `uiCmdID`  
 The command ID of a ribbon element.  
  
### Return Value  
 The ribbon element that is identified by the specified command ID; otherwise `NULL` if no ribbon element is identified with the specified command ID.  
  
##  <a name="cmfcribbonpanel__getcaptionheight"></a>  CMFCRibbonPanel::GetCaptionHeight  
 Retrieves the height of a caption for the ribbon panel.  
  
```  
int GetCaptionHeight() const;

 
```  
  
### Return Value  
 The height, in pixels, of a caption for the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getcount"></a>  CMFCRibbonPanel::GetCount  
 Retrieves the number of ribbon elements that are contained in the ribbon panel.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of ribbon elements that are contained in the ribbon panel.  
  
##  <a name="cmfcribbonpanel__getdata"></a>  CMFCRibbonPanel::GetData  
 Returns the user-defined data associated with the panel.  
  
```  
DWORD_PTR GetData() const;

 
```  
  
### Return Value  
 The user-defined data associated with the panel.  
  
##  <a name="cmfcribbonpanel__getdefaultbutton"></a>  CMFCRibbonPanel::GetDefaultButton  
 Retrieves the default button for the ribbon panel.  
  
```  
CMFCRibbonButton& GetDefaultButton();
```  
  
### Return Value  
 The default button for the ribbon panel.  
  
### Remarks  
 The default button is displayed when a ribbon panel has insufficient space to display its ribbon elements.  
  
##  <a name="cmfcribbonpanel__getdroppeddown"></a>  CMFCRibbonPanel::GetDroppedDown  
 Retrieves a pointer to a ribbon element if its pop-up menu is dropped down.  
  
```  
CMFCRibbonBaseElement* GetDroppedDown() const;

 
```  
  
### Return Value  
 Pointer to the ribbon element that has its pop-up menu dropped down; otherwise `NULL` if no ribbon element has its pop-up menu dropped down.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon panel are tested.  
  
##  <a name="cmfcribbonpanel__getelement"></a>  CMFCRibbonPanel::GetElement  
 Returns the ribbon element located at a specified index.  
  
```  
 
CMFCRibbonBaseElement* GetElement(
int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the element to retrieve.  
  
### Return Value  
 A valid pointer to the base ribbon element located at position `nIndex` in the ribbon panel, or `NULL` if there is no element at the specified index.  
  
##  <a name="cmfcribbonpanel__getelements"></a>  CMFCRibbonPanel::GetElements  
 Retrieves all ribbon elements that are contained in the ribbon panel.  
  
```  
 
void GetElements(
CArray<CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 [out] `arElements`  
 An array to fill with all the ribbon elements that are contained in the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getelementsbyid"></a>  CMFCRibbonPanel::GetElementsByID  
 Adds ribbon elements that have the specified command ID to the specified array.  
  
```  
 
void GetElementsByID(
UINT uiCmdID,  
CArray<CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Command ID for a ribbon element.  
  
 [in] `arElements`  
 Array of ribbon elements.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon panel are tested.  
  
##  <a name="cmfcribbonpanel__gethighlighted"></a>  CMFCRibbonPanel::GetHighlighted  
 Retrieves the ribbon element that is highlighted on the ribbon panel.  
  
```  
CMFCRibbonBaseElement* GetHighlighted() const;

 
```  
  
### Return Value  
 Pointer to the ribbon element that is highlighted on the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getindex"></a>  CMFCRibbonPanel::GetIndex  
 Retrieves the zero-based index of the specified ribbon element from the array of ribbon elements that are contained in the ribbon panel.  
  
```  
 
virtual int GetIndex(
CMFCRibbonBaseElement* pElem) const;

 
```  
  
### Parameters  
 [in] `pElem`  
 Pointer to a ribbon element.  
  
### Return Value  
 Zero-based index of the specified ribbon element if the method was successful; otherwise -1.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getitemidslist"></a>  CMFCRibbonPanel::GetItemIDsList  
 Retrieves the command IDs for all ribbon elements in the ribbon panel.  
  
```  
 
void GetItemIDsList(
CList<UINT, UINT>& lstItems) const;

 
```  
  
### Parameters  
 [out] `lstItems`  
 The list of command IDs for ribbon elements that are contained in the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getname"></a>  CMFCRibbonPanel::GetName  
 Retrieves the name of the ribbon panel.  
  
```  
LPCTSTR GetName() const;

 
```  
  
### Return Value  
 The name of the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getparentbutton"></a>  CMFCRibbonPanel::GetParentButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonBaseElement* GetParentButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getparentcategory"></a>  CMFCRibbonPanel::GetParentCategory  
 Returns the parent category of the ribbon panel.  
  
```  
CMFCRibbonCategory* GetParentCategory() const;

 
```  
  
### Return Value  
 A pointer to the ribbon category that contains this ribbon panel.  
  
##  <a name="cmfcribbonpanel__getparentmenubar"></a>  CMFCRibbonPanel::GetParentMenuBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonPanelMenuBar* GetParentMenuBar() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getpreferedmenulocation"></a>  CMFCRibbonPanel::GetPreferedMenuLocation  
 Retrieves the preferred display rectangle for the pop-up menu of the ribbon panel.  
  
```  
 
virtual BOOL GetPreferedMenuLocation(
CRect& rect);
```  
  
### Parameters  
 [out] `rect`  
 This parameter is not used.  
  
### Return Value  
 Always returns `FALSE`.  
  
### Remarks  
 This method always returns `FALSE`. Override this method to retrieve the preferred display rectangle for the pop-up menu of the ribbon panel.  
  
##  <a name="cmfcribbonpanel__getpressed"></a>  CMFCRibbonPanel::GetPressed  
 Retrieves a pointer to a ribbon element on the ribbon panel if the user currently presses it.  
  
```  
CMFCRibbonBaseElement* GetPressed() const;

 
```  
  
### Return Value  
 A pointer to a ribbon element if the user currently presses it; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getrect"></a>  CMFCRibbonPanel::GetRect  
 Retrieves the display rectangle for the ribbon panel.  
  
```  
const CRect& GetRect() const;

 
```  
  
### Return Value  
 The display rectangle for the ribbon panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__haselement"></a>  CMFCRibbonPanel::HasElement  
 Indicates whether the ribbon panel contains the specified ribbon element.  
  
```  
 
BOOL HasElement(
const CMFCRibbonBaseElement* pElem) const;

 
```  
  
### Parameters  
 [in] `pElem`  
 Pointer to a ribbon element.  
  
### Return Value  
 `TRUE` if the ribbon panel contains the specified ribbon element; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__highlight"></a>  CMFCRibbonPanel::Highlight  
 Sets the highlight color for the selected ribbon panel and for the ribbon element specified by the point.  
  
```  
 
virtual void Highlight(
BOOL bHighlight,  
CPoint point);
```  
  
### Parameters  
 [in] `bHighlight`  
 `TRUE` to highlight the ribbon panel; `FALSE` to unhighlight the ribbon panel.  
  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__hittest"></a>  CMFCRibbonPanel::HitTest  
 Retrieves a ribbon element if the specified point is located in it.  
  
```  
 
virtual CMFCRibbonBaseElement* HitTest(
CPoint point,  
BOOL bCheckPanelCaption = FALSE);
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
 [in] `bCheckPanelCaption`  
 `TRUE` to test the ribbon panel caption; otherwise `FALSE`.  
  
### Return Value  
 Pointer to a ribbon element if the specified point is located in it; otherwise `NULL`.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon panel are tested.  
  
##  <a name="cmfcribbonpanel__hittestex"></a>  CMFCRibbonPanel::HitTestEx  
 Retrieves the zero-based index of the ribbon element that has the specified point located in it.  
  
```  
 
virtual int HitTestEx(
CPoint point) const;

 
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Return Value  
 The zero-based index of the ribbon element that has the specified point located in it; otherwise -1.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon panel are tested.  
  
##  <a name="cmfcribbonpanel__insert"></a>  CMFCRibbonPanel::Insert  
 Inserts the specified ribbon element at the specified position in the array of ribbon elements that is contained in the ribbon panel.  
  
```  
 
virtual BOOL Insert(
CMFCRibbonBaseElement* pElem,  
int nIndex);
```  
  
### Parameters  
 [in, out] `pElem`  
 Pointer to a ribbon element.  
  
 [in] `nIndex`  
 Zero-based value, ranging from -1 to the number of ribbon elements that are contained in the array.  
  
### Return Value  
 `TRUE` if the ribbon element was inserted successfully; otherwise `FALSE`.  
  
### Remarks  
 If the value of `nIndex` is -1, or if `nIndex` equals the number of ribbon elements in the array, the specified ribbon element is added to the end of the array. If the value of `nIndex` is out of range, the method will fail.  
  
##  <a name="cmfcribbonpanel__insertseparator"></a>  CMFCRibbonPanel::InsertSeparator  
 Inserts a separator at the given position.  
  
```  
 
virtual BOOL InsertSeparator(
int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index where the separator is inserted.  
  
### Return Value  
 `TRUE` if the separator has been inserted successfully; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to insert a separator at the position specified by `nIndex`. To insert a separator next to the most recently added ribbon element, call [CMFCRibbonPanel::AddSeparator](#cmfcribbonpanel__addseparator).  
  
##  <a name="cmfcribbonpanel__iscentercolumnvert"></a>  CMFCRibbonPanel::IsCenterColumnVert  
 Indicates whether the vertical positions of ribbon elements are centered within their display rectangle.  
  
```  
BOOL IsCenterColumnVert() const;

 
```  
  
### Return Value  
 `TRUE` if the vertical positions of ribbon elements are centered within their display rectangle; otherwise `FALSE`.  
  
##  <a name="cmfcribbonpanel__iscollapsed"></a>  CMFCRibbonPanel::IsCollapsed  
 Indicates whether the display size of the ribbon panel is minimized in the horizontal direction.  
  
```  
BOOL IsCollapsed() const;

 
```  
  
### Return Value  
 `TRUE` if the display size of the ribbon panel is minimized in the horizontal direction; otherwise `FALSE`.  
  
### Remarks  
 When a ribbon panel is collapsed, it only displays its default button, its name, and a drop-down arrow.  
  
##  <a name="cmfcribbonpanel__ishighlighted"></a>  CMFCRibbonPanel::IsHighlighted  
 Indicates whether the display of the ribbon panel is highlighted.  
  
```  
BOOL IsHighlighted() const;

 
```  
  
### Return Value  
 `TRUE` if the display of the ribbon panel is highlighted; otherwise `FALSE`.  
  
### Remarks  
 The display of a ribbon panel is highlighted when the pointer is over it.  
  
##  <a name="cmfcribbonpanel__isjustifycolumns"></a>  CMFCRibbonPanel::IsJustifyColumns  
 Indicates whether the display dimensions of ribbon elements that are in the same column in the ribbon panel are set to the same width.  
  
```  
BOOL IsJustifyColumns() const;

 
```  
  
### Return Value  
 `TRUE` if the display dimensions of ribbon elements that are in the same column in the ribbon panel are set to the same width; otherwise `FALSE`.  
  
##  <a name="cmfcribbonpanel__ismainpanel"></a>  CMFCRibbonPanel::IsMainPanel  
 Indicates whether the ribbon panel is the main ribbon panel.  
  
```  
virtual BOOL IsMainPanel() const;

 
```  
  
### Return Value  
 Always returns `FALSE`.  
  
### Remarks  
 This method always returns `FALSE`. Override this method to indicate whether the ribbon panel is the main ribbon panel.  
  
 The main ribbon panel is displayed when the user selects the application button.  
  
##  <a name="cmfcribbonpanel__ismenumode"></a>  CMFCRibbonPanel::IsMenuMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsMenuMode() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__onkey"></a>  CMFCRibbonPanel::OnKey  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
 
virtual BOOL OnKey(
UINT nChar);
```  
  
### Parameters  
 [in] `nChar`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__recalcwidths"></a>  CMFCRibbonPanel::RecalcWidths  
 Recalculates the width of each display layout configuration for the ribbon panel.  
  
```  
 
virtual void RecalcWidths(
CDC* pDC,  
int nHeight);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the ribbon panel.  
  
 [in] `nHeight`  
 The height of the ribbon panel.  
  
### Remarks  
 A ribbon panel changes its layout configuration as the available width changes.  
  
##  <a name="cmfcribbonpanel__remove"></a>  CMFCRibbonPanel::Remove  
 Removes and optionally deletes an element located at the specified index.  
  
```  
 
BOOL Remove(
int nIndex,  
BOOL bDelete = TRUE);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the element that is removed from the ribbon panel.  
  
 [in] `bDelete`  
 `TRUE` to delete the element being removed; otherwise, `FALSE`.  
  
### Return Value  
 `TRUE` if the element has been removed and deleted (if `bDelete` is `TRUE`); `FALSE` if the element was not removed or if there is no ribbon element located at `nIndex`.  
  
### Remarks  
 Call this method to remove an element from the ribbon panel.  
  
##  <a name="cmfcribbonpanel__removeall"></a>  CMFCRibbonPanel::RemoveAll  
 Deletes all ribbon elements from the ribbon panel.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 All ribbon elements are deleted from the ribbon panel and destroyed.  
  
##  <a name="cmfcribbonpanel__replace"></a>  CMFCRibbonPanel::Replace  
 Replaces one element with another based on their index value.  
  
```  
 
BOOL Replace(
int nIndex,  
CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the element to replace.  
  
 [in] [out] `pElem`  
 A valid pointer to the element that replaces the original element.  
  
### Return Value  
 `TRUE` if the original ribbon element has been replaced successfully by the new ribbon element; `FALSE` if the ribbon element was not replaced or if there is no element at the specified index.  
  
### Remarks  
 To replace a ribbon element by command ID, call [CMFCRibbonPanel::ReplaceByID](#cmfcribbonpanel__replacebyid).  
  
##  <a name="cmfcribbonpanel__replacebyid"></a>  CMFCRibbonPanel::ReplaceByID  
 Replaces one element with another based on a specified command ID.  
  
```  
 
BOOL ReplaceByID(
UINT uiCmdID,  
CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Specifies the command ID of the element to replace.  
  
 [in] [out] `pElem`  
 A valid pointer to the element that will replace the original element.  
  
### Return Value  
 `TRUE` if the original ribbon element has been replaced successfully by the new ribbon element; `FALSE` if the ribbon element was not replaced or if no element with the specified command ID actually exists.  
  
### Remarks  
 To replace a ribbon element based on position, call [CMFCRibbonPanel::Replace](#cmfcribbonpanel__replace).  
  
##  <a name="cmfcribbonpanel__setcentercolumnvert"></a>  CMFCRibbonPanel::SetCenterColumnVert  
 Enables or disables the centering of the vertical positions of ribbon elements within their display rectangle.  
  
```  
 
void SetCenterColumnVert(
BOOL bSet = TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to center the vertical positions of ribbon elements within their display rectangle; `FALSE` to disable this feature.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__setdata"></a>  CMFCRibbonPanel::SetData  
 Associates user-defined data with the ribbon panel.  
  
```  
 
void SetData(
DWORD_PTR dwData);
```  
  
### Parameters  
 [in] `dwData`  
 Specifies the user-defined data to set.  
  
### Remarks  
 Call this method to associate user-defined data with the ribbon panel.  
  
##  <a name="cmfcribbonpanel__setelementmenu"></a>  CMFCRibbonPanel::SetElementMenu  
 Assigns a popup menu to the element that has the given command ID.  
  
```  
 
BOOL SetElementMenu(
UINT uiCmdID,  
HMENU hMenu,  
BOOL bIsDefautCommand = FALSE,  
BOOL bRightAlign = FALSE);

 
BOOL SetElementMenu(
UINT uiCmdID,  
UINT uiMenuResID,  
BOOL bIsDefautCommand = FALSE,  
BOOL bRightAlign = FALSE);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Specifies the command ID of the ribbon element where the menu is added.  
  
 [in] `hMenu`  
 Specifies the handle to the Windows menu to add to the ribbon panel.  
  
 [in] `bIsDefautCommand`  
 `TRUE` to specify that the command associated with the ribbon element should be executed if the ribbon element is clicked. In this case, the menu is only opened when the user clicks the arrow next to the ribbon element. `FALSE` to specify that the command associated with the ribbon element should not be executed if the ribbon element is clicked. In this case, the popup menu appears regardless of where the user clicks on the element.  
  
 [in] `bRightAlign`  
 `TRUE` to specify that the popup menu is right-aligned; otherwise, `FALSE`.  
  
 [in] `uiMenuResID`  
 Specifies the resource ID of the menu to add to the ribbon panel.  
  
### Return Value  
 `TRUE` if the menu has been assigned to the ribbon element; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to assign a popup menu to the ribbon element that has the given command ID.  
  
##  <a name="cmfcribbonpanel__setelementrtc"></a>  CMFCRibbonPanel::SetElementRTC  
 Adds the ribbon element that is specified by the provided runtime class information to the ribbon panel.  
  
```  
 
CMFCRibbonBaseElement* SetElementRTC(
int nIndex,  
CRuntimeClass* pRTC);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the ribbon element to add.  
  
 [in] [out] `pRTC`  
 A pointer to the runtime class information for the ribbon element that is added to the ribbon panel.  
  
### Return Value  
 The ribbon element that was created by using the specified runtime class information.  
  
### Remarks  
 If you want to add a custom element (for example, a color button) to the ribbon panel, you must specify the custom element's runtime class information. The ribbon stores this information, creates the custom element, and replaces an existing element that is located (identified by) the specified command ID. The ribbon then returns a pointer to the newly created element.  
  
##  <a name="cmfcribbonpanel__setelementrtcbyid"></a>  CMFCRibbonPanel::SetElementRTCByID  
 Adds a ribbon element that is specified by the provided runtime class information to the ribbon panel.  
  
```  
 
CMFCRibbonBaseElement* SetElementRTCByID(
UINT uiCmdID,  
CRuntimeClass* pRTC);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Specifies the command ID of the ribbon element to add.  
  
 [in] [out] `pRTC`  
 A pointer to the runtime class information associated with the ribbon element that is added to the ribbon panel.  
  
### Return Value  
 The ribbon element that was created by using the specified runtime class information.  
  
### Remarks  
 If you want to add a custom element (for example, a color button) to the ribbon panel, you must specify the custom element's runtime class information. The ribbon stores this information, creates the custom element, and replaces an existing element located by the specified command ID. It then returns a pointer to the newly created element.  
  
### Example  
 The following example shows how to use the `SetElementRTCByID` method:  
  
```  
 
// Load and add toolbar with standard buttons. This toolbar  
// should display a custom color button with id ID_CHAR_COLOR:  
 
pPanel->AddToolBar(IDR_MAINFRAME,
    IDB_MAINFRAME256);

CMFCRibbonColorButton* pColorButton = 
(CMFCRibbonColorButton*)pPanel->SetElementRTCByID(
ID_CHAR_COLOR,
    RUNTIME_CLASS (CMFCRibbonColorButton));

 
// SetElementRTCByID sets runtime class and returns a pointer  
// to the newly created custom button,
    which can be set up immediately:  
pColorButton->EnableAutomaticButton(_T("Automatic"),
    RGB (0,
    0,
    0));

 
```  
  
##  <a name="cmfcribbonpanel__setjustifycolumns"></a>  CMFCRibbonPanel::SetJustifyColumns  
 Enables or disables the adjustment of the width of ribbon elements in the same column.  
  
```  
 
void SetJustifyColumns(
BOOL bSet = TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to adjust the width of ribbon elements in the same column to the width of the largest ribbon element in the column; `FALSE` to disable this width adjustment.  
  
### Remarks  
 When this feature is enabled in a ribbon panel, the widths of ribbon elements in the same column are adjusted to the width of the largest ribbon element in the same column.  
  
##  <a name="cmfcribbonpanel__setkeys"></a>  CMFCRibbonPanel::SetKeys  
 Sets the keytip for the default button of the ribbon panel.  
  
```  
 
void SetKeys(
LPCTSTR lpszKeys);
```  
  
### Parameters  
 [in] `lpszKeys`  
 The keytip for the default button of the ribbon panel.  
  
### Remarks  
 The default button is displayed when a ribbon panel has insufficient space to display its ribbon elements.  
  
##  <a name="cmfcribbonpanel__showpopup"></a>  CMFCRibbonPanel::ShowPopup  
 Creates and displays a pop-up menu for the ribbon panel.  
  
```  
 
CMFCRibbonPanelMenu* ShowPopup(
CMFCRibbonDefaultPanelButton* pButton = NULL);
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to the default button for the ribbon panel.  
  
### Return Value  
 Pointer to the pop-up menu for the ribbon panel if the method was successful; otherwise `NULL`.  
  
### Remarks  
 The pop-up menu for the ribbon panel is only available when the display of the ribbon panel is collapsed.  
  
##  <a name="cmfcribbonpanel__setfocused"></a>  CMFCRibbonPanel::SetFocused  
 Sets focus to the specified Ribbon element.  
  
```  
 
void SetFocused(
CMFCRibbonBaseElement* pNewFocus);
```  
  
### Parameters  
 `pNewFocus`  
 A pointer to a Ribbon element that receives focus.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__makegalleryitemvisible"></a>  CMFCRibbonPanel::MakeGalleryItemVisible  
 Scrolls the gallery to make the specified Ribbon element visible.  
  
```  
 
void MakeGalleryItemVisible(
CMFCRibbonBaseElement* pItem);
```  
  
### Parameters  
 `pItem`  
 A pointer to a Ribbon element to show.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__iswindows7look"></a>  CMFCRibbonPanel::IsWindows7Look  
 Indicates whether the parent ribbon has Windows 7 look (small rectangular application button).  
  
```  
BOOL IsWindows7Look() const;

 
```  
  
### Return Value  
 `TRUE` if the parent ribbon has Windows 7 look; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getvisibleelements"></a>  CMFCRibbonPanel::GetVisibleElements  
 Retrieves an array of visible elements.  
  
```  
 
void GetVisibleElements(
CArray<CMFCRibbonBaseElement*,  
CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 `arElements`  
 When the function returns, this parameter contains an array of visible elements.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getgalleryrect"></a>  CMFCRibbonPanel::GetGalleryRect  
 Returns a bounding rectangle of a Gallery element.  
  
```  
CRect GetGalleryRect();
```  
  
### Return Value  
 Size and position of the Gallery element within this panel.  
  
### Remarks  
  
##  <a name="cmfcribbonpanel__getfocused"></a>  CMFCRibbonPanel::GetFocused  
 Returns a focused element.  
  
```  
CMFCRibbonBaseElement* GetFocused() const;

 
```  
  
### Return Value  
 A pointer to a focused element or `NULL`.  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md)   
 [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md)
