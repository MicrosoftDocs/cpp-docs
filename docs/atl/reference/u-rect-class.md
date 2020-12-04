---
description: "Learn more about: _U_RECT Class"
title: "_U_RECT Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::_U_RECT", "_U_RECT", "ATL._U_RECT"]
helpviewer_keywords: ["U_RECT class", "_U_RECT class"]
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
---
# _U_RECT Class

This argument adapter class allows either `RECT` pointers or references to be passed to a function that is implemented in terms of pointers.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
class _U_RECT
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[_U_RECT::_U_RECT](#_u_rect___u_rect)|The constructor.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Pointer to a `RECT`.|

## Remarks

The class defines two constructor overloads: one accepts a **RECT&** argument and the other accepts an `LPRECT` argument. The first constructor stores the address of the reference argument in the class's single data member, [m_lpRect](#_u_rect__m_lprect). The argument to the pointer constructor is stored directly without conversion.

## Requirements

**Header:** atlwin.h

## <a name="_u_rect__m_lprect"></a> _U_RECT::m_lpRect

The class holds the value passed to either of its constructors as a public `LPRECT` data member.

```
LPRECT m_lpRect;
```

## <a name="_u_rect___u_rect"></a> _U_RECT::_U_RECT

The address of the reference argument is stored in the class's single data member, [m_lpRect](#_u_rect__m_lprect).

```
_U_RECT(RECT& rc);
_U_RECT(LPRECT lpRect);
```

### Parameters

*rc*<br/>
A `RECT` reference.

*lpRect*<br/>
A `RECT` pointer.

### Remarks

The argument to the pointer constructor is stored directly without conversion.

## See also

[Class Overview](../../atl/atl-class-overview.md)
