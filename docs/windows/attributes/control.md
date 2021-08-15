---
description: "Learn more about: control"
title: "control (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.control"]
helpviewer_keywords: ["Control attribute"]
ms.assetid: 3d046bb2-4afe-4cb8-a762-233b296e1975
---
# control

Specifies that the user-defined type is a control.

## Syntax

```cpp
[control]
```

## Remarks

The **control** attribute implies the [coclass](coclass.md) attribute. The **control** C++ attribute has the same functionality as the [control](/windows/win32/Midl/control) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_control.cpp
// compile with: /LD
#include <windows.h>
[module(name="Test", control=true)];

[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
};

[coclass, control, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
class CTest : public ICustom {};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
