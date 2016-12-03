---
title: "CMFCColorBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCColorBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorBar class"
  - "CMFCColorBar::m_ColorAutomatic data member"
  - "CMFCColorBar::m_bInternal data member"
  - "CMFCColorBar::m_bIsEnabled data member"
  - "CMFCColorBar::m_nNumColumnsVert data member"
  - "CMFCColorBar::m_nVertMargin data member"
  - "CMFCColorBar::m_strDocColors data member"
  - "CMFCColorBar::m_BoxSize data member"
  - "CMFCColorBar::m_pParentBtn data member"
  - "CMFCColorBar::m_bIsTearOff data member"
  - "CMFCColorBar::m_nHorzOffset data member"
  - "CMFCColorBar::m_pParentRibbonBtn data member"
  - "CMFCColorBar::m_nNumRowsHorz data member"
  - "CMFCColorBar::m_bStdColorDlg data member"
  - "CMFCColorBar::m_strAutoColor data member"
  - "CMFCColorBar::m_ColorNames data member"
  - "CMFCColorBar::m_strOtherColor data member"
  - "CMFCColorBar::m_lstDocColors data member"
  - "CMFCColorBar::m_pWndPropList data member"
  - "CMFCColorBar::m_ColorSelected data member"
  - "CMFCColorBar::m_nCommandID data member"
  - "CMFCColorBar::m_nHorzMargin data member"
  - "CMFCColorBar::m_nRowHeight data member"
  - "CMFCColorBar::m_Palette data member"
  - "CMFCColorBar::m_colors data member"
  - "CMFCColorBar::m_nVertOffset data member"
  - "CMFCColorBar::m_nNumColumns data member"
  - "CMFCColorBar::m_bShowDocColorsWhenDocked data member"
ms.assetid: 4756ee40-25a5-4cee-af7f-acab7993d1c7
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
# CMFCColorBar Class
The `CMFCColorBar` class represents a docking control bar that can select colors in a document or application.  
  
## Syntax  
  
