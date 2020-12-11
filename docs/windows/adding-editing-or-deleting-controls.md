---
description: "Learn more about: How To: Add, Edit, or Delete Controls (C++)"
title: "How To: Add, Edit, or Delete Controls (C++)"
ms.date: "02/15/2019"
f1_keywords: ["vc.controls.activex", "vc.editors.dialog.insertActiveXControls"]
helpviewer_keywords: ["Dialog Editor [C++], creating controls", "dialog boxes [C++], adding controls to", "Toolbox [C++], Dialog Editor tab", "controls [C++], types", "syslink controls in dialog boxes", "custom controls [C++], dialog boxes", "controls [C++], standard", "Dialog Editor [C++], creating controls", "controls [C++], adding to dialog boxes", "controls [C++], adding multiple", "dialog box controls [C++], size", "controls [C++], sizing", "dialog boxes [C++], adding ActiveX controls", "ActiveX controls [C++], adding to dialog boxes", "Insert ActiveX Control dialog box [C++]", "controls [C++], editing properties", "ActiveX controls [C++], properties", "controls [C++], undoing changes", "controls [C++], editing properties", "dialog box controls [C++], editing properties", "dialog box controls [C++], deleting", "controls [C++], deleting", "Dialog Editor [C++], default control events", "controls [C++], default control events", "events [C++], controls", "dialog box controls [C++], events", "member variables, defining for controls", "variables, dialog box control member variables", "controls [C++], member variables", "Dialog Editor [C++], defining member variables for controls", "controls [C++], troubleshooting", "Dialog Editor [C++], troubleshooting", "dialog boxes [C++], troubleshooting", "InitCommonControls", "RichEdit 1.0 control", "rich edit controls [C++], RichEdit 1.0"]
ms.assetid: 73cef03f-5c8c-456a-87d1-1458dff185cf
---
# How To: Add, Edit, or Delete Controls (C++)

Using the **Dialog Editor**, you can add, resize, edit, and delete controls in dialog boxes. You can also edit the properties of a control, such as its ID, or whether it's initially visible at run time.

The **Dialog Editor** tab appears in the [Toolbox window](/visualstudio/ide/reference/toolbox) when you're working in the **Dialog Editor**. You can also customize the **Toolbox** window for easier use. For more information, see [Using the Toolbox](/visualstudio/ide/using-the-toolbox) and [Show or hide the Toolbox window](./dialog-editor.md).

> [!TIP]
> While using the **Dialog Editor**, in many instances, you can select the right mouse button to display a shortcut menu of frequently used commands.

## Add Controls

### To add a control

1. Ensure that the dialog box tabbed window is the current document in the editor frame. If a dialog isn't the current document, you won't see the **Dialog Editor Tab** in the **Toolbox**.

1. On the **Dialog Editor** tab of the **Toolbox** window, select the control you want, then either:

   - Select the dialog box at the location where you want to place the control and the control appears where you've selected.

   - Drag and drop the control from the **Toolbox** window to the location on your dialog box. You can then move the control around, or change its size and shape.

   - Double-click the control in the **Toolbox** window and it appears on your dialog box. Reposition the control to the location you prefer.

### To add multiple controls

1. While holding down the **Ctrl** key, select a control in the **Toolbox** window.

1. Release the **Ctrl** key and select the dialog box as many times as you want to add the particular control.

1. Press **Esc** to stop placing controls.

### To size a control while you add it

1. Select a control in the **Toolbox** window.

1. Place your cursor that appears as cross hairs, where you want the upper-left corner of the new control to be on your dialog box.

1. Select and hold down the mouse button to anchor the upper-left corner of your control on the dialog box. Then drag the cursor to the right and down, until the control is the size you want.

   > [!NOTE]
   > You can anchor any of the four corners of the control you're drawing. This procedure used the upper-left corner as an example.

1. Release the mouse button. The control settles onto the dialog box in the size you specified.

