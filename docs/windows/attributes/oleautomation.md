---
title: "oleautomation (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.oleautomation"]
dev_langs: ["C++"]
helpviewer_keywords: ["oleautomation attribute"]
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# oleautomation

Indicates that an interface is compatible with Automation.

## Syntax

```cpp
[oleautomation]
```

## Remarks

The **oleautomation** C++ attribute has the same functionality as the [oleautomation](/windows/desktop/Midl/oleautomation) MIDL attribute.

## Example

See the examples for [defaultvalue](defaultvalue.md) and [nonextensible](nonextensible.md) for a sample use of **oleautomation**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|**dispinterface**|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)  