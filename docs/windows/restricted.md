---
title: "restricted | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.restricted"]
dev_langs: ["C++"]
helpviewer_keywords: ["restricted attribute"]
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# restricted

Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.

## Syntax

```cpp
[ restricted(
   interfaces
) ]
```

### Parameters

*interfaces*  
One or more interfaces that may not be called arbitrarily on a COM object. This parameter is only valid when applied to a class.

## Remarks

The **restricted** C++ attribute has the same functionality as the [restricted](https://msdn.microsoft.com/library/windows/desktop/aa367157) MIDL attribute.

## Example

The following code shows how to use the **restricted** attribute:

```cpp
// cpp_attr_ref_restricted.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[object, uuid("00000000-0000-0000-0000-000000000002")]
__interface b
{
};

[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]
class c : public a, public b
{
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method, **interface**, **class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|**coclass** (when applied to **class** or **struct**)|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Interface Attributes](../windows/interface-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  