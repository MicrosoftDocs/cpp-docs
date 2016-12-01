---
title: "CMFCRibbonCategory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonCategory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonCategory class"
ms.assetid: 99ba25b6-d060-4fdd-bfab-3c46c22981bb
caps.latest.revision: 38
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
# CMFCRibbonCategory Class
The `CMFCRibbonCategory` class implements a ribbon tab that contains a group of [ribbon panels](../../mfc/reference/cmfcribbonpanel-class.md).  
  
## Syntax  
  
```  
class CMFCRibbonCategory : public CObject  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCategory::CMFCRibbonCategory](#cmfcribboncategory__cmfcribboncategory)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCategory::AddHidden](#cmfcribboncategory__addhidden)|Adds a hidden element to the ribbon category.|  
|[CMFCRibbonCategory::AddPanel](#cmfcribboncategory__addpanel)|Adds a new panel to the ribbon category.|  
|[CMFCRibbonCategory::CopyFrom](#cmfcribboncategory__copyfrom)||  
|[CMFCRibbonCategory::FindByData](#cmfcribboncategory__findbydata)||  
|[CMFCRibbonCategory::FindByID](#cmfcribboncategory__findbyid)||  
|[CMFCRibbonCategory::FindPanelWithElem](#cmfcribboncategory__findpanelwithelem)||  
|[CMFCRibbonCategory::GetContextID](#cmfcribboncategory__getcontextid)|Returns the context ID of the ribbon category.|  
|[CMFCRibbonCategory::GetData](#cmfcribboncategory__getdata)|Returns the user-defined data that is associated with the ribbon category.|  
|[CMFCRibbonCategory::GetDroppedDown](#cmfcribboncategory__getdroppeddown)||  
|[CMFCRibbonCategory::GetElements](#cmfcribboncategory__getelements)||  
|[CMFCRibbonCategory::GetElementsByID](#cmfcribboncategory__getelementsbyid)||  
|[CMFCRibbonCategory::GetFirstVisibleElement](#cmfcribboncategory__getfirstvisibleelement)|Obtain a first visible element that belong to the ribbon category.|  
|[CMFCRibbonCategory::GetFocused](#cmfcribboncategory__getfocused)|Returns a focused element.|  
|[CMFCRibbonCategory::GetHighlighted](#cmfcribboncategory__gethighlighted)|Returns a highlighted element.|  
|[CMFCRibbonCategory::GetImageCount](#cmfcribboncategory__getimagecount)||  
|[CMFCRibbonCategory::GetImageSize](#cmfcribboncategory__getimagesize)||  
|[CMFCRibbonCategory::GetItemIDsList](#cmfcribboncategory__getitemidslist)||  
|[CMFCRibbonCategory::GetLastVisibleElement](#cmfcribboncategory__getlastvisibleelement)|Obtain a last visible element that belong to the ribbon category|  
|[CMFCRibbonCategory::GetLargeImages](#cmfcribboncategory__getlargeimages)|Returns a reference to the list of large images that the ribbon category uses.|  
|[CMFCRibbonCategory::GetMaxHeight](#cmfcribboncategory__getmaxheight)||  
|[CMFCRibbonCategory::GetName](#cmfcribboncategory__getname)||  
|[CMFCRibbonCategory::GetPanel](#cmfcribboncategory__getpanel)|Returns a pointer to the ribbon panel that is located at the specified index.|  
|[CMFCRibbonCategory::GetPanelCount](#cmfcribboncategory__getpanelcount)|Returns the number of ribbon panels in the ribbon category.|  
|[CMFCRibbonCategory::GetPanelFromPoint](#cmfcribboncategory__getpanelfrompoint)||  
|[CMFCRibbonCategory::GetPanelIndex](#cmfcribboncategory__getpanelindex)|Returns the index of the specified ribbon panel.|  
|[CMFCRibbonCategory::GetParentButton](#cmfcribboncategory__getparentbutton)||  
|[CMFCRibbonCategory::GetParentMenuBar](#cmfcribboncategory__getparentmenubar)||  
|[CMFCRibbonCategory::GetParentRibbonBar](#cmfcribboncategory__getparentribbonbar)||  
|[CMFCRibbonCategory::GetRect](#cmfcribboncategory__getrect)||  
|[CMFCRibbonCategory::GetSmallImages](#cmfcribboncategory__getsmallimages)|Returns a reference to the list of small images that the category uses.|  
|[CMFCRibbonCategory::GetTabColor](#cmfcribboncategory__gettabcolor)|Returns the current color of the ribbon category tab.|  
|[CMFCRibbonCategory::GetTabRect](#cmfcribboncategory__gettabrect)||  
|[CMFCRibbonCategory::GetTextTopLine](#cmfcribboncategory__gettexttopline)||  
|[CMFCRibbonCategory::GetVisibleElements](#cmfcribboncategory__getvisibleelements)|Obtain all visible elements that belong to the ribbon category.|  
|[CMFCRibbonCategory::HighlightPanel](#cmfcribboncategory__highlightpanel)||  
|[CMFCRibbonCategory::HitTest](#cmfcribboncategory__hittest)||  
|[CMFCRibbonCategory::HitTestEx](#cmfcribboncategory__hittestex)||  
|[CMFCRibbonCategory::HitTestScrollButtons](#cmfcribboncategory__hittestscrollbuttons)||  
|[CMFCRibbonCategory::IsActive](#cmfcribboncategory__isactive)||  
|[CMFCRibbonCategory::IsVisible](#cmfcribboncategory__isvisible)|Determines whether the ribbon category is visible.|  
|[CMFCRibbonCategory::IsWindows7Look](#cmfcribboncategory__iswindows7look)|Indicates whether the parent ribbon has Windows 7-style look (small rectangular application button)|  
|[CMFCRibbonCategory::NotifyControlCommand](#cmfcribboncategory__notifycontrolcommand)||  
|[CMFCRibbonCategory::OnCancelMode](#cmfcribboncategory__oncancelmode)||  
|[CMFCRibbonCategory::OnDraw](#cmfcribboncategory__ondraw)||  
|[CMFCRibbonCategory::OnDrawImage](#cmfcribboncategory__ondrawimage)||  
|[CMFCRibbonCategory::OnDrawMenuBorder](#cmfcribboncategory__ondrawmenuborder)||  
|[CMFCRibbonCategory::OnKey](#cmfcribboncategory__onkey)|Called by the framework when a user presses a keyboard button.|  
|[CMFCRibbonCategory::OnLButtonDown](#cmfcribboncategory__onlbuttondown)||  
|[CMFCRibbonCategory::OnLButtonUp](#cmfcribboncategory__onlbuttonup)||  
|[CMFCRibbonCategory::OnMouseMove](#cmfcribboncategory__onmousemove)||  
|[CMFCRibbonCategory::OnRTLChanged](#cmfcribboncategory__onrtlchanged)||  
|[CMFCRibbonCategory::OnScrollHorz](#cmfcribboncategory__onscrollhorz)||  
|[CMFCRibbonCategory::OnUpdateCmdUI](#cmfcribboncategory__onupdatecmdui)||  
|[CMFCRibbonCategory::RecalcLayout](#cmfcribboncategory__recalclayout)||  
|[CMFCRibbonCategory::RemovePanel](#cmfcribboncategory__removepanel)||  
|[CMFCRibbonCategory::ReposPanels](#cmfcribboncategory__repospanels)||  
|[CMFCRibbonCategory::SetCollapseOrder](#cmfcribboncategory__setcollapseorder)|Defines the collapse order of the ribbon panels that are present in the ribbon category.|  
|[CMFCRibbonCategory::SetData](#cmfcribboncategory__setdata)|Stores the user defined data in the ribbon category.|  
|[CMFCRibbonCategory::SetKeys](#cmfcribboncategory__setkeys)|Assigns a keytip to the ribbon category.|  
|[CMFCRibbonCategory::SetName](#cmfcribboncategory__setname)||  
|[CMFCRibbonCategory::SetTabColor](#cmfcribboncategory__settabcolor)|Sets the color of the ribbon category.|  
  
## Remarks  
 Typically, you create a ribbon category indirectly by calling [CMFCRibbonBar::AddCategory](../../mfc/reference/cmfcribbonbar-class.md#cmfcribbonbar__addcategory), which returns a pointer to the newly created ribbon category. You add panels to the category by calling [CMFCRibbonCategory::AddPanel](#cmfcribboncategory__addpanel).  
  
 The `CMFCRibbonTab` class draws ribbon categories. It is derived from [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md).  
  
 This following example demonstrates how to create a ribbon category and add a panel to it.  
  
 `// Create a new ribbon category and get a pointer to it`  
  
 `CMFCRibbonCategory* pCategory = m_wndRibbonBar.AddCategory`  
  
 `(_T("&Write"),           // Category name`  
  
 `IDB_WRITE,              // Category small images (16 x 16)`  
  
 `IDB_WRITE_LARGE);   // Category large images (32 x 32)`  
  
 `// Add a panel to the new category`  
  
 `CMFCRibbonPanel* pPanel = pCategory->AddPanel (`  
  
 `_T("Clipboard"),                       // Panel name`  
  
 `m_PanelIcons.ExtractIcon (0));  // Panel icon`  
  
 The following diagram shows a figure of the Home category from the RibbonApp sample application.  
  
 ![CMFCRibbonCategory image](../../mfc/reference/media/cmfcribboncategory.png "cmfcribboncategory")  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md)  
  
