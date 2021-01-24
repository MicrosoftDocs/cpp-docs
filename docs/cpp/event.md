---
title: "__event"
description: "Learn how to use the Microsoft C++ extension keyword `__event` for native event handling."
ms.date: 11/20/2020
f1_keywords: ["__event_cpp", "__event"]
helpviewer_keywords: ["__event keyword [C++]", "events [C++], __event"]
---
# `__event` keyword

Declares an event.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

> **`__event`** *`member-function-declarator`* **`;`**\
> **`__event`** **`__interface`** *`interface-specifier`* **`;`**\
> **`__event`** *`data-member-declarator`* **`;`**

## Remarks

The Microsoft-specific keyword **`__event`** can be applied to a member function declaration, an interface declaration, or a data member declaration. However, you can't use the **`__event`** keyword to qualify a member of a nested class.

Depending on whether your event source and receiver are native C++, COM, or managed (.NET Framework), you can use the following constructs as events:

| Native C++ | COM | Managed (.NET Framework) |
|--|--|--|
| member function | - | method |
| - | interface | - |
| - | - | data member |

Use [`__hook`](../cpp/hook.md) in an event receiver to associate a handler member function with an event member function. After you create an event with the **`__event`** keyword, all event handlers hooked to that event afterward get called when the event is called.

An **`__event`** member function declaration can't have a definition; a definition is implicitly generated, so the event member function can be called as if it were any ordinary member function.

> [!NOTE]
> A templated class or struct can't contain events.

## Native events

Native events are member functions. The return type is typically `HRESULT` or **`void`**, but can be any integral type, including an **`enum`**. When an event uses an integral return type, an error condition is defined when an event handler returns a nonzero value. In this case, the event that's raised calls the other delegates.

```cpp
// Examples of native C++ events:
__event void OnDblClick();
__event HRESULT OnClick(int* b, char* s);
```

See [Event Handling in Native C++](../cpp/event-handling-in-native-cpp.md) for sample code.

## COM events

COM events are interfaces. The parameters of a member function in an event source interface should be *in* parameters, but it isn't rigorously enforced. It's because an *out* parameter isn't useful when multicasting. A level 1 warning is issued if you use an *out* parameter.

The return type is typically `HRESULT` or **`void`**, but can be any integral type, including **`enum`**. When an event uses an integral return type and an event handler returns a nonzero value, it's an error condition. The event being raised aborts the calls to the other delegates. The compiler automatically marks an event source interface as a [`source`](../windows/attributes/source-cpp.md) in the generated IDL.

The [`__interface`](../cpp/interface.md) keyword is always required after **`__event`** for a COM event source.

```cpp
// Example of a COM event:
__event __interface IEvent1;
```

See [Event handling in COM](../cpp/event-handling-in-com.md) for sample code.

## Managed events

For information on coding events in the new syntax, see [event](../extensions/event-cpp-component-extensions.md).

Managed events are data members or member functions. When used with an event, the return type of a delegate must be compliant with the [Common Language Specification](/dotnet/standard/language-independence-and-language-independent-components). The return type of the event handler must match the return type of the delegate. For more information on delegates, see [Delegates and Events](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md). If a managed event is a data member, its type must be a pointer to a delegate.

In the .NET Framework, you can treat a data member as if it were a method itself (that is, the `Invoke` method of its corresponding delegate). To do so, predefine the delegate type for declaring a managed event data member. In contrast, a managed event method implicitly defines the corresponding managed delegate if it isn't already defined. For example, you can declare an event value such as `OnClick` as an event as follows:

```cpp
// Examples of managed events:
__event ClickEventHandler* OnClick;  // data member as event
__event void OnClick(String* s);  // method as event
```

When implicitly declaring a managed event, you can specify `add` and `remove` accessors that get called when event handlers are added or removed. You can also define the member function that calls (raises) the event from outside the class.

## Example: Native events

```cpp
// EventHandling_Native_Event.cpp
// compile with: /c
[event_source(native)]
class CSource {
public:
   __event void MyEvent(int nValue);
};
```

## Example: COM events

```cpp
// EventHandling_COM_Event.cpp
// compile with: /c
#define _ATL_ATTRIBUTES 1
#include <atlbase.h>
#include <atlcom.h>

[ module(dll, name="EventSource", uuid="6E46B59E-89C3-4c15-A6D8-B8A1CEC98830") ];

[ dual, uuid("00000000-0000-0000-0000-000000000002") ]
__interface IEventSource {
   [id(1)] HRESULT MyEvent();
};
[ coclass, uuid("00000000-0000-0000-0000-000000000003"),  event_source(com) ]
class CSource : public IEventSource {
public:
   __event __interface IEventSource;
   HRESULT FireEvent() {
      __raise MyEvent();
      return S_OK;
   }
};
```

## See also

[Keywords](../cpp/keywords-cpp.md)\
[Event handling](../cpp/event-handling.md)\
[`event_source`](../windows/attributes/event-source.md)\
[`event_receiver`](../windows/attributes/event-receiver.md)\
[`__hook`](../cpp/hook.md)\
[`__unhook`](../cpp/unhook.md)\
[`__raise`](../cpp/raise.md)
