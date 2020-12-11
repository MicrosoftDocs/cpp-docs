---
description: "Learn more about: usesgetlasterror"
title: "usesgetlasterror (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.usesgetlasterror"]
helpviewer_keywords: ["usesgetlasterror attribute"]
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
---
# usesgetlasterror

Tells the caller that if there is an error when calling that function, then the caller can then call `GetLastError` to retrieve the error code.

## Syntax

```cpp
[usesgetlasterror]
```

## Remarks

The **usesgetlasterror** C++ attribute has the same functionality as the [usesgetlasterror](/windows/win32/Midl/usesgetlasterror) MIDL attribute.

## Example

See the [idl_module](idl-module.md) example for a sample of how to use **usesgetlasterror**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**module** attribute|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)
