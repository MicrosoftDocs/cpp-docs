---
description: "Learn more about: __min"
title: "__min"
ms.date: "04/05/2018"
api_name: ["__min"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__min", "min", "_min"]
helpviewer_keywords: ["__min macro", "min macro", "minimum macro", "_min macro"]
ms.assetid: 2037f26c-b48a-4a69-8870-22519f052a3c
---
# __min

A preprocessor macro that returns the smaller of two values.

## Syntax

```C
#define __min(a,b) (((a) < (b)) ? (a) : (b))
```

### Parameters

*a*, *b*<br/>
Values of any type that the **<** operator works on.

## Return Value

The smaller of the two arguments.

## Remarks

The **__min** macro compares two values and returns the value of the smaller one. The arguments can be of any numeric data type, signed or unsigned. Both arguments and the return value must be of the same data type.

The argument returned is evaluated twice by the macro. This can lead to unexpected results if the argument is an expression that alters its value when it is evaluated, such as `*p++`.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**__min**|\<stdlib.h>|

## Example

```C
// crt_minmax.c

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   int a = 10;
   int b = 21;

   printf( "The larger of %d and %d is %d\n",  a, b, __max( a, b ) );
   printf( "The smaller of %d and %d is %d\n", a, b, __min( a, b ) );
}
```

```Output
The larger of 10 and 21 is 21
The smaller of 10 and 21 is 10
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[__max](max.md)<br/>
