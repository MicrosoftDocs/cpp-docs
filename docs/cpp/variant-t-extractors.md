---
description: "Learn more about: _variant_t Extractors"
title: "_variant_t Extractors"
ms.date: "11/04/2016"
f1_keywords: ["_variant_t.operatordouble", "operatorlong", "_variant_t::operator_bstr_t", "operatordouble", "_variant_t.operatorCY", "operatorCY", "_variant_t::operatorCY", "_variant_t::operatordouble", "operatorfloat", "operatorBYTE", "_variant_t.operatorDECIMAL", "_variant_t::operatorlong", "operatorIDispatch", "_variant_t.operatorBYTE", "operatorDECIMAL", "_variant_t.operator_bstr_t", "_variant_t::operatorDECIMAL", "_variant_t.operatorIUnknown", "_variant_t.operatorlong", "_variant_t::operatorIDispatch", "_variant_t::operatorIUnknown", "operatorIUnknown", "_variant_t.operatorbool", "_variant_t::operatorBYTE", "_variant_t.operatorfloat", "operator_bstr_t", "_variant_t::operatorbool", "operatorshort", "_variant_t::operatorshort", "_variant_t::operatorfloat", "_variant_t.operatorIDispatch", "_variant_t.operatorshort"]
helpviewer_keywords: ["extractors, _variant_t class", "operator CY", "operator IDispatch", "operator SHORT", "operator double", "operator long", "operator _bstr_t", "operator DECIMAL", "operator float", "operator bool", "operator BYTE", "operator IUnknown"]
ms.assetid: 33c1782f-045a-4673-9619-1d750efc83a9
---
# _variant_t Extractors

**Microsoft Specific**

Extract data from the encapsulated `VARIANT` object.

## Syntax

```
operator short( ) const;
operator long( ) const;
operator float( ) const;
operator double( ) const;
operator CY( ) const;
operator _bstr_t( ) const;
operator IDispatch*( ) const;
operator bool( ) const;
operator IUnknown*( ) const;
operator DECIMAL( ) const;
operator BYTE( ) const;
operator VARIANT() const throw();
operator char() const;
operator unsigned short() const;
operator unsigned long() const;
operator int() const;
operator unsigned int() const;
operator __int64() const;
operator unsigned __int64() const;
```

## Remarks

Extracts raw data from an encapsulated `VARIANT`. If the `VARIANT` is not already the proper type, `VariantChangeType` is used to attempt a conversion, and an error is generated upon failure:

- **operator short( )** Extracts a **`short`** integer value.

- **operator long( )** Extracts a **`long`** integer value.

- **operator float( )** Extracts a **`float`** numerical value.

- **operator double( )** Extracts a **`double`** integer value.

- **operator CY( )** Extracts a `CY` object.

- **operator bool( )** Extracts a **`bool`** value.

- **operator DECIMAL( )** Extracts a `DECIMAL` value.

- **operator BYTE( )** Extracts a `BYTE` value.

- **operator _bstr_t( )** Extracts a string, which is encapsulated in a `_bstr_t` object.

- **operator IDispatch\*( )** Extracts a dispinterface pointer from an encapsulated `VARIANT`. `AddRef` is called on the resulting pointer, so it is up to you to call `Release` to free it.

- **operator IUnknown\*( )** Extracts a COM interface pointer from an encapsulated `VARIANT`. `AddRef` is called on the resulting pointer, so it is up to you to call `Release` to free it.

**END Microsoft Specific**

## See also

[_variant_t Class](../cpp/variant-t-class.md)
