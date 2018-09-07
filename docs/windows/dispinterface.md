---
title: "dispinterface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.dispinterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["dispinterface attribute"]
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# dispinterface

Places an interface in the .idl file as a dispatch interface.

## Syntax

```cpp
[dispinterface]
```

## Remarks

When the **dispinterface** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.

Unless you specify a base class, a dispatch interface will derive from `IDispatch`. You must specify an [id](../windows/id.md) for the members of a dispatch interface.

The usage example for [dispinterface](/windows/desktop/Midl/dispinterface) in the MIDL documentation:

```cpp
dispinterface helloPro
   { interface hello; };
```

is not valid for the **dispinterface** attribute.

## Example

See the example for [bindable](../windows/bindable.md) for an example of how to use **dispinterface**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Attributes by Usage](../windows/attributes-by-usage.md)  
[uuid](../windows/uuid-cpp-attributes.md)  
[dual](../windows/dual.md)  
[custom](../windows/custom-cpp.md)  
[object](../windows/object-cpp.md)  
[__interface](../cpp/interface.md)  