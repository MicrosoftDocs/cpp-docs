---
description: "Learn more about: _bstr_t::copy"
title: "_bstr_t::copy"
ms.date: 02/02/2021
f1_keywords: ["_bstr_t::copy"]
helpviewer_keywords: ["Copy method [C++]", "BSTR object [C++], copy"]
---
# `_bstr_t::copy`

**Microsoft Specific**

Constructs a copy of the encapsulated `BSTR`.

## Syntax

```cpp
BSTR copy( bool fCopy = true ) const;
```

### Parameters

*`fCopy`*\
If **`true`**, **`copy`** returns a copy of the contained `BSTR`, otherwise **`copy`** returns the actual `BSTR`.

## Remarks

Returns a newly allocated copy of the encapsulated `BSTR` object, or the encapsulated object itself, depending on the parameter.

## Example

```cpp
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t
   *pVal = m_bsConStr.copy();
}
```

**END Microsoft Specific**

## See also

[`_bstr_t` class](../cpp/bstr-t-class.md)