```  
class CMFCColorBar : public CMFCPopupMenuBar  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorBar::CMFCColorBar](#cmfccolorbar__cmfccolorbar)|Constructs a `CMFCColorBar` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorBar::ContextToSize](#cmfccolorbar__contexttosize)|Calculates the vertical and horizontal margins that are required to contain the buttons on the color bar control and then adjusts the location of those buttons.|  
|[CMFCColorBar::CreateControl](#cmfccolorbar__createcontrol)|Creates a color bar control window, attaches it to the `CMFCColorBar` object, and resizes the control to contain the specified palette of colors.|  
|[CMFCColorBar::Create](#cmfccolorbar__create)|Creates a color bar control window and attaches it to the `CMFCColorBar` object.|  
|[CMFCColorBar::EnableAutomaticButton](#cmfccolorbar__enableautomaticbutton)|Shows or hides the automatic button.|  
|[CMFCColorBar::EnableOtherButton](#cmfccolorbar__enableotherbutton)|Enables or disables the display of a dialog box that lets the user select more colors.|  
|[CMFCColorBar::GetColor](#cmfccolorbar__getcolor)|Retrieves the currently selected color.|  
|[CMFCColorBar::GetCommandID](#cmfccolorbar__getcommandid)|Retrieves the command ID of the current color bar control.|  
|[CMFCColorBar::GetHighlightedColor](#cmfccolorbar__gethighlightedcolor)|Retrieves the color that signifies that a color button has the focus; that is, the button is *hot*.|  
|[CMFCColorBar::GetHorzMargin](#cmfccolorbar__gethorzmargin)|Retrieves the horizontal margin, which is the space between the left or right color cell and the client area boundary.|  
|[CMFCColorBar::GetVertMargin](#cmfccolorbar__getvertmargin)|Retrieves the vertical margin, which is the space between the top or bottom color cell and the client area boundary.|  
|[CMFCColorBar::IsTearOff](#cmfccolorbar__istearoff)|Indicates whether the current color bar is dockable.|  
|[CMFCColorBar::SetColor](#cmfccolorbar__setcolor)|Sets the color that is currently selected.|  
|[CMFCColorBar::SetColorName](#cmfccolorbar__setcolorname)|Sets a new name for a specified color.|  
|[CMFCColorBar::SetCommandID](#cmfccolorbar__setcommandid)|Sets a new command ID for a color bar control.|  
|[CMFCColorBar::SetDocumentColors](#cmfccolorbar__setdocumentcolors)|Sets the list of colors that are used in the current document.|  
|[CMFCColorBar::SetHorzMargin](#cmfccolorbar__sethorzmargin)|Sets the horizontal margin, which is the space between the left or right color cell and the client area boundary.|  
|[CMFCColorBar::SetVertMargin](#cmfccolorbar__setvertmargin)|Sets the vertical margin, which is the space between the top or bottom color cell and the client area boundary.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCColorBar::AdjustLocations](#cmfccolorbar__adjustlocations)|Adjusts the positions of the color buttons on the color bar control.|  
|[CMFCColorBar::AllowChangeTextLabels](#cmfccolorbar__allowchangetextlabels)|Indicates whether the text label of color buttons can change.|  
|[CMFCColorBar::AllowShowOnList](#cmfccolorbar__allowshowonlist)|Indicates whether the color bar control object can appear in a toolbar list during the customization process.|  
|[CMFCColorBar::CalcSize](#cmfccolorbar__calcsize)|Called by the framework as part of the layout calculation process.|  
|[CMFCColorBar::CreatePalette](#cmfccolorbar__createpalette)|Initalizes a palette with the colors in a specified array of colors.|  
|[CMFCColorBar::GetColorGridSize](#cmfccolorbar__getcolorgridsize)|Calculates the number of rows and columns in the grid of a color bar control.|  
|[CMFCColorBar::GetExtraHeight](#cmfccolorbar__getextraheight)|Calculates the additional height that the current color bar requires to display miscellaneous user interface elements such as the **Other** button, document colors, and so on.|  
|[CMFCColorBar::InitColors](#cmfccolorbar__initcolors)|Initializes an array of colors with the colors in a specified palette or the system default palette.|  
|[CMFCColorBar::OnKey](#cmfccolorbar__onkey)|Called by the framework when a user presses a keyboard button.|  
|[CMFCColorBar::OnSendCommand](#cmfccolorbar__onsendcommand)|Called by the framework to close a hierarchy of popup controls.|  
|[CMFCColorBar::OnUpdateCmdUI](#cmfccolorbar__onupdatecmdui)|Called by the framework to enable or disable a user-interface item of a color bar control before the item is displayed.|  
|[CMFCColorBar::OpenColorDialog](#cmfccolorbar__opencolordialog)|Opens a color dialog box.|  
|[CMFCColorBar::Rebuild](#cmfccolorbar__rebuild)|Completely redraws the color bar control.|  
|[CMFCColorBar::SelectPalette](#cmfccolorbar__selectpalette)|Sets the logical palette of the specified device context to the palette of the parent button of the current color bar control.|  
|[CMFCColorBar::SetPropList](#cmfccolorbar__setproplist)|Sets the `m_pWndPropList` protected data member to the specified pointer to a property grid control.|  
|[CMFCColorBar::ShowCommandMessageString](#cmfccolorbar__showcommandmessagestring)|Requests the frame window that owns the color bar control to update the message line in the status bar.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|`m_bInternal`|A Boolean field that determines whether mouse events are processed. Typically, mouse events are processed when this field is `TRUE` and customization mode is `FALSE`.|  
|`m_bIsEnabled`|A Boolean that indicates whether a control is enabled.|  
|`m_bIsTearOff`|A Boolean that indicates whether the color bar control supports docking.|  
|`m_BoxSize`|A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that specifies the size of a cell in a color bar grid.|  
|`m_bShowDocColorsWhenDocked`|A Boolean that indicates whether to show document colors when the color bar is docked. For more information, see [CMFCColorBar::SetDocumentColors](#cmfccolorbar__setdocumentcolors).|  
|`m_bStdColorDlg`|A Boolean that indicates whether to show the standard system color dialog box or the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) dialog box. For more information, see [CMFCColorBar::EnableOtherButton](#cmfccolorbar__enableotherbutton).|  
|`m_ColorAutomatic`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) that stores the current automatic color. For more information, see [CMFCColorBar::EnableOtherButton](#cmfccolorbar__enableotherbutton).|  
|`m_ColorNames`|An [CMap](../../mfc/reference/cmap-class.md) object that associates a set of RGB colors with their names.|  
|`m_colors`|A [CArray](../../mfc/reference/carray-class.md) of [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) values that contains the colors that are displayed in the color bar control.|  
|`m_ColorSelected`|A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that is the color that the user has currently selected from the color bar control.|  
|`m_lstDocColors`|A [CList](../../mfc/reference/clist-class.md) of [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) values that contains the colors that are currently used in a document.|  
|`m_nCommandID`|An unsigned integer that is the command ID of a color button.|  
|`m_nHorzMargin`|An integer that is the horizontal margin between the color buttons in a grid of colors.|  
|`m_nHorzOffset`|An integer that is the horizontal offset to the center of the color button. This value is significant if the button displays text or an image in addition to a color.|  
|`m_nNumColumns`|An integer that is the number of columns in a color bar control grid of colors.|  
|`m_nNumColumnsVert`|An integer that is the number of columns in a vertically oriented grid of colors.|  
|`m_nNumRowsHorz`|An integer that is the number of columns in a horizontally oriented grid of colors.|  
|`m_nRowHeight`|An integer that is the height of a row of color buttons in a grid of colors.|  
|`m_nVertMargin`|An integer that is the vertical margin between the color buttons in a grid of colors.|  
|`m_nVertOffset`|An integer that is the vertical offset to the center of the color button. This value is significant if the button displays text or an image in addition to a color.|  
|`m_Palette`|A [CPalette](../../mfc/reference/cpalette-class.md) of the colors that are used in the color bar control.|  
|`m_pParentBtn`|A pointer to a [CMFCColorButton](../../mfc/reference/cmfccolorbutton-class.md) object that is the parent of the current button. This value is significant if the color button is in a hierarchy of toolbar controls or is in a color property grid control.|  
|`m_pParentRibbonBtn`|A pointer to a [CMFCRibbonColorButton](../../mfc/reference/cmfcribboncolorbutton-class.md) object that is on the ribbon and is the parent button of the current button. This value is significant if the color button is in a hierarchy of toolbar controls or is in a color property grid control.|  
|`m_pWndPropList`|A pointer to a [CMFCPropertyGridCtrl](../../mfc/reference/cmfcpropertygridctrl-class.md) object.|  
|`m_strAutoColor`|A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is the text that is displayed on the **Automatic** button. For more information, see [CMFCColorBar::EnableAutomaticButton](#cmfccolorbar__enableautomaticbutton).|  
|`m_strDocColors`|A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is the text that is displayed on the document colors button. For more information, see [CMFCColorBar::SetDocumentColors](#cmfccolorbar__setdocumentcolors).|  
|`m_strOtherColor`|A [CString](../../atl-mfc-shared/reference/cstringt-class.md) that is the text that is displayed on the *other* button. For more information, see [CMFCColorBar::EnableOtherButton](#cmfccolorbar__enableotherbutton).|  
  
## Remarks  
 Usually, you do not create a `CMFCColorBar` object directly. Instead, the [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md) (used in menus and toolbars) or the [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md) creates the `CMFCColorBar` object.  
  
 The `CMFCColorBar` class provides the following functionality:  
  
-   Automatically adjusts the list of document colors.  
  
-   Saves and restores its state, together with the document state.  
  
-   Manages the "automatic" button.  
  
-   Uses the [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md) control to select a custom color.  
  
-   Supports a "tear-off" state (if it is created by using the [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md)).  
  
 To incorporate the `CMFCColorBar` functionality into your application:  
  
1.  Create a regular menu button and assign it an ID, for example ID_CHAR_COLOR.  
  
2.  In your frame window class, override the [CFrameWndEx::OnShowPopupMenu](../../mfc/reference/cframewndex-class.md#cframewndex__onshowpopupmenu) method and replace the regular menu button with a [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md) object (by calling [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__replacebutton)).  
  
3.  Set all the styles and enable or disable the features of the `CMFCColorBar` object during [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md) creation. The `CMFCColorMenuButton` object dynamically creates the `CMFCColorBar` object after the framework calls the `CreatePopupMenu` method.  
  
 When the user clicks a color bar control button, the framework uses the `ON_COMMAND` macro to notify the parent of the color bar control. In the macro, the command ID parameter is the value that you assigned to the color bar control button in step 1 (ID_CHAR_COLOR in this example). For more information, see the [CMFCColorMenuButton Class](../../mfc/reference/cmfccolormenubutton-class.md), [CMFCColorButton Class](../../mfc/reference/cmfccolorbutton-class.md), [CMFCColorPickerCtrl Class](../../mfc/reference/cmfccolorpickerctrl-class.md), [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md), and [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md) classes.  
  
## Example  
 The following example demonstrates how to configure a color bar by using various methods in the `CMFCColorBar` class. The methods set the horizontal and vertical margins, enable the other button, create a color bar control window, and sets the currently selected color. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#1](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#2](../../mfc/reference/codesnippet/cpp/cmfccolorbar-class_2.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)  
  
 [CMFCColorBar](../../mfc/reference/cmfccolorbar-class.md)  
  
## Requirements  
 **Header:** afxcolorbar.h  
  
##  <a name="cmfccolorbar__adjustlocations"></a>  CMFCColorBar::AdjustLocations  
 Adjusts the positions of the color buttons on the color bar control.  
  
```  
virtual void AdjustLocations();
```  
  
### Remarks  
 This method is called by the framework during `WM_SIZE` message processing.  
  
##  <a name="cmfccolorbar__allowchangetextlabels"></a>  CMFCColorBar::AllowChangeTextLabels  
 Indicates whether the text label of color buttons can change.  
  
```  
virtual BOOL AllowChangeTextLabels() const;

 
```  
  
### Return Value  
 Always `FALSE`.  
  
### Remarks  
 By default, this method always returns `FALSE`, which means text labels cannot be modified. Override this method to enable modifying text labels.  
  
##  <a name="cmfccolorbar__allowshowonlist"></a>  CMFCColorBar::AllowShowOnList  
 Indicates whether the color bar control object can appear in a toolbar list during the customization process.  
  
```  
virtual BOOL AllowShowOnList() const;

 
```  
  
### Return Value  
 Always `TRUE`.  
  
### Remarks  
 By default, this method always returns `TRUE`, which means the framework can display the color bar control during the customization process. Override this method to implement a different behavior.  
  
##  <a name="cmfccolorbar__calcsize"></a>  CMFCColorBar::CalcSize  
 Called by the framework as part of the layout calculation process.  
  
```  
virtual CSize CalcSize(BOOL bVertDock);
```  
  
### Parameters  
 [in] `bVertDock`  
 `TRUE` to specify that the color bar control is docked vertically; `FALSE` to specify that the color bar control is docked horizontally.  
  
### Return Value  
 The size of the array of color buttons in a color bar control.  
  
##  <a name="cmfccolorbar__cmfccolorbar"></a>  CMFCColorBar::CMFCColorBar  
 Constructs a `CMFCColorBar` object.  
  
```  
CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    int nColumns,  
    int nRowsDockHorz,  
    int nColDockVert,  
    COLORREF colorAutomatic,  
    UINT nCommandID,  
    CMFCColorButton* pParentBtn);

 
