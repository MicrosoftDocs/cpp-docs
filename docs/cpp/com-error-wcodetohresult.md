---
description: "Learn more about: _com_error::WCodeToHRESULT"
title: "_com_error::WCodeToHRESULT"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::WCodeToHRESULT", "_com_error::WCodeToHRESULT"]
helpviewer_keywords: ["_com_error WCodeToHRESULT method [C++]"]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
---
# `_com_error::WCodeToHRESULT`

**Microsoft Specific**

Maps 16-bit *`wCode`* to 32-bit `HRESULT`.

## Syntax

```cpp
static HRESULT WCodeToHRESULT(
   WORD wCode
) throw();
```

### Parameters

*`wCode`*\
The 16-bit *`wCode`* to be mapped to 32-bit `HRESULT`.

## Return value

32-bit `HRESULT` mapped from the 16-bit *`wCode`*.

## Remarks

See the [`WCode`](../cpp/com-error-wcode.md) member function.

**END Microsoft Specific**

## See also

[`_com_error::WCode`](../cpp/com-error-wcode.md)\
[`_com_error::HRESULTToWCode`](../cpp/com-error-hresulttowcode.md)\
[`_com_error` class](../cpp/com-error-class.md)
