---
description: "Learn more about: Add a class from an ActiveX control"
title: "Add a class from an ActiveX control"
ms.date: 04/28/2023
f1_keywords: ["vc.codewiz.class.axcontrol"]
helpviewer_keywords: ["ActiveX controls [C++], adding classes", "classes [C++], creating", "ActiveX Control Wizard", "add class from ActiveX control wizard [C++]"]
ms.custom: devdivchpfy22
---
# Add a class from an ActiveX control

Use this wizard to create an MFC class from an interface in an available ActiveX control. For this wizard to be available, you must have Visual Studio 2019 or later, and be in one of the following project types: [MFC application](../mfc/reference/creating-an-mfc-application.md), [MFC DLL](../mfc/reference/creating-an-mfc-dll-project.md), or [MFC ActiveX control](../mfc/reference/creating-an-mfc-activex-control.md).

> [!NOTE]
> You don't need to create your MFC project with Automation enabled to add a class from an ActiveX control.

An ActiveX control is a reusable software component based on the Component Object Model (COM) that supports a wide variety of OLE functionality. You may use ActiveX controls in ordinary ActiveX control containers.

**To add an MFC class from an ActiveX control:**

1. In either **Solution Explorer** or [Class View](/visualstudio/ide/viewing-the-structure-of-code), right-click the name of the project to which you want to add the ActiveX control class.

1. From the shortcut menu, select **Add**, and then select **New Item**.

1. In the **Add New Item** dialog box, in the **Templates** pane, choose **MFC Class from ActiveX Control**, and then choose **Add** to display the [add class from ActiveX control wizard](#add-class-from-activex-control-wizard).

In the wizard, you can add more than one interface in an ActiveX control. You can also create classes from more than one ActiveX control in a single wizard session.

You can add classes from ActiveX controls registered in your system, or you can add classes from ActiveX controls located in type library files (`.tlb`, `.olb`, `.dll`, `.ocx`, or `.exe`) without first registering them in your system. For more information about registering ActiveX controls, see [Registering OLE controls](../mfc/reference/registering-ole-controls.md).

The wizard creates an MFC class, derived from [CWnd](../mfc/reference/cwnd-class.md) or from [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), for each interface you add from the selected ActiveX control.

## Add class from ActiveX control wizard

Use this wizard to add an MFC class from an available ActiveX control. The wizard creates a class for each interface you add from the selected ActiveX control.

:::image type="content" source="../ide/media/add-mfc-class-from-activex-control.png" alt-text="Add class from ActiveX control wizard":::

- **Implement interface from**

  Specifies the location of the type library from which the class is created.

  |Option|Description|
  |------------|-----------------|
  |**Registry**|The type library is registered in the system. Registered type libraries are listed in **Available type libraries**.|
  |**File**|The type library isn't necessarily registered in the system but is stored in a file. Provide the file location in **Location**.|

- **Available type libraries**

  Specifies the ActiveX controls currently registered in the system. Select an ActiveX control from this list to display its interfaces in the **Interfaces** list. For more information about registering ActiveX controls, see [MFC ActiveX controls: Distributing ActiveX controls](../mfc/mfc-activex-controls-distributing-activex-controls.md).

  If you select **File** under **Implement interface from**, this box is unavailable for change.

- **Location**

  Specifies the location of the ActiveX control. If you select **File** under **Implement interface from**, you can provide the location of the file that has the type library. To browse to the location of the file, select the ellipsis button.

  If you select **Registry** under **Implement interface from**, this box is unavailable for change.

- **Available Interfaces**

  Specifies the interfaces in the ActiveX control. The wizard uses the interfaces from the current selection in **Available type libraries**, or it uses the interfaces from the type library file specified in **Location**.

  |Transfer button|Description|
  |---------------------|-----------------|
  |**>**|Adds the interface currently selected in the **Available Interfaces** list. Unavailable if no interface is selected.|
  |**>>**|Adds all the interfaces in the ActiveX control. The wizard uses the interfaces from the current selection in **Available type libraries**, or it uses the interfaces from the type library file specified in **Location**.|
  |**\<**|Removes the class currently selected in the **Implement interfaces** list. Unavailable if no class is currently selected in the **Implement interfaces** list.|
  |**\<\<**|Removes all the classes in the **Implement interfaces** list. Unavailable if the **Implement interfaces** list is empty.|

- **Implement interfaces**

  Specifies the class names to be generated from the interfaces added using the **>** or **>>** button. You can select this box to select a class, and then use the up or down arrow keys to scroll through the list.
