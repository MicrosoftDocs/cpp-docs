---
description: "Learn more about: optional (C++)"
title: "optional  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.optional"]
helpviewer_keywords: ["optional attribute"]
ms.assetid: 86656a66-8e11-4589-8e30-9b0f34eeed03
---
# optional (C++)

Specifies an optional parameter for a member function.

## Syntax

```cpp
[optional]
```

## Remarks

The **optional** C++ attribute has the same functionality as the [optional](/windows/win32/Midl/optional) MIDL attribute.

## Example

The following code shows how **optional** might be used:

```cpp
// cpp_attr_ref_optional.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl : IDispatch
{
   [id(1)] long procedure ([in, optional] VARIANT i);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)