CMFCColorBar(
    const CArray<COLORREF,COLORREF>& colors,  
    COLORREF color,  
    LPCTSTR lpszAutoColor,  
    LPCTSTR lpszOtherColor,  
    LPCTSTR lpszDocColors,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    int nColumns,  
    COLORREF colorAutomatic,  
    UINT nCommandID,  
    CMFCRibbonColorButton* pParentRibbonBtn);

 
CMFCColorBar(
    CMFCColorBar& src,  
    UINT uiCommandID);
```  
  
### Parameters  
 [in] `colors`  
 An array of colors that the framework displays on the color bar control.  
  
 [in] `color`  
 The initially selected color.  
  
 [in] `lpszAutoColor`  
 The text label of the *automatic* (default) color button, or `NULL`.  
  
 The standard label for the automatic button is **Automatic**.  
  
 [in] `lpszOtherColor`  
 The text label of the *other* button, which displays more color choices, or `NULL`.  
  
 The standard label for the other button is **More Colors...**.  
  
 [in] `lpszDocColors`  
 The text label of the document colors button. The document colors palette lists all the colors that the document currently uses.  
  
 [in] `lstDocColors`  
 A list of colors that the document currently uses.  
  
 [in] `nColumns`  
 The number of columns that the array of colors has.  
  
 [in] `nRowsDockHorz`  
 The number of rows that the color bar has when it is docked horizontally.  
  
 [in] `nColDockVert`  
 The number of columns that the color bar has when it is docked vertically.  
  
 [in] `colorAutomatic`  
 The default color that the framework applies when you click the automatic button.  
  
 [in] `nCommandID`  
 The color bar control command ID.  
  
 [in] `pParentBtn`  
 A pointer to a parent button.  
  
 [in] `src`  
 An existing `CMFCColorBar` object to be copied into the new `CMFCColorBar` object.  
  
 [in] `uiCommandID`  
 The command ID.  
  
##  <a name="cmfccolorbar__contexttosize"></a>  CMFCColorBar::ContextToSize  
 Calculates the vertical and horizontal margins that are required to contain the buttons on the color bar control, and adjusts the location of those buttons.  
  
```  
void ContextToSize(
    BOOL bSquareButtons = TRUE,   
    BOOL bCenterButtons = TRUE);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `bSquareButtons`|`TRUE` to specify that the shape of the buttons on a color bar control are square; otherwise, `FALSE`. The default value is `TRUE`.|  
