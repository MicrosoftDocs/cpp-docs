---
title: "id (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.id"]
dev_langs: ["C++"]
helpviewer_keywords: ["id attribute"]
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# id

Specifies a *dispid* parameter for a member function (either a property or a method, in an interface or dispinterface).

## Syntax

```cpp
[ id(dispid) ]
```

### Parameters

*dispid*<br/>
The dispatch ID for the interface method.

## Remarks

The **id** C++ attribute has the same functionality as the [id](/windows/desktop/Midl/id) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for an example of how to use **id**.

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
[defaultvalue](defaultvalue.md)<br/>
[in](in-cpp.md)<br/>
[out](out-cpp.md)  