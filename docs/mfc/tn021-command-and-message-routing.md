---
description: "Learn more about: TN021: Command and Message Routing"
title: "TN021: Command and Message Routing"
ms.date: "06/28/2018"
f1_keywords: ["vc.routing"]
helpviewer_keywords: ["TN021", "command routing [MFC], technical note TN021", "Windows messages [MFC], routing"]
ms.assetid: b5952c8b-123e-406c-a36d-a6ac7c6df307
---
# TN021: Command and Message Routing

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note describes the command routing and dispatch architecture as well as advanced topics in general window message routing.

Please refer to Visual C++ for general details on the architectures described here, especially the distinction between Windows messages, control notifications, and commands. This note assumes you are very familiar with the issues described in the printed documentation and only addresses very advanced topics.

## Command Routing and Dispatch MFC 1.0 Functionality Evolves to MFC 2.0 Architecture

Windows has the WM_COMMAND message that is overloaded to provide notifications of menu commands, accelerator keys and dialog-control notifications.

MFC 1.0 built on that a little by allowing a command handler (for example, "OnFileNew") in a `CWnd` derived class to get called in response to a specific WM_COMMAND. This is glued together with a data structure called the message map, and results in a very space-efficient command mechanism.

MFC 1.0 also provided additional functionality for separating control notifications from command messages. Commands are represented by a 16-bit ID, sometimes known as a Command ID. Commands normally start from a `CFrameWnd` (that is, a menu select or a translated accelerator) and get routed to a variety of other windows.

MFC 1.0 used command routing in a limited sense for the implementation of Multiple Document Interface (MDI). (An MDI frame window delegate commands to its active MDI Child window.)

This functionality has been generalized and extended in MFC 2.0 to allow commands to be handled by a wider range of objects (not just window objects). It provides a more formal and extensible architecture for routing messages and reuses the command target routing for not only handling of commands, but also for updating UI objects (like menu items and toolbar buttons) to reflect the current availability of a command.

## Command IDs

See Visual C++ for an explanation of the command routing and binding process. [Technical Note 20](../mfc/tn020-id-naming-and-numbering-conventions.md) contains information on ID naming.

We use the generic prefix "ID_" for command IDs. Command IDs are >= 0x8000. The message line or status bar will show the command description string if there is a STRINGTABLE resource with the same IDs as the command ID.

In the resources of your application, a command ID can appears in several places:

- In one STRINGTABLE resource that has the same ID as the message-line prompt.

- In possibly many MENU resources that are attached to menu items that invoke the same command.

- (ADVANCED) in a dialog button for a GOSUB command.

In the source code of your application, a command ID can appears in several places:

- In your RESOURCE.H (or other main symbol header file) to define application-specific command IDs.

- PERHAPS In an ID array used to create a toolbar.

- In an ON_COMMAND macro.

- PERHAPS In an ON_UPDATE_COMMAND_UI macro.

Currently, the only implementation in MFC that requires command IDs be >= 0x8000 is the implementation of GOSUB dialogs/commands.

## GOSUB Commands, Using Command Architecture in Dialogs

The command architecture of routing and enabling commands works well with frame windows, menu items, toolbar buttons, dialog bar buttons, other control bars and other user-interface elements designed to update on demand and route commands or control IDs to a main command target (usually the main frame window). That main command target may route the command or control notifications to other command target objects as appropriate.

A dialog (modal or modeless) can benefit from some of the features of the command architecture if you assign the control ID of the dialog control to the appropriate command ID. Support for dialogs is not automatic, so you may have to write some additional code.

Note that for all these features to work properly, your command IDs should be >= 0x8000. Since many dialogs could get routed to the same frame, shared commands should be >= 0x8000, while the nonshared IDCs in a specific dialog should be <= 0x7FFF.

You can place a normal button in a normal modal dialog with the IDC of the button set to the appropriate command ID. When the user selects the button, the owner of the dialog (usually the main frame window) gets the command just like any other command. This is called a GOSUB command since it usually is used to bring up another dialog (a GOSUB of the first dialog).

You can also call the function `CWnd::UpdateDialogControls` on your dialog and pass it the address of your main frame window. This function will enable or disable your dialog controls based on whether they have command handlers in the frame. This function is called automatically for you for control bars in your application's idle loop, but you must call it directly for normal dialogs that you wish to have this feature.

## When ON_UPDATE_COMMAND_UI is Called

