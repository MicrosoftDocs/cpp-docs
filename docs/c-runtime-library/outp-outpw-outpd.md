---
title: "outp, outpw, _outp, _outpw, _outpd"
description: "Describes the obsolete and removed outp, outpw, _outp, _outpw, and _outpd functions of the Microsoft C runtime library (CRT)."
ms.date: "12/09/2019"
api_name: ["_outpd", "_outp", "_outpw", "outp", "outpw"]
api_location: ["msvcrt.dll", "msvcr100.dll", "msvcr120.dll", "msvcr90.dll", "msvcr110_clr0400.dll", "msvcr110.dll", "msvcr80.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_outpw", "_outpd", "_outp", "outp", "outpw", "outpd"]
helpviewer_keywords: ["outpw function", "words", "_outpd function", "outpd function", "outp function", "ports, writing bytes at", "bytes, writing to ports", "words, writing to ports", "double words", "double words, writing to ports", "_outpw function", "_outp function"]
ms.assetid: c200fe22-41f6-46fd-b0be-ebb805b35181
---
# outp, outpw, _outp, _outpw, _outpd

Outputs, at a port, a byte (`outp`, `_outp`), a word (`outpw`, `_outpw`), or a double word (`_outpd`).

> [!IMPORTANT]
> These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT.  
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```cpp
int _outp(
   unsigned short port,
   int databyte
);
unsigned short _outpw(
   unsigned short port,
   unsigned short dataword
);
unsigned long _outpd(
   unsigned short port,
   unsigned long dataword
);
```

### Parameters

*port*\
Port number.

*databyte, dataword*\
Output values.

## Return Value

The functions return the data output. There is no error return.

## Remarks

The `_outp`, `_outpw`, and `_outpd` functions write a byte, a word, and a double word, respectively, to the specified output port. The *port* argument can be any unsigned integer in the range 0 - 65,535; *databyte* can be any integer in the range 0 - 255; and *dataword* can be any value in the range of an integer, an unsigned short integer, and an unsigned long integer, respectively.

Because these functions write directly to an I/O port, they cannot be used in user code. For information about using I/O ports in these operating systems, search for "Serial Communications in Win32" at MSDN.

The `outp` and `outpw` names are older, deprecated names for the `_outp` and `_outpw` functions. For more information, see [POSIX function names](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_outp`|\<conio.h>|
|`_outpw`|\<conio.h>|
|`_outpd`|\<conio.h>|

For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../c-runtime-library/crt-library-features.md).

## See also

[Console and Port I/O](../c-runtime-library/console-and-port-i-o.md)\
[inp, inpw, _inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)
