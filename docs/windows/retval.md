---
title: "retval | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.retval"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""retval attribute""]"]
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

See the example for [bindable](../windows/bindable.md) for a sample use of **retval**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|**out**|
|**Invalid attributes**|**in**|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Parameter Attributes](../windows/parameter-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  