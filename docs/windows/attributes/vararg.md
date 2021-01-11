---
description: "Learn more about: vararg"
title: "vararg (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.vararg"]
helpviewer_keywords: ["vararg attribute"]
ms.assetid: 20fc3244-18e9-411c-990e-d5b4fa29a570
---
# vararg

Specifies that the function takes a variable number of arguments.

## Syntax

```cpp
[vararg]
```

## Remarks

The **vararg** C++ attribute has the same functionality as the [vararg](/windows/win32/Midl/vararg) MIDL attribute.

## Example

The following code shows a use of **vararg**:

```cpp
// cpp_attr_ref_vararg.cpp
// compile with: /LD
#include "unknwn.h"
#include "oaidl.h"
[module(name="MyLibrary")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface X : public IUnknown
{
   [vararg] HRESULT Button([in, satype(VARIANT)]SAFEARRAY *psa);
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
