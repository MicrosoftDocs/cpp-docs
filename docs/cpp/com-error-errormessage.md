---
description: "Learn more about: _com_error::ErrorMessage"
title: "_com_error::ErrorMessage"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::ErrorMessage"]
helpviewer_keywords: ["ErrorMessage method [C++]"]
ms.assetid: e47335b6-01af-4975-a841-121597479eb7
---
# _com_error::ErrorMessage

**Microsoft Specific**

Retrieves the string message for HRESULT stored in the `_com_error` object.

## Syntax

```
const TCHAR * ErrorMessage( ) const throw( );
```

## Return Value

Returns the string message for the HRESULT recorded within the `_com_error` object. If the HRESULT is a mapped 16-bit [wCode](../cpp/com-error-wcode.md), then a generic message "`IDispatch error #<wCode>`" is returned. If no message is found, then a generic message "`Unknown error #<hresult>`" is returned. The returned string is either a Unicode or multibyte string, depending on the state of the _UNICODE macro.

## Remarks

Retrieves the appropriate system message text for HRESULT recorded within the `_com_error` object. The system message text is obtained by calling the Win32 [FormatMessage](/windows/win32/api/winbase/nf-winbase-formatmessage) function. The string returned is allocated by the `FormatMessage` API, and it is released when the `_com_error` object is destroyed.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
