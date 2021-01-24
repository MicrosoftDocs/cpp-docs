---
description: "Learn more about: _bstr_t::operator ="
title: "_bstr_t::operator ="
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::operator="]
helpviewer_keywords: ["operator = [C++], bstr", "operator= [C++], bstr"]
ms.assetid: fb31bb1b-ce29-4388-b5fd-8dac830cf18a
---
# _bstr_t::operator =

**Microsoft Specific**

Assigns a new value to an existing `_bstr_t` object.

## Syntax

```
_bstr_t& operator=(const _bstr_t& s1) throw ( );
_bstr_t& operator=(const char* s2);
_bstr_t& operator=(const wchar_t* s3);
_bstr_t& operator=(const _variant_t& var);
```

#### Parameters

*s1*<br/>
A `_bstr_t` object to be assigned to an existing `_bstr_t` object.

*s2*<br/>
A multibyte string to be assigned to an existing `_bstr_t` object.

*s3*<br/>
A Unicode string to be assigned to an existing `_bstr_t` object.

*var*<br/>
A `_variant_t` object to be assigned to an existing `_bstr_t` object.

**END Microsoft Specific**

## Example

See [_bstr_t::Assign](../cpp/bstr-t-assign.md) for an example of using **operator=**.

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
