---
description: "Learn more about: terminate (CRT)"
title: "terminate (CRT)"
ms.date: "4/2/2020"
api_name: ["terminate", "_o_terminate"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["terminate"]
helpviewer_keywords: ["terminate function", "exception handling, termination"]
ms.assetid: 90e67402-08e9-4b2a-962c-66a8afd3ccb4
---
# terminate (CRT)

Calls [abort](abort.md) or a function you specify using **set_terminate**.

## Syntax

```C
void terminate( void );
```

## Remarks

The **terminate** function is used with C++ exception handling and is called in the following cases:

- A matching catch handler cannot be found for a thrown C++ exception.

- An exception is thrown by a destructor function during stack unwind.

- The stack is corrupted after throwing an exception.

**terminate** calls [abort](abort.md) by default. You can change this default by writing your own termination function and calling **set_terminate** with the name of your function as its argument. **terminate** calls the last function given as an argument to **set_terminate**. For more information, see [Unhandled C++ Exceptions](../../cpp/unhandled-cpp-exceptions.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**terminate**|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```cpp
// crt_terminate.cpp
// compile with: /EHsc
#include <eh.h>
#include <process.h>
#include <iostream>
using namespace std;

void term_func();

int main()
{
    int i = 10, j = 0, result;
    set_terminate( term_func );
    try
    {
        if( j == 0 )
            throw "Divide by zero!";
        else
            result = i/j;
    }
    catch( int )
    {
        cout << "Caught some integer exception.\n";
    }
    cout << "This should never print.\n";
}

void term_func()
{
    cout << "term_func() was called by terminate().\n";

    // ... cleanup tasks performed here

    // If this function does not exit, abort is called.

    exit(-1);
}
```

```Output
term_func() was called by terminate().
```

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[unexpected](unexpected-crt.md)<br/>
