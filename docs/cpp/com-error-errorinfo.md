---
description: "Learn more about: _com_error::ErrorInfo"
title: "_com_error::ErrorInfo"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::ErrorInfo"]
helpviewer_keywords: ["ErrorInfo method [C++]"]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
---
# _com_error::ErrorInfo

**Microsoft Specific**

Retrieves the `IErrorInfo` object passed to the constructor.

## Syntax

```
IErrorInfo * ErrorInfo( ) const throw( );
```

## Return Value

Raw `IErrorInfo` item passed into the constructor.

## Remarks

Retrieves the encapsulated `IErrorInfo` item in a `_com_error` object, or NULL if no `IErrorInfo` item is recorded. The caller must call `Release` on the returned object when finished using it.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
