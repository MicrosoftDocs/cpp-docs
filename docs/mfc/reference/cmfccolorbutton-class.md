---
title: "CMFCColorButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorButton::m_Color data member"
  - "CMFCColorButton::m_bAutoSetFocus data member"
  - "CMFCColorButton::m_pPopup data member"
  - "CMFCColorButton::m_nColumns data member"
  - "CMFCColorButton class"
  - "CMFCColorButton::m_strAutoColorText data member"
  - "CMFCColorButton::m_bAltColorDlg data member"
  - "CMFCColorButton::m_strDocColorsText data member"
  - "CMFCColorButton::m_strOtherText data member"
  - "CMFCColorButton::m_pPalette data member"
  - "CMFCColorButton::m_lstDocColors data member"
  - "CMFCColorButton::m_ColorAutomatic data member"
ms.assetid: 9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699
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
# CMFCColorButton Class
The `CMFCColorButton` and [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) classes are used together to implement a color picker control.  
  
## Syntax  
  
```  
class CMFCColorButton : public CMFCButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorButton::CMFCColorButton](#cmfccolorbutton__cmfccolorbutton)|Constructs a new `CMFCColorButton` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorButton::EnableAutomaticButton](#cmfccolorbutton__enableautomaticbutton)|Enables and disables an "automatic" button that is positioned above the regular color buttons. (The standard system automatic button is labeled **Automatic**.)|  
|[CMFCColorButton::EnableOtherButton](#cmfccolorbutton__enableotherbutton)|Enables and disables an "other" button that is positioned below the regular color buttons. (The standard system "other" button is labeled **More Colors…**.)|  
|[CMFCColorButton::GetAutomaticColor](#cmfccolorbutton__getautomaticcolor)|Retrieves the current automatic color.|  
|[CMFCColorButton::GetColor](#cmfccolorbutton__getcolor)|Retrieves a button's color.|  
|[CMFCColorButton::SetColor](#cmfccolorbutton__setcolor)|Sets a button's color.|  
|[CMFCColorButton::SetColorName](#cmfccolorbutton__setcolorname)|Sets a color name.|  
|[CMFCColorButton::SetColumnsNumber](#cmfccolorbutton__setcolumnsnumber)|Sets the number of columns on the color picker dialog box.|  
|[CMFCColorButton::SetDocumentColors](#cmfccolorbutton__setdocumentcolors)|Specifies a list of document-specific colors that are displayed on the color picker dialog box.|  
|[CMFCColorButton::SetPalette](#cmfccolorbutton__setpalette)|Specifies a palette of standard display colors.|  
|[CMFCColorButton::SizeToContent](#cmfccolorbutton__sizetocontent)|Changes the size of the button control, depending on its text and image size.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorButton::IsDrawXPTheme](#cmfccolorbutton__isdrawxptheme)|Indicates whether the current color button is displayed in the visual style of Windows XP.|  
|[CMFCColorButton::OnDraw](#cmfccolorbutton__ondraw)|Called by the framework to display an image of the button.|  
|[CMFCColorButton::OnDrawBorder](#cmfccolorbutton__ondrawborder)|Called by the framework to display the button's border.|  
|[CMFCColorButton::OnDrawFocusRect](#cmfccolorbutton__ondrawfocusrect)|Called by the framework to display a focus rectangle when the button has a focus.|  
|[CMFCColorButton::OnShowColorPopup](#cmfccolorbutton__onshowcolorpopup)|Called by the framework when the color picker dialog box is about to be displayed.|  
|[CMFCColorButton::RebuildPalette](#cmfccolorbutton__rebuildpalette)|Initializes the `m_pPalette` protected data member to the specified palette or the default system palette.|  
|[CMFCColorButton::UpdateColor](#cmfccolorbutton__updatecolor)|Called by the framework when the user selects a color from the palette of the color picker dialog box.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_bAltColorDlg`|A Boolean. If `TRUE`, the framework displays the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) color dialog box when the *other* button is clicked, or if `FALSE`, the system color dialog box. The default value is `TRUE`. For more information, see [CMFCColorButton::EnableOtherButton](#cmfccolorbutton__enableotherbutton).|  
|`m_bAutoSetFocus`|A Boolean. If `TRUE`, the framework sets the focus on the color menu when the menu is displayed, or if `FALSE`, does not change the focus. The default value is `TRUE`.|  
|[CMFCColorButton::m_bEnabledInCustomizeMode](#cmfccolorbutton__m_benabledincustomizemode)|Indicates whether customization mode is enabled for the color button.|  
|`m_Color`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value. Contains the currently selected color.|  
|`m_ColorAutomatic`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value. Contains the currently selected default color.|  
|`m_Colors`|A [CArray](../../mfc/reference/carray-class.md) of [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) values. Contains the currently available colors.|  
|`m_lstDocColors`|A [CList](../../mfc/reference/clist-class.md) of [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) values. Contains the current document colors.|  
|`m_nColumns`|An integer. Contains the number of columns to display in the grid of colors in a color selection menu.|  
|`m_pPalette`|A pointer to a [CPalette](../../mfc/reference/cpalette-class.md). Contains the colors that are available in the current color selection menu.|  
|`m_pPopup`|A pointer to a [CMFCColorPopupMenu Class](../../mfc/reference/cmfccolorpopupmenu-class.md) object. The color selection menu that is displayed when you click the color button.|  
|`m_strAutoColorText`|A string. The label of the "automatic" button in a color selection menu.|  
|`m_strDocColorsText`|A string. The label of the button in a color selection menu that displays the document colors.|  
|`m_strOtherText`|A string. The label of the "other" button in a color selection menu.|  
  
## Remarks  
 By default, the `CMFCColorButton` class behaves as a push button that opens a color picker dialog box. The color picker dialog box contains an array of small color buttons and an "other" button that displays a custom color picker. (The standard system "other" button is labeled **More Colors…**.) When a user selects a new color, the `CMFCColorButton` object reflects the change and displays the selected color.  
  
 Create a color button control either directly in your code, or by using the **ClassWizard** tool and a dialog box template. If you create a color button control directly, add a `CMFCColorButton` variable to your application, and then call the constructor and `Create` methods of the `CMFCColorButton` object. If you use the **ClassWizard**, add a `CButton` variable to your application, and then change the type of the variable from `CButton` to `CMFCColorButton`.  
  
 The color picker dialog box ( [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)) is displayed by the [CMFCColorButton::OnShowColorPopup](#cmfccolorbutton__onshowcolorpopup) method when the framework calls the `OnLButtonDown` event handler. The [CMFCColorButton::OnShowColorPopup](#cmfccolorbutton__onshowcolorpopup) method can be overridden to support custom color selection.  
  
 The `CMFCColorButton` object notifies its parent that a color is changing by sending it a `WM_COMMAND | BN_CLICKED` notification. The parent uses the [CMFCColorButton::GetColor](#cmfccolorbutton__getcolor) method to retrieve the current color.  
  
## Example  
 The following example demonstrates how to configure a color button by using various methods in the `CMFCColorButton` class. The methods set the color of the color button and its number of columns, and enable the automatic and the other buttons. This example is part of the [Status Bar Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_StatusBarDemo#10](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_1.h)]  
[!code-cpp[NVC_MFC_StatusBarDemo#11](../../mfc/reference/codesnippet/cpp/cmfccolorbutton-class_2.cpp)]  
  
## Requirements  
 **Header:** afxcolorbutton.h  
  
##  <a name="cmfccolorbutton__cmfccolorbutton"></a>  CMFCColorButton::CMFCColorButton  
 Constructs a new `CMFCColorButton` object.  
  
```  
CMFCColorButton();
```  
  
##  <a name="cmfccolorbutton__enableautomaticbutton"></a>  CMFCColorButton::EnableAutomaticButton  
 Enable or disable the "automatic" button of a color picker control and set the automatic (default) color.  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 Specifies the automatic button's text.  
  
 [in] `colorAutomatic`  
 An RGB value that specifies the automatic button's default color.  
  
 [in] `bEnable`  
 Specifies whether the automatic button is enabled or disabled.  
  
### Remarks  
  
##  <a name="cmfccolorbutton__enableotherbutton"></a>  CMFCColorButton::EnableOtherButton  
 Enable or disable the "other" button, which appears below regular color buttons.  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg=TRUE,  
    BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 Specifies the button's text.  
  
 [in] `bAltColorDlg`  
 Specifies whether the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) dialog box or the system color dialog box is opened when the user clicks the button.  
  
 [in] `bEnable`  
 Specifies whether the "other" button is enabled or disabled.  
  
### Remarks  
 Click the "other" button to display a color dialog box. If the *bAltColorDlg* parameter is `TRUE`, the [CMFCColorDialog Class](../../mfc/reference/cmfccolordialog-class.md) is displayed; otherwise, the system color dialog box is displayed.  
  
##  <a name="cmfccolorbutton__getautomaticcolor"></a>  CMFCColorButton::GetAutomaticColor  
 Retrieves the current automatic (default) color.  
  
```  
COLORREF GetAutomaticColor() const;

 
```  
  
### Return Value  
 An RGB value representing the current automatic color.  
  
### Remarks  
 The current automatic color is set by the [CMFCColorButton::EnableAutomaticButton](#cmfccolorbutton__enableautomaticbutton) method.  
  
##  <a name="cmfccolorbutton__getcolor"></a>  CMFCColorButton::GetColor  
 Retrieves the currently selected color.  
  
```  
COLORREF GetColor() const;

 
```  
  
### Return Value  
 An RGB value.  
  
### Remarks  
  
##  <a name="cmfccolorbutton__isdrawxptheme"></a>  CMFCColorButton::IsDrawXPTheme  
 Indicates whether the current color button is displayed in the visual style of Windows XP.  
  
```  
BOOL IsDrawXPTheme() const;

 
```  
  
### Return Value  
 `TRUE` if visual styles are supported and the current color button is displayed in the visual style of Windows XP; otherwise, `FALSE`.  
  
##  <a name="cmfccolorbutton__m_benabledincustomizemode"></a>  CMFCColorButton::m_bEnabledInCustomizeMode  
 Sets a color button to customization mode.  
  
```  
BOOL m_bEnabledInCustomizeMode;  
```  
  
### Remarks  
 If you need to add a color button to a customization dialog's page (or allow the user to make another color selection during customization), enable the button by setting the `m_bEnabledInCustomizeMode` member to `TRUE`. By default, this member is set to `FALSE`.  
  
##  <a name="cmfccolorbutton__ondraw"></a>  CMFCColorButton::OnDraw  
 Called by the framework to render an image of the button.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    UINT uiState);
```  
  
### Parameters  
 [in] `pDC`  
 Points to the device context that is used to render the image of the button.  
  
 [in] `rect`  
 A rectangle that bounds the button.  
  
 [in] `uiState`  
 Specifies the visual state of the button.  
  
### Remarks  
 Override this method to customize the rendering process.  
  
##  <a name="cmfccolorbutton__ondrawborder"></a>  CMFCColorButton::OnDrawBorder  
 Called by the framework to display the border of the button.  
  
```  
virtual void OnDrawBorder(
    CDC* pDC,  
    CRect& rectClient,  
    UINT uiState);
```  
  
### Parameters  
 [in] `pDC`  
 Points to the device context used to draw the border.  
  
 [in] `rectClient`  
 A rectangle in the device context that is specified by the the `pDC` parameter that defines the boundaries of the button to be drawn.  
  
 [in] `uiState`  
 Specifies the visual state of the button.  
  
### Remarks  
 Override this function to customize the color button's border appearance.  
  
##  <a name="cmfccolorbutton__ondrawfocusrect"></a>  CMFCColorButton::OnDrawFocusRect  
 Called by the framework to display a focus rectangle when the button has focus.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### Parameters  
 [in] `pDC`  
 Points to the device context used to draw the focus rectangle.  
  
 [in] `rectClient`  
 A rectangle in the device context specified by the `pDC` parameter that defines the boundaries of the button.  
  
### Remarks  
 Override this method to customize appearance of the focus rectangle.  
  
##  <a name="cmfccolorbutton__onshowcolorpopup"></a>  CMFCColorButton::OnShowColorPopup  
 Called before the popup color bar is displayed.  
  
```  
virtual void OnShowColorPopup();
```  
  
### Remarks  
  
##  <a name="cmfccolorbutton__rebuildpalette"></a>  CMFCColorButton::RebuildPalette  
 Initializes the `m_pPalette` protected data member to the specified palette or the default system palette.  
  
```  
void RebuildPalette(CPalette* pPal);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pPal`|A pointer to a logical palette or `NULL`. If `NULL`, the default system palette is used.|  
  
##  <a name="cmfccolorbutton__setcolor"></a>  CMFCColorButton::SetColor  
 Specifies the color of the button.  
  
```  
void SetColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 An RGB value.  
  
### Remarks  
  
##  <a name="cmfccolorbutton__setcolorname"></a>  CMFCColorButton::SetColorName  
 Specifies the name of a color.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### Parameters  
 [in] `color`  
 The color's RGB value.  
  
 [in] `strName`  
 The color's name.  
  
### Remarks  
 The list of color names is global per application. Consequently, this method transfers its parameters to [CMFCColorBar::SetColorName](../../mfc/reference/cmfccolorbar-class.md#cmfccolorbar__setcolorname).  
  
##  <a name="cmfccolorbutton__setcolumnsnumber"></a>  CMFCColorButton::SetColumnsNumber  
 Defines the number of columns that are displayed in the table of colors that is presented to the user during the user's color selection process.  
  
```  
void SetColumnsNumber(int nColumns);
```  
  
### Parameters  
 [in] `nColumns`  
 Specifies the number of columns.  
  
### Remarks  
 The user can select a color from a popup color bar that displays a table of predefined colors. Use this method to define the number of columns in the table.  
  
##  <a name="cmfccolorbutton__setdocumentcolors"></a>  CMFCColorButton::SetDocumentColors  
 Specifies a set of colors and the set's name. The set of colors is displayed using a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) object.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszLabel,  
    CList<COLORREF,COLORREF>& lstColors);
```  
  
### Parameters  
 [in] `lpszLabel`  
 Specifies the label to be displayed with the set of document colors.  
  
 [in] `lstColors`  
 A reference to a list of RGB values.  
  
### Remarks  
 A `CMFCColorButton` object maintains a list of RGB values that are transferred to a [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md) object. When the color bar is displayed, these colors are shown in a special section whose label is specified by the `lpszLabel` parameter.  
  
##  <a name="cmfccolorbutton__setpalette"></a>  CMFCColorButton::SetPalette  
 Specifies the standard colors to display on the popup color bar.  
  
```  
void SetPalette(CPalette* pPalette);
```  
  
### Parameters  
 [in] `pPalette`  
 A pointer to a color palette.  
  
### Remarks  
  
##  <a name="cmfccolorbutton__sizetocontent"></a>  CMFCColorButton::SizeToContent  
 Resizes the button control to fit its text and image.  
  
```  
virtual CSize SizeToContent(BOOL bCalcOnly=FALSE);
```  
  
### Parameters  
 [in] `bCalcOnly`  
 If nonzero, the new size of the button control is calculated but the actual size is not changed.  
  
### Return Value  
 A `CSize` object that specifies a new button control size.  
  
### Remarks  
  
##  <a name="cmfccolorbutton__updatecolor"></a>  CMFCColorButton::UpdateColor  
 Called by the framework when the user selects a color from the color bar that displays when the user clicks the color button.  
  
```  
virtual void UpdateColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 A color selected by the user.  
  
### Remarks  
 The `UpdateColor` function changes the currently selected button's color and notifies its parent by sending a `WM_COMMAND` message with a `BN_CLICKED` standard notification. Use the [CMFCColorButton::GetColor](#cmfccolorbutton__getcolor) method to retrieve the selected color.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)   
 [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)   
 [CMFCColorButton::OnShowColorPopup](#cmfccolorbutton__onshowcolorpopup)   
 [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449)   
 [CPalette Class](../../mfc/reference/cpalette-class.md)   
 [CArray Class](../../mfc/reference/carray-class.md)   
 [CList Class](../../mfc/reference/clist-class.md)   
 [CString](../../atl-mfc-shared/reference/cstringt-class.md)
