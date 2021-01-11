---
description: "Learn more about: _com_error::HelpFile"
title: "_com_error::HelpFile"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::HelpFile"]
helpviewer_keywords: ["HelpFile method [C++]"]
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
---
# _com_error::HelpFile

**Microsoft Specific**

Calls `IErrorInfo::GetHelpFile` function.

## Syntax

```
_bstr_t HelpFile() const;
```

## Return Value

Returns the result of `IErrorInfo::GetHelpFile` for the `IErrorInfo` object recorded within the `_com_error` object. The resulting BSTR is encapsulated in a `_bstr_t` object. If no `IErrorInfo` is recorded, it returns an empty `_bstr_t`.

## Remarks

Any failure while calling the `IErrorInfo::GetHelpFile` method is ignored.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
