---
description: "Learn more about: Managing Menus, Control Bars, and Accelerators"
title: "Managing Menus, Control Bars, and Accelerators"
ms.date: "11/04/2016"
helpviewer_keywords: ["MDI [MFC], frame windows", "control bars [MFC], updating in frame windows", "menus [MFC], updating as context changes", "user interface objects [MFC], updating", "accelerator tables [MFC]", "sharing menus [MFC]", "updating user-interface objects [MFC]", "frame windows [MFC], updating", "status bars [MFC], updating"]
ms.assetid: 97ca1997-06df-4373-b023-4f7ecd81047b
---
# Managing Menus, Control Bars, and Accelerators

The frame window manages updating user-interface objects, including menus, toolbar buttons, the status bar, and accelerators. It also manages sharing the menu bar in MDI applications.

## Managing Menus

The frame window participates in updating user-interface items using the ON_UPDATE_COMMAND_UI mechanism described in [How to Update User-Interface Objects](how-to-update-user-interface-objects.md). Buttons on toolbars and other control bars are updated during the idle loop. Menu items in drop-down menus on the menu bar are updated just before the menu drops down.

For MDI applications, the MDI frame window manages the menu bar and caption. An MDI frame window owns one default menu that is used as the menu bar when there are no active MDI child windows. When there are active children, the MDI frame window's menu bar is taken over by the menu for the active MDI child window. If an MDI application supports multiple document types, such as chart and worksheet documents, each type puts its own menus into the menu bar and changes the main frame window's caption.

[CMDIFrameWnd](reference/cmdiframewnd-class.md) provides default implementations for the standard commands on the Window menu that appears for MDI applications. In particular, the New Window command (ID_WINDOW_NEW) is implemented to create a new frame window and view on the current document. You need to override these implementations only if you need advanced customization.

Multiple MDI child windows of the same document type share menu resources. If several MDI child windows are created by the same document template, they can all use the same menu resource, saving on system resources in Windows.

## Managing the Status Bar

The frame window also positions the status bar within its client area and manages the status bar's indicators. The frame window clears and updates the message area in the status bar as needed and displays prompt strings as the user selects menu items or toolbar buttons, as described in [How to Display Command Information in the Status Bar](how-to-display-command-information-in-the-status-bar.md).

## Managing Accelerators

Each frame window maintains an optional accelerator table that does keyboard accelerator translation for you automatically. This mechanism makes it easy to define accelerator keys (also called shortcut keys) that invoke menu commands.

## See also

[Using Frame Windows](using-frame-windows.md)
