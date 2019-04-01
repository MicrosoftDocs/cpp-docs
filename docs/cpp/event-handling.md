---
title: "Event Handling"
ms.date: "11/04/2016"
helpviewer_keywords: ["attributes [C++], event handling", "intrinsic functions [C++], event handling", "event handling [C++], Visual C++"]
ms.assetid: 82de3f9a-2d88-470c-9527-8a5b54c8ced4
---
# Event Handling

Event handling is primarily supported for COM classes (C++ classes that implement COM objects, typically using ATL classes or the [coclass](../windows/coclass.md) attribute). For more information, see [Event Handling in COM](../cpp/event-handling-in-com.md).

Event handling is also supported for native C++ classes (C++ classes that do not implement COM objects), however, that support is deprecated and will be removed in a future release.  For more information, see [Event Handling in Native C++](../cpp/event-handling-in-native-cpp.md).

Event handling supports single- and multithreaded usage and protects data from simultaneous multithread access. It also allows you to derive subclasses from event source or receiver classes and support extended event sourcing/receiving in the derived class.

Visual C++ includes attributes and keywords for declaring events and event handlers. The event attributes and keywords can be used in CLR programs and in native C++ programs.

|Topic|Description|
|-----------|-----------------|
|[event_source](../windows/attributes/event-source.md)|Creates an event source.|
|[event_receiver](../windows/attributes/event-receiver.md)|Creates an event receiver (sink).|
|[__event](../cpp/event.md)|Declares an event.|
|[__raise](../cpp/raise.md)|Emphasizes the call site of an event.|
|[__hook](../cpp/hook.md)|Associates a handler method with an event.|
|[__unhook](../cpp/unhook.md)|Dissociates a handler method from an event.|

## See also

[C++ Language Reference](../cpp/cpp-language-reference.md)<br/>
[Keywords](../cpp/keywords-cpp.md)