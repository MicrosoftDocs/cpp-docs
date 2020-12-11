---
description: "Learn more about: progid"
title: "progid (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.progid"]
helpviewer_keywords: ["progid attribute"]
ms.assetid: afcf559c-e432-481f-aa9a-bd3bb72c02a8
---
# progid

Specifies the ProgID for a COM object.

## Syntax

```cpp
[ progid(name) ];
```

### Parameters

*name*<br/>
The ProgID representing the object.

ProgIDs present a human-readable version of the class identifier (CLSID) used to identify COM/ActiveX objects.

## Remarks

The `progid` C++ attribute lets you specify the ProgID for a COM object. A ProgID has the form *name1.name2.version*. If you do not specify a *version* for a ProgID, the default version is 1. If you do not specify *name1.name2*, the default name is *classname.classname*. If you do not specify `progid` and you do specify `vi_progid`, *name1.name2* are taken from `vi_progid` and the (next sequential number) version is appended.

If an attribute block that uses `progid` does not also use `uuid`, the compiler will check the registry to see if a `uuid` exists for the specified `progid`. If `progid` is not specified, the version (and coclass name, if creating a coclass) will be used to generate a `progid`.

`progid` implies the `coclass` attribute, that is, if you specify `progid`, it is the same thing as specifying the `coclass` and `progid` attributes.

The `progid` attribute causes a class to be automatically registered under the specified name. The generated .idl file will not display the `progid` value.

When this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the above behavior, the information specified with this attribute is used in the `GetProgID` function, injected by the `coclass` attribute. For more information, see the [coclass](coclass.md) attribute.

## Example

See the example for [coclass](coclass.md) for a sample use of `progid`.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|`class`, `struct`|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[ProgID Key](/windows/win32/com/-progid--key)
