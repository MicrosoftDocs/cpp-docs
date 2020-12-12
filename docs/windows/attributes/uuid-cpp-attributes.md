---
description: "Learn more about: uuid (C++ Attributes)"
title: "uuid (C++ Attributes)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.uuid"]
helpviewer_keywords: ["uuid attribute"]
ms.assetid: 90562a94-5e28-451b-a4b0-cadda7f66efe
---
# uuid (C++ Attributes)

Specifies the unique ID for a class or interface.

## Syntax

```cpp
[ uuid( "uuid" ) ]
```

### Parameters

*uuid*<br/>
A 128-bit, unique identifier.

## Remarks

If the definition of an interface or class does not specify the `uuid` C++ attribute, then the Microsoft C++ compiler will provide one. When you specify a `uuid`, you must include the quotes.

If you do not specify `uuid`, then the compiler will generate the same GUID for interfaces or classes with the same name in different attribute projects on a machine.

You can use Uuidgen.exe or Guidgen.exe to generate your own unique IDs. (To run either of these tools, click **Start** and click **Run** on the menu. Then enter the name of the required tool.)

When used in a project that does not also use ATL, specifying the `uuid` attribute is the same as specifying the [uuid](../../cpp/uuid-cpp.md) **`__declspec`** modifier. To retrieve the `uuid` of a class, you can use [__uuidof](../../cpp/uuidof-operator.md)

## Example

See the [bindable](bindable.md) example for a sample use of `uuid`.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|`class`, `struct`, `interface`, `union`, `enum`|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[uuid](/windows/win32/Midl/uuid)
