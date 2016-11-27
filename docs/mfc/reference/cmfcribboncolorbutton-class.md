---
title: "CMFCRibbonColorButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCRibbonColorButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonColorButton class"
ms.assetid: 6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1
caps.latest.revision: 36
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
# CMFCRibbonColorButton Class
The `CMFCRibbonColorButton` class implements a color button that you can add to a ribbon bar. The ribbon color button displays a drop-down menu that contains one or more color palettes.  
  
## Syntax  
  
```  
class CMFCRibbonColorButton : public CMFCRibbonGallery  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonColorButton::CMFCRibbonColorButton](#cmfcribboncolorbutton__cmfcribboncolorbutton)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonColorButton::AddColorsGroup](#cmfcribboncolorbutton__addcolorsgroup)|Adds a group of colors to the regular color area.|  
|[CMFCRibbonColorButton::EnableAutomaticButton](#cmfcribboncolorbutton__enableautomaticbutton)|Specifies whether the **Automatic** button is enabled.|  
|[CMFCRibbonColorButton::EnableOtherButton](#cmfcribboncolorbutton__enableotherbutton)|Enables the **Other** button.|  
|[CMFCRibbonColorButton::GetAutomaticColor](#cmfcribboncolorbutton__getautomaticcolor)||  
|[CMFCRibbonColorButton::GetColor](#cmfcribboncolorbutton__getcolor)|Returns the currently selected color.|  
|[CMFCRibbonColorButton::GetColorBoxSize](#cmfcribboncolorbutton__getcolorboxsize)|Returns the size of the color elements that appear on the color bar.|  
|[CMFCRibbonColorButton::GetColumns](#cmfcribboncolorbutton__getcolumns)||  
|[CMFCRibbonColorButton::GetHighlightedColor](#cmfcribboncolorbutton__gethighlightedcolor)|Returns the color of the currently selected element on the popup color palette.|  
|[CMFCRibbonColorButton::RemoveAllColorGroups](#cmfcribboncolorbutton__removeallcolorgroups)|Removes all color groups from the regular color area.|  
|[CMFCRibbonColorButton::SetColor](#cmfcribboncolorbutton__setcolor)|Selects a color from the regular color area.|  
|[CMFCRibbonColorButton::SetColorBoxSize](#cmfcribboncolorbutton__setcolorboxsize)|Sets the size of all the color elements that appear on the color bar.|  
|[CMFCRibbonColorButton::SetColorName](#cmfcribboncolorbutton__setcolorname)||  
|[CMFCRibbonColorButton::SetColumns](#cmfcribboncolorbutton__setcolumns)||  
|[CMFCRibbonColorButton::SetDocumentColors](#cmfcribboncolorbutton__setdocumentcolors)|Specifies a list of RGB values to display in the document color area.|  
|[CMFCRibbonColorButton::SetPalette](#cmfcribboncolorbutton__setpalette)||  
|[CMFCRibbonColorButton::UpdateColor](#cmfcribboncolorbutton__updatecolor)||  
  
## Remarks  
 The ribbon color button displays a color bar when a user presses it. By default, this color bar contains a color selection palette called the regular color area. Optionally, the color bar can display an **Automatic** button, which allows the user to select a default color, and an **Other** button, which displays a popup color palette that contains additional colors.  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCRibbonColorButton` class. The example shows how to construct a `CMFCRibbonColorButton` object, set the large image, enable the **Automatic** button, enable the **Other** button, set the number of columns, set the size of all the color elements that appear on the color bar, add a group of colors to the regular color area, and specify a list of RGB values to display in the document color area. This code snippet is part of the [Draw Client sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#3](../../mfc/reference/codesnippet/cpp/cmfcribboncolorbutton-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonGallery](../../mfc/reference/cmfcribbongallery-class.md)  
  
 [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md)  
  
## Requirements  
 **Header:** afxribboncolorbutton.h  
  
##  <a name="cmfcribboncolorbutton__addcolorsgroup"></a>  CMFCRibbonColorButton::AddColorsGroup  
 Adds a group of colors to the regular color area.  
  
```  
void AddColorsGroup(
    LPCTSTR lpszName,  
    const CList<COLORREF,COLORREF>& lstColors,  
    BOOL bContiguousColumns=FALSE);
```  
  
### Parameters  
 [in] `lpszName`  
 The group name.  
  
 [in] `lstColors`  
 The list of colors.  
  
 [in] `bContiguousColumns`  
 Controls how the color items are displayed in the group. If `TRUE`, the color items are drawn without a vertical spacing. If `FALSE`, the color items are drawn with a vertical spacing.  
  
### Remarks  
 Use this function to make the color pop-up display several groups of colors. You can control how the colors are displayed in group.  
  
##  <a name="cmfcribboncolorbutton__cmfcribboncolorbutton"></a>  CMFCRibbonColorButton::CMFCRibbonColorButton  
 Constructs a `CMFCRibbonColorButton` object.  
  
```  
CMFCRibbonColorButton();

 
CMFCRibbonColorButton(
    UINT nID,  
    LPCTSTR lpszText,  
    int nSmallImageIndex,  
    COLORREF color = RGB(0,
    0,
    0));

 
CMFCRibbonColorButton(
    UINT nID,  
    LPCTSTR lpszText,  
    BOOL bSimpleButtonLook,  
    int nSmallImageIndex,  
    int nLargeImageIndex,  
    COLORREF color = RGB(0,
    0,
    0));
```  
  
### Parameters  
 [in] `nID`  
 Specifies the command ID of the command to execute when a user clicks the button.  
  
 [in] `lpszText`  
 Specifies the text to appear on the button.  
  
 [in] `nSmallImageIndex`  
 The zero-based index of the small image to appear on the button.  
  
 [in] `color`  
 The color of the button (defaults to black).  
  
 [in] `bSimpleButtonLook`  
 If `TRUE`, the button is drawn as a simple rectangle.  
  
 [in] `nLargeImageIndex`  
 The zero-based index of the large image to appear on the button.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcribboncolorbutton__enableautomaticbutton"></a>  CMFCRibbonColorButton::EnableAutomaticButton  
 Specifies whether the **Automatic** button is enabled.  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE,  
    LPCTSTR lpszToolTip=NULL,  
    BOOL bOnTop=TRUE,  
    BOOL bDrawBorder=FALSE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The label for the **Automatic** button.  
  
 [in] `colorAutomatic`  
 An RGB value that specifies the **Automatic** button's default color.  
  
 [in] `bEnable`  
 `TRUE` if the **Automatic** button is enabled; `FALSE` if it is disabled.  
  
 [in] `lpszToolTip`  
 The tooltip of the **Automatic** button.  
  
 [in] `bOnTop`  
 Specifies whether the **Automatic** button is at the top, before color palette.  
  
 [in] `bDrawBorder`  
 `TRUE` if the application draws a border around the color bar on the ribbon color button. Color bar displays the currently selected color. `FALSE` if the application does not draw a border  
  
##  <a name="cmfcribboncolorbutton__enableotherbutton"></a>  CMFCRibbonColorButton::EnableOtherButton  
 Enables the **Other** button.  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    LPCTSTR lpszToolTip=NULL);
