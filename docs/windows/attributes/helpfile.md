---
title: "helpfile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpfile"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpfile attribute"]
ms.assetid: d75161c1-1363-4019-ae09-e7e3b8a3971e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpfile

Sets the name of the Help file for a type library.

## Syntax

```cpp
[ helpfile(
   "filename"
) ]
```

### Parameters

*filename*<br/>
The name of the file that contains the help topics.

## Remarks

The **helpfile** C++ attribute has the same functionality as the [helpfile](/windows/desktop/Midl/helpfile) MIDL attribute.

## Example

See the example for [module](module-cpp.md) for an example of how to use **helpfile**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**, **typedef**, **class**, method, **property**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](attribute-contexts.md).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[helpcontext](helpcontext.md)<br/>
[helpstring](helpstring.md)  