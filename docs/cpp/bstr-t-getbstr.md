---
description: "Learn more about: _bstr_t::GetBSTR"
title: "_bstr_t::GetBSTR"
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::GetBSTR"]
helpviewer_keywords: ["GetBSTR method [C++]"]
---
# `_bstr_t::GetBSTR`

**Microsoft Specific**

Points to the beginning of the `BSTR` wrapped by the `_bstr_t`.

## Syntax

```cpp
BSTR& GetBSTR( );
```

## Return Value

The beginning of the `BSTR` wrapped by the `_bstr_t`.

## Remarks

**`GetBSTR`** affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and `operator=`.

## Example

See [`_bstr_t::Assign`](../cpp/bstr-t-assign.md) for an example that uses **`GetBSTR`**.

**END Microsoft Specific**

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
