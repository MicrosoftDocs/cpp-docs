---
title: "id | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.id"]
dev_langs: ["C++"]
helpviewer_keywords: ["id attribute"]
ms.assetid: a48d2c99-c5d2-4f46-bf96-5ac88dcb5d0c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# id

Specifies a *dispid* parameter for a member function (either a property or a method, in an interface or dispinterface).

## Syntax

```cpp
[ id(
   dispid
) ]
```

### Parameters

*dispid*  
The dispatch ID for the interface method.

## Remarks

The **id** C++ attribute has the same functionality as the [id](/windows/desktop/Midl/id) MIDL attribute.

## Example

See the example for [bindable](../windows/bindable.md) for an example of how to use **id**.

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
[Data Member Attributes](../windows/data-member-attributes.md)  
[defaultvalue](../windows/defaultvalue.md)  
[in](../windows/in-cpp.md)  
[out](../windows/out-cpp.md)  