|[in] `bCenterButtons`|`TRUE` to specify that the content on the face of a color bar control button is centered; otherwise, `FALSE`. The default value is `TRUE`.|  
  
### Remarks  
  
##  <a name="cmfccolorbar__create"></a>  CMFCColorBar::Create  
 Creates a color bar control window and attaches it to the `CMFCColorBar` object.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle,  
    UINT nID,  
    CPalette* pPalette=NULL,  
    int nColumns=0,  
    int nRowsDockHorz=0,  
    int nColDockVert=0);
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window.  
  
 [in] `dwStyle`  
 A bitwise combination (OR) of [window styles](../../mfc/reference/window-styles.md).  
  
 [in] `nID`  
 The command ID.  
  
 [in] `pPalette`  
 Pointer to a palette of colors. The default is `NULL`.  
  
 [in] `nColumns`  
 The number of columns in the color bar control. The default is 0.  
  
 [in] `nRowsDockHorz`  
 The number of rows in the color bar control when it is docked horizontally. The default is 0.  
  
 [in] `nColDockVert`  
 The number of columns in the color bar control when it is docked vertically. The default is 0.  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### Remarks  
 To construct a `CMFCColorBar` object, call the class constructor then this method. The `Create` method creates the Windows control and initializes a list of colors.  
  
