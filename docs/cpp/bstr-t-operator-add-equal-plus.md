---
description: "Learn more about: _bstr_t::operator +=, +"
title: "_bstr_t::operator +=, +"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::operator+", "_bstr_t::operator+="]
helpviewer_keywords: ["+= operator [C++], appending strings", "+ operator [C++], _bstr_t objects"]
ms.assetid: d28316ce-c2c8-4a38-bdb3-44fa4e582c44
---
# _bstr_t::operator +=, +

**Microsoft Specific**

Appends characters to the end of the `_bstr_t` object or concatenates two strings.

## Syntax

```
_bstr_t& operator+=( const _bstr_t& s1 );
_bstr_t operator+( const _bstr_t& s1 );
friend _bstr_t operator+( const char* s2, const _bstr_t& s1);
friend _bstr_t operator+( const wchar_t* s3, const _bstr_t& s1);
```

#### Parameters

*s1*<br/>
A `_bstr_t` object.

*s2*<br/>
A multibyte string.

*s3*<br/>
A Unicode string.

## Remarks

These operators perform string concatenation:

- **operator+=(**  *s1*  **)** Appends the characters in the encapsulated `BSTR` of *s1* to the end of this object's encapsulated `BSTR`.

- **operator+(**  *s1*  **)** Returns the new `_bstr_t` that is formed by concatenating this object's `BSTR` with that of *s1*.

- **operator+(**  *s2*  **&#124;**  *s1*  **)** Returns a new `_bstr_t` that is formed by concatenating a multibyte string *s2*, converted to Unicode, with the `BSTR` encapsulated in *s1*.

- **operator+(**  *s3* **,**  *s1*  **)** Returns a new `_bstr_t` that is formed by concatenating a Unicode string *s3* with the `BSTR` encapsulated in *s1*.

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
