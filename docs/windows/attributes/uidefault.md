---
description: "Learn more about: uidefault"
title: "uidefault (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.uidefault"]
helpviewer_keywords: ["uidefault attribute"]
ms.assetid: 200de0e0-2e34-40a2-bae4-8d485a62264d
---
# uidefault

Indicates that the type information member is the default member for display in the user interface.

## Syntax

```cpp
[uidefault]
```

## Remarks

The **uidefault** C++ attribute has the same functionality as the [uidefault](/windows/win32/Midl/uidefault) MIDL attribute.

## Example

The following code shows a sample of **uidefault**:

```cpp
// cpp_attr_ref_uidefault.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom{
   HRESULT Custom([in] long l, [out, retval] long *pLong);
   [uidefault]HRESULT id0([in] long l);
   [uidefault]HRESULT id1([in] long l);

   [uidefault, propget] HRESULT get_y(int *y);
   [uidefault, propput] HRESULT put_y(int y);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)
