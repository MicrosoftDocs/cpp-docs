---
description: "Learn more about: _bstr_t::operator ="
title: "_bstr_t::operator ="
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::operator="]
helpviewer_keywords: ["operator = [C++], bstr", "operator= [C++], bstr"]
---
# `_bstr_t::operator =`

**Microsoft Specific**

Assigns a new value to an existing `_bstr_t` object.

## Syntax

```cpp
_bstr_t& operator=(const _bstr_t& s1) throw ( );
_bstr_t& operator=(const char* s2);
_bstr_t& operator=(const wchar_t* s3);
_bstr_t& operator=(const _variant_t& var);
```

### Parameters

*`s1`*\
A `_bstr_t` object to be assigned to an existing `_bstr_t` object.

*`s2`*\
A multibyte string to be assigned to an existing `_bstr_t` object.

*`s3`*\
A Unicode string to be assigned to an existing `_bstr_t` object.

*`var`*\
A `_variant_t` object to be assigned to an existing `_bstr_t` object.

**END Microsoft Specific**

## Example

See [`_bstr_t::Assign`](../cpp/bstr-t-assign.md) for an example that uses **`operator=`**.

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
