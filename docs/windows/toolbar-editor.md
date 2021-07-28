---
title: "Toolbar Editor (C++)"
description: "Use the Visual Studio Toolbar Editor to create toolbar resources and convert bitmaps into toolbar resources."
ms.date: 09/26/2020
f1_keywords: ["vc.editors.toolbar.F1", "vc.editors.toolbar", "vc.editors.newtoolbarresource"]
helpviewer_keywords: ["resource editors [C++], Toolbar editor", "editors, toolbars", "toolbars [C++], editing", "Toolbar editor", "toolbars [C++], creating", "Toolbar editor [C++], creating new toolbars", "Insert Resource", "bitmaps [C++], converting to toolbars", "Toolbar editor [C++], converting bitmaps", "toolbars [C++], converting bitmaps", "New Toolbar Resource dialog box [C++]", "buttons [C++], custom toolbars", "toolbar buttons [C++], editing", "buttons", "toolbar buttons [C++], creating", "Toolbar editor [C++], creating buttons", "toolbar buttons [C++], button image", "toolbar buttons [C++], creating", "toolbar buttons (in Toolbar editor)", "toolbar buttons [C++], moving", "Toolbar editor [C++], moving buttons", "Toolbar editor [C++], copying buttons", "toolbars [C++], copying buttons", "toolbar buttons [C++], copying", "toolbar buttons [C++], deleting", "Toolbar editor [C++], deleting buttons", "Toolbar editor [C++], spacing toolbar buttons", "toolbar buttons [C++], space between buttons", "toolbar controls [MFC], command ID", "toolbar buttons [C++], setting properties", "Toolbar editor [C++], toolbar button properties", "command IDs, toolbar buttons", "size, toolbar buttons", "toolbar buttons [C++], setting properties", "Toolbar editor [C++], toolbar button properties", "status bars [C++], active toolbar button text", "command IDs, toolbar buttons", "width, toolbar buttons", "tool tips [C++], adding to toolbar buttons", "\n in tool tip", "toolbar buttons [C++], tool tips", "buttons [C++], tool tips", "Toolbar editor [C++], creating tool tips"]
ms.assetid: aa9f0adf-60f6-4f79-ab05-bc330f15ec43
---
# Toolbar Editor (C++)

The **Toolbar Editor** enables you to create toolbar resources and convert bitmaps into toolbar resources. The **Toolbar Editor** uses a graphical display. It shows a toolbar and buttons that closely resemble how they'll look in a finished application.

The **Toolbar Editor** window shows two views of a button image, the same as the **Image Editor** window. A split bar separates the two panes. To change the relative sizes of the panes, you can drag the split bar from side to side. The active pane displays a selection border and above the two views of the image is the subject toolbar.

![Screenshot of the Toolbar Editor with controls called out.](../mfc/media/vctoolbareditor.gif "vcToolbarEditor")<br/>
**Toolbar Editor**

The **Toolbar Editor** is similar to the **Image Editor** in functionality. The menu items, graphic tools, and bitmap grid between the two are the same. There's a menu command in the **Image** menu to switch between the **Toolbar Editor** and the **Image Editor**. For more information on using the **Graphics** toolbar, **Colors** palette, or **Image** menu, see [Image Editor](../windows/image-editor-for-icons.md).

You can create a new toolbar in a C++ project by converting a bitmap. The graphic from the bitmap converts to the button images for a toolbar. Usually the bitmap contains several button images on a single bitmap, with one image for each button. Images can be any size as the default is 16 pixels wide and the height of the image. You can specify the size of the button images in the **New Toolbar Resource** dialog box. To specify sizes, choose **Toolbar Editor** from the **Image** menu while in the **Image Editor**.

The **New Toolbar Resource** dialog box allows you to specify the width and height of the buttons you're adding to a toolbar resource in a C++ project. The default is 16 × 15 pixels.

A bitmap that's used to create a toolbar has a maximum width of 2048. If you set the **Button Width** to *512*, you can only have four buttons. And, if you set the width to *513*, you can only have three buttons.

The **New Toolbar Resource** dialog box has the following properties:

|Property|Description|
|---|---------------|
|**Button Width**|Provides a space for you to enter the width for the toolbar buttons you're converting from a bitmap resource to a toolbar resource.|
|**Button Height**|Provides a space for you to enter the height for the toolbar buttons you're converting from a bitmap resource to a toolbar resource.|

> [!NOTE]
> The images are cropped to the width and height specified, and the colors are adjusted to use standard toolbar colors (16 colors).

By default, a toolbar displays a new or blank button at the right end of the toolbar. You can move this button before editing it. When you create a new button, another blank button appears to the right of the edited button. The blank button isn't saved when you save a toolbar.

A toolbar button has the following properties:

