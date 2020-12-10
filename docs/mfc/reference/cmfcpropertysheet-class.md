---
description: "Learn more about: CMFCPropertySheet Class"
title: "CMFCPropertySheet Class"
ms.date: "11/19/2018"
f1_keywords: ["CMFCPropertySheet", "AFXPROPERTYSHEET/CMFCPropertySheet", "AFXPROPERTYSHEET/CMFCPropertySheet::CMFCPropertySheet", "AFXPROPERTYSHEET/CMFCPropertySheet::AddPage", "AFXPROPERTYSHEET/CMFCPropertySheet::AddPageToTree", "AFXPROPERTYSHEET/CMFCPropertySheet::AddTreeCategory", "AFXPROPERTYSHEET/CMFCPropertySheet::EnablePageHeader", "AFXPROPERTYSHEET/CMFCPropertySheet::GetHeaderHeight", "AFXPROPERTYSHEET/CMFCPropertySheet::GetLook", "AFXPROPERTYSHEET/CMFCPropertySheet::GetNavBarWidth", "AFXPROPERTYSHEET/CMFCPropertySheet::GetTab", "AFXPROPERTYSHEET/CMFCPropertySheet::InitNavigationControl", "AFXPROPERTYSHEET/CMFCPropertySheet::OnActivatePage", "AFXPROPERTYSHEET/CMFCPropertySheet::OnDrawPageHeader", "AFXPROPERTYSHEET/CMFCPropertySheet::OnRemoveTreePage", "AFXPROPERTYSHEET/CMFCPropertySheet::RemoveCategory", "AFXPROPERTYSHEET/CMFCPropertySheet::RemovePage", "AFXPROPERTYSHEET/CMFCPropertySheet::SetIconsList", "AFXPROPERTYSHEET/CMFCPropertySheet::SetLook"]
helpviewer_keywords: ["CMFCPropertySheet [MFC], CMFCPropertySheet", "CMFCPropertySheet [MFC], AddPage", "CMFCPropertySheet [MFC], AddPageToTree", "CMFCPropertySheet [MFC], AddTreeCategory", "CMFCPropertySheet [MFC], EnablePageHeader", "CMFCPropertySheet [MFC], GetHeaderHeight", "CMFCPropertySheet [MFC], GetLook", "CMFCPropertySheet [MFC], GetNavBarWidth", "CMFCPropertySheet [MFC], GetTab", "CMFCPropertySheet [MFC], InitNavigationControl", "CMFCPropertySheet [MFC], OnActivatePage", "CMFCPropertySheet [MFC], OnDrawPageHeader", "CMFCPropertySheet [MFC], OnRemoveTreePage", "CMFCPropertySheet [MFC], RemoveCategory", "CMFCPropertySheet [MFC], RemovePage", "CMFCPropertySheet [MFC], SetIconsList", "CMFCPropertySheet [MFC], SetLook"]
ms.assetid: 01d93573-9698-440f-a6a4-5bebbee879dc
---
# CMFCPropertySheet Class

The `CMFCPropertySheet` class supports a property sheet where each property page is denoted by a page tab, a toolbar button, a tree control node, or a list item.

## Syntax

