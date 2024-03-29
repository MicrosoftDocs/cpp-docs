---
description: "Learn more about: _com_error::Description"
title: "_com_error::Description"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::Description", "_com_error::Description"]
helpviewer_keywords: ["_com_error Description method [C++]"]
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
---
# `_com_error::Description`

**Microsoft Specific**

Calls `IErrorInfo::GetDescription` function.

## Syntax

```cpp
_bstr_t Description() const;
```

## Return value

Returns the result of `IErrorInfo::GetDescription` for the `IErrorInfo` object recorded within the `_com_error` object. The resulting `BSTR` is encapsulated in a `_bstr_t` object. If no `IErrorInfo` is recorded, it returns an empty `_bstr_t`.

## Remarks

Calls the `IErrorInfo::GetDescription` function and retrieves `IErrorInfo` recorded within the `_com_error` object. Any failure while calling the `IErrorInfo::GetDescription` method is ignored.

**END Microsoft Specific**

## See also

[`_com_error` class](../cpp/com-error-class.md)
