---
description: "Learn more about: _bstr_t Relational Operators"
title: "_bstr_t Relational Operators"
ms.date: "05/07/2019"
f1_keywords: ["_bstr_t::operator>", "_bstr_t::operator==", "_bstr_t::operator>=", "_bstr_t::operator!=", "_bstr_t::operator<", "_bstr_t::operator<=", "_bstr_t::operator!"]
helpviewer_keywords: ["_bstr_t [C++]"]
ms.assetid: e153da72-37c3-4d8a-b8eb-730d65da64dd
---
# _bstr_t Relational Operators

**Microsoft Specific**

Compares two `_bstr_t` objects.

## Syntax

```
bool operator!( ) const throw( );
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

[_bstr_t Class](../cpp/bstr-t-class.md)
