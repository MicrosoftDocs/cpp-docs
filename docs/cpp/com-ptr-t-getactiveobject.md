---
description: "Learn more about: _com_ptr_t::GetActiveObject"
title: "_com_ptr_t::GetActiveObject"
ms.date: "11/04/2016"
f1_keywords: ["_com_ptr_t::GetActiveObject"]
helpviewer_keywords: ["GetActiveObject method [C++]"]
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
---
# _com_ptr_t::GetActiveObject

**Microsoft Specific**

Attaches to an existing instance of an object given a `CLSID` or `ProgID`.

## Syntax

```
HRESULT GetActiveObject(
   const CLSID& rclsid
) throw( );
HRESULT GetActiveObject(
   LPCWSTR clsidString
) throw( );
HRESULT GetActiveObject(
   LPCSTR clsidStringA
) throw( );
```

#### Parameters

*rclsid*<br/>
The `CLSID` of an object.

*clsidString*<br/>
A Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

*clsidStringA*<br/>
A multibyte string, using the ANSI code page, that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

## Remarks

These member functions call **GetActiveObject** to retrieve a pointer to a running object that has been registered with OLE and then queries for this smart pointer's interface type. The resulting pointer is then encapsulated within this `_com_ptr_t` object. `Release` is called to decrement the reference count for the previously encapsulated pointer. This routine returns the HRESULT to indicate success or failure.

- **GetActiveObject(**  `rclsid`  **)** Attaches to an existing instance of an object given a `CLSID`.

- **GetActiveObject(**  `clsidString`  **)** Attaches to an existing instance of an object given a Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.

- **GetActiveObject(**  `clsidStringA`  **)** Attaches to an existing instance of an object given a multibyte character string that holds either a `CLSID` (starting with "**{**") or a `ProgID`. Calls [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar), which assumes that the string is in the ANSI code page rather than an OEM code page.

**END Microsoft Specific**

## See also

[_com_ptr_t Class](../cpp/com-ptr-t-class.md)
