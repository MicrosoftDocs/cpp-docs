---
title: "noncreatable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.noncreatable"]
dev_langs: ["C++"]
helpviewer_keywords: ["noncreatable attribute"]
ms.assetid: 4d17937b-0bff-41af-ba57-53e18b7ab5a9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# noncreatable

Defines an object that cannot be instantiated by itself.

## Syntax

```cpp
[noncreatable]
```

## Remarks

The **noncreatable** C++ attribute has the same functionality as the [noncreatable](/windows/desktop/Midl/noncreatable) MIDL attribute and is automatically passed through to the generated .IDL file by the compiler.

When this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the above behavior, the attribute also injects the [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro. This macro indicates to ATL that the object cannot be created externally.

## Example

```cpp
// cpp_attr_ref_noncreatable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("11111111-1111-1111-1111-111111111111")]
__interface A
{
};

[coclass, uuid("11111111-1111-1111-1111-111111111112"), noncreatable]
class CMyClass : public A
{
   HRESULT xx();
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Class Attributes](../windows/class-attributes.md)  