## Requirements  
 **Header:** afxribboncategory.h  
  
##  <a name="cmfcribboncategory__addhidden"></a>  CMFCRibbonCategory::AddHidden  
 Adds the specified ribbon element to the array of ribbon elements that are displayed on the customization dialog box.  
  
```  
void AddHidden(CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in] `pElem`  
 Pointer to a ribbon element.  
  
### Remarks  
 Ribbon elements on the customization dialog box are the commands that you can add to the quick access toolbar.  
  
##  <a name="cmfcribboncategory__addpanel"></a>  CMFCRibbonCategory::AddPanel  
 Creates a ribbon panel for the ribbon category.  
  
```  
CMFCRibbonPanel* AddPanel(
    LPCTSTR lpszPanelName,  
    HICON hIcon = 0,  
    CRuntimeClass* pRTI = NULL);
```  
  
### Parameters  
 [in] `lpszPanelName`  
 Pointer to the name of the new ribbon panel.  
  
 [in] `hIcon`  
 Handle to the default icon for the new ribbon panel.  
  
 [in] `pRTI`  
 Pointer to runtime class information for a custom ribbon panel.  
  
### Return Value  
 Pointer to the new ribbon panel if the method was successful; otherwise `NULL` if the panel was not created.  
  
### Remarks  
 If you want to create a custom ribbon panel, you must specify its runtime class information in `pRTI`. The custom ribbon panel class must be derived from the `CMFCRibbonPanel` class.  
  
 The default icon for the ribbon panel is displayed when there is insufficient space to display the ribbon elements.  
  
### Example  
 The following example demonstrates how to use the `AddPanel` method in the `CMFCRibbonCategory` class.  
  
 [!code-cpp[NVC_MFC_RibbonApp#10](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_1.cpp)]  
  
##  <a name="cmfcribboncategory__cmfcribboncategory"></a>  CMFCRibbonCategory::CMFCRibbonCategory  
 Constructs and initializes a [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) object.  
  
```  
CMFCRibbonCategory(
    CMFCRibbonBar* pParenrRibbonBar,  
    LPCTSTR lpszName,  
    UINT uiSmallImagesResID,  
    UINT uiLargeImagesResID,  
    CSize sizeSmallImage = CSize(16,
    16),  
    CSize sizeLargeImage = CSize(32,
    32));
