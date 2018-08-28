---
title: "wire_marshal | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.wire_marshal"]
dev_langs: ["C++"]
helpviewer_keywords: ["wire_marshal attribute"]
ms.assetid: 244f9d72-776d-4ebd-b60a-cee600a126b5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# wire_marshal

Specifies a data type that will be used for transmission instead of an application-specific data type.

## Syntax

```cpp
[wire_marshal]
```

## Remarks

The **wire_marshal** C++ attribute has the same functionality as the [wire_marshal](https://msdn.microsoft.com/library/windows/desktop/aa367309) MIDL attribute.

## Example

The following code shows a use of **wire_marshal**:

```cpp
// cpp_attr_ref_wire_marshal.cpp
// compile with: /LD
#include "windows.h"
[module(name="MyLibrary")];

[export, public] typedef unsigned long _FOUR_BYTE_DATA;

[export] typedef struct _TWO_X_TWO_BYTE_DATA {
   unsigned short low;
   unsigned short high;
} TWO_X_TWO_BYTE_DATA ;

[export, wire_marshal(TWO_X_TWO_BYTE_DATA)] typedef _FOUR_BYTE_DATA FOUR_BYTE_DATA;
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**typedef**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)  