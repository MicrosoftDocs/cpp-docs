---
title: "_lrotl, _lrotr | Microsoft Docs"
ms.custom: ""
ms.date: "04/04/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_lrotl", "_lrotr"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["lrotr", "lrotl", "_lrotr", "_lrotl"]
dev_langs: ["C++"]
helpviewer_keywords: ["lrotl function", "bits", "_lrotr function", "lrotr function", "rotating bits", "_lrotl function", "bits, rotating"]
ms.assetid: d42f295b-35f9-49d2-9ee4-c66896ffe68e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _lrotl, _lrotr

Rotates bits to the left (**_lrotl**) or right (**_lrotr**).

## Syntax

```C
unsigned long _lrotl( unsigned long value, int shift );
unsigned long _lrotr( unsigned long value, int shift );
```

### Parameters

*value*<br/>
Value to be rotated.

*shift*<br/>
Number of bits to shift *value*.

## Return Value

Both functions return the rotated value. There is no error return.

## Remarks

The **_lrotl** and **_lrotr** functions rotate *value* by *shift* bits. **_lrotl** rotates the value left, toward more significant bits. **_lrotr** rotates the value right, toward less significant bits. Both functions wrap bits rotated off one end of *value* to the other end.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_lrotl**, **_lrotr**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_lrot.c

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   unsigned long val = 0x0fac35791;

   printf( "0x%8.8lx rotated left eight bits is 0x%8.8lx\n",
            val, _lrotl( val, 8 ) );
   printf( "0x%8.8lx rotated right four bits is 0x%8.8lx\n",
            val, _lrotr( val, 4 ) );
}
```

```Output
0xfac35791 rotated left eight bits is 0xc35791fa
0xfac35791 rotated right four bits is 0x1fac3579
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_rotl, _rotl64, _rotr, _rotr64](rotl-rotl64-rotr-rotr64.md)<br/>
