---
description: "Learn more about: _com_error::_com_error"
title: "_com_error::_com_error"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::_com_error"]
helpviewer_keywords: ["_com_error method [C++]"]
ms.assetid: 0a69e46c-caab-49ef-b091-eee401253ce6
---
# _com_error::_com_error

**Microsoft Specific**

Constructs a **_com_error** object.

## Syntax

```
_com_error(
   HRESULT hr,
   IErrorInfo* perrinfo = NULL,
   bool fAddRef=false) throw( );

_com_error( const _com_error& that ) throw( );
```

#### Parameters

*hr*<br/>
HRESULT information.

*perrinfo*<br/>
`IErrorInfo` object.

*fAddRef*<br/>
The default causes the constructor to call AddRef on a non-null `IErrorInfo` interface. This provides for correct reference counting in the common case where ownership of the interface is passed into the **_com_error** object, such as:

```cpp
throw _com_error(hr, perrinfo);
```

If you do not want your code to transfer ownership to the **_com_error** object, and the `AddRef` is required to offset the `Release` in the **_com_error** destructor, construct the object as follows:

```cpp
_com_error err(hr, perrinfo, true);
```

*that*<br/>
An existing **_com_error** object.

## Remarks

The first constructor creates a new object given an HRESULT and optional `IErrorInfo` object. The second creates a copy of an existing **_com_error** object.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
