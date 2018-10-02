---
title: "ms_union | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.ms_union"]
dev_langs: ["C++"]
helpviewer_keywords: ["ms_union attribute"]
ms.assetid: bb548689-6962-457e-af56-8ffdf68987eb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ms_union

Controls the network data representation alignment of nonencapsulated unions.

## Syntax

```cpp
[ms_union]
```

## Remarks

The **ms_union** C++ attribute has the same functionality as the [ms_union](/windows/desktop/Midl/ms-union-attrib) MIDL attribute.

## Example

The following code shows the placement of **ms_union**:

```cpp
// cpp_attr_ref_ms_union.cpp
// compile with: /LD
#include <unknwn.h>
[object, ms_union, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl {
   HRESULT DisplayString([in, string] char * p1);
};

[export, switch_type(short)] union _WILLIE_UNION_TYPE  {
   [case(24)]
      float fMays;
   [case(25)]
      double dMcCovey;
   [default]
      int x;
};

[public] typedef _WILLIE_UNION_TYPE WILLIE_UNION_TYPE;

[module(name="ATLFIRELib")];
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Nonencapsulated unions|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`dispinterface`|

For more information, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)  