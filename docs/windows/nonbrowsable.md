---
title: "nonbrowsable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.nonbrowsable"]
dev_langs: ["C++"]
helpviewer_keywords: ["nonbrowsable attribute"]
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# nonbrowsable

Indicates that an interface member should not be displayed in a property browser.

## Syntax

```cpp
[nonbrowsable]
```

## Remarks

The **nonbrowsable** C++ attribute has the same functionality as the [nonbrowsable](/windows/desktop/Midl/nonbrowsable) MIDL attribute.

## Example

```cpp
// cpp_attr_ref_nonbrowsable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, helpstring("help string"), helpstringcontext(1),
uuid="11111111-1111-1111-1111-111111111111"]
__interface IMyI
{
   [nonbrowsable] HRESULT xx();
};
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)  