```  
  
### Parameters  
 `lpszLabel`  
 The button's label.  
  
 `lpszToolTip`  
 The tooltip text for the **Other** button.  
  
### Remarks  
 The **Other** button is the button that is displayed below the group of colors. When the user clicks the **Other** button, it displays a color dialog.  
  
##  <a name="cmfcribboncolorbutton__getautomaticcolor"></a>  CMFCRibbonColorButton::GetAutomaticColor  
 Retrieves the current automatic-button color.  
  
```  
COLORREF GetAutomaticColor() const;

 
```  
  
### Return Value  
 An RGB color value that represents the current automatic-button color.  
  
### Remarks  
 The automatic-button color is set by the `colorAutomatic` parameter passed to the `CMFCRibbonColorButton::EnableAutomaticButton` method.  
  
##  <a name="cmfcribboncolorbutton__getcolor"></a>  CMFCRibbonColorButton::GetColor  
 Returns the currently selected color.  
  
```  
COLORREF GetColor() const;

 
```  
  
### Return Value  
 The color selected by clicking the button.  
  
##  <a name="cmfcribboncolorbutton__getcolorboxsize"></a>  CMFCRibbonColorButton::GetColorBoxSize  
 Returns the size of the color elements that appear on the color bar.  
  
```  
CSize GetColorBoxSize() const;

 
```  
  
### Return Value  
 The size of the color buttons in the drop-down color palette.  
  
##  <a name="cmfcribboncolorbutton__getcolumns"></a>  CMFCRibbonColorButton::GetColumns  
 Gets the number of items in a row of the ribbon color button’s gallery display.  
  
```  
int GetColumns() const;

 
```  
  
### Return Value  
 Returns the number of icons in each row.  
  
### Remarks  
  
##  <a name="cmfcribboncolorbutton__gethighlightedcolor"></a>  CMFCRibbonColorButton::GetHighlightedColor  
 Returns the color of the currently selected element on the pop-up color palette.  
  
```  
COLORREF GetHighlightedColor() const;

 
```  
  
### Return Value  
 The color of currently selected element on the pop-up color palette.  
  
##  <a name="cmfcribboncolorbutton__removeallcolorgroups"></a>  CMFCRibbonColorButton::RemoveAllColorGroups  
 Removes all color groups from the regular color area.  
  
```  
void RemoveAllColorGroups();
```  
  
##  <a name="cmfcribboncolorbutton__setcolor"></a>  CMFCRibbonColorButton::SetColor  
 Selects a color from the regular color area.  
  
```  
void SetColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 A color to set.  
  
