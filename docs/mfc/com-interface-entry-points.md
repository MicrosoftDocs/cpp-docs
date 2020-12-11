---
description: "Learn more about: COM Interface Entry Points"
title: "COM Interface Entry Points"
ms.date: "03/27/2019"
helpviewer_keywords: ["entry points, COM interfaces", "state management, OLE/COM interfaces", "MFC COM, COM interface entry points", "OLE, interface entry points", "MFC, managing state data", "COM interfaces, entry points"]
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
---
# COM Interface Entry Points

For member functions of a COM interface, use the `METHOD_PROLOGUE` macro to maintain the proper global state when calling methods of an exported interface.

Typically, member functions of interfaces implemented by `CCmdTarget`-derived objects already use this macro to provide automatic initialization of the `pThis` pointer. For example:

[!code-cpp[NVC_MFCConnectionPoints#5](codesnippet/cpp/com-interface-entry-points_1.cpp)]

For additional information, see [Technical Note 38](tn038-mfc-ole-iunknown-implementation.md) on MFC/OLE `IUnknown` implementation.

The `METHOD_PROLOGUE` macro is defined as:

```cpp
#define METHOD_PROLOGUE(theClass, localClass) \
    theClass* pThis = \
    ((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \
    AFX_MANAGE_STATE(pThis->m_pModuleState) \
```

The portion of the macro concerned with managing the global state is:

`AFX_MANAGE_STATE( pThis->m_pModuleState )`

In this expression, *m_pModuleState* is assumed to be a member variable of the containing object. It is implemented by the `CCmdTarget` base class and is initialized to the appropriate value by `COleObjectFactory`, when the object is instantiated.

## See also

[Managing the State Data of MFC Modules](managing-the-state-data-of-mfc-modules.md)
