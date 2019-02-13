---
title: "Controls in Dialog Boxes (C++)| Microsoft Docs"
ms.date: "11/04/2016"
f1_keywords: ["Custom Control"]
helpviewer_keywords: ["controls [C++], dialog boxes", "dialog box controls [C++], about dialog box controls", "dialog box controls", "controls [C++], templates", "custom controls [C++], dialog boxes", "custom controls [C++]", "dialog box controls [C++], custom (user) controls", "Dialog Editor [C++], custom controls"]
ms.assetid: e216c4f9-2fd4-429d-889a-8ebce7bad177
---
# Controls in Dialog Boxes (C++)

You can add controls to a dialog box using the [Dialog Editor tab](../windows/dialog-editor-tab-toolbox.md) in the [Toolbox window](/visualstudio/ide/reference/toolbox), which enables you to choose the control you want and drag it onto the dialog box. By default, the Toolbox window is set to auto hide. It appears as a tab on the left margin of your solution when the Dialog editor is open. However, you can pin the **Toolbox** window into position by clicking the **Auto Hide** button in the upper right corner of the window. For more information on how to control the behavior of this window, see [Window Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

The fastest way to add controls to a dialog box, reposition existing controls, or move controls from one dialog box to another, is to use the drag-and-drop method. The control's position is outlined in a dotted line until it is dropped into the dialog box. When you add a control to a dialog box with the drag-and-drop method, the control is given a standard height appropriate to that type of control.

When you add a control to a dialog box or reposition it, its final placement may be determined by guides or margins, or whether you have the layout grid turned on.

Once you have added a control to the dialog box, you can change properties such as its caption in the [Properties Window](/visualstudio/ide/reference/properties-window). You can select multiple controls and change their properties all at once.

- [Adding, Editing, or Deleting Controls](adding-editing-or-deleting-controls.md)

- [Selecting Controls](../windows/selecting-controls.md)

- [Sizing Individual Controls](../windows/sizing-individual-controls.md)

- [Making Controls the Same Width, Height, or Size](../windows/making-controls-the-same-width-height-or-size.md)

- [Setting the Size of the Combo Box and Its Drop-Down List](setting-the-size-of-the-combo-box-and-its-drop-down-list.md)

- [Adding Values to a Combo Box Control](../windows/adding-values-to-a-combo-box-control.md)

- [Setting the Width of a Horizontal Scroll Bar](../windows/setting-the-width-of-a-horizontal-scroll-bar.md)

- [The Arrangement of Controls on Dialog Boxes](../windows/arrangement-of-controls-on-dialog-boxes.md)

- [Defining Mnemonics (Access Keys)](../windows/defining-mnemonics-access-keys.md)

- [Specifying the Location and Size of a Dialog Box](../windows/specifying-the-location-and-size-of-a-dialog-box.md)

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
|Custom control|TTN_GETDISPINFO|

For more information, see [Control Classes](../mfc/control-classes.md), [Dialog Box Classes](../mfc/dialog-box-classes.md), and [Scroll-Bar Styles](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

## Custom controls

The Dialog editor lets you use existing "custom" or "user" controls in a dialog box template.

> [!NOTE]
> Custom controls in this sense are not to be confused with ActiveX controls. ActiveX controls were sometimes called OLE custom controls. Also, don't confuse these controls with the owner-drawn controls in Windows.

This functionality is intended to let you use controls other than those supplied by Windows. At run time, the control is associated with a window class (not the same as a C++ class). A more common way to accomplish the same task is to install any control, such as a static control, in your dialog box. Then at run time, in the [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) function, remove that control and replace it with your own custom control.

This is an old technique. Today you are advised in most cases to write an ActiveX control or subclass a Windows common control.

For these custom controls, you are limited to:

- Setting the location in the dialog box.

- Typing a caption.

- Identifying the name of the control's Windows class (your application code must register the control by this name).

- Typing a 32-bit hexadecimal value that sets the control's style.

- Setting the extended style.

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See also

[Adding Event Handlers for Dialog Box Controls](../windows/adding-event-handlers-for-dialog-box-controls.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)<br/>
[Dialog Editor](../windows/dialog-editor.md)<br/>
[Controls](../mfc/controls-mfc.md)<br/>