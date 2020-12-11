---
description: "Learn more about: _bstr_t::_bstr_t"
title: "_bstr_t::_bstr_t"
ms.date: "11/04/2016"
f1_keywords: ["_bstr_t::_bstr_t"]
helpviewer_keywords: ["BSTR object", "_bstr_t method [C++]", "_bstr_t class"]
ms.assetid: 116d994e-5a72-4351-afbe-866c80b4c165
---
# _bstr_t::_bstr_t

**Microsoft Specific**

Constructs a `_bstr_t` object.

## Syntax

```
_bstr_t( ) throw( );
_bstr_t(
   const _bstr_t& s1
) throw( );
_bstr_t(
   const char* s2
);
_bstr_t(
   const wchar_t* s3
);
_bstr_t(
   const _variant_t& var
);
_bstr_t(
   BSTR bstr,
   bool fCopy
);
```

#### Parameters

*s1*<br/>
A `_bstr_t` object to be copied.

*s2*<br/>
A multibyte string.

*s3*<br/>
A Unicode string

*var*<br/>
A [_variant_t](../cpp/variant-t-class.md) object.

*bstr*<br/>
An existing `BSTR` object.

*fCopy*<br/>
If **`false`**, the *bstr* argument is attached to the new object without making a copy by calling `SysAllocString`.

## Remarks

The following table describes the `_bstr_t` constructors.

|Constructor|Description|
|-----------------|-----------------|
|`_bstr_t( )`|Constructs a default `_bstr_t` object that encapsulates a null `BSTR` object.|
|`_bstr_t( _bstr_t&`  `s1`  `)`|Constructs a `_bstr_t` object as a copy of another.<br /><br /> This is a *shallow* copy, which increments the reference count of the encapsulated `BSTR` object instead of creating a new one.|
|`_bstr_t( char*`  `s2`  `)`|Constructs a `_bstr_t` object by calling `SysAllocString` to create a new `BSTR` object and then encapsulates it.<br /><br /> This constructor first performs a multibyte to Unicode conversion.|
|`_bstr_t( wchar_t*`  `s3`  `)`|Constructs a `_bstr_t` object by calling `SysAllocString` to create a new `BSTR` object and then encapsulates it.|
|`_bstr_t( _variant_t&`  `var`  `)`|Constructs a `_bstr_t` object from a `_variant_t` object by first retrieving a `BSTR` object from the encapsulated VARIANT object.|
|`_bstr_t( BSTR`  `bstr` `, bool`  `fCopy`  `)`|Constructs a `_bstr_t` object from an existing `BSTR` (as opposed to a `wchar_t*` string). If *fCopy* is false, the supplied `BSTR` is attached to the new object without making a new copy with `SysAllocString`.<br /><br /> This constructor is used by wrapper functions in the type library headers to encapsulate and take ownership of a `BSTR` that is returned by an interface method.|

**END Microsoft Specific**

## See also

[_bstr_t Class](../cpp/bstr-t-class.md)<br/>
[_variant_t Class](../cpp/variant-t-class.md)
