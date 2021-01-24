---
description: "Learn more about: Dynamic Layout"
title: "Dynamic Layout"
ms.date: "09/09/2019"
ms.assetid: 8598cfb2-c8d4-4f5a-bf2b-59dc4653e042
---
# Dynamic Layout

With MFC in Visual Studio 2015, you can create dialogs that the user can resize, and you can control the way the layout adjusts to the change in size. For example, you can attach buttons at the bottom of a dialog to the bottom edge so they always stay at the bottom. You can also set up certain controls such as listboxes, editboxes, and text fields to expand as the user expands the dialog.

## Specifying dynamic layout settings for an MFC dialog box

When the user resizes a dialog, the controls in the dialog can resize or move in the X and Y directions. The change in size or position of a control when the user resizes a dialog is called dynamic layout. For example, the following is a dialog before being resized:

![Dialog before being resized.](../mfc/media/mfcdynamiclayout4.png "Dialog before being resized.")

After being resized, the listbox area is increased to show more items, and the buttons are moved along with the bottom right corner:

![Dialog after being resized.](../mfc/media/mfcdynamiclayout5.png "Dialog after being resized.")

You can control dynamic layout by specifying the details for each control in the Resource Editor in the IDE, or you can do so programmatically by accessing the `CMFCDynamicLayout` object for a particular control and setting the properties.

### Setting dynamic layout properties in the resource editor

You can set the dynamic layout behavior for a dialog box without having to write any code, by using the resource editor.

#### To set dynamic layout properties in the resource editor

1. With an MFC project open, open the dialog you want to work with in the dialog editor.

   ![Open the dialog in the resource editor.](../mfc/media/mfcdynamiclayout3.png "Open the dialog in the resource editor.")

1. Select a control and in the **Properties** window (in **Class View**), set its dynamic layout properties. The **Dynamic Layout** section in the **Properties** window contains the properties **Moving Type**, **Sizing Type**, and, depending on the values selected for those properties, specific properties that define how much controls move or change size. **Moving Type** determines how a control is moved as the size of the dialog is changed; **Sizing Type** determines how a control is resized as the size of the dialog is changed. **Moving Type** and **Sizing Type** may be **Horizontal**, **Vertical**, **Both**, or **None** depending on the dimensions that you want to change dynamically. Horizontal is the X dimension; Vertical is the Y direction.

1. If you want a control such as a button to be at a fixed size and stay in place at the bottom right, as is common for the **OK** or **Cancel** buttons, set the **Sizing Type** to **None**, and set the **Moving Type** to **Both**. For the **Moving X** and **Moving Y** values under **Moving Type**, set 100% to cause the control to stay a fixed distance from the bottom right corner.

   ![Dynamic Layout](../mfc/media/mfcdynamiclayout1.png "Dynamic Layout")

1. Suppose you also have a control that you want to expand as the dialog expands. Typically, a user might expand a dialog in order to expand a multiline editbox to increase the size of the text area, or they might expand a list control to see more data. For this case, set the **Sizing Type** to Both, and set the **Moving Type** to none. Then, set the **Sizing X** and **Sizing Y** values to 100.

   ![Dynamic Layout Settings](../mfc/media/mfcdynamiclayout2.png "Dynamic Layout Settings")

1. Experiment with other values that might make sense for your controls. A dialog with a one-line textbox might have the **Sizing Type** set to **Horizontal** only, for example.

### Setting dynamic layout properties programmatically

The previous procedure is useful for specifying dynamic layout properties for a dialog at design time, but if you want to control the dynamic layout at runtime, you can set dynamic layout properties programmatically.

#### To set dynamic layout properties programmatically

1. Find or create a place in your dialog class's implementation code where you want to specify the dynamic layout for the dialog. For example, you might want to add a method such as `AdjustLayout` in your dialog, and call it from places where the layout needs to be changed. You might first call this from the constructor, or after making changes to the dialog.

