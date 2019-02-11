---
title: "Arrangement of Controls on Dialog Boxes (C++)| Microsoft Docs"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.grouping"]
helpviewer_keywords: ["controls [C++], positioning", "dialog box controls [C++], placement", "Dialog Editor [C++], arranging controls", "Dialog Editor [C++], guides and margins", "guides, clearing", "guides", "dialog box controls [C++], placement", "controls [C++], guides and margins", "guides, creating", "guides, moving", "margins, moving", "DLUs (dialog units)", "controls [C++], aligning", "Dialog Editor [C++], snap to guides", "guides, tick mark interval", "dialog box controls [C++], placement", "guides, aligning controls", "dialog units (DLUs)", "snap to guides (Dialog editor)", "controls [C++], sizing", "tick mark interval in Dialog editor", "controls [C++], snap to guides/grid", "guides, disabling snapping", "controls [C++], snap to guides/grid", "controls [C++], layout grid", "snap to layout grid", "grids, turning on or off", "layout grid in Dialog Editor", "grids, changing size", "grid spacing", "guides, settings", "layout grid in Dialog Editor", "controls [C++], snap to guides/grid", "Guide Settings dialog box (Dialog editor)", "controls [C++], aligning", "controls [C++], positioning", "Space Evenly command", "dialog box controls [C++], placement", "Center in Dialog command", "Arrange Buttons command", "buttons, arranging push buttons in dialog boxes", "push buttons", "member variables, adding to radio button groups", "variables, dialog box control member variables", "dialog box controls [C++], grouping radio buttons", "grouping controls", "radio buttons [C++], grouping on dialog boxes", "controls [C++], tab order", "focus, tab order", "tab controls [C++], tab order", "Tabstop property for controls", "controls [C++], focus", "dialog box controls [C++], tab order"]
ms.assetid: 832491cf-98af-42e5-a854-2cb135fd45c6
---
# Arrangement of Controls on Dialog Boxes (C++)

The **Dialog** editor provides layout tools that align and size controls automatically. For most tasks, you can use the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md). All **Dialog Editor** toolbar commands are also available on the **Format** menu, and most have [shortcut keys](../windows/accelerator-keys-for-the-dialog-editor.md).

Many layout commands for dialog boxes are available only when more than one control is selected. You can select a single control or multiple controls, and when more than one control is selected, the first one you select is by default the "dominant" control. For information on selecting controls and the dominant control, see [Selecting Controls](../windows/selecting-controls.md).

The location, height, and width of the current control are displayed in the lower-right corner of the status bar. When the entire dialog box is selected, the status bar displays the position of the dialog box as a whole, and its height and width.

## Dialog editor states (guides and grids)

You can arrange controls on dialog boxes with the **Dialog** editor in one of three different states:

- With the guides and margins on (default setting)

- With the layout grid on

- Without any snapping or alignment features