Maintaining the enabled/checked state of all a program's menu items all the time can be a computationally expensive problem. A common technique is to enable/check menu items only when the user selects the POPUP. The MFC 2.0 implementation of `CFrameWnd` handles the WM_INITMENUPOPUP message and uses the command routing architecture to determine the states of menus through ON_UPDATE_COMMAND_UI handlers.

`CFrameWnd` also handles the WM_ENTERIDLE message to describe the current menu item selected on the status bar (also known as the message line).

An application's menu structure, edited by Visual C++, is used to represent the potential commands available at WM_INITMENUPOPUP time. ON_UPDATE_COMMAND_UI handlers can modify the state or text of a menu, or for advanced uses (like the File MRU list or the OLE Verbs pop-up menu), actually modify the menu structure before the menu is drawn.

The same sort of ON_UPDATE_COMMAND_UI processing is done for toolbars (and other control bars) when the application enters its idle loop. See the *Class Library Reference* and [Technical Note 31](../mfc/tn031-control-bars.md) for more information on control bars.

## Nested Pop-up Menus

If you are using a nested menu structure, you will notice that the ON_UPDATE_COMMAND_UI handler for the first menu item in the pop-up menu is called in two different cases.

First, it is called for the pop-up menu itself. This is necessary because pop-up menus do not have IDs and we use the ID of the first menu item of the pop-up menu to refer to the entire pop-up menu. In this case, the *m_pSubMenu* member variable of the `CCmdUI` object will be non-NULL and will point to the pop-up menu.

Second, it is called just before the menu items in the pop-up menu are to be drawn. In this case, the ID refers just to the first menu item and the *m_pSubMenu* member variable of the `CCmdUI` object will be NULL.

This allows you to enable the pop-up menu distinct from its menu items, but requires that you write some menu aware code. For example, in a nested menu with the following structure:

```Output
File>
    New>
    Sheet (ID_NEW_SHEET)
    Chart (ID_NEW_CHART)
```

The ID_NEW_SHEET and ID_NEW_CHART commands can be independently enabled or disabled. The **New** pop-up menu should be enabled if either of the two is enabled.

The command handler for ID_NEW_SHEET (the first command in the pop-up) would look something like:

```cpp
void CMyApp::OnUpdateNewSheet(CCmdUI* pCmdUI)
{
    if (pCmdUI->m_pSubMenu != NULL)
    {
        // enable entire pop-up for "New" sheet and chart
        BOOL bEnable = m_bCanCreateSheet || m_bCanCreateChart;
        // CCmdUI::Enable is a no-op for this case, so we
        // must do what it would have done.
        pCmdUI->m_pMenu->EnableMenuItem(pCmdUI->m_nIndex,
            MF_BYPOSITION |
            (bEnable  MF_ENABLED : (MF_DISABLED | MF_GRAYED)));

        return;
    }
    // otherwise just the New Sheet command
    pCmdUI->Enable(m_bCanCreateSheet);
}
```

The command handler for ID_NEW_CHART would be a normal update command handler and look something like:

```cpp
void CMyApp::OnUpdateNewChart(CCmdUI* pCmdUI)
{
    pCmdUI->Enable(m_bCanCreateChart);
}
```

## ON_COMMAND and ON_BN_CLICKED

The message map macros for **ON_COMMAND** and **ON_BN_CLICKED** are the same. The MFC command and control notification routing mechanism only uses the command ID to decide where to route to. Control notifications with control notification code of zero (**BN_CLICKED**) are interpreted as commands.

> [!NOTE]
> In fact, all control notification messages go through the command handler chain. For example, it is technically possible for you to write a control notification handler for **EN_CHANGE** in your document class. This is not generally advisable because the practical applications of this feature are few, the feature is not supported by ClassWizard, and use of the feature can result in fragile code.

## Disabling the Automatic Disabling of Button Controls

If you place a button control on a dialog bar, or in a dialog using where you are calling **CWnd::UpdateDialogControls** on your own, you will notice that buttons which do not have **ON_COMMAND** or **ON_UPDATE_COMMAND_UI** handlers will be automatically disabled for you by the framework. In some cases, you will not need to have a handler, but you will want the button to remain enabled. The easiest way to achieve this is to add a dummy command handler (easy to do with ClassWizard) and do nothing in it.

## Window Message Routing

The following describes some more advanced topics on the MFC classes and how Windows message routing and other topics impact them. The information here is only described briefly. Refer to the *Class Library Reference* for details about public APIs. Please refer to the MFC library source code for more information on implementation details.

