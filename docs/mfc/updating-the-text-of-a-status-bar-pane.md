---
description: "Learn more about: Updating the Text of a Status-Bar Pane"
title: "Updating the Text of a Status-Bar Pane"
ms.date: "11/04/2016"
helpviewer_keywords: ["updating user interface objects [MFC]", "ON_UPDATE_COMMAND_UI macro [MFC]", "user interface objects [MFC], updating", "text, status bar", "CStatusBar class [MFC], updating", "SetText method [MFC]", "panes, status bar", "status bars [MFC], updating"]
ms.assetid: 4984a3f4-9905-4d8c-a927-dca19781053b
---
# Updating the Text of a Status-Bar Pane

This article explains how to change the text that appears in an MFC status bar pane. A status bar — a window object of class [CStatusBar](../mfc/reference/cstatusbar-class.md) — contains several "panes." Each pane is a rectangular area of the status bar that you can use to display information. For example, many applications display the status of the CAPS LOCK, NUM LOCK, and other keys in the rightmost panes. Applications also often display informative text in the leftmost pane (pane 0), sometimes called the "message pane." For example, the default MFC status bar uses the message pane to display a string explaining the currently selected menu item or toolbar button. The figure in [Status Bars](../mfc/status-bar-implementation-in-mfc.md) shows a status bar from an Application Wizard-created MFC application.

By default, MFC does not enable a `CStatusBar` pane when it creates the pane. To activate a pane, you must use the ON_UPDATE_COMMAND_UI macro for each pane on the status bar and update the panes. Because panes do not send WM_COMMAND messages (they aren't like toolbar buttons), you must type the code manually.

For example, suppose one pane has `ID_INDICATOR_PAGE` as its command identifier and that it contains the current page number in a document. The following procedure describes how to create a new pane in the status bar.

### To make a new pane

1. Define the pane's command ID.

   On the **View** menu, click **Resource View**. Right-click the project resource and click **Resource Symbols**. In the Resource Symbols dialog box, click `New`. Type a command ID name: for example, `ID_INDICATOR_PAGE`. Specify a value for the ID, or accept the value suggested by the Resource Symbols dialog box. For example, for `ID_INDICATOR_PAGE`, accept the default value. Close the Resource Symbols dialog box.

1. Define a default string to display in the pane.

   With Resource View open, double-click **String Table** in the window that lists resource types for your application. With the **String Table** editor open, choose **New String** from the **Insert** menu. Select your pane's command ID (for example, `ID_INDICATOR_PAGE`) and type a default string value, such as "Page   ". Close the string editor. (You need a default string to avoid a compiler error.)

1. Add the pane to the *indicators* array.

   In file MAINFRM.CPP, locate the *indicators* array. This array lists command IDs for all of the status bar's indicators, in order from left to right. At the appropriate point in the array, enter your pane's command ID, as shown here for `ID_INDICATOR_PAGE`:

   [!code-cpp[NVC_MFCDocView#10](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_1.cpp)]

The recommended way to display text in a pane is to call the `SetText` member function of class `CCmdUI` in an update handler function for the pane. For example, you might want to set up an integer variable *m_nPage* that contains the current page number and use `SetText` to set the pane's text to a string version of that number.

> [!NOTE]
> The `SetText` approach is recommended. It is possible to perform this task at a slightly lower level by calling the `CStatusBar` member function `SetPaneText`. Even so, you still need an update handler. Without such a handler for the pane, MFC automatically disables the pane, erasing its content.

The following procedure shows how to use an update handler function to display text in a pane.

#### To make a pane display text

1. Add a command update handler for the command.

   Manually add a prototype for the handler, as shown here for `ID_INDICATOR_PAGE` (in MAINFRM.H):

   [!code-cpp[NVC_MFCDocView#11](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_2.h)]

1. In the appropriate .CPP file, add the handler's definition, as shown here for `ID_INDICATOR_PAGE` (in MAINFRM.CPP):

   [!code-cpp[NVC_MFCDocView#12](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_3.cpp)]

   The last three lines of this handler are the code that displays your text.

1. In the appropriate message map, add the ON_UPDATE_COMMAND_UI macro, as shown here for `ID_INDICATOR_PAGE` (in MAINFRM.CPP):

   [!code-cpp[NVC_MFCDocView#13](../mfc/codesnippet/cpp/updating-the-text-of-a-status-bar-pane_4.cpp)]

Once you define the value of the *m_nPage* member variable (of class `CMainFrame`), this technique causes the page number to appear in the pane during idle processing in the same manner that the application updates other indicators. If *m_nPage* changes, the display changes during the next idle loop.

### What do you want to know more about

- [Updating user-interface objects (how to update toolbar buttons and menu items as program conditions change)](../mfc/how-to-update-user-interface-objects.md)

## See also

[Status Bar Implementation in MFC](../mfc/status-bar-implementation-in-mfc.md)<br/>
[CStatusBar Class](../mfc/reference/cstatusbar-class.md)
