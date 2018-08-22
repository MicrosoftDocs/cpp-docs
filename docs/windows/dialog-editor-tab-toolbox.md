---
title: "Dialog Editor Tab, Toolbox | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["Toolbox [C++], Dialog Editor tab", "controls [C++], types", "syslink controls ino dialog boxes", "custom controls [Visual Studio], dialog boxes", "controls [C++], standard", "Dialog editor, creating controls", "controls [C++], adding to dialog boxes"]
ms.assetid: 253885c2-dcb9-4d8e-ac9b-805ea31cbf5e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Dialog Editor Tab, Toolbox

The **Dialog Editor** tab appears in the [Toolbox window](/visualstudio/ide/reference/toolbox) when you're working in the **Dialog** editor. To add controls to your new dialog box, drag controls from the **Toolbox** to the dialog box you are creating (for more information, see [Adding a Control to a Dialog Box](adding-a-control-to-a-dialog-box.md)). You can then move the controls around or change their size and shape.

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

For information on adding resources to managed projects, please see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## Requirements

Win32

## See Also

[Controls](../mfc/controls-mfc.md)  
[Control Classes](../mfc/control-classes.md)  
[Dialog Box Classes](../mfc/dialog-box-classes.md)  
[Scroll-Bar Styles](../mfc/reference/styles-used-by-mfc.md#scroll-bar-styles)  
[Rich Edit Control Examples](../mfc/rich-edit-control-examples.md)  
[Adding Event Handlers for Dialog Box Controls](../windows/adding-event-handlers-for-dialog-box-controls.md)  
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)