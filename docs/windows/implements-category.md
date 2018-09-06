---
title: "implements_category | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.implements_category"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""implements_category attribute""]"]
ms.assetid: fb162df3-1ebe-43dc-a084-668d7ef8c03f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# implements_category

Specifies the component categories implemented by the target class.

## Syntax

```cpp
[ implements_category(
   implements_category="uuid"
) ]
```

### Parameters

*implements_category*  
The ID of the implemented category.

## Remarks

The **implements_category** C++ attribute specifies the component categories implemented by the target class. This is done by creating a CATEGORY map and adding separate entries specified by the **implements_category** attribute. For more information, see [What are Component Categories and How Do They Work?](https://msdn.microsoft.com/library/windows/desktop/ms694322).

This attribute requires that the [coclass](../windows/coclass.md), [progid](../windows/progid.md), or [vi_progid](../windows/vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element. If any single attribute is used, the other two are automatically applied. For example, if `progid` is applied, `vi_progid` and `coclass` are also applied.

## Example

The following code specifies that the following object implements the `Control` category.

```cpp
// cpp_attr_ref_implements_category.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="MyLib")];
[ coclass, implements_category("CATID_Control"),
  uuid("20a0d0cc-5172-40f5-99ae-5e032f3205ae")]
class CMyClass {};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|Yes|
|**Required attributes**|One of the following: `coclass`, `progid`, or `vi_progid`|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[COM Attributes](../windows/com-attributes.md)  
[Class Attributes](../windows/class-attributes.md)  
[IMPLEMENTED_CATEGORY](../atl/reference/category-macros.md#implemented_category)  