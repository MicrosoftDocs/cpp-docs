---
title: "CMFCToolBarMenuButton Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarMenuButton"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarMenuButton class"
ms.assetid: cfa50176-7e4b-4527-9904-86a1b48fc1bc
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
# CMFCToolBarMenuButton Class
A toolbar button that contains a pop-up menu.  
  
## Syntax  
  
```  
class CMFCToolBarMenuButton : public CMFCToolBarButton  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CMFCToolBarMenuButton](#cmfctoolbarmenubutton__cmfctoolbarmenubutton)|Constructs a `CMFCToolBarMenuButton` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::CompareWith](#cmfctoolbarmenubutton__comparewith)|Compares this instance with the provided `CMFCToolBarButton` object. (Overrides [CMFCToolBarButton::CompareWith](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__comparewith).)|  
|[CMFCToolBarMenuButton::CopyFrom](#cmfctoolbarmenubutton__copyfrom)|Copies the properties of another toolbar button to the current button. (Overrides [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__copyfrom).)|  
|[CMFCToolBarMenuButton::CreateFromMenu](#cmfctoolbarmenubutton__createfrommenu)|Initializes the toolbar menu from a Windows menu handle.|  
|[CMFCToolBarMenuButton::CreateMenu](#cmfctoolbarmenubutton__createmenu)|Creates a Windows menu that consists of the commands in the toolbar menu. Returns a handle to the Windows menu.|  
|[CMFCToolBarMenuButton::CreatePopupMenu](#cmfctoolbarmenubutton__createpopupmenu)|Creates a pop-up menu object ( [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)) to display the toolbar menu.|  
|[CMFCToolBarMenuButton::EnableQuickCustomize](#cmfctoolbarmenubutton__enablequickcustomize)||  
|[CMFCToolBarMenuButton::GetCommands](#cmfctoolbarmenubutton__getcommands)|Gives read-only access to the list of commands in the toolbar menu.|  
|[CMFCToolBarMenuButton::GetImageRect](#cmfctoolbarmenubutton__getimagerect)|Retrieves the bounding rectangle for the button image.|  
|[CMFCToolBarMenuButton::GetPaletteRows](#cmfctoolbarmenubutton__getpaletterows)|Returns the number of rows in the pop-up menu when the menu is in palette mode.|  
|[CMFCToolBarMenuButton::GetPopupMenu](#cmfctoolbarmenubutton__getpopupmenu)|Returns a pointer to the pop-up menu object that is associated with the button.|  
|[CMFCToolBarMenuButton::HasButton](#cmfctoolbarmenubutton__hasbutton)||  
|[CMFCToolBarMenuButton::HaveHotBorder](#cmfctoolbarmenubutton__havehotborder)|Determines whether a border of the button is displayed when a user selects the button. (Overrides [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__havehotborder).)|  
|[CMFCToolBarMenuButton::IsBorder](#cmfctoolbarmenubutton__isborder)||  
|[CMFCToolBarMenuButton::IsClickedOnMenu](#cmfctoolbarmenubutton__isclickedonmenu)||  
|[CMFCToolBarMenuButton::IsDroppedDown](#cmfctoolbarmenubutton__isdroppeddown)|Determines whether the pop-up menu is displayed.|  
|[CMFCToolBarMenuButton::IsEmptyMenuAllowed](#cmfctoolbarmenubutton__isemptymenuallowed)|Called by the framework to determine whether a user can open a submenu from the selected menu item.|  
|[CMFCToolBarMenuButton::IsExclusive](#cmfctoolbarmenubutton__isexclusive)|Determines whether the button is in exclusive mode, that is, whether the pop-up menu remains open even when the user moves the pointer over another toolbar or button.|  
|[CMFCToolBarMenuButton::IsMenuPaletteMode](#cmfctoolbarmenubutton__ismenupalettemode)|Determines whether the pop-up menu is in palette mode.|  
|[CMFCToolBarMenuButton::IsQuickMode](#cmfctoolbarmenubutton__isquickmode)||  
|[CMFCToolBarMenuButton::IsTearOffMenu](#cmfctoolbarmenubutton__istearoffmenu)|Determines whether the pop-up menu has a tear-off bar.|  
|[CMFCToolBarMenuButton::OnAfterCreatePopupMenu](#cmfctoolbarmenubutton__onaftercreatepopupmenu)||  
|[CMFCToolBarMenuButton::OnBeforeDrag](#cmfctoolbarmenubutton__onbeforedrag)|Specifies whether the button can be dragged. (Overrides [CMFCToolBarButton::OnBeforeDrag](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onbeforedrag).)|  
|[CMFCToolBarMenuButton::OnCalculateSize](#cmfctoolbarmenubutton__oncalculatesize)|Called by the framework to calculate the size of the button for the specified device context and docking state. (Overrides [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncalculatesize).)|  
|[CMFCToolBarMenuButton::OnCancelMode](#cmfctoolbarmenubutton__oncancelmode)|Called by the framework to handle the [WM_CANCELMODE](http://msdn.microsoft.com/library/windows/desktop/ms632615) message. (Overrides [CMFCToolBarButton::OnCancelMode](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncancelmode).)|  
|[CMFCToolBarMenuButton::OnChangeParentWnd](#cmfctoolbarmenubutton__onchangeparentwnd)|Called by the framework when the button is inserted into a new toolbar. (Overrides [CMFCToolBarButton::OnChangeParentWnd](cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd).)|  
|[CMFCToolBarMenuButton::OnClick](#cmfctoolbarmenubutton__onclick)|Called by the framework when the user clicks the mouse button. (Overrides [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onclick).)|  
|[CMFCToolBarMenuButton::OnClickMenuItem](#cmfctoolbarmenubutton__onclickmenuitem)|Called by the framework when the user selects an item in the pop-up menu.|  
|[CMFCToolBarMenuButton::OnContextHelp](#cmfctoolbarmenubutton__oncontexthelp)|Called by the framework when the parent toolbar handles a `WM_HELPHITTEST` message. (Overrides [CMFCToolBarButton::OnContextHelp](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__oncontexthelp).)|  
|[CMFCToolBarMenuButton::OnDraw](#cmfctoolbarmenubutton__ondraw)|Called by the framework to draw the button by using the specified styles and options. (Overrides [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondraw).)|  
|[CMFCToolBarMenuButton::OnDrawOnCustomizeList](#cmfctoolbarmenubutton__ondrawoncustomizelist)|Called by the framework to draw the button in the **Commands** pane of the **Customize** dialog box. (Overrides [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__ondrawoncustomizelist).)|  
|[CMFCToolBarMenuButton::OpenPopupMenu](#cmfctoolbarmenubutton__openpopupmenu)|Called by the framework when the user opens the pop-up menu.|  
|[CMFCToolBarMenuButton::ResetImageToDefault](#cmfctoolbarmenubutton__resetimagetodefault)|Sets to the default value the image that is associated with the button. (Overrides [CMFCToolBarButton::ResetImageToDefault](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__resetimagetodefault).)|  
|[CMFCToolBarMenuButton::SaveBarState](#cmfctoolbarmenubutton__savebarstate)|Saves the state of the toolbar button. (Overrides [CMFCToolBarButton::SaveBarState](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__savebarstate).)|  
|[CMFCToolBarMenuButton::Serialize](#cmfctoolbarmenubutton__serialize)|Reads this object from an archive or writes it to an archive. (Overrides [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__serialize).)|  
|[CMFCToolBarMenuButton::SetACCData](#cmfctoolbarmenubutton__setaccdata)|Populates the provided `CAccessibilityData` object with accessibility data from the toolbar button. (Overrides [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__setaccdata).)|  
|[CMFCToolBarMenuButton::SetMenuOnly](#cmfctoolbarmenubutton__setmenuonly)|Specifies whether the button can be added to a toolbar.|  
|[CMFCToolBarMenuButton::SetMenuPaletteMode](#cmfctoolbarmenubutton__setmenupalettemode)|Specifies whether the pop-up menu is in palette mode.|  
|[CMFCToolBarMenuButton::SetMessageWnd](#cmfctoolbarmenubutton__setmessagewnd)||  
|[CMFCToolBarMenuButton::SetRadio](#cmfctoolbarmenubutton__setradio)|Forces the toolbar menu button to display an icon indicating that it is selected.|  
|[CMFCToolBarMenuButton::SetTearOff](#cmfctoolbarmenubutton__settearoff)|Specifies a tear-off bar ID for the pop-up menu.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::DrawDocumentIcon](#cmfctoolbarmenubutton__drawdocumenticon)|Draws an icon on the menu button.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw](#cmfctoolbarmenubutton__m_balwayscallownerdraw)|If `TRUE`, the framework always calls [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#cframewndex__ondrawmenuimage) when a button is drawn.|  
  
## Remarks  
 A `CMFCToolBarMenuButton` can appear as a menu, a menu item that has a sub-menu, a button that either executes a command or displays a menu, or a button that displays only a menu. You determine the behavior and appearance of the menu button by specifying parameters such as the image, text, menu handle, and command ID that is associated with the button in the constructor `CMFCToolbarMenuButton::CMFCToolbarMenuButton`.  
  
 A custom class derived from the `CMFCToolbarMenuButton` class must use the [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro. The [DECLARE_DYNCREATE](run-time-object-model-services.md#declare_dyncreate) macro generates an error when the application closes.  
  
## Example  
 The following example demonstrates how to configure a `CMFCToolBarMenuButton` object. The code illustrates how to specify that the drop-down menu is in palette mode, and specify the ID for the tear-off bar that is created when the user drags the menu button off of a menu bar. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#10](../../mfc/reference/codesnippet/cpp/cmfctoolbarmenubutton-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarMenuButton](../../mfc/reference/cmfctoolbarmenubutton-class.md)  
  
## Requirements  
 **Header:** afxtoolbarmenubutton.h  
  
##  <a name="cmfctoolbarmenubutton__cmfctoolbarmenubutton"></a>  CMFCToolBarMenuButton::CMFCToolBarMenuButton  
 Constructs a `CMFCToolBarMenuButton` object.  
  
```  
CMFCToolBarMenuButton();

