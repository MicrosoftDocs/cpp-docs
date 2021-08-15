---
description: "Learn more about: importlib"
title: "importlib (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.importlib"]
helpviewer_keywords: ["importlib attribute"]
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
---
# importlib

Makes types that have already been compiled into another type library available to the type library being created.

## Syntax

```cpp
[ importlib("tlb_file") ];
```

### Parameters

*tlb_file*<br/>
The name of a .tlb file, in quotes, that you want imported into the type library of the current project.

## Remarks

The **importlib** C++ attribute causes an `importlib` statement to be placed in the library block of the generated .idl file. The **importlib** attribute has the same functionality as the [importlib](/windows/win32/Midl/importlib) MIDL attribute.

## Example

The following code shows an example of how to use **importlib**:

```cpp
// cpp_attr_ref_importlib.cpp
// compile with: /LD
[module(name="MyLib")];
[importlib("importlib.tlb")];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler Attributes](compiler-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[include](include-cpp.md)<br/>
[includelib](includelib-cpp.md)
