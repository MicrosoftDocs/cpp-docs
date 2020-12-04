---
description: "Learn more about: Implement an interface"
title: "Implement an interface"
ms.date: "11/12/2018"
f1_keywords: ["vc.codewiz.impl.interface.overview"]
helpviewer_keywords: ["interfaces, implementing", "implement interface wizard [C++]"]
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
---
# Implement an interface

To implement an interface, you must have created a project as an ATL COM application or as an MFC application that contains ATL support. You can use the [ATL project wizard](../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

Once you create the project, to implement an interface, you must first add an ATL object. See [Add objects and controls to an ATL project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for a list of wizards that add objects to your ATL project.

> [!NOTE]
> The wizard doesn't support ATL dialog boxes, XML Web services using ATL, performance objects, or performance counters.

If you [add an ATL control](../atl/reference/adding-an-atl-control.md), you can specify whether to implement default interfaces. The default interfaces are listed on the [Interfaces](../atl/reference/interfaces-atl-control-wizard.md) page of that wizard and defined in atlcom.h.

Once you've added the object or control, you can implement other interfaces, located in any available type library, using the Implement Interface Wizard.

If you're adding a new interface, you must add it manually to the project's .idl file. For more information, see [Add a new interface in an ATL project](../atl/reference/adding-a-new-interface-in-an-atl-project.md).

**To implement an interface:**

1. In Class View, right-click the class name for your ATL object.

1. Choose **Add** from the shortcut menu, and then choose **Implement Interface** to display the [implement interface wizard](#implement-interface-wizard).

1. Select the interfaces to implement from the appropriate type libraries and select **Finish**.

1. In Class View, expand the object's Bases and Interfaces node to see the interface you've implemented. Then expand the interface's node to see its available properties, methods, and events.

   > [!NOTE]
   > You can also use the [object browser](/visualstudio/ide/viewing-the-structure-of-code) to examine the members of the interface.

## In this section

- [Implement interface wizard](#implement-interface-wizard)

## Implement interface wizard

This wizard implements an interface for a COM object. Implementations of many interfaces are included in the COM libraries available with Visual Studio and Windows. An interface implementation is associated with an object when an instance of that object is created. It also provides the services that the object offers.

For a discussion of interfaces and implementations, see [Interfaces and interface implementations](/windows/win32/com/interfaces-and-interface-implementations) in the Windows SDK.

- **Implement interface from**

  Specifies the location of the type library, from which the interface is created.

  |Option|Description|
  |------------|-----------------|
  |**Project**|The type library is part of the project.|
  |**Registry**|The type library is registered in the system. Registered type libraries are listed in **Available type libraries**.|
  |**File**|The type library isn't necessarily registered in the system but is held in a file. Provide the file location in **Location**.|

- **Available type libraries**

  Displays the available type libraries holding the interface definitions that you can implement. If you choose **File** under **Implement interface from**, this box is unavailable for change.

- **Location**

  Displays the location of the type library currently selected in the **Available type libraries** list. If you selected **File** under **Implement interface from**, select the ellipsis button to locate a file holding the type library to use.

- **Interfaces**

  Displays the interfaces whose definitions are held in the type library currently selected in the **Available type libraries** box.

  > [!NOTE]
  > Interfaces that have the same name as those already implemented by the selected object aren't displayed in the **Interfaces** box.

  |Transfer button|Description|
  |---------------------|-----------------|
  |**>**|Adds to the **Implement interfaces** list the interface name currently selected in the **Interfaces** list.|
  |**>>**|Adds to the **Implement interfaces** list all interface names available in the **Interfaces** list.|
  |**\<**|Removes the interface name currently selected in the **Implement interfaces** list.|
  |**\<\<**|Removes all interface names currently listed in the **Implement interfaces** list.|

- **Implement Interfaces**

  Displays the names of the interfaces that you've selected to implement on your object.

  > [!NOTE]
  > If you include more than one interface that derives from `IDispatch`, or if you try to implement an interface that's derived from another interface already on your class, then you must disambiguate the COM_MAP entries. For more information, see [COM_INTERFACE_ENTRY2](../atl/reference/com-interface-entry-macros.md#com_interface_entry2).
