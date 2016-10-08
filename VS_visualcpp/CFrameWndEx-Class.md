---
title: "CFrameWndEx Class"
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
ms.assetid: 5830aca8-4a21-4f31-91f1-dd5477ffcc8d
caps.latest.revision: 33
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
# CFrameWndEx Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Implements the functionality of a Windows single document interface (SDI) overlapped or popup frame window, and provides members for managing the window. It extends the <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CFrameWnd</legacyLink> class. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CFrameWndEx : public CFrameWnd</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__activeitemrecalclayout">CFrameWndEx::ActiveItemRecalcLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adjusts the layout of the OLE client item and the frame's client area.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CFrameWndEx::AddDockSite</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>This method is not used. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__addpane">CFrameWndEx::AddPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers a control bar with the docking manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__adjustdockinglayout">CFrameWndEx::AdjustDockingLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Recalculates the layout of all panes that are docked to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__delayupdateframemenu">CFrameWndEx::DelayUpdateFrameMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the frame menu and then updates it when command processing is idle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__dockpane">CFrameWndEx::DockPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Docks the specified pane to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__dockpaneleftof">CFrameWndEx::DockPaneLeftOf</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Docks one pane to the left of another pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enableautohidepanes">CFrameWndEx::EnableAutoHideBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables the auto-hide mode for the panes when they are docked to the specified sides of the main frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enabledocking">CFrameWndEx::EnableDocking</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables the docking of the panes that belong to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enablefullscreenmainmenu">CFrameWndEx::EnableFullScreenMainMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the main menu in a full screen mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enablefullscreenmode">CFrameWndEx::EnableFullScreenMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables the full screen mode for the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enableloaddockstate">CFrameWndEx::EnableLoadDockState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the loading of the docking state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__enablepanemenu">CFrameWndEx::EnablePaneMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the automatic handling of the pane menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getactivepopup">CFrameWndEx::GetActivePopup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently displayed pop-up menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getdefaultresid">CFrameWndEx::GetDefaultResId</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the resource ID that you specified when the framework loaded the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getdockingmanager">CFrameWndEx::GetDockingManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager</link> object for the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getmenubar">CFrameWndEx::GetMenuBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the menu bar object attached to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getpane">CFrameWndEx::GetPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the pane that has the specified ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__getribbonbar">CFrameWndEx::GetRibbonBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ribbon bar control for the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__gettearoffbars">CFrameWndEx::GetTearOffBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a list of pane objects that are in a tear-off state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__gettoolbarbuttontooltiptext">CFrameWndEx::GetToolbarButtonToolTipText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the application displays the tooltip for a toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__insertpane">CFrameWndEx::InsertPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers a pane with the docking manager. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__isfullscreen">CFrameWndEx::IsFullScreen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the frame window is in full screen mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ismenubaravailable">CFrameWndEx::IsMenuBarAvailable</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the pointer to the menu bar object is valid.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ispointneardocksite">CFrameWndEx::IsPointNearDockSite</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the point is located in an alignment zone.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__isprintpreview">CFrameWndEx::IsPrintPreview</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the frame window is in print preview mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__loadframe">CFrameWndEx::LoadFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>This method is called after construction to create the frame window and load its resources.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__negotiateborderspace">CFrameWndEx::NegotiateBorderSpace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Implements OLE client border negotiation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onactivate">CFrameWndEx::OnActivate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method when user input is switched to or away from the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onactivateapp">CFrameWndEx::OnActivateApp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the application is either selected or deselected.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onchangevisualmanager">CFrameWndEx::OnChangeVisualManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a change to the frame requires a change to the visual manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onclose">CFrameWndEx::OnClose</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method to close the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onclosedockingpane">CFrameWndEx::OnCloseDockingPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user clicks the <ui>Close</ui> button on a docking pane. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__oncloseminiframe">CFrameWndEx::OnCloseMiniFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user clicks the <ui>Close</ui> button on a floating mini frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onclosepopupmenu">CFrameWndEx::OnClosePopupMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when an active pop-up menu processes a WM_DESTROY message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__oncmdmsg">CFrameWndEx::OnCmdMsg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Dispatches command messages.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__oncontexthelp">CFrameWndEx::OnContextHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to display context related help.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__oncreate">CFrameWndEx::OnCreate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework after the frame is created.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ondestroy">CFrameWndEx::OnDestroy</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the frame is destroyed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ondrawmenuimage">CFrameWndEx::OnDrawMenuImage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the application draws the image associated with a menu item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ondrawmenulogo">CFrameWndEx::OnDrawMenuLogo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a <unmanagedCodeEntityReference>CMFCPopupMenu</unmanagedCodeEntityReference> object processes a                                         <externalLink> <linkText>WM_PAINT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145213</linkUri>
                                        </externalLink> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ondwmcompositionchanged">CFrameWndEx::OnDWMCompositionChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when Desktop Window Manager (DWM) composition has been enabled or disabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onexitsizemove">CFrameWndEx::OnExitSizeMove</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the frame stops moving or resizing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ongetminmaxinfo">CFrameWndEx::OnGetMinMaxInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the frame is resized to set window dimension limits.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onidleupdatecmdui">CFrameWndEx::OnIdleUpdateCmdUI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to update the frame display when command processing is idle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onlbuttondown">CFrameWndEx::OnLButtonDown</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method when the user presses the left mouse button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onlbuttonup">CFrameWndEx::OnLButtonUp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method when the user releases the left mouse button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onmenubuttontoolhittest">CFrameWndEx::OnMenuButtonToolHitTest</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> object processes a <unmanagedCodeEntityReference>WM_NCHITTEST</unmanagedCodeEntityReference> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onmenuchar">CFrameWndEx::OnMenuChar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a menu is displayed and the user presses a key that does not correspond to a command.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onmousemove">CFrameWndEx::OnMouseMove</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method when the pointer moves.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onmoveminiframe">CFrameWndEx::OnMoveMiniFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a pane window moves.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onncactivate">CFrameWndEx::OnNcActivate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the non-client area of the frame must be redrawn to indicate a change in the active state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onnccalcsize">CFrameWndEx::OnNcCalcSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the size and position of the client area must be calculated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onnchittest">CFrameWndEx::OnNcHitTest</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the pointer moves or when a mouse button is pressed or released.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onncmousemove">CFrameWndEx::OnNcMouseMove</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the pointer moves in a non-client area.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onncpaint">CFrameWndEx::OnNcPaint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the non-client area must be painted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onpanecheck">CFrameWndEx::OnPaneCheck</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to control the visibility of a pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onpostpreviewframe">CFrameWndEx::OnPostPreviewFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user has changed the print preview mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onpowerbroadcast">CFrameWndEx::OnPowerBroadcast</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a power management event occurs.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsetmenu">CFrameWndEx::OnSetMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to replace the frame window menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsetpreviewmode">CFrameWndEx::OnSetPreviewMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to set the print preview mode for the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsettext">CFrameWndEx::OnSetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to set the text of a window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onshowcustomizepane">CFrameWndEx::OnShowCustomizePane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a quick customize pane is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onshowpanes">CFrameWndEx::OnShowPanes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to show or hide panes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onshowpopupmenu">CFrameWndEx::OnShowPopupMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a pop-up menu is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsize">CFrameWndEx::OnSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method after the frame's size changes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsizing">CFrameWndEx::OnSizing</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method when the user resizes the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onsyscolorchange">CFrameWndEx::OnSysColorChange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the system colors change.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ontearoffmenu">CFrameWndEx::OnTearOffMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a menu that has a tear-off bar is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ontoolbarcontextmenu">CFrameWndEx::OnToolbarContextMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to build a toolbar context menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ontoolbarcreatenew">CFrameWndEx::OnToolbarCreateNew</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method to create a new toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__ontoolbardelete">CFrameWndEx::OnToolbarDelete</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a toolbar is deleted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onupdateframemenu">CFrameWndEx::OnUpdateFrameMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to set the frame menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onupdateframetitle">CFrameWndEx::OnUpdateFrameTitle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The framework calls this method to update the title bar of the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onupdatepanemenu">CFrameWndEx::OnUpdatePaneMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to update the pane menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__onwindowposchanged">CFrameWndEx::OnWindowPosChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the frame size, position, or z-order has changed because of a call to a window management method.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__panefrompoint">CFrameWndEx::PaneFromPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the docking pane that contains the specified point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__pretranslatemessage">CFrameWndEx::PreTranslateMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles specific window messages before they are dispatched.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__recalclayout">CFrameWndEx::RecalcLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adjusts the layout of the frame and its child windows.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__removepanefromdockmanager">CFrameWndEx::RemovePaneFromDockManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unregisters a pane and removes it from the internal list in the docking manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__setdockstate">CFrameWndEx::SetDockState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores the docking layout to the docking state stored in the registry.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__setprintpreviewframe">CFrameWndEx::SetPrintPreviewFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the print preview frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__setuptoolbarmenu">CFrameWndEx::SetupToolbarMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts user-defined commands into a toolbar menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__showfullscreen">CFrameWndEx::ShowFullScreen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Switches the main frame between the full screen and the regular modes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__showpane">CFrameWndEx::ShowPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the specified pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__updatecaption">CFrameWndEx::UpdateCaption</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to update the window frame caption.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewndex__winhelp">CFrameWndEx::WinHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invokes either the <languageKeyword>WinHelp</languageKeyword> application or context related help.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <codeExample>
        <description>
            <content>
                <para>The following example demonstrates how to inherit a class from the <unmanagedCodeEntityReference>CFrameWndEx</unmanagedCodeEntityReference> class. The example illustrates the method signatures in the subclass, and how to override the <unmanagedCodeEntityReference>OnShowPopupMenu</unmanagedCodeEntityReference> method. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">Word Pad sample</legacyLink>.</para>
            </content>
        </description>
        <codeReference>NVC_MFC_WordPad#3,4</codeReference>
    </codeExample>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CFrameWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="5830aca8-4a21-4f31-91f1-dd5477ffcc8d">CFrameWndEx</legacyLink>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> afxframewndex.h</para>
        </content>
    </requirements>
    <section address="cframewndex__activeitemrecalclayout">
        <!--176ed723-856f-46e9-9a19-fa9709515db6-->
        <title>CFrameWndEx::ActiveItemRecalcLayout</title>
        <content>
            <para>Adjusts the layout of the OLE client item and the frame's client area.</para>
            <legacySyntax>void ActiveItemRecalcLayout();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__addpane">
        <!--9d97d0f5-a953-4267-9ee1-ae4bcdd4c977-->
        <title>CFrameWndEx::AddPane</title>
        <content>
            <para>Registers a control bar with the docking manager.</para>
            <legacySyntax>BOOL AddPane(
    CBasePane* pControlBar,
    BOOL bTail=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pControlBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A control bar pane to register.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bTail</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if you want to add the control bar pane to the end of the list; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the control bar was successfully registered; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__adjustdockinglayout">
        <!--1107bc3d-459f-42cf-abc4-25e9357efb54-->
        <title>CFrameWndEx::AdjustDockingLayout</title>
        <content>
            <para>Recalculates the layout of all panes that are docked to the frame window.</para>
            <legacySyntax>virtual void AdjustDockingLayout(
    HDWP hdwp=NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hdwp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to a structure that contains the positions of multiple windows. .</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The hdwp structure is initialized by the                         <externalLink> <linkText>BeginDeferWindowPos</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632672</linkUri>
                        </externalLink> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__delayupdateframemenu">
        <!--a9e00131-7133-42e5-ad3b-cb86a7447a82-->
        <title>CFrameWndEx::DelayUpdateFrameMenu</title>
        <content>
            <para>Sets the frame menu and then updates it when command processing is idle.</para>
            <legacySyntax>virtual void DelayUpdateFrameMenu( HMENU hMenuAlt );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>hMenuAlt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to an alternative menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__dockpane">
        <!--77214502-2872-4230-bb7f-71ad5934c8e9-->
        <title>CFrameWndEx::DockPane</title>
        <content>
            <para>Docks the specified pane to the frame window.</para>
            <legacySyntax>void DockPane(
    CBasePane* pBar,
    UINT nDockBarID=0,
    LPCRECT lpRect=NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the control bar to be docked.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nDockBarID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the side of the frame window to dock to.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a constant Rect structure that specifies the window's screen position and size.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>nDockBarID</parameterReference> parameter can have one of the following values:</para>
                    <list class="bullet">
                        <listItem>
                            <para>AFX_IDW_DOCKBAR_TOP</para>
                        </listItem>
                        <listItem>
                            <para>AFX_IDW_DOCKBAR_BOTTOM</para>
                        </listItem>
                        <listItem>
                            <para>AFX_IDW_DOCKBAR_LEFT</para>
                        </listItem>
                        <listItem>
                            <para>AFX_IDW_DOCKBAR_RIGHT</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__dockpaneleftof">
        <!--92d9b686-e325-47e1-8bd8-fc66360cd99d-->
        <title>CFrameWndEx::DockPaneLeftOf</title>
        <content>
            <para>Docks the specified pane to the left of another pane.</para>
            <legacySyntax>BOOL DockPaneLeftOf(
    CPane* pBar,
    CPane* pLeftOf );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pane object to be docked.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pLeftOf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pane to the left of which to dock the pane specified by <parameterReference>pBar</parameterReference>. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if <parameterReference>pBar</parameterReference> is docked successfully. <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The method takes the toolbar specified by the <parameterReference>pBar</parameterReference> parameter and docks it at the left side of the toolbar specified by <parameterReference>pLeftOf</parameterReference> parameter.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enableautohidepanes">
        <!--db2ff5c1-a217-41ea-b867-ec4568c76f06-->
        <title>CFrameWndEx::EnableAutoHidePanes</title>
        <content>
            <para>Enables auto-hide mode for the pane when it is docked to the specified side of the main frame window.</para>
            <legacySyntax>BOOL EnableAutoHidePanes( DWORD dwDockStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>dwDockStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the side of the main frame window to which to dock the pane.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if a bar pane is successfully docked to the frame window side that is specified by <parameterReference>dwDockStyle</parameterReference>, <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <parameterReference>dwDockStyle</parameterReference> can have one of the following values:</para>
                    <list class="bullet">
                        <listItem>
                            <para>CBRS_ALIGN_TOP: allows the control bar to be docked to the top of the client area of a frame window.</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_BOTTOM: allows the control bar to be docked to the bottom of the client area of a frame window.</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_LEFT: allows the control bar to be docked to the left side of the client area of a frame window.</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_RIGHT: allows the control bar to be docked to the right side of the client area of a frame window.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enabledocking">
        <!--09ca1f1e-65f2-42b0-a283-c6c31da525a0-->
        <title>CFrameWndEx::EnableDocking</title>
        <content>
            <para>Enables the docking of the panes of the frame window.</para>
            <legacySyntax>BOOL EnableDocking( DWORD dwDockStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>dwDockStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the side of the main frame window where the pane bar docks.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if a bar pane can be successfully docked at the specified side. <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>dwDockStyle</parameterReference> parameter can have one of the following values:</para>
                    <list class="bullet">
                        <listItem>
                            <para>CBRS_ALIGN_TOP</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_BOTTOM</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_LEFT</para>
                        </listItem>
                        <listItem>
                            <para>CBRS_ALIGN_RIGHT</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enablefullscreenmainmenu">
        <!--715cb40b-4e8c-4f13-9c31-37054906ee14-->
        <title>CFrameWndEx::EnableFullScreenMainMenu</title>
        <content>
            <para>Shows or hides the main menu in a full screen mode.</para>
            <legacySyntax>void EnableFullScreenMainMenu( BOOL bEnableMenu );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnableMenu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to show the main menu in a full screen mode, <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enablefullscreenmode">
        <!--2b24a30e-acb4-48df-872d-6f836ec790a6-->
        <title>CFrameWndEx::EnableFullScreenMode</title>
        <content>
            <para>Enables the full-screen mode for the frame window.</para>
            <legacySyntax>void EnableFullScreenMode( UINT uiFullScreenCmd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiFullScreenCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of a command that enables and disables the full screen mode.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In the full-screen mode, all docking control bars, toolbars and menu are hidden and the active view is resized to occupy the full-screen.</para>
                    <para>When you enable the full-screen mode, you must specify an ID of the command that enables or disables the full-screen mode. You can call <unmanagedCodeEntityReference>EnableFullScreenMode </unmanagedCodeEntityReference>from the main frame's <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference> function. When a frame window is being switched to a full-screen mode, the framework creates a floating toolbar with one button that has the specified command ID.</para>
                    <para>If you want to keep the main menu on the screen, call <link xlink:href="#cframewndex__enablefullscreenmainmenu">EnableFullScreenMainMenu</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enableloaddockstate">
        <!--472cc44d-44e1-4556-a442-e9394ddda7e1-->
        <title>CFrameWndEx::EnableLoadDockState</title>
        <content>
            <para>Enables or disables the loading of the docking state.</para>
            <legacySyntax>void EnableLoadDockState(
    BOOL bEnable=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable the loading of the docking state, <languageKeyword>FALSE</languageKeyword> to disable the loading of the docking state.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__enablepanemenu">
        <!--190123b7-888e-473e-a294-833c66dc00af-->
        <title>CFrameWndEx::EnablePaneMenu</title>
        <content>
            <para>Enables or disables the automatic handling of the pane menu.</para>
            <legacySyntax>void EnablePaneMenu(
    BOOL bEnable,
    UINT uiCustomizeCmd,
    const CString&amp; strCustomizeLabel,
    UINT uiViewToolbarsMenuEntryID,
    BOOL bContextMenuShowsToolbarsOnly=FALSE,
    BOOL bViewMenuShowsToolbarsOnly=FALSE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable the automatic handling of the control bar pop-up menus; <languageKeyword>FALSE</languageKeyword> to disable the automatic handling of the control bar pop-up menus.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiCustomizeCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the <ui>Customize</ui> menu item. </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>strCustomizeLabel</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The label to be displayed for the <ui>Customize</ui> menu item </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewToolbarsMenuEntryID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of a toolbar menu item that opens the pop-up menu in the control bar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bContextMenuShowsToolbarsOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the control bar context menu displays the list of toolbars only. If <languageKeyword>FALSE</languageKeyword>, the menu displays the list of the toolbars and the docking bars.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bViewMenuShowsToolbarsOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the control bar menu displays the list of the toolbars only. If <languageKeyword>FALSE</languageKeyword>, the menu displays the list of the toolbars and the docking bars.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getactivepopup">
        <!--6a01deef-512b-4cc8-91d7-c71815690246-->
        <title>CFrameWndEx::GetActivePopup</title>
        <content>
            <para>Returns a pointer to the currently displayed pop-up menu.</para>
            <legacySyntax>CMFCPopupMenu* GetActivePopup() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the currently displayed pop-up menu; otherwise <languageKeyword>NULL</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getdefaultresid">
        <!--4ea383aa-01de-4865-9e74-801d841b4d62-->
        <title>CFrameWndEx::GetDefaultResId</title>
        <content>
            <para>Returns the resource ID that you specified when the framework loaded the frame window.</para>
            <legacySyntax>UINT GetDefaultResId() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The resource ID value that the user specified when the framework loaded the frame window. Zero if the frame window does not have a menu bar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getdockingmanager">
        <!--84b237a5-3da3-45eb-ba01-83398fca6db4-->
        <title>CFrameWndEx::GetDockingManager</title>
        <content>
            <para>Retrieves the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager</link> object for the frame window.</para>
            <legacySyntax>CDockingManager* GetDockingManager();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager</link>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The frame window creates and uses a <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager</link> object to manage child window docking.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getmenubar">
        <!--6cd10a2a-c995-4c58-80f7-0af986c2f186-->
        <title>CFrameWndEx::GetMenuBar</title>
        <content>
            <para>Returns a pointer to the menu bar object attached to the frame window.</para>
            <legacySyntax>const CMFCMenuBar* GetMenuBar() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the menu bar object attached to the frame window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getpane">
        <!--17e1e36f-bbe0-443c-9c7a-50745986b49c-->
        <title>CFrameWndEx::GetPane</title>
        <content>
            <para>Returns a pointer to the pane that has the specified ID.</para>
            <legacySyntax>CBasePane* GetPane( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the pane that has the specified ID. <languageKeyword>NULL</languageKeyword> if no such pane exists.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__getribbonbar">
        <!--98387701-0113-4a3b-af1a-a04f142c80c5-->
        <title>CFrameWndEx::GetRibbonBar</title>
        <content>
            <para>Retrieves the ribbon bar control for the frame.</para>
            <legacySyntax>CMFCRibbonBar* GetRibbonBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the <link xlink:href="a65d06fa-1a28-4cc0-8971-bc9d7c9198fe">CMFCRibbonBar</link> for the frame.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__gettearoffbars">
        <!--16b7f9bd-da22-44df-b07a-5463a367fef7-->
        <title>CFrameWndEx::GetTearOffBars</title>
        <content>
            <para>Returns a list of pane objects that are in a tear-off state.</para>
            <legacySyntax>const CObList&amp; GetTearOffBars() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to <unmanagedCodeEntityReference>CObList</unmanagedCodeEntityReference> object that contains a collection of pointers to the pane objects that are in a tear-off state.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__gettoolbarbuttontooltiptext">
        <!--44eb7c97-9d39-48b2-930e-e7d32a120035-->
        <title>CFrameWndEx::GetToolbarButtonToolTipText</title>
        <content>
            <para>Called by the framework when the application displays the tooltip for a toolbar button.</para>
            <legacySyntax>virtual BOOL GetToolbarButtonToolTipText(
    CMFCToolBarButton* pButton,
    CString&amp; strTTText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a toolbar button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>strTTText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The tooltip text to display for the button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the tooltip has been displayed. <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, this method does nothing. Override this method if you want to display the tooltip for the toolbar button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__insertpane">
        <!--7cb7a338-bad5-4542-87b2-bf4301fa9526-->
        <title>CFrameWndEx::InsertPane</title>
        <content>
            <para>Inserts a pane into a list of control bars and registers it with the docking manager.</para>
            <legacySyntax>BOOL InsertPane(
    CBasePane* pControlBar,
    CBasePane* pTarget,
    BOOL bAfter=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pControlBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a control bar to be inserted into the list of control bars and registered with the docking manager.</para>
                        </definition>
                        <definedTerm> <parameterReference>pTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a control bar before or after which to insert the pane.</para>
                        </definition>
                        <definedTerm> <parameterReference>bAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if you want to insert <parameterReference>pControlBar</parameterReference> after <parameterReference>pTarget</parameterReference>, <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the control bar was successfully inserted and registered, <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You must register each control bar by using the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager Class</link> to take a part in the docking layout. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__isfullscreen">
        <!--dd4c37d8-ce75-4b15-99c3-e0e61bcc7632-->
        <title>CFrameWndEx::IsFullScreen</title>
        <content>
            <para>Determines whether the frame window is in full screen mode.</para>
            <legacySyntax>BOOL IsFullScreen() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the frame window is in full screen mode; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can set the full screen mode by calling the <link xlink:href="#cframewndex__enablefullscreenmode">EnableFullScreenMode</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ismenubaravailable">
        <!--bae7df32-bd35-4ccc-9b01-07a63724223f-->
        <title>CFrameWndEx::IsMenuBarAvailable</title>
        <content>
            <para>Determines whether the pointer to the menu bar object is valid.</para>
            <legacySyntax>BOOL IsMenuBarAvailable() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the frame window has a menu bar; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ispointneardocksite">
        <!--72836492-a22c-48bc-aca5-5a6ec90f8189-->
        <title>CFrameWndEx::IsPointNearDockSite</title>
        <content>
            <para>Determines whether the point is located in an alignment zone.</para>
            <legacySyntax>BOOL IsPointNearDockSite(
    CPoint point,
    DWORD&amp; dwBarAlignment,
    BOOL&amp; bOuterEdge ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The position of the point.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>dwBarAlignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Where the point is aligned. See the table in the Remarks section for possible values.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>bOuterEdge</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the point is located close to the frame border; <languageKeyword>FALSE</languageKeyword> if the point is located in a client area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the point is located in an alignment zone; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The following table lists the possible values for the <parameterReference>dwBarAlignment</parameterReference> parameter.</para>
                    <definitionTable>
                        <definedTerm> <languageKeyword>CBRS_ALIGN_TOP</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Aligned to the top.</para>
                        </definition>
                        <definedTerm> <languageKeyword>CBRS_ALIGN_RIGHT</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Aligned to the right.</para>
                        </definition>
                        <definedTerm> <languageKeyword>CBRS_ALIGN_BOTTOM</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Aligned to the bottom.</para>
                        </definition>
                        <definedTerm> <languageKeyword>CBRS_ALIGN_LEFT</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Aligned to the left.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__isprintpreview">
        <!--1ec848b3-26cd-44aa-8689-e72f5d08fc33-->
        <title>CFrameWndEx::IsPrintPreview</title>
        <content>
            <para>Determines whether the frame window is in print preview mode.</para>
            <legacySyntax>BOOL IsPrintPreview();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the frame window is in print preview mode; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__loadframe">
        <!--3f8d7a45-25d6-43fe-9bdd-b5eb7a99c245-->
        <title>CFrameWndEx::LoadFrame</title>
        <content>
            <para>This method is called after construction to create the frame window and load its resources. </para>
            <legacySyntax>virtual BOOL LoadFrame(
    UINT nIDResource,
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,
    CWnd* pParentWnd = NULL,
    CCreateContext* pContext = NULL);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID that is used to load all frame resources.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwDefaultStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The default frame window style.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the parent window of the frame. </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <link xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext</link> class that is used by the framework during application creation.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method was successful; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__negotiateborderspace">
        <!--9f5de915-f612-4162-986f-daafcdac217b-->
        <title>CFrameWndEx::NegotiateBorderSpace</title>
        <content>
            <para>Implements OLE client border negotiation.</para>
            <legacySyntax>virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,
    LPRECT lpRectBorder );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nBorderCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The border negotiation command. See the Remarks section for possible values.</para>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>lpRectBorder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Dimensions of the border.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the layout must be recalculated; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The following table lists the possible values for the <parameterReference>nBorderCmd</parameterReference> parameter.</para>
                    <definitionTable>
                        <definedTerm> <languageKeyword>borderGet</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Get available OLE client space.</para>
                        </definition>
                        <definedTerm> <languageKeyword>borderRequest</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Request OLE client space.</para>
                        </definition>
                        <definedTerm> <languageKeyword>borderSet</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>Set OLE client space.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onactivate">
        <!--7f8b2712-a238-4a31-b263-c19a003134ce-->
        <title>CFrameWndEx::OnActivate</title>
        <content>
            <para>The framework calls this method when user input is switched to or away from the frame.</para>
            <legacySyntax>afx_msg void OnActivate(
    UINT nState,
    CWnd* pWndOther,
    BOOL bMinimized );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Whether the frame is active or inactive. See the table in the Remarks section for possible values.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pWndOther</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to another window that is switching user input with the current one.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bMinimized</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The minimized state of the frame. <languageKeyword>TRUE</languageKeyword> if the frame is minimized; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The following table lists the possible values for the <parameterReference>nState</parameterReference> parameter.</para>
                    <definitionTable>
                        <definedTerm> <languageKeyword>WA_ACTIVE</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The frame is selected by a method other than a mouse click.</para>
                        </definition>
                        <definedTerm> <languageKeyword>WA_CLICKACTIVE</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The frame is selected by a mouse click.</para>
                        </definition>
                        <definedTerm> <languageKeyword>WA_INACTIVE</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The frame is not selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onactivateapp">
        <!--481bc560-8135-46fb-9be9-cd8092c861be-->
        <title>CFrameWndEx::OnActivateApp</title>
        <content>
            <para>Called by the framework when the application is either selected or deselected.</para>
            <legacySyntax>afx_msg void OnActivateApp(
    BOOL bActive,
    DWORD dwThreadID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bActive</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the application is selected; <languageKeyword>FALSE</languageKeyword> if the application is not selected.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwThreadID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onchangevisualmanager">
        <!--dd6f528b-bdbd-413e-a769-cd93aa08b65f-->
        <title>CFrameWndEx::OnChangeVisualManager</title>
        <content>
            <para>Called by the framework when a change to the frame requires a change to the visual manager.</para>
            <legacySyntax>afx_msg LRESULT OnChangeVisualManager(
    WPARAM wParam,
    LPARAM lParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onclose">
        <!--f432ef51-77df-4464-97c4-c393b1753a48-->
        <title>CFrameWndEx::OnClose</title>
        <content>
            <para>The framework calls this method to close the frame. </para>
            <legacySyntax>afx_msg void OnClose();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the frame is in print preview mode, it sends a Windows message to close the print preview; otherwise, if the frame hosts an OLE client, the client is deactivated.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onclosedockingpane">
        <!--611c64d3-6a5f-41ee-a418-8138b939f687-->
        <title>CFrameWndEx::OnCloseDockingPane</title>
        <content>
            <para>Called by the framework when the user clicks the <ui>Close</ui> button on a docking pane.</para>
            <legacySyntax>virtual BOOL OnCloseDockingPane(
    CDockablePane* pPane);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the docking bar can be closed. <languageKeyword>FALSE</languageKeyword> otherwise</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implement does nothing. Override this method if you want to handle the hiding of the docking bar. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__oncloseminiframe">
        <!--e4a7d642-3adb-411f-847e-bfa3e7e471cd-->
        <title>CFrameWndEx::OnCloseMiniFrame</title>
        <content>
            <para>Called by the framework when the user clicks the <ui>Close</ui> button on a floating mini frame window.</para>
            <legacySyntax>virtual BOOL OnCloseMiniFrame(
    CPaneFrameWnd* pWnd);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if a floating mini frame window can be closed. <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation does nothing. Override this method if you want to process the hiding of a floating mini frame window. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onclosepopupmenu">
        <!--07ffc236-db46-4d6b-b5ff-a1dd6a173841-->
        <title>CFrameWndEx::OnClosePopupMenu</title>
        <content>
            <para>Called by the framework when an active pop-up menu processes a WM_DESTROY message.</para>
            <legacySyntax>virtual void OnClosePopupMenu( CMFCPopupMenu* pMenuPopup );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMenuPopup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a pop-up menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework sends a WM_DESTROY message when it is about to close the window. Override this method if you want to handle notifications from <unmanagedCodeEntityReference>CMFCPopupMenu</unmanagedCodeEntityReference> objects that belong to the frame window when a <unmanagedCodeEntityReference>CMFCPopupMenu</unmanagedCodeEntityReference> object is processing a <unmanagedCodeEntityReference>WM_DESTROY</unmanagedCodeEntityReference> message sent by the framework when the window is being closed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__oncmdmsg">
        <!--693915b6-c493-4af2-9cf0-5997777e7e46-->
        <title>CFrameWndEx::OnCmdMsg</title>
        <content>
            <para>Dispatches command messages.</para>
            <legacySyntax>virtual BOOL OnCmdMsg(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Command message category.</para>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>pExtra</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a command object.</para>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>pHandlerInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a command handler structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the command message was handled; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__oncontexthelp">
        <!--b1c6582d-0c12-4caf-817f-5526684c7ce7-->
        <title>CFrameWndEx::OnContextHelp</title>
        <content>
            <para>Called by the framework to display context-related help.</para>
            <legacySyntax>afx_msg void OnContextHelp();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__oncreate">
        <!--3fc84b27-0ea5-4fa1-8c72-7d5b929934e3-->
        <title>CFrameWndEx::OnCreate</title>
        <content>
            <para>Called by the framework after the frame is created. </para>
            <legacySyntax>afx_msg int OnCreate( LPCREATESTRUCT lpCreateStruct );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpCreateStruct</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the <link xlink:href="028c7b5e-4fdc-48da-a550-d3e4f9e6cc85">CREATESTRUCT</link> for the new frame.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>0 to continue with the frame creation; -1 to destroy the frame.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ondestroy">
        <!--0484d15a-8d3c-48e6-aa27-33b263ae2593-->
        <title>CFrameWndEx::OnDestroy</title>
        <content>
            <para>Called by the framework when the frame is destroyed. </para>
            <legacySyntax>afx_msg void OnDestroy();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The accelerator table and all windows are destroyed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ondrawmenuimage">
        <!--50f4f13a-b38c-46b1-91c1-76b77a903d3a-->
        <title>CFrameWndEx::OnDrawMenuImage</title>
        <content>
            <para>Called by the framework when the application draws the image associated with a menu item.</para>
            <legacySyntax>virtual BOOL OnDrawMenuImage(
    CDC* pDC,
    const CMFCToolBarMenuButton* pMenuButton,
    const CRect&amp; rectImage );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pMenuButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a menu button whose image is being rendered.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rectImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>Rect</unmanagedCodeEntityReference> structure that specifies the screen position and size of the image.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the framework successfully renders the image; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method if you want to customize the image rendering for the menu items that belong to the menu bar owned by the <unmanagedCodeEntityReference>CFrameWndEx</unmanagedCodeEntityReference> derived object. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ondrawmenulogo">
        <!--62789935-0664-4db8-8c52-3f4442454e80-->
        <title>CFrameWndEx::OnDrawMenuLogo</title>
        <content>
            <para>Called by the framework when a <unmanagedCodeEntityReference>CMFCPopupMenu</unmanagedCodeEntityReference> object processes a WM_PAINT message.</para>
            <legacySyntax>virtual void OnDrawMenuLogo(
    CDC* pDC,
    CMFCPopupMenu* pMenu,
    const CRect&amp; rectLogo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pMenu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the menu item.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rectLogo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a constant <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> structure that specifies the screen position and size of the menu logo.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if you want to display a logo on the pop-up menu that belongs to the menu bar owned by the <unmanagedCodeEntityReference>CFrameWndEx</unmanagedCodeEntityReference> derived object. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ondwmcompositionchanged">
        <!--63a20f60-b6d5-4984-a540-6d614823f5d7-->
        <title>CFrameWndEx::OnDWMCompositionChanged</title>
        <content>
            <para>Called by the framework when Desktop Window Manager (DWM) composition has been enabled or disabled.</para>
            <legacySyntax>afx_msg LRESULT OnDWMCompositionChanged(
    WPARAM wp,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onexitsizemove">
        <!--2c884e8c-079f-42ee-9e3e-31886de1470d-->
        <title>CFrameWndEx::OnExitSizeMove</title>
        <content>
            <para>Called by the framework when the frame stops moving or resizing.</para>
            <legacySyntax>LRESULT OnExitSizeMove(
    WPARAM wp,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ongetminmaxinfo">
        <!--c8f33a54-98e3-4bdf-9a6d-c78c4d39d7fb-->
        <title>CFrameWndEx::OnGetMinMaxInfo</title>
        <content>
            <para>Called by the framework when the frame is resized to set window dimension limits.</para>
            <legacySyntax>afx_msg void OnGetMinMaxInfo( MINMAXINFO FAR* lpMMI );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpMMI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>MINMAXINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632605</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onidleupdatecmdui">
        <!--0195dbb3-b7bf-439b-af55-2c4ea5639d5f-->
        <title>CFrameWndEx::OnIdleUpdateCmdUI</title>
        <content>
            <para>Called by the framework to update the frame display when command processing is idle.</para>
            <legacySyntax>afx_msg LRESULT OnIdleUpdateCmdUI(
    WPARAM wParam = 0,
    LPARAM lParam = 0);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onlbuttondown">
        <!--04dae65e-0ff3-4684-ae98-53daf2585268-->
        <title>CFrameWndEx::OnLButtonDown</title>
        <content>
            <para>The framework calls this method when the user presses the left mouse button. </para>
            <legacySyntax>afx_msg void OnLButtonDown(
    UINT nFlags,
    CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the user pressed modifier keys. For possible values see the parameter <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>WM_LBUTTONDOWN Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645607</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x and y coordinates of the pointer, relative to the upper-left corner of the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onlbuttonup">
        <!--b4eb01f9-7b42-414d-84bd-2764ad55ba97-->
        <title>CFrameWndEx::OnLButtonUp</title>
        <content>
            <para>The framework calls this method when the user releases the left mouse button. </para>
            <legacySyntax>afx_msg void OnLButtonUp(
    UINT nFlags,
    CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the user pressed modifier keys. For possible values see the parameter <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>WM_LBUTTONUP Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645608</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x and y coordinates of the pointer, relative to the upper-left corner of the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onmenubuttontoolhittest">
        <!--0d66c7f6-d515-4160-b5ba-3a1ac1a10e84-->
        <title>CFrameWndEx::OnMenuButtonToolHitTest</title>
        <content>
            <para>Called by the framework when a <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> object processes a <unmanagedCodeEntityReference>WM_NCHITTEST</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual BOOL OnMenuButtonToolHitTest(
    CMFCToolBarButton* pButton,
    TOOLINFO* pTI );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the tool bar button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>pTI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a tool information structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the application fills the <parameterReference>pTI</parameterReference> parameter. <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method if you want to provide a tooltip information about a specific menu item.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onmenuchar">
        <!--b6e6ed35-359a-43a2-a58e-bd6c12a1af09-->
        <title>CFrameWndEx::OnMenuChar</title>
        <content>
            <para>Called by the framework when a menu is displayed and the user presses a key that does not correspond to a command.</para>
            <legacySyntax>afx_msg LRESULT OnMenuChar(
    UINT nChar,
    UINT nFlags,
    CMenu* pMenu );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Character code of the pressed key.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the <languageKeyword>MF_POPUP</languageKeyword> flag if the menu displayed is a submenu; contains the <languageKeyword>MF_SYSMENU</languageKeyword> flag if the menu displayed is a control menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pMenu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The high-order word must be one of the following values.</para>
                    <definitionTable>
                        <definedTerm> <languageKeyword>0</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The framework should ignore the keystroke.</para>
                        </definition>
                        <definedTerm> <languageKeyword>1</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The framework should close the menu.</para>
                        </definition>
                        <definedTerm> <languageKeyword>2</languageKeyword>
                        </definedTerm>
                        <definition>
                            <para>The framework should select one of the items displayed in the menu. The low-order word contains the ID of the command to select.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onmousemove">
        <!--6590debd-cd74-42b2-a093-214562b681a4-->
        <title>CFrameWndEx::OnMouseMove</title>
        <content>
            <para>The framework calls this method when the pointer moves.</para>
            <legacySyntax>afx_msg void OnMouseMove(
    UINT nFlags,
    CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether a user pressed modifier keys. For possible values see the parameter <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>WM_MOUSEMOVE Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645616</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x and y coordinates of the pointer relative to the upper-left corner of the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onmoveminiframe">
        <!--764834dd-29c9-4387-87f9-84a621dc3e74-->
        <title>CFrameWndEx::OnMoveMiniFrame</title>
        <content>
            <para>Called by the framework when a pane window moves.</para>
            <legacySyntax>virtual BOOL OnMoveMiniFrame( CWnd* pFrame );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pFrame</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the <link xlink:href="ea3423a3-2763-482e-b763-817036ded10d">CPaneFrameWnd</link> pane window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the pane window was not docked; <languageKeyword>FALSE</languageKeyword> if the pane window was docked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onncactivate">
        <!--ae1c53e6-5480-46a1-be0e-b016ef00a968-->
        <title>CFrameWndEx::OnNcActivate</title>
        <content>
            <para>Called by the framework when the non-client area of the frame must be redrawn to indicate a change in the active state.</para>
            <legacySyntax>afx_msg BOOL OnNcActivate( BOOL bActive );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bActive</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to draw the frame active; <languageKeyword>FALSE</languageKeyword> to draw the frame inactive.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero to continue with default processing; 0 to prevent the non-client area from being deactivated.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onnccalcsize">
        <!--0f2f06f8-096f-40b4-9b04-b70e52ead0b4-->
        <title>CFrameWndEx::OnNcCalcSize</title>
        <content>
            <para>Called by the framework when the size and position of the client area must be calculated.</para>
            <legacySyntax>afx_msg void OnNcCalcSize(
    BOOL bCalcValidRects,
    NCCALCSIZE_PARAMS FAR* lpncsp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bCalcValidRects</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> when the application must specify a valid client area; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lpncsp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <languageKeyword>NCCALCSIZE_PARAMS</languageKeyword> structure that contains frame dimension changes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onnchittest">
        <!--ec3a2105-0dfb-4f7b-88f1-258f1bd764ab-->
        <title>CFrameWndEx::OnNcHitTest</title>
        <content>
            <para>Called by the framework when the pointer moves or when a mouse button is pressed or released.</para>
            <legacySyntax>afx_msg LRESULT OnNcHitTest( CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location of the pointer in screen coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer hit enumerated value. For a list of possible values see                         <externalLink> <linkText>WM_NCHITTEST Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645618</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onncmousemove">
        <!--f44a9ede-6c6d-4f82-89df-14dc08aec26c-->
        <title>CFrameWndEx::OnNcMouseMove</title>
        <content>
            <para>Called by the framework when the pointer moves in a non-client area.</para>
            <legacySyntax>afx_msg void OnNcMouseMove(
    UINT nHitTest,
    CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nHitTest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer hit enumerated value. For a list of possible values see                                 <externalLink> <linkText>WM_NCHITTEST Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms645618</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location of the pointer in screen coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onncpaint">
        <!--10d72c36-3063-48d6-a952-20656f904d9a-->
        <title>CFrameWndEx::OnNcPaint</title>
        <content>
            <para>Called by the framework when the non-client area must be painted.</para>
            <legacySyntax>afx_msg void OnNcPaint();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onpanecheck">
        <!--591c392e-3dc1-4219-bd30-c13b07edd753-->
        <title>CFrameWndEx::OnPaneCheck</title>
        <content>
            <para>Called by the framework to control the visibility of a pane.</para>
            <legacySyntax>afx_msg BOOL OnPaneCheck( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Control ID of a pane.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the command was handled; <languageKeyword>FALSE</languageKeyword> to continue with command processing.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onpostpreviewframe">
        <!--7cbd3b92-118c-4ea5-af4e-2ea13a0bdbdb-->
        <title>CFrameWndEx::OnPostPreviewFrame</title>
        <content>
            <para>Called by the framework when the user changes the print preview mode.</para>
            <legacySyntax>afx_msg LRESULT OnPostPreviewFrame(
    WPARAM wParam,
    LPARAM lParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> when the frame is in print preview mode; <languageKeyword>FALSE</languageKeyword> when print preview mode is off.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onpowerbroadcast">
        <!--cbcf7398-d896-4d8c-8f04-9d9789f50933-->
        <title>CFrameWndEx::OnPowerBroadcast</title>
        <content>
            <para>Called by the framework when a power management event occurs.</para>
            <legacySyntax>afx_msg LRESULT OnPowerBroadcast(
    WPARAM wp,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The power management event. For a list of possible values see                                 <externalLink> <linkText>WM_POWERBROADCAST Message</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/aa373247</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Result from calling the default window procedure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsetmenu">
        <!--f05251ce-b582-4a4a-b815-a5eeb0dab0e7-->
        <title>CFrameWndEx::OnSetMenu</title>
        <content>
            <para>Called by the framework to replace the frame window menu.</para>
            <legacySyntax>afx_msg LRESULT OnSetMenu(
    WPARAM wp,
    LPARAM lp );

BOOL OnSetMenu(
    HMENU hmenu );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the new frame window menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the new window menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>hmenu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the new frame window menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>LRESULT</languageKeyword> is the result from calling the default window procedure.</para>
                    <para> <languageKeyword>BOOL</languageKeyword> is <languageKeyword>TRUE</languageKeyword> if the event was handled; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsetpreviewmode">
        <!--239a4402-2cfb-45d9-a79e-9bdd9428a2ea-->
        <title>CFrameWndEx::OnSetPreviewMode</title>
        <content>
            <para>Called by the framework to set the print preview mode for the frame.</para>
            <legacySyntax>virtual void OnSetPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bPreview</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable print preview; <languageKeyword>FALSE</languageKeyword> to disable print preview.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <languageKeyword>CPrintPreviewState</languageKeyword> frame state structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsettext">
        <!--3aca8d5c-2c36-46a6-a644-1478536f470f-->
        <title>CFrameWndEx::OnSetText</title>
        <content>
            <para>Called by the framework to set the text of a window.</para>
            <legacySyntax>afx_msg LRESULT OnSetText(
    WPARAM wParam,
    LPARAM lParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the text for the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Return value from a call to                         <externalLink> <linkText>DefWindowProc</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms633572</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onshowcustomizepane">
        <!--a6c376e1-8f6a-4584-82e4-407465d0168c-->
        <title>CFrameWndEx::OnShowCustomizePane</title>
        <content>
            <para>Called by the framework when it displays a <unmanagedCodeEntityReference>QuickCustomizePane</unmanagedCodeEntityReference>.</para>
            <legacySyntax>virtual BOOL OnShowCustomizePane(
    CMFCPopupMenu* pMenuPane,
    UINT uiToolbarID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenuPane</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the quick customize pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiToolbarID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control ID of the toolbar to customize.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method always return <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The quick customize menu is a pop-up menu that appears when you click the toolbar’s customize button</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onshowpanes">
        <!--7cb6286e-8e37-4044-8644-13d2052cfc88-->
        <title>CFrameWndEx::OnShowPanes</title>
        <content>
            <para>Called by the framework to show or hide panes.</para>
            <legacySyntax>virtual BOOL OnShowPanes( BOOL bShow );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the application shows the panes; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method always return <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation shows the panes if <parameterReference>bShow</parameterReference> is <languageKeyword>TRUE</languageKeyword> and the panes are hidden or when <parameterReference>bShow</parameterReference> is <languageKeyword>FALSE</languageKeyword> and the panes are visible.</para>
                    <para>The default implementation hides the panes if <parameterReference>bShow</parameterReference> is <languageKeyword>TRUE</languageKeyword> and the panes are visible or when <parameterReference>bShow</parameterReference> is <languageKeyword>FALSE</languageKeyword> and the panes are hidden.</para>
                    <para>Override this method in a derived class to execute custom code when the framework shows or hides panes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onshowpopupmenu">
        <!--f6d3ef56-7dd7-49cc-b3f2-f8e4776d9b2e-->
        <title>CFrameWndEx::OnShowPopupMenu</title>
        <content>
            <para>Called by the framework when it displays a pop-up menu.</para>
            <legacySyntax>virtual BOOL OnShowPopupMenu(
    CMFCPopupMenu* pMenu);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a pop-up menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the pop-up menu is visible; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method in a derived class to execute custom code when the framework displays a pop-up menu. For example, override this method to change the background color of the commands in a pop-up menu.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsize">
        <!--c36d08b8-0223-40f3-a863-fc18ff3e26c3-->
        <title>CFrameWndEx::OnSize</title>
        <content>
            <para>Called by the framework after the frame's size changes.</para>
            <legacySyntax>afx_msg void OnSize(
    UINT nType,
    int cx,
    int cy );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The type of resizing. For possible values see the parameter <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>WM_SIZE Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632646</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>New width of the frame in pixels.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>New height of the frame in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsizing">
        <!--cb5064d2-37dd-4b73-bcfe-d82e7a5251c6-->
        <title>CFrameWndEx::OnSizing</title>
        <content>
            <para>Called by the framework when the user resizes the frame.</para>
            <legacySyntax>afx_msg void OnSizing(
    UINT fwSide,
    LPRECT pRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>fwSide</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The edge of the frame that is moved. See the parameter <parameterReference>wParam</parameterReference> in                                 <externalLink> <linkText>WM_SIZING Notification</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632647</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>pRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <link xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</link> or <link xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</link> structure that contains the frame's coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onsyscolorchange">
        <!--8e7bbbe5-7a7b-4f16-9307-3af769c378d7-->
        <title>CFrameWndEx::OnSysColorChange</title>
        <content>
            <para>Called by the framework when the system colors change.</para>
            <legacySyntax> void OnSysColorChange();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ontearoffmenu">
        <!--ca694fca-b819-4d6e-ba92-f60c1d5eee1c-->
        <title>CFrameWndEx::OnTearOffMenu</title>
        <content>
            <para>Called by the framework when the application displays a menu that has a tear-off bar.</para>
            <legacySyntax>virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,
    CPane* pBar);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenuPopup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a pop-up menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a tear-off bar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the pop-up menu with the tear-off bar is enabled; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method in a derived class to execute custom code when the framework displays a control bar.</para>
                    <para>The default implementation does nothing and returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ontoolbarcontextmenu">
        <!--feca5651-cfbe-4e17-92b0-c478763aef39-->
        <title>CFrameWndEx::OnToolbarContextMenu</title>
        <content>
            <para>Called by the framework to build a toolbar pop-up menu.</para>
            <legacySyntax>afx_msg LRESULT OnToolbarContextMenu(
    WPARAM wp,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Always returns 1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ontoolbarcreatenew">
        <!--507f34b1-b3ce-4483-a04d-3c070128978f-->
        <title>CFrameWndEx::OnToolbarCreateNew</title>
        <content>
            <para>The framework calls this method to create a new toolbar.</para>
            <legacySyntax>afx_msg LRESULT OnToolbarCreateNew(
    WPARAM wp,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the text for the title bar of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the new toolbar; or <languageKeyword>NULL</languageKeyword> if a toolbar was not created.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__ontoolbardelete">
        <!--962588f9-6252-464b-8df1-17809e0a8d6b-->
        <title>CFrameWndEx::OnToolbarDelete</title>
        <content>
            <para>Called by the framework when a toolbar is deleted.</para>
            <legacySyntax>afx_msg LRESULT OnToolbarDelete(
    WPARAM,
    LPARAM lp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in]</definedTerm>
                        <definition>
                            <para>This parameter is not used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar was deleted; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onupdateframemenu">
        <!--ea2a2dd1-8b4e-44fb-828e-81a515b7a43a-->
        <title>CFrameWndEx::OnUpdateFrameMenu</title>
        <content>
            <para>Called by the framework to set the frame menu.</para>
            <legacySyntax>virtual void OnUpdateFrameMenu( HMENU hMenuAlt );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>hMenuAlt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the alternative menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onupdateframetitle">
        <!--9df9d104-d8a7-4af2-91e3-dcf393a258d2-->
        <title>CFrameWndEx::OnUpdateFrameTitle</title>
        <content>
            <para>The framework calls this method to update the title bar of the frame window.</para>
            <legacySyntax>virtual void OnUpdateFrameTitle( BOOL bAddToTitle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bAddToTitle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to add the active document title to the frame window title bar; otherwise <languageKeyword>FALSE.</languageKeyword>
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onupdatepanemenu">
        <!--d267532f-205a-4e7e-813f-7a602c41f951-->
        <title>CFrameWndEx::OnUpdatePaneMenu</title>
        <content>
            <para>Called by the framework to update the pane menu.</para>
            <legacySyntax>afx_msg void OnUpdatePaneMenu( CCmdUI* pCmdUI );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pCmdUI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the pane user interface object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__onwindowposchanged">
        <!--c413dda3-fbad-4de2-8c88-39ccba50ec11-->
        <title>CFrameWndEx::OnWindowPosChanged</title>
        <content>
            <para>Called by the framework when the frame size, position, or z-order has changed because of a call to a window management method. </para>
            <legacySyntax>afx_msg void OnWindowPosChanged( WINDOWPOS FAR* lpwndpos );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpwndpos</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <link xlink:href="a4ea7cd9-c4c2-4480-9c55-cbbff72195e1">WINDOWPOS</link> structure that contains the new size and position.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__panefrompoint">
        <!--a17cf0eb-9cc4-44ac-847b-43826b23f74e-->
        <title>CFrameWndEx::PaneFromPoint</title>
        <content>
            <para>Searches each pane for the given point.</para>
            <legacySyntax>CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    bool bExactBar,
    CRuntimeClass* pRTCBarType ) const;
CBasePane* PaneFromPoint(
    CPoint point,
    int nSensitivity,
    DWORD&amp; dwAlignment,
    CRuntimeClass* pRTCBarType ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The screen coordinates of the point to check.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nSensitivity</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Expand the bounding rectangle of each control bar by this amount when searching for point.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bExactBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to ignore the <parameterReference>nSensitivity</parameterReference> parameter; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pRTCBarType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If not <languageKeyword>NULL</languageKeyword>, the method searches only the control bars of the specified type.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>dwAlignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If successful, this parameter contains the side of the control bar that is closest to the specified point. Otherwise, this parameter is not initialized.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a control bar that contains the <parameterReference>point</parameterReference>; <languageKeyword>NULL</languageKeyword> if no control is found.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method searches all the control bars in your application for a <parameterReference>point</parameterReference>.</para>
                    <para>Use <parameterReference>nSensitivity</parameterReference> to increase the size of the search area. Use <parameterReference>pRTCBarType</parameterReference> to restrict the types of control bars that the method searches.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__pretranslatemessage">
        <!--1c71caf9-81e4-42a3-8bd0-4b20d1e2455a-->
        <title>CFrameWndEx::PreTranslateMessage</title>
        <content>
            <para>Handles specific window messages before they are dispatched.</para>
            <legacySyntax>virtual BOOL PreTranslateMessage( MSG* pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <link xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</link> structure that contains the message to process.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Non-zero if the message was handled and should not be dispatched; 0 if the message was not handled and should be dispatched.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__recalclayout">
        <!--92ccdeea-d2d9-426e-a427-196062e81edd-->
        <title>CFrameWndEx::RecalcLayout</title>
        <content>
            <para>Adjusts the layout of the frame and its child windows.</para>
            <legacySyntax>virtual void RecalcLayout(
    BOOL bNotify = TRUE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bNotify</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to notify the OLE client item about the layout change.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called when the size of the frame window has changed or when control bars are displayed or hidden.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__removepanefromdockmanager">
        <!--3462a0eb-78ac-4805-9b11-d3176f4b1194-->
        <title>CFrameWndEx::RemovePaneFromDockManager</title>
        <content>
            <para>Unregisters a pane and removes it from the docking manager.</para>
            <legacySyntax>void RemovePaneFromDockManager(
    CBasePane* pControlBar,
    BOOL bDestroy,
    BOOL bAdjustLayout,
    BOOL bAutoHide,
    CBasePane* pBarReplacement );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pControlBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the control bar pane to remove.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bDestroy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to destroy the control bar after removing it; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAdjustLayout</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to adjust the docking layout; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAutoHide</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the control bar is in auto-hide mode; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pBarReplacement</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a pane that replaces the removed pane.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to remove a control bar from the docking layout of the frame window.</para>
                    <para>The <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">docking manager</link> handles the layout of control bars. You must register each control bar with the docking manager by using the <link xlink:href="#cframewndex__addpane">AddControlBar</link> method or the <link xlink:href="#cframewndex__insertpane">InsertControlBar</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__setdockstate">
        <!--151a91f1-8e08-4839-8f68-47bf6efc7587-->
        <title>CFrameWndEx::SetDockState</title>
        <content>
            <para>Restores the docking layout to the docking state stored in the registry.</para>
            <legacySyntax>void SetDockState( const CDockState&amp; state );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>state</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The docking state. This parameter is ignored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__setprintpreviewframe">
        <!--5eb88850-650f-4be6-bb93-4526253fef8e-->
        <title>CFrameWndEx::SetPrintPreviewFrame</title>
        <content>
            <para>Sets the print preview frame window.</para>
            <legacySyntax>void SetPrintPreviewFrame( CFrameWnd* pWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a print preview frame window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__setuptoolbarmenu">
        <!--1c205b44-de8f-45f4-8633-3cc098b22282-->
        <title>CFrameWndEx::SetupToolbarMenu</title>
        <content>
            <para>Inserts user-defined commands into a toolbar menu.</para>
            <legacySyntax>void SetupToolbarMenu(
    CMenu&amp; menu,
    const UINT uiViewUserToolbarCmdFirst,
    const UINT uiViewUserToolbarCmdLast );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>menu</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CMenu</unmanagedCodeEntityReference> object to be modified.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewUserToolbarCmdFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The first user-defined command.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewUserToolbarCmdLast</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The last user-defined command.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework stores user-defined commands in a list. Use <parameterReference>uiViewUserToolbarCmdFirst</parameterReference> and <parameterReference>uiViewUserToolbarCmdList</parameterReference> to specify the indexes of the commands to insert.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__showfullscreen">
        <!--19006014-924b-4ca4-a802-e1a1ed2187f1-->
        <title>CFrameWndEx::ShowFullScreen</title>
        <content>
            <para>Switches the main frame between full-screen mode and regular mode.</para>
            <legacySyntax>void ShowFullScreen();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cframewndex__showpane">
        <!--22a9829e-8486-4c74-a99b-6272a0532a4e-->
        <title>CFrameWndEx::ShowPane</title>
        <content>
            <para>Shows or hides the specified pane.</para>
            <legacySyntax>void ShowPane(
    CBasePane* pBar,
    BOOL bShow,
    BOOL bDelay,
    BOOL bActivate );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the control bar to show or hide.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the application shows the control bar. Otherwise, the application hides the control bar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bDelay</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, delay the adjustment of the docking layout until the framework calls <link xlink:href="#cframewndex__adjustdockinglayout">AdjustDockingLayout</link>. Otherwise, recalculate the docking layout immediately.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bActivate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, make the control bar active. Otherwise, display the control bar in an inactive state.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewndex__updatecaption">
        <!--bcc4d453-ccb1-40a4-8b74-e709474d623e-->
        <title>CFrameWndEx::UpdateCaption</title>
        <content>
            <para>Called by the framework to update the window frame caption.</para>
            <legacySyntax>void UpdateCaption();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewndex__winhelp">
        <!--9c8652fb-c1b0-4bb4-8376-7264df2d05a9-->
        <title>CFrameWndEx::WinHelp</title>
        <content>
            <para>Invokes either the WinHelp application or context related help.</para>
            <legacySyntax>virtual void WinHelp(
    DWORD dwData,
    UINT nCmd = HELP_CONTEXT);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Data that depends on the <parameterReference>nCmd</parameterReference> parameter. For a list of possible values see                                 <externalLink> <linkText>WinHelp</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb762267</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The help command. For a list of possible values see                                 <externalLink> <linkText>WinHelp</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb762267</linkUri>
                                </externalLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7b6db805-a572-43fd-9046-0fa6e3663e63">Classes</link> <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CFrameWnd</legacyLink>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



