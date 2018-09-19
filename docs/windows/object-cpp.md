---
title: "object (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.object"]
dev_langs: ["C++"]
helpviewer_keywords: ["object attribute"]
ms.assetid: f2d3c231-630d-4b4c-bd15-b1c30df362dd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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

See [nonbrowsable](../windows/nonbrowsable.md) for an example of how to use **object**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Interface Attributes](../windows/interface-attributes.md)<br/>
[dual](../windows/dual.md)<br/>
[dispinterface](../windows/dispinterface.md)<br/>
[custom](../windows/custom-cpp.md)<br/>
[__interface](../cpp/interface.md)  