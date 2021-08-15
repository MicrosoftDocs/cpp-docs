---
description: "Learn more about: _AtlCreateWndData Structure"
title: "_AtlCreateWndData Structure"
ms.date: "11/04/2016"
f1_keywords: ["ATL::_AtlCreateWndData", "ATL._AtlCreateWndData", "_AtlCreateWndData"]
helpviewer_keywords: ["_AtlCreateWndData structure", "AtlCreateWndData structure"]
ms.assetid: 76ed5382-bfbf-4b8b-8a29-912688dfd2ae
---
# _AtlCreateWndData Structure

This structure contains class instance data in windowing code in ATL.

## Syntax

```cpp
    struct _AtlCreateWndData{
    void* m_pThis;
    DWORD m_dwThreadID;
    _AtlCreateWndData* m_pNext;
};
```

## Members

`m_pThis`<br/>
The **`this`** pointer used to get access to the class instance in window procedures.

`m_dwThreadID`<br/>
The thread ID of the current class instance.

`m_pNext`<br/>
Pointer to the next `_AtlCreateWndData` object.

## Requirements

**Header:** atlbase.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)
