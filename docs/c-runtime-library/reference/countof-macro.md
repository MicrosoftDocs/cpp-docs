---
description: "Learn more about: _countof Macro"
title: "_countof Macro"
ms.date: "03/22/2018"
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_countof", "countof"]
helpviewer_keywords: ["countof macro", "_countof macro"]
ms.assetid: 86198767-f7e5-4beb-898d-3cbbf60350a3
---
# _countof Macro

Computes the number of elements in a statically-allocated array.

## Syntax

```C
#define _countof(array) (sizeof(array) / sizeof(array[0]))
```

### Parameters

*array*<br/>
The name of an array.

## Return Value

The number of elements in the array, expressed as a **size_t**.

## Remarks

**_countof** is implemented as a function-like preprocessor macro. The C++ version has extra template machinery to detect at compile time if a pointer is passed instead of a statically declared array.

Ensure that *array* is actually an array, not a pointer. In C, **_countof** produces erroneous results if *array* is a pointer. In C++, **_countof** fails to compile if *array* is a pointer.  An array passed as a parameter to a function *decays to a pointer*, which means that within the function, you can't use **_countof** to determine the extent of the array.

## Requirements

|Macro|Required header|
|-----------|---------------------|
|**_countof**|\<stdlib.h>|

## Example

```cpp
// crt_countof.cpp
#define _UNICODE
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

int main( void )
{
   _TCHAR arr[20], *p;
   printf( "sizeof(arr) = %zu bytes\n", sizeof(arr) );
   printf( "_countof(arr) = %zu elements\n", _countof(arr) );
   // In C++, the following line would generate a compile-time error:
   // printf( "%zu\n", _countof(p) ); // error C2784 (because p is a pointer)

   _tcscpy_s( arr, _countof(arr), _T("a string") );
   // unlike sizeof, _countof works here for both narrow- and wide-character strings
}
```

```Output
sizeof(arr) = 40 bytes
_countof(arr) = 20 elements
```

## See also

[sizeof Operator](../../cpp/sizeof-operator.md)<br/>
