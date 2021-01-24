---
description: "Learn more about: _com_error::Error"
title: "_com_error::Error"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::Error", "Error"]
helpviewer_keywords: ["Error method [C++]"]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
---
# _com_error::Error

**Microsoft Specific**

Retrieves the HRESULT passed to the constructor.

## Syntax

```
HRESULT Error( ) const throw( );
```

## Return Value

Raw HRESULT item passed into the constructor.

## Remarks

Retrieves the encapsulated HRESULT item in a `_com_error` object.

**END Microsoft Specific**

## See also

[_com_error Class](../cpp/com-error-class.md)
