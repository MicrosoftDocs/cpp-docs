---
title: "Creating a Tool Tip for a Toolbar Button (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["tool tips [C++], adding to toolbar buttons", "\n in tool tip", "toolbar buttons [C++], tool tips", "buttons [C++], tool tips", "Toolbar editor [C++], creating tool tips"]
ms.assetid: 0af65342-fd78-4e78-8d0d-dc68f7fc462e
---
# Creating a Tool Tip for a Toolbar Button (C++)

### To create a tool tip

1. Select the toolbar button.

2. In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Prompt** property field, add a description of the button for the status bar; after the message, add `\n` and the tool tip name.

A common example of a tool tip is the **Print** button in **WordPad**:

1. Open **WordPad**.

2. Hover your mouse pointer over the **Print** toolbar button.

3. Notice that the word `Print` now is floating under your mouse pointer.

4. Look at the status bar (at the very bottom of the **WordPad** window) - notice that it now shows the text `Prints the active document`.

The `Print` in **Step 3** is the "Tool tip name," and the `Prints the active document` from **Step 4** is the "description of the button for the status bar."

If you want this effect using the **Toolbar** editor, you set the **Prompt** property to `Prints the active document\nPrint`.

> [!NOTE]
> You can edit prompt text using the [Properties Window](/visualstudio/ide/reference/properties-window).

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

MFC or ATL

## See also

- [Creating, Moving, and Editing Toolbar Buttons](../windows/creating-moving-and-editing-toolbar-buttons.md)
- [Toolbar Editor](../windows/toolbar-editor.md)