|Property|Description|
|--------------|-----------------|
|**ID**|Defines the ID for the button. The drop-down list provides common **ID** names.|
|**Width**|Sets the width of the button. 16 pixels is recommended.|
|**Height**|Sets the height of the button. The height of one button changes the height of all buttons on the toolbar. 15 pixels is recommended.|
|**Prompt**|Defines the message displayed in the status bar. Adding *\n* and a name adds a **ToolTip** to that toolbar button. For more information, see [To create a tool tip for a toolbar button](#to-create-a-tool-tip-for-a-toolbar-button).|

**Width** and **Height** apply to all buttons. A bitmap that is used to create a toolbar has a maximum width of 2048. It means that if you set the button width to *512*, you can only have four buttons. If you set the width to *513*, you can only have three buttons.

## How To

The **Toolbar Editor** enables you:

### To create new toolbars

1. In **Resource View**, right-click your *.rc* file and choose **Add Resource**. If you have an existing toolbar in your *.rc* file, you can right-click the **Toolbar** folder and select **Insert Toolbar**.

1. In the **Add Resource** dialog box, select **Toolbar** in the **Resource Type** list, then choose **New**.

   If a plus sign (**+**) appears next to the **Toolbar** resource type, it means that toolbar templates are available. Select the plus sign to expand the list of templates, select a template, and choose **New**.

### To convert bitmaps to toolbar resources

1. Open an existing bitmap resource in the [Image Editor](../windows/image-editor-for-icons.md). If the bitmap isn't already in your *.rc* file, right-click the *.rc* file and choose **Import**. Then, navigate to the bitmap you want to add to your *.rc* file and select **Open**.

1. Go to menu **Image** > **Toolbar Editor**.

   The **New Toolbar Resource** dialog box appears. You can change the width and height of the icon images to match the bitmap. The toolbar image is then displayed in the **Toolbar Editor**.

1. To finish the conversion, change the command **ID** of the button using the [Properties window](/visualstudio/ide/reference/properties-window). Type the new *ID* or select an **ID** from the drop-down list.

   > [!TIP]
   > The **Properties** window contains a pushpin button in the title bar and selecting this enables or disables **Auto Hide** for the window. To cycle through all the toolbar button properties without having to reopen the individual property windows, turn **Auto Hide** off so the **Properties** window stays stationary.

   You can also change the command IDs of the buttons on the new toolbar by using the [Properties window](/visualstudio/ide/reference/properties-window).

### To manage toolbar buttons

#### To create a new toolbar button

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources) expand the resource folder (for example, *Project1.rc*).

1. Expand the **Toolbar** folder and select a toolbar to edit, then either:

   - Assign an ID to the blank button at the right end of the toolbar. You can do so by editing the **ID** property in the [Properties Window](/visualstudio/ide/reference/properties-window). For example, you may want to give a toolbar button the same ID as a menu option. In this case, use the drop-down list box to select the **ID** of the menu option.

   - Select the blank button at the right end of the toolbar in the **Toolbar View** pane and begin drawing. A default button command ID is assigned (ID_BUTTON\<n>).

#### To add an image to a toolbar as a button

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), open the toolbar by double-clicking it.

1. Next, open the image you'd like to add to your toolbar.

   > [!NOTE]
   > If you open the image in Visual Studio, it will open in the **Image Editor**. You can also open the image in other graphics programs.

1. Go to menu **Edit** > **Copy**.

1. Switch to your toolbar by selecting its tab at the top of the source window.

1. Go to menu **Edit** > **Paste**.

   The image will appear on your toolbar as a new button.

#### To move a toolbar button

In the **Toolbar View** pane, drag the button that you want to move to its new location on the toolbar.

- To copy buttons from a toolbar, hold down the **Ctrl** key. In the **Toolbar View** pane, drag the button to its new location on the toolbar. Or, drag it to a location on another toolbar.

- To delete a toolbar button, select the toolbar button and drag it off the toolbar.

- To insert or remove space between buttons on a toolbar, drag them either away from or towards each other on the toolbar.

|Action|Step|
|------|------|
|To insert a space before a button that isn't followed by a space|Drag the button to the right or down until it overlaps the next button about halfway.|
|To insert a space before a button that is followed by a space and to keep the trailing space|Drag the button until the right or bottom edge is just touching the next button or just overlaps it.|
|To insert a space before a button that is followed by a space and close up that following space|Drag the button to the right or down until it overlaps the next button about halfway.|
|To remove a space between buttons on a toolbar|Select the button on one side of the space. Drag it toward the button on the other side of the space until it overlaps the next button about halfway.|

> [!NOTE]
> If there's no space on the side of the button that you're dragging away from and you drag the button more than halfway past the adjacent button, the **Toolbar Editor** inserts a space on the opposite side of the button that you're dragging.

#### To change the properties of a toolbar button

1. In a C++ project, select the toolbar button.

1. Type the new ID in the **ID** property in the [Properties Window](/visualstudio/ide/reference/properties-window), or use the drop-down list to select a new **ID**.

#### To create a tool tip for a toolbar button

1. Select the toolbar button.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Prompt** field, add a description of the button for the status bar and after the message, add `\n` and the tool tip name.

For example, to see the tool tip for the **Print** button in **WordPad**:

1. Open **WordPad**.

1. Hover your mouse pointer over the **Print** toolbar button and notice the word `Print` now is floating under your mouse pointer.

1. Look at the status bar at the bottom of the **WordPad** window and notice that it now shows the text `Prints the active document`.

`Print` is the tool tip name and `Prints the active document` is the description of the button for the status bar.

If you want this effect using the **Toolbar Editor**, set the **Prompt** property to `Prints the active document\nPrint`.

## Requirements

MFC or ATL

## See also

[Resource Editors](../windows/resource-editors.md)\
[Menus and Other Resources](/windows/win32/menurc/resources)
