---
title: "Adding a Control to a Dialog Box (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.dialog"]
helpviewer_keywords: ["dialog boxes [C++], adding controls to", "Toolbox [C++], Dialog Editor tab", "controls [C++], types", "syslink controls in dialog boxes", "custom controls [C++], dialog boxes", "controls [C++], standard", "Dialog Editor [C++], creating controls", "controls [C++], adding to dialog boxes", "controls [C++], adding multiple", "dialog box controls [C++], size", "controls [C++], sizing"]
ms.assetid: b2a26d19-093f-49ca-93da-fef00dfbb381
---
# Adding a Control to a Dialog Box (C++)

The **Dialog Editor** tab appears in the [Toolbox window](/visualstudio/ide/reference/toolbox) when you're working in the **Dialog** editor. To add controls to your new dialog box, drag controls from the **Toolbox** to the dialog box you're creating. You can then move the controls around or change their size and shape.

The standard controls available in the **Toolbox** are:

- [Button control](../mfc/reference/cbutton-class.md)

- [Check Box control](../mfc/reference/styles-used-by-mfc.md#button-styles)

- [Combo Box control](../mfc/reference/ccombobox-class.md)

- [Edit control](../mfc/reference/cedit-class.md)

- Group box

- [List Box control](../mfc/reference/clistbox-class.md)

- [Radio Button control](../mfc/reference/styles-used-by-mfc.md#button-styles)

- [Static Text control](../mfc/reference/cstatic-class.md)

- [Picture control](../mfc/reference/cpictureholder-class.md)

- [Rich Edit 2.0 control](../mfc/using-cricheditctrl.md)

- [Scroll bar control](../mfc/reference/cscrollbar-class.md)

The [Windows Common Controls](../mfc/controls-mfc.md) available in the **Toolbox** provide increased functionality in your application. They include:

- [Slider control](../mfc/slider-control-styles.md)

- [Spin control](../mfc/using-cspinbuttonctrl.md)

- [Progress control](../mfc/styles-for-the-progress-control.md)

- [Hot Key control](../mfc/using-a-hot-key-control.md)

- [List control](../mfc/list-control-and-list-view.md)

- [Tree control](../mfc/tree-control-styles.md)

- [Tab control](../mfc/tab-controls-and-property-sheets.md)

- [Animation control](../mfc/using-an-animation-control.md)

- [Date Time Picker control](../mfc/creating-the-date-and-time-picker-control.md)

- [Month Calendar control](../mfc/month-calendar-control-examples.md)

- [IP Address control](../mfc/reference/cipaddressctrl-class.md)

- [Extended Combo Box control](../mfc/creating-an-extended-combo-box-control.md)

- [Custom control](custom-controls-in-the-dialog-editor.md)

You can add custom controls to the dialog box by selecting the **Custom Control** icon in the **Toolbox** and dragging it to your dialog box. To add a **Syslink** control, add a custom control, then change the control's **Class** property to **Syslink**. This will cause the properties to refresh and show the **Syslink** control properties. For information on the MFC wrapper class, see [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

You may also [add ActiveX controls to your dialog box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md).

You can also customize the **Toolbox** window for easier use. For more information, see [Using the Toolbox](/visualstudio/ide/using-the-toolbox).

For more information on using the **RichEdit 1.0** control with MFC, see [Using the RichEdit 1.0 Control with MFC](../windows/using-the-richedit-1-0-control-with-mfc.md)

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To add a control to a dialog box

1. Ensure that the dialog box tabbed window is the current document in the editor frame. If a dialog isn't the current document, you won't see the **Dialog Editor Tab** in the **Toolbox**.

1. On the **Dialog Editor** tab of the [Toolbox Window](/visualstudio/ide/reference/toolbox), select the control you want, then:

   - Select the dialog box at the location where you want to place the control. The control appears where you've selected.

       \- or -

   - Drag and drop the control from the **Toolbox** window to the location on your dialog box.

       \- or -

   - Double-click the control in the **Toolbox** window (it appears on your dialog box) then reposition the control to the location you prefer.

## To add multiple controls

1. While holding down the **Ctrl** key, select a control in the [Toolbox Window](/visualstudio/ide/reference/toolbox).

1. Release the **Ctrl** key and select the dialog box as many times as you want to add the particular control.

1. Press **Esc** to stop placing controls.

## To size a control while you add it

1. Select a control in the [Toolbox Window](/visualstudio/ide/reference/toolbox).

1. Place your cursor (which appears as cross hairs) where you want the upper-left corner of the new control to be on your dialog box.

1. Select and hold down the mouse button to anchor the upper-left corner of your control on the dialog box, then drag the cursor to the right and down until the control is the size you want.

   > [!NOTE]
   > You can actually anchor any of the four corners of the control you're drawing. This procedure used the upper-left corner as an example.

1. Release the mouse button. The control settles onto the dialog box in the size you specified.

   > [!TIP]
   > You can resize the control after dropping it onto the dialog box by moving the sizing handles on the border of the control. For more information, see [Sizing Individual Controls](../windows/sizing-individual-controls.md).

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[Adding Event Handlers for Dialog Box Controls](../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)<br/>
[Controls](../mfc/controls-mfc.md)<br/>
[Control Classes](../mfc/control-classes.md)<br/>
[Dialog Box Classes](../mfc/dialog-box-classes.md)<br/>
[Scroll-Bar Styles](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles)<br/>
[Rich Edit Control Examples](../mfc/rich-edit-control-examples.md)<br/>
