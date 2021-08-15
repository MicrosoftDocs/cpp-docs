---
description: "Learn more about: _U_MENUorID Class"
title: "_U_MENUorID Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL._U_MENUorID", "ATL::_U_MENUorID", "_U_MENUorID"]
helpviewer_keywords: ["U_MENUorID class", "_U_MENUorID class"]
ms.assetid: cfc8032b-61b4-4a68-ba3a-92b82500ccae
---
# _U_MENUorID Class

This class provides wrappers for `CreateWindow` and `CreateWindowEx`.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class _U_MENUorID
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[_U_MENUorID::_U_MENUorID](#_u_menuorid___u_menuorid)|The constructor.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[_U_MENUorID::m_hMenu](#_u_menuorid__m_hmenu)|A handle to a menu.|

## Remarks

This argument adapter class allows either IDs (UINTs) or menu handles (HMENUs) to be passed to a function without requiring an explicit cast on the part of the caller.

This class is designed for implementing wrappers to the Windows API, particularly the [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) and [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) functions, both of which accept an HMENU argument that may be a child window identifier (UINT) rather than a menu handle. For example, you can see this class in use as a parameter to [CWindowImpl::Create](cwindowimpl-class.md#create).

The class defines two constructor overloads: one accepts a UINT argument and the other accepts an HMENU argument. The UINT argument is just cast to an HMENU in the constructor and the result stored in the class's single data member, [m_hMenu](#_u_menuorid__m_hmenu). The argument to the HMENU constructor is stored directly without conversion.

## Requirements

**Header:** atlwin.h

## <a name="_u_menuorid__m_hmenu"></a> _U_MENUorID::m_hMenu

The class holds the value passed to either of its constructors as a public HMENU data member.

```
HMENU m_hMenu;
```

## <a name="_u_menuorid___u_menuorid"></a> _U_MENUorID::_U_MENUorID

The UINT argument is just cast to an HMENU in the constructor and the result stored in the class's single data member, [m_hMenu](#_u_menuorid__m_hmenu).

```
_U_MENUorID(UINT nID);
_U_MENUorID(HMENU hMenu);
```

### Parameters

*nID*<br/>
A child window identifier.

*hMenu*<br/>
A menu handle.

### Remarks

The argument to the HMENU constructor is stored directly without conversion.

## See also

[Class Overview](../../atl/atl-class-overview.md)
