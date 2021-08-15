---
title: "event_receiver (C++ COM Attribute)"
description: "Learn how to use the Microsoft C++ extension `event_receiver` COM attribute."
ms.date: 11/20/2020
f1_keywords: ["vc-attr.event_receiver"]
helpviewer_keywords: ["event_receiver attribute", "event receivers", "events [C++], event receivers (sinks)", "event handling [C++], attributes", "event handling [C++], creating receiver", "event sinks, creating", "event sinks"]
---
# `event_receiver` attribute

Creates an event receiver (sink).

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

```cpp
[ event_receiver(type
   [, layout_dependent=false]) ]
```

### Parameters

*`type`*\
An enumeration of one of the following values:

- `native` for unmanaged C/C++ code (default for native classes).

- `com` for COM code. This value requires that you include these header files:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*`layout_dependent`*\
Specify *`layout_dependent`* only if `type`=**com**. *`layout_dependent`* is a Boolean:

- **`true`** means that the signature of the delegates in the event receiver must exactly match the ones they're hooked to in the event source. The event receiver handler names must match the names specified in the relevant event source interface. Use `coclass` when *`layout_dependent`* is **`true`**. It's slightly more efficient to specify **`true`**.

- **`false`** (default) means that the calling convention and storage class (`virtual`, `static`, and others) don't have to match the event method and the handlers. The handler names also don't need to match the event source interface method names.

## Remarks

The **`event_receiver`** C++ attribute specifies that the class or structure to which it's applied will be an event receiver, using the Microsoft C++ unified event model.

**`event_receiver`** is used with the [`event_source`](event-source.md) attribute and the [`__hook`](../../cpp/hook.md) and [`__unhook`](../../cpp/unhook.md) keywords. Use `event_source` to create event sources. Use **`__hook`** within an event receiver's methods to associate ("hook") event receiver methods to the events of an event source. Use **`__unhook`** to disassociate them.

*`layout_dependent`* is only specified for COM event receivers (`type`=**`com`**). The default for *`layout_dependent`* is **`false`**.

> [!NOTE]
> A templated class or struct cannot contain events.

## Requirements

| Attribute context | Value |
|--|--|
| **Applies to** | **`class`**, **`struct`** |
| **Repeatable** | No |
| **Required attributes** | `coclass` when *`layout_dependent`*=**`true`** |
| **Invalid attributes** | None |

For more information, see [Attribute contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler attributes](compiler-attributes.md)\
[`event_source`](event-source.md)\
[`__event`](../../cpp/event.md)\
[`__hook`](../../cpp/hook.md)\
[`__unhook`](../../cpp/unhook.md)\
[Class attributes](class-attributes.md)
