---
title: "Adding, Editing, or Deleting Controls"
ms.date: "11/04/2016"
f1_keywords: ["vc.editors.dialog.dialog", "vc.controls.activex", "vc.editors.dialog.insertActiveXControls"]
helpviewer_keywords: ["Dialog Editor [C++], creating controls", "dialog boxes [C++], adding controls to", "Toolbox [C++], Dialog Editor tab", "controls [C++], types", "syslink controls in dialog boxes", "custom controls [C++], dialog boxes", "controls [C++], standard", "Dialog Editor [C++], creating controls", "controls [C++], adding to dialog boxes", "controls [C++], adding multiple", "dialog box controls [C++], size", "controls [C++], sizing", "dialog boxes [C++], adding ActiveX controls", "ActiveX controls [C++], adding to dialog boxes", "Insert ActiveX Control dialog box [C++]", "controls [C++], editing properties", "ActiveX controls [C++], properties", "controls [C++], undoing changes", "controls [C++], editing properties", "dialog box controls [C++], editing properties", "dialog box controls [C++], deleting", "controls [C++], deleting", "Dialog Editor [C++], default control events", "controls [C++], default control events", "events [C++], controls", "dialog box controls [C++], events", "member variables, defining for controls", "variables, dialog box control member variables", "controls [C++], member variables", "Dialog Editor [C++], defining member variables for controls"]
ms.assetid: 73cef03f-5c8c-456a-87d1-1458dff185cf
---
# Adding, Editing, or Deleting Controls

Using the **Dialog** editor, you can add, resize, edit, and delete controls in dialog boxes. You can also edit the properties of a control, such as its ID, or whether it's initially visible at run time.

The **Dialog Editor** tab appears in the [Toolbox window](/visualstudio/ide/reference/toolbox) when you're working in the **Dialog** editor. You can also customize the **Toolbox** window for easier use. For more information, see [Using the Toolbox](/visualstudio/ide/using-the-toolbox) and [Show or hide the Toolbox window](showing-or-hiding-the-dialog-editor-toolbar.md).

You can use the shortcut menu in the **Dialog** editor to quickly add registered ActiveX controls to a dialog box, and you can add ActiveX controls to the **Toolbox** for quick access.

The standard controls available in the **Toolbox** with default events are:

|Control name|Default event|
|---|---|
|[Button control](../mfc/reference/cbutton-class.md)|BN_CLICKED|
|[Check Box control](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Combo Box control](../mfc/reference/ccombobox-class.md)|CBN_SELCHANGE|
|[Edit control](../mfc/reference/cedit-class.md)|EN_CHANGE|
|Group box|(Not applicable)|
|[List Box control](../mfc/reference/clistbox-class.md)|LBN_SELCHANGE|
|[Radio Button control](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Static Text control](../mfc/reference/cstatic-class.md)|(Not applicable)|
|[Picture control](../mfc/reference/cpictureholder-class.md)|(Not applicable)|
|[Rich Edit 2.0 control](../mfc/using-cricheditctrl.md)|EN_CHANGE|
|[Scroll bar control](../mfc/reference/cscrollbar-class.md)|NM_THEMECHANGED|

For more information on using the **RichEdit 1.0** control with MFC, see [Using the RichEdit 1.0 Control with MFC](../windows/using-the-richedit-1-0-control-with-mfc.md) and [Rich Edit Control Examples](../mfc/rich-edit-control-examples.md).

The [Windows Common Controls](../mfc/controls-mfc.md) available in the **Toolbox** provide increased functionality in your application. They include:

|Control name|Default event|
|---|---|
|[Slider control](../mfc/slider-control-styles.md)|NM_CUSTOMDRAW|
|[Spin control](../mfc/using-cspinbuttonctrl.md)|UDN_DELTAPOS|
|[Progress control](../mfc/styles-for-the-progress-control.md)|NM_CUSTOMDRAW|
|[Hot Key control](../mfc/using-a-hot-key-control.md)|NM_OUTOFMEMORY|
|[List control](../mfc/list-control-and-list-view.md)|LVN_ITEMCHANGE|
|[Tree control](../mfc/tree-control-styles.md)|TVN_SELCHANGE|
|[Tab control](../mfc/tab-controls-and-property-sheets.md)|TCN_SELCHANGE|
|[Animation control](../mfc/using-an-animation-control.md)|ACN_START|
|[Date Time Picker control](../mfc/creating-the-date-and-time-picker-control.md)|DTN_DATETIMECHANGE|
|[Month Calendar control](../mfc/month-calendar-control-examples.md)|MCN_SELCHANGE|
|[IP Address control](../mfc/reference/cipaddressctrl-class.md)|IPN_FIELDCHANGED|
|[Extended Combo Box control](../mfc/creating-an-extended-combo-box-control.md)||
|[Custom control](custom-controls-in-the-dialog-editor.md)|TTN_GETDISPINFO|

