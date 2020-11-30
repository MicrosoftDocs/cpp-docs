---
title: "__unhook"
description: "Learn how to use the Microsoft C++ extension keyword `__unhook` for native event handling."
ms.date: "11/04/2016"
f1_keywords: ["__unhook", "__unhook_cpp"]
helpviewer_keywords: ["event handlers [C++], dissociating events", "__unhook keyword [C++]"]
---
# `__unhook` keyword

Disassociates a handler method from an event.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

```cpp
long  __unhook(
   &SourceClass::EventMethod,
   source,
   &ReceiverClass::HandlerMethod
   [, receiver = this]
);

long  __unhook(
   interface,
   source
);

long  __unhook(
   source
);
```

### Parameters

*`&SourceClass::EventMethod`*\
A pointer to the event method from which you unhook the event handler method:

- Native C++ events: *`SourceClass`* is the event source class and *`EventMethod`* is the event.

- COM events: *`SourceClass`* is the event source interface and *`EventMethod`* is one of its methods.

- Managed events: *`SourceClass`* is the event source class and *`EventMethod`* is the event.

*`interface`*\
The interface name being unhooked from *receiver*, only for COM event receivers in which the *layout_dependent* parameter of the [`event_receiver`](../windows/attributes/event-receiver.md) attribute is **`true`**.

*`source`*\
A pointer to an instance of the event source. Depending on the code `type` specified in `event_receiver`, *source* can be one of these types:

- A native event source object pointer.

- An `IUnknown`-based pointer (COM source).

- A managed object pointer (for managed events).

*`&ReceiverClass::HandlerMethod`*
A pointer to the event handler method to be unhooked from an event. The handler is specified as a method of a class or a reference to the same; if you don't specify the class name, **`__unhook`** assumes the class to be the one in which it's called.

- Native C++ events: *`ReceiverClass`* is the event receiver class and `HandlerMethod` is the handler.

- COM events: *`ReceiverClass`* is the event receiver interface and *`HandlerMethod`* is one of its handlers.

- Managed events: *`ReceiverClass`* is the event receiver class and *`HandlerMethod`* is the handler.

*`receiver`*(optional)
A pointer to an instance of the event receiver class. If you don't specify a receiver, the default is the receiver class or structure in which **`__unhook`** is called.

## Usage

Can be use in any function scope, including `main`, outside the event receiver class.

## Remarks

Use the intrinsic function **`__unhook`** in an event receiver to disassociate or "unhook" a handler method from an event method.

There are three forms of **`__unhook`**. You can use the first (four-argument) form in most cases. You can use the second (two-argument) form of **`__unhook`** only for a COM event receiver; it unhooks the entire event interface. You can use the third (one-argument) form to unhook all delegates from the specified source.

A nonzero return value indicates that an error has occurred (managed events will throw an exception).

If you call **`__unhook`** on an event and event handler that aren't already hooked, it will have no effect.

At compile time, the compiler verifies that the event exists and does parameter type checking with the specified handler.

You can call **`__hook`** and **`__unhook`** outside the event receiver, except for COM events.

An alternative to using **`__unhook`** is to use the -= operator.

For information on coding managed events in the new syntax, see [event](../extensions/event-cpp-component-extensions.md).

> [!NOTE]
> A templated class or struct cannot contain events.

## Example

See [Event Handling in Native C++](../cpp/event-handling-in-native-cpp.md) and [Event Handling in COM](../cpp/event-handling-in-com.md) for samples.

## See also

[Keywords](../cpp/keywords-cpp.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__event`](../cpp/event.md)\
[`__hook`](../cpp/hook.md)\
[`__raise`](../cpp/raise.md)
