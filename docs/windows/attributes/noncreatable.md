---
description: "Learn more about: noncreatable"
title: "noncreatable (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.noncreatable"]
helpviewer_keywords: ["noncreatable attribute"]
ms.assetid: 4d17937b-0bff-41af-ba57-53e18b7ab5a9
---
# noncreatable

Defines an object that cannot be instantiated by itself.

## Syntax

```cpp
[noncreatable]
```

## Remarks

The **noncreatable** C++ attribute has the same functionality as the [noncreatable](/windows/win32/Midl/noncreatable) MIDL attribute and is automatically passed through to the generated .IDL file by the compiler.

When this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the above behavior, the attribute also injects the [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro. This macro indicates to ATL that the object cannot be created externally.

## Example

```cpp
// cpp_attr_ref_noncreatable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("11111111-1111-1111-1111-111111111111")]
__interface A
{
};

[coclass, uuid("11111111-1111-1111-1111-111111111112"), noncreatable]
class CMyClass : public A
{
   HRESULT xx();
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)
