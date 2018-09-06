---
title: "licensed | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.licensed"]
dev_langs: ["C++"]
helpviewer_keywords: ["licensed attribute"]
ms.assetid: 09cf3b4a-d3f2-43e3-9180-d420333b23bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# licensed

Indicates that the COM object to which it applies is licensed, and must be instantiated using `IClassFactory2`.

## Syntax

```cpp
[licensed]
```

## Remarks

The **licensed** C++ attribute has the same functionality as the [licensed](/windows/desktop/Midl/licensed) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_licensed.cpp
// compile with: /LD
#include "unknwn.h"
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI : IUnknown {
   HRESULT f();
};

[coclass, version("2.1"), uuid(12345678-1111-2222-3333-123456789012),
licensed, threading(free), progid(some.name)]
class CSample : public IMyI {
public:
   int nSize;
};

[module(name="MyLibrary", version="1.0", helpstring="My Library Block")];
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|`coclass`|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Class Attributes](../windows/class-attributes.md)  