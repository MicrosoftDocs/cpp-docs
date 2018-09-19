---
title: "_ATL_WIN_MODULE70 Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["_ATL_WIN_MODULE70", "ATL::_ATL_WIN_MODULE70", "ATL._ATL_WIN_MODULE70"]
dev_langs: ["C++"]
helpviewer_keywords: ["_ATL_WIN_MODULE70 structure", "ATL_WIN_MODULE70 structure"]
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _ATL_WIN_MODULE70 Structure

Used by windowing code in ATL.

## Syntax

```
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

## See Also

[Classes and structs](../../atl/reference/atl-classes.md)