```
class CMFCPropertySheet : public CPropertySheet
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCPropertySheet::CMFCPropertySheet](#cmfcpropertysheet)|Constructs a `CMFCPropertySheet` object.|
|`CMFCPropertySheet::~CMFCPropertySheet`|Destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCPropertySheet::AddPage](#addpage)|Adds a page to the property sheet.|
|[CMFCPropertySheet::AddPageToTree](#addpagetotree)|Adds a new property page to the tree control.|
|[CMFCPropertySheet::AddTreeCategory](#addtreecategory)|Adds a new node to the tree control.|
|[CMFCPropertySheet::EnablePageHeader](#enablepageheader)|Reserves space at the top of each page to draw a custom header.|
|[CMFCPropertySheet::GetHeaderHeight](#getheaderheight)|Retrieves the height of the current header.|
|[CMFCPropertySheet::GetLook](#getlook)|Retrieves an enumeration value that specifies the appearance of the current property sheet.|
|[CMFCPropertySheet::GetNavBarWidth](#getnavbarwidth)|Retries the width of the navigation bar in pixels.|
|[CMFCPropertySheet::GetTab](#gettab)|Retrieves the internal tab control object that supports the current property sheet control.|
|`CMFCPropertySheet::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|
|[CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol)|Initializes the appearance of the current property sheet control.|
|[CMFCPropertySheet::OnActivatePage](#onactivatepage)|Called by the framework when a property page is enabled.|
|[CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader)|Called by the framework to draw a custom property page header.|
|`CMFCPropertySheet::OnInitDialog`|Handles the [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) message. (Overrides [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#oninitdialog).)|
|[CMFCPropertySheet::OnRemoveTreePage](#onremovetreepage)|Called by the framework to remove a property page from a tree control.|
|`CMFCPropertySheet::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions. (Overrides `CPropertySheet::PreTranslateMessage`.)|
|[CMFCPropertySheet::RemoveCategory](#removecategory)|Removes a node from the tree control.|
|[CMFCPropertySheet::RemovePage](#removepage)|Removes a property page from the property sheet.|
|[CMFCPropertySheet::SetIconsList](#seticonslist)|Specifies the list of images that are used in the navigation control of the Outlook pane.|
|[CMFCPropertySheet::SetLook](#setlook)|Specifies the appearance of the property sheet.|

## Remarks

The `CMFCPropertySheet` class represents property sheets, also known as tab dialog boxes. The `CMFCPropertySheet` class can display a property page in a variety of ways.

Perform the following steps to use the `CMFCPropertySheet` class in your application:

1. Derive a class from the `CMFCPropertySheet` class and name the class, for example, CMyPropertySheet.

1. Construct a [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) object for each property page.

1. Call the [CMFCPropertySheet::SetLook](#setlook) method in the CMyPropertySheet constructor. A parameter of that method specifies that property pages shall be displayed either as tabs along the top or left of the property sheet; tabs in the style of a Microsoft OneNote property sheet; buttons on a Microsoft Outlook toolbar control; nodes on a tree control; or as a list of items on the left side of the property sheet.

1. If you create a property sheet in the style of a Microsoft Outlook toolbar, call the [CMFCPropertySheet::SetIconsList](#seticonslist) method to associate an image list together with the property pages.

1. Call the [CMFCPropertySheet::AddPage](#addpage) method for each property page.

1. Create a `CMFCPropertySheet` control and call its `DoModal` method.

## Illustrations

The following illustration depicts a property sheet that is in the style of an embedded Microsoft Outlook toolbar. The Outlook toolbar appears on the left side of the property sheet.

![CMFCPropertySheet color controls](../../mfc/reference/media/cmfcpropertysheet_color.png "CMFCPropertySheet color controls")

The following illustration depicts a property sheet that contains a [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) object. That object is a property sheet in the style of a standard common controls property sheet.

![CMFCPropertySheet list and property controls](../../mfc/reference/media/cmfcpropertysheet_list.png "CMFCPropertySheet list and property controls")

The following illustration depicts a property sheet that is in the style of a tree control.

![Property Tree](../../mfc/reference/media/proptree.png "Property Tree")

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CPropertySheet](../../mfc/reference/cpropertysheet-class.md)

[CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)

## Requirements

**Header:** afxpropertysheet.h

## <a name="addpage"></a> CMFCPropertySheet::AddPage

Adds a page to the property sheet.

```cpp
void AddPage(CPropertyPage* pPage);
```

### Parameters

*pPage*<br/>
[in] Pointer to a page object. This parameter cannot be NULL.

### Remarks

This method adds the specified property page as the rightmost tab in the property sheet. Therefore, use this method to add pages in left-to-right order.

If the property sheet is in the style of Microsoft Outlook, the framework displays a list of navigation buttons at the left of the property sheet. After this method adds a property page, it adds a corresponding button to the list. To display a property page, click its corresponding button. For more information about styles of property sheets, see [CMFCPropertySheet::SetLook](#setlook).

## <a name="addpagetotree"></a> CMFCPropertySheet::AddPageToTree

Adds a new property page to the tree control.

```cpp
void AddPageToTree(
    CMFCPropertySheetCategoryInfo* pCategory,
    CMFCPropertyPage* pPage,
    int nIconNum=-1,
    int nSelIconNum=-1);
```

### Parameters

*pCategory*<br/>
[in] Pointer to a parent tree node, or NULL to associate the specified page with the top-level node. Call the [CMFCPropertySheet::AddTreeCategory](#addtreecategory) method to obtain this pointer.

*pPage*<br/>
[in] Pointer to a property page object.

*nIconNum*<br/>
[in] Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is not selected. The default value is -1.

*nSelIconNum*<br/>
[in] Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is selected. The default value is -1.

### Remarks

This method adds a property page as a leaf of a tree control. To add a property page, create a `CMFCPropertySheet` object, call the [CMFCPropertySheet::SetLook](#setlook) method with the *look* parameter set to `CMFCPropertySheet::PropSheetLook_Tree`, and then use this method to add the property page.

## <a name="addtreecategory"></a> CMFCPropertySheet::AddTreeCategory

Adds a new node to the tree control.

```
CMFCPropertySheetCategoryInfo* AddTreeCategory(
    LPCTSTR lpszLabel,
    int nIconNum=-1,
    int nSelectedIconNum=-1,
    const CMFCPropertySheetCategoryInfo* pParentCategory=NULL);
```

### Parameters

*lpszLabel*<br/>
[in] The name of the node.

*nIconNum*<br/>
[in] Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is not selected. The default value is -1.

*nSelectedIconNum*<br/>
[in] Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is selected. The default value is -1.

*pParentCategory*<br/>
[in] Pointer to a parent tree node, or NULL to associate the specified page with the top-level node. Set this parameter with the [CMFCPropertySheet::AddTreeCategory](#addtreecategory) method.

### Return Value

A pointer to the new node in the tree control.

### Remarks

Use this method to add a new node, which is also referred to as a category, to the tree control. To add a node, create a `CMFCPropertySheet` object, call the [CMFCPropertySheet::SetLook](#setlook) method with the *look* parameter set to `CMFCPropertySheet::PropSheetLook_Tree`, and then use this method to add the node.

Use the return value of this method in subsequent calls to [CMFCPropertySheet::AddPageToTree](#addpagetotree) and [CMFCPropertySheet::AddTreeCategory](#addtreecategory).

## <a name="cmfcpropertysheet"></a> CMFCPropertySheet::CMFCPropertySheet

Constructs a `CMFCPropertySheet` object.

```
CMFCPropertySheet(
    UINT nIDCaption,
    CWnd* pParentWnd=NULL,
    UINT iSelectPage=0);

CMFCPropertySheet(
    LPCTSTR pszCaption,
    CWnd* pParentWnd=NULL,
    UINT iSelectPage=0);
```

### Parameters

*pszCaption*<br/>
[in] A string that contains the property sheet caption. Cannot be NULL.

*nIDCaption*<br/>
[in] A resource ID that contains the property sheet caption.

*pParentWnd*<br/>
[in] Pointer to the parent window of the property sheet, or NULL if the parent window is the main window of the application. The default value is NULL.

*iSelectPage*<br/>
[in] The zero-based index of the top property page. The default value is 0.

### Remarks

For more information, see the parameters for the [CPropertySheet::CPropertySheet](../../mfc/reference/cpropertysheet-class.md#cpropertysheet) constructor.

## <a name="enablepageheader"></a> CMFCPropertySheet::EnablePageHeader

Reserves space at the top of each page to draw a custom header.

```cpp
void EnablePageHeader(int nHeaderHeight);
```

### Parameters

*nHeaderHeight*<br/>
[in] The height of the header, in pixels.

### Remarks

To use the value of the *nHeaderHeight* parameter to draw a custom header, override the [CMFCPropertySheet::OnDrawPageHeader](#ondrawpageheader) method.

## <a name="getheaderheight"></a> CMFCPropertySheet::GetHeaderHeight

Retrieves the height of the current header.

```
int GetHeaderHeight() const;
```

### Return Value

The height of the header, in pixels.

### Remarks

Call the [CMFCPropertySheet::EnablePageHeader](#enablepageheader) method before you call this method.

## <a name="getlook"></a> CMFCPropertySheet::GetLook

Retrieves an enumeration value that specifies the appearance of the current property sheet.

```
PropSheetLook GetLook() const;
```

### Return Value

One of the enumeration values that specifies the appearance of the property sheet. For a list of possible values, see the enumeration table in the Remarks section of [CMFCPropertySheet::SetLook](#setlook).

## <a name="getnavbarwidth"></a> CMFCPropertySheet::GetNavBarWidth

Gets the width of the navigation bar.

```
int GetNavBarWidth() const;
```

### Return Value

The width of the navigation bar in pixels.

## <a name="gettab"></a> CMFCPropertySheet::GetTab

Retrieves the internal tab control object that supports the current property sheet control.

```
CMFCTabCtrl& GetTab() const;
```

### Return Value

An internal tab control object.

### Remarks

You can set a property sheet so that it appears in different styles, such as a tree control, a list of navigation buttons, or a set of tabbed pages.

Before you call this method, call the [CMFCPropertySheet::SetLook](#setlook) method to set the appearance of the property sheet control. Then call the [CMFCPropertySheet::InitNavigationControl](#initnavigationcontrol) method to initialize the internal tab control object. Use this method to retrieve the tab control object and then use that object to work with the tabs on the property sheet.

This method asserts in debug mode if the property sheet control is not set to appear in the style of Microsoft OneNote.

## <a name="initnavigationcontrol"></a> CMFCPropertySheet::InitNavigationControl

Initializes the appearance of the current property sheet control.

```
virtual CWnd* InitNavigationControl();
```

### Return Value

A pointer to the window of the property sheet control.

### Remarks

A property sheet control can appear in several different forms, such as a set of tabbed pages, a tree control, or a list of navigation buttons. Use the [CMFCPropertySheet::SetLook](#setlook) method to specify the appearance of the property sheet control.

## <a name="onactivatepage"></a> CMFCPropertySheet::OnActivatePage

Called by the framework when a property page is enabled.

```
virtual void OnActivatePage(CPropertyPage* pPage);
```

### Parameters

*pPage*<br/>
[in] Pointer to a property page object that represents the enabled property page.

### Remarks

By default, this method ensures that the enabled property page is scrolled into view. If the style of the current property sheet contains a Microsoft Outlook pane, this method sets the corresponding Outlook button to the checked state.

## <a name="ondrawpageheader"></a> CMFCPropertySheet::OnDrawPageHeader

Called by the framework to draw the header for a custom property page.

```
virtual void OnDrawPageHeader(
    CDC* pDC,
    int nPage,
    CRect rectHeader);
```

### Parameters

*pDC*<br/>
[in] Pointer to a device context.

*nPage*<br/>
[in] The zero-based property page number.

*rectHeader*<br/>
[in] A bounding rectangle that specifies where to draw the header.

### Remarks

By default, this method does nothing. If you override this method, call the [CMFCPropertySheet::EnablePageHeader](#enablepageheader) method before the framework calls this method.

## <a name="onremovetreepage"></a> CMFCPropertySheet::OnRemoveTreePage

Called by the framework to remove a property page from a tree control.

```
virtual BOOL OnRemoveTreePage(CPropertyPage* pPage);
```

### Parameters

*pPage*<br/>
[in] Pointer to a property page object that represents the property page to remove.

### Return Value

TRUE if this method is successful; otherwise, FALSE.

## <a name="removecategory"></a> CMFCPropertySheet::RemoveCategory

Removes a node from the tree control.

```cpp
void RemoveCategory(CMFCPropertySheetCategoryInfo* pCategory);
```

### Parameters

*pCategory*<br/>
[in] Pointer to a category (node) to remove.

### Remarks

Use this method to remove a node, which is also referred to as a category, from a tree control. Use the [CMFCPropertySheet::AddTreeCategory](#addtreecategory) method to add a node to a tree control.

## <a name="removepage"></a> CMFCPropertySheet::RemovePage

Removes a property page from the property sheet.

```cpp
void RemovePage(CPropertyPage* pPage);
void RemovePage(int nPage);
```

### Parameters

*pPage*<br/>
[in] Pointer to property page object that represents the property page to remove. Cannot be NULL.

*nPage*<br/>
[in] Zero-based index of the page to remove.

### Remarks

This method removes the specified property page and destroys its associated window. The property page object that the *pPage* parameter specifies is not destroyed until the [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) window is closed.

## <a name="seticonslist"></a> CMFCPropertySheet::SetIconsList

Specifies the list of images that are used in the navigation control of the Outlook pane.

```
BOOL SetIconsList(
    UINT uiImageListResID,
    int cx,
    COLORREF clrTransparent=RGB(255, 0, 255));
void SetIconsList(HIMAGELIST hIcons);
```

### Parameters

*uiImageListResID*<br/>
[in] The resource ID of an image list.

*cx*<br/>
[in] The width, in pixels, of icons in the image list.

*clrTransparent*<br/>
[in] The transparent image color. The parts of the image that are this color will be transparent. The default value is the color magenta, RGB(255,0,255).

*hIcons*<br/>
[in] A handle to an existing image list.

### Return Value

In the first method overload syntax, TRUE if this method is successful; otherwise, FALSE.

### Remarks

If the property sheet is in the style of Microsoft Outlook, the framework displays a list of navigation buttons, called the Outlook pane control, at the left of the property sheet. Use this method to set the image list to be used by the Outlook pane control.

For more information about the methods that support this method, see [CImageList::Create](../../mfc/reference/cimagelist-class.md#create) and [CImageList::Add](../../mfc/reference/cimagelist-class.md#add). For more information about how to set the style of a property sheet, see [CMFCPropertySheet::SetLook](#setlook).

## <a name="setlook"></a> CMFCPropertySheet::SetLook

Specifies the appearance of the property sheet.

```cpp
void SetLook(
    PropSheetLook look,
    int nNavControlWidth=100);
```

### Parameters

*look*<br/>
[in] One of the enumeration values that specifies the appearance of the property sheet. The default style for a property sheet is `CMFCPropertySheet::PropSheetLook_Tabs`. For more information, see the table in the Remarks section of this topic.

*nNavControlWidth*<br/>
[in] The width of the navigation control, in pixels. The default value is 100.

### Remarks

To display a property sheet in a style other than the default, call this method before you create the property sheet window.

The following table lists the enumeration values that can be specified in the *look* parameter.

|Value|Description|
|-----------|-----------------|
|`CMFCPropertySheet::PropSheetLook_Tabs`|(Default) Displays a tab for each property page. Tabs are displayed at the top of the property sheet and are stacked if there are more tabs than will fit in a single row.|
|`CMFCPropertySheet::PropSheetLook_OutlookBar`|Displays a list of navigation buttons, in the style of the Microsoft Outlook bar, at the left side of the property sheet. Each button in the list corresponds to a property page. The framework displays scroll arrows if there are more buttons than will fit in the visible area of the list.|
|`CMFCPropertySheet::PropSheetLook_Tree`|Displays a tree control at the left side of the property sheet. Each parent or child node of the tree control corresponds to a property page. The framework displays scroll arrows if there are more nodes than will fit in the visible area of the tree control.|
|`CMFCPropertySheet::PropSheetLook_OneNoteTabs`|Displays a tab, in the style of Microsoft OneNote, for each property page. The framework displays tabs at the top of the property sheet and scroll arrows if there are more tabs than will fit in a single row.|
|`CMFCPropertySheet::PropSheetLook_List`|Displays a list at the left side of the property sheet. Each list item corresponds to a property page. The framework displays scroll arrows if there are more list items than will fit in the visible area of the list.|

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCPropertyPage Class](../../mfc/reference/cmfcpropertypage-class.md)<br/>
[CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)
