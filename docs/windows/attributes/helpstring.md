---
title: "helpstring (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.helpstring"]
helpviewer_keywords: ["helpstring attribute [C++]"]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
---
# helpstring

Specifies a character string that is used to describe the element to which it applies.

## Syntax

```cpp
[ helpstring("string") ]
```

### Parameters

*string*<br/>
The text of the help string.

## Remarks

The **helpstring** C++ attribute has the same functionality as the [helpstring](/windows/desktop/Midl/helpstring) MIDL attribute.

## Example

See the example for [defaultvalue](defaultvalue.md) for an example of how to use **helpstring**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**, **typedef**, **class**, method, property|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

- [IDL Attributes](idl-attributes.md)
- [Interface Attributes](interface-attributes.md)
- [Class Attributes](class-attributes.md)
- [Method Attributes](method-attributes.md)
- [Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
- [helpfile](helpfile.md)
- [helpcontext](helpcontext.md)
