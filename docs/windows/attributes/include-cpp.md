---
description: "Learn more about: include (C++)"
title: "include  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.include"]
helpviewer_keywords: ["include attribute"]
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
---
# include (C++)

Specifies one or more header files to be included in the generated .idl file.

## Syntax

```cpp
[ include(header_file) ];
```

### Parameters

*header_file*<br/>
The name of a file that you want included in the generated .idl file.

## Remarks

The **include** C++ attribute causes an `#include` statement to be placed below the `import "docobj.idl"` statement in the generated .idl file.

The **include** C++ attribute has the same functionality as the [include](/windows/win32/Midl/include) MIDL attribute.

## Example

The following code shows an example of how to use **include**. For this example, the file include.h contains only a `#include` statement.

```cpp
// cpp_attr_ref_include.cpp
// compile with: /LD
[module(name="MyLib")];
[include(cpp_attr_ref_include.h)];
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

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includelib](includelib-cpp.md)<br/>
[importlib](importlib.md)
