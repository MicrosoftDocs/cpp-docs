---
title: "Dialog Editor States (Guides and Grids) (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["Dialog Editor [C++], guides and margins", "guides, clearing", "guides", "dialog box controls [C++], placement", "controls [C++], guides and margins", "guides, creating", "guides, moving", "margins, moving", "DLUs (dialog units)", "controls [C++], aligning", "Dialog Editor [C++], snap to guides", "guides, tick mark interval", "dialog box controls [C++], placement", "guides, aligning controls", "dialog units (DLUs)", "snap to guides (Dialog editor)", "controls [C++], sizing", "tick mark interval in Dialog editor", "controls [C++], snap to guides/grid", "guides, disabling snapping", "controls [C++], snap to guides/grid", "controls [C++], layout grid", "snap to layout grid", "grids, turning on or off", "layout grid in Dialog Editor", "grids, changing size", "grid spacing", "guides, settings", "layout grid in Dialog Editor", "controls [C++], snap to guides/grid", "Guide Settings dialog box (Dialog editor)"]
ms.assetid: dbacf9ef-e8b0-4125-a7ce-84911c482e98
---
# Dialog Editor States (Guides and Grids) (C++)

You can arrange controls on dialog boxes with the **Dialog** editor in one of three different states:

- With the guides and margins on (default setting)

- With the layout grid on

- Without any snapping or alignment features

The [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contains buttons that control the state. To change the state, click the appropriate icon. You can also change states by using the **Guide Settings** command on the **Format** menu.

The **Guide Settings** dialog box has the following properties:

|Property|Description|
|---|---|
|**Layout guides**|Displays the settings for the layout guides.|
|**None**|Hides layout tools.|
|**Rulers and guides**|When enabled, adds rulers to the layout tools; guides can be placed in the rulers. The default guides are the margins, which can be moved by dragging. Select the rulers to place a guide. Controls "snap" to guides when the controls are moved over or next to them. Controls also move with a guide once they're attached to it. When a control is attached to a guide on each side, and a guide is moved, the control is resized.|
|**Grid**|Creates a layout grid. New controls will automatically align to the grid.|
|**Grid spacing**|Displays the settings for the grid spacing in dialog box units (DLUs).|
|**Width: DLUs**|Sets the width of the layout grid in DLUs. A horizontal DLU is the average width of the dialog box font divided by four.|
|**Height: DLUs**|Sets the height of the layout grid in DLUs. A vertical DLU is the average height of the dialog box font divided by eight.|

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Create and set guides and margins

Whether you're moving controls, adding controls, or rearranging a current layout, guides can help you align controls accurately within a dialog box. Guides appear as blue dotted lines across the dialog box displayed in the editor and corresponding arrows in the rulers (at the top and along the left side of the **Dialog** editor).

When you create a dialog box, four margins are provided. Margins are modified guides, appearing as blue dotted lines.

### To create a guide

1. Within the ruler, click once to create a guide. (One click creates a new guide; double-clicking launches the **Guide Settings** dialog box in which you can specify guide settings.)

### To set a guide

1. On the dialog box, click the guide and drag it to a new position. (You can also click the arrow in the ruler to drag the associated guide.)

   The coordinates of the guide are displayed in the status bar at the bottom of the window and in the ruler. Move the pointer over the arrow in the ruler to display the exact position of the guide.

### To delete a guide

1. Drag the guide out of the dialog box.

\- or -

   Drag the corresponding arrow off the ruler.

### To move margins

1. Drag the margin to the new position.

   To make a margin disappear, move the margin to a zero position. To bring back the margin, place the pointer over the margin's zero position and move the margin into position.

## Align controls on a guide

The sizing handles of controls snap to guides when the controls are moved, and guides snap to controls (if there are no controls previously snapped to the guide). When a guide is moved, controls that are snapped to it move as well. Controls snapped to more than one guide are resized when one of the guides is moved.

The tick marks in the rulers that determine the spacing of guides and controls are defined by dialog units (DLUs). A DLU is based on the size of the dialog box font, normally 8-point MS Shell Dlg. A horizontal DLU is the average width of the dialog box font divided by four. A vertical DLU is the average height of the font divided by eight.

### To size a group of controls with guides

1. Snap one side of the control (or controls) to a guide.

1. Drag a guide to the other side of the control (or controls).

   If necessary with multiple controls, size each to snap to the second guide.

1. Move either guide to size the control (or controls).

### To change the intervals of the tick marks

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, in the **Grid Spacing** field, specify a new width and height in DLUs.

## Disable guides

You can use special keys in conjunction with the mouse to disable the snapping effect of the guides. Using the **Alt** key disables the snapping effects of the guide selected. Moving a guide with the **Shift** key prevents snapped controls from moving with the guide.

### To disable the snapping effect of the guides

1. Drag the control while holding down the **Alt** key.

### To move guides without moving the snapped controls

1. Drag the guide while holding down the **Shift** key.

### To turn off the guides

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, under **Layout Guides**, select **None**.

   > [!NOTE]
   > You can also double-click the ruler bar to access the **Guide Settings** dialog box.

\- or -

   On the **Format** menu, select **Toggle Guides**.

## Modify the layout grid

When you're placing or arranging controls in a dialog box, you can use the layout grid for more precise positioning. When the grid is turned on, controls appear to "snap to" the dotted lines of the grid as if magnetized. You can turn this "snap to grid" feature on and off and change the size of the layout grid cells.

### To turn the layout grid on or off

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, select or clear the **Grid** button.

   You can still control the grid in individual **Dialog** editor windows using the **Toggle Grid** button on the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

### To change the size of the layout grid

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, type the height and width in DLUs for the cells in the grid. The minimum height or width is 4 DLUs. For more information on DLUs, see [The Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md).

## Requirements

Win32

## See also

[Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)<br/>
[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls (MFC)](../mfc/controls-mfc.md)<br/>
