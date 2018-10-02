---
title: "requestedit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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

See the example for [bindable](../windows/bindable.md) for a sample use of **requestedit**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)<br/>
[Data Member Attributes](../windows/data-member-attributes.md)<br/>
[defaultbind](../windows/defaultbind.md)<br/>
[displaybind](../windows/displaybind.md)<br/>
[immediatebind](../windows/immediatebind.md)  