##  <a name="cmfccolorbar__createcontrol"></a>  CMFCColorBar::CreateControl  
 Creates a color bar control window, attaches it to the `CMFCColorBar` object, and resizes the control window to contain the specified palette of colors.  
  
```  
virtual BOOL CreateControl(
    CWnd* pParentWnd,  
    const CRect& rect,  
    UINT nID,  
    int nColumns=-1,  
    CPalette* pPalette=NULL);
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window. Cannot be `NULL`.  
  
 [in] `rect`  
 A bounding rectangle that specifies where to draw the color bar control.  
  
 [in] `nID`  
 The control ID.  
  
 [in] `nColumns`  
 The ideal number of columns in the color bar control. This method modifies that number to fit the specified palette of colors. The default is -1, which means this parameter is not specified.  
  
 [in] `pPalette`  
 Pointer to a palette of colors, or `NULL`. If this parameter is `NULL`, this method calculates the size of the color bar control as if 20 colors were specified. The default is `NULL`.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise `FALSE`.  
  
### Remarks  
 This method uses the `rect`, `nColumns`, and `pPalette` parameters to calculate the appropriate number or rows and columns in the color bar control, and then calls the [CMFCColorBar::Create](#cmfccolorbar__create) method.  
  
##  <a name="cmfccolorbar__createpalette"></a>  CMFCColorBar::CreatePalette  
 Initializes a palette with the colors in a specified array of colors.  
  
```  
static BOOL CreatePalette(
    const CArray<COLORREF, COLORREF>& arColors,   
    CPalette& palette);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `arColors`|An array of colors.|  
