---
title: "Creating, Moving, and Editing Toolbar Buttons (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.toolbar"]
helpviewer_keywords: ["buttons [C++], custom toolbars", "toolbar buttons [C++], editing", "buttons", "toolbar buttons [C++], creating", "Toolbar editor [C++], creating buttons", "toolbar buttons [C++], button image", "toolbar buttons [C++], creating", "toolbar buttons (in Toolbar editor)", "toolbar buttons [C++], moving", "Toolbar editor [C++], moving buttons", "Toolbar editor [C++], copying buttons", "toolbars [C++], copying buttons", "toolbar buttons [C++], copying", "toolbar buttons [C++], deleting", "Toolbar editor [C++], deleting buttons", "Toolbar editor [C++], spacing toolbar buttons", "toolbar buttons [C++], space between buttons", "toolbar controls [MFC], command ID", "toolbar buttons [C++], setting properties", "Toolbar editor [C++], toolbar button properties", "command IDs, toolbar buttons", "size, toolbar buttons", "toolbar buttons [C++], setting properties", "Toolbar editor [C++], toolbar button properties", "status bars [C++], active toolbar button text", "command IDs, toolbar buttons", "width, toolbar buttons"]
ms.assetid: d0f0c6c6-9d7e-42b5-a86a-7558127386e7
---
# Creating, Moving, and Editing Toolbar Buttons (C++)

You can easily create, move, copy, and edit toolbar buttons.

By default, a new or blank button is displayed at the right end of the toolbar. You can move this button before editing it. When you create a new button, another blank button appears to the right of the edited button. When you save a toolbar, the blank button isn't saved.

The properties of a toolbar button are:

|Property|Description|
|--------------|-----------------|
|**ID**|Defines the ID for the button. The drop-down list provides common **ID** names.|
|**Width**|Sets the width of the button. 16 pixels is recommended.|
|**Height**|Sets the height of the button. The height of one button changes the height of all buttons on the toolbar. 15 pixels is recommended.|
|**Prompt**|Defines the message displayed in the status bar. Adding \n and a name adds a ToolTip to that toolbar button. For more information, see [Creating a ToolTip](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|

**Width** and **Height** apply to all buttons. A bitmap that is used to create a toolbar has a maximum width of 2048. So if you set the button width to 512, you can only have four buttons and if you set the width to 513, you can only have three buttons.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

See the following actions:

## To create a new toolbar button

1. In [Resource view](../windows/resource-view-window.md) expand the resource folder (for example, *Project1.rc*).

   > [!NOTE]
   > If your project doesn't already contain an .rc file, please see [Creating a New Resource Script File](../windows/how-to-create-a-resource-script-file.md).

1. Expand the **Toolbar** folder and select a toolbar to edit.

1. Assign an ID to the blank button at the right end of the toolbar. You can do so by editing the **ID** property in the [Properties Window](/visualstudio/ide/reference/properties-window). For example, you may want to give a toolbar button the same ID as a menu option. In this case, use the drop-down list box to select the **ID** of the menu option.

   -or-

   Select the blank button at the right end of the toolbar (in the **Toolbar View** pane) and begin drawing. A default button command ID is assigned (ID_BUTTON\<n>).

You can also copy and paste an image onto a toolbar as a new button.

## To add an image to a toolbar as a button

1. In [Resource View](../windows/resource-view-window.md), open the toolbar by double-clicking it.

1. Next, open the image you'd like to add to your toolbar.

   > [!NOTE]
   > If you open the image in Visual Studio, it will open in the **Image** editor. You can also open the image in other graphics programs.

1. From the **Edit** menu, choose **Copy**.

1. Switch to your toolbar by selecting its tab at the top of the source window.

1. From the **Edit** menu, choose **Paste**.

   The image will appear on your toolbar as a new button.

## To move a toolbar button

In the **Toolbar View** pane, drag the button that you want to move to its new location on the toolbar.

## To copy buttons from a toolbar

1. Hold down the **Ctrl** key.

1. In the **Toolbar View** pane, drag the button to either its new location on the toolbar or to a location on another toolbar.

## To delete a toolbar button

Select the toolbar button and drag it off the toolbar.

## To insert or remove space between buttons on a toolbar

In general, to insert a space between buttons, drag them away from one another on the toolbar. To remove space, drag them towards each other.

### To insert a space before a button that isn't followed by a space

Drag the button to the right or down until it overlaps the next button about halfway.

### To insert a space before a button that is followed by a space and to keep the trailing space

Drag the button until the right or bottom edge is just touching the next button or just overlaps it.

### To insert a space before a button that is followed by a space and close up that following space

Drag the button to the right or down until it overlaps the next button about halfway.

### To remove a space between buttons on a toolbar

Drag the button on one side of the space toward the button on the other side of the space until it overlaps the next button about halfway.

   If there's no space on the side of the button that you're dragging away from, and you drag the button more than halfway past the adjacent button, the **Toolbar** editor also inserts a space on the opposite side of the button that you're dragging.

## To change the properties of a toolbar button

1. In a C++ project, select the toolbar button.

1. Type the new ID in the **ID** property in the [Properties Window](/visualstudio/ide/reference/properties-window), or use the drop-down list to select a new **ID**.

## Requirements

MFC or ATL

## See also

- [Toolbar Editor](../windows/toolbar-editor.md)
