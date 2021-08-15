---
description: "Learn more about: in (C++)"
title: "in  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.in"]
helpviewer_keywords: ["in attribute"]
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
---
# in (C++)

Indicates that a parameter is to be passed from the calling procedure to the called procedure.

## Syntax

```cpp
[in]
```

## Remarks

The **in** C++ attribute has the same functionality as the [in](/windows/win32/Midl/in) MIDL attribute.

## Example

See [bindable](bindable.md) for an example of how to use **in**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|**retval**|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[id](id.md)<br/>
[out](out-cpp.md)
