---
description: "Learn more about: _U_STRINGorID Class"
title: "_U_STRINGorID Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL._U_STRINGorID", "ATL::_U_STRINGorID", "_U_STRINGorID"]
helpviewer_keywords: ["_U_STRINGorID class", "U_STRINGorID class"]
ms.assetid: 443cdc00-d265-4b27-8ef3-2feb95f3e5e3
---
# _U_STRINGorID Class

This argument adapter class allows either resource names (LPCTSTRs) or resource IDs (UINTs) to be passed to a function without requiring the caller to convert the ID to a string using the MAKEINTRESOURCE macro.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class _U_STRINGorID
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[_U_STRINGorID::_U_STRINGorID](#_u_stringorid___u_stringorid)|The constructor.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[_U_STRINGorID::m_lpstr](#_u_stringorid__m_lpstr)|The resource identifier.|

## Remarks

This class is designed for implementing wrappers to the Windows resource management API such as the [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea), [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw), and [LoadMenu](/windows/win32/api/winuser/nf-winuser-loadmenuw) functions, which accept an LPCTSTR argument that may be either the name of a resource or its ID.

The class defines two constructor overloads: one accepts a LPCTSTR argument and the other accepts a UINT argument. The UINT argument is converted to a resource type compatible with Windows resource-management functions using the MAKEINTRESOURCE macro and the result stored in the class's single data member, [m_lpstr](#_u_stringorid__m_lpstr). The argument to the LPCTSTR constructor is stored directly without conversion.

## Requirements

**Header:** atlwin.h

## <a name="_u_stringorid__m_lpstr"></a> _U_STRINGorID::m_lpstr

The class holds the value passed to either of its constructors as a public LPCTSTR data member.

```
LPCTSTR m_lpstr;
```

## <a name="_u_stringorid___u_stringorid"></a> _U_STRINGorID::_U_STRINGorID

The UINT constructor converts its argument to a resource type compatible with Windows resource-management functions using the MAKEINTRESOURCE macro and the result is stored in the class's single data member, [m_lpstr](#_u_stringorid__m_lpstr).

```
_U_STRINGorID(UINT nID);
_U_STRINGorID(LPCTSTR lpString);
```

### Parameters

*nID*<br/>
A resource ID.

*lpString*<br/>
A resource name.

### Remarks

The argument to the LPCTSTR constructor is stored directly without conversion.

## See also

[Class Overview](../../atl/atl-class-overview.md)
