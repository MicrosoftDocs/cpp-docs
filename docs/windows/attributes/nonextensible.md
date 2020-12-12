---
description: "Learn more about: nonextensible"
title: "nonextensible (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.nonextensible"]
helpviewer_keywords: ["nonextensible attribute"]
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
---
# nonextensible

Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time.

## Syntax

```cpp
[nonextensible]
```

## Remarks

The **nonextensible** C++ attribute has the same functionality as the [nonextensible](/windows/win32/Midl/nonextensible) MIDL attribute.

Use of **nonextensible** also requires the [oleautomation](oleautomation.md) attribute.

## Example

The following code shows one use of the **nonextensible** attribute:

```cpp
// cpp_attr_ref_nonextensible.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export] typedef long HRESULT;

[dual, nonextensible, ms_union, oleautomation,
uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   HRESULT procedure (int i);
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|`dual` and `oleautomation`, or `dispinterface`|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)