The [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contains buttons that control the state. To change the state, select the appropriate icon. You can also change states by using the **Guide Settings** command on the **Format** menu.

The **Guide Settings** dialog box has the following properties:

|Property|Description|
|---|---|
|**Layout guides**|Displays the settings for the layout guides.|
|**None**|Hides layout tools.|
|**Rulers and guides**|When enabled, adds rulers to the layout tools; guides can be placed in the rulers. The default guides are the margins, which can be moved by dragging. Select the rulers to place a guide. Controls "snap" to guides when the controls are moved over or next to them. Controls also move with a guide once they're attached to it. When a control is attached to a guide on each side, and a guide is moved, the control resizes.|
|**Grid**|Creates a layout grid. New controls will automatically align to the grid.|
|**Grid spacing**|Displays the settings for the grid spacing in dialog box units (DLUs).|
|**Width: DLUs**|Sets the width of the layout grid in DLUs. A horizontal DLU is the average width of the dialog box font divided by four.|
|**Height: DLUs**|Sets the height of the layout grid in DLUs. A vertical DLU is the average height of the dialog box font divided by eight.|

### Create and set guides and margins

Whether you're moving controls, adding controls, or rearranging a current layout, guides can help you align controls accurately within a dialog box. Guides appear as blue dotted lines across the dialog box displayed in the editor and corresponding arrows in the rulers at the top and along the left side of the **Dialog** editor.

When you create a dialog box, four margins are provided. Margins are modified guides, appearing as blue dotted lines.

|Process|Steps|
|----------------|----------------|
|To create a guide|Within the ruler, select once to create a guide. (One click creates a new guide; double-clicking launches the **Guide Settings** dialog box in which you can specify guide settings.)|
|To set a guide|On the dialog box, click the guide and drag it to a new position. (You can also click the arrow in the ruler to drag the associated guide.)<br/><br/>The coordinates of the guide are displayed in the status bar at the bottom of the window and in the ruler. Move the pointer over the arrow in the ruler to display the exact position of the guide.|
|To delete a guide|Drag the guide out of the dialog box.<br/><br/>\- or -<br/><br/>Drag the corresponding arrow off the ruler.|
|To move margins|Drag the margin to the new position.<br/><br/>To make a margin disappear, move the margin to a zero position. To bring back the margin, place the pointer over the margin's zero position and move the margin into position.|

### Align controls on a guide

The sizing handles of controls snap to guides when the controls are moved, and guides snap to controls if there are no controls previously snapped to the guide. When a guide is moved, controls that are snapped to it move as well. Controls snapped to more than one guide are resized when one of the guides is moved.

The tick marks in the rulers that determine the spacing of guides and controls are defined by dialog units (DLUs). A DLU is based on the size of the dialog box font, normally 8-point MS Shell Dlg. A horizontal DLU is the average width of the dialog box font divided by four. A vertical DLU is the average height of the font divided by eight.

#### To size a group of controls with guides

1. Snap one side of the control (or controls) to a guide.

1. Drag a guide to the other side of the control (or controls).

   If necessary with multiple controls, size each to snap to the second guide.

1. Move either guide to size the control (or controls).

#### To change the intervals of the tick marks

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, in the **Grid Spacing** field, specify a new width and height in DLUs.

### Disable guides

You can use special keys in conjunction with the mouse to disable the snapping effect of the guides. Using the **Alt** key disables the snapping effects of the guide selected. Moving a guide with the **Shift** key prevents snapped controls from moving with the guide.

#### To disable the snapping effect of the guides

Drag the control while holding down the **Alt** key.

#### To move guides without moving the snapped controls

Drag the guide while holding down the **Shift** key.

#### To turn off the guides

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, under **Layout Guides**, select **None**.

   > [!NOTE]
   > You can also double-click the ruler bar to access the **Guide Settings** dialog box.

\- or -

On the **Format** menu, select **Toggle Guides**.

### Modify the layout grid

When you're placing or arranging controls in a dialog box, you can use the layout grid for more precise positioning. When the grid is turned on, controls appear to "snap to" the dotted lines of the grid as if magnetized. You can turn this "snap to grid" feature on and off and change the size of the layout grid cells.

#### To turn the layout grid on or off

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, select or clear the **Grid** button.

   You can still control the grid in individual **Dialog** editor windows using the **Toggle Grid** button on the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

#### To change the size of the layout grid

1. From the **Format** menu, choose **Guide Settings**.

1. In the **Guide Settings** dialog box, type the height and width in DLUs for the cells in the grid. The minimum height or width is 4 DLUs.

## Group radio buttons on a dialog box

When you add radio buttons to a dialog box, treat them as a group by setting a **Group** property in the **Properties** window for the first button in the group. A control ID for that radio button then appears in the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md), allowing you to add a member variable for the group of radio buttons.

You can have more than one group of radio buttons on a dialog box, and each group should be added using the following procedure.

### To add a group of radio buttons to a dialog box

1. Select the radio button control in the [Toolbox Window](/visualstudio/ide/reference/toolbox) and choose the location in the dialog box where you want to place the control.

1. Repeat Step 1 to add as many radio buttons as you need. Make sure that the radio buttons in the group are consecutive in the tab order.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), set the **Group** property of the *first* radio button in the tab order to **True**.

   Changing the **Group** property to **True** adds the WS_GROUP style to the button's entry in the dialog object of the resource script and ensures that a user can only select one radio button at a time in the button group (when the user clicks one radio button, the others in the group are cleared).

   > [!NOTE]
   > Only the first radio button in the group should have the **Group** property set to **True**. If you have additional controls that are not part of the button group, set the **Group** property of the first control *that is outside the group* to **True** as well. You can quickly identify the first control outside of the group by pressing **Ctrl**+**D** to view the tab order.

### To add a member variable for the radio button group

1. Right-click the first radio button control in the tab order (the dominant control and the one with the **Group** property set to True).

1. Choose **Add Variable** from the shortcut menu.

