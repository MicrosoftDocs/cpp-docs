---
title: "retval (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.retval"]
dev_langs: ["C++"]
helpviewer_keywords: ["retval attribute"]
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# retval

Designates the parameter that receives the return value of the member.

## Syntax

```cpp
[retval]
```

## Remarks

The **retval** C++ attribute has the same functionality as the [retval](/windows/desktop/Midl/retval) MIDL attribute.

**retval** must appear on the last argument in a function's declaration.

## Example

See the example for [bindable](bindable.md) for a sample use of **retval**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|**out**|
|**Invalid attributes**|**in**|

For more information about the attribute contexts, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)  