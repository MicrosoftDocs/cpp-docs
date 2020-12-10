---
description: "Learn more about: threading (C++)"
title: "threading  (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.threading"]
helpviewer_keywords: ["threading attribute"]
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
---
# threading (C++)

Specifies the threading model for a COM object.

## Syntax

```cpp
[ threading(model=enumeration) ]
```

### Parameters

*model*<br/>
(Optional) One of the following threading models:

- `apartment` (apartment threading)

- `neutral` (.NET Framework components with no user interface)

- `single` (simple threading)

- `free` (free threading)

- `both` (apartment and free threading)

The default value is `apartment`.

## Remarks

The **threading** C++ attribute does not appear in the generated .idl file but will be used in the implementation of your COM object.

In ATL projects, If the [coclass](coclass.md) attribute is also present, the threading model specified by *model* is passed as the template parameter to the [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) class, inserted by the `coclass` attribute.

The **threading** attribute also guards access to an [event_source](event-source.md).

## Example

See the [licensed](licensed.md) example for a sample use of **threading**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|**coclass**|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[COM Attributes](com-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Multithreading Support for Older Code (Visual C++)](../../parallel/multithreading-support-for-older-code-visual-cpp.md)<br/>
[Neutral Apartments](/windows/win32/cossdk/neutral-apartments)
