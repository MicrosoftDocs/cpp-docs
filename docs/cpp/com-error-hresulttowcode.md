---
description: "Learn more about: _com_error::HRESULTToWCode"
title: "_com_error::HRESULTToWCode"
ms.date: "11/04/2016"
f1_keywords: ["_com_error::HRESULTToWCode"]
helpviewer_keywords: ["HRESULTToWCode method [C++]"]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
---
# _com_error::HRESULTToWCode

**Microsoft Specific**

Maps 32-bit HRESULT to 16-bit `wCode`.

## Syntax

```
static WORD HRESULTToWCode(
   HRESULT hr
) throw( );
```

#### Parameters

*hr*<br/>
The 32-bit HRESULT to be mapped to 16-bit `wCode`.

## Return Value

16-bit `wCode` mapped from the 32-bit HRESULT.

## Remarks

See [_com_error::WCode](../cpp/com-error-wcode.md) for more information.

**END Microsoft Specific**

## See also

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[_com_error Class](../cpp/com-error-class.md)
