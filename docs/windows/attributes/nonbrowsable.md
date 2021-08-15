---
description: "Learn more about: nonbrowsable"
title: "nonbrowsable (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.nonbrowsable"]
helpviewer_keywords: ["nonbrowsable attribute"]
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
---
# nonbrowsable

Indicates that an interface member should not be displayed in a property browser.

## Syntax

```cpp
[nonbrowsable]
```

## Remarks

The **nonbrowsable** C++ attribute has the same functionality as the [nonbrowsable](/windows/win32/Midl/nonbrowsable) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_nonbrowsable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, helpstring("help string"), helpstringcontext(1),
uuid="11111111-1111-1111-1111-111111111111"]
__interface IMyI
{
   [nonbrowsable] HRESULT xx();
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
