---
title: "__hook"
description: "Learn how to use the Microsoft C++ extension keyword `__hook` for native event handling."
ms.date: 11/20/2020
f1_keywords: ["__hook_cpp", "__hook"]
helpviewer_keywords: ["__hook keyword [C++]", "event handlers [C++], connecting events to"]
---
# `__hook` keyword

Associates a handler method with an event.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

```cpp
long __hook(
    &SourceClass::EventMethod,
    source,
    &ReceiverClass::HandlerMethod
    [, receiver = this]
);

long __hook(
    interface,
    source
);
```

### Parameters

*`&SourceClass::EventMethod`*\
A pointer to the event method to which you hook the event handler method:

- Native C++ events: *`SourceClass`* is the event source class and *`EventMethod`* is the event.

- COM events: *`SourceClass`* is the event source interface and *`EventMethod`* is one of its methods.

- Managed events: *`SourceClass`* is the event source class and *`EventMethod`* is the event.

*`interface`*\
The interface name being hooked to *`receiver`*, only for COM event receivers in which the *`layout_dependent`* parameter of the [`event_receiver`](../windows/attributes/event-receiver.md) attribute is **`true`**.

*`source`*\
A pointer to an instance of the event source. Depending on the code `type` specified in `event_receiver`, *`source`* can be one of these types:

- A native event source object pointer.

- An `IUnknown`-based pointer (COM source).

- A managed object pointer (for managed events).

*`&ReceiverClass::HandlerMethod`*\
A pointer to the event handler method to be hooked to an event. The handler is specified as a method of a class or a reference to the same. If you don't specify the class name, **`__hook`** assumes the class is the one it's called from.

- Native C++ events: *`ReceiverClass`* is the event receiver class and `HandlerMethod` is the handler.

- COM events: *`ReceiverClass`* is the event receiver interface and *`HandlerMethod`* is one of its handlers.

- Managed events: *`ReceiverClass`* is the event receiver class and *`HandlerMethod`* is the handler.

*`receiver`*\
(Optional) A pointer to an instance of the event receiver class. If you don't specify a receiver, the default is the receiver class or structure in which **`__hook`** is called.

## Usage

Can be use in any function scope, including main, outside the event receiver class.

## Remarks

Use the intrinsic function **`__hook`** in an event receiver to associate or hook a handler method with an event method. The specified handler is then called when the source raises the specified event. You can hook several handlers to a single event or hook several events to a single handler.

There are two forms of **`__hook`**. You can use the first (four-argument) form in most cases, specifically, for COM event receivers in which the *layout_dependent* parameter of the [`event_receiver`](../windows/attributes/event-receiver.md) attribute is **`false`**.

In these cases, you don't need to hook all methods in an interface before firing an event on one of the methods. You only need to hook the method handling the event. You can use the second (two-argument) form of **`__hook`** only for a COM event receiver in which *`layout_dependent`* **`= true`**.

**`__hook`** returns a long value. A nonzero return value indicates that an error has occurred (managed events throw an exception).

The compiler checks for the existence of an event and that the event signature agrees with the delegate signature.

You can call **`__hook`** and **`__unhook`** outside the event receiver, except for COM events.

An alternative to using **`__hook`** is to use the += operator.

For information on coding managed events in the new syntax, see [`event`](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> A templated class or struct cannot contain events.

## Example

See [Event handling in native C++](../cpp/event-handling-in-native-cpp.md) and [Event handling in COM](../cpp/event-handling-in-com.md) for samples.

## See also

[Keywords](../cpp/keywords-cpp.md)\
[Event handling](../cpp/event-handling.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__event`](../cpp/event.md)\
[`__unhook`](../cpp/unhook.md)\
[`__raise`](../cpp/raise.md)
