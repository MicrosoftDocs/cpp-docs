---
description: "Learn more about: _com_error::HRESULTToWCode"
title: "_com_error::HRESULTToWCode"
ms.date: 11/17/2022
f1_keywords: ["COMDEF/_com_error::HRESULTToWCode", "_com_error::HRESULTToWCode"]
helpviewer_keywords: ["_com_error HRESULTToWCode method [C++]"]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
---
# `_com_error::HRESULTToWCode`

**Microsoft Specific**

Maps 32-bit `HRESULT` to 16-bit `wCode`.

## Syntax

```cpp
static WORD HRESULTToWCode(
   HRESULT hr
) throw();
```

### Parameters

*`hr`*\
The 32-bit `HRESULT` to be mapped to 16-bit `wCode`.

## Return value

16-bit `wCode` mapped from the 32-bit `HRESULT`.

## Remarks

For more information, see [`_com_error::WCode`](../cpp/com-error-wcode.md).

**END Microsoft Specific**

## See also

[`_com_error::WCode`](../cpp/com-error-wcode.md)\
[`_com_error::WCodeToHRESULT`](../cpp/com-error-wcodetohresult.md)\
[`_com_error` class](../cpp/com-error-class.md)
