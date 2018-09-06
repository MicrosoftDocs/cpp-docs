---
title: "out (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.out"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""out attribute""]"]
ms.assetid: 5051b1bf-4949-4bf1-b82f-35e14f0f244b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# out (C++)

Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).

## Syntax

```cpp
[out]
```

## Remarks

The **out** C++ attribute has the same functionality as the [out](/windows/desktop/Midl/out-idl) MIDL attribute.

## Example

See the example for [bindable](../windows/bindable.md) for a sample use of **out**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface parameter|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Parameter Attributes](../windows/parameter-attributes.md)  
[defaultvalue](../windows/defaultvalue.md)  
[id](../windows/id.md)  