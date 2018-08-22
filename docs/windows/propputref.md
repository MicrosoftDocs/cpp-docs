---
title: "propputref | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.propputref"]
dev_langs: ["C++"]
helpviewer_keywords: ["propputref attribute"]
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# propputref

Specifies a property setting function that uses a reference instead of a value.

## Syntax

```cpp
[propputref]
```

## Remarks

The **propputref** C++ attribute has the same functionality as the [propputref](http://msdn.microsoft.com/library/windows/desktop/aa367147) MIDL attribute.

## Example

See the example for [bindable](../windows/bindable.md) for a sample use of **propputref**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propget`, `propput`|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  
[propget](../windows/propget.md)  
[propput](../windows/propput.md)  