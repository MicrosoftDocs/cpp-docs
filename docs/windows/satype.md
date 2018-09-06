---
title: "satype | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.satype"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""satype attribute""]"]
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# satype

Specifies the data type of the `SAFEARRAY` structure.

## Syntax

```cpp
[ satype(
   data_type
) ]
```

### Parameters

*data_type*  
The data type for the `SAFEARRAY` data structure that is being passed as a parameter to an interface method.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

## Remarks

The **satype** C++ attribute specifies the data type of the `SAFEARRAY`.

> [!NOTE]
> A level of indirection is dropped from the `SAFEARRAY` pointer in the generated .idl file from how it is declared in the .cpp file.

## Example

```cpp
// cpp_attr_ref_satype.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyModule")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A {
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## See Also

[Compiler Attributes](../windows/compiler-attributes.md)  
[Parameter Attributes](../windows/parameter-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  
[id](../windows/id.md)  