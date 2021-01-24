---
description: "Learn more about: _com_ptr_t::CreateInstance"
title: "_com_ptr_t::CreateInstance"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::CreateInstance"]
helpviewer_keywords: ["CreateInstance method [C++]"]
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
---
# _com_ptr_t::CreateInstance

**Microsoft Specific**

Creates a new instance of an object given a `CLSID` or `ProgID`.

## Syntax

```
HRESULT CreateInstance(
   const CLSID& rclsid,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
HRESULT CreateInstance(
   LPCWSTR clsidString,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
HRESULT CreateInstance(
   LPCSTR clsidStringA,
   IUnknown* pOuter=NULL,
   DWORD dwClsContext = CLSCTX_ALL
) throw( );
```

#### Parameters

*rclsid*<br/>
The `CLSID` of an object.

*clsidString*<br/>
A Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

*clsidStringA*<br/>
A multibyte string, using the ANSI code page, that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

*dwClsContext*<br/>
Context for running executable code.

*pOuter*<br/>
The outer unknown for [aggregation](../atl/aggregation.md).

## Remarks

These member functions call `CoCreateInstance` to create a new COM object and then queries for this smart pointer's interface type. The resulting pointer is then encapsulated within this `_com_ptr_t` object. `Release` is called to decrement the reference count for the previously encapsulated pointer. This routine returns the HRESULT to indicate success or failure.

- **CreateInstance(**  *rclsid* **,**  *dwClsContext*  **)** Creates a new running instance of an object given a `CLSID`.

- **CreateInstance(**  *clsidString* **,**  *dwClsContext*  **)** Creates a new running instance of an object given a Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

- **CreateInstance(**  *clsidStringA* **,**  *dwClsContext*  **)** Creates a new running instance of an object given a multibyte character string that holds either a `CLSID` (starting with "**{**") or a `ProgID`. Calls [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), which assumes that the string is in the ANSI code page rather than an OEM code page.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
