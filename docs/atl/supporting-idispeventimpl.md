---
description: "Learn more about: Supporting IDispEventImpl"
title: "Supporting IDispEventImpl"
ms.date: "11/04/2016"
helpviewer_keywords: ["event sink maps, declaring", "IDispEventImpl class, advising and unadvising", "SINK_ENTRY macro", "type libraries, importing", "ATL, IDispEventImpl support in COM objects", "BEGIN_SINK_MAP macro", "IDispEventImpl class, declaring"]
ms.assetid: b957f930-6a5b-4598-8e4d-8027759957e7
---
# Supporting IDispEventImpl

The template class [IDispEventImpl](../atl/reference/idispeventimpl-class.md) can be used to provide support for connection point sinks in your ATL class. A connection point sink allows your class to handle events fired from external COM objects. These connection point sinks are mapped with an event sink map, provided by your class.

To properly implement a connection point sink for your class, the following steps must be completed:

- Import the type libraries for each external object

- Declare the `IDispEventImpl` interfaces

- Declare an event sink map

- Advise and unadvise the connection points

The steps involved in implementing a connection point sink are all accomplished by modifying only the header file (.h) of your class.

## Importing the Type Libraries

For each external object whose events you want to handle, you must import the type library. This step defines the events that can be handled and provides information that is used when declaring the event sink map. The [#import](../preprocessor/hash-import-directive-cpp.md) directive can be used to accomplish this. Add the necessary `#import` directive lines for each dispatch interface you will support to the header file (.h) of your class.

The following example imports the type library of an external COM server (`MSCAL.Calendar.7`):

[!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/cpp/supporting-idispeventimpl_1.h)]

> [!NOTE]
> You must have a separate `#import` statement for each external type library you will support.

## Declaring the IDispEventImpl Interfaces

Now that you have imported the type libraries of each dispatch interface, you need to declare separate `IDispEventImpl` interfaces for each external dispatch interface. Modify the declaration of your class by adding an `IDispEventImpl` interface declaration for each external object. For more information on the parameters, see [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

The following code declares two connection point sinks, for the `DCalendarEvents` interface, for the COM object implemented by class `CMyCompositCtrl2`:

[!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/cpp/supporting-idispeventimpl_2.h)]

## Declaring an Event Sink Map

In order for the event notifications to be handled by the proper function, your class must route each event to its correct handler. This is achieved by declaring an event sink map.

ATL provides several macros, [BEGIN_SINK_MAP](reference/composite-control-macros.md#begin_sink_map), [END_SINK_MAP](reference/composite-control-macros.md#end_sink_map), and [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex), that make this mapping easier. The standard format is as follows:

```cpp
BEGIN_SINK_MAP(comClass)
  SINK_ENTRY_EX(id, iid, dispid, func)
  . . . //additional external event entries
END_SINK_MAP()
```

The following example declares an event sink map with two event handlers:

[!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/cpp/supporting-idispeventimpl_3.h)]

The implementation is nearly complete. The last step concerns the advising and unadvising of the external interfaces.

## Advising and Unadvising the IDispEventImpl Interfaces

The final step is to implement a method that will advise (or unadvise) all connection points at the proper times. This advising must be done before communication between the external clients and your object can take place. Before your object becomes visible, each external dispatch interface supported by your object is queried for outgoing interfaces. A connection is established and a reference to the outgoing interface is used to handle events from the object. This procedure is referred to as "advising."

After your object is finished with the external interfaces, the outgoing interfaces should be notified that they are no longer used by your class. This process is referred to as "unadvising."

Because of the unique nature of COM objects, this procedure varies, in detail and execution, between implementations. These details are beyond the scope of this topic and are not addressed.

## See also

[Fundamentals of ATL COM Objects](../atl/fundamentals-of-atl-com-objects.md)
