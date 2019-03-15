---
title: "custom (C++)"
ms.date: "11/04/2016"
f1_keywords: ["vc-attr.custom"]
helpviewer_keywords: ["custom attributes, defining"]
ms.assetid: 3abac928-4d55-4ea6-8cf6-8427a4ad79f1
---
# custom (C++)

Defines metadata for an object in the type library.

## Syntax

```cpp
[ custom(
   uuid,
   value
) ];
```

### Parameters

*uuid*<br/>
A unique ID.

*value*<br/>
A value that can be put into a variant.

## Remarks

The **custom** C++ attribute will cause information to be placed into the type library. You will need a tool that reads the custom value from type library.

The **custom** attribute has the same functionality as the [custom](/windows/desktop/Midl/custom) MIDL attribute.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Non-COM **interface**, **class**, **enum**s, `idl_module` methods, interface members, interface parameters, **typedef**s, **union**s, **struct**s|
|**Repeatable**|Yes|
|**Required attributes**|**coclass** (when used on class)|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)
