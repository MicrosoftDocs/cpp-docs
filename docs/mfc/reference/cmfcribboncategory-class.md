---
description: "Learn more about: CMFCRibbonCategory Class"
title: "CMFCRibbonCategory Class"
ms.date: "11/19/2018"
f1_keywords: ["CMFCRibbonCategory", "AFXRIBBONCATEGORY/CMFCRibbonCategory", "AFXRIBBONCATEGORY/CMFCRibbonCategory::CMFCRibbonCategory", "AFXRIBBONCATEGORY/CMFCRibbonCategory::AddHidden", "AFXRIBBONCATEGORY/CMFCRibbonCategory::AddPanel", "AFXRIBBONCATEGORY/CMFCRibbonCategory::CopyFrom", "AFXRIBBONCATEGORY/CMFCRibbonCategory::FindByData", "AFXRIBBONCATEGORY/CMFCRibbonCategory::FindByID", "AFXRIBBONCATEGORY/CMFCRibbonCategory::FindPanelWithElem", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetContextID", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetData", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetDroppedDown", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetElements", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetElementsByID", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetFirstVisibleElement", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetFocused", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetHighlighted", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetImageCount", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetImageSize", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetItemIDsList", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetLastVisibleElement", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetLargeImages", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetMaxHeight", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetName", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetPanel", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetPanelCount", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetPanelFromPoint", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetPanelIndex", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetParentButton", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetParentMenuBar", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetParentRibbonBar", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetRect", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetSmallImages", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetTabColor", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetTabRect", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetTextTopLine", "AFXRIBBONCATEGORY/CMFCRibbonCategory::GetVisibleElements", "AFXRIBBONCATEGORY/CMFCRibbonCategory::HighlightPanel", "AFXRIBBONCATEGORY/CMFCRibbonCategory::HitTest", "AFXRIBBONCATEGORY/CMFCRibbonCategory::HitTestEx", "AFXRIBBONCATEGORY/CMFCRibbonCategory::HitTestScrollButtons", "AFXRIBBONCATEGORY/CMFCRibbonCategory::IsActive", "AFXRIBBONCATEGORY/CMFCRibbonCategory::IsVisible", "AFXRIBBONCATEGORY/CMFCRibbonCategory::IsWindows7Look", "AFXRIBBONCATEGORY/CMFCRibbonCategory::NotifyControlCommand", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnCancelMode", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnDraw", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnDrawImage", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnDrawMenuBorder", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnKey", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnLButtonDown", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnLButtonUp", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnMouseMove", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnRTLChanged", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnScrollHorz", "AFXRIBBONCATEGORY/CMFCRibbonCategory::OnUpdateCmdUI", "AFXRIBBONCATEGORY/CMFCRibbonCategory::RecalcLayout", "AFXRIBBONCATEGORY/CMFCRibbonCategory::RemovePanel", "AFXRIBBONCATEGORY/CMFCRibbonCategory::ReposPanels", "AFXRIBBONCATEGORY/CMFCRibbonCategory::SetCollapseOrder", "AFXRIBBONCATEGORY/CMFCRibbonCategory::SetData", "AFXRIBBONCATEGORY/CMFCRibbonCategory::SetKeys", "AFXRIBBONCATEGORY/CMFCRibbonCategory::SetName", "AFXRIBBONCATEGORY/CMFCRibbonCategory::SetTabColor"]
helpviewer_keywords: ["CMFCRibbonCategory [MFC], CMFCRibbonCategory", "CMFCRibbonCategory [MFC], AddHidden", "CMFCRibbonCategory [MFC], AddPanel", "CMFCRibbonCategory [MFC], CopyFrom", "CMFCRibbonCategory [MFC], FindByData", "CMFCRibbonCategory [MFC], FindByID", "CMFCRibbonCategory [MFC], FindPanelWithElem", "CMFCRibbonCategory [MFC], GetContextID", "CMFCRibbonCategory [MFC], GetData", "CMFCRibbonCategory [MFC], GetDroppedDown", "CMFCRibbonCategory [MFC], GetElements", "CMFCRibbonCategory [MFC], GetElementsByID", "CMFCRibbonCategory [MFC], GetFirstVisibleElement", "CMFCRibbonCategory [MFC], GetFocused", "CMFCRibbonCategory [MFC], GetHighlighted", "CMFCRibbonCategory [MFC], GetImageCount", "CMFCRibbonCategory [MFC], GetImageSize", "CMFCRibbonCategory [MFC], GetItemIDsList", "CMFCRibbonCategory [MFC], GetLastVisibleElement", "CMFCRibbonCategory [MFC], GetLargeImages", "CMFCRibbonCategory [MFC], GetMaxHeight", "CMFCRibbonCategory [MFC], GetName", "CMFCRibbonCategory [MFC], GetPanel", "CMFCRibbonCategory [MFC], GetPanelCount", "CMFCRibbonCategory [MFC], GetPanelFromPoint", "CMFCRibbonCategory [MFC], GetPanelIndex", "CMFCRibbonCategory [MFC], GetParentButton", "CMFCRibbonCategory [MFC], GetParentMenuBar", "CMFCRibbonCategory [MFC], GetParentRibbonBar", "CMFCRibbonCategory [MFC], GetRect", "CMFCRibbonCategory [MFC], GetSmallImages", "CMFCRibbonCategory [MFC], GetTabColor", "CMFCRibbonCategory [MFC], GetTabRect", "CMFCRibbonCategory [MFC], GetTextTopLine", "CMFCRibbonCategory [MFC], GetVisibleElements", "CMFCRibbonCategory [MFC], HighlightPanel", "CMFCRibbonCategory [MFC], HitTest", "CMFCRibbonCategory [MFC], HitTestEx", "CMFCRibbonCategory [MFC], HitTestScrollButtons", "CMFCRibbonCategory [MFC], IsActive", "CMFCRibbonCategory [MFC], IsVisible", "CMFCRibbonCategory [MFC], IsWindows7Look", "CMFCRibbonCategory [MFC], NotifyControlCommand", "CMFCRibbonCategory [MFC], OnCancelMode", "CMFCRibbonCategory [MFC], OnDraw", "CMFCRibbonCategory [MFC], OnDrawImage", "CMFCRibbonCategory [MFC], OnDrawMenuBorder", "CMFCRibbonCategory [MFC], OnKey", "CMFCRibbonCategory [MFC], OnLButtonDown", "CMFCRibbonCategory [MFC], OnLButtonUp", "CMFCRibbonCategory [MFC], OnMouseMove", "CMFCRibbonCategory [MFC], OnRTLChanged", "CMFCRibbonCategory [MFC], OnScrollHorz", "CMFCRibbonCategory [MFC], OnUpdateCmdUI", "CMFCRibbonCategory [MFC], RecalcLayout", "CMFCRibbonCategory [MFC], RemovePanel", "CMFCRibbonCategory [MFC], ReposPanels", "CMFCRibbonCategory [MFC], SetCollapseOrder", "CMFCRibbonCategory [MFC], SetData", "CMFCRibbonCategory [MFC], SetKeys", "CMFCRibbonCategory [MFC], SetName", "CMFCRibbonCategory [MFC], SetTabColor"]
ms.assetid: 99ba25b6-d060-4fdd-bfab-3c46c22981bb
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
|[CMFCRibbonCategory::CMFCRibbonCategory](#cmfcribboncategory)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonCategory::AddHidden](#addhidden)|Adds a hidden element to the ribbon category.|
|[CMFCRibbonCategory::AddPanel](#addpanel)|Adds a new panel to the ribbon category.|
|[CMFCRibbonCategory::CopyFrom](#copyfrom)||
|[CMFCRibbonCategory::FindByData](#findbydata)||
|[CMFCRibbonCategory::FindByID](#findbyid)||
|[CMFCRibbonCategory::FindPanelWithElem](#findpanelwithelem)||
|[CMFCRibbonCategory::GetContextID](#getcontextid)|Returns the context ID of the ribbon category.|
|[CMFCRibbonCategory::GetData](#getdata)|Returns the user-defined data that is associated with the ribbon category.|
|[CMFCRibbonCategory::GetDroppedDown](#getdroppeddown)||
|[CMFCRibbonCategory::GetElements](#getelements)||
|[CMFCRibbonCategory::GetElementsByID](#getelementsbyid)||
|[CMFCRibbonCategory::GetFirstVisibleElement](#getfirstvisibleelement)|Obtain a first visible element that belong to the ribbon category.|
|[CMFCRibbonCategory::GetFocused](#getfocused)|Returns a focused element.|
|[CMFCRibbonCategory::GetHighlighted](#gethighlighted)|Returns a highlighted element.|
|[CMFCRibbonCategory::GetImageCount](#getimagecount)||
|[CMFCRibbonCategory::GetImageSize](#getimagesize)||
|[CMFCRibbonCategory::GetItemIDsList](#getitemidslist)||
|[CMFCRibbonCategory::GetLastVisibleElement](#getlastvisibleelement)|Obtain a last visible element that belong to the ribbon category|
|[CMFCRibbonCategory::GetLargeImages](#getlargeimages)|Returns a reference to the list of large images that the ribbon category uses.|
|[CMFCRibbonCategory::GetMaxHeight](#getmaxheight)||
|[CMFCRibbonCategory::GetName](#getname)||
|[CMFCRibbonCategory::GetPanel](#getpanel)|Returns a pointer to the ribbon panel that is located at the specified index.|
|[CMFCRibbonCategory::GetPanelCount](#getpanelcount)|Returns the number of ribbon panels in the ribbon category.|
|[CMFCRibbonCategory::GetPanelFromPoint](#getpanelfrompoint)||
|[CMFCRibbonCategory::GetPanelIndex](#getpanelindex)|Returns the index of the specified ribbon panel.|
|[CMFCRibbonCategory::GetParentButton](#getparentbutton)||
|[CMFCRibbonCategory::GetParentMenuBar](#getparentmenubar)||
|[CMFCRibbonCategory::GetParentRibbonBar](#getparentribbonbar)||
|[CMFCRibbonCategory::GetRect](#getrect)||
|[CMFCRibbonCategory::GetSmallImages](#getsmallimages)|Returns a reference to the list of small images that the category uses.|
|[CMFCRibbonCategory::GetTabColor](#gettabcolor)|Returns the current color of the ribbon category tab.|
|[CMFCRibbonCategory::GetTabRect](#gettabrect)||
|[CMFCRibbonCategory::GetTextTopLine](#gettexttopline)||
|[CMFCRibbonCategory::GetVisibleElements](#getvisibleelements)|Obtain all visible elements that belong to the ribbon category.|
|[CMFCRibbonCategory::HighlightPanel](#highlightpanel)||
|[CMFCRibbonCategory::HitTest](#hittest)||
|[CMFCRibbonCategory::HitTestEx](#hittestex)||
|[CMFCRibbonCategory::HitTestScrollButtons](#hittestscrollbuttons)||
|[CMFCRibbonCategory::IsActive](#isactive)||
|[CMFCRibbonCategory::IsVisible](#isvisible)|Determines whether the ribbon category is visible.|
|[CMFCRibbonCategory::IsWindows7Look](#iswindows7look)|Indicates whether the parent ribbon has Windows 7-style look (small rectangular application button)|
|[CMFCRibbonCategory::NotifyControlCommand](#notifycontrolcommand)||
|[CMFCRibbonCategory::OnCancelMode](#oncancelmode)||
|[CMFCRibbonCategory::OnDraw](#ondraw)||
|[CMFCRibbonCategory::OnDrawImage](#ondrawimage)||
|[CMFCRibbonCategory::OnDrawMenuBorder](#ondrawmenuborder)||
|[CMFCRibbonCategory::OnKey](#onkey)|Called by the framework when a user presses a keyboard button.|
|[CMFCRibbonCategory::OnLButtonDown](#onlbuttondown)||
|[CMFCRibbonCategory::OnLButtonUp](#onlbuttonup)||
|[CMFCRibbonCategory::OnMouseMove](#onmousemove)||
|[CMFCRibbonCategory::OnRTLChanged](#onrtlchanged)||
|[CMFCRibbonCategory::OnScrollHorz](#onscrollhorz)||
|[CMFCRibbonCategory::OnUpdateCmdUI](#onupdatecmdui)||
|[CMFCRibbonCategory::RecalcLayout](#recalclayout)||
|[CMFCRibbonCategory::RemovePanel](#removepanel)||
|[CMFCRibbonCategory::ReposPanels](#repospanels)||
|[CMFCRibbonCategory::SetCollapseOrder](#setcollapseorder)|Defines the collapse order of the ribbon panels that are present in the ribbon category.|
|[CMFCRibbonCategory::SetData](#setdata)|Stores the user defined data in the ribbon category.|
|[CMFCRibbonCategory::SetKeys](#setkeys)|Assigns a keytip to the ribbon category.|
|[CMFCRibbonCategory::SetName](#setname)||
|[CMFCRibbonCategory::SetTabColor](#settabcolor)|Sets the color of the ribbon category.|

## Remarks

Typically, you create a ribbon category indirectly by calling [CMFCRibbonBar::AddCategory](../../mfc/reference/cmfcribbonbar-class.md#addcategory), which returns a pointer to the newly created ribbon category. You add panels to the category by calling [CMFCRibbonCategory::AddPanel](#addpanel).

The `CMFCRibbonTab` class draws ribbon categories. It is derived from [CMFCRibbonBaseElement Class](../../mfc/reference/cmfcribbonbaseelement-class.md).

This following example demonstrates how to create a ribbon category and add a panel to it.

```cpp
// Create a new ribbon category and get a pointer to it`
CMFCRibbonCategory* pCategory = m_wndRibbonBar.AddCategory
    (_T("&Write"),           // Category name
    IDB_WRITE,               // Category small images (16 x 16)
    IDB_WRITE_LARGE);        // Category large images (32 x 32)

// Add a panel to the new category
CMFCRibbonPanel* pPanel = pCategory->AddPanel (
    _T("Clipboard"),                // Panel name
    m_PanelIcons.ExtractIcon (0));  // Panel icon
```

The following diagram shows a figure of the Home category from the RibbonApp sample application.

![Home category from the RibbonApp sample application](../../mfc/reference/media/cmfcribboncategory.png "Home category from the RibbonApp sample application")

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMFCRibbonCategory`

## Requirements

**Header:** afxribboncategory.h

## <a name="addhidden"></a> CMFCRibbonCategory::AddHidden

Adds the specified ribbon element to the array of ribbon elements that are displayed on the customization dialog box.

```cpp
void AddHidden(CMFCRibbonBaseElement* pElem);
```

### Parameters

*pElem*<br/>
[in] Pointer to a ribbon element.

### Remarks

Ribbon elements on the customization dialog box are the commands that you can add to the quick access toolbar.

## <a name="addpanel"></a> CMFCRibbonCategory::AddPanel

Creates a ribbon panel for the ribbon category.

```
CMFCRibbonPanel* AddPanel(
    LPCTSTR lpszPanelName,
    HICON hIcon = 0,
    CRuntimeClass* pRTI = NULL);
```

### Parameters

*lpszPanelName*<br/>
[in] Pointer to the name of the new ribbon panel.

*hIcon*<br/>
[in] Handle to the default icon for the new ribbon panel.

*pRTI*<br/>
[in] Pointer to runtime class information for a custom ribbon panel.

### Return Value

Pointer to the new ribbon panel if the method was successful; otherwise NULL if the panel was not created.

### Remarks

If you want to create a custom ribbon panel, you must specify its runtime class information in *pRTI*. The custom ribbon panel class must be derived from the `CMFCRibbonPanel` class.

The default icon for the ribbon panel is displayed when there is insufficient space to display the ribbon elements.

### Example

The following example demonstrates how to use the `AddPanel` method in the `CMFCRibbonCategory` class.

[!code-cpp[NVC_MFC_RibbonApp#10](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_1.cpp)]

## <a name="cmfcribboncategory"></a> CMFCRibbonCategory::CMFCRibbonCategory

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

*pParenrRibbonBar*<br/>
[in] Pointer to the parent ribbon bar of the ribbon category.

*lpszName*<br/>
[in] Name of the ribbon category.

*uiSmallImagesResID*<br/>
[in] Resource ID of the image list for small images that are used by ribbon elements in the ribbon category.

*uiLargeImagesResID*<br/>
[in] Resource ID of the image list for large images that are used by ribbon elements in the ribbon category.

*sizeSmallImage*<br/>
[in] Default size of small images for ribbon elements in the ribbon category.

*sizeLargeImage*<br/>
[in] Default size of large images for ribbon elements in the ribbon category.

## <a name="copyfrom"></a> CMFCRibbonCategory::CopyFrom

Copies the state of the specified [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) to the current [CMFCRibbonCategory](../../mfc/reference/cmfcribboncategory-class.md) object.

```
virtual void CopyFrom(CMFCRibbonCategory& src);
```

### Parameters

*src*<br/>
[in] The source `CMFCRibbonCategory` object.

### Remarks

## <a name="findbydata"></a> CMFCRibbonCategory::FindByData

Retrieves the ribbon element associated with the specified data.

```
CMFCRibbonBaseElement* FindByData(
    DWORD_PTR dwData,
    BOOL bVisibleOnly = TRUE) const;
```

### Parameters

*dwData*<br/>
[in] The data associated with a ribbon element.

*bVisibleOnly*<br/>
[in] TRUE to include quick access ribbon elements in the search; FALSE to exclude quick access ribbon elements in the search.

### Return Value

Pointer to a ribbon element if the method was successful; otherwise NULL.

### Remarks

## <a name="findbyid"></a> CMFCRibbonCategory::FindByID

Retrieves the ribbon element associated with the specified command ID.

```
CMFCRibbonBaseElement* FindByID(
    UINT uiCmdID,
    BOOL bVisibleOnly = TRUE) const;
```

### Parameters

*uiCmdID*<br/>
[in] Command ID associated with a ribbon element.

*bVisibleOnly*<br/>
[in] TRUE to include quick access ribbon elements in the search; FALSE to exclude quick access ribbon elements in the search.

### Return Value

Pointer to a ribbon element if the method was successful; otherwise NULL.

### Remarks

## <a name="findpanelwithelem"></a> CMFCRibbonCategory::FindPanelWithElem

Retrieves the ribbon panel that contains the specified ribbon element.

```
CMFCRibbonPanel* FindPanelWithElem(const CMFCRibbonBaseElement* pElement);
```

### Parameters

*pElement*<br/>
[in] Pointer to a ribbon element.

### Return Value

Pointer to a ribbon panel if the method was successful; otherwise NULL.

### Remarks

## <a name="getcontextid"></a> CMFCRibbonCategory::GetContextID

Retrieves the context ID of the ribbon category.

```
UINT GetContextID() const;
```

### Return Value

Context ID of the ribbon category.

### Remarks

The context ID is 0 if the ribbon category is not a context ribbon category.

## <a name="getdata"></a> CMFCRibbonCategory::GetData

Retrieves the user-defined data that is associated with the ribbon category.

```
DWORD_PTR GetData() const;
```

### Return Value

The user-defined data that is associated with the ribbon category.

## <a name="getdroppeddown"></a> CMFCRibbonCategory::GetDroppedDown

Retrieves a pointer to the ribbon element that currently has its pop-up menu displayed.

```
CMFCRibbonBaseElement* GetDroppedDown();
```

### Return Value

Pointer to a ribbon element if the method was successful; otherwise NULL.

### Remarks

## <a name="getelements"></a> CMFCRibbonCategory::GetElements

Retrieves all ribbon elements in the ribbon category.

```cpp
void GetElements(
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```

### Parameters

*arElements*<br/>
[in, out] Reference to a [CArray](../../mfc/reference/carray-class.md) of ribbon elements.

### Remarks

Ribbon elements that are designed for use on the quick access toolbar are included in the array.

## <a name="getelementsbyid"></a> CMFCRibbonCategory::GetElementsByID

Retrieves all ribbon elements that are associated with the specified command ID.

```cpp
void GetElementsByID(
    UINT uiCmdID,
    CArray <CMFCRibbonBaseElement*, CMFCRibbonBaseElement*>& arElements);
```

### Parameters

*uiCmdID*<br/>
[in] Command ID associated with a ribbon element.

*arElements*<br/>
[in, out] Reference to a [CArray](../../mfc/reference/carray-class.md) of ribbon elements.

### Remarks

Ribbon elements that are designed for use on the quick access toolbar are included in the array.

## <a name="getfirstvisibleelement"></a> CMFCRibbonCategory::GetFirstVisibleElement

Retrieves the first visible element that belongs to the ribbon category.

```
CMFCRibbonBaseElement* GetFirstVisibleElement() const;
```

### Return Value

Pointer to the first visible element; may be NULL if category does not have any visible elements.

### Remarks

## <a name="getfocused"></a> CMFCRibbonCategory::GetFocused

Returns a focused element.

```
CMFCRibbonBaseElement* GetFocused();
```

### Return Value

A pointer to a focused element or NULL.

### Remarks

## <a name="gethighlighted"></a> CMFCRibbonCategory::GetHighlighted

Returns a highlighted element.

```
CMFCRibbonBaseElement* GetHighlighted();
```

### Return Value

A pointer to a highlighted element or NULL if no elements are highlighted.

### Remarks

## <a name="getimagecount"></a> CMFCRibbonCategory::GetImageCount

Retrieves the number of images in the specified image list that is contained in the ribbon category.

```
int GetImageCount(BOOL bIsLargeImage) const;
```

### Parameters

*bIsLargeImage*<br/>
[in] TRUE for the number of images in the large image list; FALSE for the number of images in the small image list.

### Return Value

The number of images in the specified image list.

### Remarks

## <a name="getimagesize"></a> CMFCRibbonCategory::GetImageSize

Retrieves the size of an image in the specified image list that is contained in the ribbon category.

```
CSize GetImageSize(BOOL bIsLargeImage) const;
```

### Parameters

*bIsLargeImage*<br/>
[in] TRUE for the size of large images; FALSE for the size of small images.

### Return Value

The size of an image in the specified image list.

### Remarks

The size retrieved includes the global image scale factor.

## <a name="getitemidslist"></a> CMFCRibbonCategory::GetItemIDsList

Retrieves the command IDs for the ribbon elements that are contained in the ribbon category.

```cpp
void GetItemIDsList(
    CList<UINT, UINT>& lstItems,
    BOOL bHiddenOnly = FALSE) const;
```

### Parameters

*lstItems*<br/>
[out] The list of command IDs for the ribbon elements in the ribbon category.

*bHiddenOnly*<br/>
[in] TRUE to exclude ribbon elements displayed on the ribbon panels in the ribbon category; FALSE to include all ribbon elements in the ribbon category.

### Remarks

## <a name="getlargeimages"></a> CMFCRibbonCategory::GetLargeImages

Retrieves the list of large images that are contained in the ribbon category.

```
CMFCToolBarImages& GetLargeImages();
```

### Return Value

The list of large images that are contained in the ribbon category.

## <a name="getlastvisibleelement"></a> CMFCRibbonCategory::GetLastVisibleElement

Retrieves the last visible element that belongs to the ribbon category.

```
CMFCRibbonBaseElement* GetLastVisibleElement() const;
```

### Return Value

Pointer to the last visible element; may be NULL if the category does not have any visible elements.

### Remarks

## <a name="getmaxheight"></a> CMFCRibbonCategory::GetMaxHeight

Retrieves the maximum height of the ribbon panels that are contained in the ribbon category.

```
int GetMaxHeight(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the ribbon panels.

### Return Value

The maximum height of the ribbon panels that are contained in the ribbon category.

### Remarks

The value retrieved includes the height of the top and bottom margins for the ribbon panels.

## <a name="getname"></a> CMFCRibbonCategory::GetName

Retrieves the name of the ribbon category.

```
LPCTSTR GetName() const;
```

### Return Value

The name of the ribbon category.

### Remarks

## <a name="getpanel"></a> CMFCRibbonCategory::GetPanel

Returns a pointer to the ribbon panel that is located at the specified index.

```
CMFCRibbonPanel* GetPanel(int nIndex);
```

### Parameters

*nIndex*<br/>
[in] The zero-based index of a ribbon panel.

### Return Value

Pointer to the ribbon panel that is located at the specified index.

### Remarks

An exception is thrown if *nIndex* is out of range.

## <a name="getpanelcount"></a> CMFCRibbonCategory::GetPanelCount

Returns the number of ribbon panels in the ribbon category.

```
int GetPanelCount() const;
```

### Return Value

The number of ribbon panels in the ribbon category.

## <a name="getpanelfrompoint"></a> CMFCRibbonCategory::GetPanelFromPoint

Retrieves a pointer to a ribbon panel if the specified point is located in it.

```
CMFCRibbonPanel* GetPanelFromPoint(CPoint point) const;
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the pointer, relative to the upper-left corner of the window.

### Return Value

Pointer to a ribbon panel if the method was successful; otherwise NULL.

### Remarks

Only ribbon panels that are contained in the ribbon category are tested.

## <a name="getpanelindex"></a> CMFCRibbonCategory::GetPanelIndex

Retrieves the zero-based index of the specified ribbon panel.

```
int GetPanelIndex(const CMFCRibbonPanel* pPanel) const;
```

### Parameters

*pPanel*<br/>
[in] Pointer to a ribbon panel.

### Return Value

Zero-based index of the specified ribbon panel if the method was successful; otherwise -1.

### Remarks

Only ribbon panels that are contained in the ribbon category are searched.

## <a name="getparentbutton"></a> CMFCRibbonCategory::GetParentButton

Retrieves the parent ribbon element of the ribbon category.

```
CMFCRibbonBaseElement* GetParentButton() const;
```

### Return Value

Returns a pointer to the parent ribbon element, or NULL if there is no parent element.

### Remarks

## <a name="getparentmenubar"></a> CMFCRibbonCategory::GetParentMenuBar

Returns a pointer to the parent menu bar of the `CMFCRibbonCategory` object.

```
CMFCRibbonPanelMenuBar* GetParentMenuBar() const;
```

### Return Value

Returns the contents of the `m_pParentMenuBar` protected member.

### Remarks

## <a name="getparentribbonbar"></a> CMFCRibbonCategory::GetParentRibbonBar

Retrieves the parent ribbon bar for the ribbon category.

```
CMFCRibbonBar* GetParentRibbonBar() const;
```

### Return Value

Pointer to the parent ribbon bar for the ribbon category.

### Remarks

## <a name="getrect"></a> CMFCRibbonCategory::GetRect

Retrieves the display rectangle for the ribbon category.

```
CRect GetRect() const;
```

### Return Value

The display rectangle for the ribbon category.

### Remarks

The display rectangle for the ribbon category does not include the category tab.

## <a name="getsmallimages"></a> CMFCRibbonCategory::GetSmallImages

Retrieves the list of small images that are contained in the ribbon category.

```
CMFCToolBarImages& GetSmallImages();
```

### Return Value

The list of small images that are contained in the ribbon category.

## <a name="gettabcolor"></a> CMFCRibbonCategory::GetTabColor

Returns the current color of the ribbon category tab.

```
AFX_RibbonCategoryColor GetTabColor() const;
```

### Return Value

The current color of the ribbon category tab.

### Remarks

The returned value can be one of the following enumerated values:

- AFX_CategoryColor_Red

- AFX_CategoryColor_Orange

- AFX_CategoryColor_Yellow

- AFX_CategoryColor_Green

- AFX_CategoryColor_Blue

- AFX_CategoryColor_Indigo

- AFX_CategoryColor_Violet

## <a name="gettabrect"></a> CMFCRibbonCategory::GetTabRect

Retrieves the display rectangle for the ribbon category tab.

```
CRect GetTabRect() const;
```

### Return Value

The display rectangle for the ribbon category tab.

### Remarks

## <a name="gettexttopline"></a> CMFCRibbonCategory::GetTextTopLine

Retrieves the vertical location of text on ribbon buttons in the ribbon category that display large images.

```
int GetTextTopLine() const;
```

### Return Value

The vertical location of text, in pixels, on ribbon buttons that display large images.

### Remarks

## <a name="getvisibleelements"></a> CMFCRibbonCategory::GetVisibleElements

Retrieves all visible elements that belong to the ribbon category.

```cpp
void GetVisibleElements(
    CArray <CMFCRibbonBaseElement*,
    CMFCRibbonBaseElement*>& arElements);
```

### Parameters

*arElements*<br/>
Array of all visible elements.

### Remarks

## <a name="highlightpanel"></a> CMFCRibbonCategory::HighlightPanel

Highlights the specified ribbon panel.

```
CMFCRibbonPanel* HighlightPanel(
    CMFCRibbonPanel* pHLPanel,
    CPoint point);
```

### Parameters

*pHLPanel*<br/>
[in] Pointer to the ribbon panel to highlight.

*point*<br/>
[in] The x and y coordinates of the pointer, relative to the upper-left corner of the window.

### Return Value

Pointer to the previously highlighted ribbon panel; otherwise NULL if no ribbon panel is highlighted when this method is invoked.

### Remarks

For more information about highlighting a ribbon panel, see [CMFCRibbonPanel::Highlight](../../mfc/reference/cmfcribbonpanel-class.md#highlight).

## <a name="hittest"></a> CMFCRibbonCategory::HitTest

Retrieves a pointer to a ribbon element if the specified point is located in it.

```
CMFCRibbonBaseElement* HitTest(
    CPoint point,
    BOOL bCheckPanelCaption = FALSE) const;
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.

*bCheckPanelCaption*<br/>
[in] TRUE to test the ribbon panel caption; FALSE to exclude the ribbon panel caption.

### Return Value

Pointer to a ribbon element if the method was successful; otherwise NULL.

### Remarks

Only ribbon elements that are contained in the ribbon category are tested.

## <a name="hittestex"></a> CMFCRibbonCategory::HitTestEx

Retrieves the zero-based index of a ribbon element if the specified point is located in it.

```
int HitTestEx(CPoint point) const;
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.

### Return Value

Zero-based index of a ribbon element if the method was successful; otherwise -1.

### Remarks

Only ribbon elements that are contained in the ribbon category are tested.

## <a name="hittestscrollbuttons"></a> CMFCRibbonCategory::HitTestScrollButtons

If a point falls within a ribbon category’s left or right scroll button, returns a pointer to that button.

```
CMFCRibbonBaseElement* HitTestScrollButtons(CPoint point) const;
```

### Parameters

*point*<br/>
[in] The point to test.

### Return Value

If *point* falls within the bounding rectangle of either the left or the right scroll button of the ribbon category, returns a pointer to that button, or otherwise, returns NULL.

### Remarks

## <a name="isactive"></a> CMFCRibbonCategory::IsActive

Indicates whether the ribbon category is the active category on the ribbon bar.

```
BOOL IsActive() const;
```

### Return Value

TRUE if the ribbon category is the active category; otherwise FALSE.

### Remarks

The active ribbon category displays its ribbon panels.

## <a name="isvisible"></a> CMFCRibbonCategory::IsVisible

Indicates whether the ribbon category is visible.

```
BOOL IsVisible() const;
```

### Return Value

TRUE if the ribbon category is visible; otherwise FALSE.

### Remarks

Ribbon categories that are visible display a category tab.

## <a name="iswindows7look"></a> CMFCRibbonCategory::IsWindows7Look

Indicates whether the parent ribbon has Windows 7 look (small rectangular application button).

```
BOOL IsWindows7Look() const;
```

### Return Value

TRUE if the parent ribbon has Windows 7 look; otherwise FALSE.

### Remarks

## <a name="notifycontrolcommand"></a> CMFCRibbonCategory::NotifyControlCommand

Delivers a WM_NOTIFY command message to all `CMFCRibbonPanel` elements in the `CMFCRibbonCategory` until the message is handled.

```
virtual BOOL NotifyControlCommand(
    BOOL bAccelerator,
    int nNotifyCode,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*bAccelerator*<br/>
[in] TRUE if this command originated from an accelerator, or FALSE otherwise.

*nNotifyCode*<br/>
[in] The notification code.

*wParam*<br/>
[in] The WPARAM field of the message.

*lParam*<br/>
[in] The LPARAM field of the message.

### Return Value

Returns TRUE if the message was handled, or FALSE if not.

### Remarks

## <a name="oncancelmode"></a> CMFCRibbonCategory::OnCancelMode

Invokes cancel mode in all the `CMFCRibbonPanel` elements of the `CMFCRibbonCategory`.

```
virtual void OnCancelMode();
```

### Remarks

## <a name="ondraw"></a> CMFCRibbonCategory::OnDraw

Called by the framework to draw the ribbon category.

```
virtual void OnDraw(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the ribbon category.

### Remarks

## <a name="ondrawimage"></a> CMFCRibbonCategory::OnDrawImage

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

*pDC*<br/>
[in] Pointer to a device context for the image.

*rect*<br/>
[in] Display rectangle for the image.

*pElement*<br/>
[in] Pointer to the ribbon element that contains the image.

*bIsLargeImage*<br/>
[in] TRUE if the image is the large size; FALSE if the image is the small size.

*nImageIndex*<br/>
[in] Zero-based index of the image in the image array that is contained in the ribbon category.

*bCenter*<br/>
[in] TRUE to center the image in the display rectangle; FALSE to draw the image in the upper-left corner of the display rectangle.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

## <a name="ondrawmenuborder"></a> CMFCRibbonCategory::OnDrawMenuBorder

Called by the framework to draw the border of a popup menu.

```
virtual void OnDrawMenuBorder(
    CDC* pDC,
    CMFCRibbonPanelMenuBar* pMenuBar);
```

### Parameters

*pDC*<br/>
[in] This parameter is not used.

*pMenuBar*<br/>
[in] This parameter is not used.

### Remarks

By default this method does nothing. Override this method to draw the border of a popup menu.

## <a name="onkey"></a> CMFCRibbonCategory::OnKey

Called by the framework when a user presses a keyboard button.

```
virtual BOOL OnKey(UINT nChar);
```

### Parameters

*nChar*<br/>
The virtual key code for the key that a user pressed.

### Remarks

## <a name="onlbuttondown"></a> CMFCRibbonCategory::OnLButtonDown

Called by the framework to retrieve the ribbon element under the specified point when the user presses the left mouse button.

```
virtual CMFCRibbonBaseElement* OnLButtonDown(CPoint point);
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the mouse pointer, relative to the upper-left corner of the window.

### Return Value

Pointer to a ribbon element if the method was successful; otherwise NULL.

### Remarks

## <a name="onlbuttonup"></a> CMFCRibbonCategory::OnLButtonUp

Called by the framework when the user releases the left mouse button and the pointer is over the ribbon category.

```
virtual void OnLButtonUp(CPoint point);
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the pointer, relative to the upper-left corner of the window.

### Remarks

## <a name="onmousemove"></a> CMFCRibbonCategory::OnMouseMove

Called by the framework when the pointer moves on the ribbon bar in order to update the ribbon category display.

```
virtual void OnMouseMove(CPoint point);
```

### Parameters

*point*<br/>
[in] The x and y coordinates of the pointer, relative to the upper-left corner of the window.

### Remarks

## <a name="onrtlchanged"></a> CMFCRibbonCategory::OnRTLChanged

Called by the framework when the layout changes direction.

```
virtual void OnRTLChanged(BOOL bIsRTL);
```

### Parameters

*bIsRTL*<br/>
[in] TRUE if the layout is right-to-left; FALSE if the layout is left-to-right.

### Remarks

This method adjusts the layout of all ribbon panels and ribbon elements that are contained in the ribbon category.

## <a name="onscrollhorz"></a> CMFCRibbonCategory::OnScrollHorz

Scrolls the ribbon category in the horizontal direction.

```
virtual BOOL OnScrollHorz(
    BOOL bScrollLeft,
    int nScrollOffset = 0);
```

### Parameters

*bScrollLeft*<br/>
[in] TRUE to scroll to the left; FALSE to scroll to the right.

*nScrollOffset*<br/>
[in] The scroll distance in pixels.

### Return Value

TRUE if the ribbon category moved in a horizontal direction; otherwise FALSE.

### Remarks

## <a name="onupdatecmdui"></a> CMFCRibbonCategory::OnUpdateCmdUI

Calls the `OnUpdateCmdUI` member function in each of the `CMFCRibbonPanel` elements of the `CMFCRibbonCategory` to enable or disable the user-interface elements in them.

```
virtual void OnUpdateCmdUI(
    CMFCRibbonCmdUI* pCmdUI,
    CFrameWnd* pTarget,
    BOOL bDisableIfNoHndler);
```

### Parameters

*pCmdUI*<br/>
[in] Pointer to the `CMFCRibbonCmdUI` object that specifies which user-interface elements are to be enabled and which are to be disabled.

*pTarget*<br/>
[in] Pointer to the window that controls the enabling or disabling of the user-interface elements.

*bDisableIfNoHndler*<br/>
[in] TRUE to disable the user-interface item if no handler is defined in a message map; otherwise, FALSE.

### Remarks

## <a name="recalclayout"></a> CMFCRibbonCategory::RecalcLayout

Adjusts the layout of all controls on the ribbon category.

```
virtual void RecalcLayout(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the ribbon category.

### Remarks

## <a name="removepanel"></a> CMFCRibbonCategory::RemovePanel

Removes a ribbon panel from the ribbon category.

```cpp
BOOL RemovePanel(
    int nIndex,
    BOOL bDelete = TRUE);
```

### Parameters

*nIndex*<br/>
[in] The index number of the panel to remove. Obtained by calling the [CMFCRibbonCategory::GetPanelIndex](#getpanelindex) method.

*bDelete*<br/>
[in] TRUE to delete the panel object from memory; FALSE to remove the panel object without deleting it.

### Return Value

TRUE if the method was successful; otherwise, FALSE.

## <a name="repospanels"></a> CMFCRibbonCategory::ReposPanels

Adjusts the layout of all controls on the ribbon panels that are contained in the ribbon category.

```
virtual void ReposPanels(CDC* pDC);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context for the ribbon panels that are contained in the ribbon category.

### Remarks

## <a name="setcollapseorder"></a> CMFCRibbonCategory::SetCollapseOrder

Defines the order in which the ribbon panels of the ribbon category collapse.

```cpp
void SetCollapseOrder(const CArray<int,int>& arCollapseOrder);
```

### Parameters

*arCollapseOrder*<br/>
[in] Specifies the collapse order. The array contains zero-based indexes of ribbon panels.

### Remarks

The library defines the collapse order. However, you can customize this behavior by providing the category with the list of indexes that specifies the collapse order.

When the category detects that it has to collapse a ribbon panel, it looks for the next element in the specified list. If the list is empty, or you have not specified enough elements, then the category uses the internal algorithm.

For example, the category has three ribbon panels and can be collapsed several times until all panels are in the fully collapsed state. You can set the following collapse order: 0, 0, 2, 2. In this case, the category will collapse the panel 0 two times, the panel 2 two times. The panel that has the index of 1 remains uncollapsed.

### Example

The following example demonstrates how to use the `SetCollapseOrder` method in the `CMFCRibbonCategory` class. The example shows how to construct an array for the collapse order, and how to set the collapse order to the ribbon category.

[!code-cpp[NVC_MFC_RibbonApp#13](../../mfc/reference/codesnippet/cpp/cmfcribboncategory-class_2.cpp)]

## <a name="setdata"></a> CMFCRibbonCategory::SetData

Sets the user-defined data to be associated with the ribbon category.

```cpp
void SetData(DWORD_PTR dwData);
```

### Parameters

*dwData*<br/>
[in] The user-defined data.

## <a name="setkeys"></a> CMFCRibbonCategory::SetKeys

Assigns a keytip to the ribbon category.

```cpp
void SetKeys(LPCTSTR lpszKeys);
```

### Parameters

*lpszKeys*<br/>
[in] The keytip text.

### Remarks

Keytips are displayed when the user presses the Alt key or the F10 key.

## <a name="setname"></a> CMFCRibbonCategory::SetName

Assigns a name and keytip to the ribbon category.

```cpp
void SetName(LPCTSTR lpszName);
```

### Parameters

*lpszName*<br/>
[in] The name and keytip of the ribbon category.

### Remarks

To set the keytip for the ribbon category, append a newline escape sequence followed by the keytip characters to *lpszName*.

## <a name="settabcolor"></a> CMFCRibbonCategory::SetTabColor

Sets the color of the ribbon category.

```cpp
void SetTabColor(AFX_RibbonCategoryColor color);
```

### Parameters

*color*<br/>
[in] Specifies the new color of the ribbon category.

### Remarks

Color can be one of the following values:

- AFX_CategoryColor_None

- AFX_CategoryColor_Red

- AFX_CategoryColor_Orange

- AFX_CategoryColor_Yellow

- AFX_CategoryColor_Green

- AFX_CategoryColor_Blue

- AFX_CategoryColor_Indigo

- AFX_CategoryColor_Violet

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