> [!TIP]
> You can resize the control after dropping it onto the dialog box by moving the sizing handles on the border of the control. For more information, see [Sizing Individual Controls](./arrangement-of-controls-on-dialog-boxes.md).

### To add a custom control

You can add custom controls to the dialog box. Select the **Custom Control** icon in the **Toolbox** and drag it to your dialog box. To add a `Syslink` control, add a custom control, then change the control's **Class** property to `Syslink`. This action will cause the properties to refresh and show the `Syslink` control properties. For information on the MFC wrapper class, see [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

## Edit Controls

### To edit the properties of a control or controls

1. In the dialog box, select the control you want to modify.

   > [!NOTE]
   > If you select multiple controls, only the properties common to the selected controls can be edited.

1. In the [Properties window](/visualstudio/ide/reference/properties-window), change the properties of your control.

   > [!NOTE]
   > When you set the **Bitmap** property for a button, radio button, or check box control equal to **True**, the style BS_BITMAP is implemented for your control. For more information, see [Button Styles](../mfc/reference/styles-used-by-mfc.md#button-styles). For an example of associating a bitmap with a control, see [CButton::SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmaps will not appear on your control while you are in the **Dialog Editor**.

### To undo changes to the properties of a control

1. Make sure the control has focus in the **Dialog Editor**.

1. Go to menu **Edit** > **Undo**. If focus isn't on the control, the **Undo** command will be unavailable.

### To define a member variable for a (non-button) dialog box control

> [!NOTE]
> This process applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box. For more information, see [Message Types Associated with User-Interface Objects](../mfc/reference/message-types-associated-with-user-interface-objects.md), [Editing a Message Handler](../mfc/reference/editing-a-message-handler.md), and [Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

1. In the [Dialog Editor](dialog-editor.md), select a control.

1. While pressing the **Ctrl** key, double-click the dialog box control.

   The [Add Member Variable wizard](../ide/adding-a-member-variable-visual-cpp.md#add-member-variable-wizard) appears.

1. Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

1. Select **OK** to return to the **Dialog Editor**.

> [!TIP]
> To jump from any dialog box control to its existing handler, double-click the control.

You can also use the **Member Variables** tab in the [MFC Class Wizard](../mfc/reference/mfc-class-wizard.md) to add new member variables for a specified class, and view already-defined member variables.

## Delete Controls

In the dialog box, select the control, then press the **Delete** key, or go to menu **Edit** > **Delete**.

## Other Issues

### Troubleshooting

After you add a common control or rich edit control to a dialog box, it won't appear when you test the dialog box. Or, the dialog itself won't appear. For example:

1. Create a Win32 project, modifying the application settings so you create a Windows application (not a console app).

1. In [Resource View](how-to-create-a-resource-script-file.md#create-resources), double-click on the *.rc* file.

1. Under the dialog option, double-click the **About** box.

1. Add an **IP Address Control** to the dialog box.

1. Save and **Rebuild all**.

1. Execute the program.

1. On the dialog box's **Help** menu, select the **About** command and observe no dialog box is displayed.

Currently, the **Dialog Editor** doesn't automatically add code to your project when you drag and drop the following common controls or rich edit controls onto a dialog box. Nor does Visual Studio provide an error or warning when this problem occurs. To fix, add the code for the control manually.

:::row:::
   :::column span="":::
      Animation Control\
      Custom Control\
      Date Time Picker\
      Extended Combo Box
   :::column-end:::
   :::column span="":::
      Hot Key\
      IP Address Control\
      List Control\
      Month Calendar
   :::column-end:::
   :::column span="":::
      Progress Control\
      Rich Edit 2.0 Control\
      Rich Edit Control\
      Slider Control
   :::column-end:::
   :::column span="":::
      Spin Control\
      Tab Control\
      Tree Control
   :::column-end:::
:::row-end:::

To use common controls on a dialog box, you need to call [InitCommonControlsEx](/windows/win32/api/commctrl/nf-commctrl-initcommoncontrolsex) or `AFXInitCommonControls` before you create the dialog box.

To use RichEdit controls, you must call `LoadLibrary`. For more information, see [About Rich Edit Controls](/windows/win32/Controls/about-rich-edit-controls) in the Windows SDK and [Overview of the Rich Edit Control](../mfc/overview-of-the-rich-edit-control.md).

> [!NOTE]
> To use a RichEdit control with MFC, you must first call [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) to load the RichEdit 2.0 Control (RICHED20.DLL), or call [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) to load the older RichEdit 1.0 Control (RICHED32.DLL).
>
> You may use the current [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) class with the older RichEdit 1.0 control, but `CRichEditCtrl` is only designed to support the RichEdit 2.0 control. Because RichEdit 1.0 and RichEdit 2.0 are similar, most methods will work. However, there are some differences between the 1.0 and 2.0 controls, so some methods might work incorrectly or not work at all.

## Insert ActiveX controls

Visual Studio enables you to insert ActiveX controls into your dialog box. For more information, see [MFC ActiveX Controls](../mfc/mfc-activex-controls.md) and [ActiveX Control Containers](../mfc/activex-control-containers.md).

The **Insert ActiveX Control** dialog box enables you to insert ActiveX controls into your dialog box while using the [Dialog Editor](dialog-editor.md). This dialog contains the following properties:

|Property|Description|
|---|---|
|**ActiveX Control**|Displays a list of ActiveX controls.<br/><br/>Inserting a control from this dialog box doesn't generate a wrapper class. If you need a wrapper class, use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to create one, see [Adding a Class](../ide/adding-a-class-visual-cpp.md).<br/><br/>If an ActiveX control doesn't appear in this dialog box, try installing the control according to the vendor's instructions.|
|**Path**|Displays the file in which the ActiveX control is found.|

> [!CAUTION]
> It may not be legal to distribute all of the ActiveX controls on your system. Refer to the license agreement for the software that installed the controls or contact the software company.

### To add an ActiveX control

1. Open a dialog box in the **Dialog Editor**.

1. Right-click anywhere in the body of the dialog box and select **Insert ActiveX Control**.

   The **Insert ActiveX Control** dialog box appears, showing all the ActiveX controls on your system. At the bottom of the dialog box, the path to the ActiveX Control file appears.

1. Select the control you want to add to your dialog box and choose **OK**.

   The control appears in the dialog box, where you can edit it or create handlers for it just as you would any other control.

> [!TIP]
> You can use the shortcut menu in the **Dialog Editor** to quickly add registered ActiveX controls to a dialog box, or try adding ActiveX controls to the **Toolbox** window for easy access.

### To edit properties for an ActiveX control

ActiveX controls supplied by independent vendors may come equipped with their own properties and characteristics. These properties are displayed in the **Properties** window. Any property pages created by the writers of the ActiveX control are displayed in the **Properties Pages** dialog box. (To view the **Property Page** for a specific ActiveX control, select the **Property Page** button in the [Properties window](/visualstudio/ide/reference/properties-window)).

- Select the **ActiveX** control and go to menu **View** > **Property Page** to view the properties. Make changes as needed in the property page.

   Various tabs are displayed in the property page for an ActiveX control, depending on the property sheets that come as part of the ActiveX control.

> [!NOTE]
> This procedure applies to using the property page to edit ActiveX controls. You can also browse and edit ActiveX properties in the new **Properties** window.

## Requirements

Win32

## See also

[Manage Dialog Box Controls](controls-in-dialog-boxes.md)<br/>
[How To: Layout Controls](arrangement-of-controls-on-dialog-boxes.md)<br/>
[How to: Define Control Access and Values](defining-mnemonics-access-keys.md)

<!-- excluded links
[Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)<br/>
[Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Adding a Class](../ide/adding-a-class-visual-cpp.md)<br/>
[Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)<br/>
[Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)
[Declaring a Variable Based on Your New Control Class](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)<br/>
-->
