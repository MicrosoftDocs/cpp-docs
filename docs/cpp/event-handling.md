---
title: "Event handling"
description: "Learn how Microsoft C++ extensions support both COM and native event handling."
ms.date: 11/20/2020
helpviewer_keywords: ["event handling [C++]"]
---
# Event handling

Event handling is primarily supported for COM classes (C++ classes that implement COM objects, typically using ATL classes or the [coclass](../windows/attributes/coclass.md) attribute). For more information, see [Event handling in COM](../cpp/event-handling-in-com.md).

Event handling is also supported for native C++ classes (C++ classes that don't implement COM objects). Native C++ event handling support is deprecated and will be removed in a future release. For more information, see [Event handling in native C++](../cpp/event-handling-in-native-cpp.md).

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

Event handling supports both single- and multithreaded usage. It protects data from simultaneous multithread access. You can derive subclasses from event source or receiver classes. These subclasses support extended event sourcing and receiving.

The Microsoft C++ compiler includes attributes and keywords for declaring events and event handlers. The event attributes and keywords can be used in CLR programs and in native C++ programs.

| Article | Description |
|--|--|
| [`event_source`](../windows/attributes/event-source.md) | Creates an event source. |
| [`event_receiver`](../windows/attributes/event-receiver.md) | Creates an event receiver (sink). |
| [`__event`](../cpp/event.md) | Declares an event. |
| [`__raise`](../cpp/raise.md) | Emphasizes the call site of an event. |
| [`__hook`](../cpp/hook.md) | Associates a handler method with an event. |
| [`__unhook`](../cpp/unhook.md) | Disassociates a handler method from an event. |

## See also

[C++ language reference](../cpp/cpp-language-reference.md)\
[Keywords](../cpp/keywords-cpp.md)
