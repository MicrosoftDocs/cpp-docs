---
title: "propget | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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

The **propget** C++ attribute has the same functionality as the [propget](http://msdn.microsoft.com/library/windows/desktop/aa367145) MIDL attribute.

## Example

See the example for [bindable](../windows/bindable.md) for a sample use of **propget**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propput`, `propputref`|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  
[propput](../windows/propput.md)  
[propputref](../windows/propputref.md)  