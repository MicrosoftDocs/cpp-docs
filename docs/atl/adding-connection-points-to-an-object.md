---
title: "Adding Connection Points to an Object"
description: "Learn more about: Adding Connection Points to an Object"
ms.date: 11/04/2016
helpviewer_keywords: ["connection points [C++], adding to ATL objects", "Implement Connection Point ATL wizard"]
ms.topic: how-to
---
# Adding Connection Points to an Object

[!INCLUDE[product-lifecycle-status](includes/lifecycle-note.md)]

The [ATL Tutorial](active-template-library-atl-tutorial.md) demonstrates how to create a control with support for connection points, how to add events, and then how to implement the connection point. ATL implements connection points with the [`IConnectionPointImpl`](reference/iconnectionpointimpl-class.md) class.

To implement a connection point, you have two choices:

- Implement your own outgoing event source, by adding a connection point to the control or object.
- Reuse a connection point interface defined in another type library.

In either case, the **Implement Connection Point Wizard** uses a type library to do its work.

### Add a connection point to a control or object

1. Define a dispinterface in the library block of the `.idl` file. If you enabled support for connection points when you created the control with the **ATL Control Wizard**, the dispinterface will already be created. If you did not enable support for connection points when you created the control, you must manually add a dispinterface to the `.idl` file. The following is an example of a dispinterface. Outgoing interfaces are not required to be dispatch interfaces but many scripting languages such as VBScript and JScript require this, so this example uses two dispinterfaces:

   [!code-cpp[NVC_ATL_Windowing#81](codesnippet/cpp/adding-connection-points-to-an-object_1.idl)]

   Use either the `uuidgen.exe` or `guidgen.exe` utility to generate a GUID.

2. Add the dispinterface as the `[default,source]` interface in the coclass for the object in the project's `.idl` file. Again, if you enabled support for connection points when you created the control, the ATL Control Wizard will create the `[default,source]` entry. To manually add this entry, add the line in bold:

   [!code-cpp[NVC_ATL_Windowing#82](codesnippet/cpp/adding-connection-points-to-an-object_2.idl)]

   See the `.idl` file in the [Circ](../overview/visual-cpp-samples.md) ATL sample for an example.

3. Use **Class View** to add methods and properties to the event interface. Right-click the class in **Class View**, point to **Add** on the shortcut menu, and select **Add Connection Point**.

4. In the **Source Interfaces** list box of the **Implement Connection Point Wizard**, select **Project's interfaces**. If you choose an interface for your control and select **OK**, you:

   - Generate a header file with an event proxy class that implements the code that will make the outgoing calls for the event.
   - Add an entry to the connection point map.

   You also see a list of all of the type libraries on your computer. Only use one of these other type libraries to define your connection point if you want to implement the exact same outgoing interface found in another type library.

### Reuse a connection point interface defined in another type library

1. In **Class View**, right-click a class that implements a `BEGIN_COM_MAP` macro, point at **Add** on the shortcut menu, and select **Add Connection Point**.

2. In the **Implement Connection Point Wizard**, select a type library and an interface in the type library and select **Add**.

3. Edit the `.idl` file to either:

   - Copy the dispinterface from the `.idl` file for the object whose event-source is being used.
   - Use the **importlib** instruction on that type library.

## See also

[Connection Point](atl-connection-points.md)
