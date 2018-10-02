---
title: "requestedit (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.requestedit"]
dev_langs: ["C++"]
helpviewer_keywords: ["requestedit attribute"]
ms.assetid: b3c24790-3c4a-4646-8722-03d7b51172ee
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# requestedit

Indicates that the property supports the `OnRequestEdit` notification.

## Syntax

```cpp
[requestedit]
```

## Remarks

The **requestedit** C++ attribute has the same functionality as the [requestedit](/windows/desktop/Midl/requestedit) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **requestedit**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Data Member Attributes](data-member-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)  