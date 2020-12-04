---
description: "Learn more about: vi_progid"
title: "vi_progid (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.vi_progid"]
helpviewer_keywords: ["vi_progid attribute"]
ms.assetid: a52449be-b93e-4111-b883-44bb8da53261
---
# vi_progid

Specifies a version-independent form of the ProgID.

## Syntax

```cpp
[ vi_progid(name) ];
```

### Parameters

*name*<br/>
The version-independent ProgID representing the object.

ProgIDs present a human-readable version of the class identifier (CLSID) used to identify COM/ActiveX objects.

## Remarks

The **vi_progid** C++ attribute lets you specify a version-independent ProgID for a COM object. A ProgID has the form *name1.name2.version*. A version-independent ProgID does not have a *version*. It is possible to specify both the `progid` and the **vi_progid** attributes on a `coclass`. If you do not specify **vi_progid**, the version-independent ProgID is the value specified by the [progid](progid.md) attribute.

**vi_progid** implies the `coclass` attribute, that is, if you specify **vi_progid**, it is the same thing as specifying the `coclass` and **vi_progid** attributes.

The **vi_progid** attribute causes a class to be automatically registered under the specified name. The generated .idl file will not display the ProgID value.

In ATL projects, If the [coclass](coclass.md) attribute is also present, the specified ProgID is used by the `GetVersionIndependentProgID` function (inserted by the `coclass` attribute).

## Example

See the [coclass](coclass.md) example for a sample use of **vi_progid**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[ProgID Key](/windows/win32/com/-progid--key)
