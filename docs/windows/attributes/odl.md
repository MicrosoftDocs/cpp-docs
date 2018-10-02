---
title: "odl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.odl"]
dev_langs: ["C++"]
helpviewer_keywords: ["odl attribute"]
ms.assetid: 75dcb314-b50f-4a63-9180-507ac1bc78f3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# odl

Identifies an interface as an Object Description Language (ODL) interface. The MIDL compiler does not require the **odl** attribute; it is recognized only for compatibility with older .odl files.

## Syntax

```cpp
[odl]
```

## Remarks

The **odl** C++ attribute has the same functionality as the [odl](/windows/desktop/Midl/odl) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_odl.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLIb")];

[odl, oleautomation, dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyInterface
{
   HRESULT x();
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
class cmyClass : public IMyInterface
{
public:
   HRESULT x(){}
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)  