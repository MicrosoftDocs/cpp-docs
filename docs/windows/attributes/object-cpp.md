---
description: "Learn more about: object (C++)"
title: "object  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.object"]
helpviewer_keywords: ["object attribute"]
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
---
# object (C++)

Identifies a custom interface.

## Syntax

```cpp
[object]
```

## Remarks

When preceding an interface definition, the **object** C++ attribute causes the interface to be placed in the .idl file as a custom interface.

Any interface marked with object must inherit from `IUnknown`. This condition is satisfied if any of the base interfaces inherit from `IUnknown`. If no base interfaces inherit from `IUnknown`, the compiler will cause the interface marked with **object** to derive from `IUnknown`.

## Example

See [nonbrowsable](nonbrowsable.md) for an example of how to use **object**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[dual](dual.md)<br/>
[dispinterface](dispinterface.md)<br/>
[custom](custom-cpp.md)<br/>
[__interface](../../cpp/interface.md)
