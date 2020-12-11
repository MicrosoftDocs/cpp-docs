---
description: "Learn more about: _ATL_BASE_MODULE70 Structure"
title: "_ATL_BASE_MODULE70 Structure"
ms.date: "11/04/2016"
f1_keywords: ["ATL::_ATL_BASE_MODULE70", "ATL._ATL_BASE_MODULE70", "_ATL_BASE_MODULE70"]
helpviewer_keywords: ["ATL_BASE_MODULE70 structure", "_ATL_BASE_MODULE70 structure"]
ms.assetid: 4539282f-15b8-4d7c-aafa-a85dc56f4980
---
# _ATL_BASE_MODULE70 Structure

Used by any project that uses ATL.

## Syntax

```cpp
struct _ATL_BASE_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInst;
    HINSTANCE m_hInstResource;
    bool m_bNT5orWin98;
    DWORD dwAtlBuildVer;
    GUID* pguidVer;
    CRITICAL_SECTION m_csResource;
    CSimpleArray<HINSTANCE> m_rgResourceInstance;
};
```

## Members

`cbSize`<br/>
The size of the structure, used for versioning.

`m_hInst`<br/>
The `hInstance` for this module (either exe or dll).

`m_hInstResource`<br/>
Default instance resource handle.

`m_bNT5orWin98`<br/>
Operating system version information. Used internally by ATL.

`dwAtlBuildVer`<br/>
Stores the version of ATL. Currently 0x0700.

`pguidVer`<br/>
ATL's internal GUID.

`m_csResource`<br/>
Used to synchronize access to the `m_rgResourceInstance` array. Used internally by ATL.

`m_rgResourceInstance`<br/>
Array used to search for resources in all the resource instances of which ATL is aware. Used internally by ATL.

## Remarks

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module) is defined as a typedef of _ATL_BASE_MODULE70.

## Requirements

**Header:** atlcore.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)
