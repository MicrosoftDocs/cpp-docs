---
description: "Learn more about: version (C++)"
title: "version  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.version"]
helpviewer_keywords: ["version attribute", "version information, version attribute"]
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
---
# version (C++)

Identifies a particular version among multiple versions of a class.

## Syntax

```cpp
[ version("version") ]
```

### Parameters

*version*<br/>
The version number of the `coclass`. If not specified, 1.0 will be placed in the .idl file.

## Remarks

The **version** C++ attribute has the same functionality as the [version](/windows/win32/Midl/version) MIDL attribute and is passed through to the generated .idl file.

## Example

See the [bindable](bindable.md) example for a sample use of **version**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler Attributes](compiler-attributes.md)<br/>
[Class Attributes](class-attributes.md)
