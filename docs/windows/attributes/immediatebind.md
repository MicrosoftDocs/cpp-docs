---
title: "immediatebind (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.immediatebind"]
helpviewer_keywords: ["immediatebind attribute"]
ms.assetid: 186d40e6-9166-4d0c-9853-4e7e4d25226f
---
# immediatebind

Indicates that the database will be notified immediately of all changes to a property of a data-bound object.

## Syntax

```cpp
[immediatebind]
```

## Remarks

The **immediatebind** C++ attribute has the same functionality as the [immediatebind](/windows/desktop/Midl/immediatebind) MIDL attribute.

## Example

See [bindable](bindable.md) for an example of how to use **immediatebind**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[requestedit](requestedit.md)
