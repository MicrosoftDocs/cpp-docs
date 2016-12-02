---
title: "CMFCToolBar Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBar class"
ms.assetid: e7679c01-fb94-44c0-98c6-3af955292fb5
caps.latest.revision: 48
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
# CMFCToolBar Class
The `CMFCToolBar` class resembles [CToolBar Class](../../mfc/reference/ctoolbar-class.md), but provides additional support for user interface features. These include flat toolbars, toolbars with hot images, large icons, pager buttons, locked toolbars, rebar controls, text under images, background images, and tabbed toolbars. The `CMFCToolBar` class also contains built-in support for user customization of toolbars and menus, drag-and-drop between toolbars and menus, combo box buttons, edit box buttons, color pickers, and roll-up buttons.  
  
## Syntax  
  
```  
class CMFCToolBar : public CMFCBaseToolBar  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCToolBar::CMFCToolBar`|Default constructor.|  
|`CMFCToolBar::~CMFCToolBar`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBar::AddBasicCommand](#cmfctoolbar__addbasiccommand)|Adds a menu command to the list of commands that are always displayed when a user opens a menu.|  
|[CMFCToolBar::AddCommandUsage](#cmfctoolbar__addcommandusage)|Increments by one the counter that is associated with the given command.|  
|[CMFCToolBar::AddToolBarForImageCollection](#cmfctoolbar__addtoolbarforimagecollection)|Adds images from the user interface resources to the collection of images in the application.|  
|[CMFCToolBar::AdjustLayout](#cmfctoolbar__adjustlayout)|Recalculates the size and position of a toolbar. (Overrides [CBasePane::AdjustLayout](../../mfc/reference/cbasepane-class.md#cbasepane__adjustlayout)).|  
|[CMFCToolBar::AdjustSize](#cmfctoolbar__adjustsize)|Recalculates the size of the toolbar.|  
|[CMFCToolBar::AllowChangeTextLabels](#cmfctoolbar__allowchangetextlabels)|Specifies whether text labels can be shown under images on the toolbar buttons.|  
|[CMFCToolBar::AreTextLabels](#cmfctoolbar__aretextlabels)|Specifies whether text labels under images are currently displayed on the toolbar buttons.|  
|[CMFCToolBar::AutoGrayInactiveImages](#cmfctoolbar__autograyinactiveimages)|Enable or disables the automatic generation of inactive button images.|  
|[CMFCToolBar::ButtonToIndex](#cmfctoolbar__buttontoindex)|Returns the index of a specified [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object in this toolbar.|  
|[CMFCToolBar::CalcFixedLayout](#cmfctoolbar__calcfixedlayout)|Calculates the horizontal size of the toolbar. (Overrides [CBasePane::CalcFixedLayout](../../mfc/reference/cbasepane-class.md#cbasepane__calcfixedlayout).)|  
|[CMFCToolBar::CalcSize](#cmfctoolbar__calcsize)|Called by the framework as part of the layout calculation process. (Overrides [CPane::CalcSize](../../mfc/reference/cpane-class.md#cpane__calcsize).)|  
|[CMFCToolBar::CanHandleSiblings](#cmfctoolbar__canhandlesiblings)|Determines whether the toolbar and its sibling are positioned on the same pane.|  
|[CMFCToolBar::CleanUpImages](#cmfctoolbar__cleanupimages)|Frees the system resources allocated for toolbar images.|  
|[CMFCToolBar::CleanUpLockedImages](#cmfctoolbar__cleanuplockedimages)|Frees the system resources allocated for locked toolbar images.|  
|[CMFCToolBar::CanBeClosed](#cmfctoolbar__canbeclosed)|Specifies whether a user can close the toolbar. (Overrides [CBasePane::CanBeClosed](../../mfc/reference/cbasepane-class.md#cbasepane__canbeclosed).)|  
|[CMFCToolBar::CanBeRestored](#cmfctoolbar__canberestored)|Determines whether the system can restore a toolbar to its original state after customization.|  
|[CMFCToolBar::CanFocus](#cmfctoolbar__canfocus)|Specifies whether the pane can receive focus. (Overrides [CBasePane::CanFocus](../../mfc/reference/cbasepane-class.md#cbasepane__canfocus).)|  
|[CMFCToolBar::CanHandleSiblings](#cmfctoolbar__canhandlesiblings)|Determines whether the toolbar and its sibling are positioned on the same pane.|  
|[CMFCToolBar::CommandToIndex](#cmfctoolbar__commandtoindex)|Returns the index of the button in the toolbar with a specified command ID.|  
|[CMFCToolBar::Create](#cmfctoolbar__create)|Creates a `CMFCToolBar` object.|  
|[CMFCToolBar::CreateEx](#cmfctoolbar__createex)|Creates a `CMFCToolBar` object that uses additional style options, such as large icons.|  
|[CMFCToolBar::Deactivate](#cmfctoolbar__deactivate)|Deactivates the toolbar.|  
|[CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton)|Enables or disables the **Add or Remove Buttons** button that appears on the end of the toolbar.|  
|[CMFCToolBar::EnableDocking](#cmfctoolbar__enabledocking)|Enables docking of the pane to the main frame. (Overrides [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking).)|  
|[CMFCToolBar::EnableLargeIcons](#cmfctoolbar__enablelargeicons)|Enables or disables large icons on toolbar buttons.|  
|[CMFCToolBar::EnableQuickCustomization](#cmfctoolbar__enablequickcustomization)|Enables or disables the quick customization of toolbars so that the user can press the **Alt** key and drag a button to a new location.|  
|[CMFCToolBar::EnableReflections](#cmfctoolbar__enablereflections)|Enables or disables command reflection.|  
|[CMFCToolBar::EnableTextLabels](#cmfctoolbar__enabletextlabels)|Enables or disables text labels under toolbar button images.|  
|[CMFCToolBar::FromHandlePermanent](#cmfctoolbar__fromhandlepermanent)|Retrieves a pointer to the `CMFCToolBar` object that contains the given window handle.|  
|[CMFCToolBar::GetAllButtons](#cmfctoolbar__getallbuttons)|Returns a read-only list of buttons in a toolbar.|  
|[CMFCToolBar::GetAllToolbars](#cmfctoolbar__getalltoolbars)|Returns a read-only list of all toolbars in the application.|  
|[CMFCToolBar::GetBasicCommands](#cmfctoolbar__getbasiccommands)|Returns a read-only list of the basic commands defined in the application.|  
|[CMFCToolBar::GetButton](#cmfctoolbar__getbutton)|Returns a pointer to the `CMFCToolBarButton` object that has a specified toolbar button index.|  
|[CMFCToolBar::GetButtonInfo](#cmfctoolbar__getbuttoninfo)|Returns the command ID, style, and image index of the button at a specified index.|  
|[CMFCToolBar::GetButtonSize](#cmfctoolbar__getbuttonsize)|Returns the dimensions of each button on the toolbar.|  
|[CMFCToolBar::GetButtonStyle](#cmfctoolbar__getbuttonstyle)|Returns the current style of the toolbar button that is located at the specified index.|  
|[CMFCToolBar::GetButtonText](#cmfctoolbar__getbuttontext)|Returns the text label of a button that has a specified index.|  
|[CMFCToolBar::GetColdImages](#cmfctoolbar__getcoldimages)|Returns a pointer to the collection of cold toolbar button images in the application.|  
|[CMFCToolBar::GetColumnWidth](#cmfctoolbar__getcolumnwidth)|Returns the width of the toolbar buttons.|  
|[CMFCToolBar::GetCommandButtons](#cmfctoolbar__getcommandbuttons)|Returns a list of buttons that have a specified command ID from all toolbars in the application.|  
|[CMFCToolBar::GetCount](#cmfctoolbar__getcount)|Returns the number of buttons and separators on the toolbar.|  
|[CMFCToolBar::GetCustomizeButton](#cmfctoolbar__getcustomizebutton)|Retrieves a pointer to the `CMFCCustomizeButton` object that is associated with the toolbar.|  
|[CMFCToolBar::GetDefaultImage](#cmfctoolbar__getdefaultimage)|Returns the index of the default image for a toolbar button with a specified command ID.|  
|[CMFCToolBar::GetDisabledImages](#cmfctoolbar__getdisabledimages)|Returns a pointer to the collection of images that are used for disabled toolbar buttons in the application.|  
|[CMFCToolBar::GetDisabledMenuImages](#cmfctoolbar__getdisabledmenuimages)|Returns a pointer to the collection of images that are used for disabled menu buttons in the application.|  
|[CMFCToolBar::GetDroppedDownMenu](#cmfctoolbar__getdroppeddownmenu)|Retrieves a pointer to the menu button object that is currently displaying its sub-menu.|  
|[CMFCToolBar::GetGrayDisabledButtons](#cmfctoolbar__getgraydisabledbuttons)|Specifies whether the images of disabled buttons are dimmed versions of the regular button images, or taken from the collection of disabled button images.|  
|[CMFCToolBar::GetHighlightedButton](#cmfctoolbar__gethighlightedbutton)|Returns a pointer to the toolbar button that is currently highlighted.|  
|[CMFCToolBar::GetHotBorder](#cmfctoolbar__gethotborder)|Determines whether the toolbar buttons are hot-tracked.|  
|[CMFCToolBar::GetHotTextColor](#cmfctoolbar__gethottextcolor)|Returns the text color of the highlighted toolbar buttons.|  
|[CMFCToolBar::GetHwndLastFocus](#cmfctoolbar__gethwndlastfocus)|Returns a handle to the window that had the input focus just before the toolbar did.|  
|[CMFCToolBar::GetIgnoreSetText](#cmfctoolbar__getignoresettext)|Specifies whether calls to set button labels are ignored.|  
|[CMFCToolBar::GetImageSize](#cmfctoolbar__getimagesize)|Returns the current size of toolbar button images.|  
|[CMFCToolBar::GetImages](#cmfctoolbar__getimages)|Returns a pointer to the collection of default button images in the application.|  
|[CMFCToolBar::GetImagesOffset](#cmfctoolbar__getimagesoffset)|Returns the index offset used to find the toolbar button images for this toolbar in the global list of toolbar button images.|  
|[CMFCToolBar::GetInvalidateItemRect](#cmfctoolbar__getinvalidateitemrect)|Retrieves the region of the client area that must be redrawn for the button at the given index.|  
|[CMFCToolBar::GetItemID](#cmfctoolbar__getitemid)|Returns the command ID of the toolbar button at a specified index.|  
|[CMFCToolBar::GetItemRect](#cmfctoolbar__getitemrect)|Returns the bounding rectangle of the button at a specified index.|  
|[CMFCToolBar::GetLargeColdImages](#cmfctoolbar__getlargecoldimages)|Returns a pointer to the collection of large cold toolbar button images in the application.|  
|[CMFCToolBar::GetLargeDisabledImages](#cmfctoolbar__getlargedisabledimages)|Returns a pointer to the collection of large disabled toolbar button images in the application.|  
|[CMFCToolBar::GetLargeImages](#cmfctoolbar__getlargeimages)|Returns a pointer to the collection of large toolbar button images in the application.|  
|[CMFCToolBar::GetLockedColdImages](#cmfctoolbar__getlockedcoldimages)|Returns a pointer to the collection of locked cold images in the toolbar.|  
|[CMFCToolBar::GetLockedDisabledImages](#cmfctoolbar__getlockeddisabledimages)|Returns a pointer to the collection of locked disabled images in the toolbar.|  
|[CMFCToolBar::GetLockedImages](#cmfctoolbar__getlockedimages)|Returns a pointer to the collection of locked button images in the toolbar.|  
|[CMFCToolBar::GetLockedImageSize](#cmfctoolbar__getlockedimagesize)|Returns the default size of locked toolbar images.|  
|[CMFCToolBar::GetLockedMenuImages](#cmfctoolbar__getlockedmenuimages)|Returns a pointer to the collection of locked toolbar menu images in the toolbar.|  
|[CMFCToolBar::GetMenuButtonSize](#cmfctoolbar__getmenubuttonsize)|Returns the size of menu buttons in the application.|  
|[CMFCToolBar::GetMenuImageSize](#cmfctoolbar__getmenuimagesize)|Returns the size of menu button images in the application.|  
|[CMFCToolBar::GetMenuImages](#cmfctoolbar__getmenuimages)|Returns a pointer to the collection of menu button images in the application.|  
|[CMFCToolBar::GetOrigButtons](#cmfctoolbar__getorigbuttons)|Retrieves the collection of non-customized buttons of the toolbar.|  
|[CMFCToolBar::GetOrigResetButtons](#cmfctoolbar__getorigresetbuttons)|Retrieves the collection of non-customized reset buttons of the toolbar.|  
|[CMFCToolBar::GetResourceID](#cmfctoolbar__getresourceid)|Retrieves the resource ID of the toolbar.|  
|[CMFCToolBar::GetRouteCommandsViaFrame](#cmfctoolbar__getroutecommandsviaframe)|Determines which object, the parent frame or the owner, sends commands to the toolbar.|  
|[CMFCToolBar::GetRowHeight](#cmfctoolbar__getrowheight)|Returns the height of toolbar buttons.|  
|[CMFCToolBar::GetShowTooltips](#cmfctoolbar__getshowtooltips)|Specifies whether tool tips are displayed for toolbar buttons.|  
|[CMFCToolBar::GetSiblingToolBar](#cmfctoolbar__getsiblingtoolbar)|Retrieves the sibling of the toolbar.|  
|[CMFCToolBar::GetUserImages](#cmfctoolbar__getuserimages)|Returns a pointer to the collection of user-defined toolbar button images in the application.|  
|[CMFCToolBar::HitTest](#cmfctoolbar__hittest)|Returns the index of the toolbar button that is located at the specified position.|  
|[CMFCToolBar::InsertButton](#cmfctoolbar__insertbutton)|Inserts a button into the toolbar.|  
|[CMFCToolBar::InsertSeparator](#cmfctoolbar__insertseparator)|Inserts a separator into the toolbar.|  
|[CMFCToolBar::InvalidateButton](#cmfctoolbar__invalidatebutton)|Invalidates the client area of the toolbar button that exists at the provided index.|  
|[CMFCToolBar::IsAddRemoveQuickCustomize](#cmfctoolbar__isaddremovequickcustomize)|Determines whether a user can add or remove toolbar buttons by using the **Customize** menu option.|  
|[CMFCToolBar::IsAltCustomizeMode](#cmfctoolbar__isaltcustomizemode)|Specifies whether *quick customization* is being used to drag a button.|  
|[CMFCToolBar::IsAutoGrayInactiveImages](#cmfctoolbar__isautograyinactiveimages)|Specifies whether the automatic generation of inactive (non-highlighted) button images is enabled.|  
|[CMFCToolBar::IsBasicCommand](#cmfctoolbar__isbasiccommand)|Determines whether a command is on the list of basic commands.|  
|[CMFCToolBar::IsButtonExtraSizeAvailable](#cmfctoolbar__isbuttonextrasizeavailable)|Determines whether the toolbar can display buttons that have extended borders.|  
|[CMFCToolBar::IsButtonHighlighted](#cmfctoolbar__isbuttonhighlighted)|Determines whether a button on the toolbar is highlighted.|  
|[CMFCToolBar::IsCommandPermitted](#cmfctoolbar__iscommandpermitted)|Determines whether a command is permitted.|  
|[CMFCToolBar::IsCommandRarelyUsed](#cmfctoolbar__iscommandrarelyused)|Determines whether a command is rarely used (see [CMFCToolBar::SetCommandUsageOptions](#cmfctoolbar__setcommandusageoptions)).|  
|[CMFCToolBar::IsCustomizeMode](#cmfctoolbar__iscustomizemode)|Specifies whether the toolbar framework is in customization mode.|  
|[CMFCToolBar::IsDragButton](#cmfctoolbar__isdragbutton)|Determines whether a toolbar button is being dragged.|  
|[CMFCToolBar::IsExistCustomizeButton](#cmfctoolbar__isexistcustomizebutton)|Determines whether the toolbar contains the **Customize** button.|  
|[CMFCToolBar::IsFloating](#cmfctoolbar__isfloating)|Determines whether the toolbar is floating.|  
|[CMFCToolBar::IsLargeIcons](#cmfctoolbar__islargeicons)|Specifies whether toolbars in the application currently display large icons.|  
|[CMFCToolBar::IsLastCommandFromButton](#cmfctoolbar__islastcommandfrombutton)|Determines whether the most recently executed command was sent from the specified toolbar button.|  
|[CMFCToolBar::IsLocked](#cmfctoolbar__islocked)|Determines whether the toolbar is locked.|  
|[CMFCToolBar::IsOneRowWithSibling](#cmfctoolbar__isonerowwithsibling)|Determines whether the toolbar and its sibling toolbar are positioned on the same row.|  
|[CMFCToolBar::IsUserDefined](#cmfctoolbar__isuserdefined)|Specifies whether the toolbar is user-defined.|  
|[CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap)|Loads toolbar images from application resources.|  
|[CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex)|Loads toolbar images from application resources. Includes large images.|  
|[CMFCToolBar::LoadParameters](#cmfctoolbar__loadparameters)|Loads global toolbar options from the Windows registry.|  
|[CMFCToolBar::LoadState](#cmfctoolbar__loadstate)|Loads the toolbar state information from the Windows registry. (Overrides [CPane::LoadState](../../mfc/reference/cpane-class.md#cpane__loadstate).)|  
|[CMFCToolBar::LoadToolBar](#cmfctoolbar__loadtoolbar)|Loads the toolbar from application resources.|  
|[CMFCToolBar::LoadToolBarEx](#cmfctoolbar__loadtoolbarex)|Loads the toolbar from application resources by using the `CMFCToolBarInfo` helper class to enable the application to use large images.|  
|[CMFCToolBar::OnChangeHot](#cmfctoolbar__onchangehot)|Called by the framework when a user selects a button on the toolbar.|  
|[CMFCToolBar::OnFillBackground](#cmfctoolbar__onfillbackground)|Called by the framework from [CBasePane::DoPaint](../../mfc/reference/cbasepane-class.md#cbasepane__dopaint) to fill the toolbar background.|  
|[CMFCToolBar::OnReset](#cmfctoolbar__onreset)|Restores the toolbar to its original state.|  
|[CMFCToolBar::OnSetAccData](#cmfctoolbar__onsetaccdata)|(Overrides [CBasePane::OnSetAccData](../../mfc/reference/cbasepane-class.md#cbasepane__onsetaccdata).)|  
|[CMFCToolBar::OnSetDefaultButtonText](#cmfctoolbar__onsetdefaultbuttontext)|Restores the text of a toolbar button to its default state.|  
|`CMFCToolBar::OnUpdateCmdUI`|Used internally.|  
|[CMFCToolBar::RemoveAllButtons](#cmfctoolbar__removeallbuttons)|Removes all buttons from the toolbar.|  
|[CMFCToolBar::RemoveButton](#cmfctoolbar__removebutton)|Removes the button with the specified index from the toolbar.|  
|[CMFCToolBar::RemoveStateFromRegistry](#cmfctoolbar__removestatefromregistry)|Deletes the state information for the toolbar from the Windows registry.|  
|[CMFCToolBar::ReplaceButton](#cmfctoolbar__replacebutton)|Replaces a toolbar button with another toolbar button.|  
|[CMFCToolBar::ResetAll](#cmfctoolbar__resetall)|Restores all toolbars to their original states.|  
|[CMFCToolBar::ResetAllImages](#cmfctoolbar__resetallimages)|Clears all toolbar image collections in the application.|  
|[CMFCToolBar::RestoreOriginalState](#cmfctoolbar__restoreoriginalstate)|Restores the original state of a toolbar.|  
|[CMFCToolBar::SaveState](#cmfctoolbar__savestate)|Saves the state information for the toolbar in the Windows registry. (Overrides [CPane::SaveState](../../mfc/reference/cpane-class.md#cpane__savestate).)|  
|`CMFCToolBar::Serialize`|(Overrides `CBasePane::Serialize`.)|  
|[CMFCToolBar::SetBasicCommands](#cmfctoolbar__setbasiccommands)|Sets the list of commands that are always displayed when a user opens a menu.|  
|[CMFCToolBar::SetButtonInfo](#cmfctoolbar__setbuttoninfo)|Sets the command ID, style, and image ID of a toolbar button.|  
|[CMFCToolBar::SetButtonStyle](#cmfctoolbar__setbuttonstyle)|Sets the style of the toolbar button at the given index.|  
|[CMFCToolBar::SetButtonText](#cmfctoolbar__setbuttontext)|Sets the text label of a toolbar button.|  
|[CMFCToolBar::SetButtons](#cmfctoolbar__setbuttons)|Sets the buttons for the toolbar.|  
|[CMFCToolBar::SetCommandUsageOptions](#cmfctoolbar__setcommandusageoptions)|Specifies when rarely used commands do not appear in the menu of the application.|  
|[CMFCToolBar::SetCustomizeMode](#cmfctoolbar__setcustomizemode)|Enables or disables customization mode for all toolbars in the application.|  
|[CMFCToolBar::SetGrayDisabledButtons](#cmfctoolbar__setgraydisabledbuttons)|Specifies whether the disabled buttons on the toolbar are dimmed or if disabled images are used for the disabled buttons.|  
|[CMFCToolBar::SetHeight](#cmfctoolbar__setheight)|Sets the height of the toolbar.|  
|[CMFCToolBar::SetHotBorder](#cmfctoolbar__sethotborder)|Specifies whether toolbar buttons are hot-tracked.|  
|[CMFCToolBar::SetHotTextColor](#cmfctoolbar__sethottextcolor)|Sets the text color for hot toolbar buttons.|  
|[CMFCToolBar::SetLargeIcons](#cmfctoolbar__setlargeicons)|Specifies whether toolbar buttons display large icons.|  
|[CMFCToolBar::SetLockedSizes](#cmfctoolbar__setlockedsizes)|Sets the sizes of locked buttons and locked images on the toolbar.|  
|[CMFCToolBar::SetMenuSizes](#cmfctoolbar__setmenusizes)|Sets the size of toolbar menu buttons and their images.|  
|[CMFCToolBar::SetNonPermittedCommands](#cmfctoolbar__setnonpermittedcommands)|Sets the list of commands that cannot be executed by the user.|  
|[CMFCToolBar::SetOneRowWithSibling](#cmfctoolbar__setonerowwithsibling)|Positions the toolbar and its sibling on the same row.|  
|[CMFCToolBar::SetPermament](#cmfctoolbar__setpermament)|Specifies whether a user can close the toolbar.|  
|[CMFCToolBar::SetRouteCommandsViaFrame](#cmfctoolbar__setroutecommandsviaframe)|Specifies whether the parent frame or the owner sends commands to the toolbar.|  
|[CMFCToolBar::SetShowTooltips](#cmfctoolbar__setshowtooltips)|Specifies whether the framework displays tool tips.|  
|[CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar)|Specifies the sibling of the toolbar.|  
|[CMFCToolBar::SetSizes](#cmfctoolbar__setsizes)|Specifies the sizes of buttons and images on all toolbars.|  
|[CMFCToolBar::SetToolBarBtnText](#cmfctoolbar__settoolbarbtntext)|Specifies properties of a button on the toolbar.|  
|[CMFCToolBar::SetTwoRowsWithSibling](#cmfctoolbar__settworowswithsibling)|Positions the toolbar and its sibling on separate rows.|  
|[CMFCToolBar::SetUserImages](#cmfctoolbar__setuserimages)|Sets the collection of user-defined images in the application.|  
|[CMFCToolBar::StretchPane](#cmfctoolbar__stretchpane)|Stretches the toolbar vertically or horizontally. (Overrides [CBasePane::StretchPane](../../mfc/reference/cbasepane-class.md#cbasepane__stretchpane).)|  
|[CMFCToolBar::TranslateChar](#cmfctoolbar__translatechar)|Executes a button command if the specified key code corresponds to a valid keyboard shortcut.|  
|[CMFCToolBar::UpdateButton](#cmfctoolbar__updatebutton)|Updates the state of the specified button.|  
|[CMFCToolBar::WrapToolBar](#cmfctoolbar__wraptoolbar)|Repositions toolbar buttons within the given dimensions.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBar::AllowShowOnList](#cmfctoolbar__allowshowonlist)|Determines whether the toolbar is displayed in the list on the **Toolbars** pane of the **Customize** dialog box.|  
|[CMFCToolBar::CalcMaxButtonHeight](#cmfctoolbar__calcmaxbuttonheight)|Calculates the maximum height of a button in the toolbar.|  
|[CMFCToolBar::DoPaint](#cmfctoolbar__dopaint)|Repaints a toolbar.|  
|[CMFCToolBar::DrawButton](#cmfctoolbar__drawbutton)|Repaints a toolbar button.|  
|[CMFCToolBar::DrawSeparator](#cmfctoolbar__drawseparator)|Repaints a separator on a toolbar.|  
|[CMFCToolBar::OnUserToolTip](#cmfctoolbar__onusertooltip)|Called by the framework when the tooltip for a button is about to be displayed.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCToolBar::m_bDontScaleImages](#cmfctoolbar__m_bdontscaleimages)|Specifies whether to scale or not toolbar images in high DPI mode.|  
|[CMFCToolBar::m_dblLargeImageRatio](#cmfctoolbar__m_dbllargeimageratio)|Specifies the ratio between the dimension (height or width) of large images and the dimension of regular images.|  
  
## Remarks  
 To incorporate a `CMFCToolBar` object into your application, follow these steps:  
  
1.  Add a `CMFCToolBar` object to the main frame window.  
  
2.  When you process the `WM_CREATE` message for the main frame window, call either [CMFCToolBar::Create](#cmfctoolbar__create) or [CMFCToolBar::CreateEx](#cmfctoolbar__createex) to create the toolbar and specify its style.  
  
3.  Call [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking) to specify the docking style.  
  
 To insert a special button, such as a combo box or drop-down toolbar, reserve a dummy button in the parent resource, and replace the dummy button at runtime by using [CMFCToolBar::ReplaceButton](#cmfctoolbar__replacebutton). For more information, see [Walkthrough: Putting Controls On Toolbars](../walkthrough-putting-controls-on-toolbars.md).  
  
 `CMFCToolBar` is the base class for the MFC Library classes [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md), [CMFCPopupMenuBar Class](../../mfc/reference/cmfcpopupmenubar-class.md), and [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md).  
  
## Example  
 The following example demonstrates how to use various methods in the `CMFCToolBar` class. The example shows how to set the text of the window label of the tool bar, set the borders, set the style of the pane, and enable the **Add or Remove Buttons** button that appears on the end of the toolbar. This code snippet is part of the [IE Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#8](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_2.cpp)]  
  
## Requirements  
 **Header:** afxtoolbar.h  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
##  <a name="cmfctoolbar__addbasiccommand"></a>  CMFCToolBar::AddBasicCommand  
 Adds a menu command to the list of commands that are always displayed when a user opens a menu.  
  
```  
static void __stdcall AddBasicCommand(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 Specifies the command to add.  
  
### Remarks  
 A basic command is always displayed when the menu is opened. This method is meaningful when the user chooses to view recently used commands.  
  
 Use the [CMFCToolBar::SetBasicCommands](#cmfctoolbar__setbasiccommands) method to set the list of commands that are always displayed when a user opens a menu. Use the [CMFCToolBar::GetBasicCommands](#cmfctoolbar__getbasiccommands) method to retrieve the list of basic commands that is used by your application.  
  
##  <a name="cmfctoolbar__addcommandusage"></a>  CMFCToolBar::AddCommandUsage  
 Increments by one the counter that is associated with the given command.  
  
```  
static void __stdcall AddCommandUsage(UINT uiCommand);
```  
  
### Parameters  
 [in] `uiCommand`  
 Specifies the command counter to increment.  
  
### Remarks  
 The framework calls this method when the user selects a menu item.  
  
 The framework uses command counters to display recently used menu items.  
  
 This method increments the command counter by using the [CMFCCmdUsageCount::AddCmd](../../mfc/reference/cmfccmdusagecount-class.md#cmfccmdusagecount__addcmd) method.  
  
##  <a name="cmfctoolbar__addtoolbarforimagecollection"></a>  CMFCToolBar::AddToolBarForImageCollection  
 Adds images from the user interface resources to the collection of images in the application.  
  
```  
static BOOL __stdcall AddToolBarForImageCollection(
    UINT uiResID,  
    UINT uiBmpResID=0,  
    UINT uiColdResID=0,  
    UINT uiMenuResID=0,  
    UINT uiDisabledResID=0,  
    UINT uiMenuDisabledResID=0);
```  
  
### Parameters  
 [in] `uiResID`  
 Resource ID of a toolbar with images to load.  
  
 [in] `uiBmpResID`  
 Resource ID of a bitmap with toolbar images.  
  
 [in] `uiColdResID`  
 Resource ID of a bitmap with "cold" toolbar images.  
  
 [in] `uiMenuResID`  
 Resource ID of a bitmap with menu images.  
  
 [in] `uiDisabledResID`  
 Resource ID of a bitmap with disabled toolbar images.  
  
 [in] `uiMenuDisabledResID`  
 Resource ID of a bitmap with disabled menu images.  
  
### Return Value  
 `TRUE` if the method succeeds; `FALSE` if `uiResID` or `uiBmpResID` do not specify valid resources, or another error occurs.  
  
### Remarks  
 Call this method to load a bitmap with toolbar images and add it to the collection of toolbar images. This method creates a temporary toolbar object and calls [CMFCToolBar::LoadToolBar](#cmfctoolbar__loadtoolbar).  
  
##  <a name="cmfctoolbar__adjustlayout"></a>  CMFCToolBar::AdjustLayout  
 Recalculates the size and position of a toolbar.  
  
```  
virtual void AdjustLayout();
```  
  
### Remarks  
 Call this method when the toolbar has been created to recalculate its size and position.  
  
 The framework calls this method every time that the layout of the toolbar must be changed. For example, the layout must change when the user moves another control bar, resizes an application window, or customizes the toolbar.  
  
 Override this method to provide your own dynamic layout in classes that you derive from [CMFCToolar](../../mfc/reference/cmfctoolbar-class.md).  
  
##  <a name="cmfctoolbar__adjustsize"></a>  CMFCToolBar::AdjustSize  
 Recalculates the size of the toolbar.  
  
```  
void AdjustSize();
```  
  
### Remarks  
 This method makes sure that the toolbar fits in the bounds of the parent frame. This method does nothing if the toolbar has no parent frame.  
  
 The [CMFCToolBar::AdjustLayout](#cmfctoolbar__adjustlayout) method calls this method to recalculate the size if the parent of the toolbar is not a `CMFCReBar` object.  
  
##  <a name="cmfctoolbar__allowchangetextlabels"></a>  CMFCToolBar::AllowChangeTextLabels  
 Specifies whether text labels can be shown under images on the toolbar buttons.  
  
```  
virtual BOOL AllowChangeTextLabels() const;

 
```  
  
### Return Value  
 `TRUE` if it is allowed to display text labels below images; otherwise `FALSE`.  
  
### Remarks  
 This method is called by the customization dialog box to determine whether to enable a **Show text labels** check-box on the **Toolbars** page for the selected toolbar.  
  
 The default implementation returns `TRUE`.  
  
 Override this method in an object derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) and return `FALSE` when you do not want the user to decide whether text labels are displayed on toolbar buttons under the images.  
  
##  <a name="cmfctoolbar__allowshowonlist"></a>  CMFCToolBar::AllowShowOnList  
 Determines whether the toolbar is displayed in the list of toolbars on the **Toolbars** pane of the **Customize** dialog box.  
  
```  
virtual BOOL AllowShowOnList() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar object can be displayed in the list box on the toolbar customization page; otherwise `FALSE`.  
  
### Remarks  
 This method is called by the framework to determine whether the list on the toolbar customization page should include a particular object derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).  
  
 The default implementation always returns `TRUE`. Override this method when you do not want a toolbar to appear in the toolbars list in the customization dialog box.  
  
##  <a name="cmfctoolbar__aretextlabels"></a>  CMFCToolBar::AreTextLabels  
 Specifies whether text labels under images are currently displayed on the toolbar buttons.  
  
```  
BOOL AreTextLabels() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar buttons display text labels below images; otherwise `FALSE`.  
  
### Remarks  
 Use [CMFCToolBar::EnableTextLabels](#cmfctoolbar__enabletextlabels) to specify whether the text is displayed. The default value is `FALSE`. Call [CMFCToolBar::AllowChangeTextLabels](#cmfctoolbar__allowchangetextlabels) to specify whether the user can change this setting in the customization dialog box.  
  
##  <a name="cmfctoolbar__autograyinactiveimages"></a>  CMFCToolBar::AutoGrayInactiveImages  
 Enable or disables the automatic generation of inactive button images.  
  
```  
static void AutoGrayInactiveImages(
    BOOL bEnable=TRUE,  
    int nGrayImagePercentage=0,  
    BOOL bRedrawAllToolbars=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 A Boolean value that specifies whether to dim inactive images. If this parameter is `TRUE`, inactive images are dimmed. Otherwise, inactive images are not dimmed.  
  
 [in] `nGrayImagePercentage`  
 Specifies the luminance percentage for inactive images. If `bEnable` is `FALSE`, this value is ignored.  
  
 [in] `bRedrawAllToolbars`  
 A Boolean value that specifies whether to redraw all toolbars in the application. If this parameter is `TRUE`, this method redraws all toolbars.  
  
### Remarks  
 If `bEnable` is `TRUE`, the framework uses `nGrayImagePercentage` to generate inactive images from the regular images. Otherwise, you must provide the set of inactive images by using the [CMFCToolBar::GetColdImages](#cmfctoolbar__getcoldimages) method. By default, this option is disabled.  
  
 For more information about the `nGrayImagePercentage` parameter, see [CMFCToolBarImages::GrayImages](../../mfc/reference/cmfctoolbarimages-class.md#cmfctoolbarimages__grayimages).  
  
##  <a name="cmfctoolbar__buttontoindex"></a>  CMFCToolBar::ButtonToIndex  
 Returns the index of a specified [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object in this toolbar.  
  
```  
int ButtonToIndex(const CMFCToolBarButton* pButton) const;

 
```  
  
### Parameters  
 [in] `pButton`  
 A pointer to the toolbar button object.  
  
### Return Value  
 Index of `pButton` in the internal list of toolbar buttons; or -1 if the specified button is not on this toolbar.  
  
##  <a name="cmfctoolbar__calcfixedlayout"></a>  CMFCToolBar::CalcFixedLayout  
 Calculates the horizontal size of the toolbar.  
  
```  
virtual CSize CalcFixedLayout(
    BOOL bStretch,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `bStretch`  
 `TRUE` to stretch the toolbar to the size of the parent frame.  
  
 [in] `bHorz`  
 `TRUE` to orient the toolbar horizontally; `FALSE` to orient the toolbar vertically.  
  
### Return Value  
 A `CSize` object that specifies the size of the toolbar.  
  
### Remarks  
 This method calculates the size of the toolbar by using the `CMFCToolBar::CalcLayout` method. It passes the `LM_STRETCH` flag for the `dwMode` parameter if `bStretch` is `TRUE`. It passes the `LM_HORZ` flag if `bHorz` is `TRUE`.  
  
 See the VisualStudioDemo sample for an example that uses this method.  
  
##  <a name="cmfctoolbar__calcmaxbuttonheight"></a>  CMFCToolBar::CalcMaxButtonHeight  
 Calculates the maximum height of buttons in the toolbar.  
  
```  
virtual int CalcMaxButtonHeight();
```  
  
### Return Value  
 The maximum height of buttons.  
  
### Remarks  
 This method calculates the maximum height among all toolbar buttons on the toolbar. The height may vary depending on factors such as the current toolbar docking state.  
  
 Override this method in a class derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) to provide your own height calculation.  
  
##  <a name="cmfctoolbar__calcsize"></a>  CMFCToolBar::CalcSize  
 Called by the framework as part of the layout calculation process.  
  
```  
virtual CSize CalcSize(BOOL bVertDock);
```  
  
### Parameters  
 [in] `bVertDock`  
 `TRUE` to specify that the toolbar is docked vertically; `FALSE` to specify that the toolbar is docked horizontally.  
  
### Return Value  
 A `CSize` object that specifies the overall size of the buttons on the toolbar.  
  
### Remarks  
 This method considers the attributes that affect the size of each button, such as the area of the text label and the border size.  
  
 If the toolbar contains no buttons, this method returns the reserved size of a single button by using the [CMFCToolBar::GetButtonSize](#cmfctoolbar__getbuttonsize) method.  
  
##  <a name="cmfctoolbar__canbeclosed"></a>  CMFCToolBar::CanBeClosed  
 Specifies whether a user can close the toolbar.  
  
```  
virtual BOOL CanBeClosed() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar can be closed by the user; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to determine whether the user can close a toolbar. If the method returns `TRUE`, the framework enables the SC_CLOSE command in the system menu of the toolbar and the user can close the toolbar by using a check box in the list of toolbars in the customization dialog box.  
  
 The default implementation returns `TRUE`. Override this method in a class derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) to make toolbar objects that cannot be closed by the user.  
  
##  <a name="cmfctoolbar__canberestored"></a>  CMFCToolBar::CanBeRestored  
 Determines whether the system can restore a toolbar to its original state after customization.  
  
```  
virtual BOOL CanBeRestored() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar can be restored from the application resources; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method to determine whether a toolbar can be returned to its original state after customization. The original state is loaded from the application resources.  
  
 If `CanBeRestored` returns `TRUE`, the **Toolbars** page of the customization dialog box enables the **Reset** button for the selected toolbar.  
  
 The default implementation returns `TRUE` if the original resource ID of the toolbar when it was loaded is non-zero. Usually, only user-defined toolbars cannot be restored.  
  
 You can override the `CanBeRestored` method to customize this behavior in derived classes.  
  
##  <a name="cmfctoolbar__canfocus"></a>  CMFCToolBar::CanFocus  
 Specifies whether the pane can receive focus.  
  
```  
virtual BOOL CanFocus() const;

 
```  
  
### Return Value  
 This method returns `FALSE`.  
  
### Remarks  
 This method overrides the base class implementation, [CBasePane::CanFocus](../../mfc/reference/cbasepane-class.md#cbasepane__canfocus), because toolbar objects cannot receive focus.  
  
##  <a name="cmfctoolbar__canhandlesiblings"></a>  CMFCToolBar::CanHandleSiblings  
 Determines whether the toolbar and its sibling are positioned on the same pane.  
  
```  
BOOL CanHandleSiblings();
```  
  
### Return Value  
 `TRUE` if the toolbar has a sibling and the toolbar and its sibling are positioned on the same pane; otherwise `FALSE`.  
  
### Remarks  
 The internal CMFCCustomizeButton::CreatePopupMenu method calls this method to determine how to show the **Customize** pop-up menu. If this method returns `TRUE`, the framework displays the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons.  
  
 You typically do not have to use this method. To enable the **Customize** button that appears on the toolbar, call the [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton) method. To enable the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons, call [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar).  
  
##  <a name="cmfctoolbar__cleanupimages"></a>  CMFCToolBar::CleanUpImages  
 Frees the system resources allocated for toolbar images.  
  
```  
static void CMFCToolBar::CleanUpImages();
```  
  
### Remarks  
 The framework calls this method when an application shuts down.  
  
##  <a name="cmfctoolbar__cleanuplockedimages"></a>  CMFCToolBar::CleanUpLockedImages  
 Frees the system resources allocated for locked toolbar images.  
  
```  
void CleanUpLockedImages();
```  
  
### Remarks  
 Call this method when the visual style of your application changes. See the VisualStudioDemo sample for an example that uses this method.  
  
##  <a name="cmfctoolbar__commandtoindex"></a>  CMFCToolBar::CommandToIndex  
 Returns the index of the button in the toolbar with a specified command ID.  
  
```  
int CommandToIndex(
    UINT nIDFind,  
    int iIndexFirst=0) const;

 
```  
  
### Parameters  
 [in] `nIDFind`  
 Specifies the command ID.  
  
 [in] `iIndexFirst`  
 Specifies the initial index to start from.  
  
### Return Value  
 Zero-based index of the toolbar button if the method was successful; -1 if there is no button with the specified ID.  
  
### Remarks  
 A [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) object maintains an internal list of the buttons on the toolbar. Call this function to retrieve the index of a button in the list given the command ID of the button.  
  
 If `iIndex` is greater than 0, this method ignores any button on the toolbar that has an index less than `iIndex`.  
  
##  <a name="cmfctoolbar__create"></a>  CMFCToolBar::Create  
 Creates a `CMFCToolBar` object.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,  
    UINT nID=AFX_IDW_TOOLBAR);
```  
  
### Parameters  
 [in] `pParentWnd`  
 A pointer to the parent window of the toolbar.  
  
 [in] `dwStyle`  
 The toolbar style. See [Toolbar Control and Button Styles](http://msdn.microsoft.com/library/windows/desktop/bb760439) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for the list of styles.  
  
 [in] `nID`  
 The ID of the child window of the toolbar.  
  
### Return Value  
 `TRUE` if this method succeeds; otherwise `FALSE`.  
  
### Remarks  
 This method creates a control bar and attaches it to the toolbar. It creates the control bar with the `TBSTYLE_FLAT` style. Call [CMFCToolBar::CreateEx](#cmfctoolbar__createex) if you want a different control bar style.  
  
##  <a name="cmfctoolbar__createex"></a>  CMFCToolBar::CreateEx  
 Creates a `CMFCToolBar` object that uses additional style options, such as large icons.  
  
```  
virtual BOOL CreateEx(
    CWnd* pParentWnd,  
    DWORD dwCtrlStyle=TBSTYLE_FLAT,  
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,  
    CRect rcBorders=CRect(1,
    1,
    1,
    1),  
    UINT nID=AFX_IDW_TOOLBAR);
```  
  
### Parameters  
 [in] `pParentWnd`  
 A pointer to the parent window of the toolbar.  
  
 [in] `dwCtrlStyle`  
 Additional styles for creating the embedded control bar object.  
  
 [in] `dwStyle`  
 The toolbar style. See [Toolbar Control and Button Styles](http://msdn.microsoft.com/library/windows/desktop/bb760439) for a list of appropriate styles.  
  
 [in] `rcBorders`  
 A `CRect` object that specifies the widths of the toolbar window borders.  
  
 [in] `nID`  
 The ID of the child window of the toolbar.  
  
### Return Value  
 Nonzero if this method succeeds; otherwise 0.  
  
### Remarks  
 This method creates a control bar and attaches it to the toolbar.  
  
 Call this method instead of [CMFCToolBar::Create](#cmfctoolbar__create) when you want to provide specific styles. For example, set `dwCtrlStyle` to `TBSTYLE_FLAT | TBSTYLE_TRANSPARENT` to create a toolbar that resembles the toolbars that are used by Internet Explorer 4.  
  
### Example  
 The following example demonstrates how to use the `CreateEx` method of the `CMFCToolBar` class. This code snippet is part of the [IE Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#7](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_3.cpp)]  
  
##  <a name="cmfctoolbar__deactivate"></a>  CMFCToolBar::Deactivate  
 Deactivates the toolbar.  
  
```  
virtual void Deactivate();
```  
  
### Remarks  
 This method deactivates the toolbar by removing the focus from the highlighted toolbar button. The framework calls this method when the toolbar loses focus or is destroyed.  
  
##  <a name="cmfctoolbar__dopaint"></a>  CMFCToolBar::DoPaint  
 Repaints a toolbar.  
  
```  
virtual void DoPaint(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 This method is called by the framework when a part of the toolbar must be repainted.  
  
 Override this method to customize the appearance of an object derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md).  
  
##  <a name="cmfctoolbar__drawbutton"></a>  CMFCToolBar::DrawButton  
 Repaints a toolbar button.  
  
```  
virtual BOOL DrawButton(
    CDC* pDC,  
    CMFCToolBarButton* pButton,  
    CMFCToolBarImages* pImages,  
    BOOL bHighlighted,  
    BOOL bDrawDisabledImages);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `pButton`  
 A pointer to a button to draw.  
  
 [in] `pImages`  
 A pointer to the toolbar images.  
  
 [in] `bHighlighted`  
 `TRUE` if the button is highlighted; otherwise `FALSE`.  
  
 [in] `bDrawDisabledImages`  
 `TRUE` if disabled buttons are dimmed; otherwise `FALSE`.  
  
### Return Value  
 `TRUE` if the button was repainted; `FALSE` if the button is hidden.  
  
### Remarks  
 The [CMFCToolBar::DrawButton](#cmfctoolbar__drawbutton) method calls this method when a toolbar button must be repainted.  
  
 Override this method if you want to customize the appearance of buttons on your toolbar.  
  
##  <a name="cmfctoolbar__drawseparator"></a>  CMFCToolBar::DrawSeparator  
 Repaints a separator on a toolbar.  
  
```  
virtual void DrawSeparator(
    CDC* pDC,  
    const CRect& rect,  
    BOOL bHorz);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rect`  
 The bounding rectangle of the location where the separator is drawn, in pixels.  
  
 [in] `bHorz`  
 `TRUE` if the separator is horizontal, `FALSE` if the separator is vertical.  
  
### Remarks  
 [CMFCToolBar::DoPaint](#cmfctoolbar__dopaint) calls this method for each [CMFCToolBar::DrawSeparator](#cmfctoolbar__drawseparator) object that has the `TBBS_SEPARATOR` style, instead of calling [CMFCToolBar::DrawButton](#cmfctoolbar__drawbutton) for those buttons.  
  
 Override this method in a class derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) to customize the appearance of separators on the toolbar. The default implementation calls [CMFCVisualManager::OnDrawSeparator](../../mfc/reference/cmfcvisualmanager-class.md#cmfcvisualmanager__ondrawseparator) to draw a separator whose appearance is determined by the current visual manager.  
  
##  <a name="cmfctoolbar__enablecustomizebutton"></a>  CMFCToolBar::EnableCustomizeButton  
 Enables or disables the Customize button that appears on the toolbar.  
  
```  
void EnableCustomizeButton(
    BOOL bEnable,  
    int iCustomizeCmd,  
    const CString& strCustomizeText,  
    BOOL bQuickCustomize=TRUE);

 
void EnableCustomizeButton(
    BOOL bEnable,  
    int iCustomizeCmd,  
    UINT uiCustomizeTextResId,  
    BOOL bQuickCustomize=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 Enables or disables the Customize button.  
  
 [in] `iCustomizeCmd`  
 The command ID of the Customize button.  
  
 [in] `strCustomizeText`  
 The text label of the Customize button.  
  
 [in] `uiCustomizeTextResId`  
 The resource string ID of the Customize button label.  
  
 [in] `bQuickCustomize`  
 Enables or disables the **Add or Remove Buttons** option on the menu that drops down from the button.  
  
### Remarks  
 If `iCustomizeCmd` is -1, the framework displays the Customize button when multiple toolbar buttons do not fit in the toolbar area. The button displays a double left-pointing arrow, or chevron, which indicates that there are more buttons.  
  
 If `iCustomizeCmd` specifies a valid command ID, and `bEnable` is `TRUE`, the Customize button is always displayed. The button has a small down arrow and opens a menu that contains a command. This command uses the text label specified by `strCustomizeText`. If `bQuickCustomize` is also `TRUE`, the menu displays the **Add or Remove Buttons** option.  
  
 The framework dynamically adds to the menu any buttons that do not fit in the toolbar area before the item that is specified by `iCustomizeCmd`. The chevron is displayed next to the down arrow.  
  
##  <a name="cmfctoolbar__enabledocking"></a>  CMFCToolBar::EnableDocking  
 Enables docking of the pane to the main frame.  
  
```  
virtual void EnableDocking(DWORD dwAlignment);
```  
  
### Parameters  
 [in] `dwAlignment`  
 Specifies the docking alignment to enable.  
  
### Remarks  
 This method extends the base class implementation, [CBasePane::EnableDocking](../../mfc/reference/cbasepane-class.md#cbasepane__enabledocking), by setting the `CBasePane::m_dwControlBarStyle` data member to `AFX_CBRS_FLOAT`. This method then passes `dwAlignment` to the base class implementation.  
  
##  <a name="cmfctoolbar__enablelargeicons"></a>  CMFCToolBar::EnableLargeIcons  
 Enables or disables large icons on toolbar buttons.  
  
```  
void EnableLargeIcons(BOOL bEnable);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable large icons, `FALSE` to disable large icons.  
  
### Remarks  
 By default, large icons are enabled.  
  
##  <a name="cmfctoolbar__enablequickcustomization"></a>  CMFCToolBar::EnableQuickCustomization  
 Enables or disables the quick customization of toolbars so that the user can press the **Alt** key and drag a button to a new location.  
  
```  
static void EnableQuickCustomization(BOOL bEnable=TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable quick customization, `FALSE` to disable quick customization.  
  
##  <a name="cmfctoolbar__enablereflections"></a>  CMFCToolBar::EnableReflections  
 Enables or disables command reflection.  
  
```  
void EnableReflections(BOOL bEnable = TRUE);
```  
  
### Parameters  
 [in] `bEnable`  
 `TRUE` to enable command reflection; `FALSE` to disable command reflection.  
  
### Remarks  
 Call this method to enable command reflection for toolbar buttons that contain embedded controls, such as combo boxes.  
  
 For more information about command reflection, see [TN062: Message Reflection for Windows Controls](../../mfc/tn062-message-reflection-for-windows-controls.md).  
  
##  <a name="cmfctoolbar__enabletextlabels"></a>  CMFCToolBar::EnableTextLabels  
 Enables or disables text labels under toolbar button images.  
  
```  
void EnableTextLabels(BOOL bEnable=TRUE);
```  
  
### Parameters  
 `bEnable`  
 `TRUE` if text labels appear under toolbar button images; otherwise `FALSE`.  
  
### Remarks  
 If text labels are enabled, all buttons on the toolbar are enlarged to provide space for the labels to be displayed under the images. The customization dialog box has a **Show text label** check-box on the **Toolbars** page. When the user selects a toolbar and checks this option, the framework calls `EnableTextLabels` for the selected toolbar. You can disable the check-box for an object derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) by returning `FALSE` from [CMFCToolBar::AllowChangeTextLabels](#cmfctoolbar__allowchangetextlabels) .  
  
##  <a name="cmfctoolbar__fromhandlepermanent"></a>  CMFCToolBar::FromHandlePermanent  
 Retrieves a pointer to the `CMFCToolBar` object that contains the given window handle.  
  
```  
static CMFCToolBar* __stdcall FromHandlePermanent(HWND hwnd);
```  
  
### Parameters  
 [in] `hwnd`  
 The window handle to look for.  
  
### Return Value  
 A pointer to the `CMFCToolBar` object that contains the given window handle, or `NULL` if no corresponding `CMFCToolBar` object exists.  
  
### Remarks  
 This shared method examines each toolbar in the application for the `CMFCToolBar` object that contains the given window handle.  
  
##  <a name="cmfctoolbar__getallbuttons"></a>  CMFCToolBar::GetAllButtons  
 Returns a read-only list of buttons in a toolbar.  
  
```  
const CObList& GetAllButtons() const;

 
```  
  
### Return Value  
 A constant reference to a [CObList Class](../../mfc/reference/coblist-class.md) object, which contains a collection of [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) objects.  
  
##  <a name="cmfctoolbar__getalltoolbars"></a>  CMFCToolBar::GetAllToolbars  
 Returns a read-only list of all toolbars in the application.  
  
```  
static const CObList& GetAllToolbars();
```  
  
### Return Value  
 A const reference to a [CObList Class](../../mfc/reference/coblist-class.md) object that contains a collection of [CMFCToolbar](../../mfc/reference/cmfctoolbar-class.md) objects.  
  
##  <a name="cmfctoolbar__getbasiccommands"></a>  CMFCToolBar::GetBasicCommands  
 Returns a read-only list of the basic commands defined in the application.  
  
```  
static const CList<UINT,UINT>& GetBasicCommands();
```  
  
### Return Value  
 A const reference to a [CList Class](../../mfc/reference/clist-class.md) object that contains a collection of basic commands.  
  
### Remarks  
 Add basic commands by calling [CMFCToolBar::AddBasicCommand](#cmfctoolbar__addbasiccommand) or [CMFCToolBar::SetBasicCommands](#cmfctoolbar__setbasiccommands).  
  
##  <a name="cmfctoolbar__getbutton"></a>  CMFCToolBar::GetButton  
 Returns a pointer to the [CMFCToolBarButton Class](../../mfc/reference/cmfctoolbarbutton-class.md) object at a specified index.  
  
```  
CMFCToolBarButton* GetButton(int iIndex) const;

 
```  
  
### Parameters  
 [in] `iIndex`  
 Specifies the index of the button to return.  
  
### Return Value  
 A pointer to the toolbar button if it exists; or `NULL` if there is no such button.  
  
##  <a name="cmfctoolbar__getbuttoninfo"></a>  CMFCToolBar::GetButtonInfo  
 Returns the command ID, style, and image index of the button at a specified index.  
  
```  
void GetButtonInfo(
    int nIndex,  
    UINT& nID,  
    UINT& nStyle,  
    int& iImage) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the index of the button in the list of buttons on the toolbar.  
  
 [out] `nID`  
 The command ID of a button.  
  
 [out] `nStyle`  
 The style of the button.  
  
 [out] `iImage`  
 The index of the image for the button.  
  
### Remarks  
 The `GetButtonInfo` method finds a toolbar button at the specified index and retrieves the command ID, style and image index of the button.  
  
 If the button at the specified index does not exist, the framework sets `nID` and `nStyle` to 0, and `iImage` to -1 when the method returns.  
  
##  <a name="cmfctoolbar__getbuttonsize"></a>  CMFCToolBar::GetButtonSize  
 Returns the dimensions of each button on the toolbar.  
  
```  
CSize GetButtonSize() const;

 
```  
  
### Return Value  
 A [CSize Class](../../atl-mfc-shared/reference/csize-class.md) object that specifies the dimensions of each button on the toolbar.  
  
### Remarks  
 Call [CMFCToolBar::SetSizes](#cmfctoolbar__setsizes) or [CMFCToolBar::SetLockedSizes](#cmfctoolbar__setlockedsizes) to set the dimensions of each button on the toolbar.  
  
##  <a name="cmfctoolbar__getbuttonstyle"></a>  CMFCToolBar::GetButtonStyle  
 Returns the current style of the toolbar button that is located at the specified index.  
  
```  
UINT GetButtonStyle(int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the index of a toolbar button.  
  
### Return Value  
 A value that specifies the style of the toolbar button. . See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for a list of possible styles.  
  
### Remarks  
 Call [CMFCToolBar::SetButtonStyle](#cmfctoolbar__setbuttonstyle) to set the style of a toolbar button  
  
##  <a name="cmfctoolbar__getbuttontext"></a>  CMFCToolBar::GetButtonText  
 Returns the text label of a button that has a specified index.  
  
```  
CString GetButtonText(
    int nIndex) const;

 
void GetButtonText(
    int nIndex,  
    CString& rString) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 The index of a toolbar button.  
  
 [out] `rString`  
 The label text of the toolbar button.  
  
### Return Value  
 The label text of the toolbar button.  
  
### Remarks  
 Call [CMFCToolBar::SetButtonText](#cmfctoolbar__setbuttontext) or [CMFCToolBar::SetToolBarBtnText](#cmfctoolbar__settoolbarbtntext) to set the text label.  
  
##  <a name="cmfctoolbar__getcoldimages"></a>  CMFCToolBar::GetColdImages  
 Returns a pointer to the collection of cold toolbar button images in the application.  
  
```  
static CMFCToolBarImages* GetColdImages();
```  
  
### Return Value  
 A pointer to the collection of cold toolbar button images.  
  
### Remarks  
 Cold images are the images that are used when the user is not interacting with the toolbar buttons. Call [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) or [CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap) to load the cold images.  
  
##  <a name="cmfctoolbar__getcolumnwidth"></a>  CMFCToolBar::GetColumnWidth  
 Returns the width of the toolbar buttons.  
  
```  
virtual int GetColumnWidth() const;

 
```  
  
### Return Value  
 A value that specifies the width of toolbar buttons.  
  
### Remarks  
 The framework calls this method to calculate toolbar layout. Override this method in a derived class to specify a different column width for your toolbar.  
  
##  <a name="cmfctoolbar__getcommandbuttons"></a>  CMFCToolBar::GetCommandButtons  
 Returns a list of buttons that have a specified command ID from all toolbars in the application.  
  
```  
static int GetCommandButtons(
    UINT uiCmd,  
    CObList& listButtons);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the buttons.  
  
 [out] `listButtons`  
 A reference to a [CObList Class](../../mfc/reference/coblist-class.md) object that receives the list of toolbar buttons.  
  
### Return Value  
 The number of buttons that have the specified command ID.  
  
##  <a name="cmfctoolbar__getcount"></a>  CMFCToolBar::GetCount  
 Returns the number of buttons and separators on the toolbar.  
  
```  
int GetCount() const;

 
```  
  
### Return Value  
 The number of buttons and separators on the toolbar.  
  
##  <a name="cmfctoolbar__getcustomizebutton"></a>  CMFCToolBar::GetCustomizeButton  
 Retrieves a pointer to the `CMFCCustomizeButton` object that is associated with the toolbar.  
  
```  
CMFCCustomizeButton* GetCustomizeButton();
```  
  
### Return Value  
 A pointer to the `CMFCCustomizeButton` object that is associated with the toolbar.  
  
### Remarks  
 This method retrieves the **Customize** button that appears at the end of the toolbar. Use the [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton) method to add the **Customize** button to your toolbar.  
  
 You can call the [CMFCToolBar::IsExistCustomizeButton](#cmfctoolbar__isexistcustomizebutton) method to determine whether the toolbar contains a valid `CMFCCustomizeButton` object.  
  
##  <a name="cmfctoolbar__getdefaultimage"></a>  CMFCToolBar::GetDefaultImage  
 Returns the index of the default image for a toolbar button with a specified command ID.  
  
```  
static int GetDefaultImage(UINT uiID);
```  
  
### Parameters  
 [in] `uiID`  
 Specifies the command ID of the button.  
  
### Return Value  
 The index of the toolbar image in the shared list of images.  
  
### Remarks  
 Use this shared method to retrieve the index of the default image for a toolbar button with the specified command ID. The return value is an index into the shared collection of toolbar button images for all toolbars in the application. Call the [CMFCToolBar::GetImages](#cmfctoolbar__getimages) method to obtain a pointer to this collection.  
  
##  <a name="cmfctoolbar__getdisabledimages"></a>  CMFCToolBar::GetDisabledImages  
 Returns a pointer to the collection of images that are used for disabled toolbar buttons in the application.  
  
```  
static CMFCToolBarImages* __stdcall GetDisabledImages();
```  
  
### Return Value  
 A pointer to the collection of disabled toolbar button images.  
  
### Remarks  
 Load the disabled toolbar button images by using the [CMFCToolBarEditBoxButton Class](../../mfc/reference/cmfctoolbareditboxbutton-class.md) and [CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap) methods.  
  
##  <a name="cmfctoolbar__getdisabledmenuimages"></a>  CMFCToolBar::GetDisabledMenuImages  
 Returns a pointer to the collection of images that are used for disabled menu buttons in the application.  
  
```  
static CMFCToolBarImages* __stdcall GetDisabledMenuImages();
```  
  
### Return Value  
 A pointer to the collection of disabled menu images.  
  
### Remarks  
 Load the disabled images by using the [CMFCToolBarEditBoxButton Class](../../mfc/reference/cmfctoolbareditboxbutton-class.md) method.  
  
##  <a name="cmfctoolbar__getdroppeddownmenu"></a>  CMFCToolBar::GetDroppedDownMenu  
 Retrieves a pointer to the menu button object that is currently displaying its sub-menu.  
  
```  
CMFCToolBarMenuButton* GetDroppedDownMenu(int* pIndex = NULL) const;

 
```  
  
### Parameters  
 [out] `pIndex`  
 Receives the index of the button in the collection of toolbar buttons.  
  
### Return Value  
 A pointer to the menu button object that is displaying its sub-menu or `NULL` if no menu is displaying its sub-menu.  
  
### Remarks  
 If this method returns a non- `NULL` value and `pIndex` is not `NULL`, the value pointed to by `pIndex` is set to the index of the menu button in the collection of toolbar buttons.  
  
##  <a name="cmfctoolbar__getgraydisabledbuttons"></a>  CMFCToolBar::GetGrayDisabledButtons  
 Specifies whether the images of disabled buttons are dimmed versions of the regular button images, or taken from the collection of disabled button images.  
  
```  
BOOL GetGrayDisabledButtons() const;

 
```  
  
### Return Value  
 `TRUE` to dim the images of disabled buttons; `FALSE`to obtain images from the collection of disabled images.  
  
### Remarks  
 Use [CMFCToolBar::SetGrayDisabledButtons](#cmfctoolbar__setgraydisabledbuttons) to switch between dimmed images and the images from the collection of disabled images.  
  
##  <a name="cmfctoolbar__gethighlightedbutton"></a>  CMFCToolBar::GetHighlightedButton  
 Returns a pointer to the toolbar button that is currently highlighted.  
  
```  
CMFCToolBarButton* GetHighlightedButton() const;

 
```  
  
### Return Value  
 A pointer to a toolbar button object; or `NULL` if no button is highlighted.  
  
### Remarks  
 A toolbar button is highlighted if it has keyboard focus. A toolbar button is also highlighted if the toolbar buttons are hot-tracked in this application (for more information, see [CMFCToolBar::GetHotBorder](#cmfctoolbar__gethotborder) and [CMFCToolBar::SetHotBorder](#cmfctoolbar__sethotborder)) and the mouse is pointing at it when no toolbar button or menu item has keyboard focus.  
  
##  <a name="cmfctoolbar__gethotborder"></a>  CMFCToolBar::GetHotBorder  
 Determines whether the toolbar buttons are *hot-tracked*. If a button is hot-tracked, it is highlighted when the mouse moves across it.  
  
```  
BOOL GetHotBorder() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar buttons are hot-tracked; otherwise, `FALSE`.  
  
### Remarks  
 By default, toolbar buttons are hot-tracked.  
  
##  <a name="cmfctoolbar__gethottextcolor"></a>  CMFCToolBar::GetHotTextColor  
 Returns the text color of the highlighted toolbar buttons.  
  
```  
static COLORREF GetHotTextColor();
```  
  
### Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that represent the current highlighted text color.  
  
### Remarks  
 Call [CMFCToolBar::SetHotTextColor](#cmfctoolbar__sethottextcolor) to set a new text color for highlighted toolbar buttons.  
  
##  <a name="cmfctoolbar__gethwndlastfocus"></a>  CMFCToolBar::GetHwndLastFocus  
 Returns a handle to the window that had the input focus just before the toolbar did.  
  
```  
HWND GetHwndLastFocus() const;

 
```  
  
### Return Value  
 A handle to window that is not derived from [CMFCBaseToolBar Class](../../mfc/reference/cmfcbasetoolbar-class.md), which previously had the input focus; or `NULL` if there is no such window.  
  
### Remarks  
 When a [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) control receives the input focus, it stores a handle to the window that lost the focus so that it can restore it later.  
  
##  <a name="cmfctoolbar__getignoresettext"></a>  CMFCToolBar::GetIgnoreSetText  
 Specifies whether calls to set button labels are ignored.  
  
```  
BOOL GetIgnoreSetText() const;

 
```  
  
### Return Value  
 `TRUE` if calls to set button labels are ignored; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbar__getimages"></a>  CMFCToolBar::GetImages  
 Returns a pointer to the collection of default button images in the application.  
  
```  
static CMFCToolBarImages* GetImages();
```  
  
### Return Value  
 A pointer to the [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) object that contains the collection of default images for all toolbars in the application.  
  
### Remarks  
 This shared method provides access to the collection of all default toolbar images for the application. Call the [CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap) method to add images to the collection.  
  
##  <a name="cmfctoolbar__getimagesize"></a>  CMFCToolBar::GetImageSize  
 Returns the current size of toolbar button images.  
  
```  
CSize GetImageSize() const;

 
```  
  
### Return Value  
 A [CSize Class](../../atl-mfc-shared/reference/csize-class.md) object that represents the current size of toolbar button images.  
  
##  <a name="cmfctoolbar__getimagesoffset"></a>  CMFCToolBar::GetImagesOffset  
 Returns the index offset used to find the toolbar button images for this toolbar in the global list of toolbar button images.  
  
```  
int GetImagesOffset() const;

 
```  
  
### Return Value  
 The index offset of the toolbar images.  
  
### Remarks  
 All toolbar default images are stored in the global [CMFCToolBarImages Class](../../mfc/reference/cmfctoolbarimages-class.md) list. The images for each button in the toolbar are stored consecutively in that list. To compute the index of the image, add the index of the button in the toolbar to the offset of the beginning of the list of images for that toolbar button.  
  
 Call [CMFCToolBar::ButtonToIndex](#cmfctoolbar__buttontoindex) to obtain the index of a toolbar button given a pointer to the button.  
  
 Call [CMFCToolBar::GetImages](#cmfctoolbar__getimages) to obtain a pointer to the collection of toolbar images.  
  
##  <a name="cmfctoolbar__getinvalidateitemrect"></a>  CMFCToolBar::GetInvalidateItemRect  
 Retrieves the region of the client area that must be redrawn for the button at the given index.  
  
```  
virtual void GetInvalidateItemRect(
    int nIndex,  
    LPRECT lpRect) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 The index of the button for which to retrieve the client area.  
  
 [out] `lpRect`  
 A pointer to a `RECT` object that receives the region of the client area.  
  
### Remarks  
 The `lpRect` parameter must not be `NULL`. If no button exists at the provided index, `lpRect` receives a `RECT` object that is initialized to zero.  
  
##  <a name="cmfctoolbar__getitemid"></a>  CMFCToolBar::GetItemID  
 Returns the command ID of the toolbar button at a specified index.  
  
```  
UINT GetItemID(int nIndex) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the index of the toolbar button.  
  
### Return Value  
 The command ID of the toolbar button; or zero if the button with the specified index does not exist.  
  
##  <a name="cmfctoolbar__getitemrect"></a>  CMFCToolBar::GetItemRect  
 Returns the bounding rectangle of the button at a specified index.  
  
```  
virtual void GetItemRect(
    int nIndex,  
    LPRECT lpRect) const;

 
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the index of a toolbar button.  
  
 [out] `lpRect`  
 A pointer to `CRect` object that receives the coordinates of the image bounding rectangle.  
  
### Remarks  
 The `CRect` object to which `lpRect` points is set to 0 if a button at the specified index does not exist.  
  
### Example  
 The following example demonstrates how to use the `GetItemRect` method of the `CMFCToolBar` class. This code snippet is part of the [IE Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#9](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_4.cpp)]  
  
##  <a name="cmfctoolbar__getlargecoldimages"></a>  CMFCToolBar::GetLargeColdImages  
 Returns a pointer to the collection of large cold toolbar button images in the application.  
  
```  
static CMFCToolBarImages* GetLargeColdImages();
```  
  
### Return Value  
 A pointer to the collection of large cold images.  
  
### Remarks  
 Cold images are the images that are used when the user is not interacting with the toolbar buttons. Call [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) to load the large cold images.  
  
##  <a name="cmfctoolbar__getlargedisabledimages"></a>  CMFCToolBar::GetLargeDisabledImages  
 Returns a pointer to the collection of large disabled toolbar button images in the application.  
  
```  
static CMFCToolBarImages* GetLargeDisabledImages();
```  
  
### Return Value  
 A pointer to the collection of large disabled toolbar button images.  
  
### Remarks  
 Large images are large versions of the regular toolbar button images. Call [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) or [CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap) to load the large images.  
  
##  <a name="cmfctoolbar__getlargeimages"></a>  CMFCToolBar::GetLargeImages  
 Returns a pointer to the collection of large toolbar button images in the application.  
  
```  
static CMFCToolBarImages* GetLargeImages();
```  
  
### Return Value  
 A pointer to the collection of large toolbar button images.  
  
### Remarks  
 Large images are large versions of the regular toolbar button images. Call [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) to load the large images.  
  
##  <a name="cmfctoolbar__getlockedcoldimages"></a>  CMFCToolBar::GetLockedColdImages  
 Returns a pointer to the collection of locked cold images in the toolbar.  
  
```  
CMFCToolBarImages* GetLockedColdImages();
```  
  
### Return Value  
 A pointer to the collection of locked cold images, or `NULL` if the toolbar is not locked.  
  
### Remarks  
 Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar. Cold images are the images that are used when the user is not interacting with the toolbar buttons.  
  
 This method returns `NULL` if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see [CMFCToolBar::IsLocked](#cmfctoolbar__islocked).  
  
 Call the [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) method to load the locked cold images.  
  
##  <a name="cmfctoolbar__getlockeddisabledimages"></a>  CMFCToolBar::GetLockedDisabledImages  
 Returns a pointer to the collection of locked disabled images in the toolbar.  
  
```  
CMFCToolBarImages* GetLockedDisabledImages();
```  
  
### Return Value  
 A pointer to the collection of locked disabled images, or `NULL` if the toolbar is not locked.  
  
### Remarks  
 Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar. Disabled images are the images that the framework uses when a button has the `TBBS_DISABLED` style.  
  
 This method returns `NULL` if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see [CMFCToolBar::IsLocked](#cmfctoolbar__islocked).  
  
 Call the [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) method to load the locked disabled images.  
  
##  <a name="cmfctoolbar__getlockedimages"></a>  CMFCToolBar::GetLockedImages  
 Returns a pointer to the collection of locked button images in the toolbar.  
  
```  
CMFCToolBarImages* GetLockedImages();
```  
  
### Return Value  
 A pointer to the collection of locked toolbar button images, or `NULL` if the toolbar is not locked.  
  
### Remarks  
 Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar.  
  
 This method returns `NULL` if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see [CMFCToolBar::IsLocked](#cmfctoolbar__islocked).  
  
##  <a name="cmfctoolbar__getlockedimagesize"></a>  CMFCToolBar::GetLockedImageSize  
 Returns the default size of locked toolbar images.  
  
```  
CSize GetLockedImageSize() const;

 
```  
  
### Return Value  
 A `CSize` structure that specifies the size of locked toolbar images or an empty `CSize` structure if the toolbar is not locked.  
  
### Remarks  
 Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar.  
  
 This method returns a `CSize` structure with zero width and zero height if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see [CMFCToolBar::IsLocked](#cmfctoolbar__islocked).  
  
 Call the [CMFCToolBar::SetLockedSizes](#cmfctoolbar__setlockedsizes) method to specify the locked image size.  
  
##  <a name="cmfctoolbar__getlockedmenuimages"></a>  CMFCToolBar::GetLockedMenuImages  
 Returns a pointer to the collection of locked toolbar menu images in the toolbar.  
  
```  
CMFCToolBarImages* GetLockedMenuImages();
```  
  
### Return Value  
 A pointer to the collection of locked toolbar menu images, or `NULL` if the toolbar is not locked.  
  
### Remarks  
 Locked images are versions of the regular toolbar menu images that the framework uses when the user cannot customize the toolbar.  
  
 This method returns `NULL` if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see [CMFCToolBar::IsLocked](#cmfctoolbar__islocked).  
  
 Call the [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) method to load the locked menu images.  
  
##  <a name="cmfctoolbar__getmenubuttonsize"></a>  CMFCToolBar::GetMenuButtonSize  
 Returns the size of menu buttons in the application.  
  
```  
static CSize GetMenuButtonSize();
```  
  
### Return Value  
 A `CSize` object that represents the size of menu buttons, in pixels.  
  
### Remarks  
 The size of menu buttons on toolbars is maintained as a global variable and can be retrieved by this static method.  
  
 Call [CMFCToolBar::SetMenuSizes](#cmfctoolbar__setmenusizes) to set this global variable.  
  
##  <a name="cmfctoolbar__getmenuimages"></a>  CMFCToolBar::GetMenuImages  
 Returns a pointer to the collection of menu button images in the application.  
  
```  
static CMFCToolBarImages* GetMenuImages();
```  
  
### Return Value  
 A pointer to the collection of menu images.  
  
### Remarks  
 Call the [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex) method to load the menu images.  
  
 Call the [CMFCToolBar::SetMenuSizes](#cmfctoolbar__setmenusizes) method to set the size of buttons and their images.  
  
##  <a name="cmfctoolbar__getmenuimagesize"></a>  CMFCToolBar::GetMenuImageSize  
 Returns the size of menu button images in the application.  
  
```  
static CSize GetMenuImageSize();
```  
  
### Return Value  
 A `CSize` object that represents the size of menu images.  
  
### Remarks  
 This method returns the size of images on toolbar menu buttons that is maintained as a global variable. Call [CMFCToolBar::SetMenuSizes](#cmfctoolbar__setmenusizes) to set this global variable.  
  
##  <a name="cmfctoolbar__getorigbuttons"></a>  CMFCToolBar::GetOrigButtons  
 Retrieves the collection of non-customized buttons of the toolbar.  
  
```  
const CObList& GetOrigButtons() const;

 
```  
  
### Return Value  
 A reference to the list of non-customized buttons of the toolbar.  
  
### Remarks  
 The framework creates a copy of toolbar buttons before they are customized by the user. The [CMFCToolBar::SetButtons](#cmfctoolbar__setbuttons) method adds a copy of each button in the provided array to the list of original buttons. The [CMFCToolBar::RestoreOriginalState](#cmfctoolbar__restoreoriginalstate) method restores the original state of the toolbar by loading it from the resource file.  
  
 To set the list of original buttons for your toolbar, call the [CMFCToolBar::SetOrigButtons](#cmfctoolbar__setorigbuttons) method.  
  
##  <a name="cmfctoolbar__getorigresetbuttons"></a>  CMFCToolBar::GetOrigResetButtons  
 Retrieves the collection of non-customized reset buttons of the toolbar.  
  
```  
const CObList& GetOrigResetButtons() const;

 
```  
  
### Return Value  
 A reference to the list of non-customized reset buttons of the toolbar.  
  
### Remarks  
 When the user clicks the **Reset** button during customization mode, the framework uses this method to restore buttons that were removed from the toolbar.  
  
 The [CMFCToolBar::SetButtons](#cmfctoolbar__setbuttons) method adds a copy of each toolbar button to the list of original reset buttons after it calls the [CMFCToolBar::OnReset](#cmfctoolbar__onreset) method. You can override the [CMFCToolBar::OnReset](#cmfctoolbar__onreset) method to customize the appearance of buttons after the user presses the **Reset** button.  
  
##  <a name="cmfctoolbar__getresourceid"></a>  CMFCToolBar::GetResourceID  
 Retrieves the resource ID of the toolbar.  
  
```  
UINT GetResourceID() const;

 
```  
  
### Return Value  
 The resource ID of the toolbar.  
  
### Remarks  
 Call the [CMFCToolBar::LoadToolBarEx](#cmfctoolbar__loadtoolbarex) method to set the resource ID of the toolbar.  
  
##  <a name="cmfctoolbar__getroutecommandsviaframe"></a>  CMFCToolBar::GetRouteCommandsViaFrame  
 Determines which object, the parent frame or the owner, sends commands to the toolbar.  
  
```  
BOOL GetRouteCommandsViaFrame();
```  
  
### Return Value  
 Nonzero if the parent frame sends commands to the toolbar; 0 if the owner sends commands to the toolbar.  
  
### Remarks  
 By default, the parent frame sends commands to the toolbar. Call [CMFCToolBar::SetRouteCommandsViaFrame](#cmfctoolbar__setroutecommandsviaframe) to change this behavior.  
  
 If this method returns a nonzero value, you can retrieve a pointer to the parent frame object by using the `CMFCToolBar::GetCommandTarget` method. See the VisualStudioDemo sample for an example that uses this method.  
  
##  <a name="cmfctoolbar__getrowheight"></a>  CMFCToolBar::GetRowHeight  
 Returns the height of toolbar buttons.  
  
```  
virtual int GetRowHeight() const;

 
```  
  
### Return Value  
 The height of toolbar buttons, in pixels.  
  
### Remarks  
 The framework calls this method to calculate toolbar layout. Override this method in a derived class to specify a different height for your toolbar.  
  
##  <a name="cmfctoolbar__getshowtooltips"></a>  CMFCToolBar::GetShowTooltips  
 Specifies whether tool tips are displayed for toolbar buttons.  
  
```  
static BOOL GetShowTooltips();
```  
  
### Return Value  
 `TRUE` if tool tips are shown for toolbar buttons; otherwise `FALSE`.  
  
### Remarks  
 By default tool tips are shown. You can change this static flag by calling [CMFCToolBar::SetShowTooltips](#cmfctoolbar__setshowtooltips).  
  
##  <a name="cmfctoolbar__getsiblingtoolbar"></a>  CMFCToolBar::GetSiblingToolBar  
 Retrieves the sibling of the toolbar.  
  
```  
CMFCToolBar* GetSiblingToolBar();
```  
  
### Return Value  
 A pointer to the sibling toolbar.  
  
### Remarks  
 For more information about how to enable the **Show Buttons on One Row** and **Show Buttons on Two Rows** buttons, see [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar).  
  
##  <a name="cmfctoolbar__getuserimages"></a>  CMFCToolBar::GetUserImages  
 Returns a pointer to the collection of user-defined toolbar button images in the application.  
  
```  
static CMFCToolBarImages* GetUserImages();
```  
  
### Return Value  
 A pointer to the collection of user-defined toolbar button images for all toolbars in the application.  
  
### Remarks  
 Call the [CMFCToolBar::SetUserImages](#cmfctoolbar__setuserimages) method to set the collection of user-defined images in the application.  
  
##  <a name="cmfctoolbar__hittest"></a>  CMFCToolBar::HitTest  
 Returns the index of the toolbar button that is located at the specified position.  
  
```  
virtual int HitTest(CPoint point);
```  
  
### Parameters  
 [in] `point`  
 The point to be tested, in client coordinates.  
  
### Return Value  
 The index of the button that is located at the specified position, or -1 if there is no such button or the button is a separator.  
  
##  <a name="cmfctoolbar__insertbutton"></a>  CMFCToolBar::InsertButton  
 Inserts a button into the toolbar.  
  
```  
virtual int InsertButton(
    const CMFCToolBarButton& button,  
    INT_PTR iInsertAt=-1);

 
virtual int InsertButton(
    CMFCToolBarButton* pButton,  
    int iInsertAt=-1);
```  
  
### Parameters  
 [in] `button`  
 Specifies the button to insert.  
  
 [in] `iInsertAt`  
 Specifies the zero-based position to insert the button at.  
  
### Return Value  
 The position at which the button was inserted or -1 if an error occurs.  
  
### Remarks  
 If `iInsertAt` is -1, this method adds the button to the end of the list of toolbar buttons.  
  
 Call the [CMFCToolBar::InsertSeparator](#cmfctoolbar__insertseparator) method to insert a separator into the toolbar.  
  
##  <a name="cmfctoolbar__insertseparator"></a>  CMFCToolBar::InsertSeparator  
 Inserts a separator into the toolbar.  
  
```  
virtual int InsertSeparator(INT_PTR iInsertAt=-1);
```  
  
### Parameters  
 [in] `iInsertAt`  
 Specifies the zero-based position to insert the separator at. This parameter must be larger than 0.  
  
### Return Value  
 The position at which the separator was inserted or -1 if an error occurs.  
  
### Remarks  
 Call this method to insert a separator between two existing buttons. If `iInsertAt` is -1, this method adds the separator to the end of the list of toolbar buttons.  
  
 You cannot use this method to add a separator to an empty toolbar.  
  
 Call the [CMFCToolBar::InsertButton](#cmfctoolbar__insertbutton) method to insert a button into the toolbar.  
  
##  <a name="cmfctoolbar__invalidatebutton"></a>  CMFCToolBar::InvalidateButton  
 Invalidates the client area of the toolbar button that exists at the provided index.  
  
```  
CMFCToolBarButton* InvalidateButton(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of the button in the toolbar.  
  
### Return Value  
 A pointer to the `CMFCToolBarButton` object that exists at the provided index or `NULL` if no such object exists.  
  
### Remarks  
 The framework calls this method when it updates the client area that is associated with a toolbar button. It calls the [CWnd::InvalidateRect](../../mfc/reference/cwnd-class.md#cwnd__invalidaterect) method with the client rectangle of the `CMFCToolBarButton` object that exists at the provided index.  
  
##  <a name="cmfctoolbar__isaddremovequickcustomize"></a>  CMFCToolBar::IsAddRemoveQuickCustomize  
 Determines whether a user can add or remove toolbar buttons by using the **Customize** menu option.  
  
```  
BOOL IsAddRemoveQuickCustomize();
```  
  
### Return Value  
 `TRUE` if a user can use the **Customize** menu option to modify the toolbar; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbar__isaltcustomizemode"></a>  CMFCToolBar::IsAltCustomizeMode  
 Specifies whether *quick customization* is being used to drag a button. When quick customization is enabled, a user can press and hold the Alt key and drag a button to a new location.  
  
```  
static BOOL __stdcall IsAltCustomizeMode();
```  
  
### Return Value  
 `TRUE` if quick customization is being used to drag a button; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbar__isautograyinactiveimages"></a>  CMFCToolBar::IsAutoGrayInactiveImages  
 Specifies whether the automatic generation of inactive (non-highlighted) button images is enabled.  
  
```  
static BOOL IsAutoGrayInactiveImages();
```  
  
### Return Value  
 `TRUE` if the option to automatically dim inactive images is enabled; otherwise `FALSE`.  
  
### Remarks  
 You can enable or disable automatic dimming of inactive images by calling [CMFCToolBar::AutoGrayInactiveImages](#cmfctoolbar__autograyinactiveimages).  
  
##  <a name="cmfctoolbar__isbasiccommand"></a>  CMFCToolBar::IsBasicCommand  
 Determines whether a command is on the list of basic commands.  
  
```  
static BOOL IsBasicCommand(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 Specifies the command to check.  
  
### Return Value  
 `TRUE` if the specified command belongs to the list of basic commands; otherwise `FALSE`.  
  
### Remarks  
 This static method determines whether the command specified by `uiCmd` belongs to the global list of basic commands. You can change the list of basic commands by calling [CMFCToolBar::AddBasicCommand](#cmfctoolbar__addbasiccommand) or [CMFCToolBar::SetBasicCommands](#cmfctoolbar__setbasiccommands).  
  
##  <a name="cmfctoolbar__isbuttonextrasizeavailable"></a>  CMFCToolBar::IsButtonExtraSizeAvailable  
 Determines whether the toolbar can display buttons that have extended borders.  
  
```  
virtual BOOL IsButtonExtraSizeAvailable() const;

 
```  
  
### Return Value  
 `TRUE` if the bar can display buttons with the extra border size; otherwise `FALSE`.  
  
### Remarks  
 The toolbar object returns `TRUE` if it can display buttons that have extended borders. A toolbar button calls this method when it handles the [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__onchangeparentwnd) notification and will set its internal extra border size flag accordingly. This internal flag may be retrieved later by calling [CMFCToolBarButton::IsExtraSize](../../mfc/reference/cmfctoolbarbutton-class.md#cmfctoolbarbutton__isextrasize).  
  
 Override this method in a class derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) and return `TRUE` if your bar can display the toolbar buttons with the extra border size and return `FALSE` otherwise. The default implementation returns `TRUE`.  
  
##  <a name="cmfctoolbar__isbuttonhighlighted"></a>  CMFCToolBar::IsButtonHighlighted  
 Determines whether the specified button is highlighted.  
  
```  
BOOL IsButtonHighlighted(int iButton) const;

 
```  
  
### Parameters  
 [in] `iButton`  
 Specifies the index of a toolbar button.  
  
### Return Value  
 `TRUE` if the specified button is highlighted; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbar__iscommandpermitted"></a>  CMFCToolBar::IsCommandPermitted  
 Determines whether a command is permitted.  
  
```  
static BOOL IsCommandPermitted(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 Specifies the command to check.  
  
### Return Value  
 `TRUE` if the specified command is permitted; otherwise `FALSE`.  
  
### Remarks  
 This static method determines whether the command specified by `uiCmd` belongs to the global list of non-permitted commands.  
  
 You can change the list of non-permitted commands by calling [CMFCToolBar::SetNonPermittedCommands](#cmfctoolbar__setnonpermittedcommands).  
  
##  <a name="cmfctoolbar__iscommandrarelyused"></a>  CMFCToolBar::IsCommandRarelyUsed  
 Determines whether a command is rarely used.  
  
```  
static BOOL IsCommandRarelyUsed(UINT uiCmd);
```  
  
### Parameters  
 [in] `uiCmd`  
 Specifies the command to check.  
  
### Return Value  
 `TRUE` if the specified command is rarely used; otherwise `FALSE`.  
  
### Remarks  
 The `IsCommandRarelyUsed` method returns `FALSE` when one or more of the following conditions occur:  
  
-   The specified command belongs to the list of basic commands  
  
-   The specified command is one of the standard commands  
  
-   The framework is in customization mode  
  
-   The list of basic commands is empty  
  
-   More than 20% of command calls are calls to the specified command.  
  
##  <a name="cmfctoolbar__iscustomizemode"></a>  CMFCToolBar::IsCustomizeMode  
 Specifies whether the toolbar framework is in customization mode.  
  
```  
static BOOL IsCustomizeMode();
```  
  
### Return Value  
 `TRUE` if the framework is in customization mode; otherwise `FALSE`.  
  
### Remarks  
 You can toggle customization mode by calling [CMFCToolBar::SetCustomizeMode](#cmfctoolbar__setcustomizemode).  
  
 The framework changes the mode when the user invokes the customization dialog box ( [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md)).  
  
##  <a name="cmfctoolbar__isdragbutton"></a>  CMFCToolBar::IsDragButton  
 Determines whether a toolbar button is being dragged.  
  
```  
BOOL IsDragButton(const CMFCToolBarButton* pButton) const;

 
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to a toolbar button.  
  
### Return Value  
 `TRUE` if the specified button is being dragged; otherwise, `FALSE`.  
  
### Remarks  
  
##  <a name="cmfctoolbar__isexistcustomizebutton"></a>  CMFCToolBar::IsExistCustomizeButton  
 Determines whether the toolbar contains the **Customize** button.  
  
```  
BOOL IsExistCustomizeButton();
```  
  
### Return Value  
 `TRUE` if the toolbar contains the **Customize** button; otherwise `FALSE`.  
  
### Remarks  
 If this method returns `TRUE`, the [CMFCToolBar::GetCustomizeButton](#cmfctoolbar__getcustomizebutton) method returns a pointer to the **Customize** button that appears at the end of the toolbar.  
  
 Use the [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton) method to add the **Customize** button to your toolbar.  
  
##  <a name="cmfctoolbar__isfloating"></a>  CMFCToolBar::IsFloating  
 Determines whether the toolbar is floating.  
  
```  
virtual BOOL IsFloating() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar is floating; otherwise, `FALSE`.  
  
##  <a name="cmfctoolbar__islargeicons"></a>  CMFCToolBar::IsLargeIcons  
 Specifies whether toolbars in the application currently display large icons.  
  
```  
static BOOL IsLargeIcons();
```  
  
### Return Value  
 `TRUE` if the application is using large icons; otherwise `FALSE`.  
  
### Remarks  
 Call [CMFCToolBar::SetLargeIcons](#cmfctoolbar__setlargeicons) to toggle between large icons and regular icons.  
  
 The framework automatically changes the mode when the user toggles the **Large icons** check-box on the **Options** page of the **Customization** dialog box.  
  
##  <a name="cmfctoolbar__islastcommandfrombutton"></a>  CMFCToolBar::IsLastCommandFromButton  
 Determines whether the most recently executed command was sent from the specified toolbar button.  
  
```  
static BOOL IsLastCommandFromButton(CMFCToolBarButton* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to button.  
  
### Return Value  
 `TRUE` if the last command was sent from the button that `pButton` specifies; otherwise `FALSE`.  
  
### Remarks  
 This method obtains a pointer to a [MSG Structure](../../mfc/reference/msg-structure1.md) by calling `CWnd::GetCurrentMessage`. It then compares the `HWND` of the button with the `MSG::lParam` and `MSG::hwnd` members to determine whether the button was the source of the command.  
  
##  <a name="cmfctoolbar__islocked"></a>  CMFCToolBar::IsLocked  
 Determines whether the toolbar is locked.  
  
```  
BOOL IsLocked() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar is locked; otherwise, `FALSE`.  
  
### Remarks  
 This method returns `TRUE` when the user cannot perform customization tasks such as repositioning toolbar buttons.  
  
 Locked toolbars use separate image lists. For more information about these image lists, see [CMFCToolBar::LoadBitmapEx](#cmfctoolbar__loadbitmapex).  
  
##  <a name="cmfctoolbar__isonerowwithsibling"></a>  CMFCToolBar::IsOneRowWithSibling  
 Determines whether the toolbar and its sibling toolbar are positioned on the same row.  
  
```  
BOOL IsOneRowWithSibling();
```  
  
### Return Value  
 `TRUE` if the toolbar and its sibling are positioned on the same row; otherwise `FALSE`.  
  
### Remarks  
 The [CMFCCustomizeButton::CreatePopupMenu](http://msdn.microsoft.com/en-us/e501083e-f78e-4d8d-900c-40bd6e2bb7f8) method calls this method to determine how to show the **Customize** pop-up menu. If this method returns `TRUE`, the framework displays the **Show Buttons on One Row** button. Otherwise, the framework displays the **Show Buttons on Two Rows** button.  
  
 You typically do not have to use this method. To enable the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons, call [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar).  
  
##  <a name="cmfctoolbar__isresourcechanged"></a>  CMFCToolBar::IsResourceChanged  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL IsResourceChanged() const;

 
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__issibling"></a>  CMFCToolBar::IsSibling  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL IsSibling();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__isuserdefined"></a>  CMFCToolBar::IsUserDefined  
 Specifies whether the toolbar is user-defined.  
  
```  
BOOL IsUserDefined() const;

 
```  
  
### Return Value  
 `TRUE` if the toolbar was created by the user; otherwise `FALSE`.  
  
##  <a name="cmfctoolbar__loadbitmap"></a>  CMFCToolBar::LoadBitmap  
 Loads toolbar images from application resources.  
  
```  
virtual BOOL LoadBitmap(
    UINT uiResID,  
    UINT uiColdResID=0,  
    UINT uiMenuResID=0,  
    BOOL bLocked=FALSE,  
    UINT uiDisabledResID=0,  
    UINT uiMenuDisabledResID=0);
```  
  
### Parameters  
 [in] `uiResID`  
 The resource ID of the bitmap that refers to the hot toolbar images.  
  
 [in] `uiColdResID`  
 The resource ID of the bitmap that refers to the cold toolbar images.  
  
 [in] `uiMenuResID`  
 The resource ID of the bitmap that refers to the regular menu images.  
  
 [in] `bLocked`  
 `TRUE` to lock the toolbar; otherwise `FALSE`.  
  
 [in] `uiDisabledResID`  
 The resource ID of the bitmap that refers to the disabled toolbar images.  
  
 [in] `uiMenuDisabledResID`  
 The resource ID of the bitmap that refers to the disabled menu images.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The [CMFCToolBar::LoadToolBarEx](#cmfctoolbar__loadtoolbarex) method calls this method to load the images that are associated with the toolbar. Override this method to perform custom loading of image resources.  
  
 Call the `LoadBitmapEx` method to load additional images after you create the toolbar.  
  
##  <a name="cmfctoolbar__loadbitmapex"></a>  CMFCToolBar::LoadBitmapEx  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL LoadBitmapEx(
    CMFCToolBarInfo& params,  
    BOOL bLocked = FALSE);
```  
  
### Parameters  
 [in] `params`  
 [in] `bLocked`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__loadlargeiconsstate"></a>  CMFCToolBar::LoadLargeIconsState  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall LoadLargeIconsState(LPCTSTR lpszProfileName = NULL);
```  
  
### Parameters  
 [in] `lpszProfileName`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__loadparameters"></a>  CMFCToolBar::LoadParameters  
 Loads global toolbar options from the Windows registry.  
  
```  
static BOOL LoadParameters(LPCTSTR lpszProfileName=NULL);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the relative path of the Windows registry key.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 This method loads global parameters such as the menu animation type, the menu shadow style, and whether to display large icons from the Windows registry.  
  
 The [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#cwinappex__loadstate) method calls this method as a part of the initialization process of the application.  
  
##  <a name="cmfctoolbar__loadstate"></a>  CMFCToolBar::LoadState  
 Loads the toolbar state information from the Windows registry.  
  
```  
virtual BOOL LoadState(
    LPCTSTR lpszProfileName=NULL,  
    int nIndex=-1,  
    UINT uiID=(UINT)-1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the relative path of the Windows registry key.  
  
 [in] `nIndex`  
 Specifies the control ID of the toolbar.  
  
 [in] `uiID`  
 Specifies the resource ID of the toolbar.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The framework calls this method as a part of the initialization process of the application. For more information, see [CWinAppEx::LoadState](../../mfc/reference/cwinappex-class.md#cwinappex__loadstate).  
  
##  <a name="cmfctoolbar__loadtoolbar"></a>  CMFCToolBar::LoadToolBar  
 Loads the toolbar from application resources.  
  
```  
virtual BOOL LoadToolBar(
    UINT uiResID,  
    UINT uiColdResID=0,  
    UINT uiMenuResID=0,  
    BOOL bLocked=FALSE,  
    UINT uiDisabledResID=0,  
    UINT uiMenuDisabledResID=0,  
    UINT uiHotResID=0);
```  
  
### Parameters  
 [in] `uiResID`  
 The resource ID of the toolbar.  
  
 [in] `uiColdResID`  
 The resource ID of the bitmap that refers to the cold toolbar images.  
  
 [in] `uiMenuResID`  
 The resource ID of the bitmap that refers to the regular menu images.  
  
 [in] `bLocked`  
 A Boolean value that specifies whether the toolbar is locked or not. If this parameter is `TRUE`, the toolbar is locked. Otherwise, the toolbar is not locked.  
  
 [in] `uiDisabledResID`  
 The resource ID of the bitmap that refers to the disabled toolbar images.  
  
 [in] `uiMenuDisabledResID`  
 The resource ID of the bitmap that refers to the disabled menu images.  
  
 [in] `uiHotResID`  
 The resource ID of the bitmap that refers to the hot toolbar images.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The framework calls this method during initialization to load the images that are associated with the toolbar.  
  
### Example  
 The following example demonstrates how to use the `LoadToolBar` method in the `CMFCToolBar` class. This code snippet is part of the [IE Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#7](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_3.cpp)]  
  
##  <a name="cmfctoolbar__loadtoolbarex"></a>  CMFCToolBar::LoadToolBarEx  
 Loads the toolbar from application resources by using the `CMFCToolBarInfo` helper class to enable the application to use large images.  
  
```  
virtual BOOL LoadToolBarEx(
    UINT uiToolbarResID,  
    CMFCToolBarInfo& params,  
    BOOL bLocked=FALSE);
```  
  
### Parameters  
 [in] `uiToolbarResID`  
 The resource ID of the toolbar.  
  
 [in] `params`  
 A reference to a `CMFCToolBarInfo` object that contains the resource IDs for the toolbar images.  
  
 [in] `bLocked`  
 A Boolean value that specifies whether the toolbar is locked or not. If this parameter is `TRUE`, the toolbar is locked. Otherwise, the toolbar is not locked.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 Call this method to load toolbar images from the application resources.  
  
##  <a name="cmfctoolbar__m_dbllargeimageratio"></a>  CMFCToolBar::m_dblLargeImageRatio  
 Specifies the ratio between the dimension (height or width) of large images and the dimension of regular images.  
  
```  
AFX_IMPORT_DATA static double m_dblLargeImageRatio;  
```  
  
### Remarks  
 The default ratio is 2. You can change this value to make large toolbar images larger or smaller.  
  
 The framework uses this data member when you do not specify a set of large images. For example, if you provide only the set of small images with size 16x16 and want the large images to have the size 24x24, set this data member to 1.5.  
  
##  <a name="cmfctoolbar__nextmenu"></a>  CMFCToolBar::NextMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL NextMenu();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__onbeforeremovebutton"></a>  CMFCToolBar::OnBeforeRemoveButton  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnBeforeRemoveButton(
    CMFCToolBarButton* pButton,  
    DROPEFFECT dropEffect);
```  
  
### Parameters  
 [in] `pButton`  
 Unused.  
  
 [in] `dropEffect`  
 Unused.  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__onchangehot"></a>  CMFCToolBar::OnChangeHot  
 Called by the framework when a user selects a button on the toolbar.  
  
```  
virtual void OnChangeHot(int iHot);
```  
  
### Parameters  
 [in] `iHot`  
 Specifies the index of the toolbar button that is selected; or -1 if no toolbar button is selected.  
  
### Remarks  
 Override this method to process notifications that the user selected a button on a toolbar.  
  
##  <a name="cmfctoolbar__onchangevisualmanager"></a>  CMFCToolBar::OnChangeVisualManager  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnChangeVisualManager();
```  
  
### Remarks  
  
##  <a name="cmfctoolbar__onfillbackground"></a>  CMFCToolBar::OnFillBackground  
 Called by the framework from [CBasePane::DoPaint](../../mfc/reference/cbasepane-class.md#cbasepane__dopaint) to fill the toolbar background.  
  
```  
virtual void OnFillBackground(CDC* pDC);
```  
  
### Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
### Remarks  
 [CMFCToolBar::DoPaint](#cmfctoolbar__dopaint) calls this method when the background of a toolbar has been filled. The default implementation does nothing.  
  
 Override this method to draw custom background in derived classes.  
  
##  <a name="cmfctoolbar__onglobalfontschanged"></a>  CMFCToolBar::OnGlobalFontsChanged  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
### Remarks  
  
##  <a name="cmfctoolbar__onreset"></a>  CMFCToolBar::OnReset  
 Restores the toolbar to its original state.  
  
```  
virtual void OnReset();
```  
  
### Remarks  
 Override this method to handle notification about a toolbar reset.  
  
 The default implementation does nothing. Override `OnReset` in a class derived from [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) when the toolbar has dummy buttons that must be replaced when the toolbar returns to its original state.  
  
##  <a name="cmfctoolbar__onsetaccdata"></a>  CMFCToolBar::OnSetAccData  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL OnSetAccData(long lVal);
```  
  
### Parameters  
 [in] `lVal`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__onsetdefaultbuttontext"></a>  CMFCToolBar::OnSetDefaultButtonText  
 Restores the text of a toolbar button to its default state.  
  
```  
virtual BOOL OnSetDefaultButtonText(CMFCToolBarButton* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 Points to a button, whose text is being set.  
  
### Return Value  
 `TRUE` ifthe text was successfully restored; otherwise `FALSE`.  
  
### Remarks  
 Override this method to process notifications that the text of a toolbar button is being changed to its default.  
  
 The default implementation loads the text of a button from the application resources.  
  
##  <a name="cmfctoolbar__onusertooltip"></a>  CMFCToolBar::OnUserToolTip  
 Called by the framework when the tooltip for a button is about to be displayed.  
  
```  
virtual BOOL OnUserToolTip(
    CMFCToolBarButton* pButton,  
    CString& strTTText) const;

 
```  
  
### Parameters  
 [in] `pButton`  
 Points to a toolbar button for which a tooltip is to be displayed.  
  
 [out] `strTTText`  
 A reference to `CString` object that receives the text of the tooltip.  
  
### Return Value  
 `TRUE` if `strTTText` was populated with tooltip text; otherwise `FALSE`.  
  
### Remarks  
 The framework calls this method when the tooltip for a toolbar button is about to be displayed. If `OnUserToolTip` returns `TRUE`, the framework displays a tooltip which contains the text returned by `OnUserToolTip` in `strTTText`. Otherwise, the tooltip contains the button text.  
  
 Override `OnUserToolTip` to customize tool tips of toolbar buttons. The default implementation calls [CMFCToolBar::OnUserToolTip](#cmfctoolbar__onusertooltip) to obtain the tooltip text.  
  
##  <a name="cmfctoolbar__prevmenu"></a>  CMFCToolBar::PrevMenu  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual BOOL PrevMenu();
```  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__processcommand"></a>  CMFCToolBar::ProcessCommand  
 Posts a `WM_COMMAND` message to the window that owns the toolbar.  
  
```  
BOOL ProcessCommand(CMFCToolBarButton* pButton);
```  
  
### Parameters  
 [in] `pButton`  
 Pointer to a button on the toolbar.  
  
### Return Value  
 This method should always return `TRUE`. MFC uses `FALSE` values internally.  
  
### Remarks  
 This method posts a `WM_COMMAND` message to the window that owns the toolbar by calling [CWnd::PostMessage](../../mfc/reference/cwnd-class.md#cwnd__postmessage) and passing the command ID of the specified button as the `wParam` parameter.  
  
 Use the [ON_COMMAND](http://msdn.microsoft.com/library/f24f8bda-2cf4-49d5-aa3d-6f2e6bb003f2) macro to map the `WM_COMMAND` message to a member function.  
  
##  <a name="cmfctoolbar__removeallbuttons"></a>  CMFCToolBar::RemoveAllButtons  
 Removes all buttons and separators from the toolbar.  
  
```  
virtual void RemoveAllButtons();
```  
  
### Remarks  
 The framework calls this method when it recreates or destroys a toolbar.  
  
##  <a name="cmfctoolbar__removebutton"></a>  CMFCToolBar::RemoveButton  
 Removes from the toolbar the button that has the specified index.  
  
```  
virtual BOOL RemoveButton(int iIndex);
```  
  
### Parameters  
 [in] `iIndex`  
 Specifies the zero-based index of the button to remove.  
  
### Return Value  
 `TRUE` if the method succeeds, or `FALSE` if the specified index is invalid or the index refers to the **Customize** button.  
  
### Remarks  
 This method updates additional toolbar attributes that are affected by the removal of the button. For example, this method removes nonessential separators from the toolbar and rebuilds the table of shortcut keys.  
  
 For more information about the **Customize** button, see [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton).  
  
##  <a name="cmfctoolbar__removestatefromregistry"></a>  CMFCToolBar::RemoveStateFromRegistry  
 Deletes the state information for the toolbar from the Windows registry.  
  
```  
virtual BOOL RemoveStateFromRegistry(
    LPCTSTR lpszProfileName=NULL,  
    int nIndex=-1,  
    UINT uiID=(UINT)-1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the registry key where the state information is located.  
  
 [in] `nIndex`  
 The control ID of the toolbar.  
  
 [in] `uiID`  
 The resource ID of the toolbar. If this parameter is -1, this method uses the [CWnd::GetDlgCtrlID](../../mfc/reference/cwnd-class.md#cwnd__getdlgctrlid) method to retrieve the resource ID.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The framework calls this method when it deletes a user-defined toolbar.  
  
 Override this method if you store additional state information in the Windows registry.  
  
##  <a name="cmfctoolbar__replacebutton"></a>  CMFCToolBar::ReplaceButton  
 Replaces a toolbar button with another toolbar button.  
  
```  
int ReplaceButton(
    UINT uiCmd,  
    const CMFCToolBarButton& button,  
    BOOL bAll=FALSE);
```  
  
### Parameters  
 [in] `uiCmd`  
 The command ID of the button to replace.  
  
 [in] `button`  
 A reference to the `CMFCToolBarButton` to insert.  
  
 [in] `bAll`  
 A Boolean value that specifies whether to replace all buttons that have the command ID specified by `uiCmd`. If this parameter is `TRUE`, all buttons that have the specified command ID are replaced. Otherwise, the first button is replaced.  
  
### Return Value  
 The number of buttons that are replaced. This method returns 0 if a button with the specified command ID does not exist on the toolbar.  
  
### Remarks  
 Call this method when you want to add toolbar buttons that cannot be loaded from resources. You can create a placeholder button at design-time and replace that button with a custom button when you initialize the toolbar. See the VisualStudioDemo sample for an example that uses this method.  
  
### Example  
 The following example demonstrates how to use the `ReplaceButton` method in the `CMFCToolBar` class. This code snippet is part of the [IE Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_IEDemo#6](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_1.h)]  
[!code-cpp[NVC_MFC_IEDemo#10](../../mfc/reference/codesnippet/cpp/cmfctoolbar-class_5.cpp)]  
  
##  <a name="cmfctoolbar__resetall"></a>  CMFCToolBar::ResetAll  
 Restores all toolbars to their original states.  
  
```  
static void __stdcall ResetAll();
```  
  
### Remarks  
 This method calls the [CMFCToolBar::RestoreOriginalState](#cmfctoolbar__restoreoriginalstate) method on each toolbar in the application that can be restored. It uses the [CMFCToolBar::CanBeRestored](#cmfctoolbar__canberestored) method to determine whether a toolbar can be restored.  
  
##  <a name="cmfctoolbar__resetallimages"></a>  CMFCToolBar::ResetAllImages  
 Clears all toolbar image collections in the application.  
  
```  
static void __stdcall ResetAllImages();
```  
  
### Remarks  
 This method clears the image collections that are initialized by the [CMFCToolBar::LoadToolBar](#cmfctoolbar__loadtoolbar) and [CMFCToolBar::LoadBitmap](#cmfctoolbar__loadbitmap) methods.  
  
##  <a name="cmfctoolbar__resetimages"></a>  CMFCToolBar::ResetImages  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void ResetImages();
```  
  
### Remarks  
  
##  <a name="cmfctoolbar__restorefocus"></a>  CMFCToolBar::RestoreFocus  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
virtual void RestoreFocus();
```  
  
### Remarks  
  
##  <a name="cmfctoolbar__restoreoriginalstate"></a>  CMFCToolBar::RestoreOriginalState  
 Restores the original state of a toolbar.  
  
```  
virtual BOOL RestoreOriginalState();
```  
  
### Return Value  
 `TRUE` if the method succeeds, or `FALSE` if the method fails or the toolbar is user-defined.  
  
### Remarks  
 This method loads the toolbar from the resource file by using the [CMFCToolBar::LoadToolBar](#cmfctoolbar__loadtoolbar) method.  
  
 The framework calls this method when the user chooses the **Reset All** button on the **Toolbars** page of a customization dialog box.  
  
##  <a name="cmfctoolbar__saveparameters"></a>  CMFCToolBar::SaveParameters  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static BOOL __stdcall SaveParameters(LPCTSTR lpszProfileName = NULL);
```  
  
### Parameters  
 [in] `lpszProfileName`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__savestate"></a>  CMFCToolBar::SaveState  
 Saves the state information for the toolbar in the Windows registry.  
  
```  
virtual BOOL SaveState(
    LPCTSTR lpszProfileName=NULL,  
    int nIndex=-1,  
    UINT uiID=(UINT)-1);
```  
  
### Parameters  
 [in] `lpszProfileName`  
 Specifies the relative path of the Windows registry key.  
  
 [in] `nIndex`  
 The control ID of the toolbar.  
  
 [in] `uiID`  
 The resource ID of the toolbar.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 The framework calls this method when it saves the application state to the registry. For more information, see [CWinAppEx::SaveState](../../mfc/reference/cwinappex-class.md#cwinappex__savestate).  
  
##  <a name="cmfctoolbar__setbasiccommands"></a>  CMFCToolBar::SetBasicCommands  
 Sets the list of commands that are always displayed when a user opens a menu.  
  
```  
static void __stdcall SetBasicCommands(
    CList<UINT,UINT>& lstCommands);
```  
  
### Parameters  
 [in] `lstCommands`  
 A reference to a `CList` object that contains a collection of commands.  
  
### Remarks  
 A basic command is always displayed when the menu is opened. This method is meaningful when the user chooses to view recently used commands.  
  
 Use the [CMFCToolBar::AddBasicCommand](#cmfctoolbar__addbasiccommand) method to add a command to the list of basic commands. Use the [CMFCToolBar::GetBasicCommands](#cmfctoolbar__getbasiccommands) method to retrieve the list of basic commands that is used by your application.  
  
 See the Explorer sample for an example that uses this method.  
  
##  <a name="cmfctoolbar__setbuttoninfo"></a>  CMFCToolBar::SetButtonInfo  
 Sets the command ID, style, and image ID of a toolbar button.  
  
```  
void SetButtonInfo(
    int nIndex,  
    UINT nID,  
    UINT nStyle,  
    int iImage);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of the button whose properties are set.  
  
 [in] `nID`  
 The command ID of the button.  
  
 [in] `nStyle`  
 The style of the button. See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for the list of available toolbar button styles.  
  
 [in] `iImage`  
 The zero-based image index of the button (that is, the index in the collection of toolbar images).  
  
### Remarks  
 Call this method to set the properties of a toolbar button.  
  
 In Debug builds, this method generates an assertion failure if the index that is specified by `nIndex` is invalid.  
  
 Call the [CMFCToolBar::SetButtonStyle](#cmfctoolbar__setbuttonstyle) method to set only the style of the button.  
  
##  <a name="cmfctoolbar__setbuttons"></a>  CMFCToolBar::SetButtons  
 Sets the buttons for the toolbar.  
  
```  
virtual BOOL SetButtons(
    const UINT* lpIDArray,  
    int nIDCount,  
    BOOL bRemapImages=TRUE);
```  
  
### Parameters  
 [in] `lpIDArray`  
 A pointer to the array of command IDs of the buttons to insert.  
  
 [in] `nIDCount`  
 The number of items in `lpIDArray`.  
  
 [in] `bRemapImages`  
 A Boolean value that specifies whether to associate the existing button images with the inserted buttons. If this parameter is `TRUE`, the images are remapped.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0.  
  
### Remarks  
 Call this method to remove existing buttons from a toolbar and insert a collection of new buttons.  
  
 This method adds the **Customize** button to the toolbar and sends the `AFX_WM_RESETTOOLBAR` message to the parent window of the toolbar. For more information about the **Customize** button, see [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton).  
  
##  <a name="cmfctoolbar__setbuttonstyle"></a>  CMFCToolBar::SetButtonStyle  
 Sets the style of the toolbar button at the given index.  
  
```  
virtual void SetButtonStyle(
    int nIndex,  
    UINT nStyle);
```  
  
### Parameters  
 [in] `nIndex`  
 The zero-based index of the toolbar button whose style is to be set.  
  
 [in] `nStyle`  
 The style of the button. See [ToolBar Control Styles](../../mfc/reference/toolbar-control-styles.md) for the list of available toolbar button styles.  
  
### Remarks  
 This method removes the `TBBS_PRESSED` style if `nStyle` is `TBBS_DISABLED` because the user cannot click a disabled button.  
  
##  <a name="cmfctoolbar__setbuttontext"></a>  CMFCToolBar::SetButtonText  
 Sets the text label of a toolbar button.  
  
```  
BOOL SetButtonText(
    int nIndex,  
    LPCTSTR lpszText);
```  
  
### Parameters  
 [in] `nIndex`  
 The index of the toolbar button.  
  
 [in] `lpszText`  
 The text label of the toolbar button. Must be non- `NULL`.  
  
### Return Value  
 `TRUE` if the method succeeds; otherwise `FALSE`.  
  
### Remarks  
 This method returns `FALSE` if the provided index does not refer to a valid toolbar button.  
  
##  <a name="cmfctoolbar__setcommandusageoptions"></a>  CMFCToolBar::SetCommandUsageOptions  
 Specifies when rarely used commands do not appear in the menu of the application.  
  
```  
static BOOL SetCommandUsageOptions(
    UINT nStartCount,  
    UINT nMinUsagePercentage=5);
```  
  
### Parameters  
 [in] `nStartCount`  
 Specifies the number of times that commands must be executed before the framework shows only the basic and recently-used commands.  
  
 [in] `nMinUsagePercentage`  
 The percentage of times that a command must be executed to be considered a recently-used command.  
  
### Return Value  
 `FALSE` if `nMinUsagePercentage` is equal to or larger than 100; otherwise `TRUE`.  
  
### Remarks  
 Call this method to customize the algorithm that the framework uses to determine how basic and recently used menu items appear. For more information about basic commands, see [CMFCToolBar::AddBasicCommand](#cmfctoolbar__addbasiccommand).  
  
 This class uses the `CMFCCmdUsageCount` class to track the usage count of commands. For more information about this class, see [CMFCCmdUsageCount Class](../../mfc/reference/cmfccmdusagecount-class.md).  
  
##  <a name="cmfctoolbar__setcustomizemode"></a>  CMFCToolBar::SetCustomizeMode  
 Enables or disables customization mode for all toolbars in the application.  
  
```  
static BOOL __stdcall SetCustomizeMode(BOOL bSet=TRUE);
```  
  
### Parameters  
 [in] `bSet`  
 A Boolean value that specifies whether to enable or disable customization mode. Set this parameter to `TRUE` to enable customization mode or `FALSE` to disable it.  
  
### Return Value  
 `TRUE` if calling this method changes the customization mode; otherwise `FALSE`.  
  
### Remarks  
 This method adjusts the layout of and redraws each toolbar in the application. Call the [CMFCToolBar::IsCustomizeMode](#cmfctoolbar__iscustomizemode) method to determine whether the application is in customization mode,  
  
##  <a name="cmfctoolbar__setgraydisabledbuttons"></a>  CMFCToolBar::SetGrayDisabledButtons  
 Specifies whether unavailable buttons on the toolbar are dimmed, or whether button-unavailable images are used.  
  
```  
void SetGrayDisabledButtons(BOOL bGrayDisabledButtons);
```  
  
### Parameters  
 [in] `bGrayDisabledButtons`  
 A Boolean value that specifies how to display unavailable buttons. If this parameter is `TRUE`, the framework dims the buttons. Otherwise, the framework uses the collection of button-unavailable images.  
  
### Remarks  
 By default, unavailable buttons are dimmed.  
  
##  <a name="cmfctoolbar__setheight"></a>  CMFCToolBar::SetHeight  
 Sets the height of the toolbar.  
  
```  
void SetHeight(int cyHeight);
```  
  
### Parameters  
 [in] `cyHeight`  
 The height of the toolbar, in pixels.  
  
### Remarks  
 This method redraws the toolbar after it sets the height.  
  
##  <a name="cmfctoolbar__sethelpmode"></a>  CMFCToolBar::SetHelpMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
static void __stdcall SetHelpMode(BOOL bOn = TRUE);
```  
  
### Parameters  
 [in] `bOn`  
  
### Remarks  
  
##  <a name="cmfctoolbar__sethot"></a>  CMFCToolBar::SetHot  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
BOOL SetHot(CMFCToolBarButton* pMenuButton);
```  
  
### Parameters  
 [in] `pMenuButton`  
  
### Return Value  
  
### Remarks  
  
##  <a name="cmfctoolbar__sethotborder"></a>  CMFCToolBar::SetHotBorder  
 Specifies whether toolbar buttons are hot-tracked.  
  
```  
void SetHotBorder(BOOL bShowHotBorder);
```  
  
### Parameters  
 [in] `bShowHotBorder`  
 A Boolean value that specifies whether to hot-track toolbar buttons. If this parameter is `TRUE`, the toolbar hot-tracks its buttons. Otherwise, the toolbar does not hot-track its buttons.  
  
### Remarks  
 If a button is hot-tracked, the framework highlights the button when the mouse moves across it. By default, each toolbar hot-tracks its buttons.  
  
 Call the [CMFCToolBar::GetHotBorder](#cmfctoolbar__gethotborder) method to determine whether the toolbar hot-tracks its buttons.  
  
##  <a name="cmfctoolbar__sethottextcolor"></a>  CMFCToolBar::SetHotTextColor  
 Sets the text color for hot toolbar buttons.  
  
```  
static void SetHotTextColor(COLORREF clrText);
```  
  
### Parameters  
 [in] `clrText`  
 Specifies the text color for toolbar buttons that are hot-tracked.  
  
### Remarks  
 For more information about hot-tracked toolbar buttons, see [CMFCToolBar::GetHotBorder](#cmfctoolbar__gethotborder) and [CMFCToolBar::SetHotBorder](#cmfctoolbar__sethotborder).  
  
##  <a name="cmfctoolbar__setignoresettext"></a>  CMFCToolBar::SetIgnoreSetText  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetIgnoreSetText(BOOL bValue);
```  
  
### Parameters  
 [in] `bValue`  
  
### Remarks  
  
##  <a name="cmfctoolbar__setlargeicons"></a>  CMFCToolBar::SetLargeIcons  
 Specifies whether toolbar buttons display large icons.  
  
```  
static void SetLargeIcons(BOOL bLargeIcons=TRUE);
```  
  
### Parameters  
 [in] `bLargeIcons`  
 A Boolean value that specifies which icons to use. If this parameter is `TRUE`, the framework displays large icons. Otherwise, the framework displays regular icons.  
  
### Remarks  
 The framework calls this method when the user changes the state of the **Large Icons** check box in the **Options** tab of the **Customize** dialog box. This method resizes all toolbars in the application.  
  
 By default, the framework displays regular icons.  
  
 For more information about the **Customize** dialog box, see [CMFCToolBarsCustomizeDialog Class](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
##  <a name="cmfctoolbar__setlockedsizes"></a>  CMFCToolBar::SetLockedSizes  
 Sets the sizes of locked buttons and locked images on the toolbar.  
  
```  
void SetLockedSizes(
    SIZE sizeButton,  
    SIZE sizeImage,  
    BOOL bDontScale = FALSE);
```  
  
### Parameters  
 [in] `sizeButton`  
 Specifies the size of locked toolbar buttons.  
  
 [in] `sizeImage`  
 Specifies the size of locked toolbar images.  
  
 `bDontScale`  
 Specifies whether to scale or not locked toolbar images in high DPI mode.  
  
### Remarks  
 The default size of locked buttons is 23x22 pixels. The default size of locked images is 16x15 pixels.  
  
 Call the [CMFCToolBar::GetLockedImageSize](#cmfctoolbar__getlockedimagesize) method to retrieve the size of locked images. Call the [CMFCToolBar::GetButtonSize](#cmfctoolbar__getbuttonsize) method to retrieve the size of locked toolbar buttons.  
  
##  <a name="cmfctoolbar__setmaskmode"></a>  CMFCToolBar::SetMaskMode  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetMaskMode(BOOL bMasked);
```  
  
### Parameters  
 [in] `bMasked`  
  
### Remarks  
  
##  <a name="cmfctoolbar__setmenusizes"></a>  CMFCToolBar::SetMenuSizes  
 Sets the size of toolbar menu buttons and their images.  
  
```  
static void __stdcall SetMenuSizes(
    SIZE sizeButton,  
    SIZE sizeImage);
```  
  
### Parameters  
 [in] `sizeButton`  
 Specifies the size of toolbar buttons, in pixels.  
  
 [in] `sizeImage`  
 Specifies the size of toolbar images, in pixels.  
  
### Remarks  
 By default, menu buttons and their images have an undefined size.  
  
 Call the [CMFCToolBar::GetMenuButtonSize](#cmfctoolbar__getmenubuttonsize) method to determine the size of menu buttons and the [CMFCToolBar::GetMenuImageSize](#cmfctoolbar__getmenuimagesize) method to determine the size of menu button images.  
  
 See the IEDemo and MSMoneyDemo samples for examples that use this method.  
  
##  <a name="cmfctoolbar__setnonpermittedcommands"></a>  CMFCToolBar::SetNonPermittedCommands  
 Sets the list of commands that cannot be executed by the user.  
  
```  
static void SetNonPermittedCommands(
    CList<UINT,UINT>& lstCommands);
```  
  
### Parameters  
 [in] `lstCommands`  
 A reference to a `CList` object that contains the commands that cannot be executed by the user.  
  
### Remarks  
 Call this method to prevent the user from selecting certain commands. For example, you might want to prevent the user from selecting certain commands for security reasons. See the MDITabsDemo and MenuSubSet samples for examples that use this method.  
  
 This method clears the previous list of non-permitted commands. By default, the list of non-permitted commands is empty.  
  
##  <a name="cmfctoolbar__setonerowwithsibling"></a>  CMFCToolBar::SetOneRowWithSibling  
 Positions the toolbar and its sibling on the same row.  
  
```  
void SetOneRowWithSibling();
```  
  
### Remarks  
 The framework calls this method when the user clicks the **Show Buttons on One Row** button.  
  
 Call the [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar) method to enable the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons. If you call [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar) for this toolbar, the sibling toolbar is moved to the row of this toolbar. Otherwise, this toolbar is moved to the row of the sibling.  
  
 The framework calls the [CMFCToolBar::SetTwoRowsWithSibling](#cmfctoolbar__settworowswithsibling) method when the user clicks the **Show Buttons on Two Rows** button.  
  
##  <a name="cmfctoolbar__setorigbuttons"></a>  CMFCToolBar::SetOrigButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetOrigButtons(const CObList& lstOrigButtons);
```  
  
### Parameters  
 [in] `lstOrigButtons`  
  
### Remarks  
  
##  <a name="cmfctoolbar__setpermament"></a>  CMFCToolBar::SetPermament  
 Specifies whether a user can close the toolbar.  
  
```  
void SetPermament(BOOL bPermament=TRUE);
```  
  
### Parameters  
 [in] `bPermament`  
 A Boolean value that specifies whether a user can close the toolbar. If this parameter is `TRUE`, a user cannot close the toolbar. Otherwise, a user can close the toolbar.  
  
### Remarks  
 By default, a user can close each toolbar.  
  
 Call the [CMFCToolBar::CanBeClosed](#cmfctoolbar__canbeclosed) method to determine whether a user can close the toolbar.  
  
##  <a name="cmfctoolbar__setroutecommandsviaframe"></a>  CMFCToolBar::SetRouteCommandsViaFrame  
 Specifies whether the parent frame or the owner sends commands to the toolbar.  
  
```  
void SetRouteCommandsViaFrame(BOOL bValue);
```  
  
### Parameters  
 [in] `bValue`  
 If this parameter is `TRUE`, the parent frame sends commands to the toolbar. Otherwise, the owner sends commands to the toolbar.  
  
### Remarks  
 By default, the parent frame sends commands to the toolbar. Call the [CMFCToolBar::GetRouteCommandsViaFrame](#cmfctoolbar__getroutecommandsviaframe) method to determine whether the parent frame or the owner sends commands to the toolbar.  
  
##  <a name="cmfctoolbar__setshowtooltips"></a>  CMFCToolBar::SetShowTooltips  
 Specifies whether the framework displays tool tips.  
  
```  
static void SetShowTooltips(BOOL bValue);
```  
  
### Parameters  
 [in] `bValue`  
 If this parameter is `TRUE`, the framework shows tool tips. Otherwise, the framework hides tool tips.  
  
### Remarks  
 By default, the framework shows tool tips.  
  
 Call the [CMFCToolBar::GetShowTooltips](#cmfctoolbar__getshowtooltips) method to determine whether the framework shows tool tips.  
  
##  <a name="cmfctoolbar__setsiblingtoolbar"></a>  CMFCToolBar::SetSiblingToolBar  
 Specifies the sibling of the toolbar.  
  
```  
void SetSiblingToolBar(CMFCToolBar* pBrotherToolbar);
```  
  
### Parameters  
 [in] `pBrotherToolbar`  
 A pointer to the sibling toolbar.  
  
### Remarks  
 This method enables the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons that are shown when the user displays the **Customize** pop-up menu. Call this method when you want to enable the user to specify whether related toolbars appear on the same row or on different rows.  
  
 Call this method after you enable the **Customize** button that appears on the toolbar. To enable the **Customize** button, call the [CMFCToolBar::EnableCustomizeButton](#cmfctoolbar__enablecustomizebutton) method.  
  
 To retrieve the sibling of a toolbar, call [CMFCToolBar::GetSiblingToolBar](#cmfctoolbar__getsiblingtoolbar).  
  
##  <a name="cmfctoolbar__setsizes"></a>  CMFCToolBar::SetSizes  
 Specifies the sizes of buttons and images on all toolbars.  
  
```  
static void __stdcall SetSizes(
    SIZE sizeButton,  
    SIZE sizeImage);
```  
  
### Parameters  
 [in] `sizeButton`  
 The size of toolbar buttons, in pixels.  
  
 [in] `sizeImage`  
 The size of toolbar button images, in pixels.  
  
### Remarks  
 The default size of toolbar buttons is 23x22 pixels. The default size of toolbar button images is 16x15 pixels.  
  
 Call the [CMFCToolBar::GetImageSize](#cmfctoolbar__getimagesize) method to retrieve the size of toolbar button images. Call the [CMFCToolBar::GetButtonSize](#cmfctoolbar__getbuttonsize) method to retrieve the size of toolbar buttons.  
  
##  <a name="cmfctoolbar__settoolbarbtntext"></a>  CMFCToolBar::SetToolBarBtnText  
 Specifies properties of a button on the toolbar.  
  
```  
void SetToolBarBtnText(
    UINT nBtnIndex,  
    LPCTSTR szText=NULL,  
    BOOL bShowText=TRUE,  
    BOOL bShowImage=TRUE);
```  
  
### Parameters  
 [in] `nBtnIndex`  
 The zero-based index of the toolbar button in the list of toolbar buttons.  
  
 [in] `szText`  
 Specifies the text label of the toolbar button.  
  
 [in] `bShowText`  
 If this parameter is `TRUE`, the framework shows the text label. Otherwise, the framework hides the text label.  
  
 [in] `bShowImage`  
 If this parameter is `TRUE`, the framework shows the toolbar button image. Otherwise, the framework hides the toolbar button image.  
  
### Remarks  
 By default, the framework shows the images of toolbar buttons but does not show the text label of toolbar buttons.  
  
 In Debug builds, this method generates an assertion failure if `nBtnIndex` does not refer to a valid toolbar button or the toolbar button is a separator.  
  
##  <a name="cmfctoolbar__settworowswithsibling"></a>  CMFCToolBar::SetTwoRowsWithSibling  
 Positions the toolbar and its sibling on separate rows.  
  
```  
void SetTwoRowsWithSibling();
```  
  
### Remarks  
 The framework calls this method when the user clicks the **Show Buttons on Two Rows** button.  
  
 Call the [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar) method to enable the **Show Buttons on One Row** or **Show Buttons on Two Rows** buttons. If you call [CMFCToolBar::SetSiblingToolBar](#cmfctoolbar__setsiblingtoolbar) for this toolbar, the sibling toolbar is moved to a separate row. Otherwise, this toolbar is moved to a separate row.  
  
 The framework calls the [CMFCToolBar::SetOneRowWithSibling](#cmfctoolbar__setonerowwithsibling) method when the user clicks the **Show Buttons on One Row** button.  
  
##  <a name="cmfctoolbar__setuserimages"></a>  CMFCToolBar::SetUserImages  
 Sets the collection of user-defined images in the application.  
  
```  
static BOOL SetUserImages(CMFCToolBarImages* pUserImages);
```  
  
### Parameters  
 [in] `pUserImages`  
 A pointer to the collection of user-defined images.  
  
### Return Value  
 Nonzero if the method succeeds; otherwise 0 if the specified `CMFCToolBarImages` object is not valid or has an image size that differs from the default image size of the toolbar.  
  
### Remarks  
 The framework uses user-defined images to draw toolbar buttons that are customized by the user. The image list specified by `pUserImages` is shared among all toolbars in the application.  
  
 This method generates an assertion failure in Debug builds if the specified `CMFCToolBarImages` object is not valid or has an image size that differs from the default image size of the toolbar.  
  
 The OutlookDemo, ToolTipDemo, and VisualStudioDemo samples use this method to set the global collection of user-defined images. They load the file that is named UserImages.bmp, which is located in the working directory of the application.  
  
 Call the [CMFCToolBar::GetUserImages](#cmfctoolbar__getuserimages) method to retrieve the collection of user-defined images in the application.  
  
##  <a name="cmfctoolbar__stretchpane"></a>  CMFCToolBar::StretchPane  
 Stretches the toolbar vertically or horizontally, and repositions the buttons if necessary.  
  
```  
virtual CSize StretchPane(
    int nLength,  
    BOOL bVert);
```  
  
### Parameters  
 [in] `nLength`  
 The amount, in pixels, by which to stretch the pane.  
  
 [in] `bVert`  
 If `TRUE`, stretches the pane vertically. If `FALSE`, stretches the pane horizontally.  
  
### Return Value  
 A `CSize` object that specifies the size of the toolbar client area.  
  
### Remarks  
 This method calls [CMFCToolBar::WrapToolBar](#cmfctoolbar__wraptoolbar) to reposition the buttons within the stretched toolbar.  
  
 The return value is determined by calling [CMFCToolBar::CalcSize](#cmfctoolbar__calcsize).  
  
##  <a name="cmfctoolbar__translatechar"></a>  CMFCToolBar::TranslateChar  
 Executes a button command if the specified key code corresponds to a valid keyboard shortcut.  
  
```  
virtual BOOL TranslateChar(UINT nChar);
```  
  
### Parameters  
 [in] `nChar`  
 Specifies a virtual key code. For a list of standard virtual key codes, see Winuser.h  
  
### Return Value  
 `FALSE` if the specified key code is either unprintable or does not correspond to a valid keyboard shortcut; `TRUE` if the specified key code corresponds to a drop-down menu option; otherwise, the return value from [CMFCToolBar::ProcessCommand](#cmfctoolbar__processcommand).  
  
### Remarks  
 The framework calls this method when a key is pressed together with the Alt key.  
  
##  <a name="cmfctoolbar__updatebutton"></a>  CMFCToolBar::UpdateButton  
 Updates the state of the specified button.  
  
```  
void UpdateButton(int nIndex);
```  
  
### Parameters  
 [in] `nIndex`  
 Specifies the zero-based index of the button to update.  
  
### Remarks  
  
##  <a name="cmfctoolbar__wraptoolbar"></a>  CMFCToolBar::WrapToolBar  
 Repositions toolbar buttons within the given dimensions.  
  
```  
int WrapToolBar(
    int nWidth,  
    int nHeight = 32767,  
    CDC* pDC = NULL,  
    int nColumnWidth = -1,  
    int nRowHeight = -1);
```  
  
### Parameters  
 [in] `nWidth`  
 Maximum width of the toolbar.  
  
 [in] `nHeight`  
 Maximum height of the toolbar. Not used if the toolbar is floating.  
  
 [in] `pDC`  
 Pointer to a device context. If NULL, the device context for the toolbar is used.  
  
 [in] `nColumnWidth`  
 Button width. If -1, the current width is used.  
  
 [in] m `nRowHeight`  
 Button height. If -1, the current height is used.  
  
### Return Value  
 The number of rows of buttons on the toolbar.  
  
### Remarks  
 This method repositions buttons within the toolbar, wrapping buttons to additional rows if necessary.  
  
##  <a name="cmfctoolbar__m_bdontscaleimages"></a>  CMFCToolBar::m_bDontScaleImages  
 Specifies whether or not to scale toolbar images in high DPI mode.  
  
```  
AFX_IMPORT_DATA static BOOL m_bDontScaleImages;  
```  
  
### Remarks  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCMenuBar Class](../../mfc/reference/cmfcmenubar-class.md)   
 [CMFCPopupMenuBar Class](../../mfc/reference/cmfcpopupmenubar-class.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [Walkthrough: Putting Controls On Toolbars](../../mfc/walkthrough-putting-controls-on-toolbars.md)



