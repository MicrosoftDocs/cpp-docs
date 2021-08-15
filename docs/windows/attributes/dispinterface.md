---
description: "Learn more about: dispinterface"
title: "dispinterface (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.dispinterface"]
helpviewer_keywords: ["dispinterface attribute"]
ms.assetid: 61c5a4a1-ae92-47e9-8ee4-f847be90172b
---
# dispinterface

Places an interface in the .idl file as a dispatch interface.

## Syntax

```cpp
[dispinterface]
```

## Remarks

When the **dispinterface** C++ attribute precedes an interface, it causes the interface to be placed inside the library block in the generated .idl file.

Unless you specify a base class, a dispatch interface will derive from `IDispatch`. You must specify an [id](id.md) for the members of a dispatch interface.

The usage example for [dispinterface](/windows/win32/Midl/dispinterface) in the MIDL documentation:

```cpp
dispinterface helloPro
   { interface hello; };
```

is not valid for the **dispinterface** attribute.

## Example

See the example for [bindable](bindable.md) for an example of how to use **dispinterface**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`dual`, `object`, `oleautomation`, `local`, `ms_union`|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Attributes by Usage](attributes-by-usage.md)<br/>
[uuid](uuid-cpp-attributes.md)<br/>
[dual](dual.md)<br/>
[custom](custom-cpp.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)
