---
description: "Learn more about: _ATL_COM_MODULE70 Structure"
title: "_ATL_COM_MODULE70 Structure"
ms.date: "11/04/2016"
f1_keywords: ["ATL::_ATL_COM_MODULE70", "ATL._ATL_COM_MODULE70", "_ATL_COM_MODULE70"]
helpviewer_keywords: ["_ATL_COM_MODULE70 structure", "ATL_COM_MODULE70 structure"]
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
---
# _ATL_COM_MODULE70 Structure

Used by COM-related code in ATL.

## Syntax

```cpp
struct _ATL_COM_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInstTypeLib;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapFirst;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapLast;
    CRITICAL_SECTION m_csObjMap;
};
```

## Members

`cbSize`<br/>
The size of the structure, used for versioning.

`m_hInstTypeLib`<br/>
The handle instance to the type library for this module.

`m_ppAutoObjMapFirst`<br/>
Address of the array element indicating the beginning of the object map entries for this module.

`m_ppAutoObjMapLast`<br/>
Address of the array element indicating the end of the object map entries for this module.

`m_csObjMap`<br/>
Critical section to serialize access to the object map entries. Used internally by ATL.

## Remarks

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module) is defined as a typedef of _ATL_COM_MODULE70.

## Requirements

**Header:** atlbase.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)
