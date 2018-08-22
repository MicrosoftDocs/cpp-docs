---
title: "pointer_default | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.pointer_default"]
dev_langs: ["C++"]
helpviewer_keywords: ["pointer_default attribute"]
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# pointer_default

Specifies the default pointer attribute for all pointers, except top-level pointers that appear in parameter lists.

## Syntax

```cpp  
[ pointer_default(  
   value  
) ]  
```

### Parameters

*value*  
A value that describes the pointer type: **ptr**, **ref**, or **unique**.

## Remarks

The **pointer_default** C++ attribute has the same functionality as the [pointer_default](http://msdn.microsoft.com/library/windows/desktop/aa367141) MIDL attribute.

## Example

See the example for [defaultvalue](../windows/defaultvalue.md) for a sample use of **pointer_default**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Interface Attributes](../windows/interface-attributes.md)   