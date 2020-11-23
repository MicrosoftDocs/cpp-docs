---
title: "event_source (C++ COM Attribute)"
description: "Learn how to use the Microsoft C++ extension `event_source` COM attribute."
ms.date: 11/20/2020
f1_keywords: ["vc-attr.event_source"]
helpviewer_keywords: ["event handling, attributes", "event logs, event source", "event sources, creating", "event_source attribute", "event sources", "event handling, creating event source"]
---
# `event_source` attribute

Creates an event source.

> [!NOTE]
> Event attributes in native C++ are incompatible with Standard C++. They don't compile when you specify [`/permissive-`](../../build/reference/permissive-standards-conformance.md) conformance mode.

## Syntax

```cpp
[ event_source(type, optimize=[speed | size], decorate=[true | false]) ]
```

### Parameters

*`type`*\
An enumeration of one of the following values:

- `native` for unmanaged C/C++ code (default for unmanaged classes).

- `com` for COM code. Use `coclass` when *`type`*=`com`. This value requires that you include the following header files:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*`optimize`*\
When *type* is `native`, you can specify `optimize=size`, to indicate that there are 4 bytes of storage (minimum) for all events in a class or `optimize=speed` (the default) to indicate that there are 4 * (# of events) bytes of storage.

*`decorate`*\
When *type* is `native`, you can specify `decorate=false`, to indicate that the expanded name in the merged (*`.mrg`*) file shouldn't include the enclosing class name. [`/Fx`](../../build/reference/fx-merge-injected-code.md) lets you generate *`.mrg`* files. `decorate=false`, which is the default, results in fully qualified type names in the merged file.

## Remarks

The **`event_source`** C++ attribute specifies that the class or structure to which it's applied will be an event source.

**`event_source`** is used in conjunction with the [`event_receiver`](event-receiver.md) attribute and the [`__event`](../../cpp/event.md) keyword. Use `event_receiver` to create event receivers. Use **`__event`** on methods within the event source to specify those methods as events.

> [!NOTE]
> A templated class or struct cannot contain events.

## Requirements

| Attribute context | Value |
|--|--|
| **Applies to** | **`class`**, **`struct`** |
| **Repeatable** | No |
| **Required attributes** | **`coclass`** when `type`=`com` |
| **Invalid attributes** | None |

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler attributes](compiler-attributes.md)\
[`event_receiver`](event-receiver.md)\
[`__event`](../../cpp/event.md)\
[`__hook`](../../cpp/hook.md)\
[`__unhook`](../../cpp/unhook.md)\
[Class attributes](class-attributes.md)
