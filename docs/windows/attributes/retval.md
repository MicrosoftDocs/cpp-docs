---
description: "Learn more about: retval"
title: "retval (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.retval"]
helpviewer_keywords: ["retval attribute"]
ms.assetid: bfa16f08-157d-4eea-afde-1232c54b8501
---
# retval

Designates the parameter that receives the return value of the member.

## Syntax

```cpp
[retval]
```

## Remarks

The **retval** C++ attribute has the same functionality as the [retval](/windows/win32/Midl/retval) MIDL attribute.

**retval** must appear on the last argument in a function's declaration.

## Example

See the example for [bindable](bindable.md) for a sample use of **retval**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|**out**|
|**Invalid attributes**|**in**|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)
