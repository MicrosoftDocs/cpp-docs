---
title: "aggregates | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.aggregates"]
dev_langs: ["C++"]
helpviewer_keywords: ["aggregates attribute", "aggregation [C++]", "aggregate objects [C++], aggregates attribute", "aggregates [C++]"]
ms.assetid: 67a084c9-941f-474b-a029-9c93b38ebe9a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# aggregates

Indicates that the object aggregates the object specified by the CLSID.

## Syntax

```cpp
[ aggregates(
   clsid,
   variable_name
) ]
```

### Parameters

*clsid*  
Specifies the CLSID of the aggregatable object.

*variable_name*  
The name of the variable that is to be inserted. This variable contains the `IUnknown` of the object being aggregated.

## Remarks

When applied to an object, the **aggregates** C++ attribute implements an outer wrapper for the object being aggregated (specified by `clsid`).

This attribute requires that the [coclass](../windows/coclass.md), [progid](../windows/progid.md), or [vi_progid](../windows/vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element. If any single attribute is used, the other two are automatically applied. For example, if `progid` is applied, `vi_progid` and `coclass` are also applied.

### ATL Projects

If this attribute is used within a project that uses ATL, the behavior of the attribute changes. First, the following entry is added to the COM map of the target object:

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(_m_spAttrXXX, clsid)  
```

Second, the [DECLARE_GET_CONTROLLING_UNKNOWN](../atl/reference/aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) macro is also added.

## Example

```cpp
// cpp_attr_ref_aggregates.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

// requires 'aggregatable.dll'
// see aggregatable attribute to create 'aggregatable.dll'
class DECLSPEC_UUID("1a8369cc-1c91-42c4-befa-5a5d8c9d2529") CMyClass;

[module (name="MYObject")];
[object, uuid("ab006d85-e754-47c5-9ef4-2744ff32a20c")]
__interface IObject
{
};

[ coclass, aggregates(__uuidof(CMyClass)),
  uuid("91cb2c06-8931-432a-baac-206e55c4edfb")]
struct CObject : IObject
{
   int i;
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|Yes|
|**Required attributes**|One or more of the following: `coclass`, `progid`, or `vi_progid`.|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[COM Attributes](../windows/com-attributes.md)  
[Class Attributes](../windows/class-attributes.md)  
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)  
[Aggregation](/windows/desktop/com/aggregation)  
[Aggregatable](/windows/desktop/Midl/aggregatable)  
[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](../atl/reference/com-interface-entry-macros.md#com_interface_entry_autoaggregate_blind)  