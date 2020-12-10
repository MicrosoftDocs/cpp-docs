---
description: "Learn more about: restricted"
title: "restricted (C++ COM Attribute)"
ms.date: "10/03/2018"
f1_keywords: ["vc-attr.restricted"]
helpviewer_keywords: ["restricted attribute"]
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
---
# restricted

Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.

## Syntax

```cpp
[ restricted(
   interfaces
) ]
```

### Parameters

*interfaces*<br/>
One or more interfaces that may not be called arbitrarily on a COM object. This parameter is only valid when applied to a class.

## Remarks

The **restricted** C++ attribute has the same functionality as the [restricted](/windows/win32/Midl/restricted) MIDL attribute.

## Example

The following code shows how to use the **restricted** attribute:

```cpp
// cpp_attr_ref_restricted.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[object, uuid("00000000-0000-0000-0000-000000000002")]
__interface b
{
};

[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]
class c : public a, public b
{
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method, **interface**, **`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|**coclass** (when applied to **`class`** or **`struct`**)|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Method Attributes](method-attributes.md)
