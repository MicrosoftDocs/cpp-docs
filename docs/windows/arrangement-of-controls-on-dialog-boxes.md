---
description: "Learn more about: How To: Layout Controls (C++)"
title: "How To: Layout Controls (C++)| Microsoft Docs"
ms.date: "02/15/2019"
f1_keywords: ["vc.editors.dialog.grouping", "vc.editors.dialog.combo"]
helpviewer_keywords: ["controls [C++], positioning", "dialog box controls [C++], placement", "Dialog Editor [C++], arranging controls", "Dialog Editor [C++], guides and margins", "guides, clearing", "guides", "dialog box controls [C++], placement", "controls [C++], guides and margins", "guides, creating", "guides, moving", "margins, moving", "DLUs (dialog units)", "controls [C++], aligning", "Dialog Editor [C++], snap to guides", "guides, tick mark interval", "dialog box controls [C++], placement", "guides, aligning controls", "dialog units (DLUs)", "snap to guides (Dialog editor)", "controls [C++], sizing", "tick mark interval in Dialog editor", "controls [C++], snap to guides/grid", "guides, disabling snapping", "controls [C++], snap to guides/grid", "controls [C++], layout grid", "snap to layout grid", "grids, turning on or off", "layout grid in Dialog Editor", "grids, changing size", "grid spacing", "guides, settings", "layout grid in Dialog Editor", "controls [C++], snap to guides/grid", "Guide Settings dialog box (Dialog editor)", "controls [C++], aligning", "controls [C++], positioning", "Space Evenly command", "dialog box controls [C++], placement", "Center in Dialog command", "Arrange Buttons command", "buttons, arranging push buttons in dialog boxes", "push buttons", "member variables, adding to radio button groups", "variables, dialog box control member variables", "dialog box controls [C++], grouping radio buttons", "grouping controls", "radio buttons [C++], grouping on dialog boxes", "controls [C++], tab order", "focus, tab order", "tab controls [C++], tab order", "Tabstop property for controls", "controls [C++], focus", "dialog box controls [C++], tab order", "Dialog Editor [C++], selecting controls", "dominant controls", "dialog box controls [C++], selecting in editor", "controls [C++], selecting", "size, controls", "controls [C++], dominant", "controls [C++], removing from groups", "Dialog Editor [C++], dominant control", "Size to Content command", "size, controls", "text, autosizing controls to fit text", "controls [C++], sizing", "Make Same Size command", "combo boxes, sizing", "list controls [C++], scroll bar width", "CListBox::SetHorizontalExtent", "controls [C++], scroll bar", "scroll bars [C++], displaying in controls", "horizontal scroll bar width", "CListBox class, scroll bar width", "scroll bars [C++], width"]
ms.assetid: 832491cf-98af-42e5-a854-2cb135fd45c6
---
# How To: Layout Controls (C++)

The **Dialog Editor** provides layout tools that align and size controls automatically. For most tasks, you can use the [Dialog Editor toolbar](./dialog-editor.md). All **Dialog Editor** toolbar commands are also available on the **Format** menu, and most have [shortcut keys](./dialog-editor.md).

Many layout commands for dialog boxes are available only when more than one control is selected. You can select a single control or multiple controls, and when more than one control is selected, the first one you select is by default the dominant control.

The location, height, and width of the current control are displayed in the lower-right corner of the status bar. When the entire dialog box is selected, the status bar displays the position of the dialog box as a whole, and its height and width.

## Arrange Controls

You can arrange controls on dialog boxes with the **Dialog Editor** in one of three different states:

- With guides and margins on, set as default.

- With the layout grid on.

- Without any snap or alignment features.

The [Dialog Editor toolbar](./dialog-editor.md) contains buttons that control the state.

- To change the state, select the appropriate icon, or go to menu **Format** > **Guide Settings**.

The **Guide Settings** dialog box has the following properties:

|Property|Description|
|---|---|
|**Layout guides**|Displays the settings for the layout guides.|
|**None**|Hides layout tools.|
|**Rulers and guides**|When enabled, adds rulers to the layout tools and allows guides to be placed in the rulers. The default guides are the margins.|
|**Grid**|Creates a layout grid. New controls will automatically align to the grid.|
|**Grid spacing**|Displays the settings for the grid spacing in dialog box units (DLUs).|
|**Width: DLUs**|Sets the width of the layout grid in DLUs. A horizontal DLU is the average width of the dialog box font divided by 4.|
|**Height: DLUs**|Sets the height of the layout grid in DLUs. A vertical DLU is the average height of the dialog box font divided by 8.|

