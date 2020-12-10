---
description: "Learn more about: ref (C++)"
title: "ref  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.ref"]
helpviewer_keywords: ["ref attribute"]
ms.assetid: 67e82d3e-07d9-4ef8-bf2b-0a4491d12557
---
# ref (C++)

Identifies a reference pointer.

## Syntax

```cpp
[ref]
```

## Remarks

The **ref** C++ attribute has the same functionality as the [ref](/windows/win32/Midl/ref) MIDL attribute.

## Example

The following code shows how to use the **ref** attribute:

```cpp
// cpp_attr_ref_ref.cpp
// compile with: /LD
#include <windows.h>
[module(name="ATLFIRELib")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   [id(1), unique] char * GetFirstName([in, ref] char * pszFullName );
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`typedef`**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)
