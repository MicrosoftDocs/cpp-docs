---
description: "Learn more about: hidden"
title: "hidden (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.hidden"]
helpviewer_keywords: ["hidden attribute"]
ms.assetid: 199c96dd-fc07-46c7-af93-92020aebebe7
---
# hidden

Indicates that the item exists but should not be displayed in a user-oriented browser.

## Syntax

```cpp
[hidden]
```

## Remarks

The **hidden** C++ attribute has the same functionality as the [hidden](/windows/win32/Midl/hidden) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for an example of how to use **hidden**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**, **`class`**, **`struct`**, method, property|
|**Repeatable**|No|
|**Required attributes**|**coclass** (when applied to **`class`** or **`struct`**)|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)<br/>
[Class Attributes](class-attributes.md)<br/>
[Method Attributes](method-attributes.md)