1. In the [Add Member Variable wizard](../ide/add-member-variable-wizard.md), select the **Control variable** check box, then select the **Value** radio button.

1. In the **Variable name** box, type a name for the new member variable.

1. In the **Variable type** list box, select **int** or type `int`.

1. You can now modify your code to specify which radio button should appear selected. For example, `m_radioBox1 = 0;` selects the first radio button in the group.

## Align groups of controls

The following procedures show you how to align controls:

### To align groups of controls

1. [Select the controls](../windows/selecting-multiple-controls.md) you want to align. Be sure to select the control that you want to be the dominant control first or set it to be the dominant control before executing the alignment or sizing command.

   The final position of the group of controls depends on the position of the dominant control. For more information on selecting the dominant control, see [Specifying the Dominant Control](../windows/specifying-the-dominant-control.md).

1. From the **Format** menu, choose **Align**, and then choose one of the following alignments:

   - `Lefts`: aligns the selected controls along their left sides.

   - `Centers`: aligns the selected controls horizontally along their center points.

   - `Rights`: aligns the selected controls along their right sides.

   - `Tops`: aligns the selected controls along their top edges.

   - `Middles`: aligns the selected controls vertically along their middle points.

   - `Bottoms`: aligns the selected controls along their bottom edges.

### To even the spacing between controls

The **Dialog** editor enables you to space controls evenly between the outermost controls selected.

1. Select the controls you want to rearrange.

1. From the **Format** menu, choose **Space Evenly**, and then choose one of the following spacing alignments:

   - `Across`: space controls evenly between the leftmost and the rightmost control selected.

   - `Down`: space controls evenly between the topmost and the bottommost control selected.

### To center controls in a dialog box

1. Select the control or controls you want to rearrange.

1. From the **Format** menu, choose **Center In Dialog**, and then choose one of the following arrangements:

   - `Vertical`: center controls vertically in the dialog box.

   - `Horizontal`: center controls horizontally in the dialog box.

### To arrange push buttons along the right or bottom of a dialog box

1. Select one or more push buttons.

1. From the **Format** menu, choose **Arrange Buttons**, and then choose one of the following arrangements:

   - `Right`: aligns push buttons along the right edge of the dialog box.

   - `Bottom`: aligns push buttons along the bottom edge of the dialog box.

       If you select a control other than a push button, its position isn't affected.

## Change the tab order of controls

The tab order is the order in which the **Tab** key moves the input focus from one control to the next within a dialog box. Usually the tab order proceeds from left to right and from top to bottom in a dialog box. Each control has a **Tabstop** property that determines whether a control receives input focus.

### To set input focus for a control

In the [Properties Window](/visualstudio/ide/reference/properties-window), select **True** or **False** in the **Tabstop** property.

Even controls that don't have the **Tabstop** property set to **True** need to be part of the tab order. Tab order is important, for example, when you [define access keys (mnemonics)](../windows/defining-mnemonics-access-keys.md) for controls that don't have captions. Static text that contains an access key for a related control must immediately precede the related control in the tab order.

> [!NOTE]
> If your dialog box contains overlapping controls, changing the tab order may change the way the controls are displayed. Controls that come later in the tab order are always displayed on top of any overlapping controls that precede them in the tab order.

### To view the current tab order for all controls in a dialog box

On the **Format** menu, select **Tab Order**.

\- or -

- Press **Ctrl** + **D**.

### To change the tab order for all controls in a dialog box

1. On the **Format** menu, select **Tab Order**.

   A number in the upper-left corner of each control shows its place in the current tab order.

1. Set the tab order by clicking each control in the order you want the **Tab** key to follow.

1. Press **Enter** to exit **Tab Order** mode.

   > [!TIP]
   > Once you enter **Tab Order** mode, you can press **Esc** or **Enter** to disable the ability to change the tab order.

### To change the tab order for two or more controls

1. From the **Format** menu, choose **Tab Order**.

1. Specify where the change in order will begin. First hold down the **Ctrl** key and select the control, then select the one where you want the changed order to begin.

   For example, if you want to change the order of controls `7` through `9`, hold down **Ctrl**, then select control `6` first.

   > [!NOTE]
   > To set a specific control to number `1` (first in the tab order), double-click the control.

1. Release the **Ctrl** key, then select the controls in the order you want the **Tab** key to follow from that point.

1. Press **Enter** to exit **Tab Order** mode.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)