---
description: "Learn more about: _com_error::HelpContext"
title: "_com_error::HelpContext"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::HelpContext", "_com_error::HelpContext"]
helpviewer_keywords: ["_com_error HelpContext method [C++]"]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
---
# `_com_error::HelpContext`

**Microsoft Specific**

Calls `IErrorInfo::GetHelpContext` function.

## Syntax

```cpp
DWORD HelpContext() const throw();
```

## Return value

Returns the result of `IErrorInfo::GetHelpContext` for the `IErrorInfo` object recorded within the `_com_error` object. If no `IErrorInfo` object is recorded, it returns a zero.

## Remarks

Any failure while calling the `IErrorInfo::GetHelpContext` method is ignored.

**END Microsoft Specific**

## See also

[`_com_error` class](../cpp/com-error-class.md)
