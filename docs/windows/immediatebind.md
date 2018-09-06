---
title: "immediatebind | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.immediatebind"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""immediatebind attribute""]"]
ms.assetid: 186d40e6-9166-4d0c-9853-4e7e4d25226f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# immediatebind

Indicates that the database will be notified immediately of all changes to a property of a data-bound object.

## Syntax

```cpp
[immediatebind]
```

## Remarks

The **immediatebind** C++ attribute has the same functionality as the [immediatebind](/windows/desktop/Midl/immediatebind) MIDL attribute.

## Example

See [bindable](../windows/bindable.md) for an example of how to use **immediatebind**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  
[defaultbind](../windows/defaultbind.md)  
[displaybind](../windows/displaybind.md)  
[requestedit](../windows/requestedit.md)  