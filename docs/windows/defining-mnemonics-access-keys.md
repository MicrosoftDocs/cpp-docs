---
title: "Defining Control Access and Values"
ms.date: "02/15/2019"
f1_keywords: ["vc.editors.dialog.combo"]
helpviewer_keywords: ["access keys [C++], adding", "keyboard shortcuts [C++], controls", "dialog box controls [C++], mnemonics", "access keys [C++], checking", "mnemonics [C++], checking for duplicate", "mnemonics", "mnemonics [C++], dialog box controls", "keyboard shortcuts [C++], uniqueness checking", "Check Mnemonics command", "controls [C++], access keys", "access keys [C++]", "combo boxes [C++], Data property", "controls [C++], testing values in combo boxes", "combo boxes [C++], adding values", "combo boxes [C++], previewing values", "Data property", "combo boxes [C++], testing values"]
ms.assetid: 60a85435-aa30-4c5c-98b6-42fb045b9eb2
---
# Defining Control Access and Values

## Change the tab order of controls

The tab order is the order in which the **Tab** key moves the input focus from one control to the next within a dialog box. Usually the tab order proceeds from left to right and from top to bottom in a dialog box. Each control has a **Tabstop** property that determines whether a control receives input focus.

### To set input focus for a control

In the [Properties Window](/visualstudio/ide/reference/properties-window), select **True** or **False** in the **Tabstop** property.

Even controls that don't have the **Tabstop** property set to **True** need to be part of the tab order. Tab order is important, for example, when you [define access keys (mnemonics)](../windows/defining-mnemonics-access-keys.md) for controls that don't have captions. Static text that contains an access key for a related control must immediately precede the related control in the tab order.

> [!NOTE]
> If your dialog box contains overlapping controls, changing the tab order may change the way the controls are displayed. Controls that come later in the tab order are always displayed on top of any overlapping controls that precede them in the tab order.

### To view the current tab order for all controls in a dialog box

Go to the **Format** menu and select **Tab Order**, or press **Ctrl** + **D**.

### To change the tab order for all controls in a dialog box

1. On the **Format** menu, select **Tab Order**.

   A number in the upper-left corner of each control shows its place in the current tab order.

1. Set the tab order by selecting each control in the order you want the **Tab** key to follow.

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

## Define Mnemonics (Access Keys)

Normally, keyboard users move the input focus from one control to another in a dialog box with the **Tab** and **Arrow** keys. However, you can define an access key (a mnemonic or easy-to-remember name) that allows users to choose a control by pressing a single key.

### To define an access key for a control with a visible caption (push buttons, check boxes, and radio buttons)

1. Select the control on the dialog box.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), in the **Caption** property, type a new name for the control, typing an ampersand (`&`) in front of the letter you want as the access key for that control. For example, `&Radio1`.

1. Press **Enter**.

   An underline appears in the displayed caption to indicate the access key, for example, **R**adio1.

### To define an access key for a control without a visible caption

1. Make a caption for the control by using a **Static Text** control in the [Toolbox](/visualstudio/ide/reference/toolbox).

1. In the static text caption, type an ampersand (`&`) in front of the letter you want as the access key.

1. Make sure the static text control immediately precedes the control it labels in the tab order.

> [!NOTE]
> All the access keys within a dialog box should be unique. To check for duplicate access keys, go to the **Format** menu and select **Check Mnemonics**.

## Combo Box Values

You can add values to a combo box control as long as you have the **Dialog** editor open.

> [!TIP]
> It's a good idea to add all values to the combo box *before* you size the box in the **Dialog** editor, or you may truncate text that should appear in the combo control.

### To enter values into a combo box control

1. Choose the combo box control by selecting it.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), scroll down to the **Data** property.

   > [!NOTE]
   > If you're displaying properties grouped by type, **Data** appears in the **Misc** properties.

1. Select the value area for the **Data** property and type in your data values, separated by semicolons.

   > [!NOTE]
   > Don't put spaces between values because spaces interfere with alphabetizing in the drop-down list.

1. Press **Enter** when you are finished adding values.

For information on enlarging the drop-down portion of a combo box, see [Setting the Size of the Combo Box and Its Drop-Down List](setting-the-size-of-the-combo-box-and-its-drop-down-list.md).

> [!NOTE]
> You cannot add values to Win32 projects using this procedure (the **Data** property is grayed out for Win32 projects). Because Win32 projects do not have libraries that add this capability, you must add values to a combo box with a Win32 project programmatically.

### To test the appearance of values in a combo box

After entering values in the **Data** property, select the **Test** button on the [Dialog Editor Toolbar](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

   Try scrolling down the entire value list. Values appear exactly as they are typed in the **Data** property in the **Properties** window. There is no spelling or capitalization checking.

   Press **Esc** to return to the **Dialog box** editor.

   You can now modify your code to specify which radio button should appear selected. For example, `m_radioBox1 = 0;` selects the first radio button in the group.
   You can now modify your code to specify which radio button should appear selected. For example, `m_radioBox1 = 0;` selects the first radio button in the group.

## Radio Button Values

When you add radio buttons to a dialog box, treat them as a group by setting a **Group** property in the **Properties** window for the first button in the group. A control ID for that radio button then appears in the [Add Member Variable Wizard](../ide/add-member-variable-wizard.md), allowing you to add a member variable for the group of radio buttons.

You can have more than one group of radio buttons on a dialog box. Add each group using the following procedure.

### To add a group of radio buttons to a dialog box

1. Select the radio button control in the [Toolbox Window](/visualstudio/ide/reference/toolbox) and choose the location in the dialog box where to place the control.

1. Repeat the above step to add as many radio buttons as you need. Make sure the radio buttons in the group are consecutive in the tab order.

1. In the [Properties Window](/visualstudio/ide/reference/properties-window), set the **Group** property of the *first* radio button in the tab order to **True**.

   Changing the **Group** property to **True** adds the WS_GROUP style to the button's entry in the dialog object of the resource script and prevents the user can from selecting more than one radio button at a time in the button group (if the user selects one radio button, the others in the group are cleared).

   > [!NOTE]
   > Only the first radio button in the group should have the **Group** property set to **True**. If you have additional controls that are not part of the button group, set the **Group** property of the first control *that is outside the group* to **True** as well. You can quickly identify the first control outside of the group by using **Ctrl**+**D** to view the tab order.

### To add a member variable for the radio button group

1. Right-click the first radio button control in the tab order (the dominant control and the one with the **Group** property set to **True**) and choose **Add Variable** from the shortcut menu.

1. In the [Add Member Variable wizard](../ide/add-member-variable-wizard.md), select the **Control variable** check box, then select the **Value** radio button.

1. In the **Variable name** box, type a name for the new member variable.

1. In the **Variable type** list box, select **int** or type *int*.

   You can now modify your code to specify which radio button should appear selected. For example, `m_radioBox1 = 0;` selects the first radio button in the group.

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Controls](../mfc/controls-mfc.md)