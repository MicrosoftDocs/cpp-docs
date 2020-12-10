---
description: "Learn more about: Add a class from an ActiveX control"
title: "Add a class from an ActiveX control"
ms.date: "11/08/2018"
f1_keywords: ["vc.codewiz.class.axcontrol"]
helpviewer_keywords: ["ActiveX controls [C++], adding classes", "classes [C++], creating", "ActiveX Control Wizard", "add class from ActiveX control wizard [C++]"]
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
---
# Add a class from an ActiveX control

Use this wizard to create an MFC class from an interface in an available ActiveX control. You can add an MFC class to an [MFC application](../mfc/reference/creating-an-mfc-application.md), an [MFC DLL](../mfc/reference/creating-an-mfc-dll-project.md), or an [MFC ActiveX control](../mfc/reference/creating-an-mfc-activex-control.md).

> [!WARNING]
> In Visual Studio 2017 version 15.9, Microsoft deprecated this code wizard, and we will remove it in a future version of Visual Studio. This wizard is rarely used. General support for ATL and MFC isn't impacted by the removal of this wizard. If you would like to share your feedback about this deprecation, complete [this survey](https://www.surveymonkey.com/r/QDWKKCN). Your feedback matters to us.
<!-- Blank comment here to separate the warning and note. -->
> [!NOTE]
> You don't need to create your MFC project with Automation enabled to add a class from an ActiveX control.

An ActiveX control is a reusable software component based on the Component Object Model (COM) that supports a wide variety of OLE functionality. It can be customized to fit many software needs. You may use ActiveX controls in ordinary ActiveX control containers or on the Internet in World Wide Web pages.

**To add an MFC class from an ActiveX control:**

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ActiveX control class.

1. From the shortcut menu, choose **Add**, and then choose **Add Class**.

1. In the [Add Class](./adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the **Templates** pane, choose **MFC Class from ActiveX Control**, and then choose **Open** to display the [add class from ActiveX control wizard](#add-class-from-activex-control-wizard).

In the wizard, you can add more than one interface in an ActiveX control. You can also create classes from more than one ActiveX control in a single wizard session.

You can add classes from ActiveX controls registered in your system, or you can add classes from ActiveX controls located in type library files (.tlb, .olb, .dll, .ocx, or .exe) without first registering them in your system. For more information about registering ActiveX controls, see [Registering OLE controls](../mfc/reference/registering-ole-controls.md).

The wizard creates an MFC class, derived from [CWnd](../mfc/reference/cwnd-class.md) or from [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), for each interface you add from the selected ActiveX control.

## In this section

- [Add class from ActiveX control wizard](#add-class-from-activex-control-wizard)

## Add class from ActiveX control wizard

Use this wizard to add an MFC class from an available ActiveX control. The wizard creates a class for each interface you add from the selected ActiveX control.

- **Add Class From**

  Specifies the location of the type library from which the class is created.

  |Option|Description|
  |------------|-----------------|
  |**Registry**|The type library is registered in the system. Registered type libraries are listed in **Available ActiveX controls**.|
  |**File**|The type library isn't necessarily registered in the system but is stored in a file. Provide the file location in **Location**.|

- **Available ActiveX controls**

  Specifies the ActiveX controls currently registered in the system. Select an ActiveX control from this list to display its interfaces in the **Interfaces** list. See [MFC ActiveX controls: Distributing ActiveX controls](../mfc/mfc-activex-controls-distributing-activex-controls.md) for more information about registering ActiveX controls.

  If you select **File** under **Add Class From**, this box is unavailable for change.

- **Location**

  Specifies the location of the ActiveX control. If you select **File** under **Add Class From**, you can provide the location of the file that has the type library. To browse to the location of the file, select the ellipsis button.

  If you select **Registry** under **Add Class From**, this box is unavailable for change.

- **Interfaces**

  Specifies the interfaces in the ActiveX control. The wizard uses the interfaces from the current selection in **Available ActiveX controls**, or it uses the interfaces from the type library file specified in **Location**.

  |Transfer button|Description|
  |---------------------|-----------------|
  |**>**|Adds the interface currently selected in the **Interfaces** list. Unavailable if no interface is selected.|
  |**>>**|Adds all the interfaces in the ActiveX control. The wizard uses the interfaces from the current selection in **Available ActiveX controls**, or it uses the interfaces from the type library file specified in **Location**.|
  |**\<**|Removes the class currently selected in the **Generated classes** list. Unavailable if no class is currently selected in the **Generated classes** list.|
  |**\<\<**|Removes all the classes in the **Generated classes** list. Unavailable if the **Generated classes** list is empty.|

- **Generated classes**

  Specifies the class names to be generated from the interfaces added using the **>** or **>>** button. You can select this box to select a class, and then use the up or down keys to scroll through the list. When you select **Finish**, you may view each generated class name in the **Class** box and each generated file name in the **.h file** box. You can select only one class at a time in this box.

  You can remove a class by selecting it in this list and selecting **<**. You don't need to select a class in the **Generated classes** box to remove all classes. By selecting **<<**, you remove all classes in the **Generated classes** box.

- **Class**

   Specifies the name of the class selected in the **Generated classes** box that the wizard adds when you select **Finish**. You can edit the name in the **Class** box.

- **.h file**

  Sets the name of the header file for the new object's class. By default, this name is based on the name you provide in **Generated classes**. Select the ellipsis button to save the file name to the location of your choice, or to append the class declaration to an existing file. If you choose an existing file, the wizard won't save it to the selected location until you select **Finish** in the wizard.

  The wizard doesn't overwrite a file. If you select the name of an existing file and then select **Finish**, the wizard prompts you to indicate whether to append the class declaration to the file contents. Select **Yes** to append the file; select **No** to return to the wizard and specify another file name.

- **.cpp file**

  Sets the name of the implementation file for the new object's class. By default, this name is based on the name you provide in **Generated classes**. Select the ellipsis button to save the file name to the location of your choice. The file isn't saved to the selected location until you select **Finish** in the wizard.

  The wizard doesn't overwrite a file. If you select the name of an existing file and then select **Finish**, the wizard prompts you to indicate whether to append the class implementation to the file contents. Select **Yes** to append the file; select **No** to return to the wizard and specify another file name.
