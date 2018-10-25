---
title: "defaultbind (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.defaultbind"]
dev_langs: ["C++"]
helpviewer_keywords: ["defaultbind attribute"]
ms.assetid: b20a8437-24e6-4b6d-a2df-09fe5e1006e0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# defaultbind

Indicates the single, bindable property that best represents the object.

## Syntax

```cpp
[defaultbind]
```

## Remarks

The **defaultbind** C++ attribute has the same functionality as the [defaultbind](/windows/desktop/Midl/defaultbind) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for an example of how to use **defaultbind**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Data Member Attributes](data-member-attributes.md)<br/>
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)<br/>
[requestedit](requestedit.md)