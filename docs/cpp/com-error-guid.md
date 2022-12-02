---
description: "Learn more about: _com_error::GUID"
title: "_com_error::GUID"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::GUID", "_com_error::GUID"]
helpviewer_keywords: ["_com_error GUID method [C++]"]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
---
# `_com_error::GUID`

**Microsoft Specific**

Calls `IErrorInfo::GetGUID` function.

## Syntax

```cpp
GUID GUID() const throw();
```

## Return value

Returns the result of `IErrorInfo::GetGUID` for the `IErrorInfo` object recorded within the `_com_error` object. If no `IErrorInfo` object is recorded, it returns `GUID_NULL`.

## Remarks

Any failure while calling the `IErrorInfo::GetGUID` method is ignored.

**END Microsoft Specific**

## See also

[`_com_error` class](../cpp/com-error-class.md)
