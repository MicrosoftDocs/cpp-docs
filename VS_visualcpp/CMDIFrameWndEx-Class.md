---
title: "CMDIFrameWndEx Class"
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
ms.assetid: dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0
caps.latest.revision: 35
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CMDIFrameWndEx Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Extends the functionality of <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CMDIFrameWnd</legacyLink>, a Windows Multiple Document Interface (MDI) frame window.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CMDIFrameWndEx : public CMDIFrameWnd</legacySyntax>
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
                                    <para> <link xlink:href="#cmdiframewndex__activeitemrecalclayout">CMDIFrameWndEx::ActiveItemRecalcLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Recalculates the layout of the active item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMDIFrameWndEx::AddDockSite</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>This method is not used.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__addpane">CMDIFrameWndEx::AddPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers a pane with the docking manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__adjustclientarea">CMDIFrameWndEx::AdjustClientArea</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Reduces the client area to allow for a border.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__adjustdockinglayout">CMDIFrameWndEx::AdjustDockingLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Recalculates the layout of all docked panes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__aremditabs">CMDIFrameWndEx::AreMDITabs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the MDI Tabs feature or the MDI Tabbed Groups feature is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__cancovertcontrolbartomdichild">CMDIFrameWndEx::CanCovertControlBarToMDIChild</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to determine whether the frame window can convert docking panes to tabbed documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__controlbartotabbeddocument">CMDIFrameWndEx::ControlBarToTabbedDocument</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts the specified docking pane to a tabbed document.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__createdocumentwindow">CMDIFrameWndEx::CreateDocumentWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a child document window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__createnewwindow">CMDIFrameWndEx::CreateNewWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to create a new window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMDIFrameWndEx::CreateObject</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Used by the framework to create a dynamic instance of this class type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__dockpane">CMDIFrameWndEx::DockPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Docks the specified pane to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__dockpaneleftof">CMDIFrameWndEx::DockPaneLeftOf</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Docks one pane to the left of another pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enableautohidepanes">CMDIFrameWndEx::EnableAutoHideBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables auto-hide mode for panes when they are docked at specified sides of the main frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enabledocking">CMDIFrameWndEx::EnableDocking</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables docking of the panes that belong to the MDI frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablefullscreenmainmenu">CMDIFrameWndEx::EnableFullScreenMainMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the main menu in full-screen mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablefullscreenmode">CMDIFrameWndEx::EnableFullScreenMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables full-screen mode for the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enableloaddockstate">CMDIFrameWndEx::EnableLoadDockState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the loading of the docking state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablemditabbedgroups">CMDIFrameWndEx::EnableMDITabbedGroups</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the MDI Tabbed Groups feature.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablemditabs">CMDIFrameWndEx::EnableMDITabs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the MDI Tabs feature. When enabled, the frame window displays a tab for each MDI child window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablemditabslastactiveactivation">CMDIFrameWndEx::EnableMDITabsLastActiveActivation</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the last active tab should be activated when the user closes the current tab.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablepanemenu">CMDIFrameWndEx::EnablePaneMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables automatic creation and management of the pop-up pane menu, which displays a list of application panes.  .</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__enablewindowsdialog">CMDIFrameWndEx::EnableWindowsDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a menu item whose command ID calls a <legacyLink xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CMFCWindowsManagerDialog</legacyLink> dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getactivepopup">CMDIFrameWndEx::GetActivePopup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently displayed popup menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getpane">CMDIFrameWndEx::GetPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the pane that has the specified control ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getdefaultresid">CMDIFrameWndEx::GetDefaultResId</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the ID of shared resources of the MDI frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getmditabgroups">CMDIFrameWndEx::GetMDITabGroups</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a list of MDI tabbed windows.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getmditabs">CMDIFrameWndEx::GetMDITabs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a reference to the underlined tabbed window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getmditabscontextmenualloweditems">CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a combination of flags that determines what context menu items are valid when the MDI Tabbed Groups feature is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getmenubar">CMDIFrameWndEx::GetMenuBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to a menu bar object attached to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__getribbonbar">CMDIFrameWndEx::GetRibbonBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ribbon bar control for the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__gettearoffbars">CMDIFrameWndEx::GetTearOffBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a list of <legacyLink xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5">CPane</legacyLink>-derived objects that are in a tear-off state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMDIFrameWndEx::GetThisClass</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to obtain a pointer to the <legacyLink xlink:href="de62b6ef-90d4-420f-8c70-f58b36976a2b">CRuntimeClass</legacyLink> object that is associated with this class type.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__gettoolbarbuttontooltiptext">CMDIFrameWndEx::GetToolbarButtonToolTipText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the application displays the tooltip for a toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__insertpane">CMDIFrameWndEx::InsertPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Registers the specified pane with the docking manager. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__isfullscreen">CMDIFrameWndEx::IsFullScreen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the frame window is in full-screen mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ismditabbedgroup">CMDIFrameWndEx::IsMDITabbedGroup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the MDI Tabbed Groups feature is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ismemberofmditabgroup">CMDIFrameWndEx::IsMemberOfMDITabGroup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the specified tabbed window is in the list of windows that are in MDI Tabbed Groups.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ismenubaravailable">CMDIFrameWndEx::IsMenuBarAvailable</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the frame window has a menu bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ispointneardocksite">CMDIFrameWndEx::IsPointNearDockSite</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a specified point is near the dock site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__isprintpreview">CMDIFrameWndEx::IsPrintPreview</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the frame window is in print-preview mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__loadframe">CMDIFrameWndEx::LoadFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a frame window from resource information. (Overrides <unmanagedCodeEntityReference>CMDIFrameWnd::LoadFrame</unmanagedCodeEntityReference>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__loadmdistate">CMDIFrameWndEx::LoadMDIState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads the specified layout of MDI Tabbed Groups and the list of previously opened documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__mditabmovetonextgroup">CMDIFrameWndEx::MDITabMoveToNextGroup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the active tab from the currently active tabbed window to the next or previous tabbed group.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__mditabnewgroup">CMDIFrameWndEx::MDITabNewGroup</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a new tabbed group that has a single window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__negotiateborderspace">CMDIFrameWndEx::NegotiateBorderSpace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Negotiates border space in a frame window during OLE in-place activation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onclosedockingpane">CMDIFrameWndEx::OnCloseDockingPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user clicks the <ui>Close</ui> button on a dockable pane. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__oncloseminiframe">CMDIFrameWndEx::OnCloseMiniFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the user clicks the <ui>Close</ui> button on a floating mini frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onclosepopupmenu">CMDIFrameWndEx::OnClosePopupMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when an active pop-up menu processes a <unmanagedCodeEntityReference>WM_DESTROY</unmanagedCodeEntityReference> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__oncmdmsg">CMDIFrameWndEx::OnCmdMsg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to route and dispatch command messages and to update command user-interface objects.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ondrawmenuimage">CMDIFrameWndEx::OnDrawMenuImage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the image associated with a menu item is drawn. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ondrawmenulogo">CMDIFrameWndEx::OnDrawMenuLogo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a <legacyLink xlink:href="9555dca1-8c9c-44c9-af72-0659ddad128e">CMFCPopupMenu</legacyLink>processes a <unmanagedCodeEntityReference>WM_PAINT</unmanagedCodeEntityReference> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onerasemdiclientbackground">CMDIFrameWndEx::OnEraseMDIClientBackground</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the MDI frame window processes a <unmanagedCodeEntityReference>WM_ERASEBKGND</unmanagedCodeEntityReference> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onmenubuttontoolhittest">CMDIFrameWndEx::OnMenuButtonToolHitTest</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a <legacyLink xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolBarButton</legacyLink>object processes a <unmanagedCodeEntityReference>WM_NCHITTEST</unmanagedCodeEntityReference> message.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onmoveminiframe">CMDIFrameWndEx::OnMoveMiniFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to move a mini-frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onsetpreviewmode">CMDIFrameWndEx::OnSetPreviewMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the application's main frame window print-preview mode. (Overrides <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1#cframewnd__onsetpreviewmode">CFrameWnd::OnSetPreviewMode</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onshowcustomizepane">CMDIFrameWndEx::OnShowCustomizePane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a Quick Customize pane is activated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onshowmditabcontextmenu">CMDIFrameWndEx::OnShowMDITabContextMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a context menu should be displayed on one of the tabs. (Valid for MDI Tabbed Groups only.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onshowpanes">CMDIFrameWndEx::OnShowPanes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to show or hide panes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onshowpopupmenu">CMDIFrameWndEx::OnShowPopupMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a pop-up menu is activated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onsizemdiclient">CMDIFrameWndEx::OnSizeMDIClient</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the size of the client MDI window is changing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__ontearoffmenu">CMDIFrameWndEx::OnTearOffMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a menu that has a tear-off bar is activated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__onupdateframemenu">CMDIFrameWndEx::OnUpdateFrameMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to update the frame menu. (Overrides <unmanagedCodeEntityReference>CMDIFrameWnd::OnUpdateFrameMenu</unmanagedCodeEntityReference>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__panefrompoint">CMDIFrameWndEx::PaneFromPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the docking pane that contains the specified point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMDIFrameWndEx::PreTranslateMessage</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Used by class <legacyLink xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343">CWinApp</legacyLink> to translate window messages before they are dispatched to the                                         <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                                        </externalLink> and                                         <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                                        </externalLink> Windows functions.  (Overrides <unmanagedCodeEntityReference>CMDIFrameWnd::PreTranslateMessage</unmanagedCodeEntityReference>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__recalclayout">CMDIFrameWndEx::RecalcLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to recalculate the layout of the frame window. (Overrides <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1#cframewnd__recalclayout">CFrameWnd::RecalcLayout</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__removepanefromdockmanager">CMDIFrameWndEx::RemovePaneFromDockManager</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Unregisters a pane and removes it from the docking manager.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__savemdistate">CMDIFrameWndEx::SaveMDIState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Saves the current layout of MDI Tabbed Groups and the list of previously opened documents.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__setprintpreviewframe">CMDIFrameWndEx::SetPrintPreviewFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the print preview frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__setuptoolbarmenu">CMDIFrameWndEx::SetupToolbarMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies a toolbar object by searching for dummy items and replacing them with the specified user-defined items.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__showfullscreen">CMDIFrameWndEx::ShowFullScreen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Switches the main frame from regular mode to full-screen mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__showpane">CMDIFrameWndEx::ShowPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the specified pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__showwindowsdialog">CMDIFrameWndEx::ShowWindowsDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a <legacyLink xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CMFCWindowsManagerDialog</legacyLink> box and opens it.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__tabbeddocumenttocontrolbar">CMDIFrameWndEx::TabbedDocumentToPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts the specified tabbed document to a docking pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__updatecaption">CMDIFrameWndEx::UpdateCaption</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to update the window frame caption.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__updatemditabbedbarsicons">CMDIFrameWndEx::UpdateMDITabbedBarsIcons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the icon for each MDI tabbed pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__winhelp">CMDIFrameWndEx::WinHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to initiate the WinHelp application or context help. (Overrides <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__winhelp">CWnd::WinHelp</link>.)</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Data Members</title>
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
                                    <para> <link xlink:href="#cmdiframewndex__m_bcancovertcontrolbartomdichild">CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether docking panes can be converted to MDI child windows.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmdiframewndex__m_bdisablesetredraw">CMDIFrameWndEx::m_bDisableSetRedraw</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables redraw optimization for MDI child windows.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>To take advantage of extended customization features in your MDI application, derive the MDI frame window class of the application from <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference> instead of <unmanagedCodeEntityReference>CMDIFrameWnd</unmanagedCodeEntityReference>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <description>
            <content>
                <para>The following example derives a class from <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference>. This code snippet comes from the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">DrawClient Sample: MFC Ribbon-Based OLE Object Drawing Application</legacyLink>.</para>
            </content>
        </description>
        <codeReference>NVC_MFC_DrawClient#1</codeReference>
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
            <para> <legacyLink xlink:href="fa8736e6-511b-4c51-8b4d-eba78378aeb9">CMDIFrameWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0">CMDIFrameWndEx</legacyLink>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> afxMDIFrameWndEx.h</para>
        </content>
    </requirements>
    <section address="cmdiframewndex__activeitemrecalclayout">
        <!--8ac2ce54-bb7b-4181-91cc-67fc5fd9b785-->
        <title>CMDIFrameWndEx::ActiveItemRecalcLayout</title>
        <content>
            <para>Recalculates the layout of the active item.</para>
            <legacySyntax>void ActiveItemRecalcLayout();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cmdiframewndex__addpane">
        <!--8c40a61e-8745-4100-ab70-c45d5696ca0f-->
        <title>CMDIFrameWndEx::AddPane</title>
        <content>
            <para>Registers a pane with the docking manager.</para>
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
                            <para>Pointer to the pane to register.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bTail</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to add this pane to the end of the list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a non-zero value if the pane is registered successfully. Returns 0 if the pane is already registered with the docking manager.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Each pane must be registered with the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">docking manager</link> before it can take a part in the docking layout. Use this method to notify the docking manager that you want to dock a specific pane. Once that pane is registered, the docking manager aligns it based on its alignment setting and position in the list of panes maintained by the docking manager.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__adjustclientarea">
        <!--d7c64848-8917-483b-9edb-fb58985f1a63-->
        <title>CMDIFrameWndEx::AdjustClientArea</title>
        <content>
            <para>Reduces the client area to allow for a border.</para>
            <legacySyntax>virtual void AdjustClientArea();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cmdiframewndex__adjustdockinglayout">
        <!--adeea31e-cb66-493a-948c-61433e14d431-->
        <title>CMDIFrameWndEx::AdjustDockingLayout</title>
        <content>
            <para>Recalculates the layout of all docked panes.</para>
            <legacySyntax>virtual void AdjustDockingLayout( HDWP hdwp=NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>hdwp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the multiple-window-position structure. You can obtain this value by calling <unmanagedCodeEntityReference>BeginDeferWindowPos</unmanagedCodeEntityReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this member function to recalculate the layout of all panes docked to the frame window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__aremditabs">
        <!--cffa3b14-e766-41a9-83d5-dd383a09938f-->
        <title>CMDIFrameWndEx::AreMDITabs</title>
        <content>
            <para>Determines whether the MDI tabs feature or the MDI tabbed groups feature is enabled.</para>
            <legacySyntax>BOOL AreMDITabs( int* pnMDITabsType=NULL ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[out] <parameterReference>pnMDITabsType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an integer variable that indicates which features are enabled:</para>
                            <list class="bullet">
                                <listItem>
                                    <para>0: All features are disabled. </para>
                                </listItem>
                                <listItem>
                                    <para>1: MDI tabs is enabled.</para>
                                </listItem>
                                <listItem>
                                    <para>2: MDI tabbed groups is enabled.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <unmanagedCodeEntityReference>Returns TRUE</unmanagedCodeEntityReference> if MDI tabs or MDI tabbed groups is enabled.</para>
                    <para> <unmanagedCodeEntityReference>Returns FALSE</unmanagedCodeEntityReference> if none of the above features is enabled.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this function to determine whether MDI tabs or MDI tabbed groups is enabled for the frame window. Use <link xlink:href="#cmdiframewndex__enablemditabs">EnableMDITabs</link> to enable or disable the MDI tabs feature.</para>
                    <para>Use <link xlink:href="#cmdiframewndex__enablemditabbedgroups">EnableMDITabbedGroups</link> to enable or disable the MDI tabbed groups feature.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__cancovertcontrolbartomdichild">
        <!--9d7ab832-b654-4623-ba37-52db4adf060f-->
        <title>CMDIFrameWndEx::CanCovertControlBarToMDIChild</title>
        <content>
            <para>Called by the framework to determine whether the frame window can convert docking panes to tabbed documents</para>
            <legacySyntax>virtual BOOL CanCovertControlBarToMDIChild();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <unmanagedCodeEntityReference>TRUE</unmanagedCodeEntityReference> if the frame window can convert docking panes to tabbed documents; otherwise returns <unmanagedCodeEntityReference>FALSE</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method in a derived class and return <unmanagedCodeEntityReference>TRUE</unmanagedCodeEntityReference> to enable the conversion of docking panes to tabbed documents. Alternatively, you can set <link xlink:href="#cmdiframewndex__m_bcancovertcontrolbartomdichild">m_bCanConvertControlBarToMDIChild</link> to <unmanagedCodeEntityReference>TRUE</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__controlbartotabbeddocument">
        <!--918347a6-1710-4271-aeba-c01657cb7e84-->
        <title>CMDIFrameWndEx::ControlBarToTabbedDocument</title>
        <content>
            <para>Converts the specified docking pane to a tabbed document.</para>
            <legacySyntax>virtual CMDIChildWndEx* ControlBarToTabbedDocument( CDockablePane* pBar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the docking pane to convert.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a pointer to the new MDI child window that contains the docking pane.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method converts a docking pane to a tabbed document. When you call this method, the framework creates a <link xlink:href="d39fec06-0bd6-4271-917d-35aae3b24d8e">CMDIChildWndEx</link> object, removes the docking pane from the docking manager, and adds the docking pane to the new MDI child window. The MDI child window resizes the docking pane to cover the entire client area</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__createdocumentwindow">
        <!--681f72da-ad49-4d90-aadc-1718e0d4b405-->
        <title>CMDIFrameWndEx::CreateDocumentWindow</title>
        <content>
            <para>Creates a child document window.</para>
            <legacySyntax>virtual CMDIChildWndEx* CreateDocumentWindow(
    LPCTSTR lpcszDocName,
    CObject* pObj <legacyBold/> );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpcszDocName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A text string that contains a document identifier. Typically, it is the full path of a document file.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pObj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a user-defined object. For example, a developer can create an application-specific data structure describing the document and telling how the document should be initialized at startup.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to <unmanagedCodeEntityReference>CMDIChildWndEx</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when it loads the list of documents previously saved in the registry.</para>
                    <para>Override this method in order to create documents when they are being loaded from the registry.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>CreateDocumentWindow</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                            <para>In this example, <codeInline>g_strStartViewName</codeInline> could be the name of a "virtual document" (for example, "Start Page") that is not actually loaded from a disk file. Therefore we need special processing to handle that case.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#13</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__createnewwindow">
        <!--71c421a5-e296-4795-9315-d544af8f1fff-->
        <title>CMDIFrameWndEx::CreateNewWindow</title>
        <content>
            <para>Called by the framework to create a new window.</para>
            <legacySyntax>virtual CMDIChildWndEx* CreateNewWindow(
    LPCTSTR lpcszDocName,
    CObject* pObj );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpcszDocName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The document name.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pObj</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reserved for future use.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the new window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__dockpane">
        <!--fb08253d-8e02-4709-8356-3fceb33ab694-->
        <title>CMDIFrameWndEx::DockPane</title>
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
                            <para>Pointer to the pane to dock. </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nDockBarID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies which sides of the frame window to dock to.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Not used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method docks the specified the pane to one of the sides of the frame window that was specified when <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__enabledocking">CBasePane::EnableDocking</link> and <legacyLink xlink:href="#cmdiframewndex__enabledocking">CMDIFrameWndEx::EnableDocking</legacyLink> were called.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example demonstrates the use of the <unmanagedCodeEntityReference>DockPane</unmanagedCodeEntityReference> method. This code snippet comes from the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#4</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__dockpaneleftof">
        <!--fb6dc89f-3bcb-4c2a-b143-e50b1c5c1009-->
        <title>CMDIFrameWndEx::DockPaneLeftOf</title>
        <content>
            <para>Docks one pane to the left of another pane.</para>
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
                            <para>A pointer to the docking pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pLeftOf</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pane that serves as the dock site. .</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>TRUE</languageKeyword> if the operation is successful. Otherwise returns <languageKeyword>FALSE</languageKeyword>. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to dock several pane objects in a predefined order. This method docks the pane specified by <parameterReference>pBar</parameterReference> to the left of the pane specified by <parameterReference>pLeftOf</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how the <unmanagedCodeEntityReference>DockPaneLeftOf</unmanagedCodeEntityReference> method is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#5</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enableautohidepanes">
        <!--02895d77-cd54-4d4a-ae70-4673206d67cb-->
        <title>CMDIFrameWndEx::EnableAutoHidePanes</title>
        <content>
            <para>Enables auto-hide mode for panes when they are docked at the specified sides of the main frame window.</para>
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
                            <para>Specifies the sides of the main frame window that will be enabled. Use one or more of the following flags.</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_LEFT</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_RIGHT</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_TOP</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_BOTTOM</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Call this function to enable auto-hide mode for panes when they are docked at the specified sides of the main frame window.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how the <unmanagedCodeEntityReference>EnableAutoHidePanes</unmanagedCodeEntityReference> method is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#6</codeReference>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enabledocking">
        <!--ecd4b4f1-cc3f-4cc2-8960-a429cc1bd7c7-->
        <title>CMDIFrameWndEx::EnableDocking</title>
        <content>
            <para>Enables docking of the panes that belong to the MDI frame window.</para>
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
                            <para>Specifies the docking style that you want to apply.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to enable docking of panes that belong to the <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how the <unmanagedCodeEntityReference>EnableDocking</unmanagedCodeEntityReference> method is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enablefullscreenmainmenu">
        <!--18e50000-4098-4527-bc6f-7f44234958b8-->
        <title>CMDIFrameWndEx::EnableFullScreenMainMenu</title>
        <content>
            <para>Shows or hides the main menu in full-screen mode.</para>
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
                            <para> <codeInline>TRUE</codeInline> to show the main menu in full-screen mode, or <codeInline>FALSE</codeInline> to hide it.</para>
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
    <section address="cmdiframewndex__enablefullscreenmode">
        <!--7424d3da-32cc-4f6d-9bcf-df36b2512dc5-->
        <title>CMDIFrameWndEx::EnableFullScreenMode</title>
        <content>
            <para>Enables full-screen mode for the frame window.</para>
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
                            <para>The ID of a command that enables or disables full-screen mode.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In full-screen mode, all docking control bars, toolbars and menus are hidden and the active view is resized to occupy the full-screen.When you enable full-screen mode, you must specify an ID of the command that enables or disables it. You can call <unmanagedCodeEntityReference>EnableFullScreenMode</unmanagedCodeEntityReference> from the main frame's <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference> function. When a frame window is being switched to full-screen mode, the framework creates a floating toolbar with one button that has the specified command ID.If you want to keep the main menu on the screen, call <link xlink:href="#cmdiframewndex__enablefullscreenmainmenu">CFrameWndEx::EnableFullScreenMainMenu</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enableloaddockstate">
        <!--6f9a408b-ecb4-42aa-bfd4-5d2513b4759c-->
        <title>CMDIFrameWndEx::EnableLoadDockState</title>
        <content>
            <para>Enables or disables the loading of the docking state.</para>
            <legacySyntax>void EnableLoadDockState(
    BOOL bEnable = TRUE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <codeInline>TRUE</codeInline> to enable the loading of the docking state, <codeInline>FALSE</codeInline> to disable the loading of the docking state.</para>
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
    <section address="cmdiframewndex__enablemditabbedgroups">
        <!--62c7f189-ce9e-466d-8cf2-d9a7e8006045-->
        <title>CMDIFrameWndEx::EnableMDITabbedGroups</title>
        <content>
            <para>Enables or disables the MDI tabbed groups feature for the frame window.</para>
            <legacySyntax>void EnableMDITabbedGroups(
    BOOL bEnable,
    const CMDITabInfo&amp; params );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the MDI tabbed groups feature is enabled; if <languageKeyword>FALSE</languageKeyword>, the MDI tabbed groups feature is disabled.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>params</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies parameters that the framework applies to child windows that are created in the MDI client area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to enable or disable the MDI tabbed groups feature. This feature enables MDI applications to display child windows as tabbed windows that are aligned vertically or horizontally within the MDI client area. Groups of tabbed windows are separated by splitters. The user can resize tabbed groups by using a splitter.</para>
                    <list class="bullet">
                        <listItem>
                            <para>The user can:</para>
                        </listItem>
                        <listItem>
                            <para>Drag individual tabs between groups. </para>
                        </listItem>
                        <listItem>
                            <para>Drag individual tabs to the edge of the window to create new groups. </para>
                        </listItem>
                        <listItem>
                            <para>Move tabs or create new groups by using a shortcut menu. </para>
                        </listItem>
                        <listItem>
                            <para>Your application can save the current layout of tabbed windows and the list of currently opened documents.</para>
                        </listItem>
                    </list>
                    <para>If you call this method with <parameterReference>bEnable</parameterReference> set to <languageKeyword>FALSE</languageKeyword>, <parameterReference>params</parameterReference> is ignored.</para>
                    <para>Even if MDI tabbed groups is already enabled, you can call this method again to modify the settings for child windows. Call the method with <parameterReference>bEnable</parameterReference> set to <languageKeyword>TRUE</languageKeyword> and modify the members of the <unmanagedCodeEntityReference>CMDITabInfo</unmanagedCodeEntityReference> object that are specified by the <parameterReference>params</parameterReference> parameter.</para>
                    <para>For more information about how to use MDI tabbed groups, see <link xlink:href="0a464f36-39b7-4e68-8b67-ec175de28377">MDI Tabbed Groups</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>EnableMDITabbedGroups</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enablemditabs">
        <!--0cb3459e-a138-4268-b0a9-8b64fcaa1a93-->
        <title>CMDIFrameWndEx::EnableMDITabs</title>
        <content>
            <para>Enables or disables the MDI Tabs feature for the MDI frame window. When enabled, the frame window displays a tab for each MDI child window.</para>
            <legacySyntax>void EnableMDITabs(
    BOOL bEnable=TRUE,
    BOOL bIcons=TRUE,
    CMFCTabCtrl::Location tabLocation=CMFCTabCtrl::LOCATION_BOTTOM,
    BOOL bTabCloseButton=FALSE,
    CMFCTabCtrl::Style style=CMFCTabCtrl::STYLE_3D_SCROLLED,
    BOOL bTabCustomTooltips=FALSE,
    BOOL bActiveTabCloseButton=FALSE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether tabs are enabled. </para>
                        </definition>
                        <definedTerm> <parameterReference>bIcons</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether icons should be displayed on the tabs.</para>
                        </definition>
                        <definedTerm> <parameterReference>tabLocation</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the location of the tab labels.</para>
                        </definition>
                        <definedTerm> <parameterReference>bTabCloseButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to display tab close buttons.</para>
                        </definition>
                        <definedTerm> <parameterReference>style</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the style of tabs. Use <unmanagedCodeEntityReference>STYLE_3D_SCROLLED</unmanagedCodeEntityReference> for regular tabs or <unmanagedCodeEntityReference>STYLE_3D_ONENOTE</unmanagedCodeEntityReference> for Microsoft OneNote tabs.</para>
                        </definition>
                        <definedTerm> <parameterReference>bTabCustomTooltips</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether custom tooltips are enabled.</para>
                        </definition>
                        <definedTerm> <parameterReference>bActiveTabCloseButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, a <ui>Close</ui> button will be displayed on the active tab instead of on the right corner of the tab area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to enable or disable the MDI tabs feature for the MDI frame window. When enabled, all child windows are displayed as tabs.</para>
                    <para>The tab labels can be located at the top or bottom of the frame, depending on the setting of the parameter <parameterReference>tabLocation</parameterReference>. You may specify either <unmanagedCodeEntityReference>CMFCTabCtrl::LOCATION_BOTTOM</unmanagedCodeEntityReference> (the default setting) or <unmanagedCodeEntityReference>CMFCTabCtrl::LOCATION_TOP</unmanagedCodeEntityReference>.</para>
                    <para>If <parameterReference>bTabCustomTooltips</parameterReference> is <unmanagedCodeEntityReference>TRUE</unmanagedCodeEntityReference>, an <unmanagedCodeEntityReference>AFX_WM_ON_GET_TAB_TOOLTIP</unmanagedCodeEntityReference> message will be sent to the main frame window. Your code can handle this message and provide the framework with custom tooltips for MDI tabs.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>EnableMDITabs</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MDITabsDemo Sample: MFC Tabbed MDI Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_MDITabsDemo#3</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enablemditabslastactiveactivation">
        <!--c3a7e7d8-28e8-4aa0-b8fc-ee1a60ec8a77-->
        <title>CMDIFrameWndEx::EnableMDITabsLastActiveActivation</title>
        <content>
            <para>Specifies whether the last active tab should be opened when the user closes the current tab.</para>
            <legacySyntax>void EnableMDITabsLastActiveActivation(
    BOOL bLastActiveTab=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bLastActiveTab</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, enable activation of the last active tab. If <languageKeyword>FALSE</languageKeyword>, disable activation of the last active tab.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>There are two ways to open a tab when the active tab is closed:</para>
                    <list class="bullet">
                        <listItem>
                            <para>Activate the next tab.</para>
                        </listItem>
                        <listItem>
                            <para>Activate the previously active tab.</para>
                        </listItem>
                    </list>
                    <para>The default implementation uses the first way.</para>
                    <para>Use <unmanagedCodeEntityReference>EnableMDITabsLastActiveActivation</unmanagedCodeEntityReference> to enable the second way of tab activation. It emulates the way Windows opens MDI child windows.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enablepanemenu">
        <!--4ee54bc3-6cd8-4d79-bfd5-6597aaadf995-->
        <title>CMDIFrameWndEx::EnablePaneMenu</title>
        <content>
            <para>Enables or disables automatic creation and management of the pop-up pane menu, which displays a list of application panes.</para>
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
                            <para>If <languageKeyword>TRUE</languageKeyword>, automatic handling of the pane menu is enabled; if <languageKeyword>FALSE</languageKeyword>, automatic handling is disabled.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiCustomizeCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Command ID of the <ui>Customize</ui> menu item. This menu item is usually added to the end of the list of panes.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>strCustomizeLabel</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text to be displayed for the <ui>Customize</ui> menu item (for localization).</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewToolbarsMenuEntryID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the ID of a toolbar menu item that opens the pane menu. Usually this is the <ui>Toolbars </ui>submenu of the <ui> View</ui> menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bContextMenuShowsToolbarsOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the pane menu displays only a list of toolbars. If <languageKeyword>FALSE</languageKeyword>, the menu displays a list of toolbars and docking bars.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bViewMenuShowsToolbarsOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the pane menu displays only a list of toolbars. If <languageKeyword>FALSE</languageKeyword>, the menu displays a list of toolbars and docking bars.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The pop-up pane menu displays the list of the application's panes and lets the user show or hide individual panes.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>EnablePaneMenu</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__enablewindowsdialog">
        <!--0473e4a3-9408-4f6c-93d8-0a7cedb36635-->
        <title>CMDIFrameWndEx::EnableWindowsDialog</title>
        <content>
            <para>Inserts a menu item whose command ID calls a <legacyLink xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CMFCWindowsManagerDialog</legacyLink> dialog box.</para>
            <legacySyntax>void EnableWindowsDialog(
    UINT uiMenuId,
    LPCTSTR lpszMenuText,
    BOOL bShowAllways=FALSE,
    BOOL bShowHelpButton=FALSE );

void EnableWindowsDialog(
    UINT uiMenuId,
    UINT uiMenuTextResId,
    BOOL bShowAllways=FALSE,
    BOOL bShowHelpButton=FALSE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiMenuId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the resource ID of a menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lpszMenuText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the item's text.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bShowHelpButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to display a <ui>Help</ui> button on the windows management dialog box.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuTextResId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The string resource identifier that contains the item's text string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to insert a menu item whose command calls a MDI child window management dialog box ( <link xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CBCGPWindowsManagerDlg</link>). The new item is inserted into the menu specified by <parameterReference>uiMenuId</parameterReference>. Call <unmanagedCodeEntityReference>EnableWindowsDialog</unmanagedCodeEntityReference> when you process the <unmanagedCodeEntityReference>WM_CREATE</unmanagedCodeEntityReference> message.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>EnableWindowsDialog</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getactivepopup">
        <!--5fe524c4-9e22-4818-8a41-5b1319fcbd98-->
        <title>CMDIFrameWndEx::GetActivePopup</title>
        <content>
            <para>Returns a pointer to the currently displayed popup menu.</para>
            <legacySyntax>CMFCPopupMenu* GetActivePopup() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the active popup menu; <languageKeyword>NULL</languageKeyword> if no popup menu is active.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this function to obtain a pointer to the <link xlink:href="9555dca1-8c9c-44c9-af72-0659ddad128e">CBCGPPopupMenu</link> object that is currently displayed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getdefaultresid">
        <!--0a2fde4f-5463-4b35-83b1-15d959eaa550-->
        <title>CMDIFrameWndEx::GetDefaultResId</title>
        <content>
            <para>Returns the ID of shared resources of the MDI frame window.</para>
            <legacySyntax>UINT GetDefaultResId() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A resource ID value. 0 if the frame window has no menu bar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method returns the resource ID that was specified when the MDI frame window was loaded by <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1#cframewnd__loadframe">CFrameWnd::LoadFrame</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getmditabgroups">
        <!--6ace4a34-fc05-4337-8e9b-a4389806d171-->
        <title>CMDIFrameWndEx::GetMDITabGroups</title>
        <content>
            <para>Returns a list of MDI tabbed windows.</para>
            <legacySyntax>const CObList&amp; GetMDITabGroups() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to a <link xlink:href="80699c93-33d8-4f8b-b8cf-7b58aeab64ca">CObList Class</link> object that contains a list of tabbed windows. Do not store or modify the list.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to access the list of tabbed windows. It can be helpful if you want to change or query some parameters of individual tabbed windows.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getmditabs">
        <!--2165610a-c027-4de7-87b7-d2b0db07ea13-->
        <title>CMDIFrameWndEx::GetMDITabs</title>
        <content>
            <para>Returns a reference to the underlined tabbed window.</para>
            <legacySyntax>CMFCTabCtrl&amp; GetMDITabs();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the underlined tabbed window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getmditabscontextmenualloweditems">
        <!--e0924999-5432-4c86-baa2-5582e639d07b-->
        <title>CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems</title>
        <content>
            <para>Returns a combination of flags that determines what operations are valid when the MDI Tabbed Groups feature is enabled.</para>
            <legacySyntax>DWORD GetMDITabsContextMenuAllowedItems();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A bitwise-OR combination of the following flags:</para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>BCGP_MDI_CREATE_VERT_GROUP</unmanagedCodeEntityReference> - can create a vertical tab group.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>BCGP_MDI_CREATE_HORZ_GROUP</unmanagedCodeEntityReference> - can create a horizontal tab group.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>BCGP_MDI_CAN_MOVE_PREV</unmanagedCodeEntityReference> - can move a tab to the previous tab group.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>BCGP_MDI_CAN_MOVE_NEXT</unmanagedCodeEntityReference> - can move a tab to the next tab group.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the MDI Tabbed Groups feature is enabled, you must know what operations are allowed on the tabs of a particular window. This method analyzes the current layout of tabbed windows and returns a combination of flags that can be used to build, for example, a shortcut menu.</para>
                    <para>You can create a new vertical tab group when all tabbed windows are aligned vertically, or when there is only one tabbed window.</para>
                    <para>You can create a new horizontal tab group when all tabbed windows are aligned horizontally, or when there is only one tabbed window.</para>
                    <para>You can move a tab to the previous group only if there is more than one tab in a tabbed window.</para>
                    <para>You can move a tab to the next group only if there is more than one tab in a tabbed window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getmenubar">
        <!--68873052-2300-458f-aad3-84268837d770-->
        <title>CMDIFrameWndEx::GetMenuBar</title>
        <content>
            <para>Returns a pointer to a menu bar object attached to the frame window.</para>
            <legacySyntax>const CMFCMenuBar* GetMenuBar() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a menu bar object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getpane">
        <!--8e449957-62f9-43af-bb81-7461a361b019-->
        <title>CMDIFrameWndEx::GetPane</title>
        <content>
            <para>Returns a pointer to the pane that has the specified control ID.</para>
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
                    <para>A pointer to the pane that has the specified control ID, if it exists. Otherwise, <languageKeyword>NULL</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__getribbonbar">
        <!--30b740a1-0446-432d-8b47-3728b146e671-->
        <title>CMDIFrameWndEx::GetRibbonBar</title>
        <content>
            <para>Retrieves the ribbon bar control for the frame.</para>
            <legacySyntax>CMFCRibbonBar* GetRibbonBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the <link xlink:href="a65d06fa-1a28-4cc0-8971-bc9d7c9198fe">CMFCRibbonBar Class</link> for the frame.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__gettearoffbars">
        <!--fbbbdecd-16aa-4203-a7e8-c88d0673b709-->
        <title>CMDIFrameWndEx::GetTearOffBars</title>
        <content>
            <para>Returns a list of tear-off menus.</para>
            <legacySyntax>const CObList&amp; GetTearOffBars() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to a <link xlink:href="80699c93-33d8-4f8b-b8cf-7b58aeab64ca">CObList Class</link> object that contains a collection of pointers to <unmanagedCodeEntityReference>CPane</unmanagedCodeEntityReference>-derived objects that are in a tear-off state.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference> maintains a collection of tear-off menus. Use this method to retrieve a reference to this list.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__gettoolbarbuttontooltiptext">
        <!--f1c59fe3-db76-4200-92b1-8221cc67e445-->
        <title>CMDIFrameWndEx::GetToolbarButtonToolTipText</title>
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
                    <para> <codeInline>TRUE</codeInline> if the tooltip has been displayed. <codeInline>FALSE</codeInline> otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__insertpane">
        <!--39f99e98-4af2-45b8-8f4c-8dc559d8541f-->
        <title>CMDIFrameWndEx::InsertPane</title>
        <content>
            <para>Registers the specified pane with the docking manager. </para>
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
                        <definedTerm>[in] <parameterReference>pControlBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pane to be inserted.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pTarget</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pane before or after which to insert the pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, <parameterReference>pControlBar</parameterReference> is inserted after <parameterReference>pTarget</parameterReference>. If <languageKeyword>FALSE</languageKeyword>, <parameterReference>pControlBar</parameterReference> is inserted before <parameterReference>pTarget</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method successfully registers the pane, <languageKeyword>FALSE</languageKeyword> if the pane was already registered with the docking manager.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to tell the docking manager about a pane specified by <parameterReference>pControlBar</parameterReference>. The docking manager will align this pane according to the pane's alignment and position in the docking manager's internal list.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__isfullscreen">
        <!--2a72e0f4-7823-4d80-b82c-fd9cda07158f-->
        <title>CMDIFrameWndEx::IsFullScreen</title>
        <content>
            <para>Determines whether the frame window is in full-screen mode.</para>
            <legacySyntax>BOOL IsFullScreen() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>TRUE</codeInline> if the frame window is in full screen mode; otherwise <codeInline>FALSE</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can set the full screen mode by calling the <link xlink:href="#cmdiframewndex__enablefullscreenmode">CMDIFrameWndEx::EnableFullScreenMode</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ismditabbedgroup">
        <!--3f55632d-df7d-4a9c-9bdf-a3b4a41c5a34-->
        <title>CMDIFrameWndEx::IsMDITabbedGroup</title>
        <content>
            <para>Specifies whether the MDI Tabbed Groups feature is enabled.</para>
            <legacySyntax>BOOL IsMDITabbedGroup() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the MDI Tabbed Groups feature is enabled; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To determine whether regular MDI tabs or the MDI Tabbed Groups feature is enabled, use <link xlink:href="#cmdiframewndex__aremditabs">CMDIFrameWndEx::AreMDITabs</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ismemberofmditabgroup">
        <!--74ad9758-da96-4598-9ae6-eb692a35594f-->
        <title>CMDIFrameWndEx::IsMemberOfMDITabGroup</title>
        <content>
            <para>Determines whether the specified tabbed window is in the list of windows that are in MDI Tabbed Groups.</para>
            <legacySyntax>BOOL IsMemberOfMDITabGroup( CWnd* pWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to tabbed window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified tabbed window is in the list of tabbed windows that form MDI Tabbed Groups. Otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ismenubaravailable">
        <!--0b4fa23f-af54-42a8-a6e9-c664766b411d-->
        <title>CMDIFrameWndEx::IsMenuBarAvailable</title>
        <content>
            <para>Determines whether the frame window has a menu bar.</para>
            <legacySyntax>BOOL IsMenuBarAvailable() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the pointer to the menu bar object is not <languageKeyword>NULL</languageKeyword>; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ispointneardocksite">
        <!--df038768-da82-4be4-84bf-538ec11a2d8f-->
        <title>CMDIFrameWndEx::IsPointNearDockSite</title>
        <content>
            <para>Determines whether a specified point is near the dock site.</para>
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
                            <para>The specified point in screen coordinates.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwBarAlignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies which edge the point is near. Possible values are <unmanagedCodeEntityReference>CBRS_ALIGN_LEFT</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CBRS_ALIGN_RIGHT</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CBRS_ALIGN_TOP</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>CBRS_ALIGN_BOTTOM</unmanagedCodeEntityReference>
                            </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bOuterEdge</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the point is near the outer border of the dock site; <languageKeyword>FALSE</languageKeyword> otherwise.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the point is near the dock site; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The point is near the dock site when it is within the sensitivity set in the docking manager. The default sensitivity is 15 pixels.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__isprintpreview">
        <!--ffd5c83d-e127-4774-bb4a-1d1c54d8c906-->
        <title>CMDIFrameWndEx::IsPrintPreview</title>
        <content>
            <para>Determines whether the frame window is in print-preview mode.</para>
            <legacySyntax>BOOL IsPrintPreview();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>TRUE</codeInline> if the frame window is in print-preview mode; otherwise, <codeInline>FALSE</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__loadframe">
        <!--49d64415-596b-4580-98b2-deec59d77b33-->
        <title>CMDIFrameWndEx::LoadFrame</title>
        <content>
            <para>Creates a frame window from resource information.</para>
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
                            <para>The ID of a shared resource associated with the frame window.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwDefaultStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The style of the frame window. </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the frame's parent.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <link xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext Structure</link>. This parameter can be <languageKeyword>NULL</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds, otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__loadmdistate">
        <!--1fdd209d-0fdf-41db-a7c9-c4f56de442d3-->
        <title>CMDIFrameWndEx::LoadMDIState</title>
        <content>
            <para>Loads the specified layout of MDI Tabbed Groups and the list of previously opened documents.</para>
            <legacySyntax>virtual BOOL LoadMDIState( LPCTSTR lpszProfileName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the profile name.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the load succeeded; <languageKeyword>FALSE</languageKeyword> if the load failed or there is no data to load.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To load or save the state of MDI tabs and groups and the list of opened documents, do the following:</para>
                    <list class="bullet">
                        <listItem>
                            <para>Call <link xlink:href="#cmdiframewndex__savemdistate">CMDIFrameWndEx::SaveMDIState</link> when the main frame is being closed </para>
                        </listItem>
                        <listItem>
                            <para>Call <link xlink:href="#cmdiframewndex__loadmdistate">CMDIFrameWndEx::LoadMDIState</link> when the main frame is being created. The recommended place for this call is before the main frame is displayed for the first time. Add <codeInline>CWinAppEx::EnableLoadWindowPlacement</codeInline> <codeInline> (FALSE);</codeInline> before <codeInline>pMainFrame-&gt;LoadFrame (IDR_MAINFRAME);.</codeInline> Add <codeInline>CBCGPWorkspace::ReloadWindowPlacement</codeInline> <codeInline> (pMainFrame);</codeInline> after the call to <unmanagedCodeEntityReference>LoadMDIState</unmanagedCodeEntityReference> to display the main frame at the position that was stored in the registry.</para>
                        </listItem>
                        <listItem>
                            <para>Override <unmanagedCodeEntityReference>GetDocumentName</unmanagedCodeEntityReference> in the <unmanagedCodeEntityReference>CMDIChildWndEx</unmanagedCodeEntityReference>- derived class if your application displays documents that are not stored as files. The returned string will be saved in the registry as the document identifier. The base implementation of <link xlink:href="d39fec06-0bd6-4271-917d-35aae3b24d8e#cmdichildwndex__getdocumentname">CMDIChildWndEx::GetDocumentName</link> returns a value obtained from <link xlink:href="e5a2891d-e1e1-4599-8c7e-afa9b4945446#cdocument__getpathname">CDocument::GetPathName</link>. </para>
                        </listItem>
                        <listItem>
                            <para>Override <link xlink:href="#cmdiframewndex__createdocumentwindow">CMDIFrameWndEx::CreateDocumentWindow</link> to correctly create documents when they are being loaded from the registry. The first parameter is the string that <unmanagedCodeEntityReference>GetDocumentName</unmanagedCodeEntityReference> returned.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>LoadMDIState</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#11</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__mditabmovetonextgroup">
        <!--dcba6669-89a2-4177-a358-dc4f3734acb8-->
        <title>CMDIFrameWndEx::MDITabMoveToNextGroup</title>
        <content>
            <para>Moves the active tab from the currently active tabbed window to the next or previous tabbed group.</para>
            <legacySyntax>void MDITabMoveToNextGroup( BOOL bNext=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bNext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, move the tab to the next tabbed group. If <languageKeyword>FALSE</languageKeyword>, move it to the previous tabbed group.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__mditabnewgroup">
        <!--1529f94b-7a8c-418e-b310-4cc2a04e3dfa-->
        <title>CMDIFrameWndEx::MDITabNewGroup</title>
        <content>
            <para>Creates a new tabbed group that has a single window.</para>
            <legacySyntax>void MDITabNewGroup(
    BOOL bVert=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bVert</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new group alignment. If <languageKeyword>TRUE</languageKeyword>, the new group is aligned vertically. If <languageKeyword>FALSE</languageKeyword>, the new group is aligned horizontally.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this function to create a new tabbed window (new tabbed group) and add the first tab to it.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>MDITabNewGroup</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#12</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__m_bcancovertcontrolbartomdichild">
        <!--d78d757e-47e8-4eb7-a61e-24be379403bc-->
        <title>CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild</title>
        <content>
            <para>Specifies whether docking panes can be converted to MDI child windows.</para>
            <legacySyntax>BOOL m_bCanCovertControlBarToMDIChild;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Indicates whether docking control bars can be converted to MDI child windows. If this flag is <languageKeyword>TRUE</languageKeyword>, the framework handles the conversion automatically when the user selects the <ui>Tabbed Document</ui> command. The flag is protected and you must explicitly enable this option either by setting <unmanagedCodeEntityReference>m_bCanCovertControlBarToMDIChild</unmanagedCodeEntityReference> in a constructor of a <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference>-derived class, or by overriding <unmanagedCodeEntityReference>CanConvertControlBarToMDIChild</unmanagedCodeEntityReference>.</para>
                    <para>The default value is <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>m_bCanCovertControlBarToMDIChild</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#13</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__m_bdisablesetredraw">
        <!--afa8fae3-28e3-40d7-933f-b21165201a2f-->
        <title>CMDIFrameWndEx::m_bDisableSetRedraw</title>
        <content>
            <para>Enables or disables redraw optimization for MDI child windows.</para>
            <legacySyntax>AFX_IMPORT_DATA static BOOL m_bDisableSetRedraw;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default value is <languageKeyword>TRUE</languageKeyword>.</para>
                    <para>Set this flag to <languageKeyword>FALSE</languageKeyword> if you want to optimize redrawing of MDI children. In this case the framework will call <codeInline>SetRedraw (FALSE)</codeInline> for the main frame when the application is changing the active tab.</para>
                    <para>This flag can cause unwanted effects (such as background applications that become visible). Therefore we recommend that you change the default only if you experience noticeable flickering during MDI tab activation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__negotiateborderspace">
        <!--edd72620-46cb-4a4c-a998-e65fba4cd194-->
        <title>CMDIFrameWndEx::NegotiateBorderSpace</title>
        <content>
            <para>Negotiates border space in a frame window during OLE in-place activation.</para>
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
                            <para>Contains one of the following values from the enum <unmanagedCodeEntityReference>CFrameWnd::BorderCmd</unmanagedCodeEntityReference>:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>borderGet</unmanagedCodeEntityReference> = 1</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>borderRequest</unmanagedCodeEntityReference> = 2</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>borderSet</unmanagedCodeEntityReference> = 3</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>lpRectBorder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <link xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT Structure</link> or a <link xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect Class</link> object that specifies the coordinates of the border.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is an implementation of OLE border space negotiation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onclosedockingpane">
        <!--cc240c48-764d-4b71-9cd7-c0573cdacfb1-->
        <title>CMDIFrameWndEx::OnCloseDockingPane</title>
        <content>
            <para>Called by the framework when the user clicks the <ui>Close</ui> button on a dockable pane. </para>
            <legacySyntax>virtual BOOL OnCloseDockingPane( CDockablePane* pWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the pane being closed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the docking pane can be closed. Otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to handle hiding of docking panes. Return <languageKeyword>FALSE</languageKeyword> if you want to prevent a docking pane from being hidden.</para>
                    <para>The default implementation does nothing and returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__oncloseminiframe">
        <!--4fed69c3-e733-44d0-89bc-98e5c84870ea-->
        <title>CMDIFrameWndEx::OnCloseMiniFrame</title>
        <content>
            <para>Called by the framework when the user clicks the <ui>Close</ui> button on a floating mini-frame window.</para>
            <legacySyntax>virtual BOOL OnCloseMiniFrame(
    CPaneFrameWnd*  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the mini-frame window being closed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the floating mini-frame window can be closed. Otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to handle hiding of floating mini-frame windows. Return <languageKeyword>FALSE</languageKeyword> if you want to prevent a floating mini-frame window from being hidden.</para>
                    <para>The default implementation does nothing and returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onclosepopupmenu">
        <!--1fd83215-d43d-491c-9279-fd18af7751c5-->
        <title>CMDIFrameWndEx::OnClosePopupMenu</title>
        <content>
            <para>Called by the framework when an active pop-up menu processes a <unmanagedCodeEntityReference>WM_DESTROY</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual void OnClosePopupMenu( CMFCPopupMenu* pMenuPopup );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenuPopup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a pop-up menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method if you want to process notifications from <link xlink:href="9555dca1-8c9c-44c9-af72-0659ddad128e">CMFCPopupMenu Class</link> objects that belong to the MDI frame window when those objects process <unmanagedCodeEntityReference>WM_DESTROY</unmanagedCodeEntityReference> messages.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__oncmdmsg">
        <!--b06a1feb-d287-464e-b147-692577b2fc8c-->
        <title>CMDIFrameWndEx::OnCmdMsg</title>
        <content>
            <para>Called by the framework to route and dispatch command messages and to update command user-interface objects.</para>
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
                            <para>Identifies the command notification code. See <link xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13#ccmdtarget__oncmdmsg">CCmdTarget::OnCmdMsg</link> for more information about values for <parameterReference>nCode</parameterReference>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pExtra</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Used according to the value of <parameterReference>nCode</parameterReference>. See <link xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13#ccmdtarget__oncmdmsg">CCmdTarget::OnCmdMsg</link> for more information about <parameterReference>pExtra</parameterReference>.</para>
                        </definition>
                        <definedTerm>[in, out] <parameterReference>pHandlerInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Typically, this parameter should be <languageKeyword>NULL</languageKeyword>.If not <languageKeyword>NULL</languageKeyword>, <unmanagedCodeEntityReference>OnCmdMsg</unmanagedCodeEntityReference> fills in the <codeInline>pTarget</codeInline> and <codeInline>pmf</codeInline> members of the <parameterReference>pHandlerInfo</parameterReference> structure instead of dispatching the command. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the message is handled; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ondrawmenuimage">
        <!--5c58e761-af1a-42e1-be75-81dd2ec6bc9c-->
        <title>CMDIFrameWndEx::OnDrawMenuImage</title>
        <content>
            <para>Called by the framework when the image associated with a menu item is drawn. </para>
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
                            <para>Pointer to a device context.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pMenuButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the menu button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rectImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Bounding rectangle of the image.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method draws the image. The default implementation returns <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method  if you want to customize image rendering for the menu items that belong to the menu bar owned by the <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference>-derived object. The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__ondrawmenulogo">
        <!--2022ec3f-3a8f-41ac-9555-1cd55ac8ca72-->
        <title>CMDIFrameWndEx::OnDrawMenuLogo</title>
        <content>
            <para>Called by the framework when a <legacyLink xlink:href="9555dca1-8c9c-44c9-af72-0659ddad128e">CMFCPopupMenu</legacyLink>processes a <unmanagedCodeEntityReference>WM_PAINT</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual void OnDrawMenuLogo(
    CDC*,
    CMFCPopupMenu*,
    const CRect&amp;  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to display a logo on the pop-up menu that belongs to the menu bar owned by the <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference>-derived object. The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onerasemdiclientbackground">
        <!--971adfa2-0d93-40a6-8b74-b5f856088c84-->
        <title>CMDIFrameWndEx::OnEraseMDIClientBackground</title>
        <content>
            <para>Called by the framework when the MDI frame window processes a <unmanagedCodeEntityReference>WM_ERASEBKGND</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual BOOL OnEraseMDIClientBackground(
    CDC*  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the application processes the message and erases the background.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this member function if you want to process the <unmanagedCodeEntityReference>WM_ERASEBKGND</unmanagedCodeEntityReference> message in a <unmanagedCodeEntityReference>CMDIFrameWndEx</unmanagedCodeEntityReference>-derived class.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onmenubuttontoolhittest">
        <!--4e491860-7331-4bf9-8bd4-2f4b3043f4a7-->
        <title>CMDIFrameWndEx::OnMenuButtonToolHitTest</title>
        <content>
            <para>Called by the framework when a <legacyLink xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolBarButton</legacyLink>object processes a <unmanagedCodeEntityReference>WM_NCHITTEST</unmanagedCodeEntityReference> message.</para>
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
                            <para>The toolbar button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>pTI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>TOOLINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760256</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the application fills the <parameterReference>pTI</parameterReference> parameter. The default implementation returns <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method if you want to provide information about specific menu items to a tooltip. The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onmoveminiframe">
        <!--84b3117d-2166-4033-8ba1-244afc2cc880-->
        <title>CMDIFrameWndEx::OnMoveMiniFrame</title>
        <content>
            <para>Called by the framework to move a mini-frame window.</para>
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
                            <para>A pointer to a mini-frame window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds, otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onsetpreviewmode">
        <!--a599ac4b-fa71-4a55-8ca4-8c8c98b96284-->
        <title>CMDIFrameWndEx::OnSetPreviewMode</title>
        <content>
            <para>Sets the application's main frame window print-preview mode.</para>
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
                            <para>If <languageKeyword>TRUE</languageKeyword>, sets print-preview mode. If <languageKeyword>FALSE</languageKeyword>, cancels preview mode.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>CPrintPreviewState</unmanagedCodeEntityReference> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method overrides <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1#cframewnd__onsetpreviewmode">CFrameWnd::OnSetPreviewMode</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onshowcustomizepane">
        <!--c37aaf3d-0194-4d9f-9137-2cdf5d62db20-->
        <title>CMDIFrameWndEx::OnShowCustomizePane</title>
        <content>
            <para>Called by the framework when a Quick Customize pane is activated.</para>
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
                            <para>A pointer to the Quick Customize pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiToolbarID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Control ID of the toolbar to customize.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method always returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The Quick Customize pane is a menu that opens when the user clicks <ui>Customize</ui> on a toolbar.</para>
                    <para>Override this method in a derived class to make changes in the Quick Customize pane.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onshowmditabcontextmenu">
        <!--5cb49a2a-e3cd-41d8-bb94-47d2d01e3103-->
        <title>CMDIFrameWndEx::OnShowMDITabContextMenu</title>
        <content>
            <para>Called by the framework before a shortcut menu is displayed on one of the tabs. Valid for MDI Tabbed Groups only.</para>
            <legacySyntax>virtual BOOL OnShowMDITabContextMenu(
    CPoint point,
    DWORD dwAllowedItems,
    BOOL bTabDrop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location of the menu in screen coordinates.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwAllowedItems</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bitwise-OR combination of flags that indicates what actions are allowed for the current tab:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>BCGP_MDI_CREATE_VERT_GROUP</unmanagedCodeEntityReference> - can create a vertical tab group.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>BCGP_MDI_CREATE_HORZ_GROUP</unmanagedCodeEntityReference> - can create a horizontal tab group.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>BCGP_MDI_CAN_MOVE_PREV</unmanagedCodeEntityReference> - can move a tab to the previous tab group.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>BCGP_MDI_CAN_MOVE_NEXT</unmanagedCodeEntityReference> - can move a tab to the next tab group.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>BCGP_MDI_CAN_BE_DOCKED</unmanagedCodeEntityReference> - switch a tabbed document to docked state (relevant for tabbed documents only).</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>[in] <parameterReference>bTabDrop</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to display the menu as a result of dragging the tab onto another tabbed group. <languageKeyword>FALSE</languageKeyword> to display the menu as a shortcut menu on the currently active tab.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Override this method in a <link xlink:href="dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0">CBCGPMDIFrameWnd</link>-derived class.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you do not process <unmanagedCodeEntityReference>OnShowMDITabContextMenu</unmanagedCodeEntityReference>, the shortcut menu will not be displayed. This function is generated by the <ui>MFC Application Wizard</ui> when you enable the MDI Tabbed Groups feature.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>OnShowMDITabContextMenu</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#14</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onshowpanes">
        <!--a6962760-374d-4c30-95f1-56feadeb8bc7-->
        <title>CMDIFrameWndEx::OnShowPanes</title>
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
                            <para> <languageKeyword>TRUE</languageKeyword> to show panes, <languageKeyword>FALSE</languageKeyword> to hide panes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the state of the panes changes as a result of calling this method, <languageKeyword>FALSE</languageKeyword> if the panes are already in the state specified by <parameterReference>bShow</parameterReference>. For example, if the panes are hidden and <parameterReference>bShow</parameterReference> is <languageKeyword>FALSE</languageKeyword>, the return value is <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation removes the toolbar from the top-level frame window.</para>
                    <para>If <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32#cdockingmanager__m_bhidedockingbarsincontainermode">CDockingManager::m_bHideDockingBarsInContainerMode</link> is <languageKeyword>TRUE</languageKeyword> (the default), all docking panes will be hidden.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onshowpopupmenu">
        <!--25bb7710-5056-4638-a58a-c3de92c727bb-->
        <title>CMDIFrameWndEx::OnShowPopupMenu</title>
        <content>
            <para>Called by the framework when it opens a pop-up menu.</para>
            <legacySyntax>virtual BOOL OnShowPopupMenu(
    CMFCPopupMenu*  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the pop-up menu is to be displayed. Otherwise, <languageKeyword>FALSE</languageKeyword>. The default implementation returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method if you want to implement special processing upon pop-up menu activation. For example, if you want to change regular menu items to color menu buttons, set up tear-off bars, and so on.</para>
                    <para>The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onsizemdiclient">
        <!--f2d3a7b3-af24-4b79-bafb-165e068c8c0c-->
        <title>CMDIFrameWndEx::OnSizeMDIClient</title>
        <content>
            <para>Called by the framework when the size of the client MDI window is changing.</para>
            <legacySyntax>virtual void OnSizeMDIClient(
    const CRect&amp; rectOld,
    const CRect&amp; rectNew );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>rectOld</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current size of the MDI client window.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rectNew</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new size of the MDI client window.</para>
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
    <section address="cmdiframewndex__ontearoffmenu">
        <!--1bdae8fe-c166-4618-96b6-281d2c076769-->
        <title>CMDIFrameWndEx::OnTearOffMenu</title>
        <content>
            <para>Called by the framework when a menu that has a tear-off bar is activated.</para>
            <legacySyntax>virtual BOOL OnTearOffMenu(
    CMFCPopupMenu* pMenuPopup,
    CPane* pBar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenuPopup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the pop-up menu.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the tear-off bar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> to allow the pop-up menu with the tear-off bar to be made activate; otherwise <languageKeyword>FALSE</languageKeyword>. The default is <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function when you want to implement a special setup for the tear-off bar. The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__onupdateframemenu">
        <!--df006b65-f705-41ae-bd87-22dce4209c00-->
        <title>CMDIFrameWndEx::OnUpdateFrameMenu</title>
        <content>
            <para>Called by the framework to update the frame menu.</para>
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
                            <para>A handle to a menu.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__panefrompoint">
        <!--f5c3864b-d569-4ed0-9d45-bd22cc552691-->
        <title>CMDIFrameWndEx::PaneFromPoint</title>
        <content>
            <para>Returns the docking pane that contains the specified point.</para>
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
                            <para>The point (in screen coordinates).</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nSensitivity</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The window rectangle of each checked pane is enlarged in all directions by this value.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bExactBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, the <parameterReference>nSensitivity</parameterReference> parameter is ignored.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pRTCBarType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If non- <languageKeyword>NULL</languageKeyword>, the method iterates over only the panes of the specified type.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>dwAlignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If a pane is found, this parameter will specify which side of the pane is closest to the specified point.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a docking pane, or <languageKeyword>NULL</languageKeyword> if no control contains the point specified by <parameterReference>point</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The call is redirected to the <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">docking manager</link>. See <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32#cdockingmanager__panefrompoint">CDockingManager::ControlBarFromPoint</link> for more information.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__recalclayout">
        <!--08929d06-9d1c-4b27-8b69-7cc179d256dc-->
        <title>CMDIFrameWndEx::RecalcLayout</title>
        <content>
            <para>Called by the framework to recalculate the layout of the frame window.</para>
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
                            <para>Determines whether the active in-place item for the frame window receives notification of the layout change. If <languageKeyword>TRUE</languageKeyword>, the item is notified; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method overrides <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1#cframewnd__recalclayout">CFrameWnd::RecalcLayout</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__removepanefromdockmanager">
        <!--81b35c8b-adf4-4a64-a4ec-1701bc11d64a-->
        <title>CMDIFrameWndEx::RemovePaneFromDockManager</title>
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
                            <para>A pointer to a pane to be removed.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bDestroy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to destroy the removed pane. <languageKeyword>FALSE</languageKeyword> to not destroy it.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAdjustLayout</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to adjust the docking layout immediately. If <languageKeyword>FALSE</languageKeyword>, the adjustment will occur only when a redraw event occurs for other reasons (the user resizes the window, drags the main frame, etc.).</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAutoHide</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to remove the pane from the list of autohide panes. <languageKeyword>FALSE</languageKeyword> to remove the pane from the list of regular panes.</para>
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
                    <para>You must register each pane with the docking manager to take part in the docking layout. Use <link xlink:href="#cmdiframewndex__addpane">AddPane</link> or <link xlink:href="#cmdiframewndex__insertpane">InsertPane</link> to register panes.</para>
                    <para>Use this method when a pane is no longer a part of the docking layout of the frame window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__savemdistate">
        <!--8f7ec628-78b0-437e-8ae3-40968618d5eb-->
        <title>CMDIFrameWndEx::SaveMDIState</title>
        <content>
            <para>Saves the current layout of MDI Tabbed Groups and the list of previously opened documents.</para>
            <legacySyntax>virtual BOOL SaveMDIState( LPCTSTR lpszProfileName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the profile name.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the save succeeded; <languageKeyword>FALSE</languageKeyword> if the save failed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To load or save the state of MDI tabs and groups and the list of opened documents, do the following:</para>
                    <list class="bullet">
                        <listItem>
                            <para>Call <unmanagedCodeEntityReference>SaveMDIState</unmanagedCodeEntityReference> when the main frame is being closed </para>
                        </listItem>
                        <listItem>
                            <para>Call <link xlink:href="#cmdiframewndex__loadmdistate">CMDIFrameWndEx::LoadMDIState</link> when the main frame is being created. The recommended location for this call is before the main frame is displayed for the first time.</para>
                        </listItem>
                        <listItem>
                            <para>Call <codeInline>CWinAppEx::EnableLoadWindowPlacement(FALSE);</codeInline> before <codeInline>pMainFrame-&gt;LoadFrame (IDR_MAINFRAME);</codeInline>
                            </para>
                        </listItem>
                        <listItem>
                            <para>Call <codeInline>CWinAppEx::ReloadWindowPlacement</codeInline> <codeInline>(pMainFrame)</codeInline> after <unmanagedCodeEntityReference>LoadMDIState</unmanagedCodeEntityReference> to display the main frame at the position that was stored in the registry. </para>
                        </listItem>
                        <listItem>
                            <para>Override <unmanagedCodeEntityReference>GetDocumentName</unmanagedCodeEntityReference> in the <unmanagedCodeEntityReference>CMDIChildWndEx</unmanagedCodeEntityReference>- derived class if your application displays documents that are not stored as files. The returned string will be saved in the registry as a document identifier. For more information, see <link xlink:href="d39fec06-0bd6-4271-917d-35aae3b24d8e#cmdichildwndex__getdocumentname">CMDIChildWndEx::GetDocumentName</link>.</para>
                        </listItem>
                        <listItem>
                            <para>Override <link xlink:href="#cmdiframewndex__createdocumentwindow">CMDIFrameWndEx::CreateDocumentWindow</link> to correctly create documents when they are loaded from the registry. The parameter to <unmanagedCodeEntityReference>CreateDocumentWindow</unmanagedCodeEntityReference> is the string that <unmanagedCodeEntityReference>GetDocumentName</unmanagedCodeEntityReference> returned earlier.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>SaveMDIState</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#15</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__setprintpreviewframe">
        <!--3948e500-53d1-4a7a-a2c9-48416dcb24a3-->
        <title>CMDIFrameWndEx::SetPrintPreviewFrame</title>
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
    <section address="cmdiframewndex__setuptoolbarmenu">
        <!--79af6985-2c76-4b17-a24e-1748125311e7-->
        <title>CMDIFrameWndEx::SetupToolbarMenu</title>
        <content>
            <para>Modifies a toolbar object by replacing dummy items with user-defined items.</para>
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
                            <para>A reference to a <link xlink:href="40cacfdc-d45c-4ec7-bf28-991c72812499">CMenu Class</link> object to be modified.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewUserToolbarCmdFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first user-defined command.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiViewUserToolbarCmdLast</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the last user-defined command.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__showfullscreen">
        <!--9ccdec41-d6b9-4ed4-9dee-87be7d0246e0-->
        <title>CMDIFrameWndEx::ShowFullScreen</title>
        <content>
            <para>Switches the main frame from regular mode to full-screen mode.</para>
            <legacySyntax>void ShowFullScreen();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__showpane">
        <!--5a6f8822-77ff-4bc6-a67b-7873640d294b-->
        <title>CMDIFrameWndEx::ShowPane</title>
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
                            <para>Pointer to the pane to be shown or hidden.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to show the pane. <languageKeyword>FALSE</languageKeyword> to hide the pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bDelay</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to delay the recalculation of the docking layout. <languageKeyword>FALSE</languageKeyword> to recalculate the docking layout immediately.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bActivate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to show the pane should as active. <languageKeyword>FALSE</languageKeyword> to show the pane as inactive.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to show or hide the pane. Do not use <unmanagedCodeEntityReference>ShowWindow</unmanagedCodeEntityReference> for docking panes.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>ShowPane</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#16</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__showwindowsdialog">
        <!--8ff195fe-96ba-42ff-8567-97149049e784-->
        <title>CMDIFrameWndEx::ShowWindowsDialog</title>
        <content>
            <para>Creates a <legacyLink xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CMFCWindowsManagerDialog</legacyLink> box and opens it.</para>
            <legacySyntax>void ShowWindowsDialog();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>ShowWindowsDialog</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#18</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__tabbeddocumenttocontrolbar">
        <!--e894af24-9c74-4543-a1a9-6f2c67ec2ce7-->
        <title>CMDIFrameWndEx::TabbedDocumentToControlBar</title>
        <content>
            <para>Converts the specified tabbed document to a docking pane.</para>
            <legacySyntax>virtual BOOL TabbedDocumentToControlBar( CMDIChildWndEx* pMDIChildWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMDIChildWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to MDI child window that contains a docking pane.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method was successful, <languageKeyword>FALSE</languageKeyword> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this method to convert a tabbed document to a docking pane. The tabbed document must have been created by using <link xlink:href="#cmdiframewndex__controlbartotabbeddocument">PaneToTabbedDocument</link>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example shows how <unmanagedCodeEntityReference>TabbedDocumentToControlBar</unmanagedCodeEntityReference> is used in the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">VisualStudioDemo Sample: MFC Visual Studio Application</legacyLink>.</para>
                    <codeReference>NVC_MFC_VisualStudioDemo#19</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmdiframewndex__updatecaption">
        <!--32101255-e75e-471f-9989-d366cd8b875a-->
        <title>CMDIFrameWndEx::UpdateCaption</title>
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
    <section address="cmdiframewndex__updatemditabbedbarsicons">
        <!--53c0cc52-de7d-444b-b8e8-de8421603c21-->
        <title>CMDIFrameWndEx::UpdateMDITabbedBarsIcons</title>
        <content>
            <para>Sets the icon for each MDI tabbed pane.</para>
            <legacySyntax>void UpdateMDITabbedBarsIcons();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cmdiframewndex__winhelp">
        <!--15f5f0a4-cdb7-498b-a23c-13f327acb529-->
        <title>CMDIFrameWndEx::WinHelp</title>
        <content>
            <para>Called by the framework to initiate the WinHelp application or context help.</para>
            <legacySyntax>virtual void WinHelp(
    DWORD dwData,
    UINT nCmd = HELP_CONTEXT);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>dwData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies data as required for the type of help specified by <parameterReference>nCmd</parameterReference>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of help requested. For a list of possible values and how they affect the <parameterReference>dwData</parameterReference> parameter, see the                                 <externalLink> <linkText>WinHelp Function</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb762267</linkUri>
                                </externalLink> in the Windows SDK.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method overrides <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__winhelp">CWnd::WinHelp</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7b6db805-a572-43fd-9046-0fa6e3663e63">Classes</link> <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CMDIFrameWnd</legacyLink> <link xlink:href="d39fec06-0bd6-4271-917d-35aae3b24d8e">CMDIChildWndEx</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



