---
description: "Learn more about: Implement a connection point"
title: "Implement a connection point"
ms.date: "05/14/2019"
helpviewer_keywords: ["connection points [C++], implementing", "implement connection point wizard [C++]"]
ms.assetid: 5b37e4f9-73c9-4bef-b26d-365bc0662260
---
# Implement a connection point

To implement a connection point using the Implement Connection Point Wizard, you must have created a project as an ATL COM application or as an MFC application that contains ATL support. You can use the [ATL project wizard](../atl/reference/atl-project-wizard.md) to create an ATL application, or [add an ATL object to your MFC application](../mfc/reference/adding-atl-support-to-your-mfc-project.md) to implement ATL support for an MFC application.

> [!NOTE]
> For information about implementing connection points for an MFC project, see [Connection points](../mfc/connection-points.md).

Once you create the project, to implement a connection point, you must first add an ATL object. See [Adding objects and controls to an ATL project](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) for a list of wizards that add objects to your ATL project.

> [!NOTE]
> The wizard doesn't support ATL dialogs, XML Web services created with ATL Server, performance objects, or performance counters.

A connectable object (that is, a source) can show a connection point for each of its outgoing interfaces. Each outgoing interface can be implemented by a client on an object (that is, a sink). For more information, see [ATL connection points](../atl/atl-connection-points.md).

**To implement a connection point:**

1. In Class View, right-click the class name for your ATL object.

1. Choose **Add** from the shortcut menu, and then choose **Add Connection Point** to display the [implement connection point wizard](#implement-connection-point-wizard).

1. Select the connection point interfaces to implement from the appropriate type libraries and select **Finish**.

1. In Class View, examine the proxy classes created for each connection point. The classes appear as CProxy*InterfaceName*\<T> and are derived from [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).

1. Double-click the connection point class to display the definition of the connection point's class.

   - If you implement a connection point for your own project's interface, the following definition appears:

     ```cpp
     template< class T >
     class CProxyInterfaceName :
     public IConnectionPointImpl< T, &IID_InterfaceName >
     {
     public:
     };
     ```

   - If you implement a local interface, methods and properties appear in the class body.

   - If you implement a connection point for another interface, the definition includes the interface's methods, each preceded by `Fire_`.

## In this section

- [Implement connection point wizard](#implement-connection-point-wizard)

## Implement connection point wizard

This wizard implements a connection point for a COM object. A connectable object (that is, a source) can show a connection point for its own interfaces or for any outgoing interface. MSVC and Windows both provide type libraries that have outgoing interfaces. Each outgoing interface can be implemented by a client on an object (that is, a sink).

For more information, see [ATL connection points](../atl/atl-connection-points.md).

- **Available type libraries**

  Displays the available type libraries holding the interface definitions for which you can implement connection points. Select the ellipsis button to locate a file that has the type library to use.

- **Location**

  Displays the location of the type library currently selected in the **Available type libraries** list.

- **Interfaces**

  Displays the interfaces whose definitions are held in the type library currently selected in the **Available type libraries** box.

  |Transfer button|Description|
  |---------------------|-----------------|
  |**>**|Adds to the **Implement connection points** list the interface name currently selected in the **Interfaces** list.|
  |**>>**|Adds to the **Implement connection points** list all interface names available in the **Interfaces** list.|
  |**\<**|Removes the interface name currently selected in the **Implement connection points** list.|
  |**\<\<**|Removes all interface names currently listed in the **Implement connection points** list.|

- **Implement connection points**

  Displays the names of the interfaces for which you implement connection points when you select **Finish**.
