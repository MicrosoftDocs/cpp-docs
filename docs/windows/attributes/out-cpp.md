---
description: "Learn more about: out (C++)"
title: "out  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.out"]
helpviewer_keywords: ["out attribute"]
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
---
# out (C++)

Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).

## Syntax

```cpp
[out]
```

## Remarks

The **out** C++ attribute has the same functionality as the [out](/windows/win32/Midl/out-idl) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **out**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[defaultvalue](defaultvalue.md)<br/>
[id](id.md)
