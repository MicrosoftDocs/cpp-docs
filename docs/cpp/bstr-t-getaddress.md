---
description: "Learn more about: _bstr_t::GetAddress"
title: "_bstr_t::GetAddress"
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::GetAddress"]
helpviewer_keywords: ["GetAddress method [C++]"]
---
# `_bstr_t::GetAddress`

**Microsoft Specific**

Frees any existing string and returns the address of a newly allocated string.

## Syntax

```cpp
BSTR* GetAddress( );
```

## Return Value

A pointer to the `BSTR` wrapped by the `_bstr_t`.

## Remarks

**`GetAddress`** affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and **`operator=`**.

## Example

See [`_bstr_t::Assign`](../cpp/bstr-t-assign.md) for an example that uses **`GetAddress`**.

**END Microsoft Specific**

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
