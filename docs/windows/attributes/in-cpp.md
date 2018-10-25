---
title: "in  (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.in"]
dev_langs: ["C++"]
helpviewer_keywords: ["in attribute"]
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# in (C++)

Indicates that a parameter is to be passed from the calling procedure to the called procedure.

## Syntax

```cpp
[in]
```

## Remarks

The **in** C++ attribute has the same functionality as the [in](/windows/desktop/Midl/in) MIDL attribute.

## Example

See [bindable](bindable.md) for an example of how to use **in**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|**retval**|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[id](id.md)<br/>
[out](out-cpp.md)