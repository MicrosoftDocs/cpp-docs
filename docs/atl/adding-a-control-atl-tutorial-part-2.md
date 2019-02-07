---
title: "Adding a Control (ATL Tutorial, Part 2)"
ms.custom: "get-started-article"
ms.date: "09/26/2018"
ms.assetid: c9575a75-1064-41f1-9697-7aada560c669
---
# Adding a Control (ATL Tutorial, Part 2)

In this step, you will add a control to your project, build it, and test it on a Web page.

## Procedures

### To add an object to an ATL project

1. In **Solution Explorer**, right-click the `Polygon` project.

1. Point to **Add** on the shortcut menu, and click **New Item** in the submenu.

    The **Add New Item** dialog box appears. The different object categories are listed in the tree structure on the left.

1. Click the **ATL** folder.

1. From the list of templates on the right, select **ATL Control**. Click **Add**. The **ATL Control** wizard will open, and you can configure the control.

1. Type `PolyCtl` as the short name and note that the other fields are automatically completed. Do not click **Finish** yet, because you have to make some changes.

The **ATL Control** wizard's **Names** page contains the following fields:

|Field|Contents|
|-----------|--------------|
|**Short name**|The name you entered for the control.|
|**Class**|The C++ class name created to implement the control.|
|**.h file**|The file created to contain the definition of the C++ class.|
|**.cpp file**|The file created to contain the implementation of the C++ class.|
|**CoClass**|The name of the component class for this control.|
|**Interface**|The name of the interface on which the control will implement its custom methods and properties.|
|**Type**|A description for the control.|
|**ProgID**|The readable name that can be used to look up the CLSID of the control.|

You have to make several additional settings in the **ATL Control** wizard.

### To enable support for rich error information and connection points

1. Click **Options** to open the **Options** page.

1. Select the **Connection points** check box. This will create support for an outgoing interface in the IDL file.

You can also add interfaces to extend the control's functionality.

### To extend the control's functionality

1. Click **Interfaces** to open the **Interfaces** page.

1. Select `IProvideClassInfo2` and click the **Up** arrow to move it to the **Supported** list.

1. Select `ISpecifyPropertyPages` and click the **Up** arrow to move it to the **Supported** list.

You can also make the control insertable, which means it can be embedded into applications that support embedded objects, such as Excel or Word.

### To make the control insertable

1. Click **Appearance** to open the **Appearance** page.

1. Select the **Insertable** check box.

The polygon displayed by the object will have a solid fill color, so you have to add a `Fill Color` stock property.

### To add a Fill Color stock property and create the control

1. Click **Stock Properties** to open the **Stock Properties** page.

1. Under **Not supported**, scroll down the list of possible stock properties. Select `Fill Color` and click the **Up** arrow to move it to the **Supported** list.

1. This completes the options for the control. Click **Finish**.

As the wizard created the control, several code changes and file additions occurred. The following files were created:

|File|Description|
|----------|-----------------|
|PolyCtl.h|Contains most of the implementation of the C++ class `CPolyCtl`.|
|PolyCtl.cpp|Contains the remaining parts of `CPolyCtl`.|
|PolyCtl.rgs|A text file that contains the registry script used to register the control.|
|PolyCtl.htm|A Web page containing a reference to the newly created control.|

The wizard also performed the following code changes:

- Added an `#include` statement to the stdafx.h and stdafx.cpp files to include the ATL files necessary for supporting controls.

- Changed Polygon.idl to include details of the new control.

- Added the new control to the object map in Polygon.cpp.

Now you can build the control to see it in action.

## Building and Testing the Control

### To build and test the control

1. On the **Build** menu, click **Build Polygon**.

    Once the control finishes building, right-click PolyCtl.htm in **Solution Explorer** and select **View in Browser**. The HTML Web page containing the control will be displayed. You should see a page with the title “ATL 8.0 test page for object PolyCtl” and the text PolyCtl. This is your control.

> [!NOTE]
> If the control isn't visible, know that some browsers require settings adjustments to run ActiveX controls. Please refer to the browser's documentation on how to enable ActiveX controls.

> [!NOTE]
> When completing this tutorial, if you receive an error message where the DLL file cannot be created, close the PolyCtl.htm file and the ActiveX Control Test container and build the solution again. If you still cannot create the DLL, reboot the computer or log off (if you are using Terminal Services).

Next, you will add a custom property to the control.

[Back to Step 1](../atl/creating-the-project-atl-tutorial-part-1.md) &#124; [On to Step 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md)

## See also

- [Tutorial](../atl/active-template-library-atl-tutorial.md)
