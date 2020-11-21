---
title: "Event handling in native C++"
description: "Learn how to use the Microsoft C++ extensions for native C++ event handling."
ms.date: 11/20/2020
helpviewer_keywords: ["event handling [C++]"]
---
# Event handling in native C++

In native C++ event handling, you set up an event source and event receiver using the [event_source](../windows/attributes/event-source.md) and [event_receiver](../windows/attributes/event-receiver.md) attributes, respectively, specifying `type`=`native`. These attributes allow the classes they're applied on to fire events and handle events in a native, non-COM context.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

## Declaring events

In an event source class, use the [`__event`](../cpp/event.md) keyword on a method declaration to declare the method as an event. Make sure to declare the method, but don't define it. If you do, it generates a compiler error, because the compiler defines the method implicitly when it's made into an event. Native events can be methods with zero or more parameters. The return type can be **`void`** or any integral type.

## Defining event handlers

In an event receiver class, you define event handlers. Event handlers are methods with signatures (return types, calling conventions, and arguments) that match the event that they'll handle.

## Hooking event handlers to events

Also in an event receiver class, you use the intrinsic function [`__hook`](../cpp/hook.md) to associate events with event handlers and [`__unhook`](../cpp/unhook.md) to disassociate events from event handlers. You can hook several events to an event handler, or several event handlers to an event.

## Firing events

To fire an event, call the method declared as an event in the event source class. If handlers have been hooked to the event, the handlers will be called.

### Native C++ event code

The following example shows how to fire an event in native C++. To compile and run the example, refer to the comments in the code. To build the code in the Visual Studio IDE, verify that the **`/permissive-`** option is turned off.

## Example

### Code

```cpp
// evh_native.cpp
// compile by using: cl /EHsc /W3 evh_native.cpp
#include <stdio.h>

[event_source(native)]
class CSource {
public:
   __event void MyEvent(int nValue);
};

[event_receiver(native)]
class CReceiver {
public:
   void MyHandler1(int nValue) {
      printf_s("MyHandler1 was called with value %d.\n", nValue);
   }

   void MyHandler2(int nValue) {
      printf_s("MyHandler2 was called with value %d.\n", nValue);
   }

   void hookEvent(CSource* pSource) {
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);
      __hook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);
   }

   void unhookEvent(CSource* pSource) {
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler1);
      __unhook(&CSource::MyEvent, pSource, &CReceiver::MyHandler2);
   }
};

int main() {
   CSource source;
   CReceiver receiver;

   receiver.hookEvent(&source);
   __raise source.MyEvent(123);
   receiver.unhookEvent(&source);
}
```

### Output

```Output
MyHandler2 was called with value 123.
MyHandler1 was called with value 123.
```

## See also

[Event handling](../cpp/event-handling.md)
