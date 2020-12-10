---
description: "Learn more about: _bstr_t::copy"
title: "_bstr_t::copy"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::copy"]
helpviewer_keywords: ["Copy method [C++]", "BSTR object [C++], copy"]
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
---
# _bstr_t::copy

**Microsoft Specific**

Constructs a copy of the encapsulated `BSTR`.

## Syntax

```
BSTR copy( bool fCopy = true ) const;
```

#### Parameters

*fCopy*<br/>
If **`true`**, **copy** returns a copy of the contained `BSTR`, otherwise **copy** returns the actual BSTR.

## Remarks

Returns a newly allocated copy of the encapsulated `BSTR` object.

## Example

```cpp
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t
   *pVal = m_bsConStr.copy();
}
```

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)
