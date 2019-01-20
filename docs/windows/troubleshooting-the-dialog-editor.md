---
title: "Troubleshooting the Dialog Editor (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["controls [C++], troubleshooting", "Dialog Editor [C++], troubleshooting", "dialog boxes [C++], troubleshooting", "InitCommonControls", "RichEdit 1.0 control", "rich edit controls [C++], RichEdit 1.0"]
ms.assetid: 21882868-5ac4-4a41-a4a6-eaaa059402ea
---
# Troubleshooting the Dialog Editor (C++)

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

Below are a few issues of which you should be aware when working in the C++ **Dialog** editor:

## Adding controls to a dialog causes the dialog to no longer function

After adding a common control or rich edit control to a dialog box, it won't appear when you test the dialog box or the dialog itself won't appear.

### Example of the problem

1. Create a Win32 project, modifying the application settings so you create a Windows application (not a console app).

1. In [Resource View](../windows/resource-view-window.md), double-click on the .rc file.

1. Under the dialog option, double-click the **About** box.

1. Add an **IP Address Control** to the dialog box.

1. Save and **Rebuild all**.

1. Execute the program.

1. On the dialog box's **Help** menu, click the **About** command; no dialog box is displayed.

### The cause

Currently, the **Dialog** editor doesn't automatically add code to your project when you drag and drop the following common controls or rich edit controls onto a dialog box. Nor does Visual Studio provide an error or warning when this problem occurs. To fix, add the code for the control manually.

||||
|-|-|-|
|Slider Control|Tree Control|Date Time Picker|
|Spin Control|Tab Control|Month Calendar|
|Progress Control|Animation Control|IP Address Control|
|Hot Key|Rich Edit Control|Extended Combo Box|
|List Control|Rich Edit 2.0 Control|Custom Control|

### Fix for common controls

To use common controls on a dialog box, you need to call [InitCommonControlsEx](/windows/desktop/api/commctrl/nf-commctrl-initcommoncontrolsex) or `AFXInitCommonControls` before you create the dialog box.

### Fix for RichEdit controls

You must call `LoadLibrary` for rich edit controls. For more information, see [About Rich Edit Controls](/windows/desktop/Controls/about-rich-edit-controls) in the Windows SDK and [Overview of the Rich Edit Control](../mfc/overview-of-the-rich-edit-control.md).

### Requirements

Win32

## Using the RichEdit 1.0 Control with MFC

To use a RichEdit control, you must first call [AfxInitRichEdit2](../mfc/reference/application-information-and-management.md#afxinitrichedit2) to load the RichEdit 2.0 Control (RICHED20.DLL), or call [AfxInitRichEdit](../mfc/reference/application-information-and-management.md#afxinitrichedit) to load the older RichEdit 1.0 Control (RICHED32.DLL).

You may use the current [CRichEditCtrl](../mfc/reference/cricheditctrl-class.md) class with the older RichEdit 1.0 control, but `CRichEditCtrl` is only designed to support the RichEdit 2.0 control. Because RichEdit 1.0 and RichEdit 2.0 are similar, most methods will work. However, note there are some differences between the 1.0 and 2.0 controls, so some methods might work incorrectly or not work at all.

### Requirements

MFC

## See also

- [Dialog Editor](../windows/dialog-editor.md)
