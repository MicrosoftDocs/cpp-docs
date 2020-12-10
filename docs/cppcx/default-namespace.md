---
description: "Learn more about: default namespace"
title: "default namespace"
ms.date: "12/30/2016"
ms.assetid: 4712e9dc-57ba-43cc-811e-022e1dae4de8
---
# default namespace

The `default` namespace scopes the built-in types that are supported by C++/CX.

## Syntax

```
namespace default;
```

### Members

All built-in types inherit the following members.

| Name | Description |
|--|--|
| [default::(type_name)::Equals](../cppcx/default-type-name-equals-method.md) | Determines whether the specified object is equal to the current object. |
| [default::(type_name)::GetHashCode](../cppcx/default-type-name-gethashcode-method.md) | Returns the hash code for this instance. |
| [default::(type_name)::GetType](../cppcx/default-type-name-gettype-method.md) | Returns a string that represents the current type. |
| [default::(type_name)::ToString](../cppcx/default-type-name-tostring-method.md) | Returns a string that represents the current type. |

### Built-in types

|Name|Description|
|----------|-----------------|
|`char16`|A 16-bit nonnumeric value that represents a Unicode (UTF-16) code point.|
|`float32`|A 32-bit IEEE 754 floating-point number.|
|`float64`|A 64-bit IEEE 754 floating-point number.|
|`int16`|A 16-bit signed integer.|
|`int32`|A 32-bit signed integer.|
|`int64`|A 64-bit signed integer.|
|`int8`|An 8-bit signed numeric value.|
|`uint16`|A 16-bit unsigned integer.|
|`uint32`|A 32-bit unsigned integer.|
|`uint64`|A 64-bit unsigned integer.|
|`uint8`|An 8-bit unsigned numeric value.|

### Requirements

**Header:** vccorlib.h

## See also

[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)
