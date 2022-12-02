---
title: "inp, _inp, inpw, _inpw, _inpd"
description: "Describes the obsolete and removed inp, _inp, inpw, _inpw, and _inpd functions of the Microsoft C runtime library (CRT)."
ms.date: "12/09/2019"
api_name: ["inp", "inpw", "_inp", "_inpw", "_inpd"]
api_location: ["msvcrt.dll", "msvcr120.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr80.dll", "msvcr100.dll", "msvcr90.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["inp", "inpw", "_inp", "_inpw", "_inpd"]
helpviewer_keywords: ["inp function", "inpw function", "ports, I/O routines", "inpd function", "_inp function", "_inpd function", "I/O [CRT], port", "_inpw function"]
ms.assetid: 5d9c2e38-fc85-4294-86d5-7282cc02d1b3
---
# `inp`, `_inp`, `inpw`, `_inpw`, `_inpd`

Inputs, from a port, a byte (**`inp`**, **`_inp`**), a word (**`inpw`**, **`_inpw`**), or a double word (**`_inpd`**).

> [!IMPORTANT]
> These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT.\
> This API can't be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```cpp
int _inp(
   unsigned short port
);
unsigned short _inpw(
   unsigned short port
);
unsigned long _inpd(
   unsigned short port
);
```

### Parameters

*`port`*\
I/O port number.

## Return value

The functions return the byte, word, or double word read from *`port`*. There's no error return.

## Remarks

The **`_inp`**, **`_inpw`**, and **`_inpd`** functions read a byte, a word, and a double word, respectively, from the specified input port. The input value can be any unsigned short integer in the range 0 - 65,535.

Because these functions read directly from an I/O port, they can't be used in user code.

The **`inp`** and **`inpw`** names are older, deprecated names for the **`_inp`** and **`_inpw`** functions. For more information, see [POSIX function names](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).

## Requirements

| Routine | Required header |
|---|---|
| **`_inp`** | \<conio.h> |
| **`_inpw`** | \<conio.h> |
| **`_inpd`** | \<conio.h> |

For more compatibility information, see [Compatibility](./compatibility.md).

## Libraries

All versions of the [C run-time libraries](./crt-library-features.md).

## See also

[Console and port I/O](./console-and-port-i-o.md)\
[`outp`, `outpw`, `_outp`, `_outpw`, `_outpd`](./outp-outpw-outpd.md)
