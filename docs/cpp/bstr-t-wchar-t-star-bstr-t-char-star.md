---
description: "Learn more about: _bstr_t::wchar_t*, _bstr_t::char*"
title: "_bstr_t::wchar_t*, _bstr_t::char*"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::wchar_t*", "_bstr_t::char*"]
helpviewer_keywords: ["operator wchar_t* [C++]", "operator char* [C++]"]
ms.assetid: acd9f4a7-b427-42c2-aaae-acae21cab317
---
# _bstr_t::wchar_t\*, _bstr_t::char\*

**Microsoft Specific**

Returns the BSTR characters as a narrow or wide character array.

## Syntax

```
operator const wchar_t*( ) const throw( );
operator wchar_t*( ) const throw( );
operator const char*( ) const;
operator char*( ) const;
```

## Remarks

These operators can be used to extract the character data that is encapsulated by the `BSTR` object. Assigning a new value to the returned pointer does not modify the original BSTR data.

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
