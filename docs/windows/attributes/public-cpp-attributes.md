---
description: "Learn more about: public (C++ Attributes)"
title: "public (C++ Attributes) (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.public"]
helpviewer_keywords: ["public attribute"]
ms.assetid: c42e1fd5-6cb1-48fe-8a03-95f2a2e0137c
---
# public (C++ Attributes)

Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.

## Syntax

```cpp
[public]
```

## Remarks

The **`public`** C++ attribute has the same functionality as the [public](/windows/win32/Midl/public) MIDL attribute.

## Example

The following code shows how to use the **`public`** attribute:

```cpp
// cpp_attr_ref_public.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export, public] typedef long MEMBERID;

[dispinterface, uuid(99999999-9999-9999-9999-000000000000)]
__interface IFireTabCtrl : IDispatch
{
   [id(2)] long procedure ([in, optional] VARIANT i);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`typedef`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