### Guides and Margins

Whether you're moving controls, adding controls, or rearranging a current layout, guides and margins can help you align controls accurately within a dialog box.

When you create a dialog box, four modified guides called margins are provided, and appear as blue dotted lines.

- To move margins, drag the margin to the new position.

- To make a margin disappear, move the margin to a zero position.

- To bring back the margin, place the pointer over the margin's zero position and move the margin into position.

Guides appear as blue dotted lines across the dialog box displayed in the editor and corresponding arrows in the rulers at the top and along the left side of the **Dialog Editor**. The sizing handles of controls snap to guides when the controls are moved, and guides snap to controls if there are no controls previously snapped to the guide. When a guide is moved, controls that are snapped to it move as well. Controls snapped to more than one guide are resized when one of the guides is moved.

- To create a guide within the ruler, select once to create a guide, or double-click to launch the **Guide Settings** dialog box where you can specify guide settings.

- To set a guide on the dialog box, select the guide and drag it to a new position, or select the arrow in the ruler to drag the associated guide.

   The coordinates of the guide are displayed in the status bar at the bottom of the window and in the ruler or move the pointer over the arrow in the ruler to display the exact position of the guide.

- To delete a guide, drag the guide out of the dialog box or drag the corresponding arrow off the ruler.

The tick marks in the rulers that determine the spacing of guides and controls are defined by dialog units (DLUs). A DLU is based on the size of the dialog box font, normally 8-point MS Shell Dlg. A horizontal DLU is the average width of the dialog box font divided by four. A vertical DLU is the average height of the font divided by 8.

- To change the intervals of the tick marks, go to menu **Format** > **Guide Settings**, then in the **Grid Spacing** field, specify a new width and height in DLUs.

### Layout Grid

When you're placing or arranging controls in a dialog box, use the layout grid for more precise positioning. When the grid is turned on, controls will snap to the dotted lines of the grid as if magnetized.

- To turn the layout grid on or off, go to menu **Format** > **Guide Settings** and select or clear the **Grid** button.

   You can still control the grid in individual **Dialog Editor** windows using the **Toggle Grid** button on the [Dialog Editor toolbar](./dialog-editor.md).

- To change the size of the layout grid, go to menu **Format** > **Guide Settings** and type the height and width in DLUs for the cells in the grid. The minimum height or width is 4.

### Disable Guides

You can use special keys in conjunction with the mouse to disable the snapping effect of the guides. Using the **Alt** key disables the snapping effects of the guide selected. Moving a guide with the **Shift** key prevents snapped controls from moving with the guide.

- To disable the snapping effect of the guides, drag the control while holding down the **Alt** key.

- To move guides without moving the snapped controls, drag the guide while holding down the **Shift** key.

- To turn off the guides, go to menu **Format** > **Guide Settings**. Then, under **Layout Guides**, select **None**.

   > [!TIP]
   > You can also use the shortcut in the menu **Format** > **Toggle Guides**.

## Select Controls

Select controls to size, align, move, copy, or delete them, and then complete the operation you want. In most cases, you need to select more than one control to use the sizing and alignment tools on the [Dialog Editor toolbar](./dialog-editor.md).

When a control is selected, it has a shaded border around it with solid (active) or hollow (inactive) sizing handles, small squares that appear in the selection border. When multiple controls are selected, the dominant control has solid sizing handles and all the other selected controls have hollow sizing handles.

- To select controls, in the [Toolbox Window](/visualstudio/ide/reference/toolbox), select the **Pointer** tool and use one of the following steps to make your selection:

  - Drag the pointer to draw a selection box around the controls you want to select in your dialog box. When you release the mouse button, all controls inside and intersecting the selection box are selected.

  - Hold down the **Shift** key and select the controls you'd like to include in the selection.

  - Hold down the **Ctrl** key and select the controls you'd like to include in the selection.

- To add or remove a control from the group of selected controls, hold down the **Shift** key and select the control you want to add or remove.

### Dominant Controls

When you're sizing or aligning multiple controls, the **Dialog Editor** uses the dominant control to determine how the other controls are sized or aligned. By default, the dominant control is the first control selected.

- To specify the dominant control, hold down the **Ctrl** key and select the control you want to use to influence the size or location of other controls *first*. Holding down the **Ctrl** key and selecting a control within a selection will also make that control the dominant control in that selection.

