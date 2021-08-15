---
description: "Learn more about: string (C++)"
title: "string  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.string"]
helpviewer_keywords: ["string attribute"]
ms.assetid: ddde900a-2e99-4fcd-86e8-57e1bdba7c93
---
# string (C++)

Indicates that the one-dimensional **`char`**, **`wchar_t`**, `byte` (or equivalent) array or the pointer to such an array must be treated as a string.

## Syntax

```cpp
[string]
```

## Remarks

The **string** C++ attribute has the same functionality as the [string](/windows/win32/Midl/string) MIDL attribute.

## Example

The following code shows how to use **string** on an interface and on a typedef:

```cpp
// cpp_attr_ref_string.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export, string] typedef char a[21];
[dispinterface, restricted, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   [id(1)] HRESULT Method3([in, string] char *pC);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Array or pointer to an array, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Array Attributes](array-attributes.md)<br/>
[export](export.md)
