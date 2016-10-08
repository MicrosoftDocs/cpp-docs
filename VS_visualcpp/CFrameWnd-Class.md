---
title: "CFrameWnd Class"
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
ms.assetid: e2220aba-5bf4-4002-b960-fbcafcad01f1
caps.latest.revision: 15
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
# CFrameWnd Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of a Windows single document interface (SDI) overlapped or pop-up frame window, along with members for managing the window. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CFrameWnd : public CWnd</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
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
                                    <para> <link xlink:href="#cframewnd__cframewnd">CFrameWnd::CFrameWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
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
                                    <para> <link xlink:href="#cframewnd__activateframe">CFrameWnd::ActivateFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Makes the frame visible and available to the user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__beginmodalstate">CFrameWnd::BeginModalState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the frame window to modal. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__create">CFrameWnd::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to create and initialize the Windows frame window associated with the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__createview">CFrameWnd::CreateView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a view within a frame that is not derived from <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__dockcontrolbar">CFrameWnd::DockControlBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Docks a control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__enabledocking">CFrameWnd::EnableDocking</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows a control bar to be docked.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__endmodalstate">CFrameWnd::EndModalState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Ends the frame window's modal state. Enables all of the windows disabled by <unmanagedCodeEntityReference>BeginModalState</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__floatcontrolbar">CFrameWnd::FloatControlBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Floats a control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getactivedocument">CFrameWnd::GetActiveDocument</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the active <legacyBold>CDocument</legacyBold> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getactiveframe">CFrameWnd::GetActiveFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the active <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getactiveview">CFrameWnd::GetActiveView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the active <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getcontrolbar">CFrameWnd::GetControlBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getdockstate">CFrameWnd::GetDockState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the dock state of a frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getmenubarstate">CFrameWnd::GetMenuBarState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the display state of the menu in the current MFC application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getmenubarvisibility">CFrameWnd::GetMenuBarVisibility</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the default behavior of the menu in the current MFC application is  either hidden or visible.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getmessagebar">CFrameWnd::GetMessageBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the status bar belonging to the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__getmessagestring">CFrameWnd::GetMessageString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves message corresponding to a command ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__gettitle">CFrameWnd::GetTitle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the title of the related control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__initialupdateframe">CFrameWnd::InitialUpdateFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Causes the <unmanagedCodeEntityReference>OnInitialUpdate</unmanagedCodeEntityReference> member function belonging to all views in the frame window to be called.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__inmodalstate">CFrameWnd::InModalState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a value indicating whether or not a frame window is in a modal state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__istracking">CFrameWnd::IsTracking</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if splitter bar is currently being moved.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__loadacceltable">CFrameWnd::LoadAccelTable</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to load an accelerator table.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__loadbarstate">CFrameWnd::LoadBarState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to restore control bar settings.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__loadframe">CFrameWnd::LoadFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to dynamically create a frame window from resource information.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__negotiateborderspace">CFrameWnd::NegotiateBorderSpace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Negotiates border space in the frame window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__onbarcheck">CFrameWnd::OnBarCheck</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called whenever an action is performed on the specified control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__oncontexthelp">CFrameWnd::OnContextHelp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handles SHIFT+F1 Help for in-place items.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__onsetpreviewmode">CFrameWnd::OnSetPreviewMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the application's main frame window into and out of print-preview mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__onupdatecontrolbarmenu">CFrameWnd::OnUpdateControlBarMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the associated menu is updated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__recalclayout">CFrameWnd::RecalcLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Repositions the control bars of the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__savebarstate">CFrameWnd::SaveBarState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to save control bar settings.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setactivepreviewview">CFrameWnd::SetActivePreviewView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Designates the specified view to be the active view for Rich Preview.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setactiveview">CFrameWnd::SetActiveView</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the active <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setdockstate">CFrameWnd::SetDockState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to dock the frame window in the main window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setmenubarstate">CFrameWnd::SetMenuBarState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the display state of the menu in the current MFC application to hidden or displayed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setmenubarvisibility">CFrameWnd::SetMenuBarVisibility</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the default behavior of the menu in the current MFC application to be either hidden or visible.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setmessagetext">CFrameWnd::SetMessageText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text of a standard status bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setprogressbarposition">CFrameWnd::SetProgressBarPosition</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets current position for Windows 7 progress bar displayed on taskbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setprogressbarrange">CFrameWnd::SetProgressBarRange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets range for Windows 7 progress bar displayed on taskbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__setprogressbarstate">CFrameWnd::SetProgressBarState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the type and state of the progress indicator displayed on a taskbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__settaskbaroverlayicon">CFrameWnd::SetTaskbarOverlayIcon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Overloaded. Applies an overlay to a taskbar button to indicate application status or a notification to the user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__settitle">CFrameWnd::SetTitle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the title of the related control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__showcontrolbar">CFrameWnd::ShowControlBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call to show the control bar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__showownedwindows">CFrameWnd::ShowOwnedWindows</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows all windows that are descendants of the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Protected Methods</title>
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
                                    <para> <link xlink:href="#cframewnd__oncreateclient">CFrameWnd::OnCreateClient</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a client window for the frame.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__onhidemenubar">CFrameWnd::OnHideMenuBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called before the menu in the current MFC application is hidden.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__onshowmenubar">CFrameWnd::OnShowMenuBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called before the menu in the current MFC application is displayed.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
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
                                    <para> <link xlink:href="#cframewnd__m_bautomenuenable">CFrameWnd::m_bAutoMenuEnable</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Controls automatic enable and disable functionality for menu items.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cframewnd__rectdefault">CFrameWnd::rectDefault</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pass this static <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> as a parameter when creating a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object to allow Windows to choose the window's initial size and position.</para>
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
            <para>To create a useful frame window for your application, derive a class from <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference>. Add member variables to the derived class to store data specific to your application. Implement message-handler member functions and a message map in the derived class to specify what happens when messages are directed to the window. </para>
            <para>There are three ways to construct a frame window:  </para>
            <list class="bullet">
                <listItem>
                    <para>Directly construct it using <legacyLink xlink:href="#cframewnd__create">Create</legacyLink>.</para>
                </listItem>
                <listItem>
                    <para>Directly construct it using <legacyLink xlink:href="#cframewnd__loadframe">LoadFrame</legacyLink>.</para>
                </listItem>
                <listItem>
                    <para>Indirectly construct it using a document template.</para>
                </listItem>
            </list>
            <para>Before you call either <legacyBold>Create</legacyBold> or <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference>, you must construct the frame-window object on the heap using the C++ <legacyBold>new</legacyBold> operator. Before calling <legacyBold>Create</legacyBold>, you can also register a window class with the <legacyLink xlink:href="62c7d4b1-7a29-4abb-86f7-dec541659db0">AfxRegisterWndClass</legacyLink> global function to set the icon and class styles for the frame.</para>
            <para>Use the <legacyBold>Create</legacyBold> member function to pass the frame's creation parameters as immediate arguments.</para>
            <para> <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> requires fewer arguments than <legacyBold>Create</legacyBold>, and instead retrieves most of its default values from resources, including the frame's caption, icon, accelerator table, and menu. To be accessible by <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference>, all these resources must have the same resource ID (for example, <legacyBold>IDR_MAINFRAME</legacyBold>).</para>
            <para>When a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object contains views and documents, they are created indirectly by the framework instead of directly by the programmer. The <unmanagedCodeEntityReference>CDocTemplate</unmanagedCodeEntityReference> object orchestrates the creation of the frame, the creation of the containing views, and the connection of the views to the appropriate document. The parameters of the <unmanagedCodeEntityReference>CDocTemplate</unmanagedCodeEntityReference> constructor specify the <unmanagedCodeEntityReference>CRuntimeClass</unmanagedCodeEntityReference> of the three classes involved (document, frame, and view). A <unmanagedCodeEntityReference>CRuntimeClass</unmanagedCodeEntityReference> object is used by the framework to dynamically create new frames when specified by the user (for example, by using the File New command or the multiple document interface (MDI) Window New command).</para>
            <para>A frame-window class derived from <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> must be declared with <unmanagedCodeEntityReference>DECLARE_DYNCREATE</unmanagedCodeEntityReference> in order for the above <unmanagedCodeEntityReference>RUNTIME_CLASS</unmanagedCodeEntityReference> mechanism to work correctly.</para>
            <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> contains default implementations to perform the following functions of a main window in a typical application for Windows:  </para>
            <list class="bullet">
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window keeps track of a currently active view that is independent of the Windows active window or the current input focus. When the frame is reactivated, the active view is notified by calling <unmanagedCodeEntityReference>CView::OnActivateView</unmanagedCodeEntityReference>.</para>
                </listItem>
                <listItem>
                    <para>Command messages and many common frame-notification messages, including those handled by the <unmanagedCodeEntityReference>OnSetFocus</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>OnHScroll</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>OnVScroll</unmanagedCodeEntityReference> functions of <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>, are delegated by a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window to the currently active view.</para>
                </listItem>
                <listItem>
                    <para>The currently active view (or currently active MDI child frame window in the case of an MDI frame) can determine the caption of the frame window. This feature can be disabled by turning off the <legacyBold>FWS_ADDTOTITLE</legacyBold> style bit of the frame window.</para>
                </listItem>
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window manages the positioning of the control bars, views, and other child windows inside the frame window's client area. A frame window also does idle-time updating of toolbar and other control-bar buttons. A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window also has default implementations of commands for toggling on and off the toolbar and status bar.</para>
                </listItem>
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window manages the main menu bar. When a pop-up menu is displayed, the frame window uses the <legacyBold>UPDATE_COMMAND_UI</legacyBold> mechanism to determine which menu items should be enabled, disabled, or checked. When the user selects a menu item, the frame window updates the status bar with the message string for that command.</para>
                </listItem>
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window has an optional accelerator table that automatically translates keyboard accelerators.</para>
                </listItem>
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window has an optional help ID set with <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> that is used for context-sensitive help. A frame window is the main orchestrator of semimodal states such as context-sensitive help (SHIFT+F1) and print-preview modes.</para>
                </listItem>
                <listItem>
                    <para>A <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> frame window will open a file dragged from the File Manager and dropped on the frame window. If a file extension is registered and associated with the application, the frame window responds to the dynamic data exchange (DDE) open request that occurs when the user opens a data file in the File Manager or when the <legacyBold>ShellExecute</legacyBold> Windows function is called.</para>
                </listItem>
                <listItem>
                    <para>If the frame window is the main application window (that is, <unmanagedCodeEntityReference>CWinThread::m_pMainWnd</unmanagedCodeEntityReference>), when the user closes the application, the frame window prompts the user to save any modified documents (for <unmanagedCodeEntityReference>OnClose</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>OnQueryEndSession</unmanagedCodeEntityReference>).</para>
                </listItem>
                <listItem>
                    <para>If the frame window is the main application window, the frame window is the context for running WinHelp. Closing the frame window will shut down WINHELP.EXE if it was launched for help for this application.</para>
                </listItem>
            </list>
            <para>Do not use the C++ <legacyBold>delete</legacyBold> operator to destroy a frame window. Use <unmanagedCodeEntityReference>CWnd::DestroyWindow</unmanagedCodeEntityReference> instead. The <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> implementation of <unmanagedCodeEntityReference>PostNcDestroy</unmanagedCodeEntityReference> will delete the C++ object when the window is destroyed. When the user closes the frame window, the default <unmanagedCodeEntityReference>OnClose</unmanagedCodeEntityReference> handler will call <unmanagedCodeEntityReference>DestroyWindow</unmanagedCodeEntityReference>.</para>
            <para>For more information on <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference>, see <legacyLink xlink:href="40677339-8135-4f5e-aba6-3fced3078077">Frame Windows</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="cframewnd__activateframe">
        <!--3abd3daf-1b21-46de-9919-f9161792519e-->
        <title>CFrameWnd::ActivateFrame</title>
        <content>
            <para>Call this member function to activate and restore the frame window so that it is visible and available to the user.</para>
            <legacySyntax>virtual void ActivateFrame( int nCmdShow = -1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCmdShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the parameter to pass to <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__showwindow">CWnd::ShowWindow</legacyLink>. By default, the frame is shown and correctly restored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is usually called after a non-user interface event such as a DDE, OLE, or other event that may show the frame window or its contents to the user.</para>
                    <para>The default implementation activates the frame and brings it to the top of the Z-order and, if necessary, carries out the same steps for the application's main frame window.</para>
                    <para>Override this member function to change how a frame is activated. For example, you can force MDI child windows to be maximized. Add the appropriate functionality, then call the base class version with an explicit <parameterReference>nCmdShow</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#1</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__beginmodalstate">
        <!--30b3014a-2ff0-400a-9af2-2fb128b8f113-->
        <title>CFrameWnd::BeginModalState</title>
        <content>
            <para>Call this member function to make a frame window modal.</para>
            <legacySyntax>virtual void BeginModalState();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cframewnd__cframewnd">
        <!--c1935429-0568-432e-8b30-fe47c71676ac-->
        <title>CFrameWnd::CFrameWnd</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object, but does not create the visible frame window.</para>
            <legacySyntax>CFrameWnd();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <legacyBold>Create</legacyBold> to create the visible window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__create">
        <!--d3d3bb87-c1e5-450f-b09d-2867a3c8438f-->
        <title>CFrameWnd::Create</title>
        <content>
            <para>Call to create and initialize the Windows frame window associated with the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle = WS_OVERLAPPEDWINDOW,
    const RECT&amp; rect = rectDefault,
    CWnd* pParentWnd = NULL,
    LPCTSTR lpszMenuName = NULL,
    DWORD dwExStyle = 0,
    CCreateContext* pContext = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszClassName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated character string that names the Windows class. The class name can be any name registered with the <unmanagedCodeEntityReference>AfxRegisterWndClass</unmanagedCodeEntityReference> global function or the <legacyBold>RegisterClass</legacyBold> Windows function. If <legacyBold>NULL</legacyBold>, uses the predefined default <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> attributes.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszWindowName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated character string that represents the window name. Used as text for the title bar.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the window <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">style</legacyLink> attributes. Include the <legacyBold>FWS_ADDTOTITLE</legacyBold> style if you want the title bar to automatically display the name of the document represented in the window. </para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size and position of the window. The <unmanagedCodeEntityReference>rectDefault</unmanagedCodeEntityReference> value allows Windows to specify the size and position of the new window.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the parent window of this frame window. This parameter should be <legacyBold>NULL</legacyBold> for top-level frame windows.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpszMenuName</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Identifies the name of the menu resource to be used with the window. Use <legacyBold>MAKEINTRESOURCE</legacyBold> if the menu has an integer ID instead of a string. This parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwExStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the window extended <legacyLink xlink:href="d18e6c69-0a01-49ed-b58a-55b3802b47c1">style</legacyLink> attributes. </para>
                        </definition>
                        <definedTerm> <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a pointer to a <legacyLink xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext</legacyLink> structure. This parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if initialization is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Construct a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object in two steps. First, invoke the constructor, which constructs the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object, and then call <legacyBold>Create</legacyBold>, which creates the Windows frame window and attaches it to the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object. <legacyBold>Create</legacyBold> initializes the window's class name and window name and registers default values for its style, parent, and associated menu.</para>
                    <para>Use <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> rather than <legacyBold>Create</legacyBold> to load the frame window from a resource instead of specifying its arguments.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__createview">
        <!--f490fc29-b689-4e24-b266-837192be83f9-->
        <title>CFrameWnd::CreateView</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>CreateView</unmanagedCodeEntityReference> to create a view within a frame.</para>
            <legacySyntax>CWnd* CreateView(
    CCreateContext* pContext,
    UINT nID = AFX_IDW_PANE_FIRST  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of view and document.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID number of a view.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this member function to create "views" that are not <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference>-derived within a frame. After calling <unmanagedCodeEntityReference>CreateView</unmanagedCodeEntityReference>, you must manually set the view to active and set it to be visible; these tasks are not automatically performed by <unmanagedCodeEntityReference>CreateView</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__dockcontrolbar">
        <!--b34a2a37-64fe-49ff-a556-537bed35b970-->
        <title>CFrameWnd::DockControlBar</title>
        <content>
            <para>Causes a control bar to be docked to the frame window.</para>
            <legacySyntax>void DockControlBar(
    CControlBar* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the control bar to be docked.</para>
                        </definition>
                        <definedTerm> <parameterReference>nDockBarID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Determines which sides of the frame window to consider for docking. It can be 0, or one or more of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>AFX_IDW_DOCKBAR_TOP</unmanagedCodeEntityReference>   Dock to the top side of the frame window.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>AFX_IDW_DOCKBAR_BOTTOM</legacyBold>   Dock to the bottom side of the frame window.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>AFX_IDW_DOCKBAR_LEFT</unmanagedCodeEntityReference>   Dock to the left side of the frame window.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>AFX_IDW_DOCKBAR_RIGHT</unmanagedCodeEntityReference>   Dock to the right side of the frame window.</para>
                                </listItem>
                            </list>
                            <para>If 0, the control bar can be docked to any side enabled for docking in the destination frame window. </para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Determines, in screen coordinates, where the control bar will be docked in the nonclient area of the destination frame window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control bar will be docked to one of the sides of the frame window specified in the calls to both <legacyLink xlink:href="4d668c55-9b42-4838-97ac-cf2b3000b82c#ccontrolbar__enabledocking">CControlBar::EnableDocking</legacyLink> and <legacyLink xlink:href="#cframewnd__enabledocking">CFrameWnd::EnableDocking</legacyLink>. The side chosen is determined by <parameterReference>nDockBarID</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__enabledocking">
        <!--66983e25-2d6d-4784-8640-bdf46646d386-->
        <title>CFrameWnd::EnableDocking</title>
        <content>
            <para>Call this function to enable dockable control bars in a frame window.</para>
            <legacySyntax>void EnableDocking( DWORD dwDockStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDockStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies which sides of the frame window can serve as docking sites for control bars. It can be one or more of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_TOP</unmanagedCodeEntityReference>   Allows docking at the top of the client area.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_BOTTOM</unmanagedCodeEntityReference>   Allows docking at the bottom of the client area.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_LEFT</unmanagedCodeEntityReference>   Allows docking on the left side of the client area.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_RIGHT</unmanagedCodeEntityReference>   Allows docking on the right side of the client area.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_ANY</unmanagedCodeEntityReference>   Allows docking on any side of the client area.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, control bars will be docked to a side of the frame window in the following order: top, bottom, left, right.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="e868da26-5e07-4607-9651-e2f863ad9059#ctoolbar__create">CToolBar::Create</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__endmodalstate">
        <!--7476a4b3-c8c3-4b09-980a-2b6347116f5f-->
        <title>CFrameWnd::EndModalState</title>
        <content>
            <para>Call this member function to change a frame window from modal to modeless.</para>
            <legacySyntax>virtual void EndModalState();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>EndModalState</unmanagedCodeEntityReference> enables all of the windows disabled by <legacyLink xlink:href="#cframewnd__beginmodalstate">BeginModalState</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__floatcontrolbar">
        <!--3f125a30-6f3f-446e-b0af-3853f641148f-->
        <title>CFrameWnd::FloatControlBar</title>
        <content>
            <para>Call this function to cause a control bar to not be docked to the frame window.</para>
            <legacySyntax>void FloatControlBar(
    CControlBar * pBar,
    CPoint point,
    DWORD dwStyle = CBRS_ALIGN_TOP );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the control bar to be floated.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The location, in screen coordinates, where the top left corner of the control bar will be placed.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to align the control bar horizontally or vertically within its new frame window. It can be any one of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_TOP</unmanagedCodeEntityReference>   Orients the control bar vertically.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_BOTTOM</unmanagedCodeEntityReference>   Orients the control bar vertically.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_LEFT</unmanagedCodeEntityReference>   Orients the control bar horizontally.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_ALIGN_RIGHT</unmanagedCodeEntityReference>   Orients the control bar horizontally.</para>
                                </listItem>
                            </list>
                            <para>If styles are passed specifying both horizontal and vertical orientation, the toolbar will be oriented horizontally. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, this is done at application startup when the program is restoring settings from the previous execution.</para>
                    <para>This function is called by the framework when the user causes a drop operation by releasing the left mouse button while dragging the control bar over a location that is not available for docking.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getactivedocument">
        <!--b478cc18-ac02-4c25-b9a2-3427cc4e3589-->
        <title>CFrameWnd::GetActiveDocument</title>
        <content>
            <para>Call this member function to obtain a pointer to the current <legacyBold>CDocument</legacyBold> attached to the current active view.</para>
            <legacySyntax>virtual CDocument* GetActiveDocument();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the current <legacyLink xlink:href="e5a2891d-e1e1-4599-8c7e-afa9b4945446">CDocument</legacyLink>. If there is no current document, returns <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getactiveframe">
        <!--1fc338eb-76d0-4fb6-883e-cbeecb9b0539-->
        <title>CFrameWnd::GetActiveFrame</title>
        <content>
            <para>Call this member function to obtain a pointer to the active multiple document interface (MDI) child window of an MDI frame window.</para>
            <legacySyntax>virtual CFrameWnd* GetActiveFrame();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the active MDI child window. If the application is an SDI application, or the MDI frame window has no active document, the implicit <legacyBold>this</legacyBold> pointer will be returned.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If there is no active MDI child or the application is a single document interface (SDI), the implicit <legacyBold>this</legacyBold> pointer is returned.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getactiveview">
        <!--1b18d845-e722-4081-b05b-4679d67aa001-->
        <title>CFrameWnd::GetActiveView</title>
        <content>
            <para>Call this member function to obtain a pointer to the active view (if any) attached to a frame window ( <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference>).</para>
            <legacySyntax>CView* GetActiveView() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the current <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</legacyLink>. If there is no current view, returns <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function returns <legacyBold>NULL</legacyBold> when called for an MDI main frame window ( <unmanagedCodeEntityReference>CMDIFrameWnd</unmanagedCodeEntityReference>). In an MDI application, the MDI main frame window does not have a view associated with it. Instead, each individual child window ( <unmanagedCodeEntityReference>CMDIChildWnd</unmanagedCodeEntityReference>) has one or more associated views. The active view in an MDI application can be obtained by first finding the active MDI child window and then finding the active view for that child window. The active MDI child window can be found by calling the function <unmanagedCodeEntityReference>MDIGetActive</unmanagedCodeEntityReference> or <legacyBold>GetActiveFrame </legacyBold>as demonstrated in the following:</para>
                    <codeReference>NVC_MFCWindowing#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getcontrolbar">
        <!--1d70d22b-8066-4ff2-b364-48692f2fccf7-->
        <title>CFrameWnd::GetControlBar</title>
        <content>
            <para>Call <unmanagedCodeEntityReference>GetControlBar</unmanagedCodeEntityReference> to gain access to the control bar that is associated with the ID.</para>
            <legacySyntax>CControlBar* GetControlBar( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID number of a control bar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the control bar that is associated with the ID.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>nID</parameterReference> parameter refers to the unique identifier passed to the <legacyBold>Create</legacyBold> method of the control bar. For more information on control bars, refer to the topic entitled <link xlink:href="31831910-3d23-4d70-9e71-03cc02f01ec4">Control Bars</link>.</para>
                    <para> <unmanagedCodeEntityReference>GetControlBar</unmanagedCodeEntityReference> will return the control bar even if it is floating and thus is not currently a child window of the frame.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getdockstate">
        <!--23f44f55-c7a4-4e0e-b19e-e76953eff1bc-->
        <title>CFrameWnd::GetDockState</title>
        <content>
            <para>Call this member function to store state information about the frame window's control bars in a <unmanagedCodeEntityReference>CDockState</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void GetDockState( CDockState&amp; state ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>state</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the current state of the frame window's control bars upon return.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can then write the contents of <unmanagedCodeEntityReference>CDockState</unmanagedCodeEntityReference> to storage using <unmanagedCodeEntityReference>CDockState::SaveState</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>Serialize</unmanagedCodeEntityReference>. If you later want to restore the control bars to a previous state, load the state with <unmanagedCodeEntityReference>CDockState::LoadState</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>Serialize</unmanagedCodeEntityReference>, then call <unmanagedCodeEntityReference>SetDockState</unmanagedCodeEntityReference> to apply the previous state to the frame window's control bars.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getmenubarstate">
        <!--df3d9ec1-71fa-4ddb-bc51-c372b8ebf3bb-->
        <title>CFrameWnd::GetMenuBarState</title>
        <content>
            <para>Retrieves the display state of the menu in the current MFC application. </para>
            <legacySyntax>virtual DWORD GetMenuBarState();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value can have the following values:</para>
                    <list class="bullet">
                        <listItem>
                            <para>AFX_MBS_VISIBLE (0x01) – The menu is visible. </para>
                        </listItem>
                        <listItem>
                            <para>AFX_MBS_HIDDEN (0x02) – The menu is hidden. </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the <legacyLink xlink:href="cfacf14d-bfe4-4666-a5c7-38b800512920">CException</legacyLink> class. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getmenubarvisibility">
        <!--a7452d76-608c-4c11-8b0d-c5d87d032aa3-->
        <title>CFrameWnd::GetMenuBarVisibility</title>
        <content>
            <para>Indicates whether the default state of the menu in the current MFC application is hidden or visible. </para>
            <legacySyntax>virtual DWORD CFrameWnd::GetMenuBarVisibility();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method returns one of the following values:</para>
                    <list class="bullet">
                        <listItem>
                            <para>AFX_MBV_KEEPVISIBLE (0x01) - The menu is displayed at all times, and by default does not have the focus.</para>
                        </listItem>
                        <listItem>
                            <para>AFX_MBV_DISPLAYONFOCUS (0x02) - The menu is hidden by default. If the menu is hidden, press the ALT key to display the menu and give it the focus. If the menu is displayed, press the ALT or ESC key to hide it. </para>
                        </listItem>
                        <listItem>
                            <para>AFX_MBV_ DISPLAYONFOCUS (0x02) | AFX_MBV_DISPLAYONF10 (0x04) (bitwise combination (OR)) - The menu is hidden by default. If the menu is hidden, press the F10 key to display the menu and give it the focus. If the menu is displayed, press the F10 key to toggle the focus on or off the menu. The menu is displayed until you press the ALT or ESC key to hide it. </para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the <legacyLink xlink:href="cfacf14d-bfe4-4666-a5c7-38b800512920">CException</legacyLink> class. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getmessagebar">
        <!--91c8521d-af40-4cd8-93e0-454fd588d83a-->
        <title>CFrameWnd::GetMessageBar</title>
        <content>
            <para>Call this member function to get a pointer to the status bar.</para>
            <legacySyntax>virtual CWnd* GetMessageBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the status-bar window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__getmessagestring">
        <!--79619a94-5909-4d95-af8a-0a78a6c8104b-->
        <title>CFrameWnd::GetMessageString</title>
        <content>
            <para>Override this function to provide custom strings for command IDs.</para>
            <legacySyntax>virtual void GetMessageString(
    UINT nID,
    CString&amp; rMessage ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of the desired message.</para>
                        </definition>
                        <definedTerm> <parameterReference>rMessage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object into which to place the message.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation simply loads the string specified by <parameterReference>nID</parameterReference> from the resource file. This function is called by the framework when the message string in the status bar needs updating.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__gettitle">
        <!--fd5b33ac-8dc1-4b21-8338-be90334949b7-->
        <title>CFrameWnd::GetTitle</title>
        <content>
            <para>Retrieves the title of the window object.</para>
            <legacySyntax>CString GetTitle() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object containing the current title of the window object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__initialupdateframe">
        <!--e2a045cf-c6ec-4e9e-b64f-fde1d6f5fc49-->
        <title>CFrameWnd::InitialUpdateFrame</title>
        <content>
            <para>Call <legacyBold>IntitialUpdateFrame </legacyBold>after creating a new frame with <legacyBold>Create</legacyBold>.</para>
            <legacySyntax>void InitialUpdateFrame(
    CDocument* pDoc,
    BOOL bMakeVisible );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDoc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the document to which the frame window is associated. Can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>bMakeVisible</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <legacyBold>TRUE</legacyBold>, indicates that the frame should become visible and active. If <legacyBold>FALSE</legacyBold>, no descendants are made visible.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This causes all views in that frame window to receive their <unmanagedCodeEntityReference>OnInitialUpdate</unmanagedCodeEntityReference> calls. </para>
                    <para>Also, if there was not previously an active view, the primary view of the frame window is made active. The primary view is a view with a child ID of <legacyBold>AFX_IDW_PANE_FIRST</legacyBold>. Finally, the frame window is made visible if <parameterReference>bMakeVisible</parameterReference> is nonzero. If <parameterReference>bMakeVisible</parameterReference> is 0, the current focus and visible state of the frame window will remain unchanged. It is not necessary to call this function when using the framework's implementation of File New and File Open. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__inmodalstate">
        <!--430b7968-aef8-49f5-86b7-eb6c69a9f6bd-->
        <title>CFrameWnd::InModalState</title>
        <content>
            <para>Call this member function to check if a frame window is modal or modeless.</para>
            <legacySyntax>BOOL InModalState() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if yes; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__istracking">
        <!--8498e19d-4388-48b3-a57a-5187247fdb33-->
        <title>CFrameWnd::IsTracking</title>
        <content>
            <para>Call this member function to determine if the splitter bar in the window is currently being moved.</para>
            <legacySyntax>BOOL IsTracking() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a splitter operation is in progress; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__loadacceltable">
        <!--b434b4fb-ff27-4748-8f90-5a4ef9edd36a-->
        <title>CFrameWnd::LoadAccelTable</title>
        <content>
            <para>Call to load the specified accelerator table.</para>
            <legacySyntax>BOOL LoadAccelTable( LPCTSTR lpszResourceName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszResourceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the name of the accelerator resource. Use <legacyBold>MAKEINTRESOURCE</legacyBold> if the resource is identified with an integer ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the accelerator table was successfully loaded; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only one table can be loaded at a time. </para>
                    <para>Accelerator tables loaded from resources are freed automatically when the application terminates.</para>
                    <para>If you call <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> to create the frame window, the framework loads an accelerator table along with the menu and icon resources, and a subsequent call to this member function is then unnecessary.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__loadbarstate">
        <!--55af47fa-0aa4-4959-bbb2-6743286d6797-->
        <title>CFrameWnd::LoadBarState</title>
        <content>
            <para>Call this function to restore the settings of each control bar owned by the frame window.</para>
            <legacySyntax>void LoadBarState( LPCTSTR lpszProfileName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Name of a section in the initialization (INI) file or a key in the Windows registry where state information is stored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Information restored includes visibility, horizontal/vertical orientation, docking state, and control-bar position. </para>
                    <para>The settings you want to restore must be written to the registry before you call <unmanagedCodeEntityReference>LoadBarState</unmanagedCodeEntityReference>. Write the information to the registry by calling <legacyLink xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343#cwinapp__setregistrykey">CWinApp::SetRegistryKey</legacyLink>. Write the information to the INI file by calling <legacyLink xlink:href="#cframewnd__savebarstate">SaveBarState</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__loadframe">
        <!--60a7ac19-a640-4e72-9682-0bb51da5d80b-->
        <title>CFrameWnd::LoadFrame</title>
        <content>
            <para>Call to dynamically create a frame window from resource information.</para>
            <legacySyntax>virtual BOOL LoadFrame(
    UINT nIDResource,
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,
    CWnd* pParentWnd = NULL,
    CCreateContext* pContext = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of shared resources associated with the frame window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwDefaultStyle</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The frame's <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">style</legacyLink>. Include the <legacyBold>FWS_ADDTOTITLE</legacyBold> style if you want the title bar to automatically display the name of the document represented in the window. </para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the frame's parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext</legacyLink> structure. This parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Construct a <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object in two steps. First, invoke the constructor, which constructs the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object, and then call <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference>, which loads the Windows frame window and associated resources and attaches the frame window to the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object. The <parameterReference>nIDResource</parameterReference> parameter specifies the menu, the accelerator table, the icon, and the string resource of the title for the frame window.</para>
                    <para>Use the <legacyBold>Create</legacyBold> member function rather than <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> when you want to specify all of the frame window's creation parameters.</para>
                    <para>The framework calls <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference> when it creates a frame window using a document template object.</para>
                    <para>The framework uses the <parameterReference>pContext</parameterReference> argument to specify the objects to be connected to the frame window, including any contained view objects. You can set the <parameterReference>pContext</parameterReference> argument to <legacyBold>NULL</legacyBold> when you call <unmanagedCodeEntityReference>LoadFrame</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__m_bautomenuenable">
        <!--fb63f177-0fc2-47cd-a264-9e37636df3c8-->
        <title>CFrameWnd::m_bAutoMenuEnable</title>
        <content>
            <para>When this data member is enabled (which is the default), menu items that do not have <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>ON_COMMAND</unmanagedCodeEntityReference> handlers will be automatically disabled when the user pulls down a menu.</para>
            <legacySyntax>BOOL m_bAutoMenuEnable;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Menu items that have an <unmanagedCodeEntityReference>ON_COMMAND</unmanagedCodeEntityReference> handler but no <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler will be automatically enabled. </para>
                    <para>When this data member is set, menu items are automatically enabled in the same way that toolbar buttons are enabled.</para>
                    <alert class="note">
                        <para> <unmanagedCodeEntityReference>m_bAutoMenuEnable</unmanagedCodeEntityReference> has no effect on top-level menu items.</para>
                    </alert>
                    <para>This data member simplifies the implementation of optional commands based on the current selection and reduces the need to write <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handlers for enabling and disabling menu items.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCWindowing#3</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__negotiateborderspace">
        <!--2be37aff-ecd8-4998-ad8e-4ba418c64f5d-->
        <title>CFrameWnd::NegotiateBorderSpace</title>
        <content>
            <para>Call this member function to negotiate border space in a frame window during OLE inplace activation.</para>
            <legacySyntax>virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,
    LPRECT lpRectBorder );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nBorderCmd</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Contains one of the following values from the <legacyBold>enum BorderCmd</legacyBold>:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>borderGet</legacyBold> = 1</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>borderRequest</legacyBold> = 2</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>borderSet</legacyBold> = 3</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>lpRectBorder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that specifies the coordinates of the border.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is the <legacyBold>CFrameWnd </legacyBold>implementation of OLE border space negotiation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__onbarcheck">
        <!--8f530568-1570-4ac2-8606-3b3fe52e74a7-->
        <title>CFrameWnd::OnBarCheck</title>
        <content>
            <para>Called whenever an action is performed on the specified control bar.</para>
            <legacySyntax>afx_msg BOOL OnBarCheck( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the control bar being shown.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control bar existed; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__oncontexthelp">
        <!--4be7bbf3-17ac-4bdb-a187-c598cbfece94-->
        <title>CFrameWnd::OnContextHelp</title>
        <content>
            <para>Handles SHIFT+F1 Help for in-place items.</para>
            <legacySyntax>afx_msg void OnContextHelp();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To enable context-sensitive help, you must add an</para>
                    <codeReference>NVC_MFCDocViewSDI#16</codeReference>
                    <para>statement to your <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> class message map and also add an accelerator-table entry, typically SHIFT+F1, to enable this member function.</para>
                    <para>If your application is an OLE Container, <unmanagedCodeEntityReference>OnContextHelp</unmanagedCodeEntityReference> puts all in-place items contained within the frame window object into Help mode. The cursor changes to an arrow and a question mark, and the user can then move the mouse pointer and press the left mouse button to select a dialog box, window, menu, or command button. This member function calls the Windows function <unmanagedCodeEntityReference>WinHelp</unmanagedCodeEntityReference> with the Help context of the object under the cursor.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__oncreateclient">
        <!--1a03d8ab-d869-4e5a-ae43-011fd617ad12-->
        <title>CFrameWnd::OnCreateClient</title>
        <content>
            <para>Called by the framework during the execution of <unmanagedCodeEntityReference>OnCreate</unmanagedCodeEntityReference>.</para>
            <legacySyntax>virtual BOOL OnCreateClient(
    LPCREATESTRUCT lpcs,
    CCreateContext* pContext );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpcs</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a Windows <legacyLink xlink:href="028c7b5e-4fdc-48da-a550-d3e4f9e6cc85">CREATESTRUCT</legacyLink> structure                                <legacyItalic>.</legacyItalic>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>pContext</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext</legacyLink> structure                                <legacyItalic>.</legacyItalic>
                            </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Never call this function.</para>
                    <para>The default implementation of this function creates a <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference> object from the information provided in <parameterReference>pContext</parameterReference>, if possible.</para>
                    <para>Override this function to override values passed in the <unmanagedCodeEntityReference>CCreateContext</unmanagedCodeEntityReference> object or to change the way controls in the main client area of the frame window are created. The <unmanagedCodeEntityReference>CCreateContext</unmanagedCodeEntityReference> members you can override are described in the <legacyLink xlink:href="337a0e44-d910-49a8-afc0-c7207666a9dc">CCreateContext</legacyLink> class.</para>
                    <alert class="note">
                        <para>Do not replace values passed in the <unmanagedCodeEntityReference>CREATESTRUCT</unmanagedCodeEntityReference> structure. They are for informational use only. If you want to override the initial window rectangle, for example, override the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> member function <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__precreatewindow">PreCreateWindow</legacyLink>.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__onhidemenubar">
        <!--c87cf2dd-0e80-4d0c-849e-ca763c545019-->
        <title>CFrameWnd::OnHideMenuBar</title>
        <content>
            <para>This function is called when the system is about to hide the menu bar in the current MFC application. </para>
            <legacySyntax>virtual void OnHideMenuBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This event handler enables your application to perform custom actions when the system is about to hide the menu. You cannot prevent the menu from being hidden, but you can, for example, call other methods to retrieve the menu style or state.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__onsetpreviewmode">
        <!--da27d6b0-94ec-4d8b-ab3a-672e571cc65e-->
        <title>CFrameWnd::OnSetPreviewMode</title>
        <content>
            <para>Call this member function to set the application's main frame window into and out of print-preview mode.</para>
            <legacySyntax>virtual void OnSetPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>bPreview</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether or not to place the application in print-preview mode. Set to <legacyBold>TRUE</legacyBold> to place in print preview, <legacyBold>FALSE</legacyBold> to cancel preview mode.</para>
                        </definition>
                        <definedTerm> <parameterReference>pState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyBold>CPrintPreviewState</legacyBold> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation disables all standard toolbars and hides the main menu and the main client window. This turns MDI frame windows into temporary SDI frame windows.</para>
                    <para>Override this member function to customize the hiding and showing of control bars and other frame window parts during print preview. Call the base class implementation from within the overridden version.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__onshowmenubar">
        <!--914e4d23-e441-4cbd-b378-be6731301cdf-->
        <title>CFrameWnd::OnShowMenuBar</title>
        <content>
            <para>This function is called when the system is about to display the menu bar in the current MFC application. </para>
            <legacySyntax>virtual void OnShowMenuBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This event handler enables your application to perform custom actions when the menu is about to be displayed. You cannot prevent the menu from being displayed, but you can, for example, call other methods to retrieve the menu style or state.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__onupdatecontrolbarmenu">
        <!--f3617eda-72f6-4fc8-9314-6b5992348fc9-->
        <title>CFrameWnd::OnUpdateControlBarMenu</title>
        <content>
            <para>Called by the framework when the associated menu is updated.</para>
            <legacySyntax>afx_msg void OnUpdateControlBarMenu( CCmdUI* pCmdUI );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pCmdUI</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</legacyLink> object representing the menu that generated the update command. The update handler calls the <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766#ccmdui__enable">Enable</legacyLink> member function of the <unmanagedCodeEntityReference>CCmdUI</unmanagedCodeEntityReference> object through <parameterReference>pCmdUI</parameterReference> to update the user interface.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__recalclayout">
        <!--a04f3354-a6fb-4b33-998f-b92946081a04-->
        <title>CFrameWnd::RecalcLayout</title>
        <content>
            <para>Called by the framework when the standard control bars are toggled on or off or when the frame window is resized.</para>
            <legacySyntax>virtual void RecalcLayout( BOOL bNotify = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bNotify</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Determines whether the active in-place item for the frame window receives notification of the layout change. If <legacyBold>TRUE</legacyBold>, the item is notified; otherwise <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation of this member function calls the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> member function <unmanagedCodeEntityReference>RepositionBars</unmanagedCodeEntityReference> to reposition all the control bars in the frame as well as in the main client window (usually a <unmanagedCodeEntityReference>CView</unmanagedCodeEntityReference> or <legacyBold>MDICLIENT</legacyBold>).</para>
                    <para>Override this member function to control the appearance and behavior of control bars after the layout of the frame window has changed. For example, call it when you turn control bars on or off or add another control bar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__rectdefault">
        <!--f9e4cb66-e237-4a4a-9b94-781b474cb345-->
        <title>CFrameWnd::rectDefault</title>
        <content>
            <para>Pass this static <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> as a parameter when creating a window to allow Windows to choose the window's initial size and position.</para>
            <legacySyntax>static AFX_DATA const CRect rectDefault;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cframewnd__savebarstate">
        <!--3b4e7f29-935f-4693-8d6c-9de2e86f5295-->
        <title>CFrameWnd::SaveBarState</title>
        <content>
            <para>Call this function to store information about each control bar owned by the frame window.</para>
            <legacySyntax>void SaveBarState( LPCTSTR lpszProfileName ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Name of a section in the initialization file or a key in the Windows registry where state information is stored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This information can be read from the initialization file using <legacyLink xlink:href="#cframewnd__loadbarstate">LoadBarState</legacyLink>. Information stored includes visibility, horizontal/vertical orientation, docking state, and control bar position.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setactivepreviewview">
        <!--0acdb128-a84a-4bca-9938-481cb6536ca9-->
        <title>CFrameWnd::SetActivePreviewView</title>
        <content>
            <para>Designates the specified view to be the active view for Rich Preview.</para>
            <legacySyntax>void SetActivePreviewView( CView* pViewNew );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pViewNew</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a view to be activated.</para>
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
    <section address="cframewnd__setactiveview">
        <!--fec424f1-2bbd-4ed1-be9e-88ff1e2b092d-->
        <title>CFrameWnd::SetActiveView</title>
        <content>
            <para>Call this member function to set the active view.</para>
            <legacySyntax>void SetActiveView(
    CView* pViewNew,
    BOOL bNotify = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pViewNew</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies a pointer to a <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</legacyLink> object, or <legacyBold>NULL</legacyBold> for no active view.</para>
                        </definition>
                        <definedTerm> <parameterReference>bNotify</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the view is to be notified of activation. If <legacyBold>TRUE</legacyBold>, <unmanagedCodeEntityReference>OnActivateView</unmanagedCodeEntityReference> is called for the new view; if <legacyBold>FALSE</legacyBold>, it is not.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework will call this function automatically as the user changes the focus to a view within the frame window. You can explicitly call <unmanagedCodeEntityReference>SetActiveView</unmanagedCodeEntityReference> to change the focus to the specified view.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setdockstate">
        <!--af599457-1eb6-4337-86d3-771bd71a4cc3-->
        <title>CFrameWnd::SetDockState</title>
        <content>
            <para>Call this member function to apply state information stored in a <unmanagedCodeEntityReference>CDockState</unmanagedCodeEntityReference> object to the frame window's control bars.</para>
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
                            <para>Apply the stored state to the frame window's control bars.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To restore a previous state of the control bars, you can load the stored state with <unmanagedCodeEntityReference>CDockState::LoadState</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>Serialize</unmanagedCodeEntityReference>, then use <unmanagedCodeEntityReference>SetDockState</unmanagedCodeEntityReference> to apply it to the frame window's control bars. The previous state is stored in the <unmanagedCodeEntityReference>CDockState</unmanagedCodeEntityReference> object with <unmanagedCodeEntityReference>GetDockState</unmanagedCodeEntityReference>
                    </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setmenubarstate">
        <!--8bcaee11-1867-4f70-83cc-44f3c51c40e8-->
        <title>CFrameWnd::SetMenuBarState</title>
        <content>
            <para>Sets the display state of the menu in the current MFC application to hidden or displayed. </para>
            <legacySyntax>virtual BOOL SetMenuBarState( 
    DWORD nState);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[in] <parameterReference>nState</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether to display or hide the menu. The <parameterReference>nState</parameterReference> parameter can have the following values:</para>
                                    <list class="bullet">
                                        <listItem>
                                            <para>AFX_MBS_VISIBLE (0x01) – Displays the menu if it is hidden, but has no effect if it is visible. </para>
                                        </listItem>
                                        <listItem>
                                            <para>AFX_MBS_HIDDEN (0x02) – Hides the menu if it is visible, but has no effect if it is hidden.</para>
                                        </listItem>
                                    </list>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if this method successfully changes the menu state; otherwise, <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a runtime error occurs, this method asserts in Debug mode and raises an exception derived from the <legacyLink xlink:href="cfacf14d-bfe4-4666-a5c7-38b800512920">CException</legacyLink> class. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setmenubarvisibility">
        <!--c7ec0613-019d-4b37-afaa-7cd183a4617d-->
        <title>CFrameWnd::SetMenuBarVisibility</title>
        <content>
            <para>Sets the default behavior of the menu in the current MFC application to be either hidden or visible. </para>
            <legacySyntax>virtual void SetMenuBarVisibility(
    DWORD nStyle);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[in] <parameterReference>nStyle</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the menu is by default hidden, or is visible and has the focus. The <parameterReference>nStyle</parameterReference> parameter can have the following values:</para>
                                    <list class="bullet">
                                        <listItem>
                                            <para>AFX_MBV_KEEPVISIBLE (0x01) - </para>
                                            <para>The menu is displayed at all times, and by default does not have the focus.</para>
                                        </listItem>
                                        <listItem>
                                            <para>AFX_MBV_DISPLAYONFOCUS (0x02) - </para>
                                            <para>The menu is hidden by default. If the menu is hidden, press the ALT key to display the menu and give it the focus. If the menu is displayed, press the ALT or ESC key to hide menu. </para>
                                        </listItem>
                                        <listItem>
                                            <para>AFX_MBV_ DISPLAYONFOCUS (0x02) | AFX_MBV_DISPLAYONF10 (0x04) </para>
                                            <para>(bitwise combination (OR)) - The menu is hidden by default. If the menu is hidden, press the F10 key to display the menu and give it the focus. If the menu is displayed, press the F10 key to toggle the focus on or off the menu. The menu is displayed until you press the ALT or ESC key to hide it. </para>
                                        </listItem>
                                    </list>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the value of the <parameterReference>nStyle</parameterReference> parameter is not valid, this method asserts in Debug mode and raises <legacyLink xlink:href="e43d7c67-1157-47f8-817a-804083e8186e">CInvalidArgException</legacyLink> in Release mode. In case of other runtime errors, this method asserts in Debug mode and raises an exception derived from the <legacyLink xlink:href="cfacf14d-bfe4-4666-a5c7-38b800512920">CException</legacyLink> class. </para>
                    <para>This method affects the state of menus in applications written for <token>windowsver</token> and later. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setmessagetext">
        <!--50162bc5-c46f-434c-a4fc-f152b8d2d09d-->
        <title>CFrameWnd::SetMessageText</title>
        <content>
            <para>Call this function to place a string in the status-bar pane that has an ID of 0.</para>
            <legacySyntax>void SetMessageText( LPCTSTR lpszText );

void SetMessageText( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the string to be placed on the status bar.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>String resource ID of the string to be placed on the status bar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is typically the leftmost, and longest, pane of the status bar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__setprogressbarposition">
        <!--2ff30f99-9b5f-4b10-b2c7-a54e0b874750-->
        <title>CFrameWnd::SetProgressBarPosition</title>
        <content>
            <para>Sets the current position for the Windows 7 progress bar displayed on the taskbar.</para>
            <legacySyntax>void SetProgressBarPosition( int nProgressPos );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nProgressPos</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the position to set. It must be within the range set by <unmanagedCodeEntityReference>SetProgressBarRange</unmanagedCodeEntityReference>.</para>
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
    <section address="cframewnd__setprogressbarrange">
        <!--c96c1362-3e68-4074-ae32-8643874fdb8e-->
        <title>CFrameWnd::SetProgressBarRange</title>
        <content>
            <para>Sets the range for the Windows 7 progress bar displayed on the taskbar.</para>
            <legacySyntax>void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nRangeMin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Minimal value.</para>
                        </definition>
                        <definedTerm> <parameterReference>nRangeMax</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Maximal value.</para>
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
    <section address="cframewnd__setprogressbarstate">
        <!--f22ad49c-2e62-4435-ae09-9ee7d2c33232-->
        <title>CFrameWnd::SetProgressBarState</title>
        <content>
            <para>Sets the type and state of the progress indicator displayed on a taskbar button.</para>
            <legacySyntax>void SetProgressBarState( TBPFLAG tbpFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>tbpFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags that control the current state of the progress button. Specify only one of the following flags because all states are mutually exclusive: TBPF_NOPROGRESS, TBPF_INDETERMINATE, TBPF_NORMAL, TBPF_ERROR, TBPF_PAUSED.</para>
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
    <section address="cframewnd__settaskbaroverlayicon">
        <!--de01645d-99ac-4a35-8bd6-f1047c9975d3-->
        <title>CFrameWnd::SetTaskbarOverlayIcon</title>
        <content>
            <para>Overloaded. Applies an overlay to a taskbar button to indicate application status or to notify the user.</para>
            <legacySyntax>BOOL SetTaskbarOverlayIcon(
    UINT nIDResource,
    LPCTSTR lpcszDescr );

BOOL SetTaskbarOverlayIcon(
    HICON hIcon,
    LPCTSTR lpcszDescr );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the Resource ID of an icon to use as the overlay. See description for <parameterReference>hIcon</parameterReference> for details.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpcszDescr</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a string that provides an alt text version of the information conveyed by the overlay, for accessibility purposes.</para>
                        </definition>
                        <definedTerm> <parameterReference>hIcon</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The handle of an icon to use as the overlay. This should be a small icon, measuring 16x16 pixels at 96 dots per inch (dpi). If an overlay icon is already applied to the taskbar button, that existing overlay is replaced. This value can be <languageKeyword>NULL</languageKeyword>. How a <languageKeyword>NULL</languageKeyword> value is handled depends on whether the taskbar button represents a single window or a group of windows. It is the responsibility of the calling application to free <parameterReference>hIcon</parameterReference> when it is no longer needed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if successful; <languageKeyword>FALSE</languageKeyword> if OS version is less than Windows 7 or if an error occurs setting the icon.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cframewnd__settitle">
        <!--a6bb45ef-8949-4a82-9049-11b801964ce6-->
        <title>CFrameWnd::SetTitle</title>
        <content>
            <para>Sets the title of the window object.</para>
            <legacySyntax>void SetTitle( LPCTSTR lpszTitle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszTitle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a character string containing the title of the window object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__showcontrolbar">
        <!--1115463b-0c0a-4403-8ab5-5701a7889490-->
        <title>CFrameWnd::ShowControlBar</title>
        <content>
            <para>Call this member function to show or hide the control bar.</para>
            <legacySyntax>void ShowControlBar(
    CControlBar* pBar,
    BOOL bShow,
    BOOL bDelay );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pBar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the control bar to be shown or hidden.</para>
                        </definition>
                        <definedTerm> <parameterReference>bShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <legacyBold>TRUE</legacyBold>, specifies that the control bar is to be shown. If <legacyBold>FALSE</legacyBold>, specifies that the control bar is to be hidden.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bDelay</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>If <legacyBold>TRUE</legacyBold>, delay showing the control bar. If <legacyBold>FALSE</legacyBold>, show the control bar immediately.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cframewnd__showownedwindows">
        <!--c66e5354-cf72-4ead-af8d-11b7408dc976-->
        <title>CFrameWnd::ShowOwnedWindows</title>
        <content>
            <para>Call this member function to show all windows that are descendants of the <unmanagedCodeEntityReference>CFrameWnd</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>void ShowOwnedWindows( BOOL bShow );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the owned windows are to be shown or hidden.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</link> <link xlink:href="fa8736e6-511b-4c51-8b4d-eba78378aeb9">CMDIFrameWnd</link> <link xlink:href="6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5">CMDIChildWnd</link> <link xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</link> <link xlink:href="14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6">CDocTemplate</link> <link xlink:href="de62b6ef-90d4-420f-8c70-f58b36976a2b">CRuntimeClass</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



