---
title: "CMFCDropDownToolbarButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDropDownToolbarButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDropDownToolbarButton class"
  - "OnCancelMode method"
ms.assetid: bc9d69e6-bd3e-4c15-9368-e80a504a0ba7
caps.latest.revision: 31
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
# CMFCDropDownToolbarButton Class
A type of toolbar button that behaves like a regular button when it is clicked. However, it opens a drop-down toolbar ( [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md) if the user presses and holds the toolbar button down.  
  
## Syntax  
  
```  
class CMFCDropDownToolbarButton : public CMFCToolBarButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CMFCDropDownToolbarButton](#cmfcdropdowntoolbarbutton__cmfcdropdowntoolbarbutton)|Constructs a `CMFCDropDownToolbarButton` object.|  
|`CMFCDropDownToolbarButton::~CMFCDropDownToolbarButton`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::CopyFrom](#cmfcdropdowntoolbarbutton__copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__copyfrom).)|  
|`CMFCDropDownToolbarButton::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|[CMFCDropDownToolbarButton::DropDownToolbar](#cmfcdropdowntoolbarbutton__dropdowntoolbar)|Opens a drop-down toolbar.|  
|[CMFCDropDownToolbarButton::ExportToMenuButton](#cmfcdropdowntoolbarbutton__exporttomenubutton)|Copies text from the toolbar button to a menu. (Overrides [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__exporttomenubutton).)|  
|[CMFCDropDownToolbarButton::GetDropDownToolBar](#cmfcdropdowntoolbarbutton__getdropdowntoolbar)|Retrieves the drop-down toolbar that is associated with the button.|  
|`CMFCDropDownToolbarButton::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|[CMFCDropDownToolbarButton::IsDropDown](#cmfcdropdowntoolbarbutton__isdropdown)|Determines whether the drop-down toolbar is currently open.|  
|[CMFCDropDownToolbarButton::IsExtraSize](#cmfcdropdowntoolbarbutton__isextrasize)|Determines whether the button can be displayed with an extended border. (Overrides [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__isextrasize).)|  
|[CMFCDropDownToolbarButton::OnCalculateSize](#cmfcdropdowntoolbarbutton__oncalculatesize)|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncalculatesize).)|  
|`CMFCDropDownToolbarButton::OnCancelMode`|Called by the framework to handle the [WM_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615) message. (Overrides `CMCToolBarButton::OnCancelMode`.)|  
|[CMFCDropDownToolbarButton::OnChangeParentWnd](#cmfcdropdowntoolbarbutton__onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd).)|  
|[CMFCDropDownToolbarButton::OnClick](#cmfcdropdowntoolbarbutton__onclick)|Called by the framework when the user clicks the mouse button. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick).)|  
|[CMFCDropDownToolbarButton::OnClickUp](#cmfcdropdowntoolbarbutton__onclickup)|Called by the framework when the user releases the mouse button. (Overrides [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclickup).)|  
|[CMFCDropDownToolbarButton::OnContextHelp](#cmfcdropdowntoolbarbutton__oncontexthelp)|Called by the framework when the parent toolbar handles a `WM_HELPHITTEST` message. (Overrides [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncontexthelp).)|  
|[CMFCDropDownToolbarButton::OnCustomizeMenu](#cmfcdropdowntoolbarbutton__oncustomizemenu)|Modifies the provided menu when the application displays a shortcut menu on the parent toolbar. (Overrides [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncustomizemenu).)|  
|[CMFCDropDownToolbarButton::OnDraw](#cmfcdropdowntoolbarbutton__ondraw)|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondraw).)|  
|[CMFCDropDownToolbarButton::OnDrawOnCustomizeList](#cmfcdropdowntoolbarbutton__ondrawoncustomizelist)|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist).)|  
|[CMFCDropDownToolbarButton::Serialize](#cmfcdropdowntoolbarbutton__serialize)|Reads this object from an archive or writes it to an archive. (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__serialize).)|  
|[CMFCDropDownToolbarButton::SetDefaultCommand](#cmfcdropdowntoolbarbutton__setdefaultcommand)|Sets the default command that the framework uses when a user clicks the button.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDropDownToolbarButton::m_uiShowBarDelay](#cmfcdropdowntoolbarbutton__m_uishowbardelay)|Specifies the length of time that a user must hold the mouse button down before the drop-down toolbar appears.|  
  
## Remarks  
 A `CMFCDropDownToolBarButton` differs from an ordinary button in that it has a small arrow in the lower-right corner of the button. After the user selects a button from the drop-down toolbar, the framework displays its icon on the top-level toolbar button (the button with the small arrow in the lower-right corner).  
  
 For information about how to implement a drop-down toolbar, see [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md).  
  
 The `CMFCDropDownToolBarButton` object can be exported to a [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) object and displayed as a menu button with a pop-up menu.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCDropDownToolbarButton](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)  
  
## Requirements  
 **Header:** afxdropdowntoolbar.h  
  
##  <a name="cmfcdropdowntoolbarbutton__copyfrom"></a>  CMFCDropDownToolbarButton::CopyFrom  
 Copies the properties of another toolbar button to the current button.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### Parameters  
 [in] `src`  
 A reference to the source button from which to copy.  
  
### Remarks  
 Call this method to copy another toolbar button to this toolbar button. `src` must be of type `CMFCDropDownToolbarButton`.  
  
##  <a name="cmfcdropdowntoolbarbutton__cmfcdropdowntoolbarbutton"></a>  CMFCDropDownToolbarButton::CMFCDropDownToolbarButton  
 Constructs a `CMFCDropDownToolbarButton` object.  
  
```  
CMFCDropDownToolbarButton();

 
CMFCDropDownToolbarButton(
    LPCTSTR lpszName,  
    CMFCDropDownToolBar* pToolBar);
```  
  
### Parameters  
 [in] `lpszName`  
 The default text of the button.  
  
 [in] `pToolBar`  
 A pointer to the `CMFCDropDownToolBar` object that is displayed when the user presses the button.  
  
### Remarks  
 The second overload of the constructor copies to the drop-down button the first button from the toolbar that `pToolBar` specifies.  
  
 Typically, a drop-down toolbar button uses the text from the most recently used button in the toolbar that `pToolBar` specifies. It uses the text specified by `lpszName` when the button is converted to a menu button or is displayed in the **Commands** tab of the **Customize** dialog box. For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCDropDownToolbarButton` class. This code snippet is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#31](../../mfc/codesnippet/cpp/cmfcdropdowntoolbarbutton-class_1.cpp)]  
  
##  <a name="cmfcdropdowntoolbarbutton__dropdowntoolbar"></a>  CMFCDropDownToolbarButton::DropDownToolbar  
 Opens a drop-down toolbar.  
  
```  
BOOL DropDownToolbar(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 The parent window of the drop-down frame, or `NULL` to use the parent window of the drop-down toolbar button.  
  
### Return Value  
 Nonzero if the method is successful; otherwise 0.  
  
### Remarks  
 The [CMFCDropDownToolbarButton::OnClick](#cmfcdropdowntoolbarbutton__onclick) method calls this method to open the drop-down toolbar when the user presses and holds the toolbar button down.  
  
 This methods creates the drop-down toolbar by using the [CMFCDropDownFrame::Create](../../mfc/reference/cmfcdropdownframe-class.md#cmfcdropdownframe__create) method. If the parent toolbar is docked vertically, this method positions the drop-down toolbar either to the left-hand or right-hand side of the parent toolbar, depending on the fit. Otherwise, this method positions the drop-down toolbar underneath the parent toolbar.  
  
 This method fails if `pWnd` is `NULL` and the drop-down toolbar button does not have a parent window.  
  
##  <a name="cmfcdropdowntoolbarbutton__exporttomenubutton"></a>  CMFCDropDownToolbarButton::ExportToMenuButton  
 Copies text from the toolbar button to a menu.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;

 
```  
  
### Parameters  
 [in] `menuButton`  
 A reference to the target menu button.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 This method calls the base class implementation ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__exporttomenubutton)) and then appends to the target menu button a pop-up menu that contains each toolbar menu item in this button. This method does not append sub-menus to the pop-up menu.  
  
 This method fails if the parent toolbar, `m_pToolBar`, is `NULL` or the base class implementation returns `FALSE`.  
  
##  <a name="cmfcdropdowntoolbarbutton__getdropdowntoolbar"></a>  CMFCDropDownToolbarButton::GetDropDownToolBar  
 Retrieves the drop-down toolbar that is associated with the button.  
  
```  
CMFCToolBar* GetDropDownToolBar() const;

 
```  
  
### Return Value  
 The drop-down toolbar that is associated with the button.  
  
### Remarks  
 This method returns the `m_pToolBar` data member.  
  
##  <a name="cmfcdropdowntoolbarbutton__isdropdown"></a>  CMFCDropDownToolbarButton::IsDropDown  
 Determines whether the drop-down toolbar is currently open.  
  
```  
BOOL IsDropDown() const;

 
```  
  
### Return Value  
 Nonzero if the drop-down toolbar is currently open; otherwise 0.  
  
### Remarks  
 The framework opens the drop-down toolbar by using the [CMFCDropDownToolbarButton::DropDownToolbar](#cmfcdropdowntoolbarbutton__dropdowntoolbar) method. The framework closes the drop-down toolbar when the user presses the left-mouse button in the non-client area of the drop-down toolbar.  
  
##  <a name="cmfcdropdowntoolbarbutton__isextrasize"></a>  CMFCDropDownToolbarButton::IsExtraSize  
 Determines whether the button can be displayed with an extended border.  
  
```  
virtual BOOL IsExtraSize() const;

 
```  
  
### Return Value  
 Nonzero if the toolbar button can be displayed with an extended border; otherwise 0.  
  
### Remarks  
 For more information about extended borders, see [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__isextrasize).  
  
##  <a name="cmfcdropdowntoolbarbutton__m_uishowbardelay"></a>  CMFCDropDownToolbarButton::m_uiShowBarDelay  
 Specifies the length of time that a user must hold the mouse button down before the drop-down toolbar appears.  
  
```  
static UINT m_uiShowBarDelay;  
```  
  
### Remarks  
 The delay time is measured in milliseconds. The default value is 500. You can set another delay by changing the value of this shared data member.  
  
##  <a name="cmfcdropdowntoolbarbutton__oncalculatesize"></a>  CMFCDropDownToolbarButton::OnCalculateSize  
 Called by the framework to calculate the size of the button for the specified device context and docking state.  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the button.  
  
 [in] `sizeDefault`  
 The default size of the button.  
  
 [in] `bHorz`  
 The dock state of the parent toolbar. This parameter is `TRUE` if the toolbar is docked horizontally or is floating, or `FALSE` if the toolbar is docked vertically.  
  
### Return Value  
 A `SIZE` structure that contains the dimensions of the button, in pixels.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncalculatesize)) by adding the width of the drop-down arrow to the horizontal dimension of the button size.  
  
##  <a name="cmfcdropdowntoolbarbutton__onchangeparentwnd"></a>  CMFCDropDownToolbarButton::OnChangeParentWnd  
 Called by the framework when the button is inserted into a new toolbar.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### Parameters  
 [in] `pWndParent`  
 The new parent window.  
  
### Remarks  
 This method overrides the base class implementation ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd)) by clearing the text label ( [CMFCToolBarButton::m_strText](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__m_strtext)) and setting the [CMFCToolBarButton::m_bText](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__m_btext) and [CMFCToolBarButton::m_bUserButton](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__m_buserbutton) data members to `FALSE`.  
  