```  
  
### Parameters  
 [in] `pParenrRibbonBar`  
 Pointer to the parent ribbon bar of the ribbon category.  
  
 [in] `lpszName`  
 Name of the ribbon category.  
  
 [in] `uiSmallImagesResID`  
 Resource ID of the image list for small images that are used by ribbon elements in the ribbon category.  
  
 [in] `uiLargeImagesResID`  
 Resource ID of the image list for large images that are used by ribbon elements in the ribbon category.  
  
 [in] `sizeSmallImage`  
 Default size of small images for ribbon elements in the ribbon category.  
  
 [in] `sizeLargeImage`  
 Default size of large images for ribbon elements in the ribbon category.  
  
##  <a name="cmfcribboncategory__copyfrom"></a>  CMFCRibbonCategory::CopyFrom  
 Copies the state of the specified [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) to the current [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) object.  
  
```  
virtual void CopyFrom(CMFCRibbonCategory& src);
```  
  
### Parameters  
 [in] `src`  
 The source [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) object.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__findbydata"></a>  CMFCRibbonCategory::FindByData  
 Retrieves the ribbon element associated with the specified data.  
  
```  
CMFCRibbonBaseElement* FindByData(
    DWORD_PTR dwData,  
    BOOL bVisibleOnly = TRUE) const;

 
```  
  
### Parameters  
 [in] `dwData`  
 The data associated with a ribbon element.  
  
 [in] `bVisibleOnly`  
 `TRUE` to include quick access ribbon elements in the search; `FALSE` to exclude quick access ribbon elements in the search.  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__findbyid"></a>  CMFCRibbonCategory::FindByID  
 Retrieves the ribbon element associated with the specified command ID.  
  
```  
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID,  
    BOOL bVisibleOnly = TRUE) const;

 
