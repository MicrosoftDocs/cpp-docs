---
description: "Learn more about: readonly (C++)"
title: "readonly  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.readonly"]
helpviewer_keywords: ["readonly attribute"]
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
---
# readonly (C++)

Prohibits assignment to a data member.

## Syntax

```cpp
[readonly]
```

## Remarks

The **readonly** C++ attribute has the same functionality as the [readonly](/windows/win32/Midl/readonly) MIDL attribute.

If you want to prohibit modification of a method parameter, then use the [in](in-cpp.md) attribute.

## Example

The following code shows a use of the **readonly** attribute:

```cpp
// cpp_attr_ref_readonly.cpp
// compile with: /LD
[idl_quote("midl_pragma warning(disable:2461)")];
#include "unknwn.h"
[module(name="ATLFIRELib")];

[dispinterface, uuid(11111111-1111-1111-1111-111111111111)]
__interface IFireTabCtrl
{
   [readonly, id(1)] int i();
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
[Data Member Attributes](data-member-attributes.md)
