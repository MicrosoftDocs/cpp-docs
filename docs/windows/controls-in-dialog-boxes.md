---
description: "Learn more about: Dialog Box Controls (C++)"
title: "Dialog Box Controls (C++)| Microsoft Docs"
ms.date: "02/15/2019"
f1_keywords: ["Custom Control"]
helpviewer_keywords: ["controls [C++], dialog boxes", "dialog box controls [C++], about dialog box controls", "dialog box controls", "controls [C++], templates", "custom controls [C++], dialog boxes", "custom controls [C++]", "dialog box controls [C++], custom (user) controls", "Dialog Editor [C++], custom controls"]
ms.assetid: e216c4f9-2fd4-429d-889a-8ebce7bad177
---
# Dialog Box Controls (C++)

You can add controls to a dialog box using the **Dialog Editor** tab in the [Toolbox window](/visualstudio/ide/reference/toolbox) that enables you to choose the control you want and drag it onto the dialog box. By default, the **Toolbox** window is set to auto hide. It appears as a tab on the left margin of your solution when the **Dialog Editor** is open. However, you can pin the **Toolbox** window into position by selecting the **Auto Hide** button in the upper right corner of the window. For more information on how to control the behavior of this window, see [Window Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

The fastest way to add controls to a dialog box, reposition existing controls, or move controls from one dialog box to another, is to use the drag-and-drop method. The control's position is outlined in a dotted line until it is dropped into the dialog box. When you add a control to a dialog box with the drag-and-drop method, the control is given a standard height appropriate to that type of control.

When you add a control to a dialog box or reposition it, its final placement may be determined by guides or margins, or whether you have the layout grid turned on.

Once you have added a control to the dialog box, you can change properties such as its caption in the [Properties Window](/visualstudio/ide/reference/properties-window). You can also select multiple controls and change their properties all at once.

For more information on the **Dialog Editor**, see how to [Add, Edit, or Delete Controls](adding-editing-or-deleting-controls.md), [Layout Controls](../windows/arrangement-of-controls-on-dialog-boxes.md), and [Define Control Access and Values](../windows/defining-mnemonics-access-keys.md).

For more information on controls and dialogs, see [Control Classes](../mfc/control-classes.md), [Dialog Box Classes](../mfc/dialog-box-classes.md), and [Scroll-Bar Styles](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles).

The standard controls available in the **Toolbox** with default events are:

|Control name|Default event|
|---|---|
|[Button control](../mfc/reference/cbutton-class.md)|BN_CLICKED|
|[Check Box control](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Combo Box control](../mfc/reference/ccombobox-class.md)|CBN_SELCHANGE|
|[Edit control](../mfc/reference/cedit-class.md)|EN_CHANGE|
|Group box|(not applicable)|
|[List Box control](../mfc/reference/clistbox-class.md)|LBN_SELCHANGE|
|[Radio Button control](../mfc/reference/styles-used-by-mfc.md#button-styles)|BN_CLICKED|
|[Static Text control](../mfc/reference/cstatic-class.md)|(not applicable)|
|[Picture control](../mfc/reference/cpictureholder-class.md)|(not applicable)|
|[Rich Edit 2.0 control](../mfc/using-cricheditctrl.md)|EN_CHANGE|
|[Scroll bar control](../mfc/reference/cscrollbar-class.md)|NM_THEMECHANGED|

> [!NOTE]
> For more information on using the **RichEdit 1.0** control with MFC, see [Using the RichEdit 1.0 Control with MFC](./adding-editing-or-deleting-controls.md) and [Rich Edit Control Examples](../mfc/rich-edit-control-examples.md).

The [Windows Common Controls](../mfc/controls-mfc.md) available in the **Toolbox** to provide increased functionality are:

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

## Custom Controls

The **Dialog Editor** lets you use existing custom or user controls in a dialog box template.

> [!NOTE]
> Custom controls in this sense are not to be confused with ActiveX controls. ActiveX controls were sometimes called OLE custom controls. Also, don't confuse these controls with the owner-drawn controls in Windows.

This functionality is intended to let you use controls other than those supplied by Windows. At run time, the control is associated with a Window class (not the same as a C++ class). A more common way to accomplish the same task is to install any control, such as a static control, in your dialog box. Then at run time, in the [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) function, remove that control and replace it with your own custom control.

> [!NOTE]
> This is an old technique. Today you are advised in most cases to write an ActiveX control or subclass a Windows common control.

For these custom controls, you are limited to:

- Setting the location in the dialog box.

- Typing a caption.

- Identifying the name of the control's Windows class since your application code must register the control by this name.

- Typing a 32-bit hexadecimal value that sets the control's style.

- Setting the extended style.

## Requirements

Win32

## See also

[Dialog Editor](../windows/dialog-editor.md)

<!--
[Adding Event Handlers for Dialog Box Controls](./adding-editing-or-deleting-controls.md)<br/>
[Dialog Box Controls and Variable Types](../ide/adding-a-member-variable-visual-cpp.md#dialog-box-controls-and-variable-types)<br/>
[Controls](../mfc/controls-mfc.md)<br/>-->
