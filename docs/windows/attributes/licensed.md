---
description: "Learn more about: licensed"
title: "licensed (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.licensed"]
helpviewer_keywords: ["licensed attribute"]
ms.assetid: 09cf3b4a-d3f2-43e3-9180-d420333b23bf
---
# licensed

Indicates that the COM object to which it applies is licensed, and must be instantiated using `IClassFactory2`.

## Syntax

```cpp
[licensed]
```

## Remarks

The **licensed** C++ attribute has the same functionality as the [licensed](/windows/win32/Midl/licensed) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_licensed.cpp
// compile with: /LD
#include "unknwn.h"
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI : IUnknown {
   HRESULT f();
};

[coclass, version("2.1"), uuid(12345678-1111-2222-3333-123456789012),
licensed, threading(free), progid(some.name)]
class CSample : public IMyI {
public:
   int nSize;
};

[module(name="MyLibrary", version="1.0", helpstring="My Library Block")];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|`coclass`|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Class Attributes](class-attributes.md)
