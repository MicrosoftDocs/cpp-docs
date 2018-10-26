---
title: "optional  (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.optional"]
dev_langs: ["C++"]
helpviewer_keywords: ["optional attribute"]
ms.assetid: 86656a66-8e11-4589-8e30-9b0f34eeed03
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# optional (C++)

Specifies an optional parameter for a member function.

## Syntax

```cpp
[optional]
```

## Remarks

The **optional** C++ attribute has the same functionality as the [optional](/windows/desktop/Midl/optional) MIDL attribute.

## Example

The following code shows how **optional** might be used:

```cpp
// cpp_attr_ref_optional.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl : IDispatch
{
   [id(1)] long procedure ([in, optional] VARIANT i);
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)