##  <a name="cmfcribboncolorbutton__setcolorboxsize"></a>  CMFCRibbonColorButton::SetColorBoxSize  
 Sets the size of all the color elements that appear on the color bar.  
  
```  
void SetColorBoxSize(CSize sizeBox);
```  
  
### Parameters  
 [in] `sizeBox`  
 The new size of the color buttons in the color palette.  
  
##  <a name="cmfcribboncolorbutton__setcolorname"></a>  CMFCRibbonColorButton::SetColorName  
 Sets a new name for a specified color.  
  
```  
static void __stdcall SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### Parameters  
 [in] `color`  
 The RGB value of a color.  
  
 [in] `strName`  
 The new name for the specified color.  
  
### Remarks  
 Because it calls `CMFCColorBar::SetColorName`, this method changes the name of the specified color in all `CMFCColorBar` objects in your application.  
  
##  <a name="cmfcribboncolorbutton__setcolumns"></a>  CMFCRibbonColorButton::SetColumns  
 Sets the number of columns displayed in the table of colors that is presented to the user during the user's color selection process.  
  
```  
void SetColumns(int nColumns);
```  
  
### Parameters  
 [in] `nColumns`  
 The number of color icons to display in each row.  
  
### Remarks  
  
##  <a name="cmfcribboncolorbutton__setdocumentcolors"></a>  CMFCRibbonColorButton::SetDocumentColors  
 Specifies a list of RGB values to display in the document color area.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszLabel,  
    CList<COLORREF,COLORREF>& lstColors);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The text to be displayed with the document colors.  
  
 [in] `lstColors`  
 A reference to a list of RGB values.  
  
##  <a name="cmfcribboncolorbutton__setpalette"></a>  CMFCRibbonColorButton::SetPalette  
 Specifies the standard colors to display in the color table that the color button displays.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### Parameters  
 [in] `pPalette`  
 A pointer to a color palette.  
  
### Remarks  
  
##  <a name="cmfcribboncolorbutton__updatecolor"></a>  CMFCRibbonColorButton::UpdateColor  
 Called by the framework when the user selects a color from the color table displayed when the user clicks the color button.  
  
```  
void UpdateColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 A color selected by the user.  
  
### Remarks  
 The `CMFCRibbonColorButton::UpdateColor` method changes the currently selected button's color and notifies its parent by sending a `WM_COMMAND` message with a `BN_CLICKED` standard notification. Use the [CMFCRibbonColorButton::GetColor](#cmfcribboncolorbutton__getcolor) method to retrieve the selected color.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonGallery Class](../../mfc/reference/cmfcribbongallery-class.md)
