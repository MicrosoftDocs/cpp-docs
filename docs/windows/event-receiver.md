---
title: "event_receiver | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.event_receiver"]
dev_langs: ["C++"]
helpviewer_keywords: ["event_receiver attribute", "event receivers", "events [C++], event receivers (sinks)", "event handling [C++], attributes", "event handling [C++], creating receiver", "event sinks, creating", "event sinks"]
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# event_receiver

Creates an event receiver (sink).

## Syntax

```cpp
[ event_receiver(
   type
   [, layout_dependent=false]
) ]
```

### Parameters

*type*<br/>
An enumeration of one of the following values:

- `native` for unmanaged C/C++ code (default for native classes).

- `com` for COM code. This value requires that you include the following header files:

    ```cpp
    #define _ATL_ATTRIBUTES
    #include <atlbase.h>
    #include <atlcom.h>
    ```

*layout_dependent*<br/>
Specify *layout_dependent* only if `type`=**com**. *layout_dependent* is a Boolean:

- **true** means that the signature of the delegates in the event receiver must exactly match those to which they are hooked in the event source. The event receiver handler names must match the names specified in the relevant event source interface. You must use `coclass` when *layout_dependent* is **true**. It is slightly more efficient to specify **true**.

- **false** (default) means that the calling convention and storage class (virtual, static, and others) do not have to match the event method and the handlers; nor do the handler names need to match the event source interface method names.

## Remarks

The **event_receiver** C++ attribute specifies that the class or structure to which it is applied will be an event receiver, using the Visual C++ unified event model.

**event_receiver** is used with the [event_source](../windows/event-source.md) attribute and the [__hook](../cpp/hook.md) and [__unhook](../cpp/unhook.md) keywords. Use `event_source` to create event sources. Use **__hook** within an event receiver's methods to associate ("hook") event receiver methods to the events of an event source. Use **__unhook** to dissociate them.

*layout_dependent* is only specified for COM event receivers (`type`=**com**). The default for *layout_dependent* is **false**.

> [!NOTE]
> A templated class or struct cannot contain events.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|`coclass` when *layout_dependent*=**true**|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[Compiler Attributes](../windows/compiler-attributes.md)<br/>
[event_source](../windows/event-source.md)<br/>
[__event](../cpp/event.md)<br/>
[__hook](../cpp/hook.md)<br/>
[__unhook](../cpp/unhook.md)<br/>
[Class Attributes](../windows/class-attributes.md)  