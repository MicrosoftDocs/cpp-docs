---
description: "Learn more about: _com_error::WCode"
title: "_com_error::WCode"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::WCode", "_com_error::WCode"]
helpviewer_keywords: ["_com_error WCode method [C++]"]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
---
# `_com_error::WCode`

**Microsoft Specific**

Retrieves the 16-bit error code mapped into the encapsulated `HRESULT`.

## Syntax

```cpp
WORD WCode ( ) const throw();
```

## Return value

If the `HRESULT` is within the range 0x80040200 to 0x8004FFFF, the `WCode` method returns the `HRESULT` minus 0x80040200; otherwise, it returns zero.

## Remarks

The `WCode` method is used to undo a mapping that happens in the COM support code. The wrapper for a `dispinterface` property or method calls a support routine that packages the arguments and calls `IDispatch::Invoke`. Upon return, if a failure `HRESULT` of `DISP_E_EXCEPTION` is returned, the error information is retrieved from the `EXCEPINFO` structure passed to `IDispatch::Invoke`. The error code can either be a 16-bit value stored in the `wCode` member of the `EXCEPINFO` structure or a full 32-bit value in the `scode` member of the `EXCEPINFO` structure. If a 16-bit `wCode` is returned, it must first be mapped to a 32-bit failure `HRESULT`.

**END Microsoft Specific**

## See also

[`_com_error::HRESULTToWCode`](../cpp/com-error-hresulttowcode.md)\
[`_com_error::WCodeToHRESULT`](../cpp/com-error-wcodetohresult.md)\
[`_com_error` class](../cpp/com-error-class.md)
