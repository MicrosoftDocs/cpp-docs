---
title: "ref (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.ref"]
dev_langs: ["C++"]
helpviewer_keywords: ["ref attribute"]
ms.assetid: 67e82d3e-07d9-4ef8-bf2b-0a4491d12557
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ref (C++)

Identifies a reference pointer.

## Syntax

```cpp
[ref]
```

## Remarks

The **ref** C++ attribute has the same functionality as the [ref](/windows/desktop/Midl/ref) MIDL attribute.

## Example

The following code shows how to use the **ref** attribute:

```cpp
// cpp_attr_ref_ref.cpp
// compile with: /LD
#include <windows.h>
[module(name="ATLFIRELib")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   [id(1), unique] char * GetFirstName([in, ref] char * pszFullName );
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**typedef**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](../windows/parameter-attributes.md)  