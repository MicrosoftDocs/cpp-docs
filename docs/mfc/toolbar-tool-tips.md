---
description: "Learn more about: Toolbar Tool Tips"
title: "Toolbar Tool Tips"
ms.date: "11/04/2016"
helpviewer_keywords: ["tool tips [MFC], activating", "CBRS_TOOLTIPS constant [MFC]", "tool tips [MFC], adding text", "updates [MFC]", "CBRS_FLYBY constant [MFC]", "tool tips [MFC]", "updating status bar messages", "updates, status bar messages", "status bars [MFC], tool tips", "flyby status bar updates"]
ms.assetid: d1696305-b604-4fad-9f09-638878371412
---
# Toolbar Tool Tips

Tool tips are the tiny popup windows that present short descriptions of a toolbar button's purpose when you position the mouse over a button for a period of time. When you create an application with the Application Wizard that has a toolbar, tool tip support is provided for you. This article explains both the tool tip support created by the Application Wizard and how to add tool tip support to your application.

This article covers:

- [Activating tool tips](#_core_activating_tool_tips)

- [Flyby status bar updates](#_core_fly_by_status_bar_updates)

## <a name="_core_activating_tool_tips"></a> Activating Tool Tips

To activate tool tips in your application, you must do two things:

- Add the CBRS_TOOLTIPS style to the other styles (such as WS_CHILD, WS_VISIBLE, and other **CBRS_** styles) passed as the *dwStyle* parameter to the [CToolBar::Create](../mfc/reference/ctoolbar-class.md#create) function or in [SetBarStyle](../mfc/reference/ccontrolbar-class.md#setbarstyle).

- As described in the procedure below, append the toolbar tip text, separated by a newline character ('\n'), to the string resource containing the command-line prompt for the toolbar command. The string resource shares the ID of the toolbar button.

#### To add the tool tip text

1. While you are editing the toolbar in the toolbar editor, open the **Toolbar Button Properties** window for a given button.

1. In the **Prompt** box, specify the text you want to appear in the tool tip for that button.

> [!NOTE]
> Setting the text as a button property in the toolbar editor replaces the former procedure, in which you had to open and edit the string resource.

If a control bar with tool tips enabled has child controls placed on it, the control bar will display a tool tip for every child control on the control bar as long as it meets the following criteria:

- The ID of the control is not - 1.

- The string-table entry with the same ID as the child control in the resource file has a tool tip string.

## <a name="_core_fly_by_status_bar_updates"></a> Flyby Status Bar Updates

A feature related to tool tips is "flyby" status bar updating. By default, the message on the status bar describes only a particular toolbar button when the button is activated. By including CBRS_FLYBY in your list of styles passed to `CToolBar::Create`, you can have these messages updated when the mouse cursor passes over the toolbar without actually activating the button.

### What do you want to know more about

- [MFC Toolbar Implementation (overview information on toolbars)](../mfc/mfc-toolbar-implementation.md)

- [Docking and floating toolbars](../mfc/docking-and-floating-toolbars.md)

- The [CToolBar](../mfc/reference/ctoolbar-class.md) and [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md) classes

- [Working with the toolbar control](../mfc/working-with-the-toolbar-control.md)

- [Using your old toolbars](../mfc/using-your-old-toolbars.md)

## See also

[MFC Toolbar Implementation](../mfc/mfc-toolbar-implementation.md)
