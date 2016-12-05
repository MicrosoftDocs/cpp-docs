---
title: "CMFCRibbonGallery Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonGallery"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonGallery class"
ms.assetid: 9734c9c9-981c-4b3f-8c59-264fd41811b4
caps.latest.revision: 28
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
# CMFCRibbonGallery Class
Implements Office 2007-style ribbon galleries.  
  
## Syntax  
  
```  
class CMFCRibbonGallery : public CMFCRibbonButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonGallery::CMFCRibbonGallery](#cmfcribbongallery__cmfcribbongallery)|Constructs and initializes a `CMFCRibbonGallery` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonGallery::AddGroup](#cmfcribbongallery__addgroup)|Adds a new group to the gallery.|  
|[CMFCRibbonGallery::AddSubItem](#cmfcribbongallery__addsubitem)|Adds a new menu item to the drop-down menu.|  
|[CMFCRibbonGallery::Clear](#cmfcribbongallery__clear)|Clears the content of the gallery.|  
|[CMFCRibbonGallery::EnableMenuResize](#cmfcribbongallery__enablemenuresize)|Enables or disables resizing of the menu panel.|  
|[CMFCRibbonGallery::EnableMenuSideBar](#cmfcribbongallery__enablemenusidebar)|Enables or disables the side bar to the left of the popup menu.|  
|[CMFCRibbonGallery::GetCompactSize](#cmfcribbongallery__getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__getcompactsize).)|  
|[CMFCRibbonGallery::GetDroppedDown](#cmfcribbongallery__getdroppeddown)|(Overrides [CMFCRibbonBaseElement::GetDroppedDown](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__getdroppeddown).)|  
|[CMFCRibbonGallery::GetGroupName](#cmfcribbongallery__getgroupname)|Returns the name of the group that is located at the specified index.|  
|[CMFCRibbonGallery::GetGroupOffset](#cmfcribbongallery__getgroupoffset)||  
|[CMFCRibbonGallery::GetIconsInRow](#cmfcribbongallery__geticonsinrow)|Returns the number of items in a row of the ribbon gallery.|  
|[CMFCRibbonGallery::GetItemToolTip](#cmfcribbongallery__getitemtooltip)|Returns the tooltip text that is associated with an item in the gallery.|  
|[CMFCRibbonGallery::GetLastSelectedItem](#cmfcribbongallery__getlastselecteditem)|Returns the index of the last item in the gallery that the user selected.|  
|[CMFCRibbonGallery::GetPaletteID](#cmfcribbongallery__getpaletteid)|Returns the command ID of the current gallery.|  
|[CMFCRibbonGallery::GetRegularSize](#cmfcribbongallery__getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__getregularsize).)|  
|[CMFCRibbonGallery::GetSelectedItem](#cmfcribbongallery__getselecteditem)||  
|[CMFCRibbonGallery::HasMenu](#cmfcribbongallery__hasmenu)|(Overrides [CMFCRibbonButton::HasMenu](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__hasmenu).)|  
|[CMFCRibbonGallery::IsButtonMode](#cmfcribbongallery__isbuttonmode)|Specifies whether the gallery is contained in a gallery button.|  
|[CMFCRibbonGallery::IsMenuResizeEnabled](#cmfcribbongallery__ismenuresizeenabled)|Specifies whether menu resizing is enabled or disabled.|  
|[CMFCRibbonGallery::IsMenuResizeVertical](#cmfcribbongallery__ismenuresizevertical)||  
|[CMFCRibbonGallery::IsMenuSideBar](#cmfcribbongallery__ismenusidebar)|Specifies whether the side bar is enabled or disabled.|  
|[CMFCRibbonGallery::OnAfterChangeRect](#cmfcribbongallery__onafterchangerect)|(Overrides `CMFCRibbonButton::OnAfterChangeRect`.)|  
|[CMFCRibbonGallery::OnDraw](#cmfcribbongallery__ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__ondraw).)|  
|[CMFCRibbonGallery::OnEnable](#cmfcribbongallery__onenable)|(Overrides `CMFCRibbonBaseElement::OnEnable`.)|  
|[CMFCRibbonGallery::OnRTLChanged](#cmfcribbongallery__onrtlchanged)|(Overrides [CMFCRibbonBaseElement::OnRTLChanged](../../mfc/reference/cmfcribbonbaseelement-class.md#cmfcribbonbaseelement__onrtlchanged).)|  
|[CMFCRibbonGallery::RedrawIcons](#cmfcribbongallery__redrawicons)|Redraws the gallery.|  
|[CMFCRibbonGallery::RemoveItemToolTips](#cmfcribbongallery__removeitemtooltips)|Removes the tooltips from all items in the gallery.|  
|[CMFCRibbonGallery::SelectItem](#cmfcribbongallery__selectitem)||  
|[CMFCRibbonGallery::SetACCData](#cmfcribbongallery__setaccdata)|(Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#cmfcribbonbutton__setaccdata).)|  
|[CMFCRibbonGallery::SetButtonMode](#cmfcribbongallery__setbuttonmode)|Specifies whether to display the ribbon gallery as a drop-down button or as a palette directly on the ribbon.|  
|[CMFCRibbonGallery::SetGroupName](#cmfcribbongallery__setgroupname)|Sets the name of a group.|  
|[CMFCRibbonGallery::SetIconsInRow](#cmfcribbongallery__seticonsinrow)|Defines the number of items per row in the gallery.|  
|[CMFCRibbonGallery::SetItemToolTip](#cmfcribbongallery__setitemtooltip)|Sets the tooltip text for an item in the gallery.|  
|[CMFCRibbonGallery::SetPalette](#cmfcribbongallery__setpalette)|Attaches a palette to a ribbon gallery.|  
|[CMFCRibbonGallery::SetPaletteID](#cmfcribbongallery__setpaletteid)|Defines the command ID that is sent in the `WM_COMMAND` message when a gallery item has been selected.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonGallery::OnDrawPaletteIcon](#cmfcribbongallery__ondrawpaletteicon)|Called by the framework when a gallery icon is drawn.|  
  
## Remarks  
 A gallery button behaves just like a regular menu button except that it displays a gallery when a user opens it. When you select an item in a gallery, the framework sends the `WM_COMMAND` message together with command ID of the button. When you handle the message, you should call [CMFCRibbonGallery::GetLastSelectedItem](#cmfcribbongallery__getlastselecteditem) to determine which item was selected from the gallery.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonGallery` class to configure a `CMFCRibbonGallery` object. The example illustrates how to specify the number of items per row in the gallery, enable resizing of the menu panel, enable the side bar to the left of the pop-up menu, and display the ribbon gallery as a palette directly on the ribbon bar. This code snippet is part of the [Draw Client sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#6](../../mfc/reference/codesnippet/cpp/cmfcribbongallery-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md) [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md) [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
## Requirements  
 **Header:** afxRibbonPaletteGallery.h  
  
##  <a name="cmfcribbongallery__addgroup"></a>  CMFCRibbonGallery::AddGroup  
 Adds a new group to the gallery.  
  
```  
void AddGroup(
    LPCTSTR lpszGroupName,  
    UINT uiImagesPaletteResID,  
    int cxPaletteImage);

 
void AddGroup(
    LPCTSTR lpszGroupName,  
    CMFCToolBarImages& imagesGroup);

 
void AddGroup(
    LPCTSTR lpszGroupName,  
    int nIconsNum);
```  
  
### Parameters  
 [in] `lpszGroupName`  
 Specifies the name of the group.  
  
 [in] `uiImagesPaletteResID`  
 Specifies the resource ID of the image list that contains the images for the group.  
  
 [in] `cxPaletteImage`  
 Specifies the width in pixels of an image.  
  
 [in] `imagesGroup`  
 A reference to image list that contains group images.  
  
 [in] `nIconsNum`  
 Specifies the number of icons in the group. This parameter should be specified only for custom (owner drawn) groups.  
  
### Remarks  
 You can divide the items on a ribbon gallery into multiple groups by calling this method. Each group can have a caption.  
  
##  <a name="cmfcribbongallery__addsubitem"></a>  CMFCRibbonGallery::AddSubItem  
 Adds a new menu item to the drop-down menu.  
  
```  
void AddSubItem(
    CMFCRibbonBaseElement* pSubItem,  
    int nIndex=-1,  
    BOOL bOnTop=FALSE);
```  
  
### Parameters  
 [in] `pSubItem`  
 A pointer to the item to add to the menu.  
  
 [in] `nIndex`  
 Specifies the zero-based index of a location where to insert the item.  
  
 [in] `bOnTop`  
 `TRUE` to specify that the item should be inserted before the ribbon gallery; otherwise, `FALSE`.  
  
### Remarks  
 You can combine popup galleries with popup menu items by calling this method. Menu items can be placed before or after the gallery.  
  
 To insert the item before the gallery, set `bOnTop` to `TRUE`. Set `bOnTop` to `FALSE` to insert the item below the gallery.  
  
> [!NOTE]
>  The parameter `nIndex` specifies the insertion index both at the top of the gallery and at the bottom of the gallery. For example, if you need to insert an item one position before the gallery, set `nIndex` to 1 and `bOnTop` to `TRUE`. Similarly, if you need to insert an item one position below the gallery, set `nIndex` to 1 and `bOnTop` to `FALSE`.  
  
##  <a name="cmfcribbongallery__clear"></a>  CMFCRibbonGallery::Clear  
 Clears the content of the gallery.  
  
```  
virtual void Clear();
```  
  
### Remarks  
 Call this method to remove all content from the ribbon gallery. This must be done before you attach a new ribbon gallery or set of groups to the ribbon gallery.  
  
##  <a name="cmfcribbongallery__cmfcribbongallery"></a>  CMFCRibbonGallery::CMFCRibbonGallery  
 Constructs and initializes a [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md) object.  
  
```  
CMFCRibbonGallery (
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex,  
    int nLargeImageIndex,  
    CMFCToolBarImages& imagesPalette);

 
CMFCRibbonGallery (
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex,  
    int nLargeImageIndex,  
    UINT uiImagesPaletteResID=0,  
    int cxPaletteImage=0);

 
CMFCRibbonGallery (
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex,  
    int nLargeImageIndex,  
    CSize sizeIcon,  
    int nIconsNum,  
    BOOL bDefaultButtonStyle=TRUE);
```  
  
### Parameters  
 `nID`  
 Specifies the command ID of the command to execute when a user clicks the button.  
  
 `lpszText`  
 Specifies the text to appear on the button.  
  
 `nSmallImageIndex`  
 The zero-based index of the small image to appear on the button.  
  
 `nLargeImageIndex`  
 The zero-based index of the large image to appear on the button.  
  
 `imagesPalette`  
 A reference to the [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) object that contains the images to appear on the gallery.  
  
 `uiImagesPaletteResID`  
 The resource ID of the list of images to display on the gallery.  
  
 `cxPaletteImage`  
 Specifies the width, in pixels, of the image on the gallery.  
  
 `sizeIcon`  
 Specifies the size, in pixels, of the gallery image.  
  
 `nIconsNum`  
 Specifies the number of icons in the gallery.  
  
 `bDefaultButtonStyle`  
 Specifies whether to use the default or the owner-drawn button style.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__enablemenuresize"></a>  CMFCRibbonGallery::EnableMenuResize  
 Enables or disables resizing of the menu panel.  
  
```  
void EnableMenuResize(
    BOOL bEnable = TRUE,  
    BOOL bVertcalOnly = FALSE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable resizing the menu; otherwise, `FALSE`.  
  
 [in] `bVertcalOnly`  
 `TRUE` to specify that the gallery can be resized only vertically; `FALSE` to specify that the gallery can be resized both vertically and horizontally.  
  
### Remarks  
 Use this method to enable or disable resizing the ribbon gallery. When resizing is enabled, the ribbon gallery displays a gripper that a user can use to resize it.  
  
##  <a name="cmfcribbongallery__enablemenusidebar"></a>  CMFCRibbonGallery::EnableMenuSideBar  
 Enables or disables the side bar to the left of the popup menu.  
  
```  
void EnablMenuSideBar(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to specify that the side bar is enabled; otherwise, `FALSE`.  
  
### Remarks  
 Call this method to enable or disable the Office XP-style side bar at the left side of the menu.  
  
##  <a name="cmfcribbongallery__getcompactsize"></a>  CMFCRibbonGallery::GetCompactSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetCompactSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getdroppeddown"></a>  CMFCRibbonGallery::GetDroppedDown  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CMFCRibbonBaseElement* GetDroppedDown();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getgroupname"></a>  CMFCRibbonGallery::GetGroupName  
 Returns the name of the group that is located at the specified index.  
  
```  
LPCTSTR GetGroupName(int nGroupIndex) const;

 
```  
  
### Parameters  
 [in] `nGroupIndex`  
 Specifies the zero-based index for the group whose name you want to retrieve.  
  
### Return Value  
 The name of the group located at the specified index. Passing an invalid index will result in a failed assertion.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getgroupoffset"></a>  CMFCRibbonGallery::GetGroupOffset  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int GetGroupOffset() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__geticonsinrow"></a>  CMFCRibbonGallery::GetIconsInRow  
 Returns the number of items in a row of the ribbon gallery.  
  
```  
int GetIconsInRow() const;

 
```  
  
### Return Value  
 The number of items in a row.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getitemtooltip"></a>  CMFCRibbonGallery::GetItemToolTip  
 Returns the tooltip text that is associated with an item in the gallery.  
  
```  
LPCTSTR GetItemToolTip(int nItemIndex) const;

 
```  
  
### Parameters  
 [in] `nItemIndex`  
 Specifies the zero-based index of the item for which to retrieve the tooltip text.  
  
### Return Value  
 A pointer to the tooltip string assigned to an item in the ribbon gallery. It can be `NULL` if no tooltip is assigned to that item.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getlastselecteditem"></a>  CMFCRibbonGallery::GetLastSelectedItem  
 Returns the index of the last item in the ribbon gallery that the user selected.  
  
```  
static int GetLastSelectedItem(UINT uiCmdID);
```  
  
### Parameters  
 [in] `uiCmdID`  
 Specifies the command ID of the menu item that opened the ribbon gallery.  
  
### Return Value  
 When the user selects any item in the ribbon gallery, the library sends the `WM_COMMAND` message along with Command ID of the menu button that opened the ribbon gallery.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getpaletteid"></a>  CMFCRibbonGallery::GetPaletteID  
 Returns the command ID of the current palette.  
  
```  
int GetPaletteID() const;

 
```  
  
### Return Value  
 The command ID of the currently selected palette.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getregularsize"></a>  CMFCRibbonGallery::GetRegularSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CSize GetRegularSize(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__getselecteditem"></a>  CMFCRibbonGallery::GetSelectedItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetSelectedItem() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__hasmenu"></a>  CMFCRibbonGallery::HasMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasMenu() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__isbuttonmode"></a>  CMFCRibbonGallery::IsButtonMode  
 Specifies whether the palette is contained in a gallery button.  
  
```  
BOOL IsButtonMode() const;

 
```  
  
### Return Value  
 `TRUE` if the palette is displayed as a drop-down menu button; `FALSE` if the palette is displayed directly on the ribbon.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__ismenuresizeenabled"></a>  CMFCRibbonGallery::IsMenuResizeEnabled  
 Specifies whether menu resizing is enabled.  
  
```  
BOOL IsMenuResizeEnabled() const;

 
```  
  
### Return Value  
 `TRUE` if menu resizing has been enabled; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__ismenuresizevertical"></a>  CMFCRibbonGallery::IsMenuResizeVertical  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsMenuResizeVertical() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribbongallery__ismenusidebar"></a>  CMFCRibbonGallery::IsMenuSideBar  
 Specifies whether the side bar is enabled or disabled.  
  
```  
BOOL IsMenuSideBar() const;

 
```  
  
### Return Value  
 `TRUE` if the Office XP-style side bar is drawn at the left side of the popup menu; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__onafterchangerect"></a>  CMFCRibbonGallery::OnAfterChangeRect  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnAfterChangeRect(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbongallery__ondraw"></a>  CMFCRibbonGallery::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
  
### Remarks  
  
##  <a name="cmfcribbongallery__ondrawpaletteicon"></a>  CMFCRibbonGallery::OnDrawPaletteIcon  
 Called by the framework when a gallery icon is drawn.  
  
```  
virtual void OnDrawPaletteIcon(
    CDC* pDC,  
    CRect rectIcon,  
    int nIconIndex,  
    CMFCRibbonGalleryIcon* pIcon,  
    COLORREF clrText);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context that is used for drawing.  
  
 [in] `rectIcon`  
 Specifies the bounding rectangle of the icon to draw.  
  
 [in] `nIconIndex`  
 Specifies the zero-based index in the image list of gallery icons of the icon to draw.  
  
 [in] `pIcon`  
 A pointer to the icon being drawn.  
  
 [in] `clrText`  
 Specifies the color for the text of the item to draw.  
  
### Remarks  
 You can override this method in a derived class to customize the appearance of a ribbon gallery.  
  
##  <a name="cmfcribbongallery__onenable"></a>  CMFCRibbonGallery::OnEnable  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnEnable(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
  
### Remarks  
  
##  <a name="cmfcribbongallery__onrtlchanged"></a>  CMFCRibbonGallery::OnRTLChanged  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnRTLChanged(BOOL bIsRTL);
```  
  
### Parameters  
 [in] `bIsRTL`  
  
### Remarks  
  
##  <a name="cmfcribbongallery__redrawicons"></a>  CMFCRibbonGallery::RedrawIcons  
 Redraws the gallery.  
  
```  
void RedrawIcons();
```  
  
### Remarks  
 Call this function to redraw the gallery. You must call this method if you have changed the contents of the gallery at runtime.  
  
##  <a name="cmfcribbongallery__removeitemtooltips"></a>  CMFCRibbonGallery::RemoveItemToolTips  
 Removes the tooltips from all items in the gallery.  
  
```  
void RemoveItemToolTips();
```  
  
### Remarks  
  
##  <a name="cmfcribbongallery__selectitem"></a>  CMFCRibbonGallery::SelectItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SelectItem(int nItemIndex);
```  
  
### Parameters  
 [in] `nItemIndex`  
  
### Remarks  
  
##  <a name="cmfcribbongallery__setaccdata"></a>  CMFCRibbonGallery::SetACCData  
 Populates the specified `CAccessibilityData` object by using accessibility data from the ribbon gallery.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,   
    CAccessibilityData& data);
```  
  
### Parameters  
 [in] `pParent`  
 The parent window of the ribbon gallery window.  
  
 [out] `data`  
 A `CAccessibilityData` object that receives the accessibility data from the ribbon gallery.  
  
### Return Value  
  
### Remarks  
 `TRUE` if the method is successful; otherwise, `FALSE`.  
  
##  <a name="cmfcribbongallery__setbuttonmode"></a>  CMFCRibbonGallery::SetButtonMode  
 Determines whether to display the ribbon gallery as a drop-down button or as a palette directly on the ribbon.  
  
```  
void SetButtonMode(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` to display the ribbon gallery as a drop-down menu button; `FALSE` to display the contents of the ribbon gallery directly on the ribbon.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__setgroupname"></a>  CMFCRibbonGallery::SetGroupName  
 Sets the name of a group.  
  
```  
void SetGroupName(
    int nGroupIndex,  
    LPCTSTR lpszGroupName);
```  
  
### Parameters  
 [in] `nGroupIndex`  
 Specifies the zero-based index for the group for which the name is being changed.  
  
 [in] `lpszGroupName`  
 Specifies the new name for the group.  
  
### Remarks  
 The group whose name is being changed must have been added using the [CMFCRibbonGallery::AddGroup](#cmfcribbongallery__addgroup) method.  
  
##  <a name="cmfcribbongallery__seticonsinrow"></a>  CMFCRibbonGallery::SetIconsInRow  
 Specifies the number of items per row in the gallery.  
  
```  
void SetIconsInRow(int nIconsInRow);
```  
  
### Parameters  
 [in] `nIconsInRow`  
 Specifies the number of items to appear in each row of the gallery.  
  
### Remarks  
 Use this method to specify the width of the ribbon gallery.  
  
##  <a name="cmfcribbongallery__setitemtooltip"></a>  CMFCRibbonGallery::SetItemToolTip  
 Sets the tooltip text for an item in the gallery.  
  
```  
void SetItemToolTip(
    int nItemIndex,  
    LPCTSTR lpszToolTip);
```  
  
### Parameters  
 [in] `nItemIndex`  
 The zero-based index of the palette item with which to associate the tooltip.  
  
 [in] `lpszToolTip`  
 The text to appear on the tooltip.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__setpalette"></a>  CMFCRibbonGallery::SetPalette  
 Attaches a palette to a ribbon gallery.  
  
```  
void SetPalette(
    CMFCToolBarImages& imagesPalette);

 
void SetPalette(
    UINT uiImagesPaletteResID,  
    int cxPaletteImage);
```  
  
### Parameters  
 [in] `imagesPalette`  
 Specifies the image list that contains the icons to appear on the gallery.  
  
 [in] `uiImagesPaletteResID`  
 Specifies the resource ID of the image list that contains the icons to appear on the gallery.  
  
 [in] `cxPaletteImage`  
 Specifies the width, in pixels, of an image on the gallery.  
  
### Remarks  
  
##  <a name="cmfcribbongallery__setpaletteid"></a>  CMFCRibbonGallery::SetPaletteID  
 Defines the command ID that is sent in the **WM_COMMAND** message when a user selects a gallery item.  
  
```  
void SetPaletteID(UINT nID);
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command ID that is sent in the **WM_COMMAND** message when a user selects a gallery item.  
  
### Remarks  
 To determine the specific item that a user selected from the gallery, call the [CMFCRibbonGallery::GetLastSelectedItem](#cmfcribbongallery__getlastselecteditem) static method.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonGalleryMenuButton Class](../../mfc/reference/cmfcribbongallerymenubutton-class.md)
