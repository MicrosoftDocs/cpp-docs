---
description: "Learn more about: _ATL_WIN_MODULE70 Structure"
title: "_ATL_WIN_MODULE70 Structure"
ms.date: "11/04/2016"
f1_keywords: ["_ATL_WIN_MODULE70", "ATL::_ATL_WIN_MODULE70", "ATL._ATL_WIN_MODULE70"]
helpviewer_keywords: ["_ATL_WIN_MODULE70 structure", "ATL_WIN_MODULE70 structure"]
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
---
# _ATL_WIN_MODULE70 Structure

Used by windowing code in ATL.

## Syntax

```cpp
struct _ATL_WIN_MODULE70 {
    UNIT cbSize;
    CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData* m_pCreateWndList;
    CSimpleArray<ATOM> m_rgWindowClassAtoms;
};
```

## Members

`cbSize`<br/>
The size of the structure, used for versioning.

`m_csWindowCreate`<br/>
Used to serialize access to window registration code. Used internally by ATL.

`m_pCreateWndList`<br/>
Used to bind windows to their objects. Used internally by ATL.

`m_rgWindowClassAtoms`<br/>
Used to track window class registrations so that they can be properly unregistered at termination. Used internally by ATL.

## Remarks

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module) is defined as a typedef of `_ATL_WIN_MODULE70`.

## Requirements

**Header:** atlbase.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)
