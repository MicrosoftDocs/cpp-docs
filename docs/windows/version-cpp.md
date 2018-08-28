---
title: "version (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.version"]
dev_langs: ["C++"]
helpviewer_keywords: ["version attribute", "version information, version attribute"]
ms.assetid: db6ce5d8-82c2-4329-b1a8-8ca2f67342cb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# version (C++)

Identifies a particular version among multiple versions of a class.

## Syntax

```cpp
[ version(
   "version"
) ]
```

### Parameters

*version*  
The version number of the `coclass`. If not specified, 1.0 will be placed in the .idl file.

## Remarks

The **version** C++ attribute has the same functionality as the [version](https://msdn.microsoft.com/library/windows/desktop/aa367306) MIDL attribute and is passed through to the generated .idl file.

## Example

See the [bindable](../windows/bindable.md) example for a sample use of **version**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**class**, **struct**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[Compiler Attributes](../windows/compiler-attributes.md)  
[Class Attributes](../windows/class-attributes.md)  