---
title: "event_source (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.event_source"]
helpviewer_keywords: ["event handling, attributes", "event logs, event source", "event sources, creating", "event_source attribute", "event sources", "event handling, creating event source"]
ms.assetid: 0983e36a-6127-4fbb-8a22-8dfec6564c16
---
# event_source

Creates an event source.

## Syntax

```cpp
[ event_source(type, optimize=[speed | size], decorate=[true | false]) ]
```

### Parameters

*type*<br/>
An enumeration of one of the following values:

- `native` for unmanaged C/C++ code (default for unmanaged classes).

- `com` for COM code. You must use `coclass` when `type`=`com`. This value requires that you include the following header files:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*optimize*<br/>
When *type* is `native`, you can specify `optimize=size`, to indicate that there is 4 bytes of storage (minimum) for all events in a class or `optimize=speed` (the default) to indicate that there is 4 * (# of events) bytes of storage.

*decorate*<br/>
When *type* is `native`, you can specify `decorate=false`, to indicate that the expanded name in the merged (.mrg) file should not include the enclosing class name. [/Fx](../../build/reference/fx-merge-injected-code.md) lets you generate .mrg files. `decorate=false`, which is the default, results in fully-qualified type names in the merged file.

## Remarks

The **event_source** C++ attribute specifies that the class or structure to which it is applied will be an event source.

**event_source** is used in conjunction with the [event_receiver](event-receiver.md) attribute and the [__event](../../cpp/event.md) keyword. Use `event_receiver` to create event receivers. Use **__event** on methods within the event source to specify those methods as events.

> [!NOTE]
> A templated class or struct cannot contain events.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|**coclass** when `type`=`com`|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[Compiler Attributes](compiler-attributes.md)<br/>
[event_receiver](event-receiver.md)<br/>
[__event](../../cpp/event.md)<br/>
[__hook](../../cpp/hook.md)<br/>
[__unhook](../../cpp/unhook.md)<br/>
[Class Attributes](class-attributes.md)