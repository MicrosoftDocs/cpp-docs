---
title: "__hook | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["__hook_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__hook keyword [C++]", "event handlers [C++], connecting events to"]
ms.assetid: f4cabb10-d293-4c0e-a1d2-4745ef9cc22c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# __hook

Associates a handler method with an event.

## Syntax

```
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

*&SourceClass::EventMethod*<br/>
A pointer to the event method to which you hook the event handler method:

- Native C++ events: *SourceClass* is the event source class and *EventMethod* is the event.

- COM events: *SourceClass* is the event source interface and *EventMethod* is one of its methods.

- Managed events: *SourceClass* is the event source class and *EventMethod* is the event.

*interface*<br/>
The interface name being hooked to *receiver*, only for COM event receivers in which the *layout_dependent* parameter of the [event_receiver](../windows/event-receiver.md) attribute is **true**.

*source*<br/>
A pointer to an instance of the event source. Depending on the code `type` specified in `event_receiver`, *source* can be one of the following:

- A native event source object pointer.

- An `IUnknown`-based pointer (COM source).

- A managed object pointer (for managed events).

*&ReceiverClass::HandlerMethod*<br/>
A pointer to the event handler method to be hooked to an event. The handler is specified as a method of a class or a reference to the same; if you do not specify the class name, **__hook** assumes the class to be that in which it is called.

- Native C++ events: *ReceiverClass* is the event receiver class and `HandlerMethod` is the handler.

- COM events: *ReceiverClass* is the event receiver interface and `HandlerMethod` is one of its handlers.

- Managed events: *ReceiverClass* is the event receiver class and `HandlerMethod` is the handler.

*receiver* (optional)<br/>
A pointer to an instance of the event receiver class. If you do not specify a receiver, the default is the receiver class or structure in which **__hook** is called.

## Usage

Can be use in any function scope, including main, outside the event receiver class.

## Remarks

Use the intrinsic function **__hook** in an event receiver to associate or hook a handler method with an event method. The specified handler is then called when the source raises the specified event. You can hook several handlers to a single event or hook several events to a single handler.

There are two forms of **__hook**. You can use the first (four-argument) form in most cases, specifically, for COM event receivers in which the *layout_dependent* parameter of the [event_receiver](../windows/event-receiver.md) attribute is **false**.

In these cases you do not need to hook all methods in an interface before firing an event on one of the methods; only the method handling the event needs to be hooked. You can use the second (two-argument) form of **__hook** only for a COM event receiver in which *layout_dependent* **= true**.

**__hook** returns a long value. A nonzero return value indicates that an error has occurred (managed events throw an exception).

The compiler checks for the existence of an event and that the event signature agrees with the delegate signature.

With the exception of COM events, **__hook** and **__unhook** can be called outside the event receiver.

An alternative to using **__hook** is to use the += operator.

For information on coding managed events in the new syntax, see [event](../windows/event-cpp-component-extensions.md).

> [!NOTE]
> A templated class or struct cannot contain events.

## Example

See [Event Handling in Native C++](../cpp/event-handling-in-native-cpp.md) and [Event Handling in COM](../cpp/event-handling-in-com.md) for samples.

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[Event Handling](../cpp/event-handling.md)<br/>
[event_source](../windows/event-source.md)<br/>
[event_receiver](../windows/event-receiver.md)<br/>
[__unhook](../cpp/unhook.md)<br/>
[__raise](../cpp/raise.md)<br/>
