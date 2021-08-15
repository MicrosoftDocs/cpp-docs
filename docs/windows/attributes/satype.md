---
description: "Learn more about: satype"
title: "satype (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.satype"]
helpviewer_keywords: ["satype attribute"]
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
---
# satype

Specifies the data type of the `SAFEARRAY` structure.

## Syntax

```cpp
[ satype(data_type) ]
```

### Parameters

*data_type*<br/>
The data type for the `SAFEARRAY` data structure that is being passed as a parameter to an interface method.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

## Remarks

The **satype** C++ attribute specifies the data type of the `SAFEARRAY`.

> [!NOTE]
> A level of indirection is dropped from the `SAFEARRAY` pointer in the generated .idl file from how it is declared in the .cpp file.

## Example

```cpp
// cpp_attr_ref_satype.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyModule")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A {
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## See also

[Compiler Attributes](compiler-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[id](id.md)
