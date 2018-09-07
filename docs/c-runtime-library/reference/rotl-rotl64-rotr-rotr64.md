---
title: "_rotl, _rotl64, _rotr, _rotr64 | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_rotr64", "_rotl", "_rotr", "_rotl64"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_rotr64", "rotl64", "_rotl64", "rotr64", "rotr", "_rotr", "_rotl", "rotl"]
dev_langs: ["C++"]
helpviewer_keywords: ["rotl64 function", "_rotl function", "rotr function", "rotr64 function", "_rotr function", "rotl function", "_rotl64 function", "rotating bits", "_rotr64 function", "bits, rotating"]
ms.assetid: cfce439b-366f-4584-8ab1-d527b13fcfc6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _rotl, _rotl64, _rotr, _rotr64

Rotates bits to the left (**_rotl**) or right (**_rotr**).

## Syntax

```C

unsigned int _rotl(
   unsigned int value,
   int shift
);
unsigned __int64 _rotl64(
   unsigned __int64 value,
   int shift
);
unsigned int _rotr(
   unsigned int value,
   int shift
);
unsigned __int64 _rotr64(
   unsigned __int64 value,
   int shift
);
```

### Parameters

*value*<br/>
Value to be rotated.

*shift*<br/>
Number of bits to shift.

## Return Value

The rotated value. There is no error return.

## Remarks

The **_rotl** and **_rotr** functions rotate the unsigned *value* by *shift* bits. **_rotl** rotates the value left. **_rotr** rotates the value right. Both functions wrap bits rotated off one end of *value* to the other end.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_rotl**, **_rotl64**|\<stdlib.h>|
|**_rotr**, **_rotr64**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_rot.c
/* This program shifts values to rotate an integer.
*/

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   unsigned val = 0x0fd93;
   __int64 val2 = 0x0101010101010101;

   printf( "0x%4.4x rotated left three times is 0x%4.4x\n",
           val, _rotl( val, 3 ) );
   printf( "0x%4.4x rotated right four times is 0x%4.4x\n",
           val, _rotr( val, 4 ) );

   printf( "%I64x rotated left three times is %I64x\n",
           val2, _rotl64( val2, 3 ) );
   printf( "%I64x rotated right four times is %I64x\n",
           val2, _rotr64( val2, 4 ) );
}
```

### Output

```Output
0xfd93 rotated left three times is 0x7ec98
0xfd93 rotated right four times is 0x30000fd9
101010101010101 rotated left three times is 808080808080808
101010101010101 rotated right four times is 1010101010101010
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_lrotl, _lrotr](lrotl-lrotr.md)<br/>