|[in] `palette`|A palette of colors.|  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
##  <a name="cmfccolorbar__enableautomaticbutton"></a>  CMFCColorBar::EnableAutomaticButton  
 Shows or hides the automatic button.  
  
```  
void EnableAutomaticButton(
    LPCTSTR lpszLabel,  
    COLORREF colorAutomatic,  
    BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The text label of the *automatic* (default) color button, or `NULL`.  
  
 The standard label for the automatic button is **Automatic**.  
  
 [in] `colorAutomatic`  
 The default color that the framework applies when you click the automatic button.  
  
 [in] `bEnable`  
 `TRUE` to enable the automatic button; `FALSE` to disable the automatic button. The default value is `TRUE`.  
  
### Remarks  
 The text label of the automatic button is deleted if the `lpszLabel` parameter is `NULL` or the `bEnable` parameter is `FALSE`.  
  
##  <a name="cmfccolorbar__enableotherbutton"></a>  CMFCColorBar::EnableOtherButton  
 Enables or disables the display of a dialog box that lets the user select more colors.  
  
```  
void EnableOtherButton(
    LPCTSTR lpszLabel,  
    BOOL bAltColorDlg=TRUE,  
    BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `lpszLabel`  
 The text label of the *other* button, which displays more color choices, or `NULL`.  
  
 The standard label for this button is **More Colors...**.  
  
 [in] `bAltColorDlg`  
 `TRUE` to display the [CMFCColorDialog](../../mfc/reference/cmfccolordialog-class.md) dialog box; `FALSE` to display the standard [CColorDialog](../../mfc/reference/ccolordialog-class.md) dialog box. The default value is `TRUE`.  
  
 [in] `bEnable`  
 `TRUE` to enable the                                button; `FALSE` to disable the button. The default value is `TRUE`.  
  
##  <a name="cmfccolorbar__getcolor"></a>  CMFCColorBar::GetColor  
 Retrieves the currently selected color.  
  
```  
COLORREF GetColor() const;

 
```  
  
### Return Value  
 The currently selected color.  
  
##  <a name="cmfccolorbar__getcolorgridsize"></a>  CMFCColorBar::GetColorGridSize  
 Calculates the number of rows and columns in the grid of a color bar control.  
  
```  
CSize GetColorGridSize(BOOL bVertDock) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `bVertDock`|`TRUE` to perform the calculation for a vertically docked color bar control; otherwise, perform the calculation for a horizontally docked control.|  
  
### Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object whose `cx` component contains the number of columns and whose `cy` component contains the number of rows.  
  
##  <a name="cmfccolorbar__getcommandid"></a>  CMFCColorBar::GetCommandID  
 Retrieves the command ID of the current color bar control.  
  
```  
UINT GetCommandID() const;

 
```  
  
### Return Value  
 A command ID.  
  
### Remarks  
 When the user selects a new color, the framework sends the command ID in a `WM_COMMAND` message to notify the parent of the `CMFCColorBar` object.  
  
##  <a name="cmfccolorbar__getextraheight"></a>  CMFCColorBar::GetExtraHeight  
 Calculates the additional height that the current color bar requires to display miscellaneous user interface elements, such as the **Other** button or document colors.  
  
```  
int GetExtraHeight(int nNumColumns) const;

 
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `nNumColumns`|If the color bar control contains document colors, the number of columns to display in the grid of document colors. Otherwise, this value is not used.|  
  
### Return Value  
 The calculated extra height that is required.  
  
##  <a name="cmfccolorbar__gethighlightedcolor"></a>  CMFCColorBar::GetHighlightedColor  
 Retrieves the color that signifies that a color button has the focus; that is, the button is *hot*.  
  
```  
COLORREF GetHighlightedColor() const;

 
```  
  
### Return Value  
 An RGB value.  
  
### Remarks  
  
##  <a name="cmfccolorbar__gethorzmargin"></a>  CMFCColorBar::GetHorzMargin  
 Retrieves the horizontal margin, which is the space between the left or right color cell and the client area boundary.  
  
```  
int GetHorzMargin();
```  
  
### Return Value  
 The horizontal margin.  
  
##  <a name="cmfccolorbar__getvertmargin"></a>  CMFCColorBar::GetVertMargin  
 Retrieves the vertical margin, which is the space between the top or bottom color cell and the client area boundary.  
  
```  
int GetVertMargin() const;

 
```  
  
### Return Value  
 The vertical margin.  
  
##  <a name="cmfccolorbar__initcolors"></a>  CMFCColorBar::InitColors  
 Initializes an array of colors with the colors in a specified palette, or with the system default palette.  
  
```  
static int InitColors(
    CPalette* pPalette,   
    CArray<COLORREF, COLORREF>& arColors);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pPalette`|A pointer to a palette object, or `NULL`. If this parameter is `NULL`, this method uses the default palette of the operating system.|  
|[in] `arColors`|An array of colors.|  
  
### Return Value  
 The number of elements in the array of colors.  
  
##  <a name="cmfccolorbar__istearoff"></a>  CMFCColorBar::IsTearOff  
 Indicates whether the current color bar is dockable.  
  
```  
BOOL IsTearOff() const;

 
```  
  
### Return Value  
 `TRUE` if the current color bar control is dockable; otherwise, `FALSE`.  
  
### Remarks  
 If the color bar control is dockable, it can be torn off a control bar and docked at another location.  
  
##  <a name="cmfccolorbar__onkey"></a>  CMFCColorBar::OnKey  
 Called by the framework when a user presses a keyboard button.  
  
```  
virtual BOOL OnKey(UINT nChar);
```  
  
### Parameters  
 [in] `nChar`  
 The virtual-key code for the key that a user pressed.  
  
### Return Value  
 `TRUE` if this method processes the specified key; otherwise, `FALSE`.  
  
##  <a name="cmfccolorbar__onsendcommand"></a>  CMFCColorBar::OnSendCommand  
 Called by the framework to close a hierarchy of pop-up controls.  
  
```  
virtual BOOL OnSendCommand(const CMFCToolBarButton* pButton);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pButton`|Pointer to a control that resides on a toolbar.|  
  
### Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
##  <a name="cmfccolorbar__onupdatecmdui"></a>  CMFCColorBar::OnUpdateCmdUI  
 Called by the framework to enable or disable a user-interface item of a color bar control before the item is displayed.  
  
```  
virtual void OnUpdateCmdUI(
    CFrameWnd* pTarget,  
    BOOL bDisableIfNoHndler);
```  
  
### Parameters  
 [in] `pTarget`  
 Pointer to a window that contains a user-interface item to update.  
  
 [in] `bDisableIfNoHndler`  
 `TRUE` to disable the user-interface item if no handler is defined in a message map; otherwise, `FALSE`.  
  
### Remarks  
 When a user of your application clicks a user-interface item, the item must know whether it should be displayed as enabled or disabled. The target of the command message provides this information by implementing an `ON_UPDATE_COMMAND_UI` command handler. Use this method to help process the command. For more information, see [CCmdUI Class](../../mfc/reference/ccmdui-class.md).  
  
##  <a name="cmfccolorbar__opencolordialog"></a>  CMFCColorBar::OpenColorDialog  
 Opens a color dialog box.  
  
```  
virtual BOOL OpenColorDialog(
    const COLORREF colorDefault,  
    COLORREF& colorRes);
```  
  
### Parameters  
 [in] `colorDefault`  
 The color that is selected by default when the color dialog box opens.  
  
 [out] `colorRes`  
 The color that a user selected.  
  
### Return Value  
 `TRUE` if the user selected a color; `FALSE` if the user canceled the color dialog box.  
  
### Remarks  
  
##  <a name="cmfccolorbar__rebuild"></a>  CMFCColorBar::Rebuild  
 Completely redraws the color bar control.  
  
```  
virtual void Rebuild();
```  
  
##  <a name="cmfccolorbar__selectpalette"></a>  CMFCColorBar::SelectPalette  
 Sets the logical palette of the specified device context to the palette of the parent button of the current color bar control.  
  
```  
CPalette* SelectPalette(CDC* pDC);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pDC`|Pointer to the device context of the parent button of the current color bar control.|  
  
### Return Value  
 Pointer to the palette that is replaced by the palette of the parent button of the current color bar control.  
  
##  <a name="cmfccolorbar__setcolor"></a>  CMFCColorBar::SetColor  
 Sets the color that is currently selected.  
  
```  
void SetColor(COLORREF color);
```  
  
### Parameters  
 [in] `color`  
 An RGB color value.  
  
##  <a name="cmfccolorbar__setcolorname"></a>  CMFCColorBar::SetColorName  
 Sets a new name for a specified color.  
  
```  
static void SetColorName(
    COLORREF color,  
    const CString& strName);
```  
  
### Parameters  
 [in] `color`  
 The RGB value of a color.  
  
 [in] `strName`  
 The new name for the specified color.  
  
### Remarks  
 This method changes the name of the specified color in all `CMFCColorBar` objects in your application.  
  
##  <a name="cmfccolorbar__setcommandid"></a>  CMFCColorBar::SetCommandID  
 Sets a new command ID for a color bar control.  
  
```  
void SetCommandID(UINT nCommandID);
```  
  
### Parameters  
 [in] `nCommandID`  
 A command ID.  
  
### Remarks  
 Call this method to modify the command ID of a color bar control and to notify the parent window of the control that the ID has changed.  
  
##  <a name="cmfccolorbar__setdocumentcolors"></a>  CMFCColorBar::SetDocumentColors  
 Sets the list of colors that are used in the current document.  
  
```  
void SetDocumentColors(
    LPCTSTR lpszCaption,  
    CList<COLORREF,COLORREF>& lstDocColors,  
    BOOL bShowWhenDocked=FALSE);
```  
  
### Parameters  
 [in] `lpszCaption`  
 A caption that is displayed when the color bar control is not docked.  
  
 [in] `lstDocColors`  
 A list of colors that replaces the current document colors.  
  
 [in] `bShowWhenDocked`  
 `TRUE` to show document colors when the color bar control is docked; otherwise, `FALSE`. The default value is `FALSE`.  
  
### Remarks  
 *Document colors* are the colors that are currently used in a document. The framework automatically maintains a list of document colors, but you can use this method to modify the list.  
  
##  <a name="cmfccolorbar__sethorzmargin"></a>  CMFCColorBar::SetHorzMargin  
 Sets the horizontal margin, which is the space between the left or right color cell and the boundary of the client area.  
  
```  
void SetHorzMargin(int nHorzMargin);
```  
  
### Parameters  
 [in] `nHorzMargin`  
 The horizontal margin, in pixels.  
  
### Remarks  
 By default, the [CMFCColorBar::CMFCColorBar](#cmfccolorbar__cmfccolorbar) constructor sets the horizontal margin to 4 pixels.  
  
##  <a name="cmfccolorbar__setproplist"></a>  CMFCColorBar::SetPropList  
 Sets the `m_pWndPropList` protected data member to the specified pointer to a property grid control.  
  
```  
void SetPropList(CMFCPropertyGridCtrl* pWndList);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|[in] `pWndList`|Pointer to property grid control object.|  
  
##  <a name="cmfccolorbar__setvertmargin"></a>  CMFCColorBar::SetVertMargin  
 Sets the vertical margin, which is the space between the top or bottom color cell and the client area boundary.  
  
```  
void SetVertMargin(int nVertMargin);
```  
  
### Parameters  
 [in] `nVertMargin`  
 The vertical margin, in pixels.  
  
### Remarks  
 By default, the [CMFCColorBar::CMFCColorBar](#cmfccolorbar__cmfccolorbar) constructor sets the vertical margin to 4 pixels.  
  
##  <a name="cmfccolorbar__showcommandmessagestring"></a>  CMFCColorBar::ShowCommandMessageString  
 Requests the frame window that owns the color bar control to update the message line in the status bar.  
  
```  
virtual void ShowCommandMessageString(UINT uiCmdId);
```  
  
### Parameters  
 [in] `uiCmdId`  
 A command ID. (This parameter is ignored.)  
  
### Remarks  
 This method sends the `WM_SETMESSAGESTRING` message to the owner of the color bar control.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)
