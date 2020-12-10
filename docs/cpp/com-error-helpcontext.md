---
description: "Learn more about: _com_error::HelpContext"
title: "_com_error::HelpContext"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::HelpContext"]
helpviewer_keywords: ["HelpContext method [C++]"]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
---
# _com_error::HelpContext

**Microsoft Specific**

Calls `IErrorInfo::GetHelpContext` function.

## Syntax

```
DWORD HelpContext( ) const throw( );
```

## Return Value

Returns the result of `IErrorInfo::GetHelpContext` for the `IErrorInfo` object recorded within the `_com_error` object. If no `IErrorInfo` object is recorded, it returns a zero.

## Remarks

Any failure while calling the `IErrorInfo::GetHelpContext` method is ignored.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
