---
description: "Learn more about: library_block"
title: "library_block (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.library_block"]
helpviewer_keywords: ["library_block attribute"]
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
---
# library_block

Places a construct inside the IDL library block.

## Syntax

```cpp
[library_block]
```

## Remarks

When you place a construct inside the library block, you ensure that it will be passed into the type library, regardless of whether it is referenced. By default, only constructs modified by the [coclass](coclass.md), [dispinterface](dispinterface.md), and [idl_module](idl-module.md) attributes are placed in the library block.

## Example

In the following code, a custom interface is placed inside the library block.

```cpp
// cpp_attr_ref_library_block.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib")];
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface IMyInterface {
   HRESULT f1();
};
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
[Stand-Alone Attributes](stand-alone-attributes.md)
