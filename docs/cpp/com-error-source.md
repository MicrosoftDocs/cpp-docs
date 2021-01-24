---
description: "Learn more about: _com_error::Source"
title: "_com_error::Source"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::Source"]
helpviewer_keywords: ["Source method [C++]"]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
---
# _com_error::Source

**Microsoft Specific**

Calls `IErrorInfo::GetSource` function.

## Syntax

```
_bstr_t Source() const;
```

## Return Value

Returns the result of `IErrorInfo::GetSource` for the `IErrorInfo` object recorded within the `_com_error` object. The resulting `BSTR` is encapsulated in a `_bstr_t` object. If no `IErrorInfo` is recorded, it returns an empty `_bstr_t`.

## Remarks

Any failure while calling the `IErrorInfo::GetSource` method is ignored.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
