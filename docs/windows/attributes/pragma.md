---
title: "pragma (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.pragma"]
dev_langs: ["C++"]
helpviewer_keywords: ["pragma attribute"]
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# pragma

Emits the specified string into the generated .idl file without the use of quotation marks.

## Syntax

```cpp
[ pragma(pragma_statement) ];
```

### Parameters

*pragma_statement*<br/>
The pragma that you want to go into the generated .idl file.

## Remarks

The **pragma** C++ attribute has the same functionality as the [pragma](/windows/desktop/Midl/pragma) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_pragma.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];
[pragma(pack(4))];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A
{
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[pack](../../preprocessor/pack.md)