For more information, see [Control Classes](../mfc/control-classes.md), [Dialog Box Classes](../mfc/dialog-box-classes.md), and [Scroll-Bar Styles](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To add a control

To add controls to your new dialog box, drag controls from the **Toolbox** to the dialog box you're creating. You can then move the controls around or change their size and shape.

You can add custom controls to the dialog box by selecting the **Custom Control** icon in the **Toolbox** and dragging it to your dialog box. To add a **Syslink** control, add a custom control, then change the control's **Class** property to **Syslink**. This action will cause the properties to refresh and show the **Syslink** control properties. For information on the MFC wrapper class, see [CLinkCtrl](../mfc/reference/clinkctrl-class.md).

### To add a control to a dialog box

1. Ensure that the dialog box tabbed window is the current document in the editor frame. If a dialog isn't the current document, you won't see the **Dialog Editor Tab** in the **Toolbox**.

1. On the **Dialog Editor** tab of the **Toolbox** window, select the control you want, then:

   Select the dialog box at the location where you want to place the control. The control appears where you've selected.

   \- or -

   Drag and drop the control from the **Toolbox** window to the location on your dialog box.

   \- or -

   Double-click the control in the **Toolbox** window (it appears on your dialog box) then reposition the control to the location you prefer.

### To add multiple controls

1. While holding down the **Ctrl** key, select a control in the **Toolbox** window.

1. Release the **Ctrl** key and select the dialog box as many times as you want to add the particular control.

1. Press **Esc** to stop placing controls.

### To size a control while you add it

1. Select a control in the **Toolbox** window.

1. Place your cursor (which appears as cross hairs) where you want the upper-left corner of the new control to be on your dialog box.

1. Select and hold down the mouse button to anchor the upper-left corner of your control on the dialog box, then drag the cursor to the right and down until the control is the size you want.

   > [!NOTE]
   > You can actually anchor any of the four corners of the control you're drawing. This procedure used the upper-left corner as an example.

1. Release the mouse button. The control settles onto the dialog box in the size you specified.

   > [!TIP]
   > You can resize the control after dropping it onto the dialog box by moving the sizing handles on the border of the control. For more information, see [Sizing Individual Controls](../windows/sizing-individual-controls.md).

### To add an ActiveX control

Visual Studio enables you to insert ActiveX controls into your dialog box. For more information, see [MFC ActiveX Controls](../mfc/mfc-activex-controls.md) and [ActiveX Control Containers](../mfc/activex-control-containers.md).

The **Insert ActiveX Control** dialog box enables you to insert ActiveX controls into your dialog box while using the [Dialog editor](../windows/dialog-editor.md). This dialog contains the following properties:

|Property|Description|
|---|---|
|**ActiveX Control**|Displays a list of Active X controls. Inserting a control from this dialog box doesn't generate a wrapper class. If you need a wrapper class, use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to create one (for more information, see [Adding a Class](../ide/adding-a-class-visual-cpp.md)). If an Active X control doesn't appear in this dialog box, try installing the control according to the vendor's instructions.|
|**Path**|Displays the file in which the ActiveX control is found.|

#### To see the ActiveX controls available

1. Open a dialog box in the Dialog editor.

1. Right-click anywhere in the body of the dialog box.

1. On the shortcut menu, select **Insert ActiveX Control**.

   The **Insert ActiveX Control** dialog box appears, showing all the ActiveX controls on your system. At the bottom of the dialog box, the path to the ActiveX Control file appears.

#### To add an ActiveX control to a dialog box

1. In the **Insert ActiveX Control** dialog box, select the control you want to add to your dialog box and select **OK**.

   The control appears in the dialog box, where you can edit it or create handlers for it just as you would any other control.

   > [!NOTE]
   > You can add ActiveX controls to the **Toolbox** window for easy access.

   > [!CAUTION]
   > It may not be legal to distribute all of the ActiveX controls on your system. Please refer to the license agreement for the software that installed the controls or contact the software company.

## To edit a control

### To edit the properties of a control or controls

1. In the dialog box, select the control you want to modify.

   > [!NOTE]
   > If you select multiple controls, only the properties common to the selected controls can be edited.

1. In the [Properties window](/visualstudio/ide/reference/properties-window), change the properties of your control.

   > [!NOTE]
   > When you set the **Bitmap** property for a button, radio button, or check box control equal to **True**, the style BS_BITMAP is implemented for your control. For more information, see [Button Styles](../mfc/reference/styles-used-by-mfc.md#button-styles). For an example of associating a bitmap with a control, see [CButton::SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmaps will not appear on your control while you are in the **Dialog** resource editor.

### To undo changes to the properties of a control

1. Make sure the control has focus in the **Dialog** editor.

1. Choose **Undo** from the **Edit** menu (if focus isn't on the control, the **Undo** command will be unavailable).

### To edit properties for an ActiveX control

ActiveX controls supplied by independent vendors may come equipped with their own properties and characteristics. Properties for ActiveX controls are displayed in the **Properties** window. Also, any property pages created by the writers of the ActiveX control are displayed in the **Properties Pages** dialog box (to view the **Property Page** for a specific ActiveX control, click the **Property Page** button in the [Properties Window](/visualstudio/ide/reference/properties-window)).

Various tabs are displayed in the property page for an ActiveX control, depending on the property sheets that come as part of the ActiveX control.

> [!NOTE]
> The following procedure applies to using the property page to edit ActiveX controls. You can also browse and edit ActiveX properties in the new **Properties** window.

1. Select the **ActiveX** control.

1. On the **View** menu, select **Property Page** and view the properties.

1. Make changes as needed in the property page.

### To define a member variable for a (non-button) dialog box control

To define a member variable for any dialog box control except buttons, you can use the following method.

> [!NOTE]
> This process applies only to dialog controls within an MFC project. ATL projects should use the **New Windows Messages and Event Handlers** dialog box. For more information, see [Message Types Associated with User-Interface Objects](../mfc/reference/message-types-associated-with-user-interface-objects.md), [Editing a Message Handler](../mfc/reference/editing-a-message-handler.md), and [Defining a Message Handler for a Reflected Message](../mfc/reference/defining-a-message-handler-for-a-reflected-message.md).

1. In the [Dialog editor](../windows/dialog-editor.md), select a control.

1. While pressing the **Ctrl** key, double-click the dialog box control.

   The [Add Member Variable wizard](../ide/add-member-variable-wizard.md) appears.

1. Type the appropriate information in the **Add Member Variable** wizard. For more information, see [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

1. Select **OK** to return to the **Dialog** editor.

   > [!TIP]
   > To jump from any dialog box control to its existing handler, double-click the control.

You can also use the **Member Variables** tab in the [MFC Class Wizard](../mfc/reference/mfc-class-wizard.md) to add new member variables for a specified class, and view member variables that have already been defined.

## To delete a control

In the dialog box, select the control and press the **Delete** key.

   \- or -

On the **Edit** menu, select **Delete**.

   > [!TIP]
   > While using the **Dialog** editor, in many instances, you can click the right mouse button to display a shortcut menu of frequently used commands.

## Requirements

Win32

## See also

- [Controls in Dialog Boxes](controls-in-dialog-boxes.md)
- [Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)
- [Resource Files](../windows/resource-files-visual-studio.md)

<!-- excluded links
- [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)
- [Adding Functionality with Code Wizards](../ide/adding-functionality-with-code-wizards-cpp.md)
- [Adding a Class](../ide/adding-a-class-visual-cpp.md)
- [Adding a Member Function](../ide/adding-a-member-function-visual-cpp.md)
- [Adding a Member Variable](../ide/adding-a-member-variable-visual-cpp.md)
- [Overriding a Virtual Function](../ide/overriding-a-virtual-function-visual-cpp.md)
- [MFC Message Handler](../mfc/reference/adding-an-mfc-message-handler.md)
- [Declaring a Variable Based on Your New Control Class](../mfc/reference/declaring-a-variable-based-on-your-new-control-class.md)
-->
