---
description: "Learn more about: CMFCRibbonGallery Class"
title: "CMFCRibbonGallery Class"
ms.date: "11/04/2016"
f1_keywords: ["CMFCRibbonGallery", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::CMFCRibbonGallery", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::AddGroup", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::AddSubItem", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::Clear", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::EnableMenuResize", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::EnableMenuSideBar", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetCompactSize", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetDroppedDown", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetGroupName", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetGroupOffset", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetIconsInRow", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetItemToolTip", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetLastSelectedItem", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetPaletteID", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetRegularSize", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::GetSelectedItem", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::HasMenu", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::IsButtonMode", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::IsMenuResizeEnabled", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::IsMenuResizeVertical", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::IsMenuSideBar", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::OnAfterChangeRect", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::OnDraw", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::OnEnable", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::OnRTLChanged", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::RedrawIcons", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::RemoveItemToolTips", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SelectItem", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetACCData", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetButtonMode", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetGroupName", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetIconsInRow", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetItemToolTip", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetPalette", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::SetPaletteID", "AFXRIBBONPALETTEGALLERY/CMFCRibbonGallery::OnDrawPaletteIcon"]
helpviewer_keywords: ["CMFCRibbonGallery [MFC], CMFCRibbonGallery", "CMFCRibbonGallery [MFC], AddGroup", "CMFCRibbonGallery [MFC], AddSubItem", "CMFCRibbonGallery [MFC], Clear", "CMFCRibbonGallery [MFC], EnableMenuResize", "CMFCRibbonGallery [MFC], EnableMenuSideBar", "CMFCRibbonGallery [MFC], GetCompactSize", "CMFCRibbonGallery [MFC], GetDroppedDown", "CMFCRibbonGallery [MFC], GetGroupName", "CMFCRibbonGallery [MFC], GetGroupOffset", "CMFCRibbonGallery [MFC], GetIconsInRow", "CMFCRibbonGallery [MFC], GetItemToolTip", "CMFCRibbonGallery [MFC], GetLastSelectedItem", "CMFCRibbonGallery [MFC], GetPaletteID", "CMFCRibbonGallery [MFC], GetRegularSize", "CMFCRibbonGallery [MFC], GetSelectedItem", "CMFCRibbonGallery [MFC], HasMenu", "CMFCRibbonGallery [MFC], IsButtonMode", "CMFCRibbonGallery [MFC], IsMenuResizeEnabled", "CMFCRibbonGallery [MFC], IsMenuResizeVertical", "CMFCRibbonGallery [MFC], IsMenuSideBar", "CMFCRibbonGallery [MFC], OnAfterChangeRect", "CMFCRibbonGallery [MFC], OnDraw", "CMFCRibbonGallery [MFC], OnEnable", "CMFCRibbonGallery [MFC], OnRTLChanged", "CMFCRibbonGallery [MFC], RedrawIcons", "CMFCRibbonGallery [MFC], RemoveItemToolTips", "CMFCRibbonGallery [MFC], SelectItem", "CMFCRibbonGallery [MFC], SetACCData", "CMFCRibbonGallery [MFC], SetButtonMode", "CMFCRibbonGallery [MFC], SetGroupName", "CMFCRibbonGallery [MFC], SetIconsInRow", "CMFCRibbonGallery [MFC], SetItemToolTip", "CMFCRibbonGallery [MFC], SetPalette", "CMFCRibbonGallery [MFC], SetPaletteID", "CMFCRibbonGallery [MFC], OnDrawPaletteIcon"]
ms.assetid: 9734c9c9-981c-4b3f-8c59-264fd41811b4
---
# CMFCRibbonGallery Class

Implements Office 2007-style ribbon galleries.
For more detail see the source code located in the **VC\\atlmfc\\src\\mfc** folder of your Visual Studio installation.

## Syntax

```cpp
class CMFCRibbonGallery : public CMFCRibbonButton
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMFCRibbonGallery::CMFCRibbonGallery](#cmfcribbongallery)|Constructs and initializes a `CMFCRibbonGallery` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonGallery::AddGroup](#addgroup)|Adds a new group to the gallery.|
|[CMFCRibbonGallery::AddSubItem](#addsubitem)|Adds a new menu item to the drop-down menu.|
|[CMFCRibbonGallery::Clear](#clear)|Clears the content of the gallery.|
|[CMFCRibbonGallery::EnableMenuResize](#enablemenuresize)|Enables or disables resizing of the menu panel.|
|[CMFCRibbonGallery::EnableMenuSideBar](#enablemenusidebar)|Enables or disables the side bar to the left of the popup menu.|
|[CMFCRibbonGallery::GetCompactSize](#getcompactsize)|(Overrides [CMFCRibbonButton::GetCompactSize](../../mfc/reference/cmfcribbonbutton-class.md#getcompactsize).)|
|[CMFCRibbonGallery::GetDroppedDown](#getdroppeddown)|(Overrides [CMFCRibbonBaseElement::GetDroppedDown](../../mfc/reference/cmfcribbonbaseelement-class.md#getdroppeddown).)|
|[CMFCRibbonGallery::GetGroupName](#getgroupname)|Returns the name of the group that is located at the specified index.|
|[CMFCRibbonGallery::GetGroupOffset](#getgroupoffset)||
|[CMFCRibbonGallery::GetIconsInRow](#geticonsinrow)|Returns the number of items in a row of the ribbon gallery.|
|[CMFCRibbonGallery::GetItemToolTip](#getitemtooltip)|Returns the tooltip text that is associated with an item in the gallery.|
|[CMFCRibbonGallery::GetLastSelectedItem](#getlastselecteditem)|Returns the index of the last item in the gallery that the user selected.|
|[CMFCRibbonGallery::GetPaletteID](#getpaletteid)|Returns the command ID of the current gallery.|
|[CMFCRibbonGallery::GetRegularSize](#getregularsize)|(Overrides [CMFCRibbonButton::GetRegularSize](../../mfc/reference/cmfcribbonbutton-class.md#getregularsize).)|
|[CMFCRibbonGallery::GetSelectedItem](#getselecteditem)||
|[CMFCRibbonGallery::HasMenu](#hasmenu)|(Overrides [CMFCRibbonButton::HasMenu](../../mfc/reference/cmfcribbonbutton-class.md#hasmenu).)|
|[CMFCRibbonGallery::IsButtonMode](#isbuttonmode)|Specifies whether the gallery is contained in a gallery button.|
|[CMFCRibbonGallery::IsMenuResizeEnabled](#ismenuresizeenabled)|Specifies whether menu resizing is enabled or disabled.|
|[CMFCRibbonGallery::IsMenuResizeVertical](#ismenuresizevertical)||
|[CMFCRibbonGallery::IsMenuSideBar](#ismenusidebar)|Specifies whether the side bar is enabled or disabled.|
|[CMFCRibbonGallery::OnAfterChangeRect](#onafterchangerect)|(Overrides `CMFCRibbonButton::OnAfterChangeRect`.)|
|[CMFCRibbonGallery::OnDraw](#ondraw)|(Overrides [CMFCRibbonButton::OnDraw](../../mfc/reference/cmfcribbonbutton-class.md#ondraw).)|
|[CMFCRibbonGallery::OnEnable](#onenable)|(Overrides `CMFCRibbonBaseElement::OnEnable`.)|
|[CMFCRibbonGallery::OnRTLChanged](#onrtlchanged)|(Overrides [CMFCRibbonBaseElement::OnRTLChanged](../../mfc/reference/cmfcribbonbaseelement-class.md#onrtlchanged).)|
|[CMFCRibbonGallery::RedrawIcons](#redrawicons)|Redraws the gallery.|
|[CMFCRibbonGallery::RemoveItemToolTips](#removeitemtooltips)|Removes the tooltips from all items in the gallery.|
|[CMFCRibbonGallery::SelectItem](#selectitem)||
|[CMFCRibbonGallery::SetACCData](#setaccdata)|(Overrides [CMFCRibbonButton::SetACCData](../../mfc/reference/cmfcribbonbutton-class.md#setaccdata).)|
|[CMFCRibbonGallery::SetButtonMode](#setbuttonmode)|Specifies whether to display the ribbon gallery as a drop-down button or as a palette directly on the ribbon.|
|[CMFCRibbonGallery::SetGroupName](#setgroupname)|Sets the name of a group.|
|[CMFCRibbonGallery::SetIconsInRow](#seticonsinrow)|Defines the number of items per row in the gallery.|
|[CMFCRibbonGallery::SetItemToolTip](#setitemtooltip)|Sets the tooltip text for an item in the gallery.|
|[CMFCRibbonGallery::SetPalette](#setpalette)|Attaches a palette to a ribbon gallery.|
|[CMFCRibbonGallery::SetPaletteID](#setpaletteid)|Defines the command ID that is sent in the WM_COMMAND message when a gallery item has been selected.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CMFCRibbonGallery::OnDrawPaletteIcon](#ondrawpaletteicon)|Called by the framework when a gallery icon is drawn.|

## Remarks

A gallery button behaves just like a regular menu button except that it displays a gallery when a user opens it. When you select an item in a gallery, the framework sends the WM_COMMAND message together with command ID of the button. When you handle the message, you should call [CMFCRibbonGallery::GetLastSelectedItem](#getlastselecteditem) to determine which item was selected from the gallery.

## Example

The following example demonstrates how to use various methods in the `CMFCRibbonGallery` class to configure a `CMFCRibbonGallery` object. The example illustrates how to specify the number of items per row in the gallery, enable resizing of the menu panel, enable the side bar to the left of the pop-up menu, and display the ribbon gallery as a palette directly on the ribbon bar. This code snippet is part of the [Draw Client sample](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_DrawClient#6](../../mfc/reference/codesnippet/cpp/cmfcribbongallery-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)\
└&nbsp;[CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;└&nbsp;[CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)

## Requirements

**Header:** afxRibbonPaletteGallery.h

## <a name="addgroup"></a> CMFCRibbonGallery::AddGroup

Adds a new group to the gallery.

```cpp
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

*lpszGroupName*<br/>
[in] Specifies the name of the group.

*uiImagesPaletteResID*<br/>
[in] Specifies the resource ID of the image list that contains the images for the group.

*cxPaletteImage*<br/>
[in] Specifies the width in pixels of an image.

*imagesGroup*<br/>
[in] A reference to image list that contains group images.

*nIconsNum*<br/>
[in] Specifies the number of icons in the group. This parameter should be specified only for custom (owner drawn) groups.

### Remarks

You can divide the items on a ribbon gallery into multiple groups by calling this method. Each group can have a caption.

## <a name="addsubitem"></a> CMFCRibbonGallery::AddSubItem

Adds a new menu item to the drop-down menu.

```cpp
void AddSubItem(
    CMFCRibbonBaseElement* pSubItem,
    int nIndex=-1,
    BOOL bOnTop=FALSE);
```

### Parameters

*pSubItem*<br/>
[in] A pointer to the item to add to the menu.

*nIndex*<br/>
[in] Specifies the zero-based index of a location where to insert the item.

*bOnTop*<br/>
[in] TRUE to specify that the item should be inserted before the ribbon gallery; otherwise, FALSE.

### Remarks

You can combine popup galleries with popup menu items by calling this method. Menu items can be placed before or after the gallery.

To insert the item before the gallery, set *bOnTop* to TRUE. Set *bOnTop* to FALSE to insert the item below the gallery.

> [!NOTE]
> The parameter *nIndex* specifies the insertion index both at the top of the gallery and at the bottom of the gallery. For example, if you need to insert an item one position before the gallery, set *nIndex* to 1 and *bOnTop* to TRUE. Similarly, if you need to insert an item one position below the gallery, set *nIndex* to 1 and *bOnTop* to FALSE.

## <a name="clear"></a> CMFCRibbonGallery::Clear

Clears the content of the gallery.

```cpp
virtual void Clear();
```

### Remarks

Call this method to remove all content from the ribbon gallery. This must be done before you attach a new ribbon gallery or set of groups to the ribbon gallery.

## <a name="cmfcribbongallery"></a> CMFCRibbonGallery::CMFCRibbonGallery

Constructs and initializes a [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md) object.

```cpp
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

*nID*<br/>
Specifies the command ID of the command to execute when a user clicks the button.

*lpszText*<br/>
Specifies the text to appear on the button.

*nSmallImageIndex*<br/>
The zero-based index of the small image to appear on the button.

*nLargeImageIndex*<br/>
The zero-based index of the large image to appear on the button.

*imagesPalette*<br/>
A reference to the [CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) object that contains the images to appear on the gallery.

*uiImagesPaletteResID*<br/>
The resource ID of the list of images to display on the gallery.

*cxPaletteImage*<br/>
Specifies the width, in pixels, of the image on the gallery.

*sizeIcon*<br/>
Specifies the size, in pixels, of the gallery image.

*nIconsNum*<br/>
Specifies the number of icons in the gallery.

*bDefaultButtonStyle*<br/>
Specifies whether to use the default or the owner-drawn button style.

### Remarks

## <a name="enablemenuresize"></a> CMFCRibbonGallery::EnableMenuResize

Enables or disables resizing of the menu panel.

```cpp
void EnableMenuResize(
    BOOL bEnable = TRUE,
    BOOL bVertcalOnly = FALSE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to enable resizing the menu; otherwise, FALSE.

*bVertcalOnly*<br/>
[in] TRUE to specify that the gallery can be resized only vertically; FALSE to specify that the gallery can be resized both vertically and horizontally.

### Remarks

Use this method to enable or disable resizing the ribbon gallery. When resizing is enabled, the ribbon gallery displays a gripper that a user can use to resize it.

## <a name="enablemenusidebar"></a> CMFCRibbonGallery::EnableMenuSideBar

Enables or disables the side bar to the left of the popup menu.

```cpp
void EnablMenuSideBar(BOOL bEnable=TRUE);
```

### Parameters

*bEnable*<br/>
[in] TRUE to specify that the side bar is enabled; otherwise, FALSE.

### Remarks

Call this method to enable or disable the Office XP-style side bar at the left side of the menu.

## <a name="getcompactsize"></a> CMFCRibbonGallery::GetCompactSize

```cpp
virtual CSize GetCompactSize(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Return Value

### Remarks

## <a name="getdroppeddown"></a> CMFCRibbonGallery::GetDroppedDown

```cpp
virtual CMFCRibbonBaseElement* GetDroppedDown();
```

### Return Value

### Remarks

## <a name="getgroupname"></a> CMFCRibbonGallery::GetGroupName

Returns the name of the group that is located at the specified index.

```cpp
LPCTSTR GetGroupName(int nGroupIndex) const;
```

### Parameters

*nGroupIndex*<br/>
[in] Specifies the zero-based index for the group whose name you want to retrieve.

### Return Value

The name of the group located at the specified index. Passing an invalid index will result in a failed assertion.

### Remarks

## <a name="getgroupoffset"></a> CMFCRibbonGallery::GetGroupOffset

```cpp
virtual int GetGroupOffset() const;
```

### Return Value

### Remarks

## <a name="geticonsinrow"></a> CMFCRibbonGallery::GetIconsInRow

Returns the number of items in a row of the ribbon gallery.

```cpp
int GetIconsInRow() const;
```

### Return Value

The number of items in a row.

### Remarks

## <a name="getitemtooltip"></a> CMFCRibbonGallery::GetItemToolTip

Returns the tooltip text that is associated with an item in the gallery.

```cpp
LPCTSTR GetItemToolTip(int nItemIndex) const;
```

### Parameters

*nItemIndex*<br/>
[in] Specifies the zero-based index of the item for which to retrieve the tooltip text.

### Return Value

A pointer to the tooltip string assigned to an item in the ribbon gallery. It can be NULL if no tooltip is assigned to that item.

### Remarks

## <a name="getlastselecteditem"></a> CMFCRibbonGallery::GetLastSelectedItem

Returns the index of the last item in the ribbon gallery that the user selected.

```cpp
static int GetLastSelectedItem(UINT uiCmdID);
```

### Parameters

*uiCmdID*<br/>
[in] Specifies the command ID of the menu item that opened the ribbon gallery.

### Return Value

When the user selects any item in the ribbon gallery, the library sends the WM_COMMAND message along with Command ID of the menu button that opened the ribbon gallery.

### Remarks

## <a name="getpaletteid"></a> CMFCRibbonGallery::GetPaletteID

Returns the command ID of the current palette.

```cpp
int GetPaletteID() const;
```

### Return Value

The command ID of the currently selected palette.

### Remarks

## <a name="getregularsize"></a> CMFCRibbonGallery::GetRegularSize

```cpp
virtual CSize GetRegularSize(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Return Value

### Remarks

## <a name="getselecteditem"></a> CMFCRibbonGallery::GetSelectedItem

```cpp
int GetSelectedItem() const;
```

### Return Value

### Remarks

## <a name="hasmenu"></a> CMFCRibbonGallery::HasMenu

```cpp
virtual BOOL HasMenu() const;
```

### Return Value

### Remarks

## <a name="isbuttonmode"></a> CMFCRibbonGallery::IsButtonMode

Specifies whether the palette is contained in a gallery button.

```cpp
BOOL IsButtonMode() const;
```

### Return Value

TRUE if the palette is displayed as a drop-down menu button; FALSE if the palette is displayed directly on the ribbon.

### Remarks

## <a name="ismenuresizeenabled"></a> CMFCRibbonGallery::IsMenuResizeEnabled

Specifies whether menu resizing is enabled.

```cpp
BOOL IsMenuResizeEnabled() const;
```

### Return Value

TRUE if menu resizing has been enabled; otherwise, FALSE.

### Remarks

## <a name="ismenuresizevertical"></a> CMFCRibbonGallery::IsMenuResizeVertical

```cpp
BOOL IsMenuResizeVertical() const;
```

### Return Value

### Remarks

## <a name="ismenusidebar"></a> CMFCRibbonGallery::IsMenuSideBar

Specifies whether the side bar is enabled or disabled.

```cpp
BOOL IsMenuSideBar() const;
```

### Return Value

TRUE if the Office XP-style side bar is drawn at the left side of the popup menu; otherwise, FALSE.

### Remarks

## <a name="onafterchangerect"></a> CMFCRibbonGallery::OnAfterChangeRect

```cpp
virtual void OnAfterChangeRect(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Remarks

## <a name="ondraw"></a> CMFCRibbonGallery::OnDraw

```cpp
virtual void OnDraw(CDC* pDC);
```

### Parameters

[in] *pDC*<br/>

### Remarks

## <a name="ondrawpaletteicon"></a> CMFCRibbonGallery::OnDrawPaletteIcon

Called by the framework when a gallery icon is drawn.

```cpp
virtual void OnDrawPaletteIcon(
    CDC* pDC,
    CRect rectIcon,
    int nIconIndex,
    CMFCRibbonGalleryIcon* pIcon,
    COLORREF clrText);
```

### Parameters

*pDC*<br/>
[in] A pointer to the device context that is used for drawing.

*rectIcon*<br/>
[in] Specifies the bounding rectangle of the icon to draw.

*nIconIndex*<br/>
[in] Specifies the zero-based index in the image list of gallery icons of the icon to draw.

*pIcon*<br/>
[in] A pointer to the icon being drawn.

*clrText*<br/>
[in] Specifies the color for the text of the item to draw.

### Remarks

You can override this method in a derived class to customize the appearance of a ribbon gallery.

## <a name="onenable"></a> CMFCRibbonGallery::OnEnable

```cpp
virtual void OnEnable(BOOL bEnable);
```

### Parameters

[in] *bEnable*<br/>

### Remarks

## <a name="onrtlchanged"></a> CMFCRibbonGallery::OnRTLChanged

```cpp
virtual void OnRTLChanged(BOOL bIsRTL);
```

### Parameters

[in] *bIsRTL*<br/>

### Remarks

## <a name="redrawicons"></a> CMFCRibbonGallery::RedrawIcons

Redraws the gallery.

```cpp
void RedrawIcons();
```

### Remarks

Call this function to redraw the gallery. You must call this method if you have changed the contents of the gallery at runtime.

## <a name="removeitemtooltips"></a> CMFCRibbonGallery::RemoveItemToolTips

Removes the tooltips from all items in the gallery.

```cpp
void RemoveItemToolTips();
```

### Remarks

## <a name="selectitem"></a> CMFCRibbonGallery::SelectItem

```cpp
void SelectItem(int nItemIndex);
```

### Parameters

[in] *nItemIndex*<br/>

### Remarks

## <a name="setaccdata"></a> CMFCRibbonGallery::SetACCData

Populates the specified `CAccessibilityData` object by using accessibility data from the ribbon gallery.

```cpp
virtual BOOL SetACCData(
    CWnd* pParent,
    CAccessibilityData& data);
```

### Parameters

*pParent*<br/>
[in] The parent window of the ribbon gallery window.

*data*<br/>
[out] A `CAccessibilityData` object that receives the accessibility data from the ribbon gallery.

### Return Value

### Remarks

TRUE if the method is successful; otherwise, FALSE.

## <a name="setbuttonmode"></a> CMFCRibbonGallery::SetButtonMode

Determines whether to display the ribbon gallery as a drop-down button or as a palette directly on the ribbon.

```cpp
void SetButtonMode(BOOL bSet=TRUE);
```

### Parameters

*bSet*<br/>
[in] TRUE to display the ribbon gallery as a drop-down menu button; FALSE to display the contents of the ribbon gallery directly on the ribbon.

### Remarks

## <a name="setgroupname"></a> CMFCRibbonGallery::SetGroupName

Sets the name of a group.

```cpp
void SetGroupName(
    int nGroupIndex,
    LPCTSTR lpszGroupName);
```

### Parameters

*nGroupIndex*<br/>
[in] Specifies the zero-based index for the group for which the name is being changed.

*lpszGroupName*<br/>
[in] Specifies the new name for the group.

### Remarks

The group whose name is being changed must have been added using the [CMFCRibbonGallery::AddGroup](#addgroup) method.

## <a name="seticonsinrow"></a> CMFCRibbonGallery::SetIconsInRow

Specifies the number of items per row in the gallery.

```cpp
void SetIconsInRow(int nIconsInRow);
```

### Parameters

*nIconsInRow*<br/>
[in] Specifies the number of items to appear in each row of the gallery.

### Remarks

Use this method to specify the width of the ribbon gallery.

## <a name="setitemtooltip"></a> CMFCRibbonGallery::SetItemToolTip

Sets the tooltip text for an item in the gallery.

```cpp
void SetItemToolTip(
    int nItemIndex,
    LPCTSTR lpszToolTip);
```

### Parameters

*nItemIndex*<br/>
[in] The zero-based index of the palette item with which to associate the tooltip.

*lpszToolTip*<br/>
[in] The text to appear on the tooltip.

### Remarks

## <a name="setpalette"></a> CMFCRibbonGallery::SetPalette

Attaches a palette to a ribbon gallery.

```cpp
void SetPalette(CMFCToolBarImages& imagesPalette);

void SetPalette(
    UINT uiImagesPaletteResID,
    int cxPaletteImage);
```

### Parameters

*imagesPalette*<br/>
[in] Specifies the image list that contains the icons to appear on the gallery.

*uiImagesPaletteResID*<br/>
[in] Specifies the resource ID of the image list that contains the icons to appear on the gallery.

*cxPaletteImage*<br/>
[in] Specifies the width, in pixels, of an image on the gallery.

### Remarks

## <a name="setpaletteid"></a> CMFCRibbonGallery::SetPaletteID

Defines the command ID that is sent in the WM_COMMAND message when a user selects a gallery item.

```cpp
void SetPaletteID(UINT nID);
```

### Parameters

*nID*<br/>
[in] Specifies the command ID that is sent in the WM_COMMAND message when a user selects a gallery item.

### Remarks

To determine the specific item that a user selected from the gallery, call the [CMFCRibbonGallery::GetLastSelectedItem](#getlastselecteditem) static method.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[Classes](../../mfc/reference/mfc-classes.md)<br/>
[CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)<br/>
[CMFCRibbonGalleryMenuButton Class](../../mfc/reference/cmfcribbongallerymenubutton-class.md)
