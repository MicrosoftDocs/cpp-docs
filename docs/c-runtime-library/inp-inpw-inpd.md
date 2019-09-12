---
title: "_inp, _inpw, _inpd"
ms.date: "11/04/2016"
api_name: ["_inp", "_inpw", "_inpd"]
api_location: ["msvcrt.dll", "msvcr120.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr80.dll", "msvcr100.dll", "msvcr90.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["inpd", "_inp", "_inpw", "_inpd"]
helpviewer_keywords: ["inp function", "inpw function", "ports, I/O routines", "inpd function", "_inp function", "_inpd function", "I/O [CRT], port", "_inpw function"]
ms.assetid: 5d9c2e38-fc85-4294-86d5-7282cc02d1b3
---
# _inp, _inpw, _inpd

Inputs, from a port, a byte (`_inp`), a word (`_inpw`), or a double word (`_inpd`).

> [!IMPORTANT]
>  These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT.

> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```
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

#### Parameters

*port*<br/>
I/O port number.

## Return Value

The functions return the byte, word, or double word read from `port`. There is no error return.

## Remarks

The `_inp`, `_inpw`, and `_inpd` functions read a byte, a word, and a double word, respectively, from the specified input port. The input value can be any unsigned short integer in the range 0 - 65,535.

Because these functions read directly from an I/O port, they cannot be used in user code.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_inp`|\<conio.h>|
|`_inpw`|\<conio.h>|
|`_inpd`|\<conio.h>|

For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../c-runtime-library/crt-library-features.md).

## See also

[Console and Port I/O](../c-runtime-library/console-and-port-i-o.md)<br/>
[_outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)
