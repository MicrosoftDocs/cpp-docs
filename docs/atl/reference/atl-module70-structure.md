---
description: "Learn more about: _ATL_MODULE70 Structure"
title: "_ATL_MODULE70 Structure"
ms.date: "11/04/2016"
f1_keywords: ["_ATL_MODULE70", "ATL::_ATL_MODULE70", "ATL._ATL_MODULE70"]
helpviewer_keywords: ["ATL_MODULE70 structure", "_ATL_MODULE70 structure"]
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
---
# _ATL_MODULE70 Structure

Contains data used by every ATL module.

## Syntax

```cpp
struct _ATL_MODULE70 {
    UINT cbSize;
    LONG m_nLockCnt;
    _ATL_TERMFUNC_ELEM* m_pTermFuncs;
    CComCriticalSection m_csStaticDataInitAndTypeInfo;
};
```

## Members

`cbSize`<br/>
The size of the structure, used for versioning.

`m_nLockCnt`<br/>
Reference count to determine how long the module should stay alive.

`m_pTermFuncs`<br/>
Tracks functions that have been registered to be called when ATL shuts down.

`m_csStaticDataInitAndTypeInfo`<br/>
Used to coordinate access to internal data in multithreaded situations.

## Remarks

[_ATL_MODULE](atl-typedefs.md#_atl_module) is defined as a typedef of `_ATL_MODULE70`.

## Requirements

**Header:** atlbase.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)
