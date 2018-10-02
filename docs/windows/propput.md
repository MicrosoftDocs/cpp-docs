---
title: "propput | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.propput"]
dev_langs: ["C++"]
helpviewer_keywords: ["propput attribute"]
ms.assetid: 1f84dda9-9cce-4e16-aaf0-b2c5219827f2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# propput

Specifies a property setting function.

## Syntax

```cpp
[propput]
```

## Remarks

The **propput** C++ attribute has the same functionality as the [propput](/windows/desktop/Midl/propput) MIDL attribute.

## Example

See the example for [bindable](../windows/bindable.md) for a sample use of **propput**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propget`, `propputref`|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)<br/>
[propget](../windows/propget.md)<br/>
[propputref](../windows/propputref.md)