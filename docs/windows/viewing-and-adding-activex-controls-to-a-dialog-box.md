---
title: "Viewing and Adding ActiveX Controls to a Dialog Box (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc.controls.activex", "vc.editors.dialog.insertActiveXControls"]
helpviewer_keywords: ["dialog boxes [C++], adding ActiveX controls", "ActiveX controls [C++], adding to dialog boxes", "Insert ActiveX Control dialog box [C++]", "controls [C++], editing properties", "ActiveX controls [C++], properties"]
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
---
# Viewing and Adding ActiveX Controls to a Dialog Box (C++)

Visual Studio enables you to insert ActiveX controls into your dialog box.

The **Insert ActiveX Control** dialog box enables you to insert ActiveX controls into your dialog box while using the [Dialog editor](../windows/dialog-editor.md). This dialog contains the following properties:

|Property|Description|
|---|---|
|**ActiveX Control**|Displays a list of Active X controls. Inserting a control from this dialog box does not generate a wrapper class. If you need a wrapper class, use [Class View](/visualstudio/ide/viewing-the-structure-of-code) to create one (for more information, see [Adding a Class](../ide/adding-a-class-visual-cpp.md)). If an Active X control does not appear in this dialog box, try installing the control according to the vendor's instructions.|
|**Path**|Displays the file in which the ActiveX control is found.|

You can place controls in the **Toolbox** window for easy access. For more information, see [Toolbox](/visualstudio/ide/reference/).

For information on adding resources to managed projects, see [Resources in Desktop Apps](/dotnet/framework/resources/index) in the *.NET Framework Developer's Guide*. For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resource strings to properties, see [Creating Resource Files for Desktop Apps](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). For information on globalization and localization of resources in managed apps, see [Globalizing and Localizing .NET Framework Applications](/dotnet/standard/globalization-localization/index).

## To see the ActiveX controls you have available

1. Open a dialog box in the Dialog editor.

1. Right-click anywhere in the body of the dialog box.

1. On the shortcut menu, select **Insert ActiveX Control**.

   The **Insert ActiveX Control** dialog box appears, showing all the ActiveX controls on your system. At the bottom of the dialog box, the path to the ActiveX Control file appears.

## To add an ActiveX control to a dialog box

1. In the **Insert ActiveX Control** dialog box, select the control you want to add to your dialog box and select **OK**.

   The control appears in the dialog box, where you can edit it or create handlers for it just as you would any other control.

   > [!NOTE]
   > You can add ActiveX controls to the [Toolbox window](/visualstudio/ide/reference/toolbox).

   > [!CAUTION]
   > It may not be legal to distribute all of the ActiveX controls on your system. Please refer to the license agreement for the software that installed the controls or contact the software company.

   You can place controls in the **Toolbox** window for easy access. For more information, see [Toolbox](/visualstudio/ide/reference/toolbox).

## To edit properties for an ActiveX control

ActiveX controls supplied by independent vendors may come equipped with their own properties and characteristics. Properties for ActiveX controls are displayed in the **Properties** window. In addition, any property pages created by the writers of the ActiveX control are displayed in the **Properties Pages** dialog box (to view the **Property Page** for a specific ActiveX control, click the **Property Page** button in the [Properties Window](/visualstudio/ide/reference/properties-window)).

Various tabs are displayed in the property page for an ActiveX control, depending on the property sheets that come as part of the ActiveX control.

> [!NOTE]
> The following procedure applies to using the property page to edit ActiveX controls. You can also browse and edit ActiveX properties in the new **Properties** window.

1. Select the **ActiveX** control.

1. On the **View** menu, select **Property Page** and view the properties.

1. Make changes as needed in the property page.

## Requirements

Win32

## See Also

[Controls in Dialog Boxes](../windows/controls-in-dialog-boxes.md)<br/>
[MFC ActiveX Controls](../mfc/mfc-activex-controls.md)<br/>
[ActiveX Control Containers](../mfc/activex-control-containers.md)<br/>
[Viewing and Adding ActiveX Controls to a Dialog Box](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md)<br/>
[Dialog Editor Tab, Toolbox](../windows/dialog-editor-tab-toolbox.md)<br/>
[Resource Files](../windows/resource-files-visual-studio.md)<br/>
