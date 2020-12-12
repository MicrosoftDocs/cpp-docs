---
description: "Learn more about: registration_script"
title: "registration_script (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.registration_script"]
helpviewer_keywords: ["registration_script attribute"]
ms.assetid: 786f8072-9187-4163-a979-7a604dd4c888
---
# registration_script

Executes the specified custom registration script.

## Syntax

```cpp
[ registration_script(script) ]
```

### Parameters

*script*<br/>
The full path to a custom registration script (.rgs) file. A value of **none**, such as `script = "none"`, indicates that the coclass has no registration requirements.

## Remarks

The **registration_script** C++ attribute executes the custom registration script specified by *script*. If this attribute is not specified, a standard .rgs file (containing information for registering the component) is used. For more information on .rgs files, see [The ATL Registry Component (Registrar)](../../atl/atl-registry-component-registrar.md).

This attribute requires that the [coclass](coclass.md), [progid](progid.md), or [vi_progid](vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element.

## Example

The following code specifies that the component has a registry script called cpp_attr_ref_registration_script.rgs.

```cpp
// cpp_attr_ref_registration_script.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="REG")];

[object, uuid("d9cd196b-6836-470b-9b9b-5b04b828e5b0")]
__interface IFace {};

// requires "cpp_attr_ref_registration_script.rgs"
// create sample .RGS file "cpp_attr_ref_registration_script.rgs" if it does not exist
[ coclass, registration_script(script="cpp_attr_ref_registration_script.rgs"),
  uuid("50d3ad42-3601-4f26-8cfe-0f1f26f98f67")]
class CMyClass:public IFace {};
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
[Class Attributes](class-attributes.md)<br/>
[rdx](rdx.md)
