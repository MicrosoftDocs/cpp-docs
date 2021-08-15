---
description: "Learn more about: ATL Control Wizard"
title: "ATL Control Wizard"
ms.date: "11/04/2016"
f1_keywords: ["vc.codewiz.class.atl.control.overview"]
helpviewer_keywords: ["ATL projects, adding controls", "controls [ATL], adding to projects", "ATL Control Wizard"]
ms.assetid: 991f8e72-ffbc-4382-a4ce-e255acfba5b6
---
# ATL Control Wizard

Inserts into an ATL project (or an MFC project with ATL support) an ATL control. You can use this wizard to insert one of three kinds of controls:

- Standard control

- Composite control

- DHTML control

Additionally, you can specify a minimal control, removing the interfaces from the [Interfaces](../../atl/reference/interfaces-atl-control-wizard.md) list, which are provided as defaults for controls to open in most containers. You can set the interfaces you want supported for the control in the **Interfaces** page of the wizard.

## Remarks

The registration script produced by this wizard will register its COM components under HKEY_CURRENT_USER instead of HKEY_LOCAL_MACHINE. To modify this behavior, set the **Register component for all users** option of the ATL Wizard.

## Names

Specify the names for the object, interface, and classes to be added to your project. Except for **Short name**, all other boxes can be changed independently. If you change the text for **Short name**, the change is reflected in the names of all other boxes in this page. If you change the **Coclass** name in the COM section, the change is reflected in the **Type** box, but the **Interface** name and **ProgID** do not change. This naming behavior is designed to make all the names easily identifiable for you as you develop your control.

> [!NOTE]
> **Coclass** is editable on only nonattributed controls. If your project attributed, you cannot edit **Coclass**.

### C++

Provides information for the C++ class created to implement the object.

- **Short name**

   Sets the abbreviated name for the object. The name that you provide determines the class and **Coclass** names, the file (.CPP and .H) names, the interface name, and the **Type** names, unless you change those fields individually.

- **Class**

   Sets the name of the class that implements the object. This name is based on the name that you provide in **Short name**, preceded by 'C', the typical prefix for a class name.

- **.h file**

   Sets the name of the header file for the new object's class. By default, this name is based on the name that you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you select an existing file, the wizard will not save it to the selected location until you click **Finish**.

   The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class declaration should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.

- **.cpp file**

   Sets the name of the implementation file for the new object's class. By default, this name is based on the name that you provide in **Short name**. Click the ellipsis button to save the file name to the location of your choice. The file is not saved to the selected location until you click **Finish** in the wizard.

   The wizard does not overwrite a file. If you select the name of an existing file, when you click **Finish**, the wizard prompts you to indicate whether the class implementation should be appended to the contents of the file. Click **Yes** to append the file; click **No** to return to the wizard and specify another file name.

- **Attributed**

   Indicates whether the object uses attributes. If you are adding an object to an attributed ATL project, this option is selected and not available to change. That is, you can add only attributed objects to a project created with attribute support.

   You can add an attributed object only to an ATL project that uses attributes. If you select this option for an ATL project that does not have attribute support, the wizard prompts you to specify whether you want to add attribute support to the project.

   By default, any objects you add after you set this option are designated as attributed (the check box is selected). You can clear this box to add an object that does not use attributes.

   See [Application Settings, ATL Project Wizard](../../atl/reference/application-settings-atl-project-wizard.md) and [Basic mechanics of attributes](../../windows/attributes/cpp-attributes-com-net.md#basic-mechanics-of-attributes) for more information.

### COM

Provides information about the COM functionality for the object.

- **Coclass**

   Sets the name of the component class that contains a list of interfaces supported by the object.

   > [!NOTE]
   > If you create your project using attributes, or if you indicate on this wizard page that the control uses attributes, you cannot change this option because ATL does not include the **coclass** attribute.

- **Interface**

   Sets the name of the interface for the object. By default an interface name is prepended with "I".

- **Type**

   Sets the object description that will appear in the registry

- **ProgID**

   Sets the name that containers can use instead of the CLSID of the object. This field is not automatically populated. If you do not manually populate this field, the control may not be available to other tools. For example, ActiveX controls that are generated without a `ProgID` are not available in the **Insert ActiveX Control** dialog box. For more information about the dialog box, see [Insert ActiveX controls](../../windows/adding-editing-or-deleting-controls.md#insert-activex-controls).

## See also

[ATL Control](../../atl/reference/adding-an-atl-control.md)<br/>
[Adding Functionality to the Composite Control](../../atl/adding-functionality-to-the-composite-control.md)<br/>
[Fundamentals of ATL COM Objects](../../atl/fundamentals-of-atl-com-objects.md)
