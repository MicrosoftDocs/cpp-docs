---
description: "Learn more about: _variant_t::operator="
title: "_variant_t::operator="
ms.date: 03/23/2021
f1_keywords: ["_variant_t::operator="]
helpviewer_keywords: ["operator= [C++], variant", "operator = [C++], variant", "= operator [C++], with specific Visual C++ objects"]
---
# `_variant_t::operator=`

Assigns a new value to a `_variant_t` instance.

The `_variant_t` class and its `operator=` member are **Microsoft-specific**.

## Syntax

```cpp
_variant_t& operator=( const VARIANT& varSrc );
_variant_t& operator=( const VARIANT* pVarSrc );
_variant_t& operator=( const _variant_t& var_t_Src );
_variant_t& operator=( short sSrc );
_variant_t& operator=( long lSrc );
_variant_t& operator=( float fltSrc );
_variant_t& operator=( double dblSrc );
_variant_t& operator=( const CY& cySrc );
_variant_t& operator=( const _bstr_t& bstrSrc );
_variant_t& operator=( const wchar_t* wstrSrc );
_variant_t& operator=( const char* strSrc );
_variant_t& operator=( IDispatch* pDispSrc );
_variant_t& operator=( bool bSrc );
_variant_t& operator=( IUnknown* pSrc );
_variant_t& operator=( const DECIMAL& decSrc );
_variant_t& operator=( BYTE byteSrc );
_variant_t& operator=( char cSrc );
_variant_t& operator=( unsigned short usSrc );
_variant_t& operator=( unsigned long ulSrc );
_variant_t& operator=( int iSrc );
_variant_t& operator=( unsigned int uiSrc );
_variant_t& operator=( __int64 i8Src );
_variant_t& operator=( unsigned __int64 ui8Src );
```

### Parameters

*`varSrc`*\
A reference to a `VARIANT` from which to copy the content and `VT_*` type.

*`pVarSrc`*\
A pointer to a `VARIANT` from which to copy the content and `VT_*` type.

*`var_t_Src`*\
A reference to a `_variant_t` from which to copy the content and `VT_*` type.

*`sSrc`*\
A **`short`** integer value to copy. Given type `VT_BOOL` if `*this` is of type `VT_BOOL`. Otherwise, it's given type `VT_I2`.

*`lSrc`*\
A **`long`** integer value to copy. Given type `VT_BOOL` if `*this` is of type `VT_BOOL`. Given type `VT_ERROR` if `*this` is of type `VT_ERROR`. Otherwise, given type `VT_I4`.

*`fltSrc`*\
A **`float`** numerical value to copy. Given type `VT_R4`.

*`dblSrc`*\
A **`double`** numerical value to copy. Given type `VT_DATE` if `this` is of type `VT_DATE`. Otherwise, given type `VT_R8`.

*`cySrc`*\
A `CY` object to copy. Given type `VT_CY`.

*`bstrSrc`*\
A `BSTR` object to copy. Given type `VT_BSTR`.

*`wstrSrc`*\
A Unicode string to copy, stored as a `BSTR` and given type `VT_BSTR`.

*`strSrc`*\
A multibyte string to copy, stored as a `BSTR` and given type `VT_BSTR`.

*`pDispSrc`*\
An `IDispatch` pointer to copy with a call to `AddRef`. Given type `VT_DISPATCH`.

*`bSrc`*\
A **`bool`** value to copy. Given type `VT_BOOL`.

*`pSrc`*\
An `IUnknown` pointer to copy with a call to `AddRef`. Given type  `VT_UNKNOWN`.

*`decSrc`*\
A `DECIMAL` object to copy. Given type `VT_DECIMAL`.

*`byteSrc`*\
A `BYTE` value to copy. Given type `VT_UI1`.

*`cSrc`*\
A **`char`** value to copy. Given type `VT_I1`.

*`usSrc`*\
An **`unsigned short`** value to copy. Given type `VT_UI2`.

*`ulSrc`*\
An **`unsigned long`** value to copy. Given type `VT_UI4`.

*`iSrc`*\
An **`int`** value to copy. Given type `VT_INT`.

*`uiSrc`*\
An **`unsigned int`** value to copy. Given type `VT_UINT`.

*`i8Src`*\
An **`__int64`** or **`long long`** value to copy. Given type `VT_I8`.

*`ui8Src`*\
An **`unsigned __int64`** or **`unsigned long long`** value to copy. Given type `VT_UI8`.

## Remarks

The `operator=` assignment operator clears any existing value, which deletes object types, or calls `Release` for `IDispatch*` and `IUnknown*` types. Then, it copies a new value into the `_variant_t` object. It changes the `_variant_t` type to match the assigned value, except as noted for **`short`**, **`long`**, and **`double`** arguments. Value types are copied directly. A `VARIANT` or `_variant_t` pointer or reference argument copies the assigned object's contents and type. Other pointer or reference type arguments create a copy of the assigned object. The assignment operator calls `AddRef` for `IDispatch*` and `IUnknown*` arguments.

`operator=` invokes [`_com_raise_error`](../cpp/com-raise-error.md) if an error occurs.

`operator=` returns a reference to the updated `_variant_t` object.

## See also

[`_variant_t` class](../cpp/variant-t-class.md)
