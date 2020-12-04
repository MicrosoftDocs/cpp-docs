---
description: "Learn more about: requires_category"
title: "requires_category (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.requires_category"]
helpviewer_keywords: ["requires_category attribute"]
ms.assetid: a645fdc6-1ef5-414d-8c56-5fe2686d4687
---
# requires_category

Specifies the required component categories of the target class.

## Syntax

```cpp
[ requires_category(
  requires_category) ]
```

### Parameters

*requires_category*<br/>
The ID of the required category.

## Remarks

The **requires_category** C++ attribute specifies the component categories required by the target class. For more information, see [REQUIRED_CATEGORY](../../atl/reference/category-macros.md#required_category).

This attribute requires that the [coclass](coclass.md), [progid](progid.md), or [vi_progid](vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element.

## Example

The following code requires that the object implement the Control category.

```cpp
// cpp_attr_ref_requires_category.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="MyLibrary")];

[ coclass, requires_category("CATID_Control"),
  uuid("1e1a2436-f3ea-4ff3-80bf-5409370e8144")]
class CMyClass {};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|One or more of the following: `coclass`, `progid`, or `vi_progid`.|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[COM Attributes](com-attributes.md)<br/>
[implements_category](implements-category.md)