1. For the dialog, call [GetDynamicLayout](reference/cwnd-class.md#getdynamiclayout), a method of the `CWnd` class. `GetDynamicLayout` returns a pointer to a `CMFCDynamicLayout` object.

    ```cpp
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();
    ```

1. For the first control to which you want to add dynamic behavior, use the static methods on the dynamic layout class to create the [MoveSettings](reference/cmfcdynamiclayout-class.md#movesettings_structure) structure that encodes the way the control should be adjusted. You do this by first choosing the appropriate static method: [CMFCDynamicLayout::MoveHorizontal](reference/cmfcdynamiclayout-class.md#movehorizontal), [CMFCDynamicLayout::MoveVertical](reference/cmfcdynamiclayout-class.md#movevertical), [CMFCDynamicLayout::MoveNone](reference/cmfcdynamiclayout-class.md#movenone), or [CMFCDynamicLayout::MoveHorizontalAndVertical](reference/cmfcdynamiclayout-class.md#movehorizontalandvertical). You pass in a percentage for the horizontal and/or vertical aspects of the move. These static methods all return a newly created MoveSettings object that you can use to specify a control's move behavior.

   Keep in mind that 100 means move exactly as much as the dialog changes size, which causes a control's edge to stay a fixed distance from the new border.

    ```cpp
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);
    ```

1. Do the same thing for the size behavior, which uses the [SizeSettings](reference/cmfcdynamiclayout-class.md#sizesettings_structure) type. For example, to specify that a control does not change size when the dialog resizes, use the following code:

    ```cpp
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();
    ```

1. Add the control to the dynamic layout manager using the [CMFCDynamicLayout::AddItem](reference/cmfcdynamiclayout-class.md#additem) method. There are two overloads for different ways of specifying the desired control. One takes the control's window handle (HWND), and the other takes the control ID.

    ```cpp
    dynamicLayout->AddItem(hWndControl,
    moveSettings,
    sizeSettings);
    ```

1. Repeat for each control that needs to be moved or resized.

1. If necessary, can use the [CMFCDynamicLayout::HasItem](reference/cmfcdynamiclayout-class.md#hasitem) method to determine if a control is already on the list of controls subjected to dynamic layout changes, or the [CMFCDynamicLayout::IsEmpty](reference/cmfcdynamiclayout-class.md#isempty) method to determine if there are any controls that are subject to changes.

1. To enable dialog layout, call the [CWnd::EnableDynamicLayout](reference/cwnd-class.md#enabledynamiclayout) method.

    ```cpp
    pDialog->EnableDynamicLayout(TRUE);
    ```

1. The next time the user resizes the dialog, the [CMFCDynamicLayout::Adjust](reference/cmfcdynamiclayout-class.md#adjust) method is called which actually applies the settings.

1. If you want to disable dynamic layout, call [CWnd::EnableDynamicLayout](reference/cwnd-class.md#enabledynamiclayout) with **FALSE** as for the *bEnabled* parameter.

    ```cpp
    pDialog->EnableDynamicLayout(FALSE);
    ```

#### To set the dynamic layout programmatically from a resource file

1. Use the [CMFCDynamicLayout::MoveHorizontalAndVertical](reference/cmfcdynamiclayout-class.md#movehorizontalandvertical) method to specify a resource name in the relevant resource script file (.rc file) that specifies dynamic layout information, as in the following example:

    ```cpp
    dynamicLayout->LoadResource("IDD_DIALOG1");
    ```

   The named resource must reference a dialog that contains layout information in the form of an **AFX_DIALOG_LAYOUT** entry in the resource file, as in the following example:

    ```RC
    /////////////////////////////////////////////////////////////////////////////
    //
    // AFX_DIALOG_LAYOUT
    //

    IDD_MFCAPPLICATION1_DIALOG AFX_DIALOG_LAYOUT
    BEGIN
    0x0000,
    0x6400,
    0x0028,
    0x643c,
    0x0028
    END

    IDD_DIALOG1 AFX_DIALOG_LAYOUT
    BEGIN
    0x0000,
    0x6464,
    0x0000,
    0x6464,
    0x0000,
    0x0000,
    0x6464,
    0x0000,
    0x0000

    END
    ```

## See also

[CMFCDynamicLayout Class](reference/cmfcdynamiclayout-class.md)<br/>
[Control Classes](control-classes.md)<br/>
[Dialog Box Classes](dialog-box-classes.md)<br/>
[Dialog Editor](../windows/dialog-editor.md)<br/>
[Dynamic Dialog Layout for MFC in Visual C++ 2015](https://mariusbancila.ro/blog/2015/07/27/dynamic-dialog-layout-for-mfc-in-visual-c-2015/)
