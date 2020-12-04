---
description: "Learn more about: _bstr_t::GetAddress"
title: "_bstr_t::GetAddress"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::GetAddress"]
helpviewer_keywords: ["GetAddress method [C++]"]
ms.assetid: 09bc9180-867e-4ee5-b22a-8339dc663142
---
# _bstr_t::GetAddress

**Microsoft Specific**

Frees any existing string and returns the address of a newly allocated string.

## Syntax

```
BSTR* GetAddress( );
```

## Return Value

A pointer to the `BSTR` wrapped by the `_bstr_t`.

## Remarks

**GetAddress** affects all `_bstr_t` objects that share a `BSTR`. More than one `_bstr_t` can share a `BSTR` through the use of the copy constructor and **operator=**.

## Example

See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for a example using **GetAddress**.

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
