---
title: "_kbhit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_kbhit"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_kbhit", "kbhit", "conio/_kbhit"]
dev_langs: ["C++"]
helpviewer_keywords: ["keyboard input", "user input, checking for keyboard", "kbhit function", "console", "console, checking", "keyboards, keyboard input", "_kbhit function", "keyboards, checking input"]
ms.assetid: e82a1cc9-bbec-4150-b678-a7e433220fe4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _kbhit

Checks the console for keyboard input.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C

int _kbhit( void );
```

## Return Value

**_kbhit** returns a nonzero value if a key has been pressed. Otherwise, it returns 0.

## Remarks

The **_kbhit** function checks the console for a recent keystroke. If the function returns a nonzero value, a keystroke is waiting in the buffer. The program can then call **_getch** or **_getche** to get the keystroke.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_kbhit**|\<conio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_kbhit.c
// compile with: /c
/* This program loops until the user
* presses a key. If _kbhit returns nonzero, a
* keystroke is waiting in the buffer. The program
* can call _getch or _getche to get the keystroke.
*/

#include <conio.h>
#include <stdio.h>

int main( void )
{
   /* Display message until key is pressed. */
   while( !_kbhit() )
      _cputs( "Hit me!! " );

   /* Use _getch to throw key away. */
   printf( "\nKey struck was '%c'\n", _getch() );
}
```

### Sample Output

```Output
Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!! Hit me!!
Key struck was 'q'
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