- To change the dominant control, clear the current selection by selecting outside all the currently selected controls and repeat the above procedure, selecting a different control *first*.

> [!NOTE]
> The sizing handles of the dominant control are solid while the handles of subordinate controls are hollow. All further resizing or alignment is based on the dominant control.

## Size Controls

Use the sizing handles to resize a control. When the pointer is positioned on a sizing handle, it changes shape to indicate the directions in which the control can be resized. Active sizing handles are solid and if a sizing handle is hollow, the control can't be resized along that axis.

- To size a control, select the control and drag the sizing handles to change the size.

  - Size handles at the top and sides change the horizontal or vertical size.

  - Size handles at the corners change both horizontal and vertical size.

   > [!TIP]
   > You can resize the control one dialog unit (DLU) at a time by holding down the **Shift** key and using the **Right** and **Down** arrow keys.

- To automatically size a control to fit the text within it, go to menu **Format** or right-click the control, and choose **Size to Content**.

- To make controls the same size, select the controls you want to resize and go to menu **Format** > **Make Same Size**, then choose either **Both**, **Height**, or **Width**.

   You resize a group of controls based on the size of the dominant control, which is the control selected first in the series. The final size of the controls in the group depends on the size of the dominant control.

- To size a group of controls with guides, snap one side of the control (or controls) to a guide, then drag a guide to the other side of the control (or controls). Now you can move either guide to size the control (or controls).

   If necessary with multiple controls, size each to snap to the second guide.

### Other Controls

You can size a combo box when you add it to the dialog box. You can also specify the size of the drop-down list box. For more information, see [Adding Values to a Combo Box Control](./defining-mnemonics-access-keys.md).

1. Select the drop-down arrow button at the right of the combo box.

   ![Arrow on a combo box in an MFC project](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   The outline of the control changes to show the size of the combo box with the drop-down list area extended.

1. Use the lower sizing handle to change the initial size of the drop-down list area.

   ![Combo&#45;box sizing in an MFC project](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Select the drop-down arrow again to close the drop-down list portion of the combo box.

> [!NOTE]
> When you add a list box with a horizontal scroll bar to a dialog box using MFC, the scroll bar won't automatically appear in your application.
>
> Set a maximum width for the widest element by calling [CListBox::SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) in your code. Without this value set, the scroll bar won't appear, even when the items in the list box are wider than the box.

## Align Controls

- To align controls, select the controls you want to align. Go to menu **Format** > **Align** and choose one of the following alignments:

   |Alignment|Description|
   |-----|-----------|
   |**Lefts**|Aligns the selected controls along their left sides.|
   |**Centers**|Aligns the selected controls horizontally along their center points.|
   |**Rights**|Aligns the selected controls along their right sides.|
   |**Tops**|Aligns the selected controls along their top edges.|
   |**Middles**|Aligns the selected controls vertically along their middle points.|
   |**Bottoms**|Aligns the selected controls along their bottom edges.|

   Be sure to select the control that you want to be dominant first or set it to be the dominant control before executing the alignment or sizing command as the final position of the group of controls depends on the position of the dominant control.

- To evenly space controls, select the controls you want to rearrange. Go to menu **Format** > **Space Evenly** and choose one of the following spacing alignments:

   |Spacing|Description|
   |---|---|
   |**Across**|Space controls evenly between the leftmost and the rightmost control selected.|
   |**Down**|Space controls evenly between the topmost and the bottommost control selected.|

- To center controls, select the control or controls you want to rearrange. Go to menu **Format** > **Center In Dialog** and choose one of the following arrangements:

   |Arrangement|Description|
   |---|---|
   |**Vertical**|Center controls vertically in the dialog box.|
   |**Horizontal**|Center controls horizontally in the dialog box.|

- To align push buttons, select one or more push buttons. Go to menu **Format** > **Arrange Buttons**, then choose one of the following arrangements:

   |Arrangement|Description|
   |---|---|
   |**Right**|Aligns push buttons along the right edge of the dialog box.|
   |**Bottom**|Aligns push buttons along the bottom edge of the dialog box.|

   If you select a control other than a push button, its position isn't affected.

## Requirements

Win32

## See also

[Manage Dialog Box Controls](controls-in-dialog-boxes.md)<br/>
[How To: Add, Edit, or Delete Controls](adding-editing-or-deleting-controls.md)<br/>
[How to: Define Control Access and Values](defining-mnemonics-access-keys.md)<br/>