Please refer to [Technical Note 17](../mfc/tn017-destroying-window-objects.md) for details on Window cleanup, a very important topic for all **CWnd**-derived classes.

## CWnd Issues

The implementation member function **CWnd::OnChildNotify** provides a powerful and extensible architecture for child windows (also known as controls) to hook or otherwise be informed of messages, commands, and control notifications that go to their parent (or "owner"). If the child window (/control) is a C++ **CWnd** object itself, the virtual function **OnChildNotify** is called first with the parameters from the original message (that is, a **MSG** structure). The child window can leave the message alone, eat it, or modify the message for the parent (rare).

The default **CWnd** implementation handles the following messages and uses the **OnChildNotify** hook to allow child windows (controls) to first access at the message:

- **WM_MEASUREITEM** and **WM_DRAWITEM** (for self-draw)

- **WM_COMPAREITEM** and **WM_DELETEITEM** (for self-draw)

- **WM_HSCROLL** and **WM_VSCROLL**

- **WM_CTLCOLOR**

- **WM_PARENTNOTIFY**

You will notice the **OnChildNotify** hook is used for changing owner-draw messages into self-draw messages.

In addition to the **OnChildNotify** hook, scroll messages have further routing behavior. Please see below for more details on scroll bars and sources of **WM_HSCROLL** and **WM_VSCROLL** messages.

## CFrameWnd Issues

The **CFrameWnd** class provides most of the command routing and user-interface updating implementation. This is primarily used for the main frame window of the application (**CWinApp::m_pMainWnd**) but applies to all frame windows.

The main frame window is the window with the menu bar and is the parent of the status bar or message line. Please refer to the above discussion on command routing and **WM_INITMENUPOPUP.**

The **CFrameWnd** class provides management of the active view. The following messages are routed through the active view:

- All command messages (the active view gets first access to them).

- **WM_HSCROLL** and **WM_VSCROLL** messages from sibling scroll bars (see below).

- **WM_ACTIVATE** (and **WM_MDIACTIVATE** for MDI) get turned into calls to the virtual function **CView::OnActivateView**.

## CMDIFrameWnd/CMDIChildWnd Issues

Both MDI frame window classes derive from **CFrameWnd** and therefore are both enabled for the same sort of command routing and user-interface updating provided in **CFrameWnd**. In a typical MDI application, only the main frame window (that is, the **CMDIFrameWnd** object) holds the menu bar and the status bar and therefore is the main source of the command routing implementation.

The general routing scheme is that the active MDI child window gets first access to commands. The default **PreTranslateMessage** functions handle accelerator tables for both MDI child windows (first) and the MDI frame (second) as well as the standard MDI system-command accelerators normally handled by **TranslateMDISysAccel** (last).

## Scroll Bar Issues

When handling scroll-message (**WM_HSCROLL**/**OnHScroll** and/or **WM_VSCROLL**/**OnVScroll**), you should try to write the handler code so it does not rely on where the scroll bar message came from. This is not only a general Windows issue, since scroll messages can come from true scroll bar controls or from **WS_HSCROLL**/**WS_VSCROLL** scroll bars which are not scroll bar controls.

MFC extends that to allow for scroll bar controls to be either child or siblings of the window being scrolled (in fact, the parent/child relationship between the scroll bar and window being scrolled can be anything). This is especially important for shared scroll bars with splitter windows. Please refer to [Technical Note 29](../mfc/tn029-splitter-windows.md) for details on the implementation of **CSplitterWnd** including more information on shared scroll bar issues.

On a side note, there are two **CWnd** derived classes where the scroll bar styles specified at create time are trapped and not passed to Windows. When passed to a creation routine, **WS_HSCROLL** and **WS_VSCROLL** can be independently set, but after creation cannot be changed. Of course, you should not directly test or set the WS_SCROLL style bits of the window that they created.

For **CMDIFrameWnd** the scroll bar styles you pass in to **Create** or **LoadFrame** are used to create the MDICLIENT. If you wish to have a scrollable MDICLIENT area (like the Windows Program Manager) be sure to set both scroll bar styles (**WS_HSCROLL** &#124; **WS_VSCROLL**) for the style used to create the **CMDIFrameWnd**.

For **CSplitterWnd** the scroll bar styles apply to the special shared scroll bars for the splitter regions. For static splitter windows, you will normally not set either scroll bar style. For dynamic splitter windows, you will usually have the scroll bar style set for the direction you will split, That is, **WS_HSCROLL** if you can split rows, **WS_VSCROLL** if you can split columns.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
