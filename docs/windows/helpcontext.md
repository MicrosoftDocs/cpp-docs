---
title: "helpcontext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpcontext"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpcontext attribute"]
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpcontext

Specifies a context ID that lets the user view information about this element in the **Help** file.

## Syntax

```cpp
[ helpcontext(
   id
) ]
```

### Parameters

*id*  
The context ID of the help topic. See [HTML Help: Context-Sensitive Help for Your Programs](../mfc/html-help-context-sensitive-help-for-your-programs.md) for more information on context IDs.

## Remarks

The **helpcontext** C++ attribute has the same functionality as the [helpcontext](/windows/desktop/Midl/helpcontext) MIDL attribute.

## Example

See the example for [defaultvalue](../windows/defaultvalue.md) for an example of how to use **helpcontext**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**, **typedef**, **class**, method, property|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Interface Attributes](../windows/interface-attributes.md)<br/>
[Class Attributes](../windows/class-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](../windows/helpfile.md)<br/>
[helpstring](../windows/helpstring.md)  