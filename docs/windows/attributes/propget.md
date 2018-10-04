---
title: "propget (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.propget"]
dev_langs: ["C++"]
helpviewer_keywords: ["propget attribute"]
ms.assetid: c9d4a97f-36dd-4b61-8eb0-b1a217598f14
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# propget

Specifies a property accessor function.

## Syntax

```cpp
[propget]
```

## Remarks

The **propget** C++ attribute has the same functionality as the [propget](/windows/desktop/Midl/propget) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **propget**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propput`, `propputref`|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[propput](propput.md)<br/>
[propputref](propputref.md)  