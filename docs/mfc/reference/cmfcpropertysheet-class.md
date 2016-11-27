---
title: "CMFCPropertySheet Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPropertySheet"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPropertySheet::PreTranslateMessage method"
  - "CMFCPropertySheet::OnInitDialog method"
  - "CMFCPropertySheet class"
ms.assetid: 01d93573-9698-440f-a6a4-5bebbee879dc
caps.latest.revision: 35
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
|[CMFCPropertySheet::CMFCPropertySheet](#cmfcpropertysheet__cmfcpropertysheet)|Constructs a `CMFCPropertySheet` object.|  
|`CMFCPropertySheet::~CMFCPropertySheet`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertySheet::AddPage](#cmfcpropertysheet__addpage)|Adds a page to the property sheet.|  
|[CMFCPropertySheet::AddPageToTree](#cmfcpropertysheet__addpagetotree)|Adds a new property page to the tree control.|  
|[CMFCPropertySheet::AddTreeCategory](#cmfcpropertysheet__addtreecategory)|Adds a new node to the tree control.|  
|[CMFCPropertySheet::EnablePageHeader](#cmfcpropertysheet__enablepageheader)|Reserves space at the top of each page to draw a custom header.|  
|[CMFCPropertySheet::GetHeaderHeight](#cmfcpropertysheet__getheaderheight)|Retrieves the height of the current header.|  
|[CMFCPropertySheet::GetLook](#cmfcpropertysheet__getlook)|Retrieves an enumeration value that specifies the appearance of the current property sheet.|  
|[CMFCPropertySheet::GetNavBarWidth](#cmfcpropertysheet__getnavbarwidth)|Retries the width of the navigation bar in pixels.|  
|[CMFCPropertySheet::GetTab](#cmfcpropertysheet__gettab)|Retrieves the internal tab control object that supports the current property sheet control.|  
|`CMFCPropertySheet::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCPropertySheet::InitNavigationControl](#cmfcpropertysheet__initnavigationcontrol)|Initializes the appearance of the current property sheet control.|  
|[CMFCPropertySheet::OnActivatePage](#cmfcpropertysheet__onactivatepage)|Called by the framework when a property page is enabled.|  
|[CMFCPropertySheet::OnDrawPageHeader](#cmfcpropertysheet__ondrawpageheader)|Called by the framework to draw a custom property page header.|  
|`CMFCPropertySheet::OnInitDialog`|Handles the [WM_INITDIALOG](http://msdn.microsoft.com/library/windows/desktop/ms645428) message. (Overrides [CPropertySheet::OnInitDialog](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__oninitdialog).)|  
|[CMFCPropertySheet::OnRemoveTreePage](#cmfcpropertysheet__onremovetreepage)|Called by the framework to remove a property page from a tree control.|  
|`CMFCPropertySheet::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides `CPropertySheet::PreTranslateMessage`.)|  
|[CMFCPropertySheet::RemoveCategory](#cmfcpropertysheet__removecategory)|Removes a node from the tree control.|  
|[CMFCPropertySheet::RemovePage](#cmfcpropertysheet__removepage)|Removes a property page from the property sheet.|  
|[CMFCPropertySheet::SetIconsList](#cmfcpropertysheet__seticonslist)|Specifies the list of images that are used in the navigation control of the Outlook pane.|  
|[CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook)|Specifies the appearance of the property sheet.|  
  
## Remarks  
 The `CMFCPropertySheet` class represents property sheets, also known as tab dialog boxes. The `CMFCPropertySheet` class can display a property page in a variety of ways.  
  
 Perform the following steps to use the `CMFCPropertySheet` class in your application:  
  
1.  Derive a class from the `CMFCPropertySheet` class and name the class, for example, CMyPropertySheet.  
  
2.  Construct a [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md) object for each property page.  
  
3.  Call the [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook) method in the CMyPropertySheet constructor. A parameter of that method specifies that property pages shall be displayed either as tabs along the top or left of the property sheet; tabs in the style of a Microsoft OneNote property sheet; buttons on a Microsoft Outlook toolbar control; nodes on a tree control; or as a list of items on the left side of the property sheet.  
  
4.  If you create a property sheet in the style of a Microsoft Outlook toolbar, call the [CMFCPropertySheet::SetIconsList](#cmfcpropertysheet__seticonslist) method to associate an image list together with the property pages.  
  
5.  Call the [CMFCPropertySheet::AddPage](#cmfcpropertysheet__addpage) method for each property page.  
  
6.  Create a `CMFCPropertySheet` control and call its `DoModal` method.  
  
## Illustrations  
 The following illustration depicts a property sheet that is in the style of an embedded Microsoft Outlook toolbar. The Outlook toolbar appears on the left side of the property sheet.  
  
 ![CMFCPropertySheet color controls](../../mfc/reference/media/cmfcpropertysheet_color.png "cmfcpropertysheet_color")  
  
 The following illustration depicts a property sheet that contains a [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) object. That object is a property sheet in the style of a standard common controls property sheet.  
  
 ![CMFCPropertySheet list and property controls](../../mfc/reference/media/cmfcpropertysheet_list.png "cmfcpropertysheet_list")  
  
 The following illustration depicts a property sheet that is in the style of a tree control.  
  
 ![Peroperty Tree](../../mfc/reference/media/proptree.png "proptree")  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
## Requirements  
 **Header:** afxpropertysheet.h  
  
##  <a name="cmfcpropertysheet__addpage"></a>  CMFCPropertySheet::AddPage  
 Adds a page to the property sheet.  
  
```  
void AddPage(CPropertyPage* pPage);
```  
  
### Parameters  
 [in] `pPage`  
 Pointer to a page object. This parameter cannot be `NULL`.  
  
### Remarks  
 This method adds the specified property page as the rightmost tab in the property sheet. Therefore, use this method to add pages in left-to-right order.  
  
 If the property sheet is in the style of Microsoft Outlook, the framework displays a list of navigation buttons at the left of the property sheet. After this method adds a property page, it adds a corresponding button to the list. To display a property page, click its corresponding button. For more information about styles of property sheets, see [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook).  
  
##  <a name="cmfcpropertysheet__addpagetotree"></a>  CMFCPropertySheet::AddPageToTree  
 Adds a new property page to the tree control.  
  
```  
void AddPageToTree(
    CMFCPropertySheetCategoryInfo* pCategory,  
    CMFCPropertyPage* pPage,  
    int nIconNum=-1,  
    int nSelIconNum=-1);
```  
  
### Parameters  
 [in] `pCategory`  
 Pointer to a parent tree node, or `NULL` to associate the specified page with the top-level node. Call the [CMFCPropertySheet::AddTreeCategory](#cmfcpropertysheet__addtreecategory) method to obtain this pointer.  
  
 [in] `pPage`  
 Pointer to a property page object.  
  
 [in] `nIconNum`  
 Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is not selected. The default value is -1.  
  
 [in] `nSelIconNum`  
 Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is selected. The default value is -1.  
  
### Remarks  
 This method adds a property page as a leaf of a tree control. To add a property page, create a `CMFCPropertySheet` object, call the [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook) method with the `look` parameter set to `CMFCPropertySheet::PropSheetLook_Tree`, and then use this method to add the property page.  
  
##  <a name="cmfcpropertysheet__addtreecategory"></a>  CMFCPropertySheet::AddTreeCategory  
 Adds a new node to the tree control.  
  
```  
CMFCPropertySheetCategoryInfo* AddTreeCategory(
    LPCTSTR lpszLabel,  
    int nIconNum=-1,  
    int nSelectedIconNum=-1,  
    const CMFCPropertySheetCategoryInfo* pParentCategory=NULL);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The name of the node.  
  
 [in] `nIconNum`  
 Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is not selected. The default value is -1.  
  
 [in] `nSelectedIconNum`  
 Zero-based index of an icon, or -1 if no icon is used. The icon is displayed next to the tree control property page when the page is selected. The default value is -1.  
  
 [in] `pParentCategory`  
 Pointer to a parent tree node, or `NULL` to associate the specified page with the top-level node. Set this parameter with the [CMFCPropertySheet::AddTreeCategory](#cmfcpropertysheet__addtreecategory) method.  
  
### Return Value  
 A pointer to the new node in the tree control.  
  
### Remarks  
 Use this method to add a new node, which is also referred to as a category, to the tree control. To add a node, create a `CMFCPropertySheet` object, call the [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook) method with the `look` parameter set to `CMFCPropertySheet::PropSheetLook_Tree`, and then use this method to add the node.  
  
 Use the return value of this method in subsequent calls to [CMFCPropertySheet::AddPageToTree](#cmfcpropertysheet__addpagetotree) and [CMFCPropertySheet::AddTreeCategory](#cmfcpropertysheet__addtreecategory).  
  
##  <a name="cmfcpropertysheet__cmfcpropertysheet"></a>  CMFCPropertySheet::CMFCPropertySheet  
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
 [in] `pszCaption`  
 A string that contains the property sheet caption. Cannot be `NULL`.  
  
 [in] `nIDCaption`  
 A resource ID that contains the property sheet caption.  
  
 [in] `pParentWnd`  
 Pointer to the parent window of the property sheet, or `NULL` if the parent window is the main window of the application. The default value is `NULL`.  
  
 [in] `iSelectPage`  
 The zero-based index of the top property page. The default value is 0.  
  
### Remarks  
 For more information, see the parameters for the [CPropertySheet::CPropertySheet](../../mfc/reference/cpropertysheet-class.md#cpropertysheet__cpropertysheet) constructor.  
  
##  <a name="cmfcpropertysheet__enablepageheader"></a>  CMFCPropertySheet::EnablePageHeader  
 Reserves space at the top of each page to draw a custom header.  
  
```  
void EnablePageHeader(int nHeaderHeight);
```  
  
### Parameters  
 [in] `nHeaderHeight`  
 The height of the header, in pixels.  
  
### Remarks  
 To use the value of the `nHeaderHeight` parameter to draw a custom header, override the [CMFCPropertySheet::OnDrawPageHeader](#cmfcpropertysheet__ondrawpageheader) method.  
  
##  <a name="cmfcpropertysheet__getheaderheight"></a>  CMFCPropertySheet::GetHeaderHeight  
 Retrieves the height of the current header.  
  
```  
int GetHeaderHeight() const;

 
```  
  
### Return Value  
 The height of the header, in pixels.  
  
### Remarks  
 Call the [CMFCPropertySheet::EnablePageHeader](#cmfcpropertysheet__enablepageheader) method before you call this method.  
  
##  <a name="cmfcpropertysheet__getlook"></a>  CMFCPropertySheet::GetLook  
 Retrieves an enumeration value that specifies the appearance of the current property sheet.  
  
```  
PropSheetLook GetLook() const;

 
```  
  
### Return Value  
 One of the enumeration values that specifies the appearance of the property sheet. For a list of possible values, see the enumeration table in the Remarks section of [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook).  
  
##  <a name="cmfcpropertysheet__getnavbarwidth"></a>  CMFCPropertySheet::GetNavBarWidth  
 Gets the width of the navigation bar.  
  
```  
int GetNavBarWidth() const;

 
```  
  
### Return Value  
 The width of the navigation bar in pixels.  
  
##  <a name="cmfcpropertysheet__gettab"></a>  CMFCPropertySheet::GetTab  
 Retrieves the internal tab control object that supports the current property sheet control.  
  
```  
CMFCTabCtrl& GetTab() const;

 
```  
  
### Return Value  
 An internal tab control object.  
  
### Remarks  
 You can set a property sheet so that it appears in different styles, such as a tree control, a list of navigation buttons, or a set of tabbed pages.  
  
 Before you call this method, call the [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook) method to set the appearance of the property sheet control. Then call the [CMFCPropertySheet::InitNavigationControl](#cmfcpropertysheet__initnavigationcontrol) method to initialize the internal tab control object. Use this method to retrieve the tab control object and then use that object to work with the tabs on the property sheet.  
  
 This method asserts in debug mode if the property sheet control is not set to appear in the style of Microsoft OneNote.  
  
##  <a name="cmfcpropertysheet__initnavigationcontrol"></a>  CMFCPropertySheet::InitNavigationControl  
 Initializes the appearance of the current property sheet control.  
  
```  
virtual CWnd* InitNavigationControl();
```  
  
### Return Value  
 A pointer to the window of the property sheet control.  
  
### Remarks  
 A property sheet control can appear in several different forms, such as a set of tabbed pages, a tree control, or a list of navigation buttons. Use the [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook) method to specify the appearance of the property sheet control.  
  
##  <a name="cmfcpropertysheet__onactivatepage"></a>  CMFCPropertySheet::OnActivatePage  
 Called by the framework when a property page is enabled.  
  
```  
virtual void OnActivatePage(CPropertyPage* pPage);
```  
  
### Parameters  
 [in] `pPage`  
 Pointer to a property page object that represents the enabled property page.  
  
### Remarks  
 By default, this method ensures that the enabled property page is scrolled into view. If the style of the current property sheet contains a Microsoft Outlook pane, this method sets the corresponding Outlook button to the checked state.  
  
##  <a name="cmfcpropertysheet__ondrawpageheader"></a>  CMFCPropertySheet::OnDrawPageHeader  
 Called by the framework to draw the header for a custom property page.  
  
```  
virtual void OnDrawPageHeader(
    CDC* pDC,  
    int nPage,  
    CRect rectHeader);
```  
  
### Parameters  
 [in] `pDC`  
 Pointer to a device context.  
  
 [in] `nPage`  
 The zero-based property page number.  
  
 [in] `rectHeader`  
 A bounding rectangle that specifies where to draw the header.  
  
### Remarks  
 By default, this method does nothing. If you override this method, call the [CMFCPropertySheet::EnablePageHeader](#cmfcpropertysheet__enablepageheader) method before the framework calls this method.  
  
##  <a name="cmfcpropertysheet__onremovetreepage"></a>  CMFCPropertySheet::OnRemoveTreePage  
 Called by the framework to remove a property page from a tree control.  
  
```  
virtual BOOL OnRemoveTreePage(CPropertyPage* pPage);
```  
  
### Parameters  
 [in] `pPage`  
 Pointer to a property page object that represents the property page to remove.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
##  <a name="cmfcpropertysheet__removecategory"></a>  CMFCPropertySheet::RemoveCategory  
 Removes a node from the tree control.  
  
```  
void RemoveCategory(CMFCPropertySheetCategoryInfo* pCategory);
```  
  
### Parameters  
 [in] `pCategory`  
 Pointer to a category (node) to remove.  
  
### Remarks  
 Use this method to remove a node, which is also referred to as a category, from a tree control. Use the [CMFCPropertySheet::AddTreeCategory](#cmfcpropertysheet__addtreecategory) method to add a node to a tree control.  
  
##  <a name="cmfcpropertysheet__removepage"></a>  CMFCPropertySheet::RemovePage  
 Removes a property page from the property sheet.  
  
```  
void RemovePage(CPropertyPage* pPage);

void RemovePage(int nPage);
```  
  
### Parameters  
 [in] `pPage`  
 Pointer to property page object that represents the property page to remove. Cannot be `NULL`.  
  
 [in] `nPage`  
 Zero-based index of the page to remove.  
  
### Remarks  
 This method removes the specified property page and destroys its associated window. The property page object that the `pPage` parameter specifies is not destroyed until the [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) window is closed.  
  
##  <a name="cmfcpropertysheet__seticonslist"></a>  CMFCPropertySheet::SetIconsList  
 Specifies the list of images that are used in the navigation control of the Outlook pane.  
  
```  
BOOL SetIconsList(
    UINT uiImageListResID,  
    int cx,  
    COLORREF clrTransparent=RGB(255,
    0,
    255));

void SetIconsList(
    HIMAGELIST hIcons);
```  
  
### Parameters  
 [in] `uiImageListResID`  
 The resource ID of an image list.  
  
 [in] `cx`  
 The width, in pixels, of icons in the image list.  
  
 [in] `clrTransparent`  
 The transparent image color. The parts of the image that are this color will be transparent. The default value is the color magenta, RGB(255,0,255).  
  
 [in] `hIcons`  
 A handle to an existing image list.  
  
### Return Value  
 In the first method overload syntax, `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
 If the property sheet is in the style of Microsoft Outlook, the framework displays a list of navigation buttons, called the Outlook pane control, at the left of the property sheet. Use this method to set the image list to be used by the Outlook pane control.  
  
 For more information about the methods that support this method, see [CImageList::Create](../../mfc/reference/cimagelist-class.md#cimagelist__create) and [CImageList::Add](../../mfc/reference/cimagelist-class.md#cimagelist__add). For more information about how to set the style of a property sheet, see [CMFCPropertySheet::SetLook](#cmfcpropertysheet__setlook).  
  
##  <a name="cmfcpropertysheet__setlook"></a>  CMFCPropertySheet::SetLook  
 Specifies the appearance of the property sheet.  
  
```  
void SetLook(
    PropSheetLook look,  
    int nNavControlWidth=100);
```  
  
### Parameters  
 [in] `look`  
 One of the enumeration values that specifies the appearance of the property sheet. The default style for a property sheet is `CMFCPropertySheet::PropSheetLook_Tabs`. For more information, see the table in the Remarks section of this topic.  
  
 [in] `nNavControlWidth`  
 The width of the navigation control, in pixels. The default value is 100.  
  
### Remarks  
 To display a property sheet in a style other than the default, call this method before you create the property sheet window.  
  
 The following table lists the enumeration values that can be specified in the `look` parameter.  
  
|Value|Description|  
|-----------|-----------------|  
|`CMFCPropertySheet::PropSheetLook_Tabs`|(Default) Displays a tab for each property page. Tabs are displayed at the top of the property sheet and are stacked if there are more tabs than will fit in a single row.|  
|`CMFCPropertySheet::PropSheetLook_OutlookBar`|Displays a list of navigation buttons, in the style of the Microsoft Outlook bar, at the left side of the property sheet. Each button in the list corresponds to a property page. The framework displays scroll arrows if there are more buttons than will fit in the visible area of the list.|  
|`CMFCPropertySheet::PropSheetLook_Tree`|Displays a tree control at the left side of the property sheet. Each parent or child node of the tree control corresponds to a property page. The framework displays scroll arrows if there are more nodes than will fit in the visible area of the tree control.|  
|`CMFCPropertySheet::PropSheetLook_OneNoteTabs`|Displays a tab, in the style of Microsoft OneNote, for each property page. The framework displays tabs at the top of the property sheet and scroll arrows if there are more tabs than will fit in a single row.|  
|`CMFCPropertySheet::PropSheetLook_List`|Displays a list at the left side of the property sheet. Each list item corresponds to a property page. The framework displays scroll arrows if there are more list items than will fit in the visible area of the list.|  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyPage Class](../../mfc/reference/cmfcpropertypage-class.md)   
 [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)
