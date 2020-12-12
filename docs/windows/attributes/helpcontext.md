---
description: "Learn more about: helpcontext"
title: "helpcontext (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.helpcontext"]
helpviewer_keywords: ["helpcontext attribute"]
ms.assetid: 6fbb022d-a4b7-4989-a02f-7f18a9b0ad96
---
# helpcontext

Specifies a context ID that lets the user view information about this element in the **Help** file.

## Syntax

```cpp
[ helpcontext(id) ]
```

### Parameters

*id*<br/>
The context ID of the help topic. See [HTML Help: Context-Sensitive Help for Your Programs](../../mfc/html-help-context-sensitive-help-for-your-programs.md) for more information on context IDs.

## Remarks

The **helpcontext** C++ attribute has the same functionality as the [helpcontext](/windows/win32/Midl/helpcontext) MIDL attribute.

## Example

See the example for [defaultvalue](defaultvalue.md) for an example of how to use **helpcontext**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**, **`typedef`**, **`class`**, method, property|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](helpfile.md)<br/>
[helpstring](helpstring.md)
