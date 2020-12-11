---
description: "Learn more about: cpp_quote"
title: "cpp_quote (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.cpp_quote"]
helpviewer_keywords: ["cpp_quote attribute"]
ms.assetid: f75327ff-42bd-498b-9177-7ffa25427e1f
---
# cpp_quote

Emits the specified string, without the quote characters, into the generated .idl file.

## Syntax

```cpp
[ cpp_quote("statement") ];
```

### Parameters

*statement*<br/>
A C instruction.

## Remarks

The **cpp_quote** C++ attribute is useful if you want to put a preprocessor directive in an .idl file.

You can also use **cpp_quote** and generate an .h file as part of the MIDL compilation. For example, if you have a C++ header file that uses C++ IDL attributes but cannot use this file for some task, then you can compile it to create a MIDL-generated .h file, which you should be able to use.

The **cpp_quote** attribute has the same functionality as the [cpp_quote](/windows/win32/Midl/cpp-quote) MIDL attribute.

## Example

See the example for [dual](dual.md) for an example use how to use **cpp_quote**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)
