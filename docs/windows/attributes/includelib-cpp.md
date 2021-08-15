---
description: "Learn more about: includelib (C++)"
title: "includelib  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.includelib"]
helpviewer_keywords: ["includelib attribute"]
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
---
# includelib (C++)

Causes an .idl or .h file to be included in the generated .idl file.

## Syntax

```cpp
[ includelib(name.idl) ];
```

### Parameters

*name.idl*<br/>
The name of the .idl file that you want included as part of the generated .idl file.

## Remarks

The **includelib** C++ attribute causes an .idl or .h file to be included in the generated .idl file, after the `importlib` statement.

## Example

The following code is shown in a .cpp file:

```cpp
// cpp_attr_ref_includelib.cpp
// compile with: /LD
[module(name="MyLib")];
[includelib("includelib.idl")];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|Yes|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[include](include-cpp.md)<br/>
[importlib](importlib.md)