##  <a name="cmfcdropdowntoolbarbutton__onclick"></a>  CMFCDropDownToolbarButton::OnClick  
 Called by the framework when the user clicks the mouse button.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### Parameters  
 [in] `pWnd`  
 The parent window of the toolbar button.  
  
 [in] `bDelay`  
 `TRUE` if the message should be handled with a delay.  
  
### Return Value  
 Nonzero if the button processes the click message; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick), by updating the state of the drop-down toolbar.  
  
 When a user clicks the toolbar button, this method creates a timer that waits the length of time specified by the [CMFCDropDownToolbarButton::m_uiShowBarDelay](#cmfcdropdowntoolbarbutton__m_uishowbardelay) data member and then opens the drop-down toolbar by using the [CMFCDropDownToolbarButton::DropDownToolbar](#cmfcdropdowntoolbarbutton__dropdowntoolbar) method. This method closes the drop-down toolbar the second time the user clicks the toolbar button.  
  
##  <a name="cmfcdropdowntoolbarbutton__onclickup"></a>  CMFCDropDownToolbarButton::OnClickUp  
 Called by the framework when the user releases the mouse button.  
  
```  
virtual BOOL OnClickUp();
```  
  
### Return Value  
 Nonzero if the button processes the click message; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation, [CMFCToolBarButton::OnClickUp](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclickup), by updating the state of the drop-down toolbar.  
  
 This method stops the drop-down toolbar timer if it is active. It closes the drop-down toolbar if it is open.  
  
 For more information about the drop-down toolbar and drop-down toolbar timer, see [CMFCDropDownToolbarButton::OnClick](#cmfcdropdowntoolbarbutton__onclick).  
  
##  <a name="cmfcdropdowntoolbarbutton__oncontexthelp"></a>  CMFCDropDownToolbarButton::OnContextHelp  
 Called by the framework when the parent toolbar handles a `WM_HELPHITTEST` message.  
  
```  
virtual BOOL OnContextHelp(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
 The parent window of the toolbar button.  
  
### Return Value  
 Nonzero if the button processes the help message; otherwise 0.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncontexthelp)) by calling the [CMFCDropDownToolbarButton::OnClick](#cmfcdropdowntoolbarbutton__onclick) method with `bDelay` set to `FALSE`. This method returns the value that is returned by [CMFCDropDownToolbarButton::OnClick](#cmfcdropdowntoolbarbutton__onclick).  
  
 For more information about the `WM_HELPHITTEST message, see` [TN028: Context-Sensitive Help Support](../../mfc/tn028-context-sensitive-help-support.md).  
  
##  <a name="cmfcdropdowntoolbarbutton__oncustomizemenu"></a>  CMFCDropDownToolbarButton::OnCustomizeMenu  
 Modifies the provided menu when the application displays a shortcut menu on the parent toolbar.  
  
```  
virtual BOOL OnCustomizeMenu(CMenu* pMenu);
```  
  
### Parameters  
 [in] `pMenu`  
 The menu to customize.  
  
### Return Value  
 This method returns `TRUE`.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::OnCustomizeMenu](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncustomizemenu)) by disabling the following menu items:  
  
- **Copy Button Image**  
  
- **Button Appearance**  
  
- **Image**  
  
- **Text**  
  
- **Image and Text**  
  
 Override this method to modify the shortcut menu that the framework displays in customization mode.  
  
##  <a name="cmfcdropdowntoolbarbutton__ondraw"></a>  CMFCDropDownToolbarButton::OnDraw  
 Called by the framework to draw the button by using the specified styles and options.  
  
```  
virtual void OnDraw(
    CDC* pDC,  
    const CRect& rect,  
    CMFCToolBarImages* pImages,  
    BOOL bHorz = TRUE,  
    BOOL bCustomizeMode = FALSE,  
    BOOL bHighlight = FALSE,  
    BOOL bDrawBorder = TRUE,  
    BOOL bGrayDisabledButtons = TRUE);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the button.  
  
 [in] `rect`  
 The bounding rectangle of the button.  
  
 [in] `pImages`  
 The collection of toolbar images that is associated with the button.  
  
 [in] `bHorz`  
 The dock state of the parent toolbar. This parameter is `TRUE` when the button is docked horizontally and `FALSE` when the button is docked vertically.  
  
 [in] `bCustomizeMode`  
 Specifies whether the toolbar is in customization mode. This parameter is `TRUE` when the toolbar is in customization mode and `FALSE` when the toolbar is not in customization mode.  
  
 [in] `bHighlight`  
 Specifies whether the button is highlighted. This parameter is `TRUE` when the button is highlighted and `FALSE` when the button is not highlighted.  
  
 [in] `bDrawBorder`  
 Specifies whether the button should display its border. This parameter is `TRUE` when the button should display its border and `FALSE` when the button should not display its border.  
  
 [in] `bGrayDisabledButtons`  
 Specifies whether to shade disabled buttons or use the disabled images collection. This parameter is `TRUE` when disabled buttons should be shaded and `FALSE` when this method should use the disabled images collection.  
  
### Remarks  
 Override this method to customize toolbar button drawing.  
  
##  <a name="cmfcdropdowntoolbarbutton__ondrawoncustomizelist"></a>  CMFCDropDownToolbarButton::OnDrawOnCustomizeList  
 Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box.  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### Parameters  
 [in] `pDC`  
 The device context that displays the button.  
  
 [in] `rect`  
 The bounding rectangle of the button.  
  
 [in] `bSelected`  
 Whether the button is selected. If this parameter is `TRUE`, the button is selected. If this parameter is `FALSE`, the button is not selected.  
  
### Return Value  
 The width, in pixels, of the button on the specified device context.  
  
### Remarks  
 This method is called by the customization dialog box ( **Commands** tab) when the button is required to display itself on the owner-draw list box.  
  
 This method extends the base class implementation ( [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist)) by changing the text label of the button to the name of the button (that is,to the value of the `lpszName` parameter that you passed to the constructor).  
  
##  <a name="cmfcdropdowntoolbarbutton__serialize"></a>  CMFCDropDownToolbarButton::Serialize  
 Reads this object from an archive or writes it to an archive.  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
 The `CArchive` object from which or to which to serialize.  
  
### Remarks  
 This method extends the base class implementation ( [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__serialize)) by serializing the resource ID of the parent toolbar. When the archive is loading ( [CArchive::IsLoading](../../mfc/reference/carchive-class.md#carchive__isloading) returns a nonzero value), this method sets the `m_pToolBar` data member to the toolbar that contains the serialized resource ID.  
  
##  <a name="cmfcdropdowntoolbarbutton__setdefaultcommand"></a>  CMFCDropDownToolbarButton::SetDefaultCommand  
 Sets the default command that the framework uses when a user clicks the button.  
  
```  
void SetDefaultCommand(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The ID of the default command.  
  
### Remarks  
 Call this method to specify a default command that the framework executes when the user clicks the button. An item with the command ID specified by `uiCmd` must be located in the parent drop-down toolbar.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md)   
 [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)



