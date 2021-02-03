---
description: "Learn more about: _bstr_t::operator +=, _bstr_t::operator +"
title: "_bstr_t::operator +=, _bstr_t::operator +"
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::operator+", "_bstr_t::operator+="]
helpviewer_keywords: ["+= operator [C++], appending strings", "+ operator [C++], _bstr_t objects"]
---
# `_bstr_t::operator +=`, `_bstr_t::operator +`

**Microsoft Specific**

Appends characters to the end of the `_bstr_t` object, or concatenates two strings.

## Syntax

```cpp
_bstr_t& operator+=( const _bstr_t& s1 );
_bstr_t operator+( const _bstr_t& s1 );
friend _bstr_t operator+( const char* s2, const _bstr_t& s1);
friend _bstr_t operator+( const wchar_t* s3, const _bstr_t& s1);
```

### Parameters

*`s1`*\
A `_bstr_t` object.

*`s2`*\
A multibyte string.

*`s3`*\
A Unicode string.

## Remarks

These operators perform string concatenation:

- `operator+=( s1 )` Appends the characters in the encapsulated `BSTR` of *`s1`* to the end of this object's encapsulated `BSTR`.

- `operator+( s1 )` Returns the new `_bstr_t` that's formed by concatenating this object's `BSTR` and the one in *`s1`*.

- `operator+( s2, s1 )` Returns a new `_bstr_t` that's formed by concatenating a multibyte string *`s2`*, converted to Unicode, and the `BSTR` encapsulated in *`s1`*.

- `operator+( s3, s1 )` Returns a new `_bstr_t` that's formed by concatenating a Unicode string *`s3`* and the `BSTR` encapsulated in *`s1`*.

**END Microsoft Specific**

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
