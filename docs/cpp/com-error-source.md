---
description: "Learn more about: _com_error::Source"
title: "_com_error::Source"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::Source", "_com_error::Source"]
helpviewer_keywords: ["_com_error Source method [C++]"]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
---
# `_com_error::Source`

**Microsoft Specific**

Calls `IErrorInfo::GetSource` function.

## Syntax

```cpp
_bstr_t Source() const;
```

## Return value

Returns the result of `IErrorInfo::GetSource` for the `IErrorInfo` object recorded within the `_com_error` object. The resulting `BSTR` is encapsulated in a `_bstr_t` object. If no `IErrorInfo` is recorded, it returns an empty `_bstr_t`.

## Remarks

Any failure while calling the `IErrorInfo::GetSource` method is ignored.

**END Microsoft Specific**

## See also

[`_com_error` class](../cpp/com-error-class.md)