```  
  
### Parameters  
 [in] `uiCmdID`  
 Command ID associated with a ribbon element.  
  
 [in] `bVisibleOnly`  
 `TRUE` to include quick access ribbon elements in the search; `FALSE` to exclude quick access ribbon elements in the search.  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__findpanelwithelem"></a>  CMFCRibbonCategory::FindPanelWithElem  
 Retrieves the ribbon panel that contains the specified ribbon element.  
  
```  
CMFCRibbonPanel* FindPanelWithElem(const CMFCRibbonBaseElement* pElement);
```  
  
### Parameters  
 [in] `pElement`  
 Pointer to a ribbon element.  
  
### Return Value  
 Pointer to a ribbon panel if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getcontextid"></a>  CMFCRibbonCategory::GetContextID  
 Retrieves the context ID of the ribbon category.  
  
```  
UINT GetContextID() const;

 
```  
  
### Return Value  
 Context ID of the ribbon category.  
  
### Remarks  
 The context ID is 0 if the ribbon category is not a context ribbon category.  
  
##  <a name="cmfcribboncategory__getdata"></a>  CMFCRibbonCategory::GetData  
 Retrieves the user-defined data that is associated with the ribbon category.  
  
```  
DWORD_PTR GetData() const;

 
```  
  
### Return Value  
 The user-defined data that is associated with the ribbon category.  
  
##  <a name="cmfcribboncategory__getdroppeddown"></a>  CMFCRibbonCategory::GetDroppedDown  
 Retrieves a pointer to the ribbon element that currently has its pop-up menu displayed.  
  
```  
CMFCRibbonBaseElement* GetDroppedDown();
```  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getelements"></a>  CMFCRibbonCategory::GetElements  
 Retrieves all ribbon elements in the ribbon category.  
  
```  
void GetElements(
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 [in, out] `arElements`  
 Reference to a [CArray](../../mfc/reference/carray-class.md) of ribbon elements.  
  
### Remarks  
 Ribbon elements that are designed for use on the quick access toolbar are included in the array.  
  
##  <a name="cmfcribboncategory__getelementsbyid"></a>  CMFCRibbonCategory::GetElementsByID  
 Retrieves all ribbon elements that are associated with the specified command ID.  
  
```  
void GetElementsByID(
    UINT uiCmdID,  
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Command ID associated with a ribbon element.  
  
 [in, out] `arElements`  
 Reference to a [CArray](../../mfc/reference/carray-class.md) of ribbon elements.  
  
### Remarks  
 Ribbon elements that are designed for use on the quick access toolbar are included in the array.  
  
##  <a name="cmfcribboncategory__getfirstvisibleelement"></a>  CMFCRibbonCategory::GetFirstVisibleElement  
 Retrieves the first visible element that belongs to the ribbon category.  
  
```  
CMFCRibbonBaseElement* GetFirstVisibleElement() const;

 
```  
  
### Return Value  
 Pointer to the first visible element; may be `NULL` if category does not have any visible elements.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getfocused"></a>  CMFCRibbonCategory::GetFocused  
 Returns a focused element.  
  
```  
CMFCRibbonBaseElement* GetFocused();
```  
  
### Return Value  
 A pointer to a focused element or `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__gethighlighted"></a>  CMFCRibbonCategory::GetHighlighted  
 Returns a highlighted element.  
  
```  
CMFCRibbonBaseElement* GetHighlighted();
```  
  
### Return Value  
 A pointer to a highlighted element or `NULL` if no elements are highlighted.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getimagecount"></a>  CMFCRibbonCategory::GetImageCount  
 Retrieves the number of images in the specified image list that is contained in the ribbon category.  
  
```  
int GetImageCount(BOOL bIsLargeImage) const;

 
```  
  
### Parameters  
 [in] `bIsLargeImage`  
 `TRUE` for the number of images in the large image list; `FALSE` for the number of images in the small image list.  
  
### Return Value  
 The number of images in the specified image list.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getimagesize"></a>  CMFCRibbonCategory::GetImageSize  
 Retrieves the size of an image in the specified image list that is contained in the ribbon category.  
  
```  
CSize GetImageSize(BOOL bIsLargeImage) const;

 
```  
  
### Parameters  
 [in] `bIsLargeImage`  
 `TRUE` for the size of large images; `FALSE` for the size of small images.  
  
### Return Value  
 The size of an image in the specified image list.  
  
### Remarks  
 The size retrieved includes the global image scale factor.  
  
##  <a name="cmfcribboncategory__getitemidslist"></a>  CMFCRibbonCategory::GetItemIDsList  
 Retrieves the command IDs for the ribbon elements that are contained in the ribbon category.  
  
```  
void GetItemIDsList(
    CList<UINT, UINT>& lstItems,  
    BOOL bHiddenOnly = FALSE) const;

 
```  
  
### Parameters  
 [out] `lstItems`  
 The list of command IDs for the ribbon elements in the ribbon category.  
  
 [in] `bHiddenOnly`  
 `TRUE` to exclude ribbon elements displayed on the ribbon panels in the ribbon category; `FALSE` to include all ribbon elements in the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getlargeimages"></a>  CMFCRibbonCategory::GetLargeImages  
 Retrieves the list of large images that are contained in the ribbon category.  
  
```  
CMFCToolBarImages& GetLargeImages();
```  
  
### Return Value  
 The list of large images that are contained in the ribbon category.  
  
##  <a name="cmfcribboncategory__getlastvisibleelement"></a>  CMFCRibbonCategory::GetLastVisibleElement  
 Retrieves the last visible element that belongs to the ribbon category.  
  
```  
CMFCRibbonBaseElement* GetLastVisibleElement() const;

 
```  
  
### Return Value  
 Pointer to the last visible element; may be `NULL` if the category does not have any visible elements.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getmaxheight"></a>  CMFCRibbonCategory::GetMaxHeight  
 Retrieves the maximum height of the ribbon panels that are contained in the ribbon category.  
  
```  
int GetMaxHeight(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the ribbon panels.  
  
### Return Value  
 The maximum height of the ribbon panels that are contained in the ribbon category.  
  
### Remarks  
 The value retrieved includes the height of the top and bottom margins for the ribbon panels.  
  
##  <a name="cmfcribboncategory__getname"></a>  CMFCRibbonCategory::GetName  
 Retrieves the name of the ribbon category.  
  
```  
LPCTSTR GetName() const;

 
```  
  
### Return Value  
 The name of the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getpanel"></a>  CMFCRibbonCategory::GetPanel  
 Returns a pointer to the ribbon panel that is located at the specified index.  
  
```  
CMFCRibbonPanel* GetPanel(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of a ribbon panel.  
  
### Return Value  
 Pointer to the ribbon panel that is located at the specified index.  
  
### Remarks  
 An exception is thrown if `nIndex` is out of range.  
  
##  <a name="cmfcribboncategory__getpanelcount"></a>  CMFCRibbonCategory::GetPanelCount  
 Returns the number of ribbon panels in the ribbon category.  
  
```  
int GetPanelCount() const;

 
```  
  
### Return Value  
 The number of ribbon panels in the ribbon category.  
  
##  <a name="cmfcribboncategory__getpanelfrompoint"></a>  CMFCRibbonCategory::GetPanelFromPoint  
 Retrieves a pointer to a ribbon panel if the specified point is located in it.  
  
```  
CMFCRibbonPanel* GetPanelFromPoint(CPoint point) const;

 
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Return Value  
 Pointer to a ribbon panel if the method was successful; otherwise `NULL`.  
  
### Remarks  
 Only ribbon panels that are contained in the ribbon category are tested.  
  
##  <a name="cmfcribboncategory__getpanelindex"></a>  CMFCRibbonCategory::GetPanelIndex  
 Retrieves the zero-based index of the specified ribbon panel.  
  
```  
int GetPanelIndex(const CMFCRibbonPanel* pPanel) const;

 
```  
  
### Parameters  
 [in] `pPanel`  
 Pointer to a ribbon panel.  
  
### Return Value  
 Zero-based index of the specified ribbon panel if the method was successful; otherwise -1.  
  
### Remarks  
 Only ribbon panels that are contained in the ribbon category are searched.  
  
##  <a name="cmfcribboncategory__getparentbutton"></a>  CMFCRibbonCategory::GetParentButton  
 Retrieves the parent ribbon element of the ribbon category.  
  
```  
CMFCRibbonBaseElement* GetParentButton() const;

 
```  
  
### Return Value  
 Returns a pointer to the parent ribbon element, or `NULL` if there is no parent element.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getparentmenubar"></a>  CMFCRibbonCategory::GetParentMenuBar  
 Returns a pointer to the parent menu bar of the `CMFCRibbonCategory` object.  
  
```  
CMFCRibbonPanelMenuBar* GetParentMenuBar() const;

 
```  
  
### Return Value  
 Returns the contents of the `m_pParentMenuBar` protected member.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getparentribbonbar"></a>  CMFCRibbonCategory::GetParentRibbonBar  
 Retrieves the parent ribbon bar for the ribbon category.  
  
```  
CMFCRibbonBar* GetParentRibbonBar() const;

 
```  
  
### Return Value  
 Pointer to the parent ribbon bar for the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getrect"></a>  CMFCRibbonCategory::GetRect  
 Retrieves the display rectangle for the ribbon category.  
  
```  
CRect GetRect() const;

 
```  
  
### Return Value  
 The display rectangle for the ribbon category.  
  
### Remarks  
 The display rectangle for the ribbon category does not include the category tab.  
  
##  <a name="cmfcribboncategory__getsmallimages"></a>  CMFCRibbonCategory::GetSmallImages  
 Retrieves the list of small images that are contained in the ribbon category.  
  
```  
CMFCToolBarImages& GetSmallImages();
```  
  
### Return Value  
 The list of small images that are contained in the ribbon category.  
  
##  <a name="cmfcribboncategory__gettabcolor"></a>  CMFCRibbonCategory::GetTabColor  
 Returns the current color of the ribbon category tab.  
  
```  
AFX_RibbonCategoryColor GetTabColor() const;

 
```  
  
### Return Value  
 The current color of the ribbon category tab.  
  
### Remarks  
 The returned value can be one of the following enumerated values:  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
##  <a name="cmfcribboncategory__gettabrect"></a>  CMFCRibbonCategory::GetTabRect  
 Retrieves the display rectangle for the ribbon category tab.  
  
```  
CRect GetTabRect() const;

 
```  
  
### Return Value  
 The display rectangle for the ribbon category tab.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__gettexttopline"></a>  CMFCRibbonCategory::GetTextTopLine  
 Retrieves the vertical location of text on ribbon buttons in the ribbon category that display large images.  
  
```  
int GetTextTopLine() const;

 
```  
  
### Return Value  
 The vertical location of text, in pixels, on ribbon buttons that display large images.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__getvisibleelements"></a>  CMFCRibbonCategory::GetVisibleElements  
 Retrieves all visible elements that belong to the ribbon category.  
  
```  
void GetVisibleElements(
    CArray <CMFCRibbonBaseElement*,  
    CMFCRibbonBaseElement*>& arElements);
```  
  
### Parameters  
 `arElements`  
 Array of all visible elements.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__highlightpanel"></a>  CMFCRibbonCategory::HighlightPanel  
 Highlights the specified ribbon panel.  
  
```  
CMFCRibbonPanel* HighlightPanel(
    CMFCRibbonPanel* pHLPanel,  
    CPoint point);
```  
  
### Parameters  
 [in] `pHLPanel`  
 Pointer to the ribbon panel to highlight.  
  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Return Value  
 Pointer to the previously highlighted ribbon panel; otherwise `NULL` if no ribbon panel is highlighted when this method is invoked.  
  
### Remarks  
 For more information about highlighting a ribbon panel, see [CMFCRibbonPanel::Highlight](../../mfc/reference/cmfcribbonpanel-class.md#cmfcribbonpanel__highlight).  
  
##  <a name="cmfcribboncategory__hittest"></a>  CMFCRibbonCategory::HitTest  
 Retrieves a pointer to a ribbon element if the specified point is located in it.  
  
```  
CMFCRibbonBaseElement* HitTest(
    CPoint point,  
    BOOL bCheckPanelCaption = FALSE) const;

 
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.  
  
 [in] `bCheckPanelCaption`  
 `TRUE` to test the ribbon panel caption; `FALSE` to exclude the ribbon panel caption.  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon category are tested.  
  
##  <a name="cmfcribboncategory__hittestex"></a>  CMFCRibbonCategory::HitTestEx  
 Retrieves the zero-based index of a ribbon element if the specified point is located in it.  
  
```  
int HitTestEx(CPoint point) const;

 
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.  
  
### Return Value  
 Zero-based index of a ribbon element if the method was successful; otherwise -1.  
  
### Remarks  
 Only ribbon elements that are contained in the ribbon category are tested.  
  
##  <a name="cmfcribboncategory__hittestscrollbuttons"></a>  CMFCRibbonCategory::HitTestScrollButtons  
 If a point falls within a ribbon category’s left or right scroll button, returns a pointer to that button.  
  
```  
CMFCRibbonBaseElement* HitTestScrollButtons(CPoint point) const;

 
```  
  
### Parameters  
 [in] `point`  
 The point to test.  
  
### Return Value  
 If `point` falls within the bounding rectangle of either the left or the right scroll button of the ribbon category, returns a pointer to that button, or otherwise, returns `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__isactive"></a>  CMFCRibbonCategory::IsActive  
 Indicates whether the ribbon category is the active category on the ribbon bar.  
  
```  
BOOL IsActive() const;

 
```  
  
### Return Value  
 `TRUE` if the ribbon category is the active category; otherwise `FALSE`.  
  
### Remarks  
 The active ribbon category displays its ribbon panels.  
  
##  <a name="cmfcribboncategory__isvisible"></a>  CMFCRibbonCategory::IsVisible  
 Indicates whether the ribbon category is visible.  
  
```  
BOOL IsVisible() const;

 
```  
  
### Return Value  
 `TRUE` if the ribbon category is visible; otherwise `FALSE`.  
  
### Remarks  
 Ribbon categories that are visible display a category tab.  
  
##  <a name="cmfcribboncategory__iswindows7look"></a>  CMFCRibbonCategory::IsWindows7Look  
 Indicates whether the parent ribbon has Windows 7 look (small rectangular application button).  
  
```  
BOOL IsWindows7Look() const;

 
```  
  
### Return Value  
 `TRUE` if the parent ribbon has Windows 7 look; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__notifycontrolcommand"></a>  CMFCRibbonCategory::NotifyControlCommand  
 Delivers a WM_NOTIFY command message to all `CMFCRibbonPanel` elements in the `CMFCRibbonCategory` until the message is handled.  
  
```  
virtual BOOL NotifyControlCommand(
    BOOL bAccelerator,  
    int nNotifyCode,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### Parameters  
 [in] `bAccelerator`  
 `TRUE` if this command originated from an accelerator, or `FALSE` otherwise.  
  
 [in] `nNotifyCode`  
 The notification code.  
  
 [in] `wParam`  
 The WPARAM field of the message.  
  
 [in] `lParam`  
 The LPARAM field of the message.  
  
### Return Value  
 Returns `TRUE` if the message was handled, or `FALSE` if not.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__oncancelmode"></a>  CMFCRibbonCategory::OnCancelMode  
 Invokes cancel mode in all the `CMFCRibbonPanel` elements of the `CMFCRibbonCategory`.  
  
```  
virtual void OnCancelMode();
```  
  
### Remarks  
  
##  <a name="cmfcribboncategory__ondraw"></a>  CMFCRibbonCategory::OnDraw  
 Called by the framework to draw the ribbon category.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__ondrawimage"></a>  CMFCRibbonCategory::OnDrawImage  
 Called by the framework to draw the specified image on the ribbon category.  
  
```  
virtual BOOL OnDrawImage(
    CDC* pDC,  
    CRect rect,  
    CMFCRibbonBaseElement* pElement,  
    BOOL bIsLargeImage,  
    BOOL nImageIndex,  
    BOOL bCenter);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the image.  
  
 [in] `rect`  
 Display rectangle for the image.  
  
 [in] `pElement`  
 Pointer to the ribbon element that contains the image.  
  
 [in] `bIsLargeImage`  
 `TRUE` if the image is the large size; `FALSE` if the image is the small size.  
  
 [in] `nImageIndex`  
 Zero-based index of the image in the image array that is contained in the ribbon category.  
  
 [in] `bCenter`  
 `TRUE` to center the image in the display rectangle; `FALSE` to draw the image in the upper-left corner of the display rectangle.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__ondrawmenuborder"></a>  CMFCRibbonCategory::OnDrawMenuBorder  
 Called by the framework to draw the border of a popup menu.  
  
```  
virtual void OnDrawMenuBorder(
    CDC* pDC,  
    CMFCRibbonPanelMenuBar* pMenuBar);
```  
  
### Parameters  
 [in] `pDC`  
 This parameter is not used.  
  
 [in] `pMenuBar`  
 This parameter is not used.  
  
### Remarks  
 By default this method does nothing. Override this method to draw the border of a popup menu.  
  
##  <a name="cmfcribboncategory__onkey"></a>  CMFCRibbonCategory::OnKey  
 Called by the framework when a user presses a keyboard button.  
  
```  
virtual BOOL OnKey(UINT nChar);
```  
  
### Parameters  
 `nChar`  
 The virtual key code for the key that a user pressed.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__onlbuttondown"></a>  CMFCRibbonCategory::OnLButtonDown  
 Called by the framework to retrieve the ribbon element under the specified point when the user presses the left mouse button.  
  
```  
virtual CMFCRibbonBaseElement* OnLButtonDown(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.  
  
### Return Value  
 Pointer to a ribbon element if the method was successful; otherwise `NULL`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__onlbuttonup"></a>  CMFCRibbonCategory::OnLButtonUp  
 Called by the framework when the user releases the left mouse button and the pointer is over the ribbon category.  
  
```  
virtual void OnLButtonUp(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__onmousemove"></a>  CMFCRibbonCategory::OnMouseMove  
 Called by the framework when the pointer moves on the ribbon bar in order to update the ribbon category display.  
  
```  
virtual void OnMouseMove(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The x and y coordinates of the pointer, relative to the upper-left corner of the window.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__onrtlchanged"></a>  CMFCRibbonCategory::OnRTLChanged  
 Called by the framework when the layout changes direction.  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### Parameters  
 [in] `bIsRTL`  
 `TRUE` if the layout is right-to-left; `FALSE` if the layout is left-to-right.  
  
### Remarks  
 This method adjusts the layout of all ribbon panels and ribbon elements that are contained in the ribbon category.  
  
##  <a name="cmfcribboncategory__onscrollhorz"></a>  CMFCRibbonCategory::OnScrollHorz  
 Scrolls the ribbon category in the horizontal direction.  
  
```  
virtual BOOL OnScrollHorz(
    BOOL bScrollLeft,  
    int nScrollOffset = 0);
```  
  
### Parameters  
 [in] `bScrollLeft`  
 `TRUE` to scroll to the left; `FALSE` to scroll to the right.  
  
 [in] `nScrollOffset`  
 The scroll distance in pixels.  
  
### Return Value  
 `TRUE` if the ribbon category moved in a horizontal direction; otherwise `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__onupdatecmdui"></a>  CMFCRibbonCategory::OnUpdateCmdUI  
 Calls the `OnUpdateCmdUI` member function in each of the `CMFCRibbonPanel` elements of the `CMFCRibbonCategory` to enable or disable the user-interface elements in them.  
  
```  
virtual void OnUpdateCmdUI(
    CMFCRibbonCmdUI* pCmdUI,  
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### Parameters  
 [in] `pCmdUI`  
 Pointer to the `CMFCRibbonCmdUI` object that specifies which user-interface elements are to be enabled and which are to be disabled.  
  
 [in] `pTarget`  
 Pointer to the window that controls the enabling or disabling of the user-interface elements.  
  
 [in] `bDisableIfNoHndler`  
 `TRUE` to disable the user-interface item if no handler is defined in a message map; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__recalclayout"></a>  CMFCRibbonCategory::RecalcLayout  
 Adjusts the layout of all controls on the ribbon category.  
  
```  
virtual void RecalcLayout(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__removepanel"></a>  CMFCRibbonCategory::RemovePanel  
 Removes a ribbon panel from the ribbon category.  
  
```cpp  
BOOL RemovePanel(
    int nIndex,  
    BOOL bDelete = TRUE);
```  
  
### Parameters  
 [in] `nIndex`  
 The index number of the panel to remove. Obtained by calling the [CMFCRibbonCategory::GetPanelIndex](#cmfcribboncategory__getpanelindex) method.  
  
 [in] `bDelete`  
 `TRUE` to delete the panel object from memory; `FALSE` to remove the panel object without deleting it.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise, `FALSE`.  
  
##  <a name="cmfcribboncategory__repospanels"></a>  CMFCRibbonCategory::ReposPanels  
 Adjusts the layout of all controls on the ribbon panels that are contained in the ribbon category.  
  
```  
virtual void ReposPanels(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context for the ribbon panels that are contained in the ribbon category.  
  
### Remarks  
  
##  <a name="cmfcribboncategory__setcollapseorder"></a>  CMFCRibbonCategory::SetCollapseOrder  
 Defines the order in which the ribbon panels of the ribbon category collapse.  
  
```  
void SetCollapseOrder(
    const CArray<int,int>& arCollapseOrder);
```  
  
### Parameters  
 [in] `arCollapseOrder`  
 Specifies the collapse order. The array contains zero-based indexes of ribbon panels.  
  
### Remarks  
 The library defines the collapse order. However, you can customize this behavior by providing the category with the list of indexes that specifies the collapse order.  
  
 When the category detects that it has to collapse a ribbon panel, it looks for the next element in the specified list. If the list is empty, or you have not specified enough elements, then the category uses the internal algorithm.  
  
 For example, the category has three ribbon panels and can be collapsed several times until all panels are in the fully collapsed state. You can set the following collapse order: 0, 0, 2, 2. In this case, the category will collapse the panel 0 two times, the panel 2 two times. The panel that has the index of 1 remains uncollapsed.  
  
### Example  
 The following example demonstrates how to use the `SetCollapseOrder` method in the `CMFCRibbonCategory` class. The example shows how to construct an array for the collapse order, and how to set the collapse order to the ribbon category.  
  
 [!code-cpp[NVC_MFC_RibbonApp#13](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_2.cpp)]  
  
##  <a name="cmfcribboncategory__setdata"></a>  CMFCRibbonCategory::SetData  
 Sets the user-defined data to be associated with the ribbon category.  
  
```  
void SetData(DWORD_PTR dwData);
```  
  
### Parameters  
 [in] `dwData`  
 The user-defined data.  
  
##  <a name="cmfcribboncategory__setkeys"></a>  CMFCRibbonCategory::SetKeys  
 Assigns a keytip to the ribbon category.  
  
```  
void SetKeys(LPCTSTR lpszKeys);
```  
  
### Parameters  
 [in] `lpszKeys`  
 The keytip text.  
  
### Remarks  
 Keytips are displayed when the user presses the Alt key or the F10 key.  
  
##  <a name="cmfcribboncategory__setname"></a>  CMFCRibbonCategory::SetName  
 Assigns a name and keytip to the ribbon category.  
  
```  
void SetName(LPCTSTR lpszName);
```  
  
### Parameters  
 [in] `lpszName`  
 The name and keytip of the ribbon category.  
  
### Remarks  
 To set the keytip for the ribbon category, append a newline escape sequence followed by the keytip characters to `lpszName`.  
  
##  <a name="cmfcribboncategory__settabcolor"></a>  CMFCRibbonCategory::SetTabColor  
 Sets the color of the ribbon category.  
  
```  
void SetTabColor(AFX_RibbonCategoryColor color);
```  
  
### Parameters  
 [in] `color`  
 Specifies the new color of the ribbon category.  
  
### Remarks  
 Color can be one of the following values:  
  
-   AFX_CategoryColor_None  
  
-   AFX_CategoryColor_Red  
  
-   AFX_CategoryColor_Orange  
  
-   AFX_CategoryColor_Yellow  
  
-   AFX_CategoryColor_Green  
  
-   AFX_CategoryColor_Blue  
  
-   AFX_CategoryColor_Indigo  
  
-   AFX_CategoryColor_Violet  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)
