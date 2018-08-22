---
title: "readonly (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.readonly"]
dev_langs: ["C++"]
helpviewer_keywords: ["readonly attribute"]
ms.assetid: 1246cadd-5304-43a9-beea-51153d12704d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# readonly (C++)

Prohibits assignment to a data member.

## Syntax

```cpp  
[readonly]  
```

## Remarks

The **readonly** C++ attribute has the same functionality as the [readonly](http://msdn.microsoft.com/library/windows/desktop/aa367152) MIDL attribute.

If you want to prohibit modification of a method parameter, then use the [in](../windows/in-cpp.md) attribute.

## Example

The following code shows a use of the **readonly** attribute:

```cpp  
// cpp_attr_ref_readonly.cpp  
// compile with: /LD  
[idl_quote("midl_pragma warning(disable:2461)")];  
#include "unknwn.h"  
[module(name="ATLFIRELib")];

[dispinterface, uuid(11111111-1111-1111-1111-111111111111)]  
__interface IFireTabCtrl  
{  
   [readonly, id(1)] int i();  
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

[IDL Attributes](../windows/idl-attributes.md)  
[Data Member Attributes](../windows/data-member-attributes.md)   