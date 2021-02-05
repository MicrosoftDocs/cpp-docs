---
description: "Learn more about: _bstr_t relational operators"
title: "_bstr_t relational operators"
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::operator>", "_bstr_t::operator==", "_bstr_t::operator>=", "_bstr_t::operator!=", "_bstr_t::operator<", "_bstr_t::operator<="]
helpviewer_keywords: ["_bstr_t relational operators[C++]"]
---
# `_bstr_t` relational operators

**Microsoft Specific**

Compares two `_bstr_t` objects.

## Syntax

```cpp
bool operator==(const _bstr_t& str) const throw( );
bool operator!=(const _bstr_t& str) const throw( );
bool operator<(const _bstr_t& str) const throw( );
bool operator>(const _bstr_t& str) const throw( );
bool operator<=(const _bstr_t& str) const throw( );
bool operator>=(const _bstr_t& str) const throw( );
```

## Remarks

These operators compare two `_bstr_t` objects lexicographically. The operators return **`true`** if the comparisons hold, otherwise return **`false`**.

**END Microsoft Specific**

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
