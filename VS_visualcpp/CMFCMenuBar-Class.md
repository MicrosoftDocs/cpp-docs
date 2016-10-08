---
title: "CMFCMenuBar Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8
caps.latest.revision: 32
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CMFCMenuBar Class
A menu bar that implements docking.  
  
## Syntax  
  
```  
class CMFCMenuBar : public CMFCToolbar  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCMenuBar::AdjustLocations](#cmfcmenubar__adjustlocations)|(Overrides `CMFCToolBar::AdjustLocations`.)|  
|[CMFCMenuBar::AllowChangeTextLabels](#cmfcmenubar__allowchangetextlabels)|Specifies whether text labels can be shown under images on the toolbar buttons. (Overrides [CMFCToolBar::AllowChangeTextLabels](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__allowchangetextlabels).)|  
|[CMFCMenuBar::AllowShowOnPaneMenu](#cmfcmenubar__allowshowonpanemenu)|(Overrides `CPane::AllowShowOnPaneMenu`.)|  
|[CMFCMenuBar::CalcFixedLayout](#cmfcmenubar__calcfixedlayout)|Calculates the horizontal size of the toolbar. (Overrides [CMFCToolBar::CalcFixedLayout](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__calcfixedlayout).)|  
|[CMFCMenuBar::CalcLayout](#cmfcmenubar__calclayout)|(Overrides `CMFCToolBar::CalcLayout`.)|  
|[CMFCMenuBar::CalcMaxButtonHeight](#cmfcmenubar__calcmaxbuttonheight)|Calculates the maximum height of buttons in the toolbar. (Overrides [CMFCToolBar::CalcMaxButtonHeight](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__calcmaxbuttonheight).)|  
|[CMFCMenuBar::CanBeClosed](#cmfcmenubar__canbeclosed)|Specifies whether a user can close the toolbar. (Overrides [CMFCToolBar::CanBeClosed](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__canbeclosed).)|  
|[CMFCMenuBar::CanBeRestored](#cmfcmenubar__canberestored)|Determines whether the system can restore a toolbar to its original state after customization. (Overrides [CMFCToolBar::CanBeRestored](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__canberestored).)|  
|[CMFCMenuBar::Create](#cmfcmenubar__create)|Creates a menu control and attaches it to a `CMFCMenuBar` object.|  
|[CMFCMenuBar::CreateEx](#cmfcmenubar__createex)|Creates a `CMFCMenuBar` object with additional style options.|  
|[CMFCMenuBar::CreateFromMenu](#cmfcmenubar__createfrommenu)|Initializes a `CMFCMenuBar` object. Accepts a `HMENU` parameter that acts as a template for a populated `CMFCMenuBar`.|  
|[CMFCMenuBar::EnableHelpCombobox](#cmfcmenubar__enablehelpcombobox)|Enables a **Help** combo box that is located on the right side of the menu bar.|  
|[CMFCMenuBar::EnableMenuShadows](#cmfcmenubar__enablemenushadows)|Specifies whether to display shadows for pop-up menus.|  
|[CMFCMenuBar::GetAvailableExpandSize](#cmfcmenubar__getavailableexpandsize)|(Overrides [CPane::GetAvailableExpandSize](../VS_visualcpp/CPane-Class.md#cpane__getavailableexpandsize).)|  
|[CMFCMenuBar::GetColumnWidth](#cmfcmenubar__getcolumnwidth)|Returns the width of the toolbar buttons. (Overrides [CMFCToolBar::GetColumnWidth](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__getcolumnwidth).)|  
|[CMFCMenuBar::GetDefaultMenu](#cmfcmenubar__getdefaultmenu)|Returns a handle to the original menu in the resource file.|  
|[CMFCMenuBar::GetDefaultMenuResId](#cmfcmenubar__getdefaultmenuresid)|Returns the resource identifier for the original menu in the resource file.|  
|[CMFCMenuBar::GetFloatPopupDirection](#cmfcmenubar__getfloatpopupdirection)||  
|[CMFCMenuBar::GetForceDownArrows](#cmfcmenubar__getforcedownarrows)||  
|[CMFCMenuBar::GetHelpCombobox](#cmfcmenubar__gethelpcombobox)|Returns a pointer to the **Help** combo box.|  
|[CMFCMenuBar::GetHMenu](#cmfcmenubar__gethmenu)|Returns the handle to the menu that is attached to the `CMFCMenuBar` object.|  
|[CMFCMenuBar::GetMenuFont](#cmfcmenubar__getmenufont)|Returns the current global font for menu objects.|  
|[CMFCMenuBar::GetMenuItem](#cmfcmenubar__getmenuitem)|Returns the toolbar button associated with the provided item index.|  
|[CMFCMenuBar::GetRowHeight](#cmfcmenubar__getrowheight)|Returns the height of toolbar buttons. (Overrides [CMFCToolBar::GetRowHeight](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__getrowheight).)|  
|[CMFCMenuBar::GetSystemButton](#cmfcmenubar__getsystembutton)||  
|[CMFCMenuBar::GetSystemButtonsCount](#cmfcmenubar__getsystembuttonscount)||  
|[CMFCMenuBar::GetSystemMenu](#cmfcmenubar__getsystemmenu)||  
|[CMFCMenuBar::HighlightDisabledItems](#cmfcmenubar__highlightdisableditems)|Indicates whether disabled menu items are highlighted.|  
|[CMFCMenuBar::IsButtonExtraSizeAvailable](#cmfcmenubar__isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders. (Overrides [CMFCToolBar::IsButtonExtraSizeAvailable](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__isbuttonextrasizeavailable).)|  
|[CMFCMenuBar::IsHighlightDisabledItems](#cmfcmenubar__ishighlightdisableditems)|Indicates whether disabled items are highlighted.|  
|[CMFCMenuBar::IsMenuShadows](#cmfcmenubar__ismenushadows)|Indicates whether shadows are drawn for pop-up menus.|  
|[CMFCMenuBar::IsRecentlyUsedMenus](#cmfcmenubar__isrecentlyusedmenus)|Indicates whether recently used menu commands are displayed on the menu bar.|  
|[CMFCMenuBar::IsShowAllCommands](#cmfcmenubar__isshowallcommands)|Indicates whether pop-up menus display all commands.|  
|[CMFCMenuBar::IsShowAllCommandsDelay](#cmfcmenubar__isshowallcommandsdelay)|Indicates whether menus display all the commands after a short delay.|  
|[CMFCMenuBar::LoadState](#cmfcmenubar__loadstate)|Loads the state of the `CMFCMenuBar` object from the registry.|  
|[CMFCMenuBar::OnChangeHot](#cmfcmenubar__onchangehot)|Called by the framework when a user selects a button on the toolbar. (Overrides [CMFCToolBar::OnChangeHot](../VS_visualcpp/CMFCToolBar-Class.md#cmfctoolbar__onchangehot).)|  
|[CMFCMenuBar::OnDefaultMenuLoaded](#cmfcmenubar__ondefaultmenuloaded)|Called by the framework when a frame window loads the default menu from the resource file.|  
|[CMFCMenuBar::OnSendCommand](#cmfcmenubar__onsendcommand)|(Overrides `CMFCToolBar::OnSendCommand`.)|  
|[CMFCMenuBar::OnSetDefaultButtonText](#cmfcmenubar__onsetdefaultbuttontext)|Called by the framework when a menu is in customization mode and the user changes a menu item's text.|  
|[CMFCMenuBar::OnToolHitTest](#cmfcmenubar__ontoolhittest)|(Overrides `CMFCToolBar::OnToolHitTest`.)|  
|[CMFCMenuBar::PreTranslateMessage](#cmfcmenubar__pretranslatemessage)|(Overrides `CMFCToolBar::PreTranslateMessage`.)|  
|[CMFCMenuBar::RestoreOriginalstate](#cmfcmenubar__restoreoriginalstate)|Called by the framework when a menu is in customization mode and the user selects **Reset** for a menu bar.|  
|[CMFCMenuBar::SaveState](#cmfcmenubar__savestate)|Saves the state of the `CMFCMenuBar` object to the registry.|  
|[CMFCMenuBar::SetDefaultMenuResId](#cmfcmenubar__setdefaultmenuresid)|Sets the original menu in the resource file.|  
|[CMFCMenuBar::SetForceDownArrows](#cmfcmenubar__setforcedownarrows)||  
|[CMFCMenuBar::SetMaximizeMode](#cmfcmenubar__setmaximizemode)|Called by the framework when an MDI child window changes its display mode. If the MDI child window is newly maximized or is no longer maximized, this method updates the menu bar.|  
|[CMFCMenuBar::SetMenuButtonRTC](#cmfcmenubar__setmenubuttonrtc)|Sets the runtime class information that is generated when the user dynamically creates menu buttons.|  
|[CMFCMenuBar::SetMenuFont](#cmfcmenubar__setmenufont)|Sets the font for all menus in the application.|  
|[CMFCMenuBar::SetRecentlyUsedMenus](#cmfcmenubar__setrecentlyusedmenus)|Specifies whether a menu bar displays recently used menu commands.|  
|[CMFCMenuBar::SetShowAllCommands](#cmfcmenubar__setshowallcommands)|Specifies whether the menu bar shows all commands.|  
  
## Remarks  
 The `CMFCMenuBar` class is a menu bar that implements docking functionality. It resembles a toolbar, although it cannot be closed - it is always displayed.  
  
 `CMFCMenuBar` supports the option of displaying recently used menu item objects. If this option is enabled, the `CMFCMenuBar` displays only a subset of the available commands on first viewing. Thereafter, recently used commands are displayed together with the original subset of commands. In addition, the user can always expand the menu to view all available commands. Thus, each available command is configured to display constantly, or to display only if it has been recently selected.  
  
 To use a `CMFCMenuBar` object, embed it in the main window frame object. When processing the `WM_CREATE` message, call `CMFCMenuBar::Create` or `CMFCMenuBar::CreateEx`. Regardless of which create function you use, pass in a pointer to the main frame window. Then enable docking by calling [CFrameWndEx::EnableDocking](../VS_visualcpp/CFrameWndEx-Class.md#cframewndex__enabledocking). Dock this menu by calling [CFrameWndEx::DockPane](../VS_visualcpp/CFrameWndEx-Class.md#cframewndex__dockpane).  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCMenuBar` class. The example shows how to set the style of the pane, enable the customize button, enable a Help box, enable shadows for pop-up menus, and update the menu bar. This code snippet is part of the [IE Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_IEDemo#1](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_IEDemo#1)]  
[!CODE [NVC_MFC_IEDemo#3](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_IEDemo#3)]  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CBasePane](../VS_visualcpp/CBasePane-Class.md)  
  
 [CPane](../VS_visualcpp/CPane-Class.md)  
  
 [CMFCBaseToolBar](../VS_visualcpp/CMFCBaseToolBar-Class.md)  
  
 [CMFCToolBar](../VS_visualcpp/CMFCToolBar-Class.md)  
  
 [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md)  
  
## Requirements  
 **Header:** afxmenubar.h  
  
##  <a name="cmfcmenubar__adjustlocations"></a>  CMFCMenuBar::AdjustLocations  
 Adjusts the positions of the menu items on the menu bar.  
  
```  
virtual void AdjustLocations();  
```  
  
### Remarks  
  
##  <a name="cmfcmenubar__allowchangetextlabels"></a>  CMFCMenuBar::AllowChangeTextLabels  
 Determines whether text labels are allowed under images in the menu bar.  
  
```  
virtual BOOL AllowChangeTextLabels() const;  
```  
  
### Return Value  
 Returns `TRUE` if the user can choose to show text labels under images.  
  
### Remarks  
  
##  <a name="cmfcmenubar__allowshowonpanemenu"></a>  CMFCMenuBar::AllowShowOnPaneMenu  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL AllowShowOnPaneMenu() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__calcfixedlayout"></a>  CMFCMenuBar::CalcFixedLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize CalcFixedLayout(  
    BOOL bStretch,  
    BOOL bHorz );  
```  
  
### Parameters  
 [in] `bStretch`  
  [in] `bHorz`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__calclayout"></a>  CMFCMenuBar::CalcLayout  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual CSize CalcLayout(  
    DWORD dwMode,  
    int nLength = -1);  
```  
  
### Parameters  
 [in] `dwMode`  
  [in] `nLength`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__calcmaxbuttonheight"></a>  CMFCMenuBar::CalcMaxButtonHeight  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int CalcMaxButtonHeight();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__canbeclosed"></a>  CMFCMenuBar::CanBeClosed  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CanBeClosed() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__canberestored"></a>  CMFCMenuBar::CanBeRestored  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL CanBeRestored() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__create"></a>  CMFCMenuBar::Create  
 Creates a menu control and attaches it to a [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object.  
  
```  
virtual BOOL Create(  
    CWnd* pParentWnd,  
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,  
    UINT nID = AFX_IDW_MENUBAR);  
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window for the new `CMFCMenuBar` object.  
  
 [in] `dwStyle`  
 The style of the new menu bar.  
  
 [in] `nID`  
 The ID for the child window of the menu bar.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`.  
  
### Remarks  
 After you construct a `CMFCMenuBar` object, you must call `Create`. This method creates the `CMFCMenuBar` control and attaches it to the `CMFCMenuBar` object.  
  
 For more information about toolbar styles, see [CBasePane::SetPaneStyle](../VS_visualcpp/CBasePane-Class.md#cbasepane__setpanestyle).  
  
##  <a name="cmfcmenubar__createex"></a>  CMFCMenuBar::CreateEx  
 Creates a [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object with specified extended styles.  
  
```  
virtual BOOL CreateEx(  
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle = TBSTYLE_FLAT,  
    DWORD dwStyle = AFX_DEFAULT_TOOLBAR_STYLE,  
    CRect rcBorders = CRect( 1, 1, 1, 1),  
    UINT nID =AFX_IDW_MENUBAR);  
```  
  
### Parameters  
 [in] `pParentWnd`  
 Pointer to the parent window of the new `CMFCMenuBar` object.  
  
 [in] `dwCtrlStyle`  
 Additional styles for the new menu bar.  
  
 [in] `dwStyle`  
 The main style of the new menu bar.  
  
 [in] `rcBorders`  
 A `CRect` parameter that specifies the sizes for the borders of the `CMFCMenuBar` object.  
  
 [in] `nID`  
 The ID for the child window of the menu bar.  
  
### Return Value  
 Nonzero if the method is successful; otherwise 0.  
  
### Remarks  
 You should use this function instead of [CMFCMenuBar::Create](#cmfcmenubar__create) when you want to specify styles in addition to the toolbar style. Some frequently used additional styles are `TBSTYLE_TRANSPARENT` and `CBRS_TOP`.  
  
 For lists of additional styles, see                         [Toolbar Control and Button Styles](http://msdn.microsoft.com/library/windows/desktop/bb760439),                         [common control styles](http://msdn.microsoft.com/library/windows/desktop/bb775498), and                         [common window styles](http://msdn.microsoft.com/library/windows/desktop/ms632600).  
  
### Example  
 The following example demonstrates how to use the `CreateEx` method of the `CMFCMenuBar` class. This code snippet is part of the [IE Demo sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_IEDemo#1](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_IEDemo#1)]  
[!CODE [NVC_MFC_IEDemo#2](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_IEDemo#2)]  
  
##  <a name="cmfcmenubar__createfrommenu"></a>  CMFCMenuBar::CreateFromMenu  
 Initializes a [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object. This method models the `CMFCMenuBar` object after a `HMENU` parameter.  
  
```  
virtual void CreateFromMenu(  
    HMENU hMenu,  
    BOOL bDefaultMenu = FALSE,  
    BOOL bForceUpdate = FALSE                );  
```  
  
### Parameters  
 [in] `hMenu`  
 A handle to a menu resource. `CreateFromMenu` uses this resource as a template for the `CMFCMenuBar`.  
  
 [in] `bDefaultMenu`  
 A Boolean that indicates whether the new menu is the default menu.  
  
 [in] `bForceUpdate`  
 A Boolean that indicates whether this method forces a menu update.  
  
### Remarks  
 Use this method if you want a menu control to have the same menu items as a menu resource. You call this method after you call either [CMFCMenuBar::Create](#cmfcmenubar__create) or [CMFCMenuBar::CreateEx](#cmfcmenubar__createex).  
  
##  <a name="cmfcmenubar__enablehelpcombobox"></a>  CMFCMenuBar::EnableHelpCombobox  
 Enables a **Help** combo box that is located on the right side of the menu bar.  
  
```  
void EnableHelpCombobox(  
    UINT uiID,  
    LPCTSTR lpszPrompt = NULL,  
    int nComboBoxWidth = 150 );  
```  
  
### Parameters  
 [in] `uiID`  
 The command ID for the button of the **Help** combo box.  
  
 [in] `lpszPrompt`  
 A string that contains the text that the framework displays in the combo box if it is empty and not active. For example, "Enter the text here".  
  
 [in] `nComboBoxWidth`  
 The width of the button for the combo box in pixels.  
  
### Remarks  
 The **Help** combo box resembles the **Help** combo box in the menu bar of Microsoft Word.  
  
 When you call this method with `uiID` set to 0, this method hides the combo box. Otherwise, this method displays the combo box automatically on the right side of your menu bar. After you call this method, call [CMFCMenuBar::GetHelpCombobox](#cmfcmenubar__gethelpcombobox) to obtain a pointer to the inserted [CMFCToolBarComboBoxButton](../VS_visualcpp/CMFCToolBarComboBoxButton-Class.md) object.  
  
##  <a name="cmfcmenubar__enablemenushadows"></a>  CMFCMenuBar::EnableMenuShadows  
 Enables shadows for pop-up menus.  
  
```  
static void EnableMenuShadows(  
    BOOL bEnable = TRUE);  
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean parameter that indicates whether shadows should be enabled for pop-up menus.  
  
### Remarks  
 The algorithm that this method uses is complex and may decrease the performance of your application on slower systems.  
  
##  <a name="cmfcmenubar__getavailableexpandsize"></a>  CMFCMenuBar::GetAvailableExpandSize  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetAvailableExpandSize() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getcolumnwidth"></a>  CMFCMenuBar::GetColumnWidth  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetColumnWidth() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getdefaultmenu"></a>  CMFCMenuBar::GetDefaultMenu  
 Retrieves a handle to the original menu. The framework loads the original menu from the resource file.  
  
```  
HMENU GetDefaultMenu() const;  
```  
  
### Return Value  
 A handle to a menu resource.  
  
### Remarks  
 If your application customizes a menu, you can use this method to retrieve a handle to the original menu.  
  
##  <a name="cmfcmenubar__getdefaultmenuresid"></a>  CMFCMenuBar::GetDefaultMenuResId  
 Retrieves the resource identifier for the default menu.  
  
```  
UINT GetDefaultMenuResId() const;  
```  
  
### Return Value  
 A menu resource identifier.  
  
### Remarks  
 The framework loads the default menu for the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object from the resource file.  
  
##  <a name="cmfcmenubar__getfloatpopupdirection"></a>  CMFCMenuBar::GetFloatPopupDirection  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetFloatPopupDirection( CMFCToolBarMenuButton* pButton );  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getforcedownarrows"></a>  CMFCMenuBar::GetForceDownArrows  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
BOOL GetForceDownArrows();  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__gethelpcombobox"></a>  CMFCMenuBar::GetHelpCombobox  
 Returns a pointer to the **Help** combo box.  
  
```  
CMFCToolBarComboBoxButton* GetHelpCombobox();  
```  
  
### Return Value  
 A pointer to the **Help** combo box. `NULL` if the **Help** combo box is hidden or not enabled.  
  
### Remarks  
 The **Help** combo box is located on the right side of the menu bar. Call the method [CMFCMenuBar::EnableHelpCombobox](#cmfcmenubar__enablehelpcombobox) to enable this combo box.  
  
##  <a name="cmfcmenubar__gethmenu"></a>  CMFCMenuBar::GetHMenu  
 Retrieves the handle to the menu attached to the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object.  
  
```  
HMENU GetHMenu() const;  
```  
  
##  <a name="cmfcmenubar__getmenufont"></a>  CMFCMenuBar::GetMenuFont  
 Retrieves the current menu font.  
  
```  
static const CFont& GetMenuFont(  
    BOOL bHorz = TRUE);  
```  
  
### Parameters  
 [in] `bHorz`  
 A Boolean parameter that specifies whether to return the horizontal or vertical font. `TRUE` indicates the horizontal font.  
  
### Return Value  
 A pointer to a [CFont](../VS_visualcpp/CFont-Class.md) parameter that contains the current menu bar font.  
  
### Remarks  
 The returned font is a global parameter for the application. Two global fonts are maintained for all `CMFCMenuBar` objects. These separate fonts are used for horizontal and vertical menu bars.  
  
##  <a name="cmfcmenubar__getmenuitem"></a>  CMFCMenuBar::GetMenuItem  
 Retrieves a [CMFCToolBarButton](../VS_visualcpp/CMFCToolBarButton-Class.md) object on a menu bar based on the item index.  
  
```  
CMFCToolBarButton* GetMenuItem( int iItem ) const;  
```  
  
### Parameters  
 [in] `iItem`  
 The index of the menu item to return.  
  
### Return Value  
 A pointer to the `CMFCToolBarButton` object that matches the index specified by `iItem`. `NULL` if the index is invalid.  
  
##  <a name="cmfcmenubar__getrowheight"></a>  CMFCMenuBar::GetRowHeight  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual int GetRowHeight() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getsystembutton"></a>  CMFCMenuBar::GetSystemButton  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CMFCToolBarMenuButtonsButton* GetSystemButton(  
    UINT uiBtn,  
    BOOL bByCommand = TRUE  
) const;  
```  
  
### Parameters  
 [in] `uiBtn`  
  [in] `bByCommand`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getsystembuttonscount"></a>  CMFCMenuBar::GetSystemButtonsCount  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
int GetSystemButtonsCount() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__getsystemmenu"></a>  CMFCMenuBar::GetSystemMenu  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
CMFCToolBarSystemMenuButton* GetSystemMenu() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__highlightdisableditems"></a>  CMFCMenuBar::HighlightDisabledItems  
 Controls whether the framework highlights disabled menu items.  
  
```  
static void HighlightDisabledItems(  
    BOOL bHighlight = TRUE);  
```  
  
### Parameters  
 [in] `bHighlight`  
 A Boolean parameter that indicates whether the framework highlights unavailable menu items.  
  
### Remarks  
 By default, the framework does not highlight unavailable menu items when the user positions the mouse pointer over them.  
  
##  <a name="cmfcmenubar__isbuttonextrasizeavailable"></a>  CMFCMenuBar::IsButtonExtraSizeAvailable  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;  
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__ishighlightdisableditems"></a>  CMFCMenuBar::IsHighlightDisabledItems  
 Indicates whether the framework highlights unavailable menu items.  
  
```  
static BOOL IsHighlightDisabledItems();  
```  
  
### Return Value  
 `TRUE` if unavailable menu items are highlighted; otherwise `FALSE`.  
  
### Remarks  
 By default, the framework does not highlight unavailable menu items when the user positions the mouse pointer over them. Use the [CMFCMenuBar::HighlightDisabledItems](#cmfcmenubar__highlightdisableditems) method to enable this feature.  
  
##  <a name="cmfcmenubar__ismenushadows"></a>  CMFCMenuBar::IsMenuShadows  
 Indicates whether the framework draws shadows for pop-up menus.  
  
```  
static BOOL IsMenuShadows();  
```  
  
### Return Value  
 `TRUE` if the framework draws menu shadows; otherwise `FALSE`.  
  
### Remarks  
 Use the [CMFCMenuBar::EnableMenuShadows](#cmfcmenubar__enablemenushadows) method to enable or disable this feature.  
  
##  <a name="cmfcmenubar__isrecentlyusedmenus"></a>  CMFCMenuBar::IsRecentlyUsedMenus  
 Indicates whether recently used menu commands are displayed on the menu bar.  
  
```  
static BOOL IsRecentlyUsedMenus();  
```  
  
### Return Value  
 Nonzero if the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object shows recently used menu commands; otherwise 0.  
  
### Remarks  
 Use the function [CMFCMenuBar::SetRecentlyUsedMenus](#cmfcmenubar__setrecentlyusedmenus) to control whether the menu bar shows recently used menu commands.  
  
##  <a name="cmfcmenubar__isshowallcommands"></a>  CMFCMenuBar::IsShowAllCommands  
 Indicates whether menus display all commands.  
  
```  
static BOOL IsShowAllCommands();  
```  
  
### Return Value  
 Nonzero if the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) displays all commands; otherwise 0.  
  
### Remarks  
 A `CMFCMenuBar` object can be configured to either show all commands or show only a subset of commands. For more information about this feature, see [CMFCMenuBar Class](../VS_visualcpp/CMFCMenuBar-Class.md).  
  
 `IsShowAllCommands` will tell you how this feature is configured for the `CMFCMenuBar` object. To control which menu commands are shown, use the methods [CMFCMenuBar::SetShowAllCommands](#cmfcmenubar__setshowallcommands) and [CMFCMenuBar::SetRecentlyUsedMenus](#cmfcmenubar__setrecentlyusedmenus).  
  
##  <a name="cmfcmenubar__isshowallcommandsdelay"></a>  CMFCMenuBar::IsShowAllCommandsDelay  
 Indicates whether the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object displays all the commands after a short delay.  
  
```  
static BOOL IsShowAllCommandsDelay();  
```  
  
### Return Value  
 Nonzero if the menu bar displays full menus after a short delay; otherwise 0.  
  
### Remarks  
 When you configure a menu bar to display recently used items, the menu bar displays the full menu in one of two ways:  
  
-   Display the full menu after a programmed delay from when the user hovers the cursor over the arrow at the bottom of the menu.  
  
-   Display the full menu after the user clicks the arrow at the bottom of the menu.  
  
 By default, all `CMFCMenuBar` objects use the option to display the full menu after a short delay. This option cannot be changed programmatically in the `CMFCMenuBar` class. However, a user can change the behavior during toolbar customization by using the **Customize** dialog box..  
  
##  <a name="cmfcmenubar__loadstate"></a>  CMFCMenuBar::LoadState  
 Loads the state of the menu bar from the Windows registry.  
  
```  
virtual BOOL LoadState(  
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT)-1);  
```  
  
### Parameters  
 [in] `lpszProfileName`  
 A string that contains the path of a Windows registry key.  
  
 [in] `nIndex`  
 The control ID for the menu bar.  
  
 [in] `uiID`  
 A reserved value.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
 Use the [CMFCMenuBar::SaveState](#cmfcmenubar__savestate) method to save the state of the menu bar to the registry. The saved information includes the menu items, the dock state, and the position of the menu bar.  
  
 In most cases your application does not call `LoadState`. The framework calls this method when it initializes the workspace.  
  
##  <a name="cmfcmenubar__onchangehot"></a>  CMFCMenuBar::OnChangeHot  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual void OnChangeHot( int iHot );  
```  
  
### Parameters  
 [in] `iHot`  
  
### Remarks  
  
##  <a name="cmfcmenubar__ondefaultmenuloaded"></a>  CMFCMenuBar::OnDefaultMenuLoaded  
 The framework calls this method when it loads the menu resource from the resource file.  
  
```  
virtual void OnDefaultMenuLoaded( HMENU hMenu );  
```  
  
### Parameters  
 [in] `hMenu`  
 The handle for the menu attached to the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object.  
  
### Remarks  
 The default implementation of this function does nothing. Override this function to execute custom code after the framework loads a menu resource from the resource file.  
  
##  <a name="cmfcmenubar__onsendcommand"></a>  CMFCMenuBar::OnSendCommand  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL OnSendCommand( const CMFCToolBarButton* pButton );  
```  
  
### Parameters  
 [in] `pButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__onsetdefaultbuttontext"></a>  CMFCMenuBar::OnSetDefaultButtonText  
 The framework calls this method when the user changes the text of an item on the menu bar.  
  
```  
virtual BOOL OnSetDefaultButtonText( CMFCToolBarButton* pButton );  
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to the [CMFCToolBarButton](../VS_visualcpp/CMFCToolBarButton-Class.md) object that the user wants to customize.  
  
### Return Value  
 `TRUE` if the framework applies the user changes to the menu bar; otherwise `FALSE`.  
  
### Remarks  
 The default implementation for this method changes the text of the button to the text that the user provides.  
  
##  <a name="cmfcmenubar__ontoolhittest"></a>  CMFCMenuBar::OnToolHitTest  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual INT_PTR OnToolHitTest(  
    CPoint point,  
    TOOLINFO* pTI ) const;  
```  
  
### Parameters  
 [in] `point`  
  [in] `pTI`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__pretranslatemessage"></a>  CMFCMenuBar::PreTranslateMessage  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
virtual BOOL PreTranslateMessage( MSG* pMsg );  
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcmenubar__restoreoriginalstate"></a>  CMFCMenuBar::RestoreOriginalstate  
 Called by the framework when the user selects **Reset** from the **Customize** dialog box.  
  
```  
virtual BOOL RestoreOriginalstate();  
```  
  
### Return Value  
 Nonzero if the method is successful; otherwise 0.  
  
### Remarks  
 This method is called when the user selects **Reset** from the customization menu. You can also manually call this method to programmatically reset the state of the menu bar. This method loads the original state from the resource file.  
  
 Override this method if you want to do any processing when the user selects the **Reset** option.  
  
##  <a name="cmfcmenubar__savestate"></a>  CMFCMenuBar::SaveState  
 Saves the state of the [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object to the Windows registry.  
  
```  
virtual BOOL SaveState (  
    LPCTSTR lpszProfileName = NULL,  
    int nIndex = -1,  
    UINT uiID = (UINT)-1);  
```  
  
### Parameters  
 [in] `lpszProfileName`  
 A string that contains the path of a Windows registry key.  
  
 [in] `nIndex`  
 The control ID for the menu bar.  
  
 [in] `uiID`  
 A reserved value.  
  
### Return Value  
 `TRUE` if successful; otherwise `FALSE`;  
  
### Remarks  
 Usually, your application does not call `SaveState`. The framework calls this method when the workspace is serialized. For more information, see [CWinAppEx::SaveState](../VS_visualcpp/CWinAppEx-Class.md#cwinappex__savestate).  
  
 The saved information includes the menu items, the dock state, and the position of the menu bar.  
  
##  <a name="cmfcmenubar__setdefaultmenuresid"></a>  CMFCMenuBar::SetDefaultMenuResId  
 Sets the default menu for a [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) object based on the resource ID.  
  
```  
void SetDefaultMenuResId( UINT uiResId );  
```  
  
### Parameters  
 [in] `uiResId`  
 The resource ID for the new default menu.  
  
### Remarks  
 The [CMFCMenuBar::RestoreOriginalstate](#cmfcmenubar__restoreoriginalstate) method restores the default menu from the resource file.  
  
 Use the [CMFCMenuBar::GetDefaultMenuResId](#cmfcmenubar__getdefaultmenuresid) method to retrieve the default menu without restoring it.  
  
##  <a name="cmfcmenubar__setforcedownarrows"></a>  CMFCMenuBar::SetForceDownArrows  
 This topic is included for completeness. For more detail see the source code located in the VC\atlmfc\src\mfc folder of your Visual Studio installation.  
  
```  
void SetForceDownArrows( BOOL bValue );  
```  
  
### Parameters  
 [in] `bValue`  
  
### Remarks  
  
##  <a name="cmfcmenubar__setmaximizemode"></a>  CMFCMenuBar::SetMaximizeMode  
 The framework calls this method when a MDI changes its display mode and the menu bar must be updated.  
  
```  
void SetMaximizeMode(  
    BOOL bMax,  
    CWnd* pWnd = NULL,  
    BOOL bRecalcLayout = TRUE                );  
```  
  
### Parameters  
 [in] `bMax`  
 A Boolean that specifies the mode. See the Remarks section for more information.  
  
 [in] `pWnd`  
 A pointer to the MDI child window that is changing.  
  
 [in] `bRecalcLayout`  
 A Boolean that specifies whether the layout of the menu bar should be recalculated immediately.  
  
### Remarks  
 When an MDI child window is maximized, a menu bar attached to the MDI main frame window displays the system menu and the **Minimize**, **Maximize** and **Close** buttons. If `bMax` is `TRUE` and `pWnd` is not `NULL`, the MDI child window is maximized and the menu bar must incorporate the extra controls. Otherwise, the menu bar returns to its regular state.  
  
##  <a name="cmfcmenubar__setmenubuttonrtc"></a>  CMFCMenuBar::SetMenuButtonRTC  
 Sets the runtime class information that the framework uses when the user creates menu buttons.  
  
```  
void SetMenuButtonRTC( CRuntimeClass* pMenuButtonRTC );  
```  
  
### Parameters  
 [in] `pMenuButtonRTC`  
 The [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) information for a class derived from the [CMFCMenuButton Class](../VS_visualcpp/CMFCMenuButton-Class.md).  
  
### Remarks  
 When a user adds new buttons to the menu bar, the framework creates the buttons dynamically. By default, it creates `CMFCMenuButton` objects. Override this method to change the type of button objects that the framework creates.  
  
##  <a name="cmfcmenubar__setmenufont"></a>  CMFCMenuBar::SetMenuFont  
 Sets the font for all menu bars in your application.  
  
```  
static BOOL SetMenuFont(  
    LPLOGFONT lpLogFont,  
    BOOL bHorz = TRUE);  
```  
  
### Parameters  
 [in] `lpLogFont`  
 A pointer to a                                 [LOGFONT](http://msdn.microsoft.com/library/windows/desktop/bb773327) structure that defines the font to set.  
  
 [in] `bHorz`  
 TRUE if you want the `lpLogFont` parameter to be used for the vertical font, FALSE if you want it to be used for horizontal font.  
  
### Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### Remarks  
 Two fonts are used for all [CMFCMenuBar](../VS_visualcpp/CMFCMenuBar-Class.md) objects. These separate fonts are used for horizontal and vertical menu bars.  
  
 The font settings are global variables and affect all `CMFCMenuBar` objects.  
  
##  <a name="cmfcmenubar__setrecentlyusedmenus"></a>  CMFCMenuBar::SetRecentlyUsedMenus  
 Controls whether a menu bar displays recently used menu commands.  
  
```  
static void SetRecentlyUsedMenus (  
    BOOL bOn = TRUE);  
```  
  
### Parameters  
 [in] `bOn`  
 A Boolean that controls whether recently used menu commands are displayed.  
  
##  <a name="cmfcmenubar__setshowallcommands"></a>  CMFCMenuBar::SetShowAllCommands  
 Controls whether a menu shows all the available commands.  
  
```  
static void SetShowAllCommands(  
    BOOL bShowAllCommands = TRUE);  
```  
  
### Parameters  
 [in] `bShowAllCommands`  
 A Boolean parameter that specifies whether the pop-up menu shows all the menu commands.  
  
### Remarks  
 If a menu does not display all the menu commands, it hides the commands that are rarely used. For more information about displaying menu commands, see [CMFCMenuBar Class](../VS_visualcpp/CMFCMenuBar-Class.md).  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCToolBar Class](../VS_visualcpp/CMFCToolBar-Class.md)