---
title: "CMFCPopupMenu Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPopupMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPopupMenu class"
ms.assetid: 9555dca1-8c9c-44c9-af72-0659ddad128e
caps.latest.revision: 40
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
# CMFCPopupMenu Class
Implements Windows pop-up menu functionality and extends it by adding features such as tear-off menus and tooltips.  
  
## Syntax  
  
```  
class CMFCPopupMenu : public CMiniFrameWnd  
```  
  
## Members  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPopupMenu::CMFCPopupMenu](#cmfcpopupmenu__cmfcpopupmenu)|Constructs a `CMFCPopupMenu` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPopupMenu::ActivatePopupMenu](#cmfcpopupmenu__activatepopupmenu)||  
|[CMFCPopupMenu::AlwaysShowEmptyToolsEntry](#cmfcpopupmenu__alwaysshowemptytoolsentry)|Sets whether a pop-up menu is enabled to show empty entries for user-defined tools.|  
|[CMFCPopupMenu::AreAllCommandsShown](#cmfcpopupmenu__areallcommandsshown)||  
|[CMFCPopupMenu::CheckArea](#cmfcpopupmenu__checkarea)|Determines the location of a point relative to the pop-up menu.|  
|[CMFCPopupMenu::CloseMenu](#cmfcpopupmenu__closemenu)||  
|[CMFCPopupMenu::Create](#cmfcpopupmenu__create)|Creates a pop-up menu and attaches it to the `CMFCPopupMenu` object.|  
|[CMFCPopupMenu::DefaultMouseClickOnClose](#cmfcpopupmenu__defaultmouseclickonclose)||  
|[CMFCPopupMenu::EnableMenuLogo](#cmfcpopupmenu__enablemenulogo)|Initializes the logo for a pop-up menu.|  
|[CMFCPopupMenu::EnableMenuSound](#cmfcpopupmenu__enablemenusound)|Enables menu sound.|  
|[CMFCPopupMenu::EnableResize](#cmfcpopupmenu__enableresize)||  
|[CMFCPopupMenu::EnableScrolling](#cmfcpopupmenu__enablescrolling)||  
|[CMFCPopupMenu::EnableVertResize](#cmfcpopupmenu__enablevertresize)||  
|[CMFCPopupMenu::FindSubItemByCommand](#cmfcpopupmenu__findsubitembycommand)||  
|[CMFCPopupMenu::GetActiveMenu](#cmfcpopupmenu__getactivemenu)|Returns the currently active menu.|  
|[CMFCPopupMenu::GetAnimationSpeed](#cmfcpopupmenu__getanimationspeed)|Returns the animation speed for pop-up menus.|  
|[CMFCPopupMenu::GetAnimationType](#cmfcpopupmenu__getanimationtype)|Returns the current type of pop-up menu animation.|  
|[CMFCPopupMenu::GetDropDirection](#cmfcpopupmenu__getdropdirection)||  
|[CMFCPopupMenu::GetForceMenuFocus](#cmfcpopupmenu__getforcemenufocus)|Indicates whether the focus is returned to the menu bar when a pop-up menu is displayed.|  
|[CMFCPopupMenu::GetForceShadow](#cmfcpopupmenu__getforceshadow)||  
|[CMFCPopupMenu::GetHMenu](#cmfcpopupmenu__gethmenu)|Returns a handle to the attached menu resource.|  
|[CMFCPopupMenu::GetMenuBar](#cmfcpopupmenu__getmenubar)|Returns the [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) embedded inside the pop-up menu.|  
|[CMFCPopupMenu::GetMenuItem](#cmfcpopupmenu__getmenuitem)|Returns a pointer to the menu item at the specified index.|  
|[CMFCPopupMenu::GetMenuItemCount](#cmfcpopupmenu__getmenuitemcount)|Returns the number of items in a popup menu.|  
|[CMFCPopupMenu::GetMessageWnd](#cmfcpopupmenu__getmessagewnd)|Returns a pointer to the window where the framework routes the pop-up menu messages.|  
|[CMFCPopupMenu::GetParentArea](#cmfcpopupmenu__getparentarea)||  
|[CMFCPopupMenu::GetParentButton](#cmfcpopupmenu__getparentbutton)|Returns a pointer to the parent toolbar button.|  
|[CMFCPopupMenu::GetParentPopupMenu](#cmfcpopupmenu__getparentpopupmenu)|Returns a pointer to the parent pop-up menu.|  
|[CMFCPopupMenu::GetParentRibbonElement](#cmfcpopupmenu__getparentribbonelement)||  
|[CMFCPopupMenu::GetParentToolBar](#cmfcpopupmenu__getparenttoolbar)|Returns a pointer to the parent toolbar.|  
|[CMFCPopupMenu::GetQuickCustomizeType](#cmfcpopupmenu__getquickcustomizetype)||  
|[CMFCPopupMenu::GetSelItem](#cmfcpopupmenu__getselitem)|Returns a pointer to the currently selected menu command.|  
|[CMFCPopupMenu::HasBeenResized](#cmfcpopupmenu__hasbeenresized)||  
|[CMFCPopupMenu::HideRarelyUsedCommands](#cmfcpopupmenu__hiderarelyusedcommands)|Indicates whether the pop-up menu can hide rarely used commands.|  
|[CMFCPopupMenu::InCommand](#cmfcpopupmenu__incommand)||  
|[CMFCPopupMenu::InsertItem](#cmfcpopupmenu__insertitem)|Inserts a new item into the pop-up menu at the specified location.|  
|[CMFCPopupMenu::InsertSeparator](#cmfcpopupmenu__insertseparator)|Inserts a separator into the pop-up menu at the specified location.|  
|[CMFCPopupMenu::IsAlwaysClose](#cmfcpopupmenu__isalwaysclose)||  
|[CMFCPopupMenu::IsAlwaysShowEmptyToolsEntry](#cmfcpopupmenu__isalwaysshowemptytoolsentry)||  
|[CMFCPopupMenu::IsCustomizePane](#cmfcpopupmenu__iscustomizepane)|Indicates whether the pop-up menu is functioning as a **QuickCustomizePane**.|  
|[CMFCPopupMenu::IsEscClose](#cmfcpopupmenu__isescclose)||  
|[CMFCPopupMenu::IsIdle](#cmfcpopupmenu__isidle)|Indicates whether a pop-up menu is currently idle.|  
|[CMFCPopupMenu::IsMenuSound](#cmfcpopupmenu__ismenusound)||  
|[CMFCPopupMenu::IsQuickCustomize](#cmfcpopupmenu__isquickcustomize)|Determines whether the associated [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) is in QuickCustomize mode.|  
|[CMFCPopupMenu::IsResizeble](#cmfcpopupmenu__isresizeble)||  
|[CMFCPopupMenu::IsRightAlign](#cmfcpopupmenu__isrightalign)|Indicates whether the menu is right-aligned or left-aligned.|  
|[CMFCPopupMenu::IsScrollable](#cmfcpopupmenu__isscrollable)||  
|[CMFCPopupMenu::IsSendMenuSelectMsg](#cmfcpopupmenu__issendmenuselectmsg)|Indicates whether the framework notifies the parent frame when the user selects a command from the pop-up menu.|  
|[CMFCPopupMenu::IsShown](#cmfcpopupmenu__isshown)|Indicates whether the pop-up menu is currently visible.|  
|[CMFCPopupMenu::MoveTo](#cmfcpopupmenu__moveto)||  
|[CMFCPopupMenu::OnCmdMsg](#cmfcpopupmenu__oncmdmsg)|(Overrides `CFrameWnd::OnCmdMsg`.)|  
|[CMFCPopupMenu::PostCommand](#cmfcpopupmenu__postcommand)||  
|[CMFCPopupMenu::PreTranslateMessage](#cmfcpopupmenu__pretranslatemessage)|(Overrides `CFrameWnd::PreTranslateMessage`.)|  
|[CMFCPopupMenu::RecalcLayout](#cmfcpopupmenu__recalclayout)|Called by the framework when the standard control bars are toggled on or off or when the frame window is resized. (Overrides [CFrameWnd::RecalcLayout](../../mfc/reference/cframewnd-class.md#cframewnd__recalclayout).)|  
|[CMFCPopupMenu::RemoveAllItems](#cmfcpopupmenu__removeallitems)|Clears all the items from a pop-up menu.|  
|[CMFCPopupMenu::RemoveItem](#cmfcpopupmenu__removeitem)|Removes the specified item from a pop-up menu.|  
|[CMFCPopupMenu::SaveState](#cmfcpopupmenu__savestate)||  
|[CMFCPopupMenu::SetAnimationSpeed](#cmfcpopupmenu__setanimationspeed)|Sets the animation speed for pop-up menus.|  
|[CMFCPopupMenu::SetAnimationType](#cmfcpopupmenu__setanimationtype)|Sets the animation type for the pop-up menu.|  
|[CMFCPopupMenu::SetAutoDestroy](#cmfcpopupmenu__setautodestroy)||  
|[CMFCPopupMenu::SetDefaultItem](#cmfcpopupmenu__setdefaultitem)|Sets the default command for the pop-up menu.|  
|[CMFCPopupMenu::SetForceMenuFocus](#cmfcpopupmenu__setforcemenufocus)|Forces the input focus to return to the menu bar when a pop-up menu is displayed.|  
|[CMFCPopupMenu::SetForceShadow](#cmfcpopupmenu__setforceshadow)|Forces the framework to draw menu shadows when pop-up menus appear outside the main frame.|  
|[CMFCPopupMenu::SetMaxWidth](#cmfcpopupmenu__setmaxwidth)|Set the maximum width for the pop-up menu.|  
|[CMFCPopupMenu::SetMessageWnd](#cmfcpopupmenu__setmessagewnd)||  
|[CMFCPopupMenu::SetParentRibbonElement](#cmfcpopupmenu__setparentribbonelement)||  
|[CMFCPopupMenu::SetQuickCustomizeType](#cmfcpopupmenu__setquickcustomizetype)||  
|[CMFCPopupMenu::SetQuickMode](#cmfcpopupmenu__setquickmode)||  
|[CMFCPopupMenu::SetRightAlign](#cmfcpopupmenu__setrightalign)|Sets the menu alignment for pop-up menus.|  
|[CMFCPopupMenu::SetSendMenuSelectMsg](#cmfcpopupmenu__setsendmenuselectmsg)|Sets a flag that controls whether the pop-up menu notifies its parent frame when the user selects a command.|  
|[CMFCPopupMenu::ShowAllCommands](#cmfcpopupmenu__showallcommands)|Forces the pop-up menu to display all commands.|  
|[CMFCPopupMenu::TriggerResize](#cmfcpopupmenu__triggerresize)||  
|[CMFCPopupMenu::UpdateAllShadows](#cmfcpopupmenu__updateallshadows)|Updates the shadows for all opened pop-up menus.|  
|[CMFCPopupMenu::UpdateShadow](#cmfcpopupmenu__updateshadow)|Updates the shadow for the pop-up menu.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPopupMenu::CreateTearOffBar](#cmfcpopupmenu__createtearoffbar)||  
|[CMFCPopupMenu::OnChangeHot](#cmfcpopupmenu__onchangehot)||  
|[CMFCPopupMenu::OnChooseItem](#cmfcpopupmenu__onchooseitem)||  
  
### Remarks  
 Normally, MFC creates pop-up menus automatically. If you want to create a `CMFCPopupMenu` object manually, allocate one on the heap and then call [CMFCPopupMenu::Create](#cmfcpopupmenu__create).  
  
## Example  
 The following example demonstrates how to configure a pop-up menu object. The example shows how to set the logo and the sound of the pop-up menu, set the animation speed and type, draw menu shadows when the pop-up menu appears outside the main frame, set the maximum width, and set the right menu alignment of the pop-up menu. This code snippet is part of the [Custom Pages sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#2](../../mfc/reference/codesnippet/cpp/cmfcpopupmenu-class_1.cpp)]  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)  
  
## Requirements  
 **Header:** afxpopupmenu.h  
  
##  <a name="cmfcpopupmenu__activatepopupmenu"></a>  CMFCPopupMenu::ActivatePopupMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall ActivatePopupMenu(
    CFrameWnd* pTopFrame,  
    CMFCPopupMenu* pPopupMenu);
```  
  
### Parameters  
 [in] `pTopFrame`  
 [in] `pPopupMenu`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__alwaysshowemptytoolsentry"></a>  CMFCPopupMenu::AlwaysShowEmptyToolsEntry  
 Sets whether a pop-up menu is enabled to show empty entries for user-defined tools.  
  
```  
static void AlwaysShowEmptyToolsEntry(BOOL bShow = TRUE);
```  
  
### Parameters  
 [in] `bShow`  
 `TRUE` if the pop-up menu can display empty entries; `FALSE` otherwise.  
  
##  <a name="cmfcpopupmenu__areallcommandsshown"></a>  CMFCPopupMenu::AreAllCommandsShown  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL AreAllCommandsShown() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__checkarea"></a>  CMFCPopupMenu::CheckArea  
 Determines the location of a point relative to the pop-up menu.  
  
```  
MENUAREA_TYPE CheckArea(const CPoint& ptScreen) const;

 
```  
  
### Parameters  
 [in] `ptScreen`  
 A point, in screen coordinates.  
  
### Return Value  
 A MENUAREA_TYPE parameter that indicates where the point is relative to the pop-up menu.  
  
### Remarks  
 A MENUAREA_TYPE parameter can have any one of the following values.  
  
-   OUTSIDE - `ptScreen` is outside the pop-up menu.  
  
-   LOGO - `ptScreen` is over a logo area.  
  
-   TEAROFF_CAPTION - `ptScreen` is over the tear-off caption.  
  
-   SHADOW_BOTTOM - `ptScreen` is over the bottom shadow of the pop-up menu.  
  
-   SHADOW_RIGHT - `ptScreen` is over the right shadow of the pop-up menu.  
  
-   MENU - `ptScreen` is over a command.  
  
##  <a name="cmfcpopupmenu__closemenu"></a>  CMFCPopupMenu::CloseMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void CloseMenu(BOOL bSetFocusToBar = FALSE);
```  
  
### Parameters  
 [in] `bSetFocusToBar`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__cmfcpopupmenu"></a>  CMFCPopupMenu::CMFCPopupMenu  
 Constructs a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object.  
  
```  
CMFCPopupMenu(
    CMFCToolBarsMenuPropertyPage* pCustPage,  
    LPCTSTR lpszTitle);
```  
  
### Parameters  
 [in] `pCustPage`  
 A pointer to a customization page.  
  
 [in] `lpszTitle`  
 A string that contains the menu caption.  
  
### Remarks  
 This method allocates the resources for a `CMFCPopupMenu`. To create the pop-up menu item, call [CMFCPopupMenu::Create](#cmfcpopupmenu__create).  
  
##  <a name="cmfcpopupmenu__create"></a>  CMFCPopupMenu::Create  
 Creates a pop-up menu and attaches it to a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object.  
  
```  
virtual BOOL Create(
    CWnd* pWndParent,  
    int x,  
    int y,  
    HMENU hMenu,  
    BOOL bLocked = FALSE,  
    BOOL bOwnMessage = FALSE);
```  
  
### Parameters  
 [in] `pWndParent`  
 The parent window for the `CMFCPopupMenu`.  
  
 [in] `x`  
 The horizontal screen coordinate for the location of the pop-up menu  
  
 [in] `y`  
 The vertical screen coordinate for the location of the pop-menu.  
  
 [in] `hMenu`  
 A handle to a menu resource.  
  
 [in] `bLocked`  
 A Boolean parameter that indicates whether the menu is customizable. `FALSE` indicates that the pop-up menu is customizable.  
  
 [in] `bOwnMessage`  
 A Boolean parameter that indicates how the framework routes the menu messages. See the Remarks section for more details.  
  
### Return Value  
 `TRUE` if the method is successful; otherwise `FALSE`.  
  
### Remarks  
 If `bOwnMessage` is `TRUE`, the framework routes any menu messages to `pWndParent`. `pWndParent` must not be `NULL` if `bOwnMessage` is `TRUE.` If `bOwnMessage` is `FALSE`, the framework routes the menu messages to the parent pop-up menu.  
  
### Example  
 The following example demonstrates how to use the `Create` method of the `CMFCPopuMenu` class. This code snippet is part of the [Custom Pages sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#1](../../mfc/reference/codesnippet/cpp/cmfcpopupmenu-class_2.cpp)]  
  
##  <a name="cmfcpopupmenu__createtearoffbar"></a>  CMFCPopupMenu::CreateTearOffBar  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CPane* CreateTearOffBar(
    CFrameWnd* pWndMain,  
    UINT uiID,  
    LPCTSTR lpszName);
```  
  
### Parameters  
 [in] `pWndMain`  
 [in] `uiID`  
 [in] `lpszName`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__defaultmouseclickonclose"></a>  CMFCPopupMenu::DefaultMouseClickOnClose  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL DefaultMouseClickOnClose() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__enablemenulogo"></a>  CMFCPopupMenu::EnableMenuLogo  
 Initializes the logo for a pop-up menu.  
  
```  
void EnableMenuLogo(
    int iLogoSize,  
    LOGO_LOCATION nLogoLocation = MENU_LOGO_LEFT);
```  
  
### Parameters  
 [in] `iLogoSize`  
 The size of the logo, in pixels.  
  
 [in] `nLogoLocation`  
 An enumerated data type that indicates the location of the logo.  
  
### Remarks  
 To display the logo, implement the method [CFrameWndEx::OnDrawMenuLogo](../../mfc/reference/cframewndex-class.md#cframewndex__ondrawmenulogo) in the main frame window.  
  
 The possible values for `nLogoLocation` are MENU_LOGO_LEFT, MENU_LOGO_RIGHT, MENU_LOGO_TOP, and MENU_LOGO_BOTTOM.  
  
##  <a name="cmfcpopupmenu__enablemenusound"></a>  CMFCPopupMenu::EnableMenuSound  
 Enables menu sound.  
  
```  
static void EnableMenuSound(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable sound, `FALSE` otherwise.  
  
### Remarks  
 If you enable sound, the framework calls the [PlaySound](http://msdn.microsoft.com/library/windows/desktop/bb774426) method when a user opens a pop-up menu or selects a menu command. By default, this feature is enabled.  
  
##  <a name="cmfcpopupmenu__enableresize"></a>  CMFCPopupMenu::EnableResize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableResize(CSize sizeMinResize);
```  
  
### Parameters  
 [in] `sizeMinResize`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__enablescrolling"></a>  CMFCPopupMenu::EnableScrolling  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableScrolling(BOOL = TRUE);
```  
  
### Parameters  
 [in] `BOOL`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__enablevertresize"></a>  CMFCPopupMenu::EnableVertResize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void EnableVertResize(int nMinResize);
```  
  
### Parameters  
 [in] `nMinResize`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__findsubitembycommand"></a>  CMFCPopupMenu::FindSubItemByCommand  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCToolBarMenuButton* FindSubItemByCommand(UINT uiCmd) const;

 
```  
  
### Parameters  
 [in] `uiCmd`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__getactivemenu"></a>  CMFCPopupMenu::GetActiveMenu  
 Returns the currently active menu.  
  
```  
static CMFCPopupMenu* GetActiveMenu();
```  
  
### Return Value  
 A pointer to the active pop-up menu, or NULL if no pop-up menu is currently active.  
  
### Remarks  
 Each application can have at most one active pop-up menu.  
  
##  <a name="cmfcpopupmenu__getanimationspeed"></a>  CMFCPopupMenu::GetAnimationSpeed  
 Returns the animation speed for pop-up menus.  
  
```  
static UINT GetAnimationSpeed();
```  
  
### Return Value  
 An integer that indicates the time, in milliseconds, that a pop-up menu animation takes to finish.  
  
### Remarks  
 The animation speed is a global value. Use [CMFCPopupMenu::SetAnimationSpeed](#cmfcpopupmenu__setanimationspeed) to change the animation speed for pop-up menus.  
  
##  <a name="cmfcpopupmenu__getanimationtype"></a>  CMFCPopupMenu::GetAnimationType  
 Returns the current type of pop-up animation.  
  
```  
static CMFCPopupMenu::ANIMATION_TYPE GetAnimationType(BOOL bNoSystem = FALSE);
```  
  
### Parameters  
 [in] `bNoSystem`  
 A Boolean parameter that indicates whether this method checks the global value. FALSE if you want this method to return the animation style for this instance of the [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md).  
  
### Return Value  
 An enumerated value that describes the animation type.  
  
### Remarks  
 The style of animation for pop-up menus is global for your application. Use [CMFCPopupMenu::SetAnimationType](#cmfcpopupmenu__setanimationtype) to set the animation style.  
  
 The following table lists the possible animation types.  
  
 NO_ANIMATION  
 The pop-up menu is not animated and appears immediately.  
  
 UNFOLD  
 The framework reveals the pop-up menu from the upper-left corner to the lower right corner.  
  
 SLIDE  
 The pop-up menu moves from top to bottom.  
  
 FADE  
 The pop-up menu first appears transparent and gradually solidifies.  
  
##  <a name="cmfcpopupmenu__getdropdirection"></a>  CMFCPopupMenu::GetDropDirection  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
DROP_DIRECTION GetDropDirection() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__getforcemenufocus"></a>  CMFCPopupMenu::GetForceMenuFocus  
 Indicates whether the focus is returned to the menu bar when a pop-up menu is displayed.  
  
```  
static BOOL GetForceMenuFocus();
```  
  
### Return Value  
 `TRUE` if the input focus is returned to the menu bar when a pop-up menu is displayed; `FALSE` if the pop-up menu retains the focus.  
  
### Remarks  
 By default, your application does not return focus to the menu bar. To change this setting, use [CMFCPopupMenu::SetForceMenuFocus](#cmfcpopupmenu__setforcemenufocus).  
  
##  <a name="cmfcpopupmenu__getforceshadow"></a>  CMFCPopupMenu::GetForceShadow  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall GetForceShadow();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__gethmenu"></a>  CMFCPopupMenu::GetHMenu  
 Returns a handle to the attached menu resource.  
  
```  
HMENU GetHMenu();
```  
  
##  <a name="cmfcpopupmenu__getmenubar"></a>  CMFCPopupMenu::GetMenuBar  
 Returns the [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) embedded inside the pop-up menu.  
  
```  
virtual CMFCPopupMenuBar* GetMenuBar();
```  
  
### Return Value  
 A pointer to the embedded `CMFCPopupMenuBar`.  
  
### Remarks  
 The pop-up menu has an embedded `CMFCPopupMenuBar` object. You must override this method in a derived class if you are using a different embedded class.  
  
##  <a name="cmfcpopupmenu__getmenuitem"></a>  CMFCPopupMenu::GetMenuItem  
 Returns a pointer to the menu item at the specified index.  
  
```  
CMFCToolBarMenuButton* GetMenuItem(int iIndex) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of a menu item.  
  
### Return Value  
 A pointer to a menu item. `NULL` if the index is invalid.  
  
### Remarks  
 Menu items are represented by the [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md). When you call this method, it returns a pointer to the appropriate `CMFCToolBarMenuButton`.  
  
##  <a name="cmfcpopupmenu__getmenuitemcount"></a>  CMFCPopupMenu::GetMenuItemCount  
 Returns the number of items in a pop-up menu.  
  
```  
int GetMenuItemCount() const;

 
```  
  
### Return Value  
 The number of items in the menu.  
  
##  <a name="cmfcpopupmenu__getmessagewnd"></a>  CMFCPopupMenu::GetMessageWnd  
 Returns a pointer to the window where the framework routes the pop-up menu messages.  
  
```  
CWnd* GetMessageWnd() const;

 
```  
  
### Return Value  
 A pointer to the window that receives the pop-up menu messages; `NULL` if there is no window.  
  
### Remarks  
 When you use the method [CMFCPopupMenu::Create](#cmfcpopupmenu__create) to create a pop-up menu, you specify what window receives the menu messages.  
  
##  <a name="cmfcpopupmenu__getparentarea"></a>  CMFCPopupMenu::GetParentArea  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual CWnd* GetParentArea(CRect& rectParentBtn);
```  
  
### Parameters  
 [in] `rectParentBtn`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__getparentbutton"></a>  CMFCPopupMenu::GetParentButton  
 Returns a pointer to the parent toolbar button.  
  
```  
CMFCToolBarMenuButton* GetParentButton() const;

 
```  
  
### Return Value  
 A pointer to the parent toolbar button. `NULL` if the pop-up menu has no parent toolbar button.  
  
### Remarks  
 A [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) can be associated with a button on the menu. In this scenario, the pop-up menu appears when a user selects the parent toolbar button.  
  
 If the pop-up menu is a shortcut menu, it will have no parent toolbar button.  
  
##  <a name="cmfcpopupmenu__getparentpopupmenu"></a>  CMFCPopupMenu::GetParentPopupMenu  
 Returns a pointer to the parent pop-up menu.  
  
```  
CMFCPopupMenu* GetParentPopupMenu() const;

 
```  
  
### Return Value  
 A pointer to the parent [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) object; `NULL` if there is no parent pop-up menu.  
  
### Remarks  
 A pop-up menu has a parent `CMFCPopupMenu` object only if it is a submenu.  
  
##  <a name="cmfcpopupmenu__getparentribbonelement"></a>  CMFCPopupMenu::GetParentRibbonElement  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
CMFCRibbonBaseElement* GetParentRibbonElement() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__getparenttoolbar"></a>  CMFCPopupMenu::GetParentToolBar  
 Returns a pointer to the parent toolbar.  
  
```  
CMFCToolBar* GetParentToolBar() const;

 
```  
  
### Return Value  
 A pointer to the parent toolbar. `NULL` if the pop-up menu has no parent toolbar.  
  
### Remarks  
 If the [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) is a shortcut menu, then it has no parent toolbar.  
  
##  <a name="cmfcpopupmenu__getquickcustomizetype"></a>  CMFCPopupMenu::GetQuickCustomizeType  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
QUICK_CUSTOMIZE_TYPE GetQuickCustomizeType() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__getselitem"></a>  CMFCPopupMenu::GetSelItem  
 Returns a pointer to the currently selected menu command.  
  
```  
CMFCToolBarMenuButton* GetSelItem();
```  
  
### Return Value  
 A pointer to the currently selected menu command; `NULL` if no item is selected.  
  
### Remarks  
 The menu commands on a pop-up menu are represented by the [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md), or a class derived from `CMFCToolBarMenuButton`.  
  
##  <a name="cmfcpopupmenu__hasbeenresized"></a>  CMFCPopupMenu::HasBeenResized  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL HasBeenResized() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__hiderarelyusedcommands"></a>  CMFCPopupMenu::HideRarelyUsedCommands  
 Indicates whether the pop-up menu can hide rarely used commands.  
  
```  
BOOL HideRarelyUsedCommands() const;

 
```  
  
### Return Value  
 `TRUE` if the pop-up menu can hide the rarely used commands; otherwise `FALSE`.  
  
### Remarks  
 This method specifies only whether a pop-up menu can hide rarely used commands, not if that configuration is enabled. A pop-up menu can hide rarely used commands if it has a parent button and the parent window is derived from the [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md). Use [CMFCMenuBar::SetRecentlyUsedMenus](../../mfc/reference/cmfcmenubar-class.md#cmfcmenubar__setrecentlyusedmenus) to enable this feature and [CMFCMenuBar::IsRecentlyUsedMenus](../../mfc/reference/cmfcmenubar-class.md#cmfcmenubar__isrecentlyusedmenus) to determine if this feature is currently enabled. You must call both of these methods for the parent window.  
  
##  <a name="cmfcpopupmenu__incommand"></a>  CMFCPopupMenu::InCommand  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL InCommand();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__insertitem"></a>  CMFCPopupMenu::InsertItem  
 Inserts a new item into the pop-up menu at the specified location.  
  
```  
int InsertItem(
    const CMFCToolBarMenuButton& button,  
    int iInsertA = -1);
```  
  
### Parameters  
 [in] `button`  
 A reference to the menu item to add.  
  
 [in] `iInsertAt`  
 The zero-based index for the new item. If `iInsertAt` is -1, the item is added to the end of the menu.  
  
### Return Value  
 The zero-based index of the position where the item was inserted. -1 if the method fails.  
  
### Remarks  
 This method will fail if you provide an invalid value for `iInsertAt`, such as an integer larger than the number of items currently on the pop-up menu.  
  
##  <a name="cmfcpopupmenu__insertseparator"></a>  CMFCPopupMenu::InsertSeparator  
 Inserts a separator into the pop-up menu at the specified location.  
  
```  
int InsertSeparator(int iInsertAt = -1);
```  
  
### Parameters  
 [in] `iInsertAt`  
 The zero-based index of the position where this method will insert the separator.  
  
### Return Value  
 The zero-based index of the position where the separator was inserted. -1 if this method fails.  
  
### Remarks  
 A value of -1 for `iInsertAt` means this method will add the separator to the end of the pop-up menu.  
  
 This method fails if `iInsertAt` is an invalid value.  
  
##  <a name="cmfcpopupmenu__isalwaysclose"></a>  CMFCPopupMenu::IsAlwaysClose  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsAlwaysClose() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__isalwaysshowemptytoolsentry"></a>  CMFCPopupMenu::IsAlwaysShowEmptyToolsEntry  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall IsAlwaysShowEmptyToolsEntry();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__iscustomizepane"></a>  CMFCPopupMenu::IsCustomizePane  
 Indicates whether the pop-up menu is functioning as a **QuickCustomizePane**.  
  
```  
BOOL IsCustomizePane();
```  
  
### Return Value  
 `TRUE` if the pop-up is a **QuckCustomizePane**; otherwise `FALSE`.  
  
### Remarks  
 Use the **QuickCustomizePane** to enable the user to directly customize the pop-up menu. The **QuickCustomizePane** is a [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) that appears when the user clicks on a toolbar button to edit it directly.  
  
 Your application should call this method during [CMDIFrameWndEx::OnShowCustomizePane](../../mfc/reference/cmdiframewndex-class.md#cmdiframewndex__onshowcustomizepane).  
  
##  <a name="cmfcpopupmenu__isescclose"></a>  CMFCPopupMenu::IsEscClose  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsEscClose();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__isidle"></a>  CMFCPopupMenu::IsIdle  
 Indicates whether a pop-up menu is currently idle.  
  
```  
virtual BOOL IsIdle() const;

 
```  
  
### Return Value  
 `TRUE` if the pop-up menu is in idle mode; otherwise `FALSE`.  
  
### Remarks  
 By default, a pop-up menu is in idle mode if the display animation is complete and the user is not scrolling the pop-up menu.  
  
##  <a name="cmfcpopupmenu__ismenusound"></a>  CMFCPopupMenu::IsMenuSound  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static UINT __stdcall IsMenuSound();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__isquickcustomize"></a>  CMFCPopupMenu::IsQuickCustomize  
 Determines whether the associated [CMFCToolBarMenuButton Class](../../mfc/reference/cmfctoolbarmenubutton-class.md) is in QuickCustomize mode.  
  
```  
BOOL IsQuickCustomize();
```  
  
### Return Value  
 `TRUE` if the associated menu button is in QuickCustomize mode; otherwise `FALSE`. This method will also return `FALSE` if the pop-up menu is not associated with a `CMFCToolBarMenuButton`.  
  
### Remarks  
 In QuickCustomize mode the user selects a button on a toolbar to customize the button directly.  
  
##  <a name="cmfcpopupmenu__isresizeble"></a>  CMFCPopupMenu::IsResizeble  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsResizeble() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__isrightalign"></a>  CMFCPopupMenu::IsRightAlign  
 Indicates whether the menu is right-aligned or left-aligned.  
  
```  
BOOL IsRightAlign() const;

 
```  
  
### Return Value  
 `TRUE` if the menu is right-aligned; `FALSE` if the menu left-aligned.  
  
### Remarks  
 You can use [CMFCPopupMenu::SetRightAlign](#cmfcpopupmenu__setrightalign) to set the menu alignment. By default, pop-up menus use left-alignment.  
  
 Menu alignment is not a global setting and can vary between pop-up menus.  
  
##  <a name="cmfcpopupmenu__isscrollable"></a>  CMFCPopupMenu::IsScrollable  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsScrollable() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__issendmenuselectmsg"></a>  CMFCPopupMenu::IsSendMenuSelectMsg  
 Indicates whether the framework notifies the parent frame when the user selects a command from the pop-up menu.  
  
```  
static BOOL IsSendMenuSelectMsg();
```  
  
### Return Value  
 `TRUE` if the framework notifies the parent frame; otherwise `FALSE`.  
  
### Remarks  
 The framework notifies the parent frame by sending it the `WM_MENUSELECT` message when a used selects a menu command.  
  
##  <a name="cmfcpopupmenu__isshown"></a>  CMFCPopupMenu::IsShown  
 Indicates whether the pop-up menu is currently visible.  
  
```  
BOOL IsShown() const;

 
```  
  
### Return Value  
 `TRUE` if a pop-up menu is visible; otherwise `FALSE`.  
  
##  <a name="cmfcpopupmenu__moveto"></a>  CMFCPopupMenu::MoveTo  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void MoveTo(const CPoint& pt);
```  
  
### Parameters  
 [in] `pt`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__onchangehot"></a>  CMFCPopupMenu::OnChangeHot  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnChangeHot(int nHot);
```  
  
### Parameters  
 [in] `nHot`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__onchooseitem"></a>  CMFCPopupMenu::OnChooseItem  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnChooseItem(UINT uidCmdID);
```  
  
### Parameters  
 [in] `uidCmdID`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__oncmdmsg"></a>  CMFCPopupMenu::OnCmdMsg  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### Parameters  
 [in] `nID`  
 [in] `nCode`  
 [in] `pExtra`  
 [in] `pHandlerInfo`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__postcommand"></a>  CMFCPopupMenu::PostCommand  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL PostCommand(UINT uiCommandID);
```  
  
### Parameters  
 [in] `uiCommandID`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__pretranslatemessage"></a>  CMFCPopupMenu::PreTranslateMessage  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### Parameters  
 [in] `pMsg`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__recalclayout"></a>  CMFCPopupMenu::RecalcLayout  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### Parameters  
 [in] `bNotify`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__removeallitems"></a>  CMFCPopupMenu::RemoveAllItems  
 Clears all the items from a pop-up menu.  
  
```  
void RemoveAllItems();
```  
  
##  <a name="cmfcpopupmenu__removeitem"></a>  CMFCPopupMenu::RemoveItem  
 Removes the specified item from the pop-up menu.  
  
```  
BOOL RemoveItem(int iIndex);
```  
  
### Parameters  
 [in] `iIndex`  
 The zero-based index of the item to delete.  
  
### Return Value  
 `TRUE` if the method is successful; otherwise `FALSE`.  
  
### Remarks  
 This method automatically arranges any separators that are affected by the removal of an item. For more information about how the framework rearranges separators, see [CMFCToolBar::RemoveButton](../../mfc/reference/cmfctoolbar-class.md#cmfctoolbar__removebutton).  
  
##  <a name="cmfcpopupmenu__savestate"></a>  CMFCPopupMenu::SaveState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void SaveState();
```  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setanimationspeed"></a>  CMFCPopupMenu::SetAnimationSpeed  
 Sets the animation speed for pop-up menus.  
  
```  
static void SetAnimationSpeed(UINT nElapse);
```  
  
### Parameters  
 [in] `nElapse`  
 The new animation speed, in milliseconds.  
  
### Remarks  
 The animation speed is a global value and affects all the pop-up menus in the application. This value specifies how long it takes for the animation for a pop-up menu to finish.  
  
 By default, this parameter is set to 30 milliseconds. The range of valid values for `nElapse` is from 0 to 200.  
  
##  <a name="cmfcpopupmenu__setanimationtype"></a>  CMFCPopupMenu::SetAnimationType  
 Sets the animation type for this pop-up menu.  
  
```  
static void SetAnimationType(CMFCPopupMenu::ANIMATION_TYPE type);
```  
  
### Parameters  
 [in] `type`  
 An enumerated data type that specifies the type of animation.  
  
### Remarks  
 See [CMFCPopupMenu::GetAnimationType](#cmfcpopupmenu__getanimationtype) for a list of valid values for `type`.  
  
##  <a name="cmfcpopupmenu__setautodestroy"></a>  CMFCPopupMenu::SetAutoDestroy  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 [in] `bAutoDestroy`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setdefaultitem"></a>  CMFCPopupMenu::SetDefaultItem  
 Sets the default command for the pop-up menu.  
  
```  
void SetDefaultItem(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 The menu command ID of the new default command.  
  
### Remarks  
 The default command in the pop-up menu is the command that is selected when the pop-up menu appears.  
  
##  <a name="cmfcpopupmenu__setforcemenufocus"></a>  CMFCPopupMenu::SetForceMenuFocus  
 Forces the input focus to return to the menu bar when a pop-up menu is displayed.  
  
```  
static void SetForceMenuFocus(BOOL bValue);
```  
  
### Parameters  
 [in] `bValue`  
 `TRUE` if you want the framework to force the input focus to the menu bar when a pop-up menu is displayed. `FALSE` if you want the pop-up menu to retain the focus.  
  
### Remarks  
 This method sets a flag that is global for all pop-up menus in the application. By default, this feature is not enabled.  
  
##  <a name="cmfcpopupmenu__setforceshadow"></a>  CMFCPopupMenu::SetForceShadow  
 Forces the framework to draw menu shadows when pop-up menus appear outside the main frame.  
  
```  
static void SetForceShadow(BOOL bValue);
```  
  
### Parameters  
 [in] `bValue`  
 `TRUE` if you want the framework to draw menu shadows, `FALSE` otherwise.  
  
### Remarks  
 When you call this method, it sets a global flag in your application. This flag affects all pop-up menus in your application.  
  
##  <a name="cmfcpopupmenu__setmaxwidth"></a>  CMFCPopupMenu::SetMaxWidth  
 Set the maximum width for the pop-up menu.  
  
```  
void SetMaxWidth(int iMaxWidth);
```  
  
### Parameters  
 [in] `iMaxWidth`  
 The maximum width for the pop-up menu, in pixels.  
  
### Remarks  
 If the text associated with a menu command will not fit in the maximum width, it is truncated and the part that does not fit is replaced by three dots.  
  
##  <a name="cmfcpopupmenu__setmessagewnd"></a>  CMFCPopupMenu::SetMessageWnd  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetMessageWnd(CWnd* pMsgWnd);
```  
  
### Parameters  
 [in] `pMsgWnd`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setparentribbonelement"></a>  CMFCPopupMenu::SetParentRibbonElement  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetParentRibbonElement(CMFCRibbonBaseElement* pElem);
```  
  
### Parameters  
 [in] `pElem`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setquickcustomizetype"></a>  CMFCPopupMenu::SetQuickCustomizeType  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetQuickCustomizeType(QUICK_CUSTOMIZE_TYPE Type);
```  
  
### Parameters  
 [in] `Type`  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setquickmode"></a>  CMFCPopupMenu::SetQuickMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetQuickMode();
```  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__setrightalign"></a>  CMFCPopupMenu::SetRightAlign  
 Sets the menu alignment for pop-up menus.  
  
```  
void SetRightAlign(BOOL bRightAlign = TRUE);
```  
  
### Parameters  
 [in] `bRightAlign`  
 A Boolean that indicates the menu alignment. `TRUE` indicates right alignment, `FALSE` indicates left alignment.  
  
### Remarks  
 By default, all pop-up menus are left-aligned.  
  
##  <a name="cmfcpopupmenu__setsendmenuselectmsg"></a>  CMFCPopupMenu::SetSendMenuSelectMsg  
 Sets a flag that controls whether the pop-up menu notifies its parent frame when the user selects a command.  
  
```  
static void SetSendMenuSelectMsg(BOOL bSet = TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 `TRUE` if the pop-up menu notifies its parent frame, `FALSE` otherwise.  
  
### Remarks  
 This is a global option for all the pop-up menus in an application. If it is enabled, the pop-up menus will send a `WM_MENUSELECT` message to the parent frame when the user selects a command.  
  
##  <a name="cmfcpopupmenu__showallcommands"></a>  CMFCPopupMenu::ShowAllCommands  
 Forces the pop-up menu to display all commands.  
  
```  
void ShowAllCommands();
```  
  
### Remarks  
 This is not a global setting and affects only the current pop-up menu.  
  
##  <a name="cmfcpopupmenu__triggerresize"></a>  CMFCPopupMenu::TriggerResize  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void TriggerResize();
```  
  
### Remarks  
  
##  <a name="cmfcpopupmenu__updateallshadows"></a>  CMFCPopupMenu::UpdateAllShadows  
 Updates the shadows for all opened pop-up menus.  
  
```  
static void UpdateAllShadows(LPRECT lprectScreen = NULL);
```  
  
### Parameters  
 [in] `lprectScreen`  
 A rectangle that specifies the region to update, in screen coordinates.  
  
### Remarks  
 This method is useful when pop-up menus are displayed over animated controls or other windows that have dynamic content.  
  
##  <a name="cmfcpopupmenu__updateshadow"></a>  CMFCPopupMenu::UpdateShadow  
 Updates the shadow for the pop-up menu.  
  
```  
void UpdateShadow(LPRECT lprectScreen = NULL);
```  
  
### Parameters  
 [in] `lprectScreen`  
 A rectangle, in screen coordinates, that specifies the boundaries of the region to update.  
  
### Remarks  
 Call this method when a pop-up menu that has a shadow overlaps an animated image.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPopupMenuBar Class](../../mfc/reference/cmfcpopupmenubar-class.md)