CMFCToolBarMenuButton(
    const CMFCToolBarMenuButton& src);

CMFCToolBarMenuButton(
    UINT uiID,  
    HMENU hMenu,  
    int iImage,  
    LPCTSTR lpszText=NULL,  
    BOOL bUserButton=FALSE);
```  
  
### Parameters  
 [in] `src`  
 An existing `CMFCToolBarMenuButton` object to be copied into this `CMFCToolBarMenuButton` object.  
  
 [in] `uiID`  
 The ID of the command to execute when a user clicks the button; or ( `UINT`)-1 for a menu button that does not directly execute a command.  
  
 [in] `hMenu`  
 A handle to a menu; or `NULL` if the button does not have a menu.  
  
 [in] `iImage`  
 Index of the image for the button; or -1 if this button does not have an icon or uses the icon for the command specified by `uiID`. The index is the same for each `CMFCToolBarImages` object in your application.  
  
 [in] `lpszText`  
 The text of the toolbar menu button.  
  
 [in] `bUserButton`  
 `TRUE` if the button displays a user-defined image; `FALSE` if the button displays a predefined image associated with the command specified by `uiID`.  
  
### Remarks  
 If `uiID` is a valid command ID, the button performs that command when the user clicks it. If `hMenu` is a valid menu handle, the button provides a drop-down menu when it appears in a toolbar or a submenu when it appears in a menu. If both `uiID` and `hMenu` are valid, the button is a split-button with a portion that will perform the command when the user clicks on it and a portion with a down arrow that will drop-down a menu when the user clicks on it. However, if `hMenu` is valid, a user will not be able to click the button to perform a command when the button is inserted into a menu.  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCToolBarMenuButton` class. This code snippet is part of the [Word Pad sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#9](../../mfc/reference/codesnippet/cpp/cmfctoolbarmenubutton-class_2.cpp)]  
  
##  <a name="cmfctoolbarmenubutton__comparewith"></a>  CMFCToolBarMenuButton::CompareWith  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL CompareWith(const CMFCToolBarButton& other) const;

 
```  
  
### Parameters  
 [in] `other`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__copyfrom"></a>  CMFCToolBarMenuButton::CopyFrom  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### Parameters  
 [in] `src`  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__createfrommenu"></a>  CMFCToolBarMenuButton::CreateFromMenu  
 Initializes the toolbar menu from a Windows menu handle.  
  
```  
virtual void CreateFromMenu(HMENU hMenu);
```  
  
### Parameters  
 [in] `hMenu`  
 A handle to a menu.  
  
### Remarks  
 A toolbar menu button can display a drop-down submenu.  
  
 The framework calls this method to initialize the commands in the submenu from a menu.  
  
##  <a name="cmfctoolbarmenubutton__createmenu"></a>  CMFCToolBarMenuButton::CreateMenu  
 Creates a menu that consists of the commands in the toolbar menu. Returns a handle to the menu.  
  
```  
virtual HMENU CreateMenu() const;

 
```  
  
### Return Value  
 A handle to the menu if success. `NULL` if the list of commands associated with the toolbar menu button is empty.  
  
### Remarks  
 You can override this method in a derived class to customize the way the menu is generated.  
  
##  <a name="cmfctoolbarmenubutton__createpopupmenu"></a>  CMFCToolBarMenuButton::CreatePopupMenu  
 Creates a `CMFCPopupMenu` object to display the toolbar menu.  
  
```  
virtual CMFCPopupMenu* CreatePopupMenu();
```  
  
### Return Value  
 A pointer to a `CMFCPopupMenu` object that displays the drop-down menu associated with the toolbar menu button.  
  
### Remarks  
 This method is called by the framework to prepare the display of the drop-down menu associated with the button.  
  
 The default implementation just constructs and returns a new `CMFCPopupMenu` object. Override this method if you want to use a derived type of [CMFCPopupMenu Class](cmfcpopupmenu-class.md) or to perform additional initialization.  
  
##  <a name="cmfctoolbarmenubutton__drawdocumenticon"></a>  CMFCToolBarMenuButton::DrawDocumentIcon  
 Draws a document icon on the menu button.  
  
```  
void DrawDocumentIcon(
    CDC* pDC,  
    const CRect& rectImage,  
    HICON hIcon);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to the device context.  
  
 [in] `rectImage`  
 Coordinates of the image bounding rectangle.  
  
 [in] `hIcon`  
 A handle to the icon.  
  
### Remarks  
 This method takes a document icon and draws it on the menu button, centered in the area specified by `rectImage`.  
  
##  <a name="cmfctoolbarmenubutton__enablequickcustomize"></a>  CMFCToolBarMenuButton::EnableQuickCustomize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableQuickCustomize();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__hasbutton"></a>  CMFCToolBarMenuButton::HasButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HasButton() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__havehotborder"></a>  CMFCToolBarMenuButton::HaveHotBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL HaveHotBorder() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__isborder"></a>  CMFCToolBarMenuButton::IsBorder  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsBorder() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__isclickedonmenu"></a>  CMFCToolBarMenuButton::IsClickedOnMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsClickedOnMenu() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__isquickmode"></a>  CMFCToolBarMenuButton::IsQuickMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsQuickMode();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__getcommands"></a>  CMFCToolBarMenuButton::GetCommands  
 Gives read-only access to the list of commands in the toolbar menu.  
  
```  
const CObList& GetCommands() const;

 
```  
  
### Return Value  
 A const reference to a [CObList Class](../../mfc/reference/coblist-class.md) object, which contains a collection of [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) objects.  
  
### Remarks  
 A toolbar menu button can display a submenu. You can provide the list of commands in the submenu in the constructor or in [CMFCToolBarMenuButton::CreateFromMenu](#cmfctoolbarmenubutton__createfrommenu) as a handle to a menu ( `HMENU`). The menu is converted to a list of objects that are derived from [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) and stored in the internal `CObList` object. You can access this list by calling this method.  
  
##  <a name="cmfctoolbarmenubutton__getimagerect"></a>  CMFCToolBarMenuButton::GetImageRect  
 Retrieves the bounding rectangle for the button image.  
  
```  
void GetImageRect(CRect& rectImage);
```  
  
### Parameters  
 [out] `rectImage`  
 A reference to a `CRect` object that receives the coordinates of the image bounding rectangle.  
  
##  <a name="cmfctoolbarmenubutton__getpaletterows"></a>  CMFCToolBarMenuButton::GetPaletteRows  
 Returns the number of rows in the drop-down menu when the menu is in palette mode.  
  
```  
int GetPaletteRows() const;

 
```  
  
### Return Value  
 The number of rows in the palette.  
  
### Remarks  
 When the menu button is set to palette mode, menu items will appear in multiple columns with only a limited number of rows. Call this method to obtain the number of rows. You can enable or disable palette mode and specify the number of rows using [CMFCToolBarMenuButton::SetMenuPaletteMode](#cmfctoolbarmenubutton__setmenupalettemode).  
  
##  <a name="cmfctoolbarmenubutton__getpopupmenu"></a>  CMFCToolBarMenuButton::GetPopupMenu  
 Returns a pointer to the [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object that represents the drop-down menu of the button.  
  
```  
CMFCPopupMenu* GetPopupMenu() const;

 
```  
  
### Return Value  
 A pointer to a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object that was created when the framework drew the submenu of the toolbar menu button; `NULL` if no submenu is displayed.  
  
### Remarks  
 When a toolbar menu button displays a drop-down menu, the button creates a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object to represent the menu. Call this method to obtain a pointer to the `CMFCPopupMenu` object. You should not store the returned pointer, because it is temporary and becomes invalid when the user closes the drop-down menu.  
  
##  <a name="cmfctoolbarmenubutton__isdroppeddown"></a>  CMFCToolBarMenuButton::IsDroppedDown  
 Indicates whether the pop-up menu is currently displayed.  
  
```  
virtual BOOL IsDroppedDown() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar menu button displays its submenu; otherwise `FALSE`.  
  
##  <a name="cmfctoolbarmenubutton__isemptymenuallowed"></a>  CMFCToolBarMenuButton::IsEmptyMenuAllowed  
 Specifies whether menu items shows empty submenus.  
  
```  
virtual BOOL IsEmptyMenuAllowed() const;

 
```  
  
### Return Value  
 `TRUE` if the framework opens a submenu from the currently selected menu item even when the submenu is empty; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method when a user tries to open the submenu from the currently selected menu item. If the submenu is empty and `IsEmptyMenuAllowed` returns `FALSE`, the submenu will not open.  
  
 The default implementation returns `FALSE`. Override this method to customize this behavior.  
  
##  <a name="cmfctoolbarmenubutton__isexclusive"></a>  CMFCToolBarMenuButton::IsExclusive  
 Indicates whether the button is in exclusive mode.  
  
```  
virtual BOOL IsExclusive() const;

 
```  
  
### Return Value  
 `TRUE` if the button is working in exclusive mode; otherwise `FALSE`.  
  
### Remarks  
 When a user opens a popup menu for a button and then moves the mouse pointer over another toolbar or menu button, the popup menu closes unless the button is in exclusive mode.  
  
 The default implementation always returns `FALSE`. Override this method in a derived class if you want to turn on exclusive mode.  
  
##  <a name="cmfctoolbarmenubutton__ismenupalettemode"></a>  CMFCToolBarMenuButton::IsMenuPaletteMode  
 Determines whether the drop-down menu is in palette mode.  
  
```  
BOOL IsMenuPaletteMode() const;

 
```  
  
### Return Value  
 `TRUE` if the palette mode is enabled, otherwise `FALSE`.  
  
### Remarks  
 When the menu button is set to palette mode, menu items appear in multiple columns with only a limited number of rows. Call this method to obtain the number of rows. You can enable or disable the palette mode by calling [CMFCToolBarMenuButton::SetMenuPaletteMode](#cmfctoolbarmenubutton__setmenupalettemode).  
  
##  <a name="cmfctoolbarmenubutton__istearoffmenu"></a>  CMFCToolBarMenuButton::IsTearOffMenu  
 Indicates whether the drop-down menu has a tear-off bar.  
  
```  
virtual BOOL IsTearOffMenu() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar menu button has a tear-off bar; otherwise `FALSE`.  
  
### Remarks  
 To enable the tear-off feature and set the tear-off bar ID, call [CMFCToolBarMenuButton::SetTearOff](#cmfctoolbarmenubutton__settearoff).  
  
##  <a name="cmfctoolbarmenubutton__m_balwayscallownerdraw"></a>  CMFCToolBarMenuButton::m_bAlwaysCallOwnerDraw  
 Specifies whether the framework always calls [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#cframewndex__ondrawmenuimage) when a button is drawn.  
  
```  
static BOOL m_bAlwaysCallOwnerDraw;  
```  
  
### Remarks  
 When this member variable is set to `TRUE`, the button always calls [CFrameWndEx::OnDrawMenuImage](../../mfc/reference/cframewndex-class.md#cframewndex__ondrawmenuimage) method to display the image on the button. When `m_bAlwaysCallOwnerDraw` is `FALSE`, the button itself draws the image if the image is predefined. Otherwise, it calls `OnDrawMenuImage`.  
  
##  <a name="cmfctoolbarmenubutton__onaftercreatepopupmenu"></a>  CMFCToolBarMenuButton::OnAfterCreatePopupMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnAfterCreatePopupMenu();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__onbeforedrag"></a>  CMFCToolBarMenuButton::OnBeforeDrag  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnBeforeDrag() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__oncalculatesize"></a>  CMFCToolBarMenuButton::OnCalculateSize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual SIZE OnCalculateSize(
    CDC* pDC,  
    const CSize& sizeDefault,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `sizeDefault`  
 [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__oncancelmode"></a>  CMFCToolBarMenuButton::OnCancelMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnCancelMode();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__onchangeparentwnd"></a>  CMFCToolBarMenuButton::OnChangeParentWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### Parameters  
 [in] `pWndParent`  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__onclick"></a>  CMFCToolBarMenuButton::OnClick  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### Parameters  
 [in] `pWnd`  
 [in] `bDelay`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__onclickmenuitem"></a>  CMFCToolBarMenuButton::OnClickMenuItem  
 Called by the framework when the user selects an item in the drop-down menu.  
  
```  
virtual BOOL OnClickMenuItem();
```  
  
### Return Value  
 `FALSE` if the framework should continue the default menu item processing; otherwise `TRUE`. The default implementation always returns `FALSE`.  
  
### Remarks  
 When the user clicks a menu item, the framework executes a command that is associated with that item.  
  
 To customize the menu item processing, override `OnClickMenuItem` in a class derived from `CMFCToolBarMenuButton` class. You must also override [CFrameWndEx::OnShowPopupMenu](../../mfc/reference/cframewndex-class.md#cframewndex__onshowpopupmenu) and replace the menu buttons that require special processing with instances of the derived class.  
  
##  <a name="cmfctoolbarmenubutton__oncontexthelp"></a>  CMFCToolBarMenuButton::OnContextHelp  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnContextHelp(CWnd* pWnd);
```  
  
### Parameters  
 [in] `pWnd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__ondraw"></a>  CMFCToolBarMenuButton::OnDraw  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
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
 [in] `rect`  
 [in] `pImages`  
 [in] `bHorz`  
 [in] `bCustomizeMode`  
 [in] `bHighlight`  
 [in] `bDrawBorder`  
 [in] `bGrayDisabledButtons`  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__ondrawoncustomizelist"></a>  CMFCToolBarMenuButton::OnDrawOnCustomizeList  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual int OnDrawOnCustomizeList(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bSelected);
```  
  
### Parameters  
 [in] `pDC`  
 [in] `rect`  
 [in] `bSelected`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__openpopupmenu"></a>  CMFCToolBarMenuButton::OpenPopupMenu  
 Called by the framework when the user opens the drop-down menu of a toolbar menu button.  
  
```  
virtual BOOL OpenPopupMenu(CWnd* pWnd=NULL);
```  
  
### Parameters  
 [in] `pWnd`  
 Specifies the window that receives the drop-down menu commands. It can be `NULL` only if the toolbar menu button has a parent window.  
  
### Return Value  
 `TRUE` when a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) object was created and opened successfully; otherwise `FALSE`.  
  
### Remarks  
 This function is called by the framework when the user opens a drop-down menu from a toolbar menu button.  
  
##  <a name="cmfctoolbarmenubutton__resetimagetodefault"></a>  CMFCToolBarMenuButton::ResetImageToDefault  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResetImageToDefault();
```  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__savebarstate"></a>  CMFCToolBarMenuButton::SaveBarState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SaveBarState();
```  
  
### Remarks  
 The framework calls this method when it creates a toolbar button as the result of a drag-and-drop operation. This method calls the [CMFCPopupMenu::SaveState](../../mfc/reference/cmfcpopupmenu-class.md#cmfcpopupmenu__savestate) method of the top-level pop-up menu, which causes the parent button of the pop-up menu to recreate its menu.  
  
##  <a name="cmfctoolbarmenubutton__serialize"></a>  CMFCToolBarMenuButton::Serialize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void Serialize(CArchive& ar);
```  
  
### Parameters  
 [in] `ar`  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__setaccdata"></a>  CMFCToolBarMenuButton::SetACCData  
 Sets the accessibility data for the ribbon element.  
  
```  
virtual BOOL SetACCData(
    CWnd* pParent,  
    CAccessibilityData& data);
```  
  
### Parameters  
 `pParent`  
 The parent window for the ribbon element.  
  
 `data`  
 The accessibility data for the ribbon element.  
  
### Return Value  
 Always returns `TRUE`.  
  
### Remarks  
 By default this method sets the accessibility data for the ribbon element and always returns `TRUE`. Override this method to set the accessibility data and return a value that indicates success or failure.  
  
##  <a name="cmfctoolbarmenubutton__setmenuonly"></a>  CMFCToolBarMenuButton::SetMenuOnly  
 Specifies whether the button is drawn as a menu button or a split button when it has both a valid command ID and a submenu.  
  
```  
void SetMenuOnly(BOOL bMenuOnly);
```  
  
### Parameters  
 [in] `bMenuOnly`  
 `TRUE` to show this button as a menu button when it has both a valid command ID and a submenu, `FALSE` to show this button as a split button when it has both a valid command ID and a submenu.  
  
### Remarks  
 Typically, when a toolbar menu button has both a submenu and a command ID, the menu appears to be a split button that has a main button and an attached down arrow button. If you call this method and `bMenuOnly` is `TRUE`, the button instead appears to be a single menu button with a down arrow in the button. When the user clicks the arrow in either mode, the submenu opens, and when the user clicks the non-arrow part of the button in either mode the framework executes the command .  
  
##  <a name="cmfctoolbarmenubutton__setmenupalettemode"></a>  CMFCToolBarMenuButton::SetMenuPaletteMode  
 Specifies whether the drop-down menu is in palette mode.  
  
```  
void SetMenuPaletteMode(
    BOOL bMenuPaletteMode=TRUE,  
    int nPaletteRows=1);
```  
  
### Parameters  
 [in] `bMenuPaletteMode`  
 Specifies whether the drop-down menu is in palette mode.  
  
 [in] `nPaletteRows`  
 Number of rows in palette.  
  
### Remarks  
 In the palette mode, all menu items are displayed as a multicolumn palette. You specify the number of rows by using `nPaletteRows`.  
  
##  <a name="cmfctoolbarmenubutton__setmessagewnd"></a>  CMFCToolBarMenuButton::SetMessageWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetMessageWnd(CWnd* pWndMessage);
```  
  
### Parameters  
 [in] `pWndMessage`  
  
### Remarks  
  
##  <a name="cmfctoolbarmenubutton__setradio"></a>  CMFCToolBarMenuButton::SetRadio  
 Sets the toolbar menu button to display a radio button style icon when it is checked.  
  
```  
virtual void SetRadio();
```  
  
### Remarks  
 When the menu button is drawn while it is checked, it calls [CMFCVisualManager::OnDrawMenuCheck](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawmenucheck) to draw a checkmark icon. By default, `OnDrawMenuCheck` requests that the current visual manager draws a checkbox style checkmark on the menu button. After you call this method, the current visual manager instead draws a radio button style checkmark on the menu button. This change cannot be undone.  
  
 When you call this method and the menu button is currently being displayed, it will refresh.  
  
##  <a name="cmfctoolbarmenubutton__settearoff"></a>  CMFCToolBarMenuButton::SetTearOff  
 Specifies the ID of the tear-off bar for the drop-down menu.  
  
```  
virtual void SetTearOff(UINT uiBarID);
```  
  
### Parameters  
 [in] `uiBarID`  
 Specifies a new tear-off bar ID.  
  
### Remarks  
 Call this method to specify the ID for the tear-off bar that is created when the user drags the menu button off of a menu bar. If the `uiBarID` parameter is 0, the user cannot tear off the menu button.  
  
 Call [CWinAppEx::EnableTearOffMenus](../../mfc/reference/cwinappex-class.md#cwinappex__enabletearoffmenus) to enable the tear-off menu feature in